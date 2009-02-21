/*
 * PsaiXmlUtils.cpp
 *
 *  Created on: 06-Jan-2009
 *      Author: tim
 */

#include <cssysdef.h>

#include <globals.h>
#include <string>

#include <net/messages.h>

#include <xercesc/util/PlatformUtils.hpp>
#include <xercesc/dom/DOM.hpp>
#include <xercesc/dom/DOMImplementation.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMElement.hpp>

#include "PsaiXmlConstants.h"
#include "PsaiXmlUtils.h"

using namespace XERCES_CPP_NAMESPACE;

DOMElement& PsaiXmlUtils::getDocumentRootElement(DOMDocument& document)
{
	return *(document.getDocumentElement());
}

const bool PsaiXmlUtils::initiliaseXmlUtils()
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

XMLCh* PsaiXmlUtils::transcode(const std::string chars)
{
	 XMLCh* xmlch = XMLString::transcode(chars.c_str());

	 return xmlch;
}

DOMImplementation& PsaiXmlUtils::getDefaultDomImplementation()
{
	const XMLCh* features = transcode("Range");
	DOMImplementation* implementation = DOMImplementationRegistry::getDOMImplementation(features);
	return *(implementation);
}

DOMDocument& PsaiXmlUtils::getDOMDocumentForMessageType(const std::string messageType)
{
	DOMDocument& document = *(getDefaultDomImplementation().createDocument(transcode(PsaiXmlConstants::PSAI_NAMESPACE), transcode(PsaiXmlConstants::PSAI_MESSAGE_ELEMENT_START), 0));

	document.getDOMConfiguration()->setParameter(transcode("schema-location"), &(PsaiXmlConstants::PSAI_SCHEMA_LOCATION));

	DOMElement& root = *(document.getDocumentElement());

	DOMElement& msgType = *(document.createElement(transcode(PsaiXmlConstants::ELEMENT_ALL_MESSAGE_TYPE)));
	msgType.setTextContent(transcode(messageType));
	root.appendChild(&msgType);

	return document;
}

DOMElement& PsaiXmlUtils::createDomElement(DOMDocument& parentDoc, DOMElement& parentElement, const std::string elementTag, const std::string elementText)
{
	DOMElement& element = *(parentDoc.createElement(transcode(elementTag)));

	if (elementText != "")
	{
		element.setTextContent(transcode(elementText));
	}

	parentElement.appendChild(&element);

	return element;
}

std::string PsaiXmlUtils::getChatTypeAsString(uint8_t chatType)
{
	std::string typeString;

	switch (chatType)
	{
		case CHAT_ADVICE:
			typeString = PsaiXmlConstants::CHAT_ADVICE;
			break;
		case CHAT_ADVICE_LIST:
			typeString = PsaiXmlConstants::CHAT_ADVICE_LIST;
			break;
		case CHAT_ADVISOR:
			typeString = PsaiXmlConstants::CHAT_ADVISOR;
			break;
		case CHAT_AUCTION:
			typeString = PsaiXmlConstants::CHAT_AUCTION;
			break;
		case CHAT_GM:
			typeString = PsaiXmlConstants::CHAT_GM;
			break;
		case CHAT_GROUP:
			typeString = PsaiXmlConstants::CHAT_GROUP;
			break;
		case CHAT_GUILD:
			typeString = PsaiXmlConstants::CHAT_GUILD;
			break;
	}

	return typeString;
}

std::string PsaiXmlUtils::convertDomDocumentToXmlString(DOMDocument& document)
{
	DOMImplementation* impl = document.getImplementation();
	DOMWriter* writer = impl->createDOMWriter();

	XMLCh* xmlString = writer->writeToString(document);

	return std::string(XMLString::transcode(xmlString));
}