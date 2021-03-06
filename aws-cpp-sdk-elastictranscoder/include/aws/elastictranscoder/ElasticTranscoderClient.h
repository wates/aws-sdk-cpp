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
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/elastictranscoder/ElasticTranscoderErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elastictranscoder/model/CancelJobResult.h>
#include <aws/elastictranscoder/model/CreateJobResult.h>
#include <aws/elastictranscoder/model/CreatePipelineResult.h>
#include <aws/elastictranscoder/model/CreatePresetResult.h>
#include <aws/elastictranscoder/model/DeletePipelineResult.h>
#include <aws/elastictranscoder/model/DeletePresetResult.h>
#include <aws/elastictranscoder/model/ListJobsByPipelineResult.h>
#include <aws/elastictranscoder/model/ListJobsByStatusResult.h>
#include <aws/elastictranscoder/model/ListPipelinesResult.h>
#include <aws/elastictranscoder/model/ListPresetsResult.h>
#include <aws/elastictranscoder/model/ReadJobResult.h>
#include <aws/elastictranscoder/model/ReadPipelineResult.h>
#include <aws/elastictranscoder/model/ReadPresetResult.h>
#include <aws/elastictranscoder/model/TestRoleResult.h>
#include <aws/elastictranscoder/model/UpdatePipelineResult.h>
#include <aws/elastictranscoder/model/UpdatePipelineNotificationsResult.h>
#include <aws/elastictranscoder/model/UpdatePipelineStatusResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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

namespace ElasticTranscoder
{

namespace Model
{
        class CancelJobRequest;
        class CreateJobRequest;
        class CreatePipelineRequest;
        class CreatePresetRequest;
        class DeletePipelineRequest;
        class DeletePresetRequest;
        class ListJobsByPipelineRequest;
        class ListJobsByStatusRequest;
        class ListPipelinesRequest;
        class ListPresetsRequest;
        class ReadJobRequest;
        class ReadPipelineRequest;
        class ReadPresetRequest;
        class TestRoleRequest;
        class UpdatePipelineRequest;
        class UpdatePipelineNotificationsRequest;
        class UpdatePipelineStatusRequest;

        typedef Utils::Outcome<CancelJobResult, Client::AWSError<ElasticTranscoderErrors>> CancelJobOutcome;
        typedef Utils::Outcome<CreateJobResult, Client::AWSError<ElasticTranscoderErrors>> CreateJobOutcome;
        typedef Utils::Outcome<CreatePipelineResult, Client::AWSError<ElasticTranscoderErrors>> CreatePipelineOutcome;
        typedef Utils::Outcome<CreatePresetResult, Client::AWSError<ElasticTranscoderErrors>> CreatePresetOutcome;
        typedef Utils::Outcome<DeletePipelineResult, Client::AWSError<ElasticTranscoderErrors>> DeletePipelineOutcome;
        typedef Utils::Outcome<DeletePresetResult, Client::AWSError<ElasticTranscoderErrors>> DeletePresetOutcome;
        typedef Utils::Outcome<ListJobsByPipelineResult, Client::AWSError<ElasticTranscoderErrors>> ListJobsByPipelineOutcome;
        typedef Utils::Outcome<ListJobsByStatusResult, Client::AWSError<ElasticTranscoderErrors>> ListJobsByStatusOutcome;
        typedef Utils::Outcome<ListPipelinesResult, Client::AWSError<ElasticTranscoderErrors>> ListPipelinesOutcome;
        typedef Utils::Outcome<ListPresetsResult, Client::AWSError<ElasticTranscoderErrors>> ListPresetsOutcome;
        typedef Utils::Outcome<ReadJobResult, Client::AWSError<ElasticTranscoderErrors>> ReadJobOutcome;
        typedef Utils::Outcome<ReadPipelineResult, Client::AWSError<ElasticTranscoderErrors>> ReadPipelineOutcome;
        typedef Utils::Outcome<ReadPresetResult, Client::AWSError<ElasticTranscoderErrors>> ReadPresetOutcome;
        typedef Utils::Outcome<TestRoleResult, Client::AWSError<ElasticTranscoderErrors>> TestRoleOutcome;
        typedef Utils::Outcome<UpdatePipelineResult, Client::AWSError<ElasticTranscoderErrors>> UpdatePipelineOutcome;
        typedef Utils::Outcome<UpdatePipelineNotificationsResult, Client::AWSError<ElasticTranscoderErrors>> UpdatePipelineNotificationsOutcome;
        typedef Utils::Outcome<UpdatePipelineStatusResult, Client::AWSError<ElasticTranscoderErrors>> UpdatePipelineStatusOutcome;

