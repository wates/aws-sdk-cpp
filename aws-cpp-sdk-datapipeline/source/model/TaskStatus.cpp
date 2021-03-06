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
#include <aws/datapipeline/model/TaskStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int FINISHED_HASH = HashingUtils::HashString("FINISHED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int FALSE_HASH = HashingUtils::HashString("FALSE");

namespace Aws
{
namespace DataPipeline
{
namespace Model
{
namespace TaskStatusMapper
{
TaskStatus GetTaskStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == FINISHED_HASH)
  {
    return TaskStatus::FINISHED;
  }
  else if (hashCode == FAILED_HASH)
  {
    return TaskStatus::FAILED;
  }
  else if (hashCode == FALSE_HASH)
  {
    return TaskStatus::FALSE;
  }

  return TaskStatus::NOT_SET;
}

Aws::String GetNameForTaskStatus(TaskStatus value)
{
  switch(value)
  {
  case TaskStatus::FINISHED:
    return "FINISHED";
  case TaskStatus::FAILED:
    return "FAILED";
  case TaskStatus::FALSE:
    return "FALSE";
  default:
    return "";
  }
}

} // namespace TaskStatusMapper
} // namespace Model
} // namespace DataPipeline
} // namespace Aws
