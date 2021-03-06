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
#include <aws/elasticache/model/PendingAutomaticFailoverStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int enabled_HASH = HashingUtils::HashString("enabled");
static const int disabled_HASH = HashingUtils::HashString("disabled");

namespace Aws
{
namespace ElastiCache
{
namespace Model
{
namespace PendingAutomaticFailoverStatusMapper
{
PendingAutomaticFailoverStatus GetPendingAutomaticFailoverStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == enabled_HASH)
  {
    return PendingAutomaticFailoverStatus::enabled;
  }
  else if (hashCode == disabled_HASH)
  {
    return PendingAutomaticFailoverStatus::disabled;
  }

  return PendingAutomaticFailoverStatus::NOT_SET;
}

Aws::String GetNameForPendingAutomaticFailoverStatus(PendingAutomaticFailoverStatus value)
{
  switch(value)
  {
  case PendingAutomaticFailoverStatus::enabled:
    return "enabled";
  case PendingAutomaticFailoverStatus::disabled:
    return "disabled";
  default:
    return "";
  }
}

} // namespace PendingAutomaticFailoverStatusMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