        typedef std::future<CancelJobOutcome> CancelJobOutcomeCallable;
        typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
        typedef std::future<CreatePipelineOutcome> CreatePipelineOutcomeCallable;
        typedef std::future<CreatePresetOutcome> CreatePresetOutcomeCallable;
        typedef std::future<DeletePipelineOutcome> DeletePipelineOutcomeCallable;
        typedef std::future<DeletePresetOutcome> DeletePresetOutcomeCallable;
        typedef std::future<ListJobsByPipelineOutcome> ListJobsByPipelineOutcomeCallable;
        typedef std::future<ListJobsByStatusOutcome> ListJobsByStatusOutcomeCallable;
        typedef std::future<ListPipelinesOutcome> ListPipelinesOutcomeCallable;
        typedef std::future<ListPresetsOutcome> ListPresetsOutcomeCallable;
        typedef std::future<ReadJobOutcome> ReadJobOutcomeCallable;
        typedef std::future<ReadPipelineOutcome> ReadPipelineOutcomeCallable;
        typedef std::future<ReadPresetOutcome> ReadPresetOutcomeCallable;
        typedef std::future<TestRoleOutcome> TestRoleOutcomeCallable;
        typedef std::future<UpdatePipelineOutcome> UpdatePipelineOutcomeCallable;
        typedef std::future<UpdatePipelineNotificationsOutcome> UpdatePipelineNotificationsOutcomeCallable;
        typedef std::future<UpdatePipelineStatusOutcome> UpdatePipelineStatusOutcomeCallable;
} // namespace Model

    class ElasticTranscoderClient;

