/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  *
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  *
  *  http://aws.amazon.com/apache2.0
  *
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#include <aws/identity-management/auth/CognitoCachingCredentialsProvider.h>
#include <aws/identity-management/auth/PersistentCognitoIdentityProvider.h>
#include <aws/cognito-identity/model/GetCredentialsForIdentityRequest.h>
#include <aws/cognito-identity/model/GetIdRequest.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/DateTime.h>

using namespace Aws::Auth;
using namespace Aws::CognitoIdentity;
using namespace Aws::CognitoIdentity::Model;

static const char* LOG_TAG = "CognitoCachingCredentialsProvider";
static const char* MEM_TAG = "CognitoCachingCredentialsProvider";

CognitoCachingCredentialsProvider::CognitoCachingCredentialsProvider
        (const std::shared_ptr<PersistentCognitoIdentityProvider>& identityRepository, const std::shared_ptr<CognitoIdentityClient>& cognitoIdentityClient) :
        m_cognitoIdentityClient(cognitoIdentityClient != nullptr ? cognitoIdentityClient :
                                Aws::MakeShared<CognitoIdentityClient>(MEM_TAG, Aws::MakeShared<AnonymousAWSCredentialsProvider>(MEM_TAG))),
        m_identityRepository(identityRepository),
        m_cachedCredentials("", ""),
        m_expiry(0.0)
{
}

AWSCredentials CognitoCachingCredentialsProvider::GetAWSCredentials()
{
    if (IsTimeExpired(m_expiry.load()))
    {
        AWS_LOG_TRACE(LOG_TAG, "Expiry expired, attempting to aquire lock and refresh credentials.");
        std::lock_guard<std::mutex> locker(m_credsMutex);
        AWS_LOG_TRACE(LOG_TAG, "Lock aquired, checking if the expiry is still expired.");
        if (IsTimeExpired(m_expiry.load()))
        {
            AWS_LOG_INFO(LOG_TAG, "Expiry expired on cognito credentials attempting to pull new credentials.");
            auto getCredentialsForIdentityOutcome = GetCredentialsFromCognito();
            if (getCredentialsForIdentityOutcome.IsSuccess())
            {
                AWS_LOG_INFO(LOG_TAG, "Successfully obtained cognito credentials");
                const auto& cognitoCreds = getCredentialsForIdentityOutcome.GetResult().GetCredentials();

                m_cachedCredentials = AWSCredentials(cognitoCreds.GetAccessKeyId(), cognitoCreds.GetSecretKey(),
                                                     cognitoCreds.GetSessionToken());
                m_expiry = cognitoCreds.GetExpiration();
                AWS_LOGSTREAM_INFO(LOG_TAG, "Credentials will expire next at " << m_expiry);
            }
            else
            {
                auto error = getCredentialsForIdentityOutcome.GetError();
                AWS_LOGSTREAM_ERROR(LOG_TAG, "Failed to pull credentials from cognito. Error: " <<
                                             error.GetExceptionName() << "  Message: " << error.GetMessage());
            }
        }
    }

    return m_cachedCredentials;
}

bool CognitoCachingCredentialsProvider::IsTimeExpired(double expiry)
{
    using namespace std::chrono;
    //30s grace buffer so requests have time to finish before expiry.
    static const double GRACE_BUFFER = 30.0;   

    return expiry < (Utils::DateTime::ComputeCurrentTimestampInAmazonFormat() - GRACE_BUFFER);
}


