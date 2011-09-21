/*
 * XmlUtilsTests.cpp
 *
 * Tests for the Xml Utils defined in XmlUtils.cpp
 *
 *  Created on: 06-Jan-2009
 *      Author: tim
 */

#include <cssysdef.h>
#include <gtest/gtest.h>

#include <string>

#include <xml/PsaiXmlUtils.h>

class XmlUtilsTest: public ::testing::Test
{
	public:
		virtual ~XmlUtilsTest() {}

	protected:

		// no setup

		// no tear down

		PsaiXmlUtils& getXmlUtils()
		{
			PsaiXmlUtils& utils = *(new PsaiXmlUtils());
			utils.initiliaseXmlUtils();
			return utils;
		}

		const std::string getTestNamespace()
		{
			return "http://www.zarniwoops.plus.com/psai/xml/psaiXmlMessages.xsd";
		}

		std::string getExpectedEmptyXmlDocument()
		{
			return "<?xml version=\"1.0\" encoding=\"UTF-16\" standalone=\"no\" ?>";
		}

		std::string getExpectedRootElementOnlyXmlDocument()
		{
			std::string xmlString = "<?xml version=\"1.0\" encoding=\"UTF-16\" standalone=\"no\" ?>";
			xmlString.append("<root/>");

			return xmlString;
		}

		std::string getExpectedRootElementAndNamespaceXmlDocument()
		{
			std::string xmlString = "<?xml version=\"1.0\" encoding=\"UTF-16\" standalone=\"no\" ?>";
			xmlString.append("<root xmlns=\"");
			xmlString.append(getTestNamespace());
			xmlString.append("\"/>");

			return xmlString;
		}

		std::string getExpectedXmlStringForDocumentForMessageType()
		{
			std::string xmlString = "<?xml version=\"1.0\" encoding=\"UTF-16\" standalone=\"no\" ?>";
			xmlString.append("<psai:psaimessage xmlns:psai=\"");
			xmlString.append(getTestNamespace());
			xmlString.append("\">");
			xmlString.append("<psai:messagetype>TestMessageType</psai:messagetype></psai:psaimessage>");

			return xmlString;
		}

};

TEST_F(XmlUtilsTest, testTranscode)
{
	std::string toTranscode("toTranscode");
	PsaiXmlUtils& xmlUtils = getXmlUtils();
	const XMLCh* xmlch = xmlUtils.transcode(toTranscode);
	ASSERT_EQ(116, *xmlch)<< "actual value of "<< *xmlch << " was not the same as expected: 1";

	std::string transcoded = xmlUtils.transcode(xmlch);
	ASSERT_EQ("toTranscode", transcoded);
}

TEST_F(XmlUtilsTest, testGetDefaultDomImplementaion)
{
	ASSERT_NO_THROW(getXmlUtils().getDefaultDomImplementation());
}

TEST_F(XmlUtilsTest, testGetDomDocumentForMessageType)
{
	PsaiXmlUtils& utils = getXmlUtils();
	DOMDocument& doc = utils.getDOMDocumentForMessageType("TestMessageType");

	DOMNodeList* messageTypeElementList = doc.getElementsByTagName(utils.transcode("psai:messagetype"));
	XMLSize_t size = messageTypeElementList->getLength();
	ASSERT_EQ(1, size);

	DOMNode* messageTypeElement = messageTypeElementList->item(0);

	ASSERT_STREQ("TestMessageType", utils.transcode(((DOMElement*)messageTypeElement)->getTextContent()).c_str());
	ASSERT_STREQ("psai:messagetype", utils.transcode(((DOMElement*)messageTypeElement)->getTagName()).c_str());
}

TEST_F(XmlUtilsTest, testCreateDomElement)
{
	PsaiXmlUtils& utils = getXmlUtils();
	DOMImplementation& impl = utils.getDefaultDomImplementation();
	DOMDocument& doc = *(impl.createDocument(0, utils.transcode("root"), 0));

	DOMElement& element = utils.createDomElement(doc, utils.getDocumentRootElement(doc), "Element_Type", "Element Text");

	const std::string elementContent = utils.transcode(element.getTextContent());
	const std::string elementTagName = utils.transcode(element.getTagName());

	ASSERT_STREQ("Element_Type", elementTagName.c_str());
	ASSERT_STREQ("Element Text", elementContent.c_str());
}

TEST_F(XmlUtilsTest, testConvertDomDocumentToString_EmptyDocument)
{
	PsaiXmlUtils& utils = getXmlUtils();
	DOMImplementation& impl = utils.getDefaultDomImplementation();
	DOMDocument& doc = *(impl.createDocument());

	ASSERT_STREQ(getExpectedEmptyXmlDocument().c_str(), utils.convertDomDocumentToXmlString(doc).c_str());
}

TEST_F(XmlUtilsTest, testConvertDomDocumentToString_SimpleDocWithRootElement)
{
	PsaiXmlUtils& utils = getXmlUtils();
	DOMImplementation& impl = utils.getDefaultDomImplementation();
	DOMDocument& doc = *(impl.createDocument(0, utils.transcode("root"), 0));

	ASSERT_STREQ(getExpectedRootElementOnlyXmlDocument().c_str(), utils.convertDomDocumentToXmlString(doc).c_str());
}

TEST_F(XmlUtilsTest, testConvertDomDocumentToString_SimpleDocWithRootElementAndNamespace)
{
	PsaiXmlUtils& utils = getXmlUtils();
	DOMImplementation& impl = utils.getDefaultDomImplementation();
	DOMDocument& doc = *(impl.createDocument(utils.transcode(getTestNamespace()), utils.transcode("root"), 0));

	ASSERT_STREQ(getExpectedRootElementAndNamespaceXmlDocument().c_str(), utils.convertDomDocumentToXmlString(doc).c_str());
}

TEST_F(XmlUtilsTest, testConvertDomDocumentToString_DocumentForMessageType)
{
	PsaiXmlUtils& utils = getXmlUtils();
	DOMDocument& doc = utils.getDOMDocumentForMessageType("TestMessageType");

	ASSERT_STREQ(getExpectedXmlStringForDocumentForMessageType().c_str(), utils.convertDomDocumentToXmlString(doc).c_str());
}

TEST_F(XmlUtilsTest, testGetDocumentRootElement_SimpleDocWithRootElement)
{
	PsaiXmlUtils& utils = getXmlUtils();
	DOMImplementation& impl = utils.getDefaultDomImplementation();
	DOMDocument& doc = *(impl.createDocument(0, utils.transcode("root"), 0));

	DOMElement& rootElement = utils.getDocumentRootElement(doc);

	ASSERT_STREQ("root", utils.transcode(rootElement.getLocalName()).c_str());
	ASSERT_STREQ("root", utils.transcode(rootElement.getTagName()).c_str());
}
