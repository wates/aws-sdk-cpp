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
#include <aws/iam/model/ManagedPolicyDetail.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

ManagedPolicyDetail::ManagedPolicyDetail() : 
    m_policyNameHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_defaultVersionIdHasBeenSet(false),
    m_attachmentCount(0),
    m_attachmentCountHasBeenSet(false),
    m_isAttachable(false),
    m_isAttachableHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createDate(0.0),
    m_createDateHasBeenSet(false),
    m_updateDate(0.0),
    m_updateDateHasBeenSet(false),
    m_policyVersionListHasBeenSet(false)
{
}

ManagedPolicyDetail::ManagedPolicyDetail(const XmlNode& xmlNode) : 
    m_policyNameHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_defaultVersionIdHasBeenSet(false),
    m_attachmentCount(0),
    m_attachmentCountHasBeenSet(false),
    m_isAttachable(false),
    m_isAttachableHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createDate(0.0),
    m_createDateHasBeenSet(false),
    m_updateDate(0.0),
    m_updateDateHasBeenSet(false),
    m_policyVersionListHasBeenSet(false)
{
  *this = xmlNode;
}

ManagedPolicyDetail& ManagedPolicyDetail::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode policyNameNode = resultNode.FirstChild("PolicyName");
    if(!policyNameNode.IsNull())
    {
      m_policyName = StringUtils::Trim(policyNameNode.GetText().c_str());
      m_policyNameHasBeenSet = true;
    }
    XmlNode policyIdNode = resultNode.FirstChild("PolicyId");
    if(!policyIdNode.IsNull())
    {
      m_policyId = StringUtils::Trim(policyIdNode.GetText().c_str());
      m_policyIdHasBeenSet = true;
    }
    XmlNode arnNode = resultNode.FirstChild("Arn");
    if(!arnNode.IsNull())
    {
      m_arn = StringUtils::Trim(arnNode.GetText().c_str());
      m_arnHasBeenSet = true;
    }
    XmlNode pathNode = resultNode.FirstChild("Path");
    if(!pathNode.IsNull())
    {
      m_path = StringUtils::Trim(pathNode.GetText().c_str());
      m_pathHasBeenSet = true;
    }
    XmlNode defaultVersionIdNode = resultNode.FirstChild("DefaultVersionId");
    if(!defaultVersionIdNode.IsNull())
    {
      m_defaultVersionId = StringUtils::Trim(defaultVersionIdNode.GetText().c_str());
      m_defaultVersionIdHasBeenSet = true;
    }
    XmlNode attachmentCountNode = resultNode.FirstChild("AttachmentCount");
    if(!attachmentCountNode.IsNull())
    {
      m_attachmentCount = StringUtils::ConvertToInt32(StringUtils::Trim(attachmentCountNode.GetText().c_str()).c_str());
      m_attachmentCountHasBeenSet = true;
    }
    XmlNode isAttachableNode = resultNode.FirstChild("IsAttachable");
    if(!isAttachableNode.IsNull())
    {
      m_isAttachable = StringUtils::ConvertToBool(StringUtils::Trim(isAttachableNode.GetText().c_str()).c_str());
      m_isAttachableHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = StringUtils::Trim(descriptionNode.GetText().c_str());
      m_descriptionHasBeenSet = true;
    }
    XmlNode createDateNode = resultNode.FirstChild("CreateDate");
    if(!createDateNode.IsNull())
    {
      m_createDate = StringUtils::ConvertToDouble(StringUtils::Trim(createDateNode.GetText().c_str()).c_str());
      m_createDateHasBeenSet = true;
    }
    XmlNode updateDateNode = resultNode.FirstChild("UpdateDate");
    if(!updateDateNode.IsNull())
    {
      m_updateDate = StringUtils::ConvertToDouble(StringUtils::Trim(updateDateNode.GetText().c_str()).c_str());
      m_updateDateHasBeenSet = true;
    }
    XmlNode policyVersionListNode = resultNode.FirstChild("PolicyVersionList");
    if(!policyVersionListNode.IsNull())
    {
      XmlNode policyVersionListMember = policyVersionListNode.FirstChild("member");
      while(!policyVersionListMember.IsNull())
      {
        m_policyVersionList.push_back(policyVersionListMember);
        policyVersionListMember = policyVersionListMember.NextNode("member");
      }

      m_policyVersionListHasBeenSet = true;
    }
  }

  return *this;
}

void ManagedPolicyDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_policyNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }
  if(m_policyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PolicyId=" << StringUtils::URLEncode(m_policyId.c_str()) << "&";
  }
  if(m_arnHasBeenSet)
  {
      oStream << location << index << locationValue << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }
  if(m_pathHasBeenSet)
  {
      oStream << location << index << locationValue << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  }
  if(m_defaultVersionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultVersionId=" << StringUtils::URLEncode(m_defaultVersionId.c_str()) << "&";
  }
  if(m_attachmentCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".AttachmentCount=" << m_attachmentCount << "&";
  }
  if(m_isAttachableHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsAttachable=" << m_isAttachable << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_createDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateDate=" << m_createDate << "&";
  }
  if(m_updateDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdateDate=" << m_updateDate << "&";
  }
  if(m_policyVersionListHasBeenSet)
  {
      for(auto& item : m_policyVersionList)
      {
        Aws::StringStream policyVersionListSs;
        policyVersionListSs << location << index << locationValue << ".PolicyVersionList";
        item.OutputToStream(oStream, policyVersionListSs.str().c_str());
      }
  }
}

void ManagedPolicyDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_policyNameHasBeenSet)
  {
      oStream << location << ".PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }
  if(m_policyIdHasBeenSet)
  {
      oStream << location << ".PolicyId=" << StringUtils::URLEncode(m_policyId.c_str()) << "&";
  }
  if(m_arnHasBeenSet)
  {
      oStream << location << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }
  if(m_pathHasBeenSet)
  {
      oStream << location << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  }
  if(m_defaultVersionIdHasBeenSet)
  {
      oStream << location << ".DefaultVersionId=" << StringUtils::URLEncode(m_defaultVersionId.c_str()) << "&";
  }
  if(m_attachmentCountHasBeenSet)
  {
      oStream << location << ".AttachmentCount=" << m_attachmentCount << "&";
  }
  if(m_isAttachableHasBeenSet)
  {
      oStream << location << ".IsAttachable=" << m_isAttachable << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_createDateHasBeenSet)
  {
      oStream << location << ".CreateDate=" << m_createDate << "&";
  }
  if(m_updateDateHasBeenSet)
  {
      oStream << location << ".UpdateDate=" << m_updateDate << "&";
  }
  if(m_policyVersionListHasBeenSet)
  {
      for(auto& item : m_policyVersionList)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".PolicyVersionList";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
}
