/*
 * PsaiStringUtilities.h
 *
 *  Created on: 05-Apr-2009
 *      Author: Tim Sheppard
 *
 *      Common utilities for strings including conversion to
 */

#ifndef PSAISTRINGUTILITIES_H_
#define PSAISTRINGUTILITIES_H_

class string;

typedef std::string String;

class PsaiStringUtilities
{
	private:
		PsaiStringUtilities();

	public:
		virtual ~PsaiStringUtilities();

		String convertToString(const unsigned int value) const;
		String convertToString(const int value) const;
		String convertToString(const float value) const;
		String convertToString(const double value) const;
		String convertToString(const bool value) const;
		String convertToString(const unsigned short int value) const;
		String convertToString(const uint8_t value) const;

		/**
		 * @return A single @class PsaiStringUtilities instance
		 */
		static const PsaiStringUtilities& getStringUtils()
		{
			PsaiStringUtilities* utils = new PsaiStringUtilities();
			return *(utils);
		}
};

#endif /* PSAISTRINGUTILITIES_H_ */
