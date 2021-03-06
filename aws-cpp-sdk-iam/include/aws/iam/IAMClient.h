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
#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/iam/model/CreateAccessKeyResult.h>
#include <aws/iam/model/CreateGroupResult.h>
#include <aws/iam/model/CreateInstanceProfileResult.h>
#include <aws/iam/model/CreateLoginProfileResult.h>
#include <aws/iam/model/CreateOpenIDConnectProviderResult.h>
#include <aws/iam/model/CreatePolicyResult.h>
#include <aws/iam/model/CreatePolicyVersionResult.h>
#include <aws/iam/model/CreateRoleResult.h>
#include <aws/iam/model/CreateSAMLProviderResult.h>
#include <aws/iam/model/CreateUserResult.h>
#include <aws/iam/model/CreateVirtualMFADeviceResult.h>
#include <aws/iam/model/GenerateCredentialReportResult.h>
#include <aws/iam/model/GetAccessKeyLastUsedResult.h>
#include <aws/iam/model/GetAccountAuthorizationDetailsResult.h>
#include <aws/iam/model/GetAccountPasswordPolicyResult.h>
#include <aws/iam/model/GetAccountSummaryResult.h>
#include <aws/iam/model/GetContextKeysForPolicyResult.h>
#include <aws/iam/model/GetCredentialReportResult.h>
#include <aws/iam/model/GetGroupResult.h>
#include <aws/iam/model/GetGroupPolicyResult.h>
#include <aws/iam/model/GetInstanceProfileResult.h>
#include <aws/iam/model/GetLoginProfileResult.h>
#include <aws/iam/model/GetOpenIDConnectProviderResult.h>
#include <aws/iam/model/GetPolicyResult.h>
#include <aws/iam/model/GetPolicyVersionResult.h>
#include <aws/iam/model/GetRoleResult.h>
#include <aws/iam/model/GetRolePolicyResult.h>
#include <aws/iam/model/GetSAMLProviderResult.h>
#include <aws/iam/model/GetSSHPublicKeyResult.h>
#include <aws/iam/model/GetServerCertificateResult.h>
#include <aws/iam/model/GetUserResult.h>
#include <aws/iam/model/GetUserPolicyResult.h>
#include <aws/iam/model/ListAccessKeysResult.h>
#include <aws/iam/model/ListAccountAliasesResult.h>
#include <aws/iam/model/ListAttachedGroupPoliciesResult.h>
#include <aws/iam/model/ListAttachedRolePoliciesResult.h>
#include <aws/iam/model/ListAttachedUserPoliciesResult.h>
#include <aws/iam/model/ListEntitiesForPolicyResult.h>
#include <aws/iam/model/ListGroupPoliciesResult.h>
#include <aws/iam/model/ListGroupsResult.h>
#include <aws/iam/model/ListGroupsForUserResult.h>
#include <aws/iam/model/ListInstanceProfilesResult.h>
#include <aws/iam/model/ListInstanceProfilesForRoleResult.h>
#include <aws/iam/model/ListMFADevicesResult.h>
#include <aws/iam/model/ListOpenIDConnectProvidersResult.h>
#include <aws/iam/model/ListPoliciesResult.h>
#include <aws/iam/model/ListPolicyVersionsResult.h>
#include <aws/iam/model/ListRolePoliciesResult.h>
#include <aws/iam/model/ListRolesResult.h>
#include <aws/iam/model/ListSAMLProvidersResult.h>
#include <aws/iam/model/ListSSHPublicKeysResult.h>
#include <aws/iam/model/ListServerCertificatesResult.h>
#include <aws/iam/model/ListSigningCertificatesResult.h>
#include <aws/iam/model/ListUserPoliciesResult.h>
#include <aws/iam/model/ListUsersResult.h>
#include <aws/iam/model/ListVirtualMFADevicesResult.h>
#include <aws/iam/model/SimulatePolicyResult.h>
#include <aws/iam/model/UpdateSAMLProviderResult.h>
#include <aws/iam/model/UploadSSHPublicKeyResult.h>
#include <aws/iam/model/UploadServerCertificateResult.h>
#include <aws/iam/model/UploadSigningCertificateResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace IAM
{

namespace Model
{
        class AddClientIDToOpenIDConnectProviderRequest;
        class AddRoleToInstanceProfileRequest;
        class AddUserToGroupRequest;
        class AttachGroupPolicyRequest;
        class AttachRolePolicyRequest;
        class AttachUserPolicyRequest;
        class ChangePasswordRequest;
        class CreateAccessKeyRequest;
        class CreateAccountAliasRequest;
        class CreateGroupRequest;
        class CreateInstanceProfileRequest;
        class CreateLoginProfileRequest;
        class CreateOpenIDConnectProviderRequest;
        class CreatePolicyRequest;
        class CreatePolicyVersionRequest;
        class CreateRoleRequest;
        class CreateSAMLProviderRequest;
        class CreateUserRequest;
        class CreateVirtualMFADeviceRequest;
        class DeactivateMFADeviceRequest;
        class DeleteAccessKeyRequest;
        class DeleteAccountAliasRequest;
        class DeleteAccountPasswordPolicyRequest;
        class DeleteGroupRequest;
        class DeleteGroupPolicyRequest;
        class DeleteInstanceProfileRequest;
        class DeleteLoginProfileRequest;
        class DeleteOpenIDConnectProviderRequest;
        class DeletePolicyRequest;
        class DeletePolicyVersionRequest;
        class DeleteRoleRequest;
        class DeleteRolePolicyRequest;
        class DeleteSAMLProviderRequest;
        class DeleteSSHPublicKeyRequest;
        class DeleteServerCertificateRequest;
        class DeleteSigningCertificateRequest;
        class DeleteUserRequest;
        class DeleteUserPolicyRequest;
        class DeleteVirtualMFADeviceRequest;
        class DetachGroupPolicyRequest;
        class DetachRolePolicyRequest;
        class DetachUserPolicyRequest;
        class EnableMFADeviceRequest;
        class GenerateCredentialReportRequest;
        class GetAccessKeyLastUsedRequest;
        class GetAccountAuthorizationDetailsRequest;
        class GetAccountPasswordPolicyRequest;
        class GetAccountSummaryRequest;
        class GetContextKeysForPolicyRequest;
        class GetCredentialReportRequest;
        class GetGroupRequest;
        class GetGroupPolicyRequest;
        class GetInstanceProfileRequest;
        class GetLoginProfileRequest;
        class GetOpenIDConnectProviderRequest;
        class GetPolicyRequest;
        class GetPolicyVersionRequest;
        class GetRoleRequest;
        class GetRolePolicyRequest;
        class GetSAMLProviderRequest;
        class GetSSHPublicKeyRequest;
        class GetServerCertificateRequest;
        class GetUserRequest;
        class GetUserPolicyRequest;
        class ListAccessKeysRequest;
        class ListAccountAliasesRequest;
        class ListAttachedGroupPoliciesRequest;
        class ListAttachedRolePoliciesRequest;
        class ListAttachedUserPoliciesRequest;
        class ListEntitiesForPolicyRequest;
        class ListGroupPoliciesRequest;
        class ListGroupsRequest;
        class ListGroupsForUserRequest;
        class ListInstanceProfilesRequest;
        class ListInstanceProfilesForRoleRequest;
        class ListMFADevicesRequest;
        class ListOpenIDConnectProvidersRequest;
        class ListPoliciesRequest;
        class ListPolicyVersionsRequest;
        class ListRolePoliciesRequest;
        class ListRolesRequest;
        class ListSAMLProvidersRequest;
        class ListSSHPublicKeysRequest;
        class ListServerCertificatesRequest;
        class ListSigningCertificatesRequest;
        class ListUserPoliciesRequest;
        class ListUsersRequest;
        class ListVirtualMFADevicesRequest;
        class PutGroupPolicyRequest;
        class PutRolePolicyRequest;
        class PutUserPolicyRequest;
        class RemoveClientIDFromOpenIDConnectProviderRequest;
        class RemoveRoleFromInstanceProfileRequest;
        class RemoveUserFromGroupRequest;
        class ResyncMFADeviceRequest;
        class SetDefaultPolicyVersionRequest;
        class SimulatePolicyRequest;
        class UpdateAccessKeyRequest;
        class UpdateAccountPasswordPolicyRequest;
        class UpdateAssumeRolePolicyRequest;
        class UpdateGroupRequest;
        class UpdateLoginProfileRequest;
        class UpdateOpenIDConnectProviderThumbprintRequest;
        class UpdateSAMLProviderRequest;
        class UpdateSSHPublicKeyRequest;
        class UpdateServerCertificateRequest;
        class UpdateSigningCertificateRequest;
        class UpdateUserRequest;
        class UploadSSHPublicKeyRequest;
        class UploadServerCertificateRequest;
        class UploadSigningCertificateRequest;

        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> AddClientIDToOpenIDConnectProviderOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> AddRoleToInstanceProfileOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> AddUserToGroupOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> AttachGroupPolicyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> AttachRolePolicyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> AttachUserPolicyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> ChangePasswordOutcome;
        typedef Utils::Outcome<CreateAccessKeyResult, Client::AWSError<IAMErrors>> CreateAccessKeyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> CreateAccountAliasOutcome;
        typedef Utils::Outcome<CreateGroupResult, Client::AWSError<IAMErrors>> CreateGroupOutcome;
        typedef Utils::Outcome<CreateInstanceProfileResult, Client::AWSError<IAMErrors>> CreateInstanceProfileOutcome;
        typedef Utils::Outcome<CreateLoginProfileResult, Client::AWSError<IAMErrors>> CreateLoginProfileOutcome;
        typedef Utils::Outcome<CreateOpenIDConnectProviderResult, Client::AWSError<IAMErrors>> CreateOpenIDConnectProviderOutcome;
        typedef Utils::Outcome<CreatePolicyResult, Client::AWSError<IAMErrors>> CreatePolicyOutcome;
        typedef Utils::Outcome<CreatePolicyVersionResult, Client::AWSError<IAMErrors>> CreatePolicyVersionOutcome;
        typedef Utils::Outcome<CreateRoleResult, Client::AWSError<IAMErrors>> CreateRoleOutcome;
        typedef Utils::Outcome<CreateSAMLProviderResult, Client::AWSError<IAMErrors>> CreateSAMLProviderOutcome;
        typedef Utils::Outcome<CreateUserResult, Client::AWSError<IAMErrors>> CreateUserOutcome;
        typedef Utils::Outcome<CreateVirtualMFADeviceResult, Client::AWSError<IAMErrors>> CreateVirtualMFADeviceOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DeactivateMFADeviceOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DeleteAccessKeyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DeleteAccountAliasOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DeleteAccountPasswordPolicyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DeleteGroupOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DeleteGroupPolicyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DeleteInstanceProfileOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DeleteLoginProfileOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DeleteOpenIDConnectProviderOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DeletePolicyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DeletePolicyVersionOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DeleteRoleOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DeleteRolePolicyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DeleteSAMLProviderOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DeleteSSHPublicKeyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DeleteServerCertificateOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DeleteSigningCertificateOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DeleteUserOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DeleteUserPolicyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DeleteVirtualMFADeviceOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DetachGroupPolicyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DetachRolePolicyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> DetachUserPolicyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> EnableMFADeviceOutcome;
        typedef Utils::Outcome<GenerateCredentialReportResult, Client::AWSError<IAMErrors>> GenerateCredentialReportOutcome;
        typedef Utils::Outcome<GetAccessKeyLastUsedResult, Client::AWSError<IAMErrors>> GetAccessKeyLastUsedOutcome;
        typedef Utils::Outcome<GetAccountAuthorizationDetailsResult, Client::AWSError<IAMErrors>> GetAccountAuthorizationDetailsOutcome;
        typedef Utils::Outcome<GetAccountPasswordPolicyResult, Client::AWSError<IAMErrors>> GetAccountPasswordPolicyOutcome;
        typedef Utils::Outcome<GetAccountSummaryResult, Client::AWSError<IAMErrors>> GetAccountSummaryOutcome;
        typedef Utils::Outcome<GetContextKeysForPolicyResult, Client::AWSError<IAMErrors>> GetContextKeysForPolicyOutcome;
        typedef Utils::Outcome<GetCredentialReportResult, Client::AWSError<IAMErrors>> GetCredentialReportOutcome;
        typedef Utils::Outcome<GetGroupResult, Client::AWSError<IAMErrors>> GetGroupOutcome;
        typedef Utils::Outcome<GetGroupPolicyResult, Client::AWSError<IAMErrors>> GetGroupPolicyOutcome;
        typedef Utils::Outcome<GetInstanceProfileResult, Client::AWSError<IAMErrors>> GetInstanceProfileOutcome;
        typedef Utils::Outcome<GetLoginProfileResult, Client::AWSError<IAMErrors>> GetLoginProfileOutcome;
        typedef Utils::Outcome<GetOpenIDConnectProviderResult, Client::AWSError<IAMErrors>> GetOpenIDConnectProviderOutcome;
        typedef Utils::Outcome<GetPolicyResult, Client::AWSError<IAMErrors>> GetPolicyOutcome;
        typedef Utils::Outcome<GetPolicyVersionResult, Client::AWSError<IAMErrors>> GetPolicyVersionOutcome;
        typedef Utils::Outcome<GetRoleResult, Client::AWSError<IAMErrors>> GetRoleOutcome;
        typedef Utils::Outcome<GetRolePolicyResult, Client::AWSError<IAMErrors>> GetRolePolicyOutcome;
        typedef Utils::Outcome<GetSAMLProviderResult, Client::AWSError<IAMErrors>> GetSAMLProviderOutcome;
        typedef Utils::Outcome<GetSSHPublicKeyResult, Client::AWSError<IAMErrors>> GetSSHPublicKeyOutcome;
        typedef Utils::Outcome<GetServerCertificateResult, Client::AWSError<IAMErrors>> GetServerCertificateOutcome;
        typedef Utils::Outcome<GetUserResult, Client::AWSError<IAMErrors>> GetUserOutcome;
        typedef Utils::Outcome<GetUserPolicyResult, Client::AWSError<IAMErrors>> GetUserPolicyOutcome;
        typedef Utils::Outcome<ListAccessKeysResult, Client::AWSError<IAMErrors>> ListAccessKeysOutcome;
        typedef Utils::Outcome<ListAccountAliasesResult, Client::AWSError<IAMErrors>> ListAccountAliasesOutcome;
        typedef Utils::Outcome<ListAttachedGroupPoliciesResult, Client::AWSError<IAMErrors>> ListAttachedGroupPoliciesOutcome;
        typedef Utils::Outcome<ListAttachedRolePoliciesResult, Client::AWSError<IAMErrors>> ListAttachedRolePoliciesOutcome;
        typedef Utils::Outcome<ListAttachedUserPoliciesResult, Client::AWSError<IAMErrors>> ListAttachedUserPoliciesOutcome;
        typedef Utils::Outcome<ListEntitiesForPolicyResult, Client::AWSError<IAMErrors>> ListEntitiesForPolicyOutcome;
        typedef Utils::Outcome<ListGroupPoliciesResult, Client::AWSError<IAMErrors>> ListGroupPoliciesOutcome;
        typedef Utils::Outcome<ListGroupsResult, Client::AWSError<IAMErrors>> ListGroupsOutcome;
        typedef Utils::Outcome<ListGroupsForUserResult, Client::AWSError<IAMErrors>> ListGroupsForUserOutcome;
        typedef Utils::Outcome<ListInstanceProfilesResult, Client::AWSError<IAMErrors>> ListInstanceProfilesOutcome;
        typedef Utils::Outcome<ListInstanceProfilesForRoleResult, Client::AWSError<IAMErrors>> ListInstanceProfilesForRoleOutcome;
        typedef Utils::Outcome<ListMFADevicesResult, Client::AWSError<IAMErrors>> ListMFADevicesOutcome;
        typedef Utils::Outcome<ListOpenIDConnectProvidersResult, Client::AWSError<IAMErrors>> ListOpenIDConnectProvidersOutcome;
        typedef Utils::Outcome<ListPoliciesResult, Client::AWSError<IAMErrors>> ListPoliciesOutcome;
        typedef Utils::Outcome<ListPolicyVersionsResult, Client::AWSError<IAMErrors>> ListPolicyVersionsOutcome;
        typedef Utils::Outcome<ListRolePoliciesResult, Client::AWSError<IAMErrors>> ListRolePoliciesOutcome;
        typedef Utils::Outcome<ListRolesResult, Client::AWSError<IAMErrors>> ListRolesOutcome;
        typedef Utils::Outcome<ListSAMLProvidersResult, Client::AWSError<IAMErrors>> ListSAMLProvidersOutcome;
        typedef Utils::Outcome<ListSSHPublicKeysResult, Client::AWSError<IAMErrors>> ListSSHPublicKeysOutcome;
        typedef Utils::Outcome<ListServerCertificatesResult, Client::AWSError<IAMErrors>> ListServerCertificatesOutcome;
        typedef Utils::Outcome<ListSigningCertificatesResult, Client::AWSError<IAMErrors>> ListSigningCertificatesOutcome;
        typedef Utils::Outcome<ListUserPoliciesResult, Client::AWSError<IAMErrors>> ListUserPoliciesOutcome;
        typedef Utils::Outcome<ListUsersResult, Client::AWSError<IAMErrors>> ListUsersOutcome;
        typedef Utils::Outcome<ListVirtualMFADevicesResult, Client::AWSError<IAMErrors>> ListVirtualMFADevicesOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> PutGroupPolicyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> PutRolePolicyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> PutUserPolicyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> RemoveClientIDFromOpenIDConnectProviderOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> RemoveRoleFromInstanceProfileOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> RemoveUserFromGroupOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> ResyncMFADeviceOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> SetDefaultPolicyVersionOutcome;
        typedef Utils::Outcome<SimulatePolicyResult, Client::AWSError<IAMErrors>> SimulatePolicyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> UpdateAccessKeyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> UpdateAccountPasswordPolicyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> UpdateAssumeRolePolicyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> UpdateGroupOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> UpdateLoginProfileOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> UpdateOpenIDConnectProviderThumbprintOutcome;
        typedef Utils::Outcome<UpdateSAMLProviderResult, Client::AWSError<IAMErrors>> UpdateSAMLProviderOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> UpdateSSHPublicKeyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> UpdateServerCertificateOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> UpdateSigningCertificateOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<IAMErrors>> UpdateUserOutcome;
        typedef Utils::Outcome<UploadSSHPublicKeyResult, Client::AWSError<IAMErrors>> UploadSSHPublicKeyOutcome;
        typedef Utils::Outcome<UploadServerCertificateResult, Client::AWSError<IAMErrors>> UploadServerCertificateOutcome;
        typedef Utils::Outcome<UploadSigningCertificateResult, Client::AWSError<IAMErrors>> UploadSigningCertificateOutcome;

        typedef std::future<AddClientIDToOpenIDConnectProviderOutcome> AddClientIDToOpenIDConnectProviderOutcomeCallable;
        typedef std::future<AddRoleToInstanceProfileOutcome> AddRoleToInstanceProfileOutcomeCallable;
        typedef std::future<AddUserToGroupOutcome> AddUserToGroupOutcomeCallable;
        typedef std::future<AttachGroupPolicyOutcome> AttachGroupPolicyOutcomeCallable;
        typedef std::future<AttachRolePolicyOutcome> AttachRolePolicyOutcomeCallable;
        typedef std::future<AttachUserPolicyOutcome> AttachUserPolicyOutcomeCallable;
        typedef std::future<ChangePasswordOutcome> ChangePasswordOutcomeCallable;
        typedef std::future<CreateAccessKeyOutcome> CreateAccessKeyOutcomeCallable;
        typedef std::future<CreateAccountAliasOutcome> CreateAccountAliasOutcomeCallable;
        typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
        typedef std::future<CreateInstanceProfileOutcome> CreateInstanceProfileOutcomeCallable;
        typedef std::future<CreateLoginProfileOutcome> CreateLoginProfileOutcomeCallable;
        typedef std::future<CreateOpenIDConnectProviderOutcome> CreateOpenIDConnectProviderOutcomeCallable;
        typedef std::future<CreatePolicyOutcome> CreatePolicyOutcomeCallable;
        typedef std::future<CreatePolicyVersionOutcome> CreatePolicyVersionOutcomeCallable;
        typedef std::future<CreateRoleOutcome> CreateRoleOutcomeCallable;
        typedef std::future<CreateSAMLProviderOutcome> CreateSAMLProviderOutcomeCallable;
        typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
        typedef std::future<CreateVirtualMFADeviceOutcome> CreateVirtualMFADeviceOutcomeCallable;
        typedef std::future<DeactivateMFADeviceOutcome> DeactivateMFADeviceOutcomeCallable;
        typedef std::future<DeleteAccessKeyOutcome> DeleteAccessKeyOutcomeCallable;
        typedef std::future<DeleteAccountAliasOutcome> DeleteAccountAliasOutcomeCallable;
        typedef std::future<DeleteAccountPasswordPolicyOutcome> DeleteAccountPasswordPolicyOutcomeCallable;
        typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
        typedef std::future<DeleteGroupPolicyOutcome> DeleteGroupPolicyOutcomeCallable;
        typedef std::future<DeleteInstanceProfileOutcome> DeleteInstanceProfileOutcomeCallable;
        typedef std::future<DeleteLoginProfileOutcome> DeleteLoginProfileOutcomeCallable;
        typedef std::future<DeleteOpenIDConnectProviderOutcome> DeleteOpenIDConnectProviderOutcomeCallable;
        typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
        typedef std::future<DeletePolicyVersionOutcome> DeletePolicyVersionOutcomeCallable;
        typedef std::future<DeleteRoleOutcome> DeleteRoleOutcomeCallable;
        typedef std::future<DeleteRolePolicyOutcome> DeleteRolePolicyOutcomeCallable;
        typedef std::future<DeleteSAMLProviderOutcome> DeleteSAMLProviderOutcomeCallable;
        typedef std::future<DeleteSSHPublicKeyOutcome> DeleteSSHPublicKeyOutcomeCallable;
        typedef std::future<DeleteServerCertificateOutcome> DeleteServerCertificateOutcomeCallable;
        typedef std::future<DeleteSigningCertificateOutcome> DeleteSigningCertificateOutcomeCallable;
        typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
        typedef std::future<DeleteUserPolicyOutcome> DeleteUserPolicyOutcomeCallable;
        typedef std::future<DeleteVirtualMFADeviceOutcome> DeleteVirtualMFADeviceOutcomeCallable;
        typedef std::future<DetachGroupPolicyOutcome> DetachGroupPolicyOutcomeCallable;
        typedef std::future<DetachRolePolicyOutcome> DetachRolePolicyOutcomeCallable;
        typedef std::future<DetachUserPolicyOutcome> DetachUserPolicyOutcomeCallable;
        typedef std::future<EnableMFADeviceOutcome> EnableMFADeviceOutcomeCallable;
        typedef std::future<GenerateCredentialReportOutcome> GenerateCredentialReportOutcomeCallable;
        typedef std::future<GetAccessKeyLastUsedOutcome> GetAccessKeyLastUsedOutcomeCallable;
        typedef std::future<GetAccountAuthorizationDetailsOutcome> GetAccountAuthorizationDetailsOutcomeCallable;
        typedef std::future<GetAccountPasswordPolicyOutcome> GetAccountPasswordPolicyOutcomeCallable;
        typedef std::future<GetAccountSummaryOutcome> GetAccountSummaryOutcomeCallable;
        typedef std::future<GetContextKeysForPolicyOutcome> GetContextKeysForPolicyOutcomeCallable;
        typedef std::future<GetCredentialReportOutcome> GetCredentialReportOutcomeCallable;
        typedef std::future<GetGroupOutcome> GetGroupOutcomeCallable;
        typedef std::future<GetGroupPolicyOutcome> GetGroupPolicyOutcomeCallable;
        typedef std::future<GetInstanceProfileOutcome> GetInstanceProfileOutcomeCallable;
        typedef std::future<GetLoginProfileOutcome> GetLoginProfileOutcomeCallable;
        typedef std::future<GetOpenIDConnectProviderOutcome> GetOpenIDConnectProviderOutcomeCallable;
        typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
        typedef std::future<GetPolicyVersionOutcome> GetPolicyVersionOutcomeCallable;
        typedef std::future<GetRoleOutcome> GetRoleOutcomeCallable;
        typedef std::future<GetRolePolicyOutcome> GetRolePolicyOutcomeCallable;
        typedef std::future<GetSAMLProviderOutcome> GetSAMLProviderOutcomeCallable;
        typedef std::future<GetSSHPublicKeyOutcome> GetSSHPublicKeyOutcomeCallable;
        typedef std::future<GetServerCertificateOutcome> GetServerCertificateOutcomeCallable;
        typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
        typedef std::future<GetUserPolicyOutcome> GetUserPolicyOutcomeCallable;
        typedef std::future<ListAccessKeysOutcome> ListAccessKeysOutcomeCallable;
        typedef std::future<ListAccountAliasesOutcome> ListAccountAliasesOutcomeCallable;
        typedef std::future<ListAttachedGroupPoliciesOutcome> ListAttachedGroupPoliciesOutcomeCallable;
        typedef std::future<ListAttachedRolePoliciesOutcome> ListAttachedRolePoliciesOutcomeCallable;
        typedef std::future<ListAttachedUserPoliciesOutcome> ListAttachedUserPoliciesOutcomeCallable;
        typedef std::future<ListEntitiesForPolicyOutcome> ListEntitiesForPolicyOutcomeCallable;
        typedef std::future<ListGroupPoliciesOutcome> ListGroupPoliciesOutcomeCallable;
        typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
        typedef std::future<ListGroupsForUserOutcome> ListGroupsForUserOutcomeCallable;
        typedef std::future<ListInstanceProfilesOutcome> ListInstanceProfilesOutcomeCallable;
        typedef std::future<ListInstanceProfilesForRoleOutcome> ListInstanceProfilesForRoleOutcomeCallable;
        typedef std::future<ListMFADevicesOutcome> ListMFADevicesOutcomeCallable;
        typedef std::future<ListOpenIDConnectProvidersOutcome> ListOpenIDConnectProvidersOutcomeCallable;
        typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
        typedef std::future<ListPolicyVersionsOutcome> ListPolicyVersionsOutcomeCallable;
        typedef std::future<ListRolePoliciesOutcome> ListRolePoliciesOutcomeCallable;
        typedef std::future<ListRolesOutcome> ListRolesOutcomeCallable;
        typedef std::future<ListSAMLProvidersOutcome> ListSAMLProvidersOutcomeCallable;
        typedef std::future<ListSSHPublicKeysOutcome> ListSSHPublicKeysOutcomeCallable;
        typedef std::future<ListServerCertificatesOutcome> ListServerCertificatesOutcomeCallable;
        typedef std::future<ListSigningCertificatesOutcome> ListSigningCertificatesOutcomeCallable;
        typedef std::future<ListUserPoliciesOutcome> ListUserPoliciesOutcomeCallable;
        typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
        typedef std::future<ListVirtualMFADevicesOutcome> ListVirtualMFADevicesOutcomeCallable;
        typedef std::future<PutGroupPolicyOutcome> PutGroupPolicyOutcomeCallable;
        typedef std::future<PutRolePolicyOutcome> PutRolePolicyOutcomeCallable;
        typedef std::future<PutUserPolicyOutcome> PutUserPolicyOutcomeCallable;
        typedef std::future<RemoveClientIDFromOpenIDConnectProviderOutcome> RemoveClientIDFromOpenIDConnectProviderOutcomeCallable;
        typedef std::future<RemoveRoleFromInstanceProfileOutcome> RemoveRoleFromInstanceProfileOutcomeCallable;
        typedef std::future<RemoveUserFromGroupOutcome> RemoveUserFromGroupOutcomeCallable;
        typedef std::future<ResyncMFADeviceOutcome> ResyncMFADeviceOutcomeCallable;
        typedef std::future<SetDefaultPolicyVersionOutcome> SetDefaultPolicyVersionOutcomeCallable;
        typedef std::future<SimulatePolicyOutcome> SimulatePolicyOutcomeCallable;
        typedef std::future<UpdateAccessKeyOutcome> UpdateAccessKeyOutcomeCallable;
        typedef std::future<UpdateAccountPasswordPolicyOutcome> UpdateAccountPasswordPolicyOutcomeCallable;
        typedef std::future<UpdateAssumeRolePolicyOutcome> UpdateAssumeRolePolicyOutcomeCallable;
        typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
        typedef std::future<UpdateLoginProfileOutcome> UpdateLoginProfileOutcomeCallable;
        typedef std::future<UpdateOpenIDConnectProviderThumbprintOutcome> UpdateOpenIDConnectProviderThumbprintOutcomeCallable;
        typedef std::future<UpdateSAMLProviderOutcome> UpdateSAMLProviderOutcomeCallable;
        typedef std::future<UpdateSSHPublicKeyOutcome> UpdateSSHPublicKeyOutcomeCallable;
        typedef std::future<UpdateServerCertificateOutcome> UpdateServerCertificateOutcomeCallable;
        typedef std::future<UpdateSigningCertificateOutcome> UpdateSigningCertificateOutcomeCallable;
        typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
        typedef std::future<UploadSSHPublicKeyOutcome> UploadSSHPublicKeyOutcomeCallable;
        typedef std::future<UploadServerCertificateOutcome> UploadServerCertificateOutcomeCallable;
        typedef std::future<UploadSigningCertificateOutcome> UploadSigningCertificateOutcomeCallable;
} // namespace Model

  class IAMClient;

    typedef std::function<void(const IAMClient*, const Model::AddClientIDToOpenIDConnectProviderRequest&, const Model::AddClientIDToOpenIDConnectProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddClientIDToOpenIDConnectProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::AddRoleToInstanceProfileRequest&, const Model::AddRoleToInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddRoleToInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::AddUserToGroupRequest&, const Model::AddUserToGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddUserToGroupResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::AttachGroupPolicyRequest&, const Model::AttachGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::AttachRolePolicyRequest&, const Model::AttachRolePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachRolePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::AttachUserPolicyRequest&, const Model::AttachUserPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachUserPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ChangePasswordRequest&, const Model::ChangePasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ChangePasswordResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreateAccessKeyRequest&, const Model::CreateAccessKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessKeyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreateAccountAliasRequest&, const Model::CreateAccountAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccountAliasResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreateGroupRequest&, const Model::CreateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreateInstanceProfileRequest&, const Model::CreateInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreateLoginProfileRequest&, const Model::CreateLoginProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLoginProfileResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreateOpenIDConnectProviderRequest&, const Model::CreateOpenIDConnectProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOpenIDConnectProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreatePolicyRequest&, const Model::CreatePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreatePolicyVersionRequest&, const Model::CreatePolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePolicyVersionResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreateRoleRequest&, const Model::CreateRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRoleResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreateSAMLProviderRequest&, const Model::CreateSAMLProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSAMLProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreateVirtualMFADeviceRequest&, const Model::CreateVirtualMFADeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVirtualMFADeviceResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeactivateMFADeviceRequest&, const Model::DeactivateMFADeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeactivateMFADeviceResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteAccessKeyRequest&, const Model::DeleteAccessKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessKeyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteAccountAliasRequest&, const Model::DeleteAccountAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccountAliasResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteAccountPasswordPolicyRequest&, const Model::DeleteAccountPasswordPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccountPasswordPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteGroupRequest&, const Model::DeleteGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteGroupPolicyRequest&, const Model::DeleteGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteInstanceProfileRequest&, const Model::DeleteInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteLoginProfileRequest&, const Model::DeleteLoginProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLoginProfileResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteOpenIDConnectProviderRequest&, const Model::DeleteOpenIDConnectProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOpenIDConnectProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeletePolicyRequest&, const Model::DeletePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeletePolicyVersionRequest&, const Model::DeletePolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePolicyVersionResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteRoleRequest&, const Model::DeleteRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRoleResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteRolePolicyRequest&, const Model::DeleteRolePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRolePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteSAMLProviderRequest&, const Model::DeleteSAMLProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSAMLProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteSSHPublicKeyRequest&, const Model::DeleteSSHPublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSSHPublicKeyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteServerCertificateRequest&, const Model::DeleteServerCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServerCertificateResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteSigningCertificateRequest&, const Model::DeleteSigningCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSigningCertificateResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteUserPolicyRequest&, const Model::DeleteUserPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteVirtualMFADeviceRequest&, const Model::DeleteVirtualMFADeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVirtualMFADeviceResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DetachGroupPolicyRequest&, const Model::DetachGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DetachRolePolicyRequest&, const Model::DetachRolePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachRolePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DetachUserPolicyRequest&, const Model::DetachUserPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachUserPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::EnableMFADeviceRequest&, const Model::EnableMFADeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableMFADeviceResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GenerateCredentialReportRequest&, const Model::GenerateCredentialReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateCredentialReportResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetAccessKeyLastUsedRequest&, const Model::GetAccessKeyLastUsedOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessKeyLastUsedResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetAccountAuthorizationDetailsRequest&, const Model::GetAccountAuthorizationDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountAuthorizationDetailsResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetAccountPasswordPolicyRequest&, const Model::GetAccountPasswordPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountPasswordPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetAccountSummaryRequest&, const Model::GetAccountSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountSummaryResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetContextKeysForPolicyRequest&, const Model::GetContextKeysForPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContextKeysForPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetCredentialReportRequest&, const Model::GetCredentialReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCredentialReportResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetGroupRequest&, const Model::GetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetGroupPolicyRequest&, const Model::GetGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetInstanceProfileRequest&, const Model::GetInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetLoginProfileRequest&, const Model::GetLoginProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLoginProfileResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetOpenIDConnectProviderRequest&, const Model::GetOpenIDConnectProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOpenIDConnectProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetPolicyRequest&, const Model::GetPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetPolicyVersionRequest&, const Model::GetPolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyVersionResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetRoleRequest&, const Model::GetRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRoleResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetRolePolicyRequest&, const Model::GetRolePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRolePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetSAMLProviderRequest&, const Model::GetSAMLProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSAMLProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetSSHPublicKeyRequest&, const Model::GetSSHPublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSSHPublicKeyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetServerCertificateRequest&, const Model::GetServerCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServerCertificateResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetUserRequest&, const Model::GetUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetUserPolicyRequest&, const Model::GetUserPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListAccessKeysRequest&, const Model::ListAccessKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessKeysResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListAccountAliasesRequest&, const Model::ListAccountAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountAliasesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListAttachedGroupPoliciesRequest&, const Model::ListAttachedGroupPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttachedGroupPoliciesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListAttachedRolePoliciesRequest&, const Model::ListAttachedRolePoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttachedRolePoliciesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListAttachedUserPoliciesRequest&, const Model::ListAttachedUserPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttachedUserPoliciesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListEntitiesForPolicyRequest&, const Model::ListEntitiesForPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntitiesForPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListGroupPoliciesRequest&, const Model::ListGroupPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupPoliciesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListGroupsRequest&, const Model::ListGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListGroupsForUserRequest&, const Model::ListGroupsForUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsForUserResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListInstanceProfilesRequest&, const Model::ListInstanceProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstanceProfilesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListInstanceProfilesForRoleRequest&, const Model::ListInstanceProfilesForRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstanceProfilesForRoleResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListMFADevicesRequest&, const Model::ListMFADevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMFADevicesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListOpenIDConnectProvidersRequest&, const Model::ListOpenIDConnectProvidersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOpenIDConnectProvidersResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListPoliciesRequest&, const Model::ListPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPoliciesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListPolicyVersionsRequest&, const Model::ListPolicyVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPolicyVersionsResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListRolePoliciesRequest&, const Model::ListRolePoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRolePoliciesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListRolesRequest&, const Model::ListRolesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRolesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListSAMLProvidersRequest&, const Model::ListSAMLProvidersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSAMLProvidersResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListSSHPublicKeysRequest&, const Model::ListSSHPublicKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSSHPublicKeysResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListServerCertificatesRequest&, const Model::ListServerCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServerCertificatesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListSigningCertificatesRequest&, const Model::ListSigningCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSigningCertificatesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListUserPoliciesRequest&, const Model::ListUserPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserPoliciesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListVirtualMFADevicesRequest&, const Model::ListVirtualMFADevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVirtualMFADevicesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::PutGroupPolicyRequest&, const Model::PutGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::PutRolePolicyRequest&, const Model::PutRolePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRolePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::PutUserPolicyRequest&, const Model::PutUserPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutUserPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::RemoveClientIDFromOpenIDConnectProviderRequest&, const Model::RemoveClientIDFromOpenIDConnectProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveClientIDFromOpenIDConnectProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::RemoveRoleFromInstanceProfileRequest&, const Model::RemoveRoleFromInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveRoleFromInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::RemoveUserFromGroupRequest&, const Model::RemoveUserFromGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveUserFromGroupResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ResyncMFADeviceRequest&, const Model::ResyncMFADeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResyncMFADeviceResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::SetDefaultPolicyVersionRequest&, const Model::SetDefaultPolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetDefaultPolicyVersionResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::SimulatePolicyRequest&, const Model::SimulatePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SimulatePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateAccessKeyRequest&, const Model::UpdateAccessKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccessKeyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateAccountPasswordPolicyRequest&, const Model::UpdateAccountPasswordPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountPasswordPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateAssumeRolePolicyRequest&, const Model::UpdateAssumeRolePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssumeRolePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateGroupRequest&, const Model::UpdateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGroupResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateLoginProfileRequest&, const Model::UpdateLoginProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLoginProfileResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateOpenIDConnectProviderThumbprintRequest&, const Model::UpdateOpenIDConnectProviderThumbprintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOpenIDConnectProviderThumbprintResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateSAMLProviderRequest&, const Model::UpdateSAMLProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSAMLProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateSSHPublicKeyRequest&, const Model::UpdateSSHPublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSSHPublicKeyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateServerCertificateRequest&, const Model::UpdateServerCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServerCertificateResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateSigningCertificateRequest&, const Model::UpdateSigningCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSigningCertificateResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UploadSSHPublicKeyRequest&, const Model::UploadSSHPublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UploadSSHPublicKeyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UploadServerCertificateRequest&, const Model::UploadServerCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UploadServerCertificateResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UploadSigningCertificateRequest&, const Model::UploadSigningCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UploadSigningCertificateResponseReceivedHandler;

  /*
    <fullname>AWS Identity and Access Management</fullname> <p>AWS Identity and Access Management (IAM) is a web service that you can use to manage users and user permissions under your AWS account. This guide provides descriptions of IAM actions that you can call programmatically. For general information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity and Access Management (IAM)</a>. For the user guide for IAM, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/">Using IAM</a>. </p> <note>AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms (Java, Ruby, .NET, iOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to IAM and AWS. For example, the SDKs take care of tasks such as cryptographically signing requests (see below), managing errors, and retrying requests automatically. For information about the AWS SDKs, including how to download and install them, see the <a href="http://aws.amazon.com/tools/">Tools for Amazon Web Services</a> page. </note> <p>We recommend that you use the AWS SDKs to make programmatic API calls to IAM. However, you can also use the IAM Query API to make direct calls to the IAM web service. To learn more about the IAM Query API, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>Using IAM</i> guide. IAM supports GET and POST requests for all actions. That is, the API does not require you to use GET for some actions and POST for others. However, GET requests are subject to the limitation size of a URL. Therefore, for operations that require larger sizes, use a POST request. </p> <p> <b>Signing Requests</b> </p> <p>Requests must be signed using an access key ID and a secret access key. We strongly recommend that you do not use your AWS account access key ID and secret access key for everyday work with IAM. You can use the access key ID and secret access key for an IAM user or you can use the AWS Security Token Service to generate temporary security credentials and use those to sign requests. </p> <p>To sign requests, we recommend that you use <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4</a>. If you have an existing application that uses Signature Version 2, you do not have to update it to use Signature Version 4. However, some operations now require Signature Version 4. The documentation for operations that require version 4 indicate this requirement. </p> <p> <b>Additional Resources</b> </p> <p>For more information, see the following:</p> <ul> <li> <a href="http://docs.aws.amazon.com/general/latest/gr/aws-security-credentials.html">AWS Security Credentials</a>. This topic provides general information about the types of credentials used for accessing AWS. </li> <li> <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAMBestPractices.html">IAM Best Practices</a>. This topic presents a list of suggestions for using the IAM service to help secure your AWS resources. </li> <li> <a href="http://docs.aws.amazon.com/STS/latest/UsingSTS/">AWS Security Token Service</a>. This guide describes how to create and use temporary security credentials. </li> <li> <a href="http://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing AWS API Requests</a>. This set of topics walk you through the process of signing a request using an access key ID and secret access key. </li> </ul>
  */
  class AWS_IAM_API IAMClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

        /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IAMClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IAMClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IAMClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
            const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

        ~IAMClient();
        /*
            <p>Adds a new client ID (also known as audience) to the list of client IDs already registered for the specified IAM OpenID Connect provider.</p> <p>This action is idempotent; it does not fail or return an error if you add an existing client ID to the provider.</p>
        */
        Model::AddClientIDToOpenIDConnectProviderOutcome AddClientIDToOpenIDConnectProvider(const Model::AddClientIDToOpenIDConnectProviderRequest& request) const;

        /*
            <p>Adds a new client ID (also known as audience) to the list of client IDs already registered for the specified IAM OpenID Connect provider.</p> <p>This action is idempotent; it does not fail or return an error if you add an existing client ID to the provider.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::AddClientIDToOpenIDConnectProviderOutcomeCallable AddClientIDToOpenIDConnectProviderCallable(const Model::AddClientIDToOpenIDConnectProviderRequest& request) const;

        /*
            <p>Adds a new client ID (also known as audience) to the list of client IDs already registered for the specified IAM OpenID Connect provider.</p> <p>This action is idempotent; it does not fail or return an error if you add an existing client ID to the provider.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void AddClientIDToOpenIDConnectProviderAsync(const Model::AddClientIDToOpenIDConnectProviderRequest& request, const AddClientIDToOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Adds the specified role to the specified instance profile. For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with Roles</a>. For more information about instance profiles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a>. </p>
        */
        Model::AddRoleToInstanceProfileOutcome AddRoleToInstanceProfile(const Model::AddRoleToInstanceProfileRequest& request) const;

        /*
            <p>Adds the specified role to the specified instance profile. For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with Roles</a>. For more information about instance profiles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a>. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::AddRoleToInstanceProfileOutcomeCallable AddRoleToInstanceProfileCallable(const Model::AddRoleToInstanceProfileRequest& request) const;

        /*
            <p>Adds the specified role to the specified instance profile. For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with Roles</a>. For more information about instance profiles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a>. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void AddRoleToInstanceProfileAsync(const Model::AddRoleToInstanceProfileRequest& request, const AddRoleToInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Adds the specified user to the specified group.</p>
        */
        Model::AddUserToGroupOutcome AddUserToGroup(const Model::AddUserToGroupRequest& request) const;

        /*
            <p>Adds the specified user to the specified group.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::AddUserToGroupOutcomeCallable AddUserToGroupCallable(const Model::AddUserToGroupRequest& request) const;

        /*
            <p>Adds the specified user to the specified group.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void AddUserToGroupAsync(const Model::AddUserToGroupRequest& request, const AddUserToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Attaches the specified managed policy to the specified group.</p> <p>You use this API to attach a managed policy to a group. To embed an inline policy in a group, use <a>PutGroupPolicy</a>. </p> <p>For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::AttachGroupPolicyOutcome AttachGroupPolicy(const Model::AttachGroupPolicyRequest& request) const;

        /*
            <p>Attaches the specified managed policy to the specified group.</p> <p>You use this API to attach a managed policy to a group. To embed an inline policy in a group, use <a>PutGroupPolicy</a>. </p> <p>For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::AttachGroupPolicyOutcomeCallable AttachGroupPolicyCallable(const Model::AttachGroupPolicyRequest& request) const;

        /*
            <p>Attaches the specified managed policy to the specified group.</p> <p>You use this API to attach a managed policy to a group. To embed an inline policy in a group, use <a>PutGroupPolicy</a>. </p> <p>For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void AttachGroupPolicyAsync(const Model::AttachGroupPolicyRequest& request, const AttachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Attaches the specified managed policy to the specified role.</p> <p>When you attach a managed policy to a role, the managed policy is used as the role's access (permissions) policy. You cannot use a managed policy as the role's trust policy. The role's trust policy is created at the same time as the role, using <a>CreateRole</a>. You can update a role's trust policy using <a>UpdateAssumeRolePolicy</a>. </p> <p>Use this API to attach a managed policy to a role. To embed an inline policy in a role, use <a>PutRolePolicy</a>. For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide.</p>
        */
        Model::AttachRolePolicyOutcome AttachRolePolicy(const Model::AttachRolePolicyRequest& request) const;

        /*
            <p>Attaches the specified managed policy to the specified role.</p> <p>When you attach a managed policy to a role, the managed policy is used as the role's access (permissions) policy. You cannot use a managed policy as the role's trust policy. The role's trust policy is created at the same time as the role, using <a>CreateRole</a>. You can update a role's trust policy using <a>UpdateAssumeRolePolicy</a>. </p> <p>Use this API to attach a managed policy to a role. To embed an inline policy in a role, use <a>PutRolePolicy</a>. For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::AttachRolePolicyOutcomeCallable AttachRolePolicyCallable(const Model::AttachRolePolicyRequest& request) const;

        /*
            <p>Attaches the specified managed policy to the specified role.</p> <p>When you attach a managed policy to a role, the managed policy is used as the role's access (permissions) policy. You cannot use a managed policy as the role's trust policy. The role's trust policy is created at the same time as the role, using <a>CreateRole</a>. You can update a role's trust policy using <a>UpdateAssumeRolePolicy</a>. </p> <p>Use this API to attach a managed policy to a role. To embed an inline policy in a role, use <a>PutRolePolicy</a>. For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void AttachRolePolicyAsync(const Model::AttachRolePolicyRequest& request, const AttachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Attaches the specified managed policy to the specified user.</p> <p>You use this API to attach a managed policy to a user. To embed an inline policy in a user, use <a>PutUserPolicy</a>. </p> <p>For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::AttachUserPolicyOutcome AttachUserPolicy(const Model::AttachUserPolicyRequest& request) const;

        /*
            <p>Attaches the specified managed policy to the specified user.</p> <p>You use this API to attach a managed policy to a user. To embed an inline policy in a user, use <a>PutUserPolicy</a>. </p> <p>For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::AttachUserPolicyOutcomeCallable AttachUserPolicyCallable(const Model::AttachUserPolicyRequest& request) const;

        /*
            <p>Attaches the specified managed policy to the specified user.</p> <p>You use this API to attach a managed policy to a user. To embed an inline policy in a user, use <a>PutUserPolicy</a>. </p> <p>For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void AttachUserPolicyAsync(const Model::AttachUserPolicyRequest& request, const AttachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Changes the password of the IAM user who is calling this action. The root account password is not affected by this action. </p> <p>To change the password for a different user, see <a>UpdateLoginProfile</a>. For more information about modifying passwords, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing Passwords</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::ChangePasswordOutcome ChangePassword(const Model::ChangePasswordRequest& request) const;

        /*
            <p>Changes the password of the IAM user who is calling this action. The root account password is not affected by this action. </p> <p>To change the password for a different user, see <a>UpdateLoginProfile</a>. For more information about modifying passwords, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing Passwords</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ChangePasswordOutcomeCallable ChangePasswordCallable(const Model::ChangePasswordRequest& request) const;

        /*
            <p>Changes the password of the IAM user who is calling this action. The root account password is not affected by this action. </p> <p>To change the password for a different user, see <a>UpdateLoginProfile</a>. For more information about modifying passwords, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing Passwords</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ChangePasswordAsync(const Model::ChangePasswordRequest& request, const ChangePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Creates a new AWS secret access key and corresponding AWS access key ID for the specified user. The default status for new keys is <code>Active</code>. </p> <p> If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID signing the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p> <p> For information about limits on the number of keys you can create, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p> <important> To ensure the security of your AWS account, the secret access key is accessible only during key and user creation. You must save the key (for example, in a text file) if you want to be able to access it again. If a secret key is lost, you can delete the access keys for the associated user and then create new keys. </important>
        */
        Model::CreateAccessKeyOutcome CreateAccessKey(const Model::CreateAccessKeyRequest& request) const;

        /*
            <p> Creates a new AWS secret access key and corresponding AWS access key ID for the specified user. The default status for new keys is <code>Active</code>. </p> <p> If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID signing the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p> <p> For information about limits on the number of keys you can create, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p> <important> To ensure the security of your AWS account, the secret access key is accessible only during key and user creation. You must save the key (for example, in a text file) if you want to be able to access it again. If a secret key is lost, you can delete the access keys for the associated user and then create new keys. </important>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateAccessKeyOutcomeCallable CreateAccessKeyCallable(const Model::CreateAccessKeyRequest& request) const;

        /*
            <p> Creates a new AWS secret access key and corresponding AWS access key ID for the specified user. The default status for new keys is <code>Active</code>. </p> <p> If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID signing the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p> <p> For information about limits on the number of keys you can create, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p> <important> To ensure the security of your AWS account, the secret access key is accessible only during key and user creation. You must save the key (for example, in a text file) if you want to be able to access it again. If a secret key is lost, you can delete the access keys for the associated user and then create new keys. </important>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateAccessKeyAsync(const Model::CreateAccessKeyRequest& request, const CreateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Creates an alias for your AWS account. For information about using an AWS account alias, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using an Alias for Your AWS Account ID</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::CreateAccountAliasOutcome CreateAccountAlias(const Model::CreateAccountAliasRequest& request) const;

        /*
            <p>Creates an alias for your AWS account. For information about using an AWS account alias, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using an Alias for Your AWS Account ID</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateAccountAliasOutcomeCallable CreateAccountAliasCallable(const Model::CreateAccountAliasRequest& request) const;

        /*
            <p>Creates an alias for your AWS account. For information about using an AWS account alias, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using an Alias for Your AWS Account ID</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateAccountAliasAsync(const Model::CreateAccountAliasRequest& request, const CreateAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Creates a new group.</p> <p> For information about the number of groups you can create, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /*
            <p>Creates a new group.</p> <p> For information about the number of groups you can create, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request) const;

        /*
            <p>Creates a new group.</p> <p> For information about the number of groups you can create, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Creates a new instance profile. For information about instance profiles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a>. </p> <p> For information about the number of instance profiles you can create, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::CreateInstanceProfileOutcome CreateInstanceProfile(const Model::CreateInstanceProfileRequest& request) const;

        /*
            <p> Creates a new instance profile. For information about instance profiles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a>. </p> <p> For information about the number of instance profiles you can create, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateInstanceProfileOutcomeCallable CreateInstanceProfileCallable(const Model::CreateInstanceProfileRequest& request) const;

        /*
            <p> Creates a new instance profile. For information about instance profiles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a>. </p> <p> For information about the number of instance profiles you can create, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateInstanceProfileAsync(const Model::CreateInstanceProfileRequest& request, const CreateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Creates a password for the specified user, giving the user the ability to access AWS services through the AWS Management Console. For more information about managing passwords, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing Passwords</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::CreateLoginProfileOutcome CreateLoginProfile(const Model::CreateLoginProfileRequest& request) const;

        /*
            <p> Creates a password for the specified user, giving the user the ability to access AWS services through the AWS Management Console. For more information about managing passwords, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing Passwords</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateLoginProfileOutcomeCallable CreateLoginProfileCallable(const Model::CreateLoginProfileRequest& request) const;

        /*
            <p> Creates a password for the specified user, giving the user the ability to access AWS services through the AWS Management Console. For more information about managing passwords, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing Passwords</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateLoginProfileAsync(const Model::CreateLoginProfileRequest& request, const CreateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Creates an IAM entity to describe an identity provider (IdP) that supports <a href="http://openid.net/connect/">OpenID Connect (OIDC)</a>. </p> <p>The OIDC provider that you create with this operation can be used as a principal in a role's trust policy to establish a trust relationship between AWS and the OIDC provider. </p> <p>When you create the IAM OIDC provider, you specify the URL of the OIDC identity provider (IdP) to trust, a list of client IDs (also known as audiences) that identify the application or applications that are allowed to authenticate using the OIDC provider, and a list of thumbprints of the server certificate(s) that the IdP uses. You get all of this information from the OIDC IdP that you want to use for access to AWS. </p> <note>Because trust for the OIDC provider is ultimately derived from the IAM provider that this action creates, it is a best practice to limit access to the <a>CreateOpenIDConnectProvider</a> action to highly-privileged users. </note>
        */
        Model::CreateOpenIDConnectProviderOutcome CreateOpenIDConnectProvider(const Model::CreateOpenIDConnectProviderRequest& request) const;

        /*
            <p>Creates an IAM entity to describe an identity provider (IdP) that supports <a href="http://openid.net/connect/">OpenID Connect (OIDC)</a>. </p> <p>The OIDC provider that you create with this operation can be used as a principal in a role's trust policy to establish a trust relationship between AWS and the OIDC provider. </p> <p>When you create the IAM OIDC provider, you specify the URL of the OIDC identity provider (IdP) to trust, a list of client IDs (also known as audiences) that identify the application or applications that are allowed to authenticate using the OIDC provider, and a list of thumbprints of the server certificate(s) that the IdP uses. You get all of this information from the OIDC IdP that you want to use for access to AWS. </p> <note>Because trust for the OIDC provider is ultimately derived from the IAM provider that this action creates, it is a best practice to limit access to the <a>CreateOpenIDConnectProvider</a> action to highly-privileged users. </note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateOpenIDConnectProviderOutcomeCallable CreateOpenIDConnectProviderCallable(const Model::CreateOpenIDConnectProviderRequest& request) const;

        /*
            <p>Creates an IAM entity to describe an identity provider (IdP) that supports <a href="http://openid.net/connect/">OpenID Connect (OIDC)</a>. </p> <p>The OIDC provider that you create with this operation can be used as a principal in a role's trust policy to establish a trust relationship between AWS and the OIDC provider. </p> <p>When you create the IAM OIDC provider, you specify the URL of the OIDC identity provider (IdP) to trust, a list of client IDs (also known as audiences) that identify the application or applications that are allowed to authenticate using the OIDC provider, and a list of thumbprints of the server certificate(s) that the IdP uses. You get all of this information from the OIDC IdP that you want to use for access to AWS. </p> <note>Because trust for the OIDC provider is ultimately derived from the IAM provider that this action creates, it is a best practice to limit access to the <a>CreateOpenIDConnectProvider</a> action to highly-privileged users. </note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateOpenIDConnectProviderAsync(const Model::CreateOpenIDConnectProviderRequest& request, const CreateOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Creates a new managed policy for your AWS account. </p> <p>This operation creates a policy version with a version identifier of <code>v1</code> and sets v1 as the policy's default version. For more information about policy versions, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning for Managed Policies</a> in the <i>Using IAM</i> guide. </p> <p>For more information about managed policies in general, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::CreatePolicyOutcome CreatePolicy(const Model::CreatePolicyRequest& request) const;

        /*
            <p>Creates a new managed policy for your AWS account. </p> <p>This operation creates a policy version with a version identifier of <code>v1</code> and sets v1 as the policy's default version. For more information about policy versions, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning for Managed Policies</a> in the <i>Using IAM</i> guide. </p> <p>For more information about managed policies in general, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreatePolicyOutcomeCallable CreatePolicyCallable(const Model::CreatePolicyRequest& request) const;

        /*
            <p>Creates a new managed policy for your AWS account. </p> <p>This operation creates a policy version with a version identifier of <code>v1</code> and sets v1 as the policy's default version. For more information about policy versions, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning for Managed Policies</a> in the <i>Using IAM</i> guide. </p> <p>For more information about managed policies in general, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreatePolicyAsync(const Model::CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Creates a new version of the specified managed policy. To update a managed policy, you create a new policy version. A managed policy can have up to five versions. If the policy has five versions, you must delete an existing version using <a>DeletePolicyVersion</a> before you create a new version. </p> <p>Optionally, you can set the new version as the policy's default version. The default version is the operative version; that is, the version that is in effect for the IAM users, groups, and roles that the policy is attached to. </p> <p>For more information about managed policy versions, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning for Managed Policies</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::CreatePolicyVersionOutcome CreatePolicyVersion(const Model::CreatePolicyVersionRequest& request) const;

        /*
            <p>Creates a new version of the specified managed policy. To update a managed policy, you create a new policy version. A managed policy can have up to five versions. If the policy has five versions, you must delete an existing version using <a>DeletePolicyVersion</a> before you create a new version. </p> <p>Optionally, you can set the new version as the policy's default version. The default version is the operative version; that is, the version that is in effect for the IAM users, groups, and roles that the policy is attached to. </p> <p>For more information about managed policy versions, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning for Managed Policies</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreatePolicyVersionOutcomeCallable CreatePolicyVersionCallable(const Model::CreatePolicyVersionRequest& request) const;

        /*
            <p>Creates a new version of the specified managed policy. To update a managed policy, you create a new policy version. A managed policy can have up to five versions. If the policy has five versions, you must delete an existing version using <a>DeletePolicyVersion</a> before you create a new version. </p> <p>Optionally, you can set the new version as the policy's default version. The default version is the operative version; that is, the version that is in effect for the IAM users, groups, and roles that the policy is attached to. </p> <p>For more information about managed policy versions, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning for Managed Policies</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreatePolicyVersionAsync(const Model::CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Creates a new role for your AWS account. For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with Roles</a>. For information about limitations on role names and the number of roles you can create, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p> <p>The policy in the following example grants permission to an EC2 instance to assume the role.</p>
        */
        Model::CreateRoleOutcome CreateRole(const Model::CreateRoleRequest& request) const;

        /*
            <p>Creates a new role for your AWS account. For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with Roles</a>. For information about limitations on role names and the number of roles you can create, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p> <p>The policy in the following example grants permission to an EC2 instance to assume the role.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateRoleOutcomeCallable CreateRoleCallable(const Model::CreateRoleRequest& request) const;

        /*
            <p>Creates a new role for your AWS account. For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with Roles</a>. For information about limitations on role names and the number of roles you can create, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p> <p>The policy in the following example grants permission to an EC2 instance to assume the role.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateRoleAsync(const Model::CreateRoleRequest& request, const CreateRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Creates an IAM entity to describe an identity provider (IdP) that supports SAML 2.0.</p> <p> The SAML provider that you create with this operation can be used as a principal in a role's trust policy to establish a trust relationship between AWS and a SAML identity provider. You can create an IAM role that supports Web-based single sign-on (SSO) to the AWS Management Console or one that supports API access to AWS. </p> <p> When you create the SAML provider, you upload an a SAML metadata document that you get from your IdP and that includes the issuer's name, expiration information, and keys that can be used to validate the SAML authentication response (assertions) that are received from the IdP. You must generate the metadata document using the identity management software that is used as your organization's IdP. </p> <note> This operation requires <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4</a>. </note> <p> For more information, see <a href="http://docs.aws.amazon.com/STS/latest/UsingSTS/STSMgmtConsole-SAML.html">Giving Console Access Using SAML</a> and <a href="http://docs.aws.amazon.com/STS/latest/UsingSTS/CreatingSAML.html">Creating Temporary Security Credentials for SAML Federation</a> in the <i>Using Temporary Credentials</i> guide. </p>
        */
        Model::CreateSAMLProviderOutcome CreateSAMLProvider(const Model::CreateSAMLProviderRequest& request) const;

        /*
            <p>Creates an IAM entity to describe an identity provider (IdP) that supports SAML 2.0.</p> <p> The SAML provider that you create with this operation can be used as a principal in a role's trust policy to establish a trust relationship between AWS and a SAML identity provider. You can create an IAM role that supports Web-based single sign-on (SSO) to the AWS Management Console or one that supports API access to AWS. </p> <p> When you create the SAML provider, you upload an a SAML metadata document that you get from your IdP and that includes the issuer's name, expiration information, and keys that can be used to validate the SAML authentication response (assertions) that are received from the IdP. You must generate the metadata document using the identity management software that is used as your organization's IdP. </p> <note> This operation requires <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4</a>. </note> <p> For more information, see <a href="http://docs.aws.amazon.com/STS/latest/UsingSTS/STSMgmtConsole-SAML.html">Giving Console Access Using SAML</a> and <a href="http://docs.aws.amazon.com/STS/latest/UsingSTS/CreatingSAML.html">Creating Temporary Security Credentials for SAML Federation</a> in the <i>Using Temporary Credentials</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateSAMLProviderOutcomeCallable CreateSAMLProviderCallable(const Model::CreateSAMLProviderRequest& request) const;

        /*
            <p>Creates an IAM entity to describe an identity provider (IdP) that supports SAML 2.0.</p> <p> The SAML provider that you create with this operation can be used as a principal in a role's trust policy to establish a trust relationship between AWS and a SAML identity provider. You can create an IAM role that supports Web-based single sign-on (SSO) to the AWS Management Console or one that supports API access to AWS. </p> <p> When you create the SAML provider, you upload an a SAML metadata document that you get from your IdP and that includes the issuer's name, expiration information, and keys that can be used to validate the SAML authentication response (assertions) that are received from the IdP. You must generate the metadata document using the identity management software that is used as your organization's IdP. </p> <note> This operation requires <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4</a>. </note> <p> For more information, see <a href="http://docs.aws.amazon.com/STS/latest/UsingSTS/STSMgmtConsole-SAML.html">Giving Console Access Using SAML</a> and <a href="http://docs.aws.amazon.com/STS/latest/UsingSTS/CreatingSAML.html">Creating Temporary Security Credentials for SAML Federation</a> in the <i>Using Temporary Credentials</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateSAMLProviderAsync(const Model::CreateSAMLProviderRequest& request, const CreateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Creates a new user for your AWS account.</p> <p> For information about limitations on the number of users you can create, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /*
            <p>Creates a new user for your AWS account.</p> <p> For information about limitations on the number of users you can create, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /*
            <p>Creates a new user for your AWS account.</p> <p> For information about limitations on the number of users you can create, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Creates a new virtual MFA device for the AWS account. After creating the virtual MFA, use <a>EnableMFADevice</a> to attach the MFA device to an IAM user. For more information about creating and working with virtual MFA devices, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using a Virtual MFA Device</a> in the <i>Using IAM</i> guide. </p> <p>For information about limits on the number of MFA devices you can create, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on Entities</a> in the <i>Using IAM</i> guide. </p> <important>The seed information contained in the QR code and the Base32 string should be treated like any other secret access information, such as your AWS access keys or your passwords. After you provision your virtual device, you should ensure that the information is destroyed following secure procedures. </important>
        */
        Model::CreateVirtualMFADeviceOutcome CreateVirtualMFADevice(const Model::CreateVirtualMFADeviceRequest& request) const;

        /*
            <p>Creates a new virtual MFA device for the AWS account. After creating the virtual MFA, use <a>EnableMFADevice</a> to attach the MFA device to an IAM user. For more information about creating and working with virtual MFA devices, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using a Virtual MFA Device</a> in the <i>Using IAM</i> guide. </p> <p>For information about limits on the number of MFA devices you can create, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on Entities</a> in the <i>Using IAM</i> guide. </p> <important>The seed information contained in the QR code and the Base32 string should be treated like any other secret access information, such as your AWS access keys or your passwords. After you provision your virtual device, you should ensure that the information is destroyed following secure procedures. </important>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateVirtualMFADeviceOutcomeCallable CreateVirtualMFADeviceCallable(const Model::CreateVirtualMFADeviceRequest& request) const;

        /*
            <p>Creates a new virtual MFA device for the AWS account. After creating the virtual MFA, use <a>EnableMFADevice</a> to attach the MFA device to an IAM user. For more information about creating and working with virtual MFA devices, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using a Virtual MFA Device</a> in the <i>Using IAM</i> guide. </p> <p>For information about limits on the number of MFA devices you can create, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on Entities</a> in the <i>Using IAM</i> guide. </p> <important>The seed information contained in the QR code and the Base32 string should be treated like any other secret access information, such as your AWS access keys or your passwords. After you provision your virtual device, you should ensure that the information is destroyed following secure procedures. </important>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateVirtualMFADeviceAsync(const Model::CreateVirtualMFADeviceRequest& request, const CreateVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deactivates the specified MFA device and removes it from association with the user name for which it was originally enabled. </p> <p>For more information about creating and working with virtual MFA devices, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using a Virtual MFA Device</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::DeactivateMFADeviceOutcome DeactivateMFADevice(const Model::DeactivateMFADeviceRequest& request) const;

        /*
            <p>Deactivates the specified MFA device and removes it from association with the user name for which it was originally enabled. </p> <p>For more information about creating and working with virtual MFA devices, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using a Virtual MFA Device</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeactivateMFADeviceOutcomeCallable DeactivateMFADeviceCallable(const Model::DeactivateMFADeviceRequest& request) const;

        /*
            <p>Deactivates the specified MFA device and removes it from association with the user name for which it was originally enabled. </p> <p>For more information about creating and working with virtual MFA devices, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using a Virtual MFA Device</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeactivateMFADeviceAsync(const Model::DeactivateMFADeviceRequest& request, const DeactivateMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the access key associated with the specified user.</p> <p> If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID signing the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p>
        */
        Model::DeleteAccessKeyOutcome DeleteAccessKey(const Model::DeleteAccessKeyRequest& request) const;

        /*
            <p>Deletes the access key associated with the specified user.</p> <p> If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID signing the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteAccessKeyOutcomeCallable DeleteAccessKeyCallable(const Model::DeleteAccessKeyRequest& request) const;

        /*
            <p>Deletes the access key associated with the specified user.</p> <p> If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID signing the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteAccessKeyAsync(const Model::DeleteAccessKeyRequest& request, const DeleteAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Deletes the specified AWS account alias. For information about using an AWS account alias, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using an Alias for Your AWS Account ID</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::DeleteAccountAliasOutcome DeleteAccountAlias(const Model::DeleteAccountAliasRequest& request) const;

        /*
            <p> Deletes the specified AWS account alias. For information about using an AWS account alias, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using an Alias for Your AWS Account ID</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteAccountAliasOutcomeCallable DeleteAccountAliasCallable(const Model::DeleteAccountAliasRequest& request) const;

        /*
            <p> Deletes the specified AWS account alias. For information about using an AWS account alias, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using an Alias for Your AWS Account ID</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteAccountAliasAsync(const Model::DeleteAccountAliasRequest& request, const DeleteAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the password policy for the AWS account.</p>
        */
        Model::DeleteAccountPasswordPolicyOutcome DeleteAccountPasswordPolicy(const Model::DeleteAccountPasswordPolicyRequest& request) const;

        /*
            <p>Deletes the password policy for the AWS account.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteAccountPasswordPolicyOutcomeCallable DeleteAccountPasswordPolicyCallable(const Model::DeleteAccountPasswordPolicyRequest& request) const;

        /*
            <p>Deletes the password policy for the AWS account.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteAccountPasswordPolicyAsync(const Model::DeleteAccountPasswordPolicyRequest& request, const DeleteAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Deletes the specified group. The group must not contain any users or have any attached policies. </p>
        */
        Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /*
            <p> Deletes the specified group. The group must not contain any users or have any attached policies. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request) const;

        /*
            <p> Deletes the specified group. The group must not contain any users or have any attached policies. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the specified inline policy that is embedded in the specified group.</p> <p>A group can also have managed policies attached to it. To detach a managed policy from a group, use <a>DetachGroupPolicy</a>. For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::DeleteGroupPolicyOutcome DeleteGroupPolicy(const Model::DeleteGroupPolicyRequest& request) const;

        /*
            <p>Deletes the specified inline policy that is embedded in the specified group.</p> <p>A group can also have managed policies attached to it. To detach a managed policy from a group, use <a>DetachGroupPolicy</a>. For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteGroupPolicyOutcomeCallable DeleteGroupPolicyCallable(const Model::DeleteGroupPolicyRequest& request) const;

        /*
            <p>Deletes the specified inline policy that is embedded in the specified group.</p> <p>A group can also have managed policies attached to it. To detach a managed policy from a group, use <a>DetachGroupPolicy</a>. For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteGroupPolicyAsync(const Model::DeleteGroupPolicyRequest& request, const DeleteGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the specified instance profile. The instance profile must not have an associated role. </p> <important> Make sure you do not have any Amazon EC2 instances running with the instance profile you are about to delete. Deleting a role or instance profile that is associated with a running instance will break any applications running on the instance. </important> <p>For more information about instance profiles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a>. </p>
        */
        Model::DeleteInstanceProfileOutcome DeleteInstanceProfile(const Model::DeleteInstanceProfileRequest& request) const;

        /*
            <p>Deletes the specified instance profile. The instance profile must not have an associated role. </p> <important> Make sure you do not have any Amazon EC2 instances running with the instance profile you are about to delete. Deleting a role or instance profile that is associated with a running instance will break any applications running on the instance. </important> <p>For more information about instance profiles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a>. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteInstanceProfileOutcomeCallable DeleteInstanceProfileCallable(const Model::DeleteInstanceProfileRequest& request) const;

        /*
            <p>Deletes the specified instance profile. The instance profile must not have an associated role. </p> <important> Make sure you do not have any Amazon EC2 instances running with the instance profile you are about to delete. Deleting a role or instance profile that is associated with a running instance will break any applications running on the instance. </important> <p>For more information about instance profiles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a>. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteInstanceProfileAsync(const Model::DeleteInstanceProfileRequest& request, const DeleteInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Deletes the password for the specified user, which terminates the user's ability to access AWS services through the AWS Management Console. </p> <important> Deleting a user's password does not prevent a user from accessing IAM through the command line interface or the API. To prevent all user access you must also either make the access key inactive or delete it. For more information about making keys inactive or deleting them, see <a>UpdateAccessKey</a> and <a>DeleteAccessKey</a>. </important>
        */
        Model::DeleteLoginProfileOutcome DeleteLoginProfile(const Model::DeleteLoginProfileRequest& request) const;

        /*
            <p> Deletes the password for the specified user, which terminates the user's ability to access AWS services through the AWS Management Console. </p> <important> Deleting a user's password does not prevent a user from accessing IAM through the command line interface or the API. To prevent all user access you must also either make the access key inactive or delete it. For more information about making keys inactive or deleting them, see <a>UpdateAccessKey</a> and <a>DeleteAccessKey</a>. </important>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteLoginProfileOutcomeCallable DeleteLoginProfileCallable(const Model::DeleteLoginProfileRequest& request) const;

        /*
            <p> Deletes the password for the specified user, which terminates the user's ability to access AWS services through the AWS Management Console. </p> <important> Deleting a user's password does not prevent a user from accessing IAM through the command line interface or the API. To prevent all user access you must also either make the access key inactive or delete it. For more information about making keys inactive or deleting them, see <a>UpdateAccessKey</a> and <a>DeleteAccessKey</a>. </important>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteLoginProfileAsync(const Model::DeleteLoginProfileRequest& request, const DeleteLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes an IAM OpenID Connect identity provider.</p> <p>Deleting an OIDC provider does not update any roles that reference the provider as a principal in their trust policies. Any attempt to assume a role that references a provider that has been deleted will fail. </p> <p>This action is idempotent; it does not fail or return an error if you call the action for a provider that was already deleted.</p>
        */
        Model::DeleteOpenIDConnectProviderOutcome DeleteOpenIDConnectProvider(const Model::DeleteOpenIDConnectProviderRequest& request) const;

        /*
            <p>Deletes an IAM OpenID Connect identity provider.</p> <p>Deleting an OIDC provider does not update any roles that reference the provider as a principal in their trust policies. Any attempt to assume a role that references a provider that has been deleted will fail. </p> <p>This action is idempotent; it does not fail or return an error if you call the action for a provider that was already deleted.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteOpenIDConnectProviderOutcomeCallable DeleteOpenIDConnectProviderCallable(const Model::DeleteOpenIDConnectProviderRequest& request) const;

        /*
            <p>Deletes an IAM OpenID Connect identity provider.</p> <p>Deleting an OIDC provider does not update any roles that reference the provider as a principal in their trust policies. Any attempt to assume a role that references a provider that has been deleted will fail. </p> <p>This action is idempotent; it does not fail or return an error if you call the action for a provider that was already deleted.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteOpenIDConnectProviderAsync(const Model::DeleteOpenIDConnectProviderRequest& request, const DeleteOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the specified managed policy.</p> <p>Before you can delete a managed policy, you must detach the policy from all users, groups, and roles that it is attached to, and you must delete all of the policy's versions. The following steps describe the process for deleting a managed policy: <ol> <li>Detach the policy from all users, groups, and roles that the policy is attached to, using the <a>DetachUserPolicy</a>, <a>DetachGroupPolicy</a>, or <a>DetachRolePolicy</a> APIs. To list all the users, groups, and roles that a policy is attached to, use <a>ListEntitiesForPolicy</a>. </li> <li>Delete all versions of the policy using <a>DeletePolicyVersion</a>. To list the policy's versions, use <a>ListPolicyVersions</a>. You cannot use <a>DeletePolicyVersion</a> to delete the version that is marked as the default version. You delete the policy's default version in the next step of the process. </li> <li>Delete the policy (this automatically deletes the policy's default version) using this API. </li> </ol> </p> <p>For information about managed policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

        /*
            <p>Deletes the specified managed policy.</p> <p>Before you can delete a managed policy, you must detach the policy from all users, groups, and roles that it is attached to, and you must delete all of the policy's versions. The following steps describe the process for deleting a managed policy: <ol> <li>Detach the policy from all users, groups, and roles that the policy is attached to, using the <a>DetachUserPolicy</a>, <a>DetachGroupPolicy</a>, or <a>DetachRolePolicy</a> APIs. To list all the users, groups, and roles that a policy is attached to, use <a>ListEntitiesForPolicy</a>. </li> <li>Delete all versions of the policy using <a>DeletePolicyVersion</a>. To list the policy's versions, use <a>ListPolicyVersions</a>. You cannot use <a>DeletePolicyVersion</a> to delete the version that is marked as the default version. You delete the policy's default version in the next step of the process. </li> <li>Delete the policy (this automatically deletes the policy's default version) using this API. </li> </ol> </p> <p>For information about managed policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const Model::DeletePolicyRequest& request) const;

        /*
            <p>Deletes the specified managed policy.</p> <p>Before you can delete a managed policy, you must detach the policy from all users, groups, and roles that it is attached to, and you must delete all of the policy's versions. The following steps describe the process for deleting a managed policy: <ol> <li>Detach the policy from all users, groups, and roles that the policy is attached to, using the <a>DetachUserPolicy</a>, <a>DetachGroupPolicy</a>, or <a>DetachRolePolicy</a> APIs. To list all the users, groups, and roles that a policy is attached to, use <a>ListEntitiesForPolicy</a>. </li> <li>Delete all versions of the policy using <a>DeletePolicyVersion</a>. To list the policy's versions, use <a>ListPolicyVersions</a>. You cannot use <a>DeletePolicyVersion</a> to delete the version that is marked as the default version. You delete the policy's default version in the next step of the process. </li> <li>Delete the policy (this automatically deletes the policy's default version) using this API. </li> </ol> </p> <p>For information about managed policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the specified version of the specified managed policy.</p> <p>You cannot delete the default version of a policy using this API. To delete the default version of a policy, use <a>DeletePolicy</a>. To find out which version of a policy is marked as the default version, use <a>ListPolicyVersions</a>. </p> <p>For information about versions for managed policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning for Managed Policies</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::DeletePolicyVersionOutcome DeletePolicyVersion(const Model::DeletePolicyVersionRequest& request) const;

        /*
            <p>Deletes the specified version of the specified managed policy.</p> <p>You cannot delete the default version of a policy using this API. To delete the default version of a policy, use <a>DeletePolicy</a>. To find out which version of a policy is marked as the default version, use <a>ListPolicyVersions</a>. </p> <p>For information about versions for managed policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning for Managed Policies</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeletePolicyVersionOutcomeCallable DeletePolicyVersionCallable(const Model::DeletePolicyVersionRequest& request) const;

        /*
            <p>Deletes the specified version of the specified managed policy.</p> <p>You cannot delete the default version of a policy using this API. To delete the default version of a policy, use <a>DeletePolicy</a>. To find out which version of a policy is marked as the default version, use <a>ListPolicyVersions</a>. </p> <p>For information about versions for managed policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning for Managed Policies</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeletePolicyVersionAsync(const Model::DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the specified role. The role must not have any policies attached. For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with Roles</a>. </p> <important>Make sure you do not have any Amazon EC2 instances running with the role you are about to delete. Deleting a role or instance profile that is associated with a running instance will break any applications running on the instance. </important>
        */
        Model::DeleteRoleOutcome DeleteRole(const Model::DeleteRoleRequest& request) const;

        /*
            <p>Deletes the specified role. The role must not have any policies attached. For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with Roles</a>. </p> <important>Make sure you do not have any Amazon EC2 instances running with the role you are about to delete. Deleting a role or instance profile that is associated with a running instance will break any applications running on the instance. </important>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteRoleOutcomeCallable DeleteRoleCallable(const Model::DeleteRoleRequest& request) const;

        /*
            <p>Deletes the specified role. The role must not have any policies attached. For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with Roles</a>. </p> <important>Make sure you do not have any Amazon EC2 instances running with the role you are about to delete. Deleting a role or instance profile that is associated with a running instance will break any applications running on the instance. </important>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteRoleAsync(const Model::DeleteRoleRequest& request, const DeleteRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the specified inline policy that is embedded in the specified role.</p> <p>A role can also have managed policies attached to it. To detach a managed policy from a role, use <a>DetachRolePolicy</a>. For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::DeleteRolePolicyOutcome DeleteRolePolicy(const Model::DeleteRolePolicyRequest& request) const;

        /*
            <p>Deletes the specified inline policy that is embedded in the specified role.</p> <p>A role can also have managed policies attached to it. To detach a managed policy from a role, use <a>DetachRolePolicy</a>. For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteRolePolicyOutcomeCallable DeleteRolePolicyCallable(const Model::DeleteRolePolicyRequest& request) const;

        /*
            <p>Deletes the specified inline policy that is embedded in the specified role.</p> <p>A role can also have managed policies attached to it. To detach a managed policy from a role, use <a>DetachRolePolicy</a>. For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteRolePolicyAsync(const Model::DeleteRolePolicyRequest& request, const DeleteRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes a SAML provider.</p> <p> Deleting the provider does not update any roles that reference the SAML provider as a principal in their trust policies. Any attempt to assume a role that references a SAML provider that has been deleted will fail. </p> <note> This operation requires <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4</a>. </note>
        */
        Model::DeleteSAMLProviderOutcome DeleteSAMLProvider(const Model::DeleteSAMLProviderRequest& request) const;

        /*
            <p>Deletes a SAML provider.</p> <p> Deleting the provider does not update any roles that reference the SAML provider as a principal in their trust policies. Any attempt to assume a role that references a SAML provider that has been deleted will fail. </p> <note> This operation requires <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4</a>. </note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteSAMLProviderOutcomeCallable DeleteSAMLProviderCallable(const Model::DeleteSAMLProviderRequest& request) const;

        /*
            <p>Deletes a SAML provider.</p> <p> Deleting the provider does not update any roles that reference the SAML provider as a principal in their trust policies. Any attempt to assume a role that references a SAML provider that has been deleted will fail. </p> <note> This operation requires <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4</a>. </note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteSAMLProviderAsync(const Model::DeleteSAMLProviderRequest& request, const DeleteSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the specified SSH public key.</p> <p>The SSH public key deleted by this action is used only for authenticating the associated IAM user to an AWS CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User Guide</i>.</p>
        */
        Model::DeleteSSHPublicKeyOutcome DeleteSSHPublicKey(const Model::DeleteSSHPublicKeyRequest& request) const;

        /*
            <p>Deletes the specified SSH public key.</p> <p>The SSH public key deleted by this action is used only for authenticating the associated IAM user to an AWS CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User Guide</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteSSHPublicKeyOutcomeCallable DeleteSSHPublicKeyCallable(const Model::DeleteSSHPublicKeyRequest& request) const;

        /*
            <p>Deletes the specified SSH public key.</p> <p>The SSH public key deleted by this action is used only for authenticating the associated IAM user to an AWS CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User Guide</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteSSHPublicKeyAsync(const Model::DeleteSSHPublicKeyRequest& request, const DeleteSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the specified server certificate.</p> <important> If you are using a server certificate with Elastic Load Balancing, deleting the certificate could have implications for your application. If Elastic Load Balancing doesn't detect the deletion of bound certificates, it may continue to use the certificates. This could cause Elastic Load Balancing to stop accepting traffic. We recommend that you remove the reference to the certificate from Elastic Load Balancing before using this command to delete the certificate. For more information, go to <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/APIReference/API_DeleteLoadBalancerListeners.html">DeleteLoadBalancerListeners</a> in the <i>Elastic Load Balancing API Reference</i>. </important>
        */
        Model::DeleteServerCertificateOutcome DeleteServerCertificate(const Model::DeleteServerCertificateRequest& request) const;

        /*
            <p>Deletes the specified server certificate.</p> <important> If you are using a server certificate with Elastic Load Balancing, deleting the certificate could have implications for your application. If Elastic Load Balancing doesn't detect the deletion of bound certificates, it may continue to use the certificates. This could cause Elastic Load Balancing to stop accepting traffic. We recommend that you remove the reference to the certificate from Elastic Load Balancing before using this command to delete the certificate. For more information, go to <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/APIReference/API_DeleteLoadBalancerListeners.html">DeleteLoadBalancerListeners</a> in the <i>Elastic Load Balancing API Reference</i>. </important>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteServerCertificateOutcomeCallable DeleteServerCertificateCallable(const Model::DeleteServerCertificateRequest& request) const;

        /*
            <p>Deletes the specified server certificate.</p> <important> If you are using a server certificate with Elastic Load Balancing, deleting the certificate could have implications for your application. If Elastic Load Balancing doesn't detect the deletion of bound certificates, it may continue to use the certificates. This could cause Elastic Load Balancing to stop accepting traffic. We recommend that you remove the reference to the certificate from Elastic Load Balancing before using this command to delete the certificate. For more information, go to <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/APIReference/API_DeleteLoadBalancerListeners.html">DeleteLoadBalancerListeners</a> in the <i>Elastic Load Balancing API Reference</i>. </important>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteServerCertificateAsync(const Model::DeleteServerCertificateRequest& request, const DeleteServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the specified signing certificate associated with the specified user.</p> <p>If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID signing the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p>
        */
        Model::DeleteSigningCertificateOutcome DeleteSigningCertificate(const Model::DeleteSigningCertificateRequest& request) const;

        /*
            <p>Deletes the specified signing certificate associated with the specified user.</p> <p>If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID signing the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteSigningCertificateOutcomeCallable DeleteSigningCertificateCallable(const Model::DeleteSigningCertificateRequest& request) const;

        /*
            <p>Deletes the specified signing certificate associated with the specified user.</p> <p>If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID signing the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteSigningCertificateAsync(const Model::DeleteSigningCertificateRequest& request, const DeleteSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Deletes the specified user. The user must not belong to any groups, have any keys or signing certificates, or have any attached policies. </p>
        */
        Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /*
            <p> Deletes the specified user. The user must not belong to any groups, have any keys or signing certificates, or have any attached policies. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /*
            <p> Deletes the specified user. The user must not belong to any groups, have any keys or signing certificates, or have any attached policies. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the specified inline policy that is embedded in the specified user.</p> <p>A user can also have managed policies attached to it. To detach a managed policy from a user, use <a>DetachUserPolicy</a>. For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::DeleteUserPolicyOutcome DeleteUserPolicy(const Model::DeleteUserPolicyRequest& request) const;

        /*
            <p>Deletes the specified inline policy that is embedded in the specified user.</p> <p>A user can also have managed policies attached to it. To detach a managed policy from a user, use <a>DetachUserPolicy</a>. For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteUserPolicyOutcomeCallable DeleteUserPolicyCallable(const Model::DeleteUserPolicyRequest& request) const;

        /*
            <p>Deletes the specified inline policy that is embedded in the specified user.</p> <p>A user can also have managed policies attached to it. To detach a managed policy from a user, use <a>DetachUserPolicy</a>. For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteUserPolicyAsync(const Model::DeleteUserPolicyRequest& request, const DeleteUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes a virtual MFA device.</p> <note> You must deactivate a user's virtual MFA device before you can delete it. For information about deactivating MFA devices, see <a>DeactivateMFADevice</a>. </note>
        */
        Model::DeleteVirtualMFADeviceOutcome DeleteVirtualMFADevice(const Model::DeleteVirtualMFADeviceRequest& request) const;

        /*
            <p>Deletes a virtual MFA device.</p> <note> You must deactivate a user's virtual MFA device before you can delete it. For information about deactivating MFA devices, see <a>DeactivateMFADevice</a>. </note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteVirtualMFADeviceOutcomeCallable DeleteVirtualMFADeviceCallable(const Model::DeleteVirtualMFADeviceRequest& request) const;

        /*
            <p>Deletes a virtual MFA device.</p> <note> You must deactivate a user's virtual MFA device before you can delete it. For information about deactivating MFA devices, see <a>DeactivateMFADevice</a>. </note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteVirtualMFADeviceAsync(const Model::DeleteVirtualMFADeviceRequest& request, const DeleteVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Removes the specified managed policy from the specified group. </p> <p>A group can also have inline policies embedded with it. To delete an inline policy, use the <a>DeleteGroupPolicy</a> API. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::DetachGroupPolicyOutcome DetachGroupPolicy(const Model::DetachGroupPolicyRequest& request) const;

        /*
            <p>Removes the specified managed policy from the specified group. </p> <p>A group can also have inline policies embedded with it. To delete an inline policy, use the <a>DeleteGroupPolicy</a> API. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DetachGroupPolicyOutcomeCallable DetachGroupPolicyCallable(const Model::DetachGroupPolicyRequest& request) const;

        /*
            <p>Removes the specified managed policy from the specified group. </p> <p>A group can also have inline policies embedded with it. To delete an inline policy, use the <a>DeleteGroupPolicy</a> API. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DetachGroupPolicyAsync(const Model::DetachGroupPolicyRequest& request, const DetachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Removes the specified managed policy from the specified role. </p> <p>A role can also have inline policies embedded with it. To delete an inline policy, use the <a>DeleteRolePolicy</a> API. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::DetachRolePolicyOutcome DetachRolePolicy(const Model::DetachRolePolicyRequest& request) const;

        /*
            <p>Removes the specified managed policy from the specified role. </p> <p>A role can also have inline policies embedded with it. To delete an inline policy, use the <a>DeleteRolePolicy</a> API. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DetachRolePolicyOutcomeCallable DetachRolePolicyCallable(const Model::DetachRolePolicyRequest& request) const;

        /*
            <p>Removes the specified managed policy from the specified role. </p> <p>A role can also have inline policies embedded with it. To delete an inline policy, use the <a>DeleteRolePolicy</a> API. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DetachRolePolicyAsync(const Model::DetachRolePolicyRequest& request, const DetachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Removes the specified managed policy from the specified user. </p> <p>A user can also have inline policies embedded with it. To delete an inline policy, use the <a>DeleteUserPolicy</a> API. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::DetachUserPolicyOutcome DetachUserPolicy(const Model::DetachUserPolicyRequest& request) const;

        /*
            <p>Removes the specified managed policy from the specified user. </p> <p>A user can also have inline policies embedded with it. To delete an inline policy, use the <a>DeleteUserPolicy</a> API. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DetachUserPolicyOutcomeCallable DetachUserPolicyCallable(const Model::DetachUserPolicyRequest& request) const;

        /*
            <p>Removes the specified managed policy from the specified user. </p> <p>A user can also have inline policies embedded with it. To delete an inline policy, use the <a>DeleteUserPolicy</a> API. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DetachUserPolicyAsync(const Model::DetachUserPolicyRequest& request, const DetachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Enables the specified MFA device and associates it with the specified user name. When enabled, the MFA device is required for every subsequent login by the user name associated with the device. </p>
        */
        Model::EnableMFADeviceOutcome EnableMFADevice(const Model::EnableMFADeviceRequest& request) const;

        /*
            <p> Enables the specified MFA device and associates it with the specified user name. When enabled, the MFA device is required for every subsequent login by the user name associated with the device. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::EnableMFADeviceOutcomeCallable EnableMFADeviceCallable(const Model::EnableMFADeviceRequest& request) const;

        /*
            <p> Enables the specified MFA device and associates it with the specified user name. When enabled, the MFA device is required for every subsequent login by the user name associated with the device. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void EnableMFADeviceAsync(const Model::EnableMFADeviceRequest& request, const EnableMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Generates a credential report for the AWS account. For more information about the credential report, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting Credential Reports</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::GenerateCredentialReportOutcome GenerateCredentialReport(const Model::GenerateCredentialReportRequest& request) const;

        /*
            <p> Generates a credential report for the AWS account. For more information about the credential report, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting Credential Reports</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GenerateCredentialReportOutcomeCallable GenerateCredentialReportCallable(const Model::GenerateCredentialReportRequest& request) const;

        /*
            <p> Generates a credential report for the AWS account. For more information about the credential report, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting Credential Reports</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GenerateCredentialReportAsync(const Model::GenerateCredentialReportRequest& request, const GenerateCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Retrieves information about when the specified access key was last used. The information includes the date and time of last use, along with the AWS service and region that were specified in the last request made with that key.</p>
        */
        Model::GetAccessKeyLastUsedOutcome GetAccessKeyLastUsed(const Model::GetAccessKeyLastUsedRequest& request) const;

        /*
            <p>Retrieves information about when the specified access key was last used. The information includes the date and time of last use, along with the AWS service and region that were specified in the last request made with that key.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetAccessKeyLastUsedOutcomeCallable GetAccessKeyLastUsedCallable(const Model::GetAccessKeyLastUsedRequest& request) const;

        /*
            <p>Retrieves information about when the specified access key was last used. The information includes the date and time of last use, along with the AWS service and region that were specified in the last request made with that key.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetAccessKeyLastUsedAsync(const Model::GetAccessKeyLastUsedRequest& request, const GetAccessKeyLastUsedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Retrieves information about all IAM users, groups, roles, and policies in your account, including their relationships to one another. Use this API to obtain a snapshot of the configuration of IAM permissions (users, groups, roles, and policies) in your account.</p> <p>You can optionally filter the results using the <code>Filter</code> parameter. You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters.</p>
        */
        Model::GetAccountAuthorizationDetailsOutcome GetAccountAuthorizationDetails(const Model::GetAccountAuthorizationDetailsRequest& request) const;

        /*
            <p>Retrieves information about all IAM users, groups, roles, and policies in your account, including their relationships to one another. Use this API to obtain a snapshot of the configuration of IAM permissions (users, groups, roles, and policies) in your account.</p> <p>You can optionally filter the results using the <code>Filter</code> parameter. You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetAccountAuthorizationDetailsOutcomeCallable GetAccountAuthorizationDetailsCallable(const Model::GetAccountAuthorizationDetailsRequest& request) const;

        /*
            <p>Retrieves information about all IAM users, groups, roles, and policies in your account, including their relationships to one another. Use this API to obtain a snapshot of the configuration of IAM permissions (users, groups, roles, and policies) in your account.</p> <p>You can optionally filter the results using the <code>Filter</code> parameter. You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetAccountAuthorizationDetailsAsync(const Model::GetAccountAuthorizationDetailsRequest& request, const GetAccountAuthorizationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Retrieves the password policy for the AWS account. For more information about using a password policy, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing an IAM Password Policy</a>. </p>
        */
        Model::GetAccountPasswordPolicyOutcome GetAccountPasswordPolicy(const Model::GetAccountPasswordPolicyRequest& request) const;

        /*
            <p>Retrieves the password policy for the AWS account. For more information about using a password policy, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing an IAM Password Policy</a>. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetAccountPasswordPolicyOutcomeCallable GetAccountPasswordPolicyCallable(const Model::GetAccountPasswordPolicyRequest& request) const;

        /*
            <p>Retrieves the password policy for the AWS account. For more information about using a password policy, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing an IAM Password Policy</a>. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetAccountPasswordPolicyAsync(const Model::GetAccountPasswordPolicyRequest& request, const GetAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Retrieves information about IAM entity usage and IAM quotas in the AWS account.</p> <p> For information about limitations on IAM entities, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::GetAccountSummaryOutcome GetAccountSummary(const Model::GetAccountSummaryRequest& request) const;

        /*
            <p>Retrieves information about IAM entity usage and IAM quotas in the AWS account.</p> <p> For information about limitations on IAM entities, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetAccountSummaryOutcomeCallable GetAccountSummaryCallable(const Model::GetAccountSummaryRequest& request) const;

        /*
            <p>Retrieves information about IAM entity usage and IAM quotas in the AWS account.</p> <p> For information about limitations on IAM entities, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetAccountSummaryAsync(const Model::GetAccountSummaryRequest& request, const GetAccountSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            
        */
        Model::GetContextKeysForPolicyOutcome GetContextKeysForPolicy(const Model::GetContextKeysForPolicyRequest& request) const;

        /*
            

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetContextKeysForPolicyOutcomeCallable GetContextKeysForPolicyCallable(const Model::GetContextKeysForPolicyRequest& request) const;

        /*
            

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetContextKeysForPolicyAsync(const Model::GetContextKeysForPolicyRequest& request, const GetContextKeysForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Retrieves a credential report for the AWS account. For more information about the credential report, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting Credential Reports</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::GetCredentialReportOutcome GetCredentialReport(const Model::GetCredentialReportRequest& request) const;

        /*
            <p> Retrieves a credential report for the AWS account. For more information about the credential report, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting Credential Reports</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetCredentialReportOutcomeCallable GetCredentialReportCallable(const Model::GetCredentialReportRequest& request) const;

        /*
            <p> Retrieves a credential report for the AWS account. For more information about the credential report, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting Credential Reports</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetCredentialReportAsync(const Model::GetCredentialReportRequest& request, const GetCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Returns a list of users that are in the specified group. You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>
        */
        Model::GetGroupOutcome GetGroup(const Model::GetGroupRequest& request) const;

        /*
            <p> Returns a list of users that are in the specified group. You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetGroupOutcomeCallable GetGroupCallable(const Model::GetGroupRequest& request) const;

        /*
            <p> Returns a list of users that are in the specified group. You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetGroupAsync(const Model::GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Retrieves the specified inline policy document that is embedded in the specified group. </p> <p>A group can also have managed policies attached to it. To retrieve a managed policy document that is attached to a group, use <a>GetPolicy</a> to determine the policy's default version, then use <a>GetPolicyVersion</a> to retrieve the policy document. </p> <p>For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::GetGroupPolicyOutcome GetGroupPolicy(const Model::GetGroupPolicyRequest& request) const;

        /*
            <p>Retrieves the specified inline policy document that is embedded in the specified group. </p> <p>A group can also have managed policies attached to it. To retrieve a managed policy document that is attached to a group, use <a>GetPolicy</a> to determine the policy's default version, then use <a>GetPolicyVersion</a> to retrieve the policy document. </p> <p>For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetGroupPolicyOutcomeCallable GetGroupPolicyCallable(const Model::GetGroupPolicyRequest& request) const;

        /*
            <p>Retrieves the specified inline policy document that is embedded in the specified group. </p> <p>A group can also have managed policies attached to it. To retrieve a managed policy document that is attached to a group, use <a>GetPolicy</a> to determine the policy's default version, then use <a>GetPolicyVersion</a> to retrieve the policy document. </p> <p>For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetGroupPolicyAsync(const Model::GetGroupPolicyRequest& request, const GetGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Retrieves information about the specified instance profile, including the instance profile's path, GUID, ARN, and role. For more information about instance profiles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a>. For more information about ARNs, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html#Identifiers_ARNs">ARNs</a>. </p>
        */
        Model::GetInstanceProfileOutcome GetInstanceProfile(const Model::GetInstanceProfileRequest& request) const;

        /*
            <p> Retrieves information about the specified instance profile, including the instance profile's path, GUID, ARN, and role. For more information about instance profiles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a>. For more information about ARNs, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html#Identifiers_ARNs">ARNs</a>. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetInstanceProfileOutcomeCallable GetInstanceProfileCallable(const Model::GetInstanceProfileRequest& request) const;

        /*
            <p> Retrieves information about the specified instance profile, including the instance profile's path, GUID, ARN, and role. For more information about instance profiles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a>. For more information about ARNs, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html#Identifiers_ARNs">ARNs</a>. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetInstanceProfileAsync(const Model::GetInstanceProfileRequest& request, const GetInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Retrieves the user name and password-creation date for the specified user. If the user has not been assigned a password, the action returns a 404 (<code>NoSuchEntity</code>) error. </p>
        */
        Model::GetLoginProfileOutcome GetLoginProfile(const Model::GetLoginProfileRequest& request) const;

        /*
            <p>Retrieves the user name and password-creation date for the specified user. If the user has not been assigned a password, the action returns a 404 (<code>NoSuchEntity</code>) error. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetLoginProfileOutcomeCallable GetLoginProfileCallable(const Model::GetLoginProfileRequest& request) const;

        /*
            <p>Retrieves the user name and password-creation date for the specified user. If the user has not been assigned a password, the action returns a 404 (<code>NoSuchEntity</code>) error. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetLoginProfileAsync(const Model::GetLoginProfileRequest& request, const GetLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Returns information about the specified OpenID Connect provider.</p>
        */
        Model::GetOpenIDConnectProviderOutcome GetOpenIDConnectProvider(const Model::GetOpenIDConnectProviderRequest& request) const;

        /*
            <p>Returns information about the specified OpenID Connect provider.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetOpenIDConnectProviderOutcomeCallable GetOpenIDConnectProviderCallable(const Model::GetOpenIDConnectProviderRequest& request) const;

        /*
            <p>Returns information about the specified OpenID Connect provider.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetOpenIDConnectProviderAsync(const Model::GetOpenIDConnectProviderRequest& request, const GetOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Retrieves information about the specified managed policy, including the policy's default version and the total number of users, groups, and roles that the policy is attached to. For a list of the specific users, groups, and roles that the policy is attached to, use the <a>ListEntitiesForPolicy</a> API. This API returns metadata about the policy. To retrieve the policy document for a specific version of the policy, use <a>GetPolicyVersion</a>. </p> <p>This API retrieves information about managed policies. To retrieve information about an inline policy that is embedded with a user, group, or role, use the <a>GetUserPolicy</a>, <a>GetGroupPolicy</a>, or <a>GetRolePolicy</a> API. </p> <p>For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

        /*
            <p>Retrieves information about the specified managed policy, including the policy's default version and the total number of users, groups, and roles that the policy is attached to. For a list of the specific users, groups, and roles that the policy is attached to, use the <a>ListEntitiesForPolicy</a> API. This API returns metadata about the policy. To retrieve the policy document for a specific version of the policy, use <a>GetPolicyVersion</a>. </p> <p>This API retrieves information about managed policies. To retrieve information about an inline policy that is embedded with a user, group, or role, use the <a>GetUserPolicy</a>, <a>GetGroupPolicy</a>, or <a>GetRolePolicy</a> API. </p> <p>For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetPolicyOutcomeCallable GetPolicyCallable(const Model::GetPolicyRequest& request) const;

        /*
            <p>Retrieves information about the specified managed policy, including the policy's default version and the total number of users, groups, and roles that the policy is attached to. For a list of the specific users, groups, and roles that the policy is attached to, use the <a>ListEntitiesForPolicy</a> API. This API returns metadata about the policy. To retrieve the policy document for a specific version of the policy, use <a>GetPolicyVersion</a>. </p> <p>This API retrieves information about managed policies. To retrieve information about an inline policy that is embedded with a user, group, or role, use the <a>GetUserPolicy</a>, <a>GetGroupPolicy</a>, or <a>GetRolePolicy</a> API. </p> <p>For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetPolicyAsync(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Retrieves information about the specified version of the specified managed policy, including the policy document. </p> <p>To list the available versions for a policy, use <a>ListPolicyVersions</a>. </p> <p>This API retrieves information about managed policies. To retrieve information about an inline policy that is embedded in a user, group, or role, use the <a>GetUserPolicy</a>, <a>GetGroupPolicy</a>, or <a>GetRolePolicy</a> API. </p> <p>For more information about the types of policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::GetPolicyVersionOutcome GetPolicyVersion(const Model::GetPolicyVersionRequest& request) const;

        /*
            <p>Retrieves information about the specified version of the specified managed policy, including the policy document. </p> <p>To list the available versions for a policy, use <a>ListPolicyVersions</a>. </p> <p>This API retrieves information about managed policies. To retrieve information about an inline policy that is embedded in a user, group, or role, use the <a>GetUserPolicy</a>, <a>GetGroupPolicy</a>, or <a>GetRolePolicy</a> API. </p> <p>For more information about the types of policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetPolicyVersionOutcomeCallable GetPolicyVersionCallable(const Model::GetPolicyVersionRequest& request) const;

        /*
            <p>Retrieves information about the specified version of the specified managed policy, including the policy document. </p> <p>To list the available versions for a policy, use <a>ListPolicyVersions</a>. </p> <p>This API retrieves information about managed policies. To retrieve information about an inline policy that is embedded in a user, group, or role, use the <a>GetUserPolicy</a>, <a>GetGroupPolicy</a>, or <a>GetRolePolicy</a> API. </p> <p>For more information about the types of policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetPolicyVersionAsync(const Model::GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Retrieves information about the specified role, including the role's path, GUID, ARN, and the policy granting permission to assume the role. For more information about ARNs, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html#Identifiers_ARNs">ARNs</a>. For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with Roles</a>. </p>
        */
        Model::GetRoleOutcome GetRole(const Model::GetRoleRequest& request) const;

        /*
            <p>Retrieves information about the specified role, including the role's path, GUID, ARN, and the policy granting permission to assume the role. For more information about ARNs, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html#Identifiers_ARNs">ARNs</a>. For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with Roles</a>. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetRoleOutcomeCallable GetRoleCallable(const Model::GetRoleRequest& request) const;

        /*
            <p>Retrieves information about the specified role, including the role's path, GUID, ARN, and the policy granting permission to assume the role. For more information about ARNs, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html#Identifiers_ARNs">ARNs</a>. For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with Roles</a>. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetRoleAsync(const Model::GetRoleRequest& request, const GetRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Retrieves the specified inline policy document that is embedded with the specified role. </p> <p>A role can also have managed policies attached to it. To retrieve a managed policy document that is attached to a role, use <a>GetPolicy</a> to determine the policy's default version, then use <a>GetPolicyVersion</a> to retrieve the policy document. </p> <p>For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using Roles to Delegate Permissions and Federate Identities</a>. </p>
        */
        Model::GetRolePolicyOutcome GetRolePolicy(const Model::GetRolePolicyRequest& request) const;

        /*
            <p>Retrieves the specified inline policy document that is embedded with the specified role. </p> <p>A role can also have managed policies attached to it. To retrieve a managed policy document that is attached to a role, use <a>GetPolicy</a> to determine the policy's default version, then use <a>GetPolicyVersion</a> to retrieve the policy document. </p> <p>For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using Roles to Delegate Permissions and Federate Identities</a>. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetRolePolicyOutcomeCallable GetRolePolicyCallable(const Model::GetRolePolicyRequest& request) const;

        /*
            <p>Retrieves the specified inline policy document that is embedded with the specified role. </p> <p>A role can also have managed policies attached to it. To retrieve a managed policy document that is attached to a role, use <a>GetPolicy</a> to determine the policy's default version, then use <a>GetPolicyVersion</a> to retrieve the policy document. </p> <p>For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using Roles to Delegate Permissions and Federate Identities</a>. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetRolePolicyAsync(const Model::GetRolePolicyRequest& request, const GetRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Returns the SAML provider metadocument that was uploaded when the provider was created or updated. </p> <note>This operation requires <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4</a>. </note>
        */
        Model::GetSAMLProviderOutcome GetSAMLProvider(const Model::GetSAMLProviderRequest& request) const;

        /*
            <p>Returns the SAML provider metadocument that was uploaded when the provider was created or updated. </p> <note>This operation requires <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4</a>. </note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetSAMLProviderOutcomeCallable GetSAMLProviderCallable(const Model::GetSAMLProviderRequest& request) const;

        /*
            <p>Returns the SAML provider metadocument that was uploaded when the provider was created or updated. </p> <note>This operation requires <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4</a>. </note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetSAMLProviderAsync(const Model::GetSAMLProviderRequest& request, const GetSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Retrieves the specified SSH public key, including metadata about the key.</p> <p>The SSH public key retrieved by this action is used only for authenticating the associated IAM user to an AWS CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User Guide</i>.</p>
        */
        Model::GetSSHPublicKeyOutcome GetSSHPublicKey(const Model::GetSSHPublicKeyRequest& request) const;

        /*
            <p>Retrieves the specified SSH public key, including metadata about the key.</p> <p>The SSH public key retrieved by this action is used only for authenticating the associated IAM user to an AWS CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User Guide</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetSSHPublicKeyOutcomeCallable GetSSHPublicKeyCallable(const Model::GetSSHPublicKeyRequest& request) const;

        /*
            <p>Retrieves the specified SSH public key, including metadata about the key.</p> <p>The SSH public key retrieved by this action is used only for authenticating the associated IAM user to an AWS CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User Guide</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetSSHPublicKeyAsync(const Model::GetSSHPublicKeyRequest& request, const GetSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Retrieves information about the specified server certificate.</p>
        */
        Model::GetServerCertificateOutcome GetServerCertificate(const Model::GetServerCertificateRequest& request) const;

        /*
            <p>Retrieves information about the specified server certificate.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetServerCertificateOutcomeCallable GetServerCertificateCallable(const Model::GetServerCertificateRequest& request) const;

        /*
            <p>Retrieves information about the specified server certificate.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetServerCertificateAsync(const Model::GetServerCertificateRequest& request, const GetServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Retrieves information about the specified user, including the user's creation date, path, unique ID, and ARN. </p> <p>If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID used to sign the request. </p>
        */
        Model::GetUserOutcome GetUser(const Model::GetUserRequest& request) const;

        /*
            <p>Retrieves information about the specified user, including the user's creation date, path, unique ID, and ARN. </p> <p>If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID used to sign the request. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetUserOutcomeCallable GetUserCallable(const Model::GetUserRequest& request) const;

        /*
            <p>Retrieves information about the specified user, including the user's creation date, path, unique ID, and ARN. </p> <p>If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID used to sign the request. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetUserAsync(const Model::GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Retrieves the specified inline policy document that is embedded in the specified user. </p> <p>A user can also have managed policies attached to it. To retrieve a managed policy document that is attached to a user, use <a>GetPolicy</a> to determine the policy's default version, then use <a>GetPolicyVersion</a> to retrieve the policy document. </p> <p>For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::GetUserPolicyOutcome GetUserPolicy(const Model::GetUserPolicyRequest& request) const;

        /*
            <p>Retrieves the specified inline policy document that is embedded in the specified user. </p> <p>A user can also have managed policies attached to it. To retrieve a managed policy document that is attached to a user, use <a>GetPolicy</a> to determine the policy's default version, then use <a>GetPolicyVersion</a> to retrieve the policy document. </p> <p>For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetUserPolicyOutcomeCallable GetUserPolicyCallable(const Model::GetUserPolicyRequest& request) const;

        /*
            <p>Retrieves the specified inline policy document that is embedded in the specified user. </p> <p>A user can also have managed policies attached to it. To retrieve a managed policy document that is attached to a user, use <a>GetPolicy</a> to determine the policy's default version, then use <a>GetPolicyVersion</a> to retrieve the policy document. </p> <p>For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetUserPolicyAsync(const Model::GetUserPolicyRequest& request, const GetUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Returns information about the access key IDs associated with the specified user. If there are none, the action returns an empty list. </p> <p>Although each user is limited to a small number of keys, you can still paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p> <p>If the <code>UserName</code> field is not specified, the UserName is determined implicitly based on the AWS access key ID used to sign the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p> <note>To ensure the security of your AWS account, the secret access key is accessible only during key and user creation. </note>
        */
        Model::ListAccessKeysOutcome ListAccessKeys(const Model::ListAccessKeysRequest& request) const;

        /*
            <p>Returns information about the access key IDs associated with the specified user. If there are none, the action returns an empty list. </p> <p>Although each user is limited to a small number of keys, you can still paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p> <p>If the <code>UserName</code> field is not specified, the UserName is determined implicitly based on the AWS access key ID used to sign the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p> <note>To ensure the security of your AWS account, the secret access key is accessible only during key and user creation. </note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListAccessKeysOutcomeCallable ListAccessKeysCallable(const Model::ListAccessKeysRequest& request) const;

        /*
            <p>Returns information about the access key IDs associated with the specified user. If there are none, the action returns an empty list. </p> <p>Although each user is limited to a small number of keys, you can still paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p> <p>If the <code>UserName</code> field is not specified, the UserName is determined implicitly based on the AWS access key ID used to sign the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p> <note>To ensure the security of your AWS account, the secret access key is accessible only during key and user creation. </note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListAccessKeysAsync(const Model::ListAccessKeysRequest& request, const ListAccessKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Lists the account aliases associated with the account. For information about using an AWS account alias, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using an Alias for Your AWS Account ID</a> in the <i>Using IAM</i> guide. </p> <p> You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>
        */
        Model::ListAccountAliasesOutcome ListAccountAliases(const Model::ListAccountAliasesRequest& request) const;

        /*
            <p> Lists the account aliases associated with the account. For information about using an AWS account alias, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using an Alias for Your AWS Account ID</a> in the <i>Using IAM</i> guide. </p> <p> You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListAccountAliasesOutcomeCallable ListAccountAliasesCallable(const Model::ListAccountAliasesRequest& request) const;

        /*
            <p> Lists the account aliases associated with the account. For information about using an AWS account alias, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using an Alias for Your AWS Account ID</a> in the <i>Using IAM</i> guide. </p> <p> You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListAccountAliasesAsync(const Model::ListAccountAliasesRequest& request, const ListAccountAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists all managed policies that are attached to the specified group.</p> <p>A group can also have inline policies embedded with it. To list the inline policies for a group, use the <a>ListGroupPolicies</a> API. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. You can use the <code>PathPrefix</code> parameter to limit the list of policies to only those matching the specified path prefix. If there are no policies attached to the specified group (or none that match the specified path prefix), the action returns an empty list. </p>
        */
        Model::ListAttachedGroupPoliciesOutcome ListAttachedGroupPolicies(const Model::ListAttachedGroupPoliciesRequest& request) const;

        /*
            <p>Lists all managed policies that are attached to the specified group.</p> <p>A group can also have inline policies embedded with it. To list the inline policies for a group, use the <a>ListGroupPolicies</a> API. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. You can use the <code>PathPrefix</code> parameter to limit the list of policies to only those matching the specified path prefix. If there are no policies attached to the specified group (or none that match the specified path prefix), the action returns an empty list. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListAttachedGroupPoliciesOutcomeCallable ListAttachedGroupPoliciesCallable(const Model::ListAttachedGroupPoliciesRequest& request) const;

        /*
            <p>Lists all managed policies that are attached to the specified group.</p> <p>A group can also have inline policies embedded with it. To list the inline policies for a group, use the <a>ListGroupPolicies</a> API. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. You can use the <code>PathPrefix</code> parameter to limit the list of policies to only those matching the specified path prefix. If there are no policies attached to the specified group (or none that match the specified path prefix), the action returns an empty list. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListAttachedGroupPoliciesAsync(const Model::ListAttachedGroupPoliciesRequest& request, const ListAttachedGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists all managed policies that are attached to the specified role. </p> <p>A role can also have inline policies embedded with it. To list the inline policies for a role, use the <a>ListRolePolicies</a> API. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. You can use the <code>PathPrefix</code> parameter to limit the list of policies to only those matching the specified path prefix. If there are no policies attached to the specified role (or none that match the specified path prefix), the action returns an empty list. </p>
        */
        Model::ListAttachedRolePoliciesOutcome ListAttachedRolePolicies(const Model::ListAttachedRolePoliciesRequest& request) const;

        /*
            <p>Lists all managed policies that are attached to the specified role. </p> <p>A role can also have inline policies embedded with it. To list the inline policies for a role, use the <a>ListRolePolicies</a> API. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. You can use the <code>PathPrefix</code> parameter to limit the list of policies to only those matching the specified path prefix. If there are no policies attached to the specified role (or none that match the specified path prefix), the action returns an empty list. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListAttachedRolePoliciesOutcomeCallable ListAttachedRolePoliciesCallable(const Model::ListAttachedRolePoliciesRequest& request) const;

        /*
            <p>Lists all managed policies that are attached to the specified role. </p> <p>A role can also have inline policies embedded with it. To list the inline policies for a role, use the <a>ListRolePolicies</a> API. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. You can use the <code>PathPrefix</code> parameter to limit the list of policies to only those matching the specified path prefix. If there are no policies attached to the specified role (or none that match the specified path prefix), the action returns an empty list. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListAttachedRolePoliciesAsync(const Model::ListAttachedRolePoliciesRequest& request, const ListAttachedRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists all managed policies that are attached to the specified user. </p> <p>A user can also have inline policies embedded with it. To list the inline policies for a user, use the <a>ListUserPolicies</a> API. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. You can use the <code>PathPrefix</code> parameter to limit the list of policies to only those matching the specified path prefix. If there are no policies attached to the specified group (or none that match the specified path prefix), the action returns an empty list. </p>
        */
        Model::ListAttachedUserPoliciesOutcome ListAttachedUserPolicies(const Model::ListAttachedUserPoliciesRequest& request) const;

        /*
            <p>Lists all managed policies that are attached to the specified user. </p> <p>A user can also have inline policies embedded with it. To list the inline policies for a user, use the <a>ListUserPolicies</a> API. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. You can use the <code>PathPrefix</code> parameter to limit the list of policies to only those matching the specified path prefix. If there are no policies attached to the specified group (or none that match the specified path prefix), the action returns an empty list. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListAttachedUserPoliciesOutcomeCallable ListAttachedUserPoliciesCallable(const Model::ListAttachedUserPoliciesRequest& request) const;

        /*
            <p>Lists all managed policies that are attached to the specified user. </p> <p>A user can also have inline policies embedded with it. To list the inline policies for a user, use the <a>ListUserPolicies</a> API. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. You can use the <code>PathPrefix</code> parameter to limit the list of policies to only those matching the specified path prefix. If there are no policies attached to the specified group (or none that match the specified path prefix), the action returns an empty list. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListAttachedUserPoliciesAsync(const Model::ListAttachedUserPoliciesRequest& request, const ListAttachedUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists all users, groups, and roles that the specified managed policy is attached to. </p> <p>You can use the optional <code>EntityFilter</code> parameter to limit the results to a particular type of entity (users, groups, or roles). For example, to list only the roles that are attached to the specified policy, set <code>EntityFilter</code> to <code>Role</code>. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>
        */
        Model::ListEntitiesForPolicyOutcome ListEntitiesForPolicy(const Model::ListEntitiesForPolicyRequest& request) const;

        /*
            <p>Lists all users, groups, and roles that the specified managed policy is attached to. </p> <p>You can use the optional <code>EntityFilter</code> parameter to limit the results to a particular type of entity (users, groups, or roles). For example, to list only the roles that are attached to the specified policy, set <code>EntityFilter</code> to <code>Role</code>. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListEntitiesForPolicyOutcomeCallable ListEntitiesForPolicyCallable(const Model::ListEntitiesForPolicyRequest& request) const;

        /*
            <p>Lists all users, groups, and roles that the specified managed policy is attached to. </p> <p>You can use the optional <code>EntityFilter</code> parameter to limit the results to a particular type of entity (users, groups, or roles). For example, to list only the roles that are attached to the specified policy, set <code>EntityFilter</code> to <code>Role</code>. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListEntitiesForPolicyAsync(const Model::ListEntitiesForPolicyRequest& request, const ListEntitiesForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists the names of the inline policies that are embedded in the specified group. </p> <p>A group can also have managed policies attached to it. To list the managed policies that are attached to a group, use <a>ListAttachedGroupPolicies</a>. For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. If there are no inline policies embedded with the specified group, the action returns an empty list. </p>
        */
        Model::ListGroupPoliciesOutcome ListGroupPolicies(const Model::ListGroupPoliciesRequest& request) const;

        /*
            <p>Lists the names of the inline policies that are embedded in the specified group. </p> <p>A group can also have managed policies attached to it. To list the managed policies that are attached to a group, use <a>ListAttachedGroupPolicies</a>. For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. If there are no inline policies embedded with the specified group, the action returns an empty list. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListGroupPoliciesOutcomeCallable ListGroupPoliciesCallable(const Model::ListGroupPoliciesRequest& request) const;

        /*
            <p>Lists the names of the inline policies that are embedded in the specified group. </p> <p>A group can also have managed policies attached to it. To list the managed policies that are attached to a group, use <a>ListAttachedGroupPolicies</a>. For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. If there are no inline policies embedded with the specified group, the action returns an empty list. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListGroupPoliciesAsync(const Model::ListGroupPoliciesRequest& request, const ListGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists the groups that have the specified path prefix.</p> <p> You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>
        */
        Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /*
            <p>Lists the groups that have the specified path prefix.</p> <p> You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListGroupsOutcomeCallable ListGroupsCallable(const Model::ListGroupsRequest& request) const;

        /*
            <p>Lists the groups that have the specified path prefix.</p> <p> You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists the groups the specified user belongs to.</p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>
        */
        Model::ListGroupsForUserOutcome ListGroupsForUser(const Model::ListGroupsForUserRequest& request) const;

        /*
            <p>Lists the groups the specified user belongs to.</p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListGroupsForUserOutcomeCallable ListGroupsForUserCallable(const Model::ListGroupsForUserRequest& request) const;

        /*
            <p>Lists the groups the specified user belongs to.</p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListGroupsForUserAsync(const Model::ListGroupsForUserRequest& request, const ListGroupsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists the instance profiles that have the specified path prefix. If there are none, the action returns an empty list. For more information about instance profiles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a>. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>
        */
        Model::ListInstanceProfilesOutcome ListInstanceProfiles(const Model::ListInstanceProfilesRequest& request) const;

        /*
            <p>Lists the instance profiles that have the specified path prefix. If there are none, the action returns an empty list. For more information about instance profiles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a>. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListInstanceProfilesOutcomeCallable ListInstanceProfilesCallable(const Model::ListInstanceProfilesRequest& request) const;

        /*
            <p>Lists the instance profiles that have the specified path prefix. If there are none, the action returns an empty list. For more information about instance profiles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a>. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListInstanceProfilesAsync(const Model::ListInstanceProfilesRequest& request, const ListInstanceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists the instance profiles that have the specified associated role. If there are none, the action returns an empty list. For more information about instance profiles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a>. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>
        */
        Model::ListInstanceProfilesForRoleOutcome ListInstanceProfilesForRole(const Model::ListInstanceProfilesForRoleRequest& request) const;

        /*
            <p>Lists the instance profiles that have the specified associated role. If there are none, the action returns an empty list. For more information about instance profiles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a>. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListInstanceProfilesForRoleOutcomeCallable ListInstanceProfilesForRoleCallable(const Model::ListInstanceProfilesForRoleRequest& request) const;

        /*
            <p>Lists the instance profiles that have the specified associated role. If there are none, the action returns an empty list. For more information about instance profiles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a>. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListInstanceProfilesForRoleAsync(const Model::ListInstanceProfilesForRoleRequest& request, const ListInstanceProfilesForRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists the MFA devices. If the request includes the user name, then this action lists all the MFA devices associated with the specified user name. If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID signing the request. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>
        */
        Model::ListMFADevicesOutcome ListMFADevices(const Model::ListMFADevicesRequest& request) const;

        /*
            <p>Lists the MFA devices. If the request includes the user name, then this action lists all the MFA devices associated with the specified user name. If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID signing the request. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListMFADevicesOutcomeCallable ListMFADevicesCallable(const Model::ListMFADevicesRequest& request) const;

        /*
            <p>Lists the MFA devices. If the request includes the user name, then this action lists all the MFA devices associated with the specified user name. If you do not specify a user name, IAM determines the user name implicitly based on the AWS access key ID signing the request. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListMFADevicesAsync(const Model::ListMFADevicesRequest& request, const ListMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists information about the OpenID Connect providers in the AWS account. </p>
        */
        Model::ListOpenIDConnectProvidersOutcome ListOpenIDConnectProviders(const Model::ListOpenIDConnectProvidersRequest& request) const;

        /*
            <p>Lists information about the OpenID Connect providers in the AWS account. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListOpenIDConnectProvidersOutcomeCallable ListOpenIDConnectProvidersCallable(const Model::ListOpenIDConnectProvidersRequest& request) const;

        /*
            <p>Lists information about the OpenID Connect providers in the AWS account. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListOpenIDConnectProvidersAsync(const Model::ListOpenIDConnectProvidersRequest& request, const ListOpenIDConnectProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists all the managed policies that are available to your account, including your own customer managed policies and all AWS managed policies. </p> <p>You can filter the list of policies that is returned using the optional <code>OnlyAttached</code>, <code>Scope</code>, and <code>PathPrefix</code> parameters. For example, to list only the customer managed policies in your AWS account, set <code>Scope</code> to <code>Local</code>. To list only AWS managed policies, set <code>Scope</code> to <code>AWS</code>. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p> <p>For more information about managed policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::ListPoliciesOutcome ListPolicies(const Model::ListPoliciesRequest& request) const;

        /*
            <p>Lists all the managed policies that are available to your account, including your own customer managed policies and all AWS managed policies. </p> <p>You can filter the list of policies that is returned using the optional <code>OnlyAttached</code>, <code>Scope</code>, and <code>PathPrefix</code> parameters. For example, to list only the customer managed policies in your AWS account, set <code>Scope</code> to <code>Local</code>. To list only AWS managed policies, set <code>Scope</code> to <code>AWS</code>. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p> <p>For more information about managed policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListPoliciesOutcomeCallable ListPoliciesCallable(const Model::ListPoliciesRequest& request) const;

        /*
            <p>Lists all the managed policies that are available to your account, including your own customer managed policies and all AWS managed policies. </p> <p>You can filter the list of policies that is returned using the optional <code>OnlyAttached</code>, <code>Scope</code>, and <code>PathPrefix</code> parameters. For example, to list only the customer managed policies in your AWS account, set <code>Scope</code> to <code>Local</code>. To list only AWS managed policies, set <code>Scope</code> to <code>AWS</code>. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p> <p>For more information about managed policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListPoliciesAsync(const Model::ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists information about the versions of the specified managed policy, including the version that is set as the policy's default version. </p> <p>For more information about managed policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::ListPolicyVersionsOutcome ListPolicyVersions(const Model::ListPolicyVersionsRequest& request) const;

        /*
            <p>Lists information about the versions of the specified managed policy, including the version that is set as the policy's default version. </p> <p>For more information about managed policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListPolicyVersionsOutcomeCallable ListPolicyVersionsCallable(const Model::ListPolicyVersionsRequest& request) const;

        /*
            <p>Lists information about the versions of the specified managed policy, including the version that is set as the policy's default version. </p> <p>For more information about managed policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListPolicyVersionsAsync(const Model::ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists the names of the inline policies that are embedded in the specified role. </p> <p>A role can also have managed policies attached to it. To list the managed policies that are attached to a role, use <a>ListAttachedRolePolicies</a>. For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. If there are no inline policies embedded with the specified role, the action returns an empty list. </p>
        */
        Model::ListRolePoliciesOutcome ListRolePolicies(const Model::ListRolePoliciesRequest& request) const;

        /*
            <p>Lists the names of the inline policies that are embedded in the specified role. </p> <p>A role can also have managed policies attached to it. To list the managed policies that are attached to a role, use <a>ListAttachedRolePolicies</a>. For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. If there are no inline policies embedded with the specified role, the action returns an empty list. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListRolePoliciesOutcomeCallable ListRolePoliciesCallable(const Model::ListRolePoliciesRequest& request) const;

        /*
            <p>Lists the names of the inline policies that are embedded in the specified role. </p> <p>A role can also have managed policies attached to it. To list the managed policies that are attached to a role, use <a>ListAttachedRolePolicies</a>. For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. If there are no inline policies embedded with the specified role, the action returns an empty list. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListRolePoliciesAsync(const Model::ListRolePoliciesRequest& request, const ListRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists the roles that have the specified path prefix. If there are none, the action returns an empty list. For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with Roles</a>. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>
        */
        Model::ListRolesOutcome ListRoles(const Model::ListRolesRequest& request) const;

        /*
            <p>Lists the roles that have the specified path prefix. If there are none, the action returns an empty list. For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with Roles</a>. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListRolesOutcomeCallable ListRolesCallable(const Model::ListRolesRequest& request) const;

        /*
            <p>Lists the roles that have the specified path prefix. If there are none, the action returns an empty list. For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with Roles</a>. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListRolesAsync(const Model::ListRolesRequest& request, const ListRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists the SAML providers in the account.</p> <note> This operation requires <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4</a>. </note>
        */
        Model::ListSAMLProvidersOutcome ListSAMLProviders(const Model::ListSAMLProvidersRequest& request) const;

        /*
            <p>Lists the SAML providers in the account.</p> <note> This operation requires <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4</a>. </note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListSAMLProvidersOutcomeCallable ListSAMLProvidersCallable(const Model::ListSAMLProvidersRequest& request) const;

        /*
            <p>Lists the SAML providers in the account.</p> <note> This operation requires <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4</a>. </note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListSAMLProvidersAsync(const Model::ListSAMLProvidersRequest& request, const ListSAMLProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Returns information about the SSH public keys associated with the specified IAM user. If there are none, the action returns an empty list.</p> <p>The SSH public keys returned by this action are used only for authenticating the IAM user to an AWS CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User Guide</i>.</p> <p>Although each user is limited to a small number of keys, you can still paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters.</p>
        */
        Model::ListSSHPublicKeysOutcome ListSSHPublicKeys(const Model::ListSSHPublicKeysRequest& request) const;

        /*
            <p>Returns information about the SSH public keys associated with the specified IAM user. If there are none, the action returns an empty list.</p> <p>The SSH public keys returned by this action are used only for authenticating the IAM user to an AWS CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User Guide</i>.</p> <p>Although each user is limited to a small number of keys, you can still paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListSSHPublicKeysOutcomeCallable ListSSHPublicKeysCallable(const Model::ListSSHPublicKeysRequest& request) const;

        /*
            <p>Returns information about the SSH public keys associated with the specified IAM user. If there are none, the action returns an empty list.</p> <p>The SSH public keys returned by this action are used only for authenticating the IAM user to an AWS CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User Guide</i>.</p> <p>Although each user is limited to a small number of keys, you can still paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListSSHPublicKeysAsync(const Model::ListSSHPublicKeysRequest& request, const ListSSHPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Lists the server certificates that have the specified path prefix. If none exist, the action returns an empty list. </p> <p> You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>
        */
        Model::ListServerCertificatesOutcome ListServerCertificates(const Model::ListServerCertificatesRequest& request) const;

        /*
            <p> Lists the server certificates that have the specified path prefix. If none exist, the action returns an empty list. </p> <p> You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListServerCertificatesOutcomeCallable ListServerCertificatesCallable(const Model::ListServerCertificatesRequest& request) const;

        /*
            <p> Lists the server certificates that have the specified path prefix. If none exist, the action returns an empty list. </p> <p> You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListServerCertificatesAsync(const Model::ListServerCertificatesRequest& request, const ListServerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Returns information about the signing certificates associated with the specified user. If there are none, the action returns an empty list. </p> <p>Although each user is limited to a small number of signing certificates, you can still paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p> <p>If the <code>UserName</code> field is not specified, the user name is determined implicitly based on the AWS access key ID used to sign the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p>
        */
        Model::ListSigningCertificatesOutcome ListSigningCertificates(const Model::ListSigningCertificatesRequest& request) const;

        /*
            <p>Returns information about the signing certificates associated with the specified user. If there are none, the action returns an empty list. </p> <p>Although each user is limited to a small number of signing certificates, you can still paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p> <p>If the <code>UserName</code> field is not specified, the user name is determined implicitly based on the AWS access key ID used to sign the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListSigningCertificatesOutcomeCallable ListSigningCertificatesCallable(const Model::ListSigningCertificatesRequest& request) const;

        /*
            <p>Returns information about the signing certificates associated with the specified user. If there are none, the action returns an empty list. </p> <p>Although each user is limited to a small number of signing certificates, you can still paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p> <p>If the <code>UserName</code> field is not specified, the user name is determined implicitly based on the AWS access key ID used to sign the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListSigningCertificatesAsync(const Model::ListSigningCertificatesRequest& request, const ListSigningCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists the names of the inline policies embedded in the specified user. </p> <p>A user can also have managed policies attached to it. To list the managed policies that are attached to a user, use <a>ListAttachedUserPolicies</a>. For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. If there are no inline policies embedded with the specified user, the action returns an empty list. </p>
        */
        Model::ListUserPoliciesOutcome ListUserPolicies(const Model::ListUserPoliciesRequest& request) const;

        /*
            <p>Lists the names of the inline policies embedded in the specified user. </p> <p>A user can also have managed policies attached to it. To list the managed policies that are attached to a user, use <a>ListAttachedUserPolicies</a>. For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. If there are no inline policies embedded with the specified user, the action returns an empty list. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListUserPoliciesOutcomeCallable ListUserPoliciesCallable(const Model::ListUserPoliciesRequest& request) const;

        /*
            <p>Lists the names of the inline policies embedded in the specified user. </p> <p>A user can also have managed policies attached to it. To list the managed policies that are attached to a user, use <a>ListAttachedUserPolicies</a>. For more information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. If there are no inline policies embedded with the specified user, the action returns an empty list. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListUserPoliciesAsync(const Model::ListUserPoliciesRequest& request, const ListUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists the IAM users that have the specified path prefix. If no path prefix is specified, the action returns all users in the AWS account. If there are none, the action returns an empty list. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>
        */
        Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /*
            <p>Lists the IAM users that have the specified path prefix. If no path prefix is specified, the action returns all users in the AWS account. If there are none, the action returns an empty list. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request) const;

        /*
            <p>Lists the IAM users that have the specified path prefix. If no path prefix is specified, the action returns all users in the AWS account. If there are none, the action returns an empty list. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists the virtual MFA devices under the AWS account by assignment status. If you do not specify an assignment status, the action returns a list of all virtual MFA devices. Assignment status can be <code>Assigned</code>, <code>Unassigned</code>, or <code>Any</code>. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>
        */
        Model::ListVirtualMFADevicesOutcome ListVirtualMFADevices(const Model::ListVirtualMFADevicesRequest& request) const;

        /*
            <p>Lists the virtual MFA devices under the AWS account by assignment status. If you do not specify an assignment status, the action returns a list of all virtual MFA devices. Assignment status can be <code>Assigned</code>, <code>Unassigned</code>, or <code>Any</code>. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListVirtualMFADevicesOutcomeCallable ListVirtualMFADevicesCallable(const Model::ListVirtualMFADevicesRequest& request) const;

        /*
            <p>Lists the virtual MFA devices under the AWS account by assignment status. If you do not specify an assignment status, the action returns a list of all virtual MFA devices. Assignment status can be <code>Assigned</code>, <code>Unassigned</code>, or <code>Any</code>. </p> <p>You can paginate the results using the <code>MaxItems</code> and <code>Marker</code> parameters. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListVirtualMFADevicesAsync(const Model::ListVirtualMFADevicesRequest& request, const ListVirtualMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Adds (or updates) an inline policy document that is embedded in the specified group. </p> <p>A user can also have managed policies attached to it. To attach a managed policy to a group, use <a>AttachGroupPolicy</a>. To create a new managed policy, use <a>CreatePolicy</a>. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>For information about limits on the number of inline policies that you can embed in a group, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p> <note>Because policy documents can be large, you should use POST rather than GET when calling <code>PutGroupPolicy</code>. For general information about using the Query API with IAM, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>Using IAM</i> guide. </note>
        */
        Model::PutGroupPolicyOutcome PutGroupPolicy(const Model::PutGroupPolicyRequest& request) const;

        /*
            <p>Adds (or updates) an inline policy document that is embedded in the specified group. </p> <p>A user can also have managed policies attached to it. To attach a managed policy to a group, use <a>AttachGroupPolicy</a>. To create a new managed policy, use <a>CreatePolicy</a>. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>For information about limits on the number of inline policies that you can embed in a group, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p> <note>Because policy documents can be large, you should use POST rather than GET when calling <code>PutGroupPolicy</code>. For general information about using the Query API with IAM, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>Using IAM</i> guide. </note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::PutGroupPolicyOutcomeCallable PutGroupPolicyCallable(const Model::PutGroupPolicyRequest& request) const;

        /*
            <p>Adds (or updates) an inline policy document that is embedded in the specified group. </p> <p>A user can also have managed policies attached to it. To attach a managed policy to a group, use <a>AttachGroupPolicy</a>. To create a new managed policy, use <a>CreatePolicy</a>. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>For information about limits on the number of inline policies that you can embed in a group, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p> <note>Because policy documents can be large, you should use POST rather than GET when calling <code>PutGroupPolicy</code>. For general information about using the Query API with IAM, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>Using IAM</i> guide. </note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void PutGroupPolicyAsync(const Model::PutGroupPolicyRequest& request, const PutGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Adds (or updates) an inline policy document that is embedded in the specified role. </p> <p>When you embed an inline policy in a role, the inline policy is used as the role's access (permissions) policy. The role's trust policy is created at the same time as the role, using <a>CreateRole</a>. You can update a role's trust policy using <a>UpdateAssumeRolePolicy</a>. For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using Roles to Delegate Permissions and Federate Identities</a>. </p> <p>A role can also have a managed policy attached to it. To attach a managed policy to a role, use <a>AttachRolePolicy</a>. To create a new managed policy, use <a>CreatePolicy</a>. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>For information about limits on the number of inline policies that you can embed with a role, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p> <note>Because policy documents can be large, you should use POST rather than GET when calling <code>PutRolePolicy</code>. For general information about using the Query API with IAM, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>Using IAM</i> guide. </note>
        */
        Model::PutRolePolicyOutcome PutRolePolicy(const Model::PutRolePolicyRequest& request) const;

        /*
            <p>Adds (or updates) an inline policy document that is embedded in the specified role. </p> <p>When you embed an inline policy in a role, the inline policy is used as the role's access (permissions) policy. The role's trust policy is created at the same time as the role, using <a>CreateRole</a>. You can update a role's trust policy using <a>UpdateAssumeRolePolicy</a>. For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using Roles to Delegate Permissions and Federate Identities</a>. </p> <p>A role can also have a managed policy attached to it. To attach a managed policy to a role, use <a>AttachRolePolicy</a>. To create a new managed policy, use <a>CreatePolicy</a>. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>For information about limits on the number of inline policies that you can embed with a role, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p> <note>Because policy documents can be large, you should use POST rather than GET when calling <code>PutRolePolicy</code>. For general information about using the Query API with IAM, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>Using IAM</i> guide. </note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::PutRolePolicyOutcomeCallable PutRolePolicyCallable(const Model::PutRolePolicyRequest& request) const;

        /*
            <p>Adds (or updates) an inline policy document that is embedded in the specified role. </p> <p>When you embed an inline policy in a role, the inline policy is used as the role's access (permissions) policy. The role's trust policy is created at the same time as the role, using <a>CreateRole</a>. You can update a role's trust policy using <a>UpdateAssumeRolePolicy</a>. For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using Roles to Delegate Permissions and Federate Identities</a>. </p> <p>A role can also have a managed policy attached to it. To attach a managed policy to a role, use <a>AttachRolePolicy</a>. To create a new managed policy, use <a>CreatePolicy</a>. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>For information about limits on the number of inline policies that you can embed with a role, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p> <note>Because policy documents can be large, you should use POST rather than GET when calling <code>PutRolePolicy</code>. For general information about using the Query API with IAM, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>Using IAM</i> guide. </note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void PutRolePolicyAsync(const Model::PutRolePolicyRequest& request, const PutRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Adds (or updates) an inline policy document that is embedded in the specified user. </p> <p>A user can also have a managed policy attached to it. To attach a managed policy to a user, use <a>AttachUserPolicy</a>. To create a new managed policy, use <a>CreatePolicy</a>. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>For information about limits on the number of inline policies that you can embed in a user, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p> <note>Because policy documents can be large, you should use POST rather than GET when calling <code>PutUserPolicy</code>. For general information about using the Query API with IAM, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>Using IAM</i> guide. </note>
        */
        Model::PutUserPolicyOutcome PutUserPolicy(const Model::PutUserPolicyRequest& request) const;

        /*
            <p>Adds (or updates) an inline policy document that is embedded in the specified user. </p> <p>A user can also have a managed policy attached to it. To attach a managed policy to a user, use <a>AttachUserPolicy</a>. To create a new managed policy, use <a>CreatePolicy</a>. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>For information about limits on the number of inline policies that you can embed in a user, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p> <note>Because policy documents can be large, you should use POST rather than GET when calling <code>PutUserPolicy</code>. For general information about using the Query API with IAM, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>Using IAM</i> guide. </note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::PutUserPolicyOutcomeCallable PutUserPolicyCallable(const Model::PutUserPolicyRequest& request) const;

        /*
            <p>Adds (or updates) an inline policy document that is embedded in the specified user. </p> <p>A user can also have a managed policy attached to it. To attach a managed policy to a user, use <a>AttachUserPolicy</a>. To create a new managed policy, use <a>CreatePolicy</a>. For information about policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p> <p>For information about limits on the number of inline policies that you can embed in a user, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p> <note>Because policy documents can be large, you should use POST rather than GET when calling <code>PutUserPolicy</code>. For general information about using the Query API with IAM, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>Using IAM</i> guide. </note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void PutUserPolicyAsync(const Model::PutUserPolicyRequest& request, const PutUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Removes the specified client ID (also known as audience) from the list of client IDs registered for the specified IAM OpenID Connect provider.</p> <p>This action is idempotent; it does not fail or return an error if you try to remove a client ID that was removed previously.</p>
        */
        Model::RemoveClientIDFromOpenIDConnectProviderOutcome RemoveClientIDFromOpenIDConnectProvider(const Model::RemoveClientIDFromOpenIDConnectProviderRequest& request) const;

        /*
            <p>Removes the specified client ID (also known as audience) from the list of client IDs registered for the specified IAM OpenID Connect provider.</p> <p>This action is idempotent; it does not fail or return an error if you try to remove a client ID that was removed previously.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::RemoveClientIDFromOpenIDConnectProviderOutcomeCallable RemoveClientIDFromOpenIDConnectProviderCallable(const Model::RemoveClientIDFromOpenIDConnectProviderRequest& request) const;

        /*
            <p>Removes the specified client ID (also known as audience) from the list of client IDs registered for the specified IAM OpenID Connect provider.</p> <p>This action is idempotent; it does not fail or return an error if you try to remove a client ID that was removed previously.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void RemoveClientIDFromOpenIDConnectProviderAsync(const Model::RemoveClientIDFromOpenIDConnectProviderRequest& request, const RemoveClientIDFromOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Removes the specified role from the specified instance profile.</p> <important> Make sure you do not have any Amazon EC2 instances running with the role you are about to remove from the instance profile. Removing a role from an instance profile that is associated with a running instance will break any applications running on the instance. </important> <p> For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with Roles</a>. For more information about instance profiles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a>. </p>
        */
        Model::RemoveRoleFromInstanceProfileOutcome RemoveRoleFromInstanceProfile(const Model::RemoveRoleFromInstanceProfileRequest& request) const;

        /*
            <p>Removes the specified role from the specified instance profile.</p> <important> Make sure you do not have any Amazon EC2 instances running with the role you are about to remove from the instance profile. Removing a role from an instance profile that is associated with a running instance will break any applications running on the instance. </important> <p> For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with Roles</a>. For more information about instance profiles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a>. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::RemoveRoleFromInstanceProfileOutcomeCallable RemoveRoleFromInstanceProfileCallable(const Model::RemoveRoleFromInstanceProfileRequest& request) const;

        /*
            <p>Removes the specified role from the specified instance profile.</p> <important> Make sure you do not have any Amazon EC2 instances running with the role you are about to remove from the instance profile. Removing a role from an instance profile that is associated with a running instance will break any applications running on the instance. </important> <p> For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working with Roles</a>. For more information about instance profiles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About Instance Profiles</a>. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void RemoveRoleFromInstanceProfileAsync(const Model::RemoveRoleFromInstanceProfileRequest& request, const RemoveRoleFromInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Removes the specified user from the specified group.</p>
        */
        Model::RemoveUserFromGroupOutcome RemoveUserFromGroup(const Model::RemoveUserFromGroupRequest& request) const;

        /*
            <p>Removes the specified user from the specified group.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::RemoveUserFromGroupOutcomeCallable RemoveUserFromGroupCallable(const Model::RemoveUserFromGroupRequest& request) const;

        /*
            <p>Removes the specified user from the specified group.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void RemoveUserFromGroupAsync(const Model::RemoveUserFromGroupRequest& request, const RemoveUserFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Synchronizes the specified MFA device with AWS servers.</p> <p>For more information about creating and working with virtual MFA devices, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using a Virtual MFA Device</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::ResyncMFADeviceOutcome ResyncMFADevice(const Model::ResyncMFADeviceRequest& request) const;

        /*
            <p>Synchronizes the specified MFA device with AWS servers.</p> <p>For more information about creating and working with virtual MFA devices, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using a Virtual MFA Device</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ResyncMFADeviceOutcomeCallable ResyncMFADeviceCallable(const Model::ResyncMFADeviceRequest& request) const;

        /*
            <p>Synchronizes the specified MFA device with AWS servers.</p> <p>For more information about creating and working with virtual MFA devices, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using a Virtual MFA Device</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ResyncMFADeviceAsync(const Model::ResyncMFADeviceRequest& request, const ResyncMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Sets the specified version of the specified policy as the policy's default (operative) version. </p> <p>This action affects all users, groups, and roles that the policy is attached to. To list the users, groups, and roles that the policy is attached to, use the <a>ListEntitiesForPolicy</a> API. </p> <p>For information about managed policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::SetDefaultPolicyVersionOutcome SetDefaultPolicyVersion(const Model::SetDefaultPolicyVersionRequest& request) const;

        /*
            <p>Sets the specified version of the specified policy as the policy's default (operative) version. </p> <p>This action affects all users, groups, and roles that the policy is attached to. To list the users, groups, and roles that the policy is attached to, use the <a>ListEntitiesForPolicy</a> API. </p> <p>For information about managed policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::SetDefaultPolicyVersionOutcomeCallable SetDefaultPolicyVersionCallable(const Model::SetDefaultPolicyVersionRequest& request) const;

        /*
            <p>Sets the specified version of the specified policy as the policy's default (operative) version. </p> <p>This action affects all users, groups, and roles that the policy is attached to. To list the users, groups, and roles that the policy is attached to, use the <a>ListEntitiesForPolicy</a> API. </p> <p>For information about managed policies, refer to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void SetDefaultPolicyVersionAsync(const Model::SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            
        */
        Model::SimulatePolicyOutcome SimulatePolicy(const Model::SimulatePolicyRequest& request) const;

        /*
            

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::SimulatePolicyOutcomeCallable SimulatePolicyCallable(const Model::SimulatePolicyRequest& request) const;

        /*
            

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void SimulatePolicyAsync(const Model::SimulatePolicyRequest& request, const SimulatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Changes the status of the specified access key from Active to Inactive, or vice versa. This action can be used to disable a user's key as part of a key rotation work flow. </p> <p>If the <code>UserName</code> field is not specified, the UserName is determined implicitly based on the AWS access key ID used to sign the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p> <p>For information about rotating keys, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/ManagingCredentials.html">Managing Keys and Certificates</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::UpdateAccessKeyOutcome UpdateAccessKey(const Model::UpdateAccessKeyRequest& request) const;

        /*
            <p>Changes the status of the specified access key from Active to Inactive, or vice versa. This action can be used to disable a user's key as part of a key rotation work flow. </p> <p>If the <code>UserName</code> field is not specified, the UserName is determined implicitly based on the AWS access key ID used to sign the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p> <p>For information about rotating keys, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/ManagingCredentials.html">Managing Keys and Certificates</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UpdateAccessKeyOutcomeCallable UpdateAccessKeyCallable(const Model::UpdateAccessKeyRequest& request) const;

        /*
            <p>Changes the status of the specified access key from Active to Inactive, or vice versa. This action can be used to disable a user's key as part of a key rotation work flow. </p> <p>If the <code>UserName</code> field is not specified, the UserName is determined implicitly based on the AWS access key ID used to sign the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p> <p>For information about rotating keys, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/ManagingCredentials.html">Managing Keys and Certificates</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UpdateAccessKeyAsync(const Model::UpdateAccessKeyRequest& request, const UpdateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Updates the password policy settings for the AWS account.</p> <note> <p>This action does not support partial updates. No parameters are required, but if you do not specify a parameter, that parameter's value reverts to its default value. See the <b>Request Parameters</b> section for each parameter's default value. </p> </note> <p> For more information about using a password policy, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing an IAM Password Policy</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::UpdateAccountPasswordPolicyOutcome UpdateAccountPasswordPolicy(const Model::UpdateAccountPasswordPolicyRequest& request) const;

        /*
            <p>Updates the password policy settings for the AWS account.</p> <note> <p>This action does not support partial updates. No parameters are required, but if you do not specify a parameter, that parameter's value reverts to its default value. See the <b>Request Parameters</b> section for each parameter's default value. </p> </note> <p> For more information about using a password policy, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing an IAM Password Policy</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UpdateAccountPasswordPolicyOutcomeCallable UpdateAccountPasswordPolicyCallable(const Model::UpdateAccountPasswordPolicyRequest& request) const;

        /*
            <p>Updates the password policy settings for the AWS account.</p> <note> <p>This action does not support partial updates. No parameters are required, but if you do not specify a parameter, that parameter's value reverts to its default value. See the <b>Request Parameters</b> section for each parameter's default value. </p> </note> <p> For more information about using a password policy, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing an IAM Password Policy</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UpdateAccountPasswordPolicyAsync(const Model::UpdateAccountPasswordPolicyRequest& request, const UpdateAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Updates the policy that grants an entity permission to assume a role. For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using Roles to Delegate Permissions and Federate Identities</a>. </p>
        */
        Model::UpdateAssumeRolePolicyOutcome UpdateAssumeRolePolicy(const Model::UpdateAssumeRolePolicyRequest& request) const;

        /*
            <p> Updates the policy that grants an entity permission to assume a role. For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using Roles to Delegate Permissions and Federate Identities</a>. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UpdateAssumeRolePolicyOutcomeCallable UpdateAssumeRolePolicyCallable(const Model::UpdateAssumeRolePolicyRequest& request) const;

        /*
            <p> Updates the policy that grants an entity permission to assume a role. For more information about roles, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using Roles to Delegate Permissions and Federate Identities</a>. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UpdateAssumeRolePolicyAsync(const Model::UpdateAssumeRolePolicyRequest& request, const UpdateAssumeRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Updates the name and/or the path of the specified group.</p> <important> You should understand the implications of changing a group's path or name. For more information, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_WorkingWithGroupsAndUsers.html">Renaming Users and Groups</a> in the <i>Using IAM</i> guide. </important> <note>To change a group name the requester must have appropriate permissions on both the source object and the target object. For example, to change Managers to MGRs, the entity making the request must have permission on Managers and MGRs, or must have permission on all (*). For more information about permissions, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html" target="blank">Permissions and Policies</a>. </note>
        */
        Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;

        /*
            <p>Updates the name and/or the path of the specified group.</p> <important> You should understand the implications of changing a group's path or name. For more information, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_WorkingWithGroupsAndUsers.html">Renaming Users and Groups</a> in the <i>Using IAM</i> guide. </important> <note>To change a group name the requester must have appropriate permissions on both the source object and the target object. For example, to change Managers to MGRs, the entity making the request must have permission on Managers and MGRs, or must have permission on all (*). For more information about permissions, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html" target="blank">Permissions and Policies</a>. </note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const Model::UpdateGroupRequest& request) const;

        /*
            <p>Updates the name and/or the path of the specified group.</p> <important> You should understand the implications of changing a group's path or name. For more information, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_WorkingWithGroupsAndUsers.html">Renaming Users and Groups</a> in the <i>Using IAM</i> guide. </important> <note>To change a group name the requester must have appropriate permissions on both the source object and the target object. For example, to change Managers to MGRs, the entity making the request must have permission on Managers and MGRs, or must have permission on all (*). For more information about permissions, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html" target="blank">Permissions and Policies</a>. </note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UpdateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Changes the password for the specified user.</p> <p>Users can change their own passwords by calling <a>ChangePassword</a>. For more information about modifying passwords, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing Passwords</a> in the <i>Using IAM</i> guide. </p>
        */
        Model::UpdateLoginProfileOutcome UpdateLoginProfile(const Model::UpdateLoginProfileRequest& request) const;

        /*
            <p>Changes the password for the specified user.</p> <p>Users can change their own passwords by calling <a>ChangePassword</a>. For more information about modifying passwords, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing Passwords</a> in the <i>Using IAM</i> guide. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UpdateLoginProfileOutcomeCallable UpdateLoginProfileCallable(const Model::UpdateLoginProfileRequest& request) const;

        /*
            <p>Changes the password for the specified user.</p> <p>Users can change their own passwords by calling <a>ChangePassword</a>. For more information about modifying passwords, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing Passwords</a> in the <i>Using IAM</i> guide. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UpdateLoginProfileAsync(const Model::UpdateLoginProfileRequest& request, const UpdateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Replaces the existing list of server certificate thumbprints with a new list. </p> <p>The list that you pass with this action completely replaces the existing list of thumbprints. (The lists are not merged.)</p> <p>Typically, you need to update a thumbprint only when the identity provider's certificate changes, which occurs rarely. However, if the provider's certificate <i>does</i> change, any attempt to assume an IAM role that specifies the OIDC provider as a principal will fail until the certificate thumbprint is updated.</p> <note>Because trust for the OpenID Connect provider is ultimately derived from the provider's certificate and is validated by the thumbprint, it is a best practice to limit access to the <code>UpdateOpenIDConnectProviderThumbprint</code> action to highly-privileged users. </note>
        */
        Model::UpdateOpenIDConnectProviderThumbprintOutcome UpdateOpenIDConnectProviderThumbprint(const Model::UpdateOpenIDConnectProviderThumbprintRequest& request) const;

        /*
            <p>Replaces the existing list of server certificate thumbprints with a new list. </p> <p>The list that you pass with this action completely replaces the existing list of thumbprints. (The lists are not merged.)</p> <p>Typically, you need to update a thumbprint only when the identity provider's certificate changes, which occurs rarely. However, if the provider's certificate <i>does</i> change, any attempt to assume an IAM role that specifies the OIDC provider as a principal will fail until the certificate thumbprint is updated.</p> <note>Because trust for the OpenID Connect provider is ultimately derived from the provider's certificate and is validated by the thumbprint, it is a best practice to limit access to the <code>UpdateOpenIDConnectProviderThumbprint</code> action to highly-privileged users. </note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UpdateOpenIDConnectProviderThumbprintOutcomeCallable UpdateOpenIDConnectProviderThumbprintCallable(const Model::UpdateOpenIDConnectProviderThumbprintRequest& request) const;

        /*
            <p>Replaces the existing list of server certificate thumbprints with a new list. </p> <p>The list that you pass with this action completely replaces the existing list of thumbprints. (The lists are not merged.)</p> <p>Typically, you need to update a thumbprint only when the identity provider's certificate changes, which occurs rarely. However, if the provider's certificate <i>does</i> change, any attempt to assume an IAM role that specifies the OIDC provider as a principal will fail until the certificate thumbprint is updated.</p> <note>Because trust for the OpenID Connect provider is ultimately derived from the provider's certificate and is validated by the thumbprint, it is a best practice to limit access to the <code>UpdateOpenIDConnectProviderThumbprint</code> action to highly-privileged users. </note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UpdateOpenIDConnectProviderThumbprintAsync(const Model::UpdateOpenIDConnectProviderThumbprintRequest& request, const UpdateOpenIDConnectProviderThumbprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Updates the metadata document for an existing SAML provider.</p> <note>This operation requires <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4</a>. </note>
        */
        Model::UpdateSAMLProviderOutcome UpdateSAMLProvider(const Model::UpdateSAMLProviderRequest& request) const;

        /*
            <p>Updates the metadata document for an existing SAML provider.</p> <note>This operation requires <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4</a>. </note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UpdateSAMLProviderOutcomeCallable UpdateSAMLProviderCallable(const Model::UpdateSAMLProviderRequest& request) const;

        /*
            <p>Updates the metadata document for an existing SAML provider.</p> <note>This operation requires <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4</a>. </note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UpdateSAMLProviderAsync(const Model::UpdateSAMLProviderRequest& request, const UpdateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Sets the status of the specified SSH public key to active or inactive. SSH public keys that are inactive cannot be used for authentication. This action can be used to disable a user's SSH public key as part of a key rotation work flow. </p> <p>The SSH public key affected by this action is used only for authenticating the associated IAM user to an AWS CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User Guide</i>.</p>
        */
        Model::UpdateSSHPublicKeyOutcome UpdateSSHPublicKey(const Model::UpdateSSHPublicKeyRequest& request) const;

        /*
            <p>Sets the status of the specified SSH public key to active or inactive. SSH public keys that are inactive cannot be used for authentication. This action can be used to disable a user's SSH public key as part of a key rotation work flow. </p> <p>The SSH public key affected by this action is used only for authenticating the associated IAM user to an AWS CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User Guide</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UpdateSSHPublicKeyOutcomeCallable UpdateSSHPublicKeyCallable(const Model::UpdateSSHPublicKeyRequest& request) const;

        /*
            <p>Sets the status of the specified SSH public key to active or inactive. SSH public keys that are inactive cannot be used for authentication. This action can be used to disable a user's SSH public key as part of a key rotation work flow. </p> <p>The SSH public key affected by this action is used only for authenticating the associated IAM user to an AWS CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User Guide</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UpdateSSHPublicKeyAsync(const Model::UpdateSSHPublicKeyRequest& request, const UpdateSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Updates the name and/or the path of the specified server certificate.</p> <important> You should understand the implications of changing a server certificate's path or name. For more information, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/ManagingServerCerts.html">Managing Server Certificates</a> in the <i>Using IAM</i> guide. </important> <note>To change a server certificate name the requester must have appropriate permissions on both the source object and the target object. For example, to change the name from ProductionCert to ProdCert, the entity making the request must have permission on ProductionCert and ProdCert, or must have permission on all (*). For more information about permissions, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html" target="blank">Permissions and Policies</a>. </note>
        */
        Model::UpdateServerCertificateOutcome UpdateServerCertificate(const Model::UpdateServerCertificateRequest& request) const;

        /*
            <p>Updates the name and/or the path of the specified server certificate.</p> <important> You should understand the implications of changing a server certificate's path or name. For more information, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/ManagingServerCerts.html">Managing Server Certificates</a> in the <i>Using IAM</i> guide. </important> <note>To change a server certificate name the requester must have appropriate permissions on both the source object and the target object. For example, to change the name from ProductionCert to ProdCert, the entity making the request must have permission on ProductionCert and ProdCert, or must have permission on all (*). For more information about permissions, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html" target="blank">Permissions and Policies</a>. </note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UpdateServerCertificateOutcomeCallable UpdateServerCertificateCallable(const Model::UpdateServerCertificateRequest& request) const;

        /*
            <p>Updates the name and/or the path of the specified server certificate.</p> <important> You should understand the implications of changing a server certificate's path or name. For more information, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/ManagingServerCerts.html">Managing Server Certificates</a> in the <i>Using IAM</i> guide. </important> <note>To change a server certificate name the requester must have appropriate permissions on both the source object and the target object. For example, to change the name from ProductionCert to ProdCert, the entity making the request must have permission on ProductionCert and ProdCert, or must have permission on all (*). For more information about permissions, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html" target="blank">Permissions and Policies</a>. </note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UpdateServerCertificateAsync(const Model::UpdateServerCertificateRequest& request, const UpdateServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Changes the status of the specified signing certificate from active to disabled, or vice versa. This action can be used to disable a user's signing certificate as part of a certificate rotation work flow. </p> <p>If the <code>UserName</code> field is not specified, the UserName is determined implicitly based on the AWS access key ID used to sign the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p>
        */
        Model::UpdateSigningCertificateOutcome UpdateSigningCertificate(const Model::UpdateSigningCertificateRequest& request) const;

        /*
            <p>Changes the status of the specified signing certificate from active to disabled, or vice versa. This action can be used to disable a user's signing certificate as part of a certificate rotation work flow. </p> <p>If the <code>UserName</code> field is not specified, the UserName is determined implicitly based on the AWS access key ID used to sign the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UpdateSigningCertificateOutcomeCallable UpdateSigningCertificateCallable(const Model::UpdateSigningCertificateRequest& request) const;

        /*
            <p>Changes the status of the specified signing certificate from active to disabled, or vice versa. This action can be used to disable a user's signing certificate as part of a certificate rotation work flow. </p> <p>If the <code>UserName</code> field is not specified, the UserName is determined implicitly based on the AWS access key ID used to sign the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UpdateSigningCertificateAsync(const Model::UpdateSigningCertificateRequest& request, const UpdateSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Updates the name and/or the path of the specified user.</p> <important> You should understand the implications of changing a user's path or name. For more information, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_WorkingWithGroupsAndUsers.html">Renaming Users and Groups</a> in the <i>Using IAM</i> guide. </important> <note> To change a user name the requester must have appropriate permissions on both the source object and the target object. For example, to change Bob to Robert, the entity making the request must have permission on Bob and Robert, or must have permission on all (*). For more information about permissions, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html" target="blank">Permissions and Policies</a>. </note>
        */
        Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

        /*
            <p>Updates the name and/or the path of the specified user.</p> <important> You should understand the implications of changing a user's path or name. For more information, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_WorkingWithGroupsAndUsers.html">Renaming Users and Groups</a> in the <i>Using IAM</i> guide. </important> <note> To change a user name the requester must have appropriate permissions on both the source object and the target object. For example, to change Bob to Robert, the entity making the request must have permission on Bob and Robert, or must have permission on all (*). For more information about permissions, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html" target="blank">Permissions and Policies</a>. </note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UpdateUserOutcomeCallable UpdateUserCallable(const Model::UpdateUserRequest& request) const;

        /*
            <p>Updates the name and/or the path of the specified user.</p> <important> You should understand the implications of changing a user's path or name. For more information, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_WorkingWithGroupsAndUsers.html">Renaming Users and Groups</a> in the <i>Using IAM</i> guide. </important> <note> To change a user name the requester must have appropriate permissions on both the source object and the target object. For example, to change Bob to Robert, the entity making the request must have permission on Bob and Robert, or must have permission on all (*). For more information about permissions, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html" target="blank">Permissions and Policies</a>. </note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UpdateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Uploads an SSH public key and associates it with the specified IAM user.</p> <p>The SSH public key uploaded by this action can be used only for authenticating the associated IAM user to an AWS CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User Guide</i>.</p>
        */
        Model::UploadSSHPublicKeyOutcome UploadSSHPublicKey(const Model::UploadSSHPublicKeyRequest& request) const;

        /*
            <p>Uploads an SSH public key and associates it with the specified IAM user.</p> <p>The SSH public key uploaded by this action can be used only for authenticating the associated IAM user to an AWS CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User Guide</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UploadSSHPublicKeyOutcomeCallable UploadSSHPublicKeyCallable(const Model::UploadSSHPublicKeyRequest& request) const;

        /*
            <p>Uploads an SSH public key and associates it with the specified IAM user.</p> <p>The SSH public key uploaded by this action can be used only for authenticating the associated IAM user to an AWS CodeCommit repository. For more information about using SSH keys to authenticate to an AWS CodeCommit repository, see <a href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User Guide</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UploadSSHPublicKeyAsync(const Model::UploadSSHPublicKeyRequest& request, const UploadSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Uploads a server certificate entity for the AWS account. The server certificate entity includes a public key certificate, a private key, and an optional certificate chain, which should all be PEM-encoded. </p> <p>For information about the number of server certificates you can upload, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p> <note>Because the body of the public key certificate, private key, and the certificate chain can be large, you should use POST rather than GET when calling <code>UploadServerCertificate</code>. For information about setting up signatures and authorization through the API, go to <a href="http://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing AWS API Requests</a> in the <i>AWS General Reference</i>. For general information about using the Query API with IAM, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>Using IAM</i> guide. </note>
        */
        Model::UploadServerCertificateOutcome UploadServerCertificate(const Model::UploadServerCertificateRequest& request) const;

        /*
            <p>Uploads a server certificate entity for the AWS account. The server certificate entity includes a public key certificate, a private key, and an optional certificate chain, which should all be PEM-encoded. </p> <p>For information about the number of server certificates you can upload, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p> <note>Because the body of the public key certificate, private key, and the certificate chain can be large, you should use POST rather than GET when calling <code>UploadServerCertificate</code>. For information about setting up signatures and authorization through the API, go to <a href="http://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing AWS API Requests</a> in the <i>AWS General Reference</i>. For general information about using the Query API with IAM, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>Using IAM</i> guide. </note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UploadServerCertificateOutcomeCallable UploadServerCertificateCallable(const Model::UploadServerCertificateRequest& request) const;

        /*
            <p>Uploads a server certificate entity for the AWS account. The server certificate entity includes a public key certificate, a private key, and an optional certificate chain, which should all be PEM-encoded. </p> <p>For information about the number of server certificates you can upload, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations on IAM Entities</a> in the <i>Using IAM</i> guide. </p> <note>Because the body of the public key certificate, private key, and the certificate chain can be large, you should use POST rather than GET when calling <code>UploadServerCertificate</code>. For information about setting up signatures and authorization through the API, go to <a href="http://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing AWS API Requests</a> in the <i>AWS General Reference</i>. For general information about using the Query API with IAM, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>Using IAM</i> guide. </note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UploadServerCertificateAsync(const Model::UploadServerCertificateRequest& request, const UploadServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Uploads an X.509 signing certificate and associates it with the specified user. Some AWS services use X.509 signing certificates to validate requests that are signed with a corresponding private key. When you upload the certificate, its default status is <code>Active</code>. </p> <p>If the <code>UserName</code> field is not specified, the user name is determined implicitly based on the AWS access key ID used to sign the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p> <note>Because the body of a X.509 certificate can be large, you should use POST rather than GET when calling <code>UploadSigningCertificate</code>. For information about setting up signatures and authorization through the API, go to <a href="http://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing AWS API Requests</a> in the <i>AWS General Reference</i>. For general information about using the Query API with IAM, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>Using IAM</i>guide. </note>
        */
        Model::UploadSigningCertificateOutcome UploadSigningCertificate(const Model::UploadSigningCertificateRequest& request) const;

        /*
            <p>Uploads an X.509 signing certificate and associates it with the specified user. Some AWS services use X.509 signing certificates to validate requests that are signed with a corresponding private key. When you upload the certificate, its default status is <code>Active</code>. </p> <p>If the <code>UserName</code> field is not specified, the user name is determined implicitly based on the AWS access key ID used to sign the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p> <note>Because the body of a X.509 certificate can be large, you should use POST rather than GET when calling <code>UploadSigningCertificate</code>. For information about setting up signatures and authorization through the API, go to <a href="http://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing AWS API Requests</a> in the <i>AWS General Reference</i>. For general information about using the Query API with IAM, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>Using IAM</i>guide. </note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UploadSigningCertificateOutcomeCallable UploadSigningCertificateCallable(const Model::UploadSigningCertificateRequest& request) const;

        /*
            <p>Uploads an X.509 signing certificate and associates it with the specified user. Some AWS services use X.509 signing certificates to validate requests that are signed with a corresponding private key. When you upload the certificate, its default status is <code>Active</code>. </p> <p>If the <code>UserName</code> field is not specified, the user name is determined implicitly based on the AWS access key ID used to sign the request. Because this action works for access keys under the AWS account, you can use this action to manage root credentials even if the AWS account has no associated users. </p> <note>Because the body of a X.509 certificate can be large, you should use POST rather than GET when calling <code>UploadSigningCertificate</code>. For information about setting up signatures and authorization through the API, go to <a href="http://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing AWS API Requests</a> in the <i>AWS General Reference</i>. For general information about using the Query API with IAM, go to <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in the <i>Using IAM</i>guide. </note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UploadSigningCertificateAsync(const Model::UploadSigningCertificateRequest& request, const UploadSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

/**Async helpers**/
        void AddClientIDToOpenIDConnectProviderAsyncHelper(const Model::AddClientIDToOpenIDConnectProviderRequest& request, const AddClientIDToOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddRoleToInstanceProfileAsyncHelper(const Model::AddRoleToInstanceProfileRequest& request, const AddRoleToInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddUserToGroupAsyncHelper(const Model::AddUserToGroupRequest& request, const AddUserToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachGroupPolicyAsyncHelper(const Model::AttachGroupPolicyRequest& request, const AttachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachRolePolicyAsyncHelper(const Model::AttachRolePolicyRequest& request, const AttachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachUserPolicyAsyncHelper(const Model::AttachUserPolicyRequest& request, const AttachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ChangePasswordAsyncHelper(const Model::ChangePasswordRequest& request, const ChangePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAccessKeyAsyncHelper(const Model::CreateAccessKeyRequest& request, const CreateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAccountAliasAsyncHelper(const Model::CreateAccountAliasRequest& request, const CreateAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGroupAsyncHelper(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInstanceProfileAsyncHelper(const Model::CreateInstanceProfileRequest& request, const CreateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLoginProfileAsyncHelper(const Model::CreateLoginProfileRequest& request, const CreateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateOpenIDConnectProviderAsyncHelper(const Model::CreateOpenIDConnectProviderRequest& request, const CreateOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePolicyAsyncHelper(const Model::CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePolicyVersionAsyncHelper(const Model::CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRoleAsyncHelper(const Model::CreateRoleRequest& request, const CreateRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSAMLProviderAsyncHelper(const Model::CreateSAMLProviderRequest& request, const CreateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserAsyncHelper(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVirtualMFADeviceAsyncHelper(const Model::CreateVirtualMFADeviceRequest& request, const CreateVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeactivateMFADeviceAsyncHelper(const Model::DeactivateMFADeviceRequest& request, const DeactivateMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAccessKeyAsyncHelper(const Model::DeleteAccessKeyRequest& request, const DeleteAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAccountAliasAsyncHelper(const Model::DeleteAccountAliasRequest& request, const DeleteAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAccountPasswordPolicyAsyncHelper(const Model::DeleteAccountPasswordPolicyRequest& request, const DeleteAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGroupAsyncHelper(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGroupPolicyAsyncHelper(const Model::DeleteGroupPolicyRequest& request, const DeleteGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInstanceProfileAsyncHelper(const Model::DeleteInstanceProfileRequest& request, const DeleteInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLoginProfileAsyncHelper(const Model::DeleteLoginProfileRequest& request, const DeleteLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteOpenIDConnectProviderAsyncHelper(const Model::DeleteOpenIDConnectProviderRequest& request, const DeleteOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePolicyAsyncHelper(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePolicyVersionAsyncHelper(const Model::DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRoleAsyncHelper(const Model::DeleteRoleRequest& request, const DeleteRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRolePolicyAsyncHelper(const Model::DeleteRolePolicyRequest& request, const DeleteRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSAMLProviderAsyncHelper(const Model::DeleteSAMLProviderRequest& request, const DeleteSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSSHPublicKeyAsyncHelper(const Model::DeleteSSHPublicKeyRequest& request, const DeleteSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteServerCertificateAsyncHelper(const Model::DeleteServerCertificateRequest& request, const DeleteServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSigningCertificateAsyncHelper(const Model::DeleteSigningCertificateRequest& request, const DeleteSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAsyncHelper(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserPolicyAsyncHelper(const Model::DeleteUserPolicyRequest& request, const DeleteUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVirtualMFADeviceAsyncHelper(const Model::DeleteVirtualMFADeviceRequest& request, const DeleteVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachGroupPolicyAsyncHelper(const Model::DetachGroupPolicyRequest& request, const DetachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachRolePolicyAsyncHelper(const Model::DetachRolePolicyRequest& request, const DetachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachUserPolicyAsyncHelper(const Model::DetachUserPolicyRequest& request, const DetachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableMFADeviceAsyncHelper(const Model::EnableMFADeviceRequest& request, const EnableMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GenerateCredentialReportAsyncHelper(const Model::GenerateCredentialReportRequest& request, const GenerateCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccessKeyLastUsedAsyncHelper(const Model::GetAccessKeyLastUsedRequest& request, const GetAccessKeyLastUsedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccountAuthorizationDetailsAsyncHelper(const Model::GetAccountAuthorizationDetailsRequest& request, const GetAccountAuthorizationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccountPasswordPolicyAsyncHelper(const Model::GetAccountPasswordPolicyRequest& request, const GetAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccountSummaryAsyncHelper(const Model::GetAccountSummaryRequest& request, const GetAccountSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContextKeysForPolicyAsyncHelper(const Model::GetContextKeysForPolicyRequest& request, const GetContextKeysForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCredentialReportAsyncHelper(const Model::GetCredentialReportRequest& request, const GetCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGroupAsyncHelper(const Model::GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGroupPolicyAsyncHelper(const Model::GetGroupPolicyRequest& request, const GetGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInstanceProfileAsyncHelper(const Model::GetInstanceProfileRequest& request, const GetInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLoginProfileAsyncHelper(const Model::GetLoginProfileRequest& request, const GetLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOpenIDConnectProviderAsyncHelper(const Model::GetOpenIDConnectProviderRequest& request, const GetOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPolicyAsyncHelper(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPolicyVersionAsyncHelper(const Model::GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRoleAsyncHelper(const Model::GetRoleRequest& request, const GetRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRolePolicyAsyncHelper(const Model::GetRolePolicyRequest& request, const GetRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSAMLProviderAsyncHelper(const Model::GetSAMLProviderRequest& request, const GetSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSSHPublicKeyAsyncHelper(const Model::GetSSHPublicKeyRequest& request, const GetSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetServerCertificateAsyncHelper(const Model::GetServerCertificateRequest& request, const GetServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUserAsyncHelper(const Model::GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUserPolicyAsyncHelper(const Model::GetUserPolicyRequest& request, const GetUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccessKeysAsyncHelper(const Model::ListAccessKeysRequest& request, const ListAccessKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccountAliasesAsyncHelper(const Model::ListAccountAliasesRequest& request, const ListAccountAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAttachedGroupPoliciesAsyncHelper(const Model::ListAttachedGroupPoliciesRequest& request, const ListAttachedGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAttachedRolePoliciesAsyncHelper(const Model::ListAttachedRolePoliciesRequest& request, const ListAttachedRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAttachedUserPoliciesAsyncHelper(const Model::ListAttachedUserPoliciesRequest& request, const ListAttachedUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEntitiesForPolicyAsyncHelper(const Model::ListEntitiesForPolicyRequest& request, const ListEntitiesForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupPoliciesAsyncHelper(const Model::ListGroupPoliciesRequest& request, const ListGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupsAsyncHelper(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupsForUserAsyncHelper(const Model::ListGroupsForUserRequest& request, const ListGroupsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInstanceProfilesAsyncHelper(const Model::ListInstanceProfilesRequest& request, const ListInstanceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInstanceProfilesForRoleAsyncHelper(const Model::ListInstanceProfilesForRoleRequest& request, const ListInstanceProfilesForRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMFADevicesAsyncHelper(const Model::ListMFADevicesRequest& request, const ListMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOpenIDConnectProvidersAsyncHelper(const Model::ListOpenIDConnectProvidersRequest& request, const ListOpenIDConnectProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPoliciesAsyncHelper(const Model::ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPolicyVersionsAsyncHelper(const Model::ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRolePoliciesAsyncHelper(const Model::ListRolePoliciesRequest& request, const ListRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRolesAsyncHelper(const Model::ListRolesRequest& request, const ListRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSAMLProvidersAsyncHelper(const Model::ListSAMLProvidersRequest& request, const ListSAMLProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSSHPublicKeysAsyncHelper(const Model::ListSSHPublicKeysRequest& request, const ListSSHPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListServerCertificatesAsyncHelper(const Model::ListServerCertificatesRequest& request, const ListServerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSigningCertificatesAsyncHelper(const Model::ListSigningCertificatesRequest& request, const ListSigningCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUserPoliciesAsyncHelper(const Model::ListUserPoliciesRequest& request, const ListUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsersAsyncHelper(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVirtualMFADevicesAsyncHelper(const Model::ListVirtualMFADevicesRequest& request, const ListVirtualMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutGroupPolicyAsyncHelper(const Model::PutGroupPolicyRequest& request, const PutGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRolePolicyAsyncHelper(const Model::PutRolePolicyRequest& request, const PutRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutUserPolicyAsyncHelper(const Model::PutUserPolicyRequest& request, const PutUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveClientIDFromOpenIDConnectProviderAsyncHelper(const Model::RemoveClientIDFromOpenIDConnectProviderRequest& request, const RemoveClientIDFromOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveRoleFromInstanceProfileAsyncHelper(const Model::RemoveRoleFromInstanceProfileRequest& request, const RemoveRoleFromInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveUserFromGroupAsyncHelper(const Model::RemoveUserFromGroupRequest& request, const RemoveUserFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResyncMFADeviceAsyncHelper(const Model::ResyncMFADeviceRequest& request, const ResyncMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetDefaultPolicyVersionAsyncHelper(const Model::SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SimulatePolicyAsyncHelper(const Model::SimulatePolicyRequest& request, const SimulatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAccessKeyAsyncHelper(const Model::UpdateAccessKeyRequest& request, const UpdateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAccountPasswordPolicyAsyncHelper(const Model::UpdateAccountPasswordPolicyRequest& request, const UpdateAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAssumeRolePolicyAsyncHelper(const Model::UpdateAssumeRolePolicyRequest& request, const UpdateAssumeRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGroupAsyncHelper(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLoginProfileAsyncHelper(const Model::UpdateLoginProfileRequest& request, const UpdateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateOpenIDConnectProviderThumbprintAsyncHelper(const Model::UpdateOpenIDConnectProviderThumbprintRequest& request, const UpdateOpenIDConnectProviderThumbprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSAMLProviderAsyncHelper(const Model::UpdateSAMLProviderRequest& request, const UpdateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSSHPublicKeyAsyncHelper(const Model::UpdateSSHPublicKeyRequest& request, const UpdateSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateServerCertificateAsyncHelper(const Model::UpdateServerCertificateRequest& request, const UpdateServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSigningCertificateAsyncHelper(const Model::UpdateSigningCertificateRequest& request, const UpdateSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserAsyncHelper(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UploadSSHPublicKeyAsyncHelper(const Model::UploadSSHPublicKeyRequest& request, const UploadSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UploadServerCertificateAsyncHelper(const Model::UploadServerCertificateRequest& request, const UploadServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UploadSigningCertificateAsyncHelper(const Model::UploadSigningCertificateRequest& request, const UploadSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace IAM
} // namespace Aws