GetCredentialsForIdentityOutcome FetchCredentialsFromCognito(const CognitoIdentityClient& cognitoIdentityClient,
                                                             PersistentCognitoIdentityProvider& identityRepository,
                                                             const char* logTag, bool includeLogins)
{
    auto logins = identityRepository.GetLogins();
    Aws::Map<Aws::String, Aws::String> cognitoLogins;
    for(auto& login : logins)
    {
        cognitoLogins[login.first] = login.second.accessToken;
    }

    if (!identityRepository.HasIdentityId())
    {
        auto accountId = identityRepository.GetAccountId();
        auto identityPoolId = identityRepository.GetIdentityPoolId();

        AWS_LOGSTREAM_INFO(logTag, "Identity not found, requesting an anonymous id for accountId " <<
                                         accountId << " identity pool id " << identityPoolId <<
                                         " with logins.");

        GetIdRequest getIdRequest;
        getIdRequest.SetAccountId(accountId);
        getIdRequest.SetIdentityPoolId(identityPoolId);
        if(includeLogins)
        {

            getIdRequest.SetLogins(cognitoLogins);
        }

        auto getIdOutcome = cognitoIdentityClient.GetId(getIdRequest);
        if(getIdOutcome.IsSuccess())
        {
            auto identityId = getIdOutcome.GetResult().GetIdentityId();
            AWS_LOGSTREAM_INFO(logTag, "Successfully retrieved identity: " << identityId);
            identityRepository.PersistIdentityId(identityId);

            if(includeLogins)
            {
                identityRepository.PersistLogins(logins);
            }
        }
        else
        {
            AWS_LOGSTREAM_ERROR(logTag, "Failed to retrieve identity. Error: "
                                              << getIdOutcome.GetError().GetExceptionName() << " "
                                              << getIdOutcome.GetError().GetMessage());
            return GetCredentialsForIdentityOutcome(getIdOutcome.GetError());
        }
    }

    GetCredentialsForIdentityRequest getCredentialsForIdentityRequest;
    getCredentialsForIdentityRequest.SetIdentityId(identityRepository.GetIdentityId());
    if(includeLogins)
    {
        getCredentialsForIdentityRequest.SetLogins(cognitoLogins);
    }

    return cognitoIdentityClient.GetCredentialsForIdentity(getCredentialsForIdentityRequest);
}

static const char* ANON_LOG_TAG = "CognitoCachingAnonymousCredentialsProvider";

CognitoCachingAnonymousCredentialsProvider::CognitoCachingAnonymousCredentialsProvider(
        const std::shared_ptr<PersistentCognitoIdentityProvider>& identityRepository,
        const std::shared_ptr<CognitoIdentityClient>& cognitoIdentityClient) :
        CognitoCachingCredentialsProvider(identityRepository, cognitoIdentityClient)
{ }

CognitoCachingAnonymousCredentialsProvider::CognitoCachingAnonymousCredentialsProvider(const Aws::String& accountId, const Aws::String& identityPoolId,
                                                                                       const std::shared_ptr<CognitoIdentityClient>& cognitoIdentityClient) :
        CognitoCachingCredentialsProvider(Aws::MakeShared<DefaultPersistentCognitoIdentityProvider>(MEM_TAG, identityPoolId, accountId), cognitoIdentityClient)
{ }


GetCredentialsForIdentityOutcome CognitoCachingAnonymousCredentialsProvider::GetCredentialsFromCognito() const
{
    return FetchCredentialsFromCognito(*m_cognitoIdentityClient, *m_identityRepository, ANON_LOG_TAG, false);
}

static const char* AUTH_LOG_TAG = "CognitoCachingAuthenticatedCredentialsProvider";

CognitoCachingAuthenticatedCredentialsProvider::CognitoCachingAuthenticatedCredentialsProvider(
        const std::shared_ptr<PersistentCognitoIdentityProvider>& identityRepository,
        const std::shared_ptr<CognitoIdentityClient>& cognitoIdentityClient) :
        CognitoCachingCredentialsProvider(identityRepository, cognitoIdentityClient)
{ }

GetCredentialsForIdentityOutcome CognitoCachingAuthenticatedCredentialsProvider::GetCredentialsFromCognito() const
{
    return FetchCredentialsFromCognito(*m_cognitoIdentityClient, *m_identityRepository, AUTH_LOG_TAG, true);
}
