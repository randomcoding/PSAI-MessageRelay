/*
 * StringUtilsTests.cpp
 *
 *  Created on: 05-Apr-2009
 *      Author: Tim Sheppard
 */

#include <gtest/gtest.h>

#include <util/PsaiStringUtilities.h>

class StringUtilsTest: public ::testing::Test
{
	public:

		virtual ~ StringUtilsTest() {}

		const PsaiStringUtilities& getStringUtils()
		{
			return PsaiStringUtilities::getStringUtils();
		}
};

TEST_F(StringUtilsTest, testConvertBooleanToString)
{
	ASSERT_STREQ("true", getStringUtils().convertToString(true).c_str());
	ASSERT_STREQ("false", getStringUtils().convertToString(false).c_str());
}

TEST_F(StringUtilsTest, testConvertIntToString)
{
	int value = 123;
	ASSERT_STREQ("123", getStringUtils().convertToString(value).c_str());
}

TEST_F(StringUtilsTest, testConvertUintToString)
{
	unsigned int value = 321;
	ASSERT_STREQ("321", getStringUtils().convertToString(value).c_str());
}

TEST_F(StringUtilsTest, testConvertFloatToString)
{
	float value = 56.78;
	ASSERT_STREQ("56.78", getStringUtils().convertToString(value).c_str());
}

TEST_F(StringUtilsTest, testConvertDoubleToString)
{
	double value = 87.65;
	ASSERT_STREQ("87.65", getStringUtils().convertToString(value).c_str());
}
