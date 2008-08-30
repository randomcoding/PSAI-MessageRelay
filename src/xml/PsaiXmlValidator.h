/*
 * PsaiXmlValidator.h
 *
 *  Created on: 08-Aug-2008
 *      Author: tim
 */

#ifndef PSAIXMLVALIDATOR_H_
#define PSAIXMLVALIDATOR_H_

#include <string.h>


class PsaiXmlValidator
{
	public:
		PsaiXmlValidator();
		virtual ~PsaiXmlValidator();

		/**
		 * Checks if the string passed in is valid xml.
		 * @param xmlString
		 * @return true if the string is valid xml.
		 */
		bool isValid(std::string xmlString);

};

#endif /* PSAIXMLVALIDATOR_H_ */
