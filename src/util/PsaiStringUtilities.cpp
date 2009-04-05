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

std::string PsaiStringUtilities::convertToString(const unsigned int value) const
{
	std::string valueString;
	std::stringstream out;
	out << value;
	valueString = out.str();

	return valueString;
}

std::string PsaiStringUtilities::convertToString(const int value) const
{
	std::string valueString;
	std::stringstream out;
	out << value;
	valueString = out.str();

	return valueString;
}

std::string PsaiStringUtilities::convertToString(const float value) const
{
	std::string valueString;
	std::stringstream out;
	out << value;
	valueString = out.str();

	return valueString;
}

std::string PsaiStringUtilities::convertToString(const double value) const
{
	std::string valueString;
	std::stringstream out;
	out << value;
	valueString = out.str();

	return valueString;
}

std::string PsaiStringUtilities::convertToString(const bool value) const
{
	std::string valueString(value ? "true" : "false");

	return valueString;
}

