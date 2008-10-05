/*
 * XmlTests.cpp
 *
 *  Created on: 05-Oct-2008
 *      Author: tim
 */
#include <string>
#include <net/messages.h>
#include <cppunit/extensions/HelperMacros.h>
#include "XmlTests.h"

#include "xml/PsaiXmlGenerator.h"

CPPUNIT_TEST_SUITE_REGISTRATION(XmlTests);

XmlTests::~XmlTests()
{
	// TODO Auto-generated destructor stub
}

PsaiXmlGenerator& XmlTests::getGenerator()
{
	PsaiXmlGenerator* generator = new PsaiXmlGenerator();
	return *(generator);
}

void XmlTests::testPsaiXmlGeneratorChatMessageToXml()
{
	psChatMessage* msg = new psChatMessage(4321, "Me", "You", "Something Said", CHAT_SAY, false);
	std::string chatXml = getGenerator().toXml(*(msg));

	CPPUNIT_ASSERT_EQUAL(getExpectedXmlStringForChatMessageToXml(), chatXml);
}

const std::string XmlTests::getExpectedXmlStringForChatMessageToXml()
{
	return std::string("");
}

void XmlTests::testPsaiXmlGeneratorPlaySoundMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorSoundEventMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorPersistItemMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorPersistActorMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorPersistActionLocationMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorRemoveObjectMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorDRMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorStatDRMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorCombatEventMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorModeMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorMoveLockMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorNewSectorMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorEffectMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorStopEffectMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorSpellCastMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorSpellCancelMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorStatsMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorSystemMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorWeatherMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorCharacterDetailsMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorGUIInventoryMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorGUIActiveMagicMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorGUIInteractMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorGUIMerchantMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorGUISkillMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorGUITargetUpdateMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorLootMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorQuestListMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorQuestRewardMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorUpdateObjectNameMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorViewItemDescriptionMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorViewItemUpdateMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}

void XmlTests::testPsaiXmlGeneratorEquipmentMessageToXml()
{
	// TODO: Implement testPsaiXmlGenerator_ToXml() function.
}
