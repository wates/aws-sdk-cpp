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
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/Snapshot.h>
#include <aws/elasticache/model/ResponseMetadata.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_ELASTICACHE_API DeleteSnapshotResult
  {
  public:
    DeleteSnapshotResult();
    DeleteSnapshotResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DeleteSnapshotResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const Snapshot& GetSnapshot() const{ return m_snapshot; }

    
    inline void SetSnapshot(const Snapshot& value) { m_snapshot = value; }

    
    inline void SetSnapshot(Snapshot&& value) { m_snapshot = value; }

    
    inline DeleteSnapshotResult& WithSnapshot(const Snapshot& value) { SetSnapshot(value); return *this;}

    
    inline DeleteSnapshotResult& WithSnapshot(Snapshot&& value) { SetSnapshot(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DeleteSnapshotResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteSnapshotResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Snapshot m_snapshot;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws