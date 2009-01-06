/*
 * XmlUtilsTests.cpp
 *
 * Tests for the Xml Utils defined in XmlUtils.cpp
 *
 *  Created on: 06-Jan-2009
 *      Author: tim
 */

#include <cssysdef.h>
#include <gtest/gtest.h>

#include <string>

#include <xml/PsaiXmlUtils.h>

class XmlUtilsTest: public testing::Test
{
	protected:

		// no setup

		// no tear down

		PsaiXmlUtils& getXmlUtils()
		{
			PsaiXmlUtils& utils = *(new PsaiXmlUtils());
			utils.initiliaseXmlUtils();
			return utils;
		}
};

TEST_F(XmlUtilsTest, testTranscode)
{
	std::string toTranscode("toTranscode");
	PsaiXmlUtils& xmlUtils = getXmlUtils();
	XMLCh* xmlch = xmlUtils.transcode(toTranscode);
	ASSERT_EQ(116, *xmlch) << "actual value of "<< *xmlch << " was not the same as expected: 1";
}
