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

		bool isValid(std::string xmlString);
};

#endif /* PSAIXMLVALIDATOR_H_ */
