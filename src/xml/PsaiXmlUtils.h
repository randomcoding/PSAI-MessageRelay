/*
 * PsaiXmlUtils.h
 *
 *  Created on: 04-Sep-2008
 *      Author: tim
 */

#ifndef PSAIXMLUTILS_H_
#define PSAIXMLUTILS_H_

#include <string>

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

		const void clearXmlUtils();

		/**
		 * Convert a string into an XMLCh* for use with the Xerces API
		 * @param chars The string to transcode
		 * @return An XMLCh* which is the transcoded string
		 */
		const XMLCh* transcode(const std::string chars);

		/**
		 * Convert an XMLCh* into a string
		 * @param xmlCh The XMLCh* to convert
		 * @return The string version of the XMLCh* value
		 */
		const std::string transcode(const XMLCh* xmlCh);

		/**
		 * Gets a string representation of a chat type constant. Uses PsaiXmlConstants::CHAT_... values
		 * @param chatType The type of chat message
		 * @return A string for the message type
		 */
		const std::string getChatTypeAsString(const uint8_t chatType);

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
		 * @param elementText The text content of the element to create. Defaults to an empty string
		 * @return
		 */
		DOMElement& createDomElement(DOMDocument& parentDoc, DOMElement& parentElement, const std::string elementTag, const std::string elementText="");

		/**
		 * Converts a DOMDocument into a string
		 * @param document The document to convert
		 * @return A string that is the document's xml
		 */
		const std::string convertDomDocumentToXmlString(const DOMDocument& document);

		/**
		 * Gets the root element of the given document
		 * @param document The document to get the root element of
		 * @return The root element of the document
		 */
		DOMElement& getDocumentRootElement(const DOMDocument& document);

		static PsaiXmlUtils& getXmlUtils();
		/*{
			PsaiXmlUtils* utils = new PsaiXmlUtils();
			return *(utils);
		}*/
};

#endif /* PSAIXMLUTILS_H_ */
