/*
 * PsaiStringUtilities.h
 *
 *  Created on: 05-Apr-2009
 *      Author: Tim Sheppard
 */

#ifndef PSAISTRINGUTILITIES_H_
#define PSAISTRINGUTILITIES_H_

class string;

class PsaiStringUtilities
{
	private:
		PsaiStringUtilities();

	public:
		virtual ~PsaiStringUtilities();

		std::string convertToString(const unsigned int value) const;
		std::string convertToString(const int value) const;
		std::string convertToString(const float value) const;
		std::string convertToString(const double value) const;
		std::string convertToString(const bool value) const;

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