    typedef std::function<void(const ElasticTranscoderClient*, const Model::CancelJobRequest&, const Model::CancelJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::CreateJobRequest&, const Model::CreateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::CreatePipelineRequest&, const Model::CreatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePipelineResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::CreatePresetRequest&, const Model::CreatePresetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePresetResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::DeletePipelineRequest&, const Model::DeletePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePipelineResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::DeletePresetRequest&, const Model::DeletePresetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePresetResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::ListJobsByPipelineRequest&, const Model::ListJobsByPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsByPipelineResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::ListJobsByStatusRequest&, const Model::ListJobsByStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsByStatusResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::ListPipelinesRequest&, const Model::ListPipelinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPipelinesResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::ListPresetsRequest&, const Model::ListPresetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPresetsResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::ReadJobRequest&, const Model::ReadJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReadJobResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::ReadPipelineRequest&, const Model::ReadPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReadPipelineResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::ReadPresetRequest&, const Model::ReadPresetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReadPresetResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::TestRoleRequest&, const Model::TestRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestRoleResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::UpdatePipelineRequest&, const Model::UpdatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePipelineResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::UpdatePipelineNotificationsRequest&, const Model::UpdatePipelineNotificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePipelineNotificationsResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::UpdatePipelineStatusRequest&, const Model::UpdatePipelineStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePipelineStatusResponseReceivedHandler;

  /*
    <fullname>AWS Elastic Transcoder Service</fullname> <p>The AWS Elastic Transcoder Service.</p>
  */
  class AWS_ELASTICTRANSCODER_API ElasticTranscoderClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

            /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticTranscoderClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticTranscoderClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElasticTranscoderClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
            const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

        ~ElasticTranscoderClient();
            /*
            <p>The CancelJob operation cancels an unfinished job.</p> <note>You can only cancel a job that has a status of <code>Submitted</code>. To prevent a pipeline from starting to process a job while you're getting the job identifier, use <a>UpdatePipelineStatus</a> to temporarily pause the pipeline.</note>
        */
        Model::CancelJobOutcome CancelJob(const Model::CancelJobRequest& request) const;

        /*
            <p>The CancelJob operation cancels an unfinished job.</p> <note>You can only cancel a job that has a status of <code>Submitted</code>. To prevent a pipeline from starting to process a job while you're getting the job identifier, use <a>UpdatePipelineStatus</a> to temporarily pause the pipeline.</note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CancelJobOutcomeCallable CancelJobCallable(const Model::CancelJobRequest& request) const;

        /*
            <p>The CancelJob operation cancels an unfinished job.</p> <note>You can only cancel a job that has a status of <code>Submitted</code>. To prevent a pipeline from starting to process a job while you're getting the job identifier, use <a>UpdatePipelineStatus</a> to temporarily pause the pipeline.</note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CancelJobAsync(const Model::CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> When you create a job, Elastic Transcoder returns JSON data that includes the values that you specified plus information about the job that is created. </p> <p>If you have specified more than one output for your jobs (for example, one output for the Kindle Fire and another output for the Apple iPhone 4s), you currently must use the Elastic Transcoder API to list the jobs (as opposed to the AWS Console).</p>
        */
        Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;

        /*
            <p> When you create a job, Elastic Transcoder returns JSON data that includes the values that you specified plus information about the job that is created. </p> <p>If you have specified more than one output for your jobs (for example, one output for the Kindle Fire and another output for the Apple iPhone 4s), you currently must use the Elastic Transcoder API to list the jobs (as opposed to the AWS Console).</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateJobOutcomeCallable CreateJobCallable(const Model::CreateJobRequest& request) const;

        /*
            <p> When you create a job, Elastic Transcoder returns JSON data that includes the values that you specified plus information about the job that is created. </p> <p>If you have specified more than one output for your jobs (for example, one output for the Kindle Fire and another output for the Apple iPhone 4s), you currently must use the Elastic Transcoder API to list the jobs (as opposed to the AWS Console).</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateJobAsync(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>The CreatePipeline operation creates a pipeline with settings that you specify.</p>
        */
        Model::CreatePipelineOutcome CreatePipeline(const Model::CreatePipelineRequest& request) const;

        /*
            <p>The CreatePipeline operation creates a pipeline with settings that you specify.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreatePipelineOutcomeCallable CreatePipelineCallable(const Model::CreatePipelineRequest& request) const;

        /*
            <p>The CreatePipeline operation creates a pipeline with settings that you specify.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreatePipelineAsync(const Model::CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>The CreatePreset operation creates a preset with settings that you specify.</p> <important>Elastic Transcoder checks the CreatePreset settings to ensure that they meet Elastic Transcoder requirements and to determine whether they comply with H.264 standards. If your settings are not valid for Elastic Transcoder, Elastic Transcoder returns an HTTP 400 response (<code>ValidationException</code>) and does not create the preset. If the settings are valid for Elastic Transcoder but aren't strictly compliant with the H.264 standard, Elastic Transcoder creates the preset and returns a warning message in the response. This helps you determine whether your settings comply with the H.264 standard while giving you greater flexibility with respect to the video that Elastic Transcoder produces.</important> <p>Elastic Transcoder uses the H.264 video-compression format. For more information, see the International Telecommunication Union publication <i>Recommendation ITU-T H.264: Advanced video coding for generic audiovisual services</i>.</p>
        */
        Model::CreatePresetOutcome CreatePreset(const Model::CreatePresetRequest& request) const;

        /*
            <p>The CreatePreset operation creates a preset with settings that you specify.</p> <important>Elastic Transcoder checks the CreatePreset settings to ensure that they meet Elastic Transcoder requirements and to determine whether they comply with H.264 standards. If your settings are not valid for Elastic Transcoder, Elastic Transcoder returns an HTTP 400 response (<code>ValidationException</code>) and does not create the preset. If the settings are valid for Elastic Transcoder but aren't strictly compliant with the H.264 standard, Elastic Transcoder creates the preset and returns a warning message in the response. This helps you determine whether your settings comply with the H.264 standard while giving you greater flexibility with respect to the video that Elastic Transcoder produces.</important> <p>Elastic Transcoder uses the H.264 video-compression format. For more information, see the International Telecommunication Union publication <i>Recommendation ITU-T H.264: Advanced video coding for generic audiovisual services</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreatePresetOutcomeCallable CreatePresetCallable(const Model::CreatePresetRequest& request) const;

        /*
            <p>The CreatePreset operation creates a preset with settings that you specify.</p> <important>Elastic Transcoder checks the CreatePreset settings to ensure that they meet Elastic Transcoder requirements and to determine whether they comply with H.264 standards. If your settings are not valid for Elastic Transcoder, Elastic Transcoder returns an HTTP 400 response (<code>ValidationException</code>) and does not create the preset. If the settings are valid for Elastic Transcoder but aren't strictly compliant with the H.264 standard, Elastic Transcoder creates the preset and returns a warning message in the response. This helps you determine whether your settings comply with the H.264 standard while giving you greater flexibility with respect to the video that Elastic Transcoder produces.</important> <p>Elastic Transcoder uses the H.264 video-compression format. For more information, see the International Telecommunication Union publication <i>Recommendation ITU-T H.264: Advanced video coding for generic audiovisual services</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreatePresetAsync(const Model::CreatePresetRequest& request, const CreatePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>The DeletePipeline operation removes a pipeline.</p> <p> You can only delete a pipeline that has never been used or that is not currently in use (doesn't contain any active jobs). If the pipeline is currently in use, <code>DeletePipeline</code> returns an error. </p>
        */
        Model::DeletePipelineOutcome DeletePipeline(const Model::DeletePipelineRequest& request) const;

        /*
            <p>The DeletePipeline operation removes a pipeline.</p> <p> You can only delete a pipeline that has never been used or that is not currently in use (doesn't contain any active jobs). If the pipeline is currently in use, <code>DeletePipeline</code> returns an error. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeletePipelineOutcomeCallable DeletePipelineCallable(const Model::DeletePipelineRequest& request) const;

        /*
            <p>The DeletePipeline operation removes a pipeline.</p> <p> You can only delete a pipeline that has never been used or that is not currently in use (doesn't contain any active jobs). If the pipeline is currently in use, <code>DeletePipeline</code> returns an error. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeletePipelineAsync(const Model::DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>The DeletePreset operation removes a preset that you've added in an AWS region.</p> <note> <p>You can't delete the default presets that are included with Elastic Transcoder.</p> </note>
        */
        Model::DeletePresetOutcome DeletePreset(const Model::DeletePresetRequest& request) const;

        /*
            <p>The DeletePreset operation removes a preset that you've added in an AWS region.</p> <note> <p>You can't delete the default presets that are included with Elastic Transcoder.</p> </note>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeletePresetOutcomeCallable DeletePresetCallable(const Model::DeletePresetRequest& request) const;

        /*
            <p>The DeletePreset operation removes a preset that you've added in an AWS region.</p> <note> <p>You can't delete the default presets that are included with Elastic Transcoder.</p> </note>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeletePresetAsync(const Model::DeletePresetRequest& request, const DeletePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>The ListJobsByPipeline operation gets a list of the jobs currently in a pipeline.</p> <p>Elastic Transcoder returns all of the jobs currently in the specified pipeline. The response body contains one element for each job that satisfies the search criteria.</p>
        */
        Model::ListJobsByPipelineOutcome ListJobsByPipeline(const Model::ListJobsByPipelineRequest& request) const;

        /*
            <p>The ListJobsByPipeline operation gets a list of the jobs currently in a pipeline.</p> <p>Elastic Transcoder returns all of the jobs currently in the specified pipeline. The response body contains one element for each job that satisfies the search criteria.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListJobsByPipelineOutcomeCallable ListJobsByPipelineCallable(const Model::ListJobsByPipelineRequest& request) const;

        /*
            <p>The ListJobsByPipeline operation gets a list of the jobs currently in a pipeline.</p> <p>Elastic Transcoder returns all of the jobs currently in the specified pipeline. The response body contains one element for each job that satisfies the search criteria.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListJobsByPipelineAsync(const Model::ListJobsByPipelineRequest& request, const ListJobsByPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>The ListJobsByStatus operation gets a list of jobs that have a specified status. The response body contains one element for each job that satisfies the search criteria.</p>
        */
        Model::ListJobsByStatusOutcome ListJobsByStatus(const Model::ListJobsByStatusRequest& request) const;

        /*
            <p>The ListJobsByStatus operation gets a list of jobs that have a specified status. The response body contains one element for each job that satisfies the search criteria.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListJobsByStatusOutcomeCallable ListJobsByStatusCallable(const Model::ListJobsByStatusRequest& request) const;

        /*
            <p>The ListJobsByStatus operation gets a list of jobs that have a specified status. The response body contains one element for each job that satisfies the search criteria.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListJobsByStatusAsync(const Model::ListJobsByStatusRequest& request, const ListJobsByStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>The ListPipelines operation gets a list of the pipelines associated with the current AWS account.</p>
        */
        Model::ListPipelinesOutcome ListPipelines(const Model::ListPipelinesRequest& request) const;

        /*
            <p>The ListPipelines operation gets a list of the pipelines associated with the current AWS account.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListPipelinesOutcomeCallable ListPipelinesCallable(const Model::ListPipelinesRequest& request) const;

        /*
            <p>The ListPipelines operation gets a list of the pipelines associated with the current AWS account.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListPipelinesAsync(const Model::ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>The ListPresets operation gets a list of the default presets included with Elastic Transcoder and the presets that you've added in an AWS region.</p>
        */
        Model::ListPresetsOutcome ListPresets(const Model::ListPresetsRequest& request) const;

        /*
            <p>The ListPresets operation gets a list of the default presets included with Elastic Transcoder and the presets that you've added in an AWS region.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListPresetsOutcomeCallable ListPresetsCallable(const Model::ListPresetsRequest& request) const;

        /*
            <p>The ListPresets operation gets a list of the default presets included with Elastic Transcoder and the presets that you've added in an AWS region.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListPresetsAsync(const Model::ListPresetsRequest& request, const ListPresetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>The ReadJob operation returns detailed information about a job.</p>
        */
        Model::ReadJobOutcome ReadJob(const Model::ReadJobRequest& request) const;

        /*
            <p>The ReadJob operation returns detailed information about a job.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ReadJobOutcomeCallable ReadJobCallable(const Model::ReadJobRequest& request) const;

        /*
            <p>The ReadJob operation returns detailed information about a job.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ReadJobAsync(const Model::ReadJobRequest& request, const ReadJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>The ReadPipeline operation gets detailed information about a pipeline.</p>
        */
        Model::ReadPipelineOutcome ReadPipeline(const Model::ReadPipelineRequest& request) const;

        /*
            <p>The ReadPipeline operation gets detailed information about a pipeline.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ReadPipelineOutcomeCallable ReadPipelineCallable(const Model::ReadPipelineRequest& request) const;

        /*
            <p>The ReadPipeline operation gets detailed information about a pipeline.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ReadPipelineAsync(const Model::ReadPipelineRequest& request, const ReadPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>The ReadPreset operation gets detailed information about a preset.</p>
        */
        Model::ReadPresetOutcome ReadPreset(const Model::ReadPresetRequest& request) const;

        /*
            <p>The ReadPreset operation gets detailed information about a preset.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ReadPresetOutcomeCallable ReadPresetCallable(const Model::ReadPresetRequest& request) const;

        /*
            <p>The ReadPreset operation gets detailed information about a preset.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ReadPresetAsync(const Model::ReadPresetRequest& request, const ReadPresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>The TestRole operation tests the IAM role used to create the pipeline.</p> <p>The <code>TestRole</code> action lets you determine whether the IAM role you are using has sufficient permissions to let Elastic Transcoder perform tasks associated with the transcoding process. The action attempts to assume the specified IAM role, checks read access to the input and output buckets, and tries to send a test notification to Amazon SNS topics that you specify.</p>
        */
        Model::TestRoleOutcome TestRole(const Model::TestRoleRequest& request) const;

        /*
            <p>The TestRole operation tests the IAM role used to create the pipeline.</p> <p>The <code>TestRole</code> action lets you determine whether the IAM role you are using has sufficient permissions to let Elastic Transcoder perform tasks associated with the transcoding process. The action attempts to assume the specified IAM role, checks read access to the input and output buckets, and tries to send a test notification to Amazon SNS topics that you specify.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::TestRoleOutcomeCallable TestRoleCallable(const Model::TestRoleRequest& request) const;

        /*
            <p>The TestRole operation tests the IAM role used to create the pipeline.</p> <p>The <code>TestRole</code> action lets you determine whether the IAM role you are using has sufficient permissions to let Elastic Transcoder perform tasks associated with the transcoding process. The action attempts to assume the specified IAM role, checks read access to the input and output buckets, and tries to send a test notification to Amazon SNS topics that you specify.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void TestRoleAsync(const Model::TestRoleRequest& request, const TestRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Use the <code>UpdatePipeline</code> operation to update settings for a pipeline. <important>When you change pipeline settings, your changes take effect immediately. Jobs that you have already submitted and that Elastic Transcoder has not started to process are affected in addition to jobs that you submit after you change settings. </important> </p>
        */
        Model::UpdatePipelineOutcome UpdatePipeline(const Model::UpdatePipelineRequest& request) const;

        /*
            <p> Use the <code>UpdatePipeline</code> operation to update settings for a pipeline. <important>When you change pipeline settings, your changes take effect immediately. Jobs that you have already submitted and that Elastic Transcoder has not started to process are affected in addition to jobs that you submit after you change settings. </important> </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UpdatePipelineOutcomeCallable UpdatePipelineCallable(const Model::UpdatePipelineRequest& request) const;

        /*
            <p> Use the <code>UpdatePipeline</code> operation to update settings for a pipeline. <important>When you change pipeline settings, your changes take effect immediately. Jobs that you have already submitted and that Elastic Transcoder has not started to process are affected in addition to jobs that you submit after you change settings. </important> </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UpdatePipelineAsync(const Model::UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>With the UpdatePipelineNotifications operation, you can update Amazon Simple Notification Service (Amazon SNS) notifications for a pipeline.</p> <p>When you update notifications for a pipeline, Elastic Transcoder returns the values that you specified in the request.</p>
        */
        Model::UpdatePipelineNotificationsOutcome UpdatePipelineNotifications(const Model::UpdatePipelineNotificationsRequest& request) const;

        /*
            <p>With the UpdatePipelineNotifications operation, you can update Amazon Simple Notification Service (Amazon SNS) notifications for a pipeline.</p> <p>When you update notifications for a pipeline, Elastic Transcoder returns the values that you specified in the request.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UpdatePipelineNotificationsOutcomeCallable UpdatePipelineNotificationsCallable(const Model::UpdatePipelineNotificationsRequest& request) const;

        /*
            <p>With the UpdatePipelineNotifications operation, you can update Amazon Simple Notification Service (Amazon SNS) notifications for a pipeline.</p> <p>When you update notifications for a pipeline, Elastic Transcoder returns the values that you specified in the request.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UpdatePipelineNotificationsAsync(const Model::UpdatePipelineNotificationsRequest& request, const UpdatePipelineNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>The UpdatePipelineStatus operation pauses or reactivates a pipeline, so that the pipeline stops or restarts the processing of jobs.</p> <p>Changing the pipeline status is useful if you want to cancel one or more jobs. You can't cancel jobs after Elastic Transcoder has started processing them; if you pause the pipeline to which you submitted the jobs, you have more time to get the job IDs for the jobs that you want to cancel, and to send a <a>CancelJob</a> request. </p>
        */
        Model::UpdatePipelineStatusOutcome UpdatePipelineStatus(const Model::UpdatePipelineStatusRequest& request) const;

        /*
            <p>The UpdatePipelineStatus operation pauses or reactivates a pipeline, so that the pipeline stops or restarts the processing of jobs.</p> <p>Changing the pipeline status is useful if you want to cancel one or more jobs. You can't cancel jobs after Elastic Transcoder has started processing them; if you pause the pipeline to which you submitted the jobs, you have more time to get the job IDs for the jobs that you want to cancel, and to send a <a>CancelJob</a> request. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UpdatePipelineStatusOutcomeCallable UpdatePipelineStatusCallable(const Model::UpdatePipelineStatusRequest& request) const;

        /*
            <p>The UpdatePipelineStatus operation pauses or reactivates a pipeline, so that the pipeline stops or restarts the processing of jobs.</p> <p>Changing the pipeline status is useful if you want to cancel one or more jobs. You can't cancel jobs after Elastic Transcoder has started processing them; if you pause the pipeline to which you submitted the jobs, you have more time to get the job IDs for the jobs that you want to cancel, and to send a <a>CancelJob</a> request. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UpdatePipelineStatusAsync(const Model::UpdatePipelineStatusRequest& request, const UpdatePipelineStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
        void CancelJobAsyncHelper(const Model::CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateJobAsyncHelper(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePipelineAsyncHelper(const Model::CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePresetAsyncHelper(const Model::CreatePresetRequest& request, const CreatePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePipelineAsyncHelper(const Model::DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePresetAsyncHelper(const Model::DeletePresetRequest& request, const DeletePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobsByPipelineAsyncHelper(const Model::ListJobsByPipelineRequest& request, const ListJobsByPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobsByStatusAsyncHelper(const Model::ListJobsByStatusRequest& request, const ListJobsByStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPipelinesAsyncHelper(const Model::ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPresetsAsyncHelper(const Model::ListPresetsRequest& request, const ListPresetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReadJobAsyncHelper(const Model::ReadJobRequest& request, const ReadJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReadPipelineAsyncHelper(const Model::ReadPipelineRequest& request, const ReadPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReadPresetAsyncHelper(const Model::ReadPresetRequest& request, const ReadPresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TestRoleAsyncHelper(const Model::TestRoleRequest& request, const TestRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePipelineAsyncHelper(const Model::UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePipelineNotificationsAsyncHelper(const Model::UpdatePipelineNotificationsRequest& request, const UpdatePipelineNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePipelineStatusAsyncHelper(const Model::UpdatePipelineStatusRequest& request, const UpdatePipelineStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace ElasticTranscoder
} // namespace Aws
