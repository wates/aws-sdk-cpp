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
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int INDEXES_HASH = HashingUtils::HashString("INDEXES");
static const int TOTAL_HASH = HashingUtils::HashString("TOTAL");
static const int NONE_HASH = HashingUtils::HashString("NONE");

namespace Aws
{
namespace DynamoDB
{
namespace Model
{
namespace ReturnConsumedCapacityMapper
{
ReturnConsumedCapacity GetReturnConsumedCapacityForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == INDEXES_HASH)
  {
    return ReturnConsumedCapacity::INDEXES;
  }
  else if (hashCode == TOTAL_HASH)
  {
    return ReturnConsumedCapacity::TOTAL;
  }
  else if (hashCode == NONE_HASH)
  {
    return ReturnConsumedCapacity::NONE;
  }

  return ReturnConsumedCapacity::NOT_SET;
}

Aws::String GetNameForReturnConsumedCapacity(ReturnConsumedCapacity value)
{
  switch(value)
  {
  case ReturnConsumedCapacity::INDEXES:
    return "INDEXES";
  case ReturnConsumedCapacity::TOTAL:
    return "TOTAL";
  case ReturnConsumedCapacity::NONE:
    return "NONE";
  default:
    return "";
  }
}

} // namespace ReturnConsumedCapacityMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
