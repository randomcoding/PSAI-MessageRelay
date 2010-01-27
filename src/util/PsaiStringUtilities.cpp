/*
 * PsaiStringUtilities.cpp
 *
 *  Created on: 05-Apr-2009
 *      Author: Tim Sheppard
 */

#include <string>
#include <sstream>

#include "PsaiStringUtilities.h"

PsaiStringUtilities::PsaiStringUtilities()
{
	// do nothing
}

PsaiStringUtilities::~PsaiStringUtilities()
{
	// do nothing
}

String PsaiStringUtilities::convertToString(const unsigned int value) const
{
	String valueString;
	std::stringstream out;
	out << value;
	valueString = out.str();

	return valueString;
}

String PsaiStringUtilities::convertToString(const int value) const
{
	String valueString;
	std::stringstream out;
	out << value;
	valueString = out.str();

	return valueString;
}

String PsaiStringUtilities::convertToString(const float value) const
{
	String valueString;
	std::stringstream out;
	out << value;
	valueString = out.str();

	return valueString;
}

String PsaiStringUtilities::convertToString(const double value) const
{
	String valueString;
	std::stringstream out;
	out << value;
	valueString = out.str();

	return valueString;
}

String PsaiStringUtilities::convertToString(const unsigned short int value) const
{
	String valueString;
	std::stringstream out;
	out << value;
	valueString = out.str();

	return valueString;
}

/*String PsaiStringUtilities::convertToString(const uint8_t value) const
{
	String valueString;
	std::stringstream out;
	out << value;
	valueString = out.str();

	return valueString;
}*/

String PsaiStringUtilities::convertToString(const bool value) const
{
	String valueString(value ? "true" : "false");

	return valueString;
}

