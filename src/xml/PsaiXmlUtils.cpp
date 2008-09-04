/*
 * PsaiXmlUtils.cpp
 *
 *  Created on: 04-Sep-2008
 *      Author: tim
 */



#include <net/messages.h>

#include <xercesc/util/PlatformUtils.hpp>
#include <xercesc/dom/DOM.hpp>

#include "PsaiXmlConstants.h"

#include "PsaiXmlUtils.h"

using namespace XERCES_CPP_NAMESPACE;

PsaiXmlUtils::PsaiXmlUtils()
{
	// TODO Auto-generated constructor stub

}

PsaiXmlUtils::~PsaiXmlUtils()
{
	// TODO Auto-generated destructor stub
}

bool PsaiXmlUtils::initiliaseXmlUtils()
{
	bool initialiseSuccess = true;

	try
	{
		XMLPlatformUtils::Initialize();
	}
	catch (const XMLException& toCatch)
	{
		initialiseSuccess = false;
	}
	return initialiseSuccess;
}

void PsaiXmlUtils::clearXmlUtils()
{
	XMLPlatformUtils::Terminate();
}

const XMLCh* PsaiXmlUtils::transcode(const std::string string)
{
	return XMLString::transcode(string.c_str());
}

DOMImplementation& PsaiXmlUtils::getDefaultDomImplementation()
{
	DOMImplementation* impl = DOMImplementationRegistry::getDOMImplementation(transcode(std::string("Range")));
	return *(impl);
}

DOMDocument& PsaiXmlUtils::getDOMDocumentForMessageType(const std::string messageType)
{
	DOMDocument& domDoc = *(getDefaultDomImplementation().createDocument(transcode(PsaiXmlConstants.PSAI_NAMESPACE), transcode(PsaiXmlConstants.PSAI_MESSAGE_ELEMENT_START), 0));

	domDoc.getDOMConfiguration()->setParameter(transcode(std::string("schema-location")), &(PsaiXmlConstants.PSAI_SCHEMA_LOCATION));

	DOMElement& root = *(domDoc.getDocumentElement());

	DOMElement& msgType = *(domDoc.createElement(transcode(PsaiXmlConstants.ELEMENT_ALL_MESSAGE_TYPE)));
	msgType.setTextContent(transcode(messageType));
	root.appendChild(msgType);

	return *domDoc;
}

DOMElement& PsaiXmlUtils::createDomElement(DOMDocument& parentDoc, DOMElement& parentElement, const std::string elementTag, const std::string elementText)
{
	DOMElement& element = *(parentDoc.createElement(transcode(elementTag)));

	if (elementText != NULL)
	{
		element.setTextContent(transcode(elementText));
	}
	parentElement.appendChild(element);
}

std::string PsaiXmlUtils::getChatTypeAsString(uint8_t chatType)
{
	std::string typeString;
	switch (chatType)
	{
		case CHAT_ADVICE:
			typeString = PsaiXmlConstants.CHAT_ADVICE;
			break;
		case CHAT_ADVICE_LIST:
			typeString = PsaiXmlConstants.CHAT_ADVICE_LIST;
			break;
		case CHAT_ADVISOR:
			typeString = PsaiXmlConstants.CHAT_ADVISOR;
			break;
		case CHAT_AUCTION:
			typeString = PsaiXmlConstants.CHAT_AUCTION;
			break;
		case CHAT_GM:
			typeString = PsaiXmlConstants.CHAT_GM;
			break;
		case CHAT_GROUP:
			typeString = PsaiXmlConstants.CHAT_GROUP;
			break;
		case CHAT_GUILD:
			typeString = PsaiXmlConstants.CHAT_GUILD;
			break;
	}

	return typeString;
}

std::string PsaiXmlUtils::convertDomDocumentToXmlString(DOMDocument& domDoc)
{
	DOMImplementation& impl = *(domDoc.getImplementation());
	DOMWriter& writer =*(impl.createDOMWriter());

	XMLCh* xmlString = writer.writeToString(domDoc);

	return string(XMLString.transcode(xmlString));
}
