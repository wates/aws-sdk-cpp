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
#include <aws/rds/model/DBClusterMember.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

DBClusterMember::DBClusterMember() : 
    m_dBInstanceIdentifierHasBeenSet(false),
    m_isClusterWriter(false),
    m_isClusterWriterHasBeenSet(false),
    m_dBClusterParameterGroupStatusHasBeenSet(false)
{
}

DBClusterMember::DBClusterMember(const XmlNode& xmlNode) : 
    m_dBInstanceIdentifierHasBeenSet(false),
    m_isClusterWriter(false),
    m_isClusterWriterHasBeenSet(false),
    m_dBClusterParameterGroupStatusHasBeenSet(false)
{
  *this = xmlNode;
}

DBClusterMember& DBClusterMember::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBInstanceIdentifierNode = resultNode.FirstChild("DBInstanceIdentifier");
    if(!dBInstanceIdentifierNode.IsNull())
    {
      m_dBInstanceIdentifier = StringUtils::Trim(dBInstanceIdentifierNode.GetText().c_str());
      m_dBInstanceIdentifierHasBeenSet = true;
    }
    XmlNode isClusterWriterNode = resultNode.FirstChild("IsClusterWriter");
    if(!isClusterWriterNode.IsNull())
    {
      m_isClusterWriter = StringUtils::ConvertToBool(StringUtils::Trim(isClusterWriterNode.GetText().c_str()).c_str());
      m_isClusterWriterHasBeenSet = true;
    }
    XmlNode dBClusterParameterGroupStatusNode = resultNode.FirstChild("DBClusterParameterGroupStatus");
    if(!dBClusterParameterGroupStatusNode.IsNull())
    {
      m_dBClusterParameterGroupStatus = StringUtils::Trim(dBClusterParameterGroupStatusNode.GetText().c_str());
      m_dBClusterParameterGroupStatusHasBeenSet = true;
    }
  }

  return *this;
}

void DBClusterMember::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBInstanceIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }
  if(m_isClusterWriterHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsClusterWriter=" << m_isClusterWriter << "&";
  }
  if(m_dBClusterParameterGroupStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterParameterGroupStatus=" << StringUtils::URLEncode(m_dBClusterParameterGroupStatus.c_str()) << "&";
  }
}

void DBClusterMember::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBInstanceIdentifierHasBeenSet)
  {
      oStream << location << ".DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }
  if(m_isClusterWriterHasBeenSet)
  {
      oStream << location << ".IsClusterWriter=" << m_isClusterWriter << "&";
  }
  if(m_dBClusterParameterGroupStatusHasBeenSet)
  {
      oStream << location << ".DBClusterParameterGroupStatus=" << StringUtils::URLEncode(m_dBClusterParameterGroupStatus.c_str()) << "&";
  }
}
