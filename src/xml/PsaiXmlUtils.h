/*
 * PsaiXmlUtils.h
 *
 *  Created on: 04-Sep-2008
 *      Author: tim
 */

#ifndef PSAIXMLUTILS_H_
#define PSAIXMLUTILS_H_

class string;

class PsaiXmlUtils
{
	public:
		PsaiXmlUtils();
		virtual ~PsaiXmlUtils();

		static void initiliaseXmlUtils();

		static void clearXmlUtils();

		static const XMLCh* transcode(const std::string string);

		static std::string getChatTypeAsString(uint8_t chatType);

		static XERCES_CPP_NAMESPACE::DOMImplementation& getDefaultDomImplementation();

		static XERCES_CPP_NAMESPACE::DOMDocument& getDOMDocumentForMessageType(const std::string messageType);

		static XERCES_CPP_NAMESPACE::DOMElement& createDomElement(XERCES_CPP_NAMESPACE::DOMDocument& parentDoc, XERCES_CPP_NAMESPACE::DOMElement& parentElement, const std::string elementTag,
				const std::string elementText);

		static std::string convertDomDocumentToXmlString(XERCES_CPP_NAMESPACE::DOMDocument& domDoc);
};

#endif /* PSAIXMLUTILS_H_ */
