/*
 * PsaiXmlUtils.h
 *
 *  Created on: 04-Sep-2008
 *      Author: tim
 */

#ifndef PSAIXMLUTILS_H_
#define PSAIXMLUTILS_H_

#include <xercesc/util/PlatformUtils.hpp>
#include <xercesc/dom/DOM.hpp>
#include <xercesc/dom/DOMImplementation.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMElement.hpp>

using namespace XERCES_CPP_NAMESPACE;

class PsaiXmlUtils
{
	public:
		PsaiXmlUtils();
		virtual ~PsaiXmlUtils();

		const bool initiliaseXmlUtils();

		void clearXmlUtils();

		/**
		 * Convert a string into an XMLCh* for use with the Xerces API
		 * @param chars The string to transcode
		 * @return An XMLCh* which is the transcoded string
		 */
		XMLCh* transcode(const std::string chars);

		/**
		 * Convert an XMLCh* into a string
		 * @param xmlCh The XMLCh* to convert
		 * @return The string version of the XMLCh* value
		 */
		std::string transcode(const XMLCh* xmlCh);

		/**
		 * Gets a string representation of a chat type constant. Uses PsaiXmlConstants::CHAT_... values
		 * @param chatType The type of chat message
		 * @return A string for the message type
		 */
		std::string getChatTypeAsString(uint8_t chatType);

		/**
		 * Creates a default DOMImplementation reference
		 * @return A reference to a DOMImplementation object
		 */
		DOMImplementation& getDefaultDomImplementation();

		/**
		 * Creates the base DOMDocument for a message type
		 * @param messageType The type of message to use
		 * @return a DOMDocument that has the base values filled in
		 */
		DOMDocument& getDOMDocumentForMessageType(const std::string messageType);

		/**
		 * Creates a DOMElement as a child of parentElement within parentDoc.
		 * @param parentDoc The DOMDocument that is the overall parent of the DOM
		 * @param parentElement The DOMelement that is to direct parent of the new element
		 * @param elementTag The tag of the new element to create
		 * @param elementText The text content of the element to create
		 * @return
		 */
		DOMElement& createDomElement(DOMDocument& parentDoc, DOMElement& parentElement, const std::string elementTag, const std::string elementText);

		/**
		 * Converts a DOMDocument into a string
		 * @param document The document to convert
		 * @return A string that is the document's xml
		 */
		std::string convertDomDocumentToXmlString(DOMDocument& document);

		/**
		 * Gets the root element of the given document
		 * @param document The document to get the root element of
		 * @return The root element of the document
		 */
		DOMElement& getDocumentRootElement(DOMDocument& document);
};

/*DOMElement& PsaiXmlUtils::getDocumentRootElement(DOMDocument& document)
 {
 return *(document.getDocumentElement());
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
 const XMLCh* features = transcode("Range");
 DOMImplementation* implementation = DOMImplementationRegistry::getDOMImplementation(features);
 return *(implementation);
 }

 DOMDocument& PsaiXmlUtils::getDOMDocumentForMessageType(const std::string messageType)
 {
 DOMDocument& document = *(getDefaultDomImplementation().createDocument(transcode(PsaiXmlConstants::PSAI_NAMESPACE), transcode(PsaiXmlConstants::PSAI_MESSAGE_ELEMENT_START), 0));

 document.getDOMConfiguration()->setParameter(transcode(std::string("schema-location")), &(PsaiXmlConstants::PSAI_SCHEMA_LOCATION));

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
 }*/

#endif /* PSAIXMLUTILS_H_ */
