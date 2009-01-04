/*
 * XmlGeneratorTests.cpp
 *
 *  Created on: 04-Jan-2009
 *      Author: tim
 */

#include <gtest/gtest.h>

#include <string>
#include <net/messages.h>

//#include <cssysdef.h>

#include <xml/PsaiXmlGenerator.h>

CS_IMPLEMENT_APPLICATION

class XmlGeneratorTest: public testing::Test
{
	protected:
		// no set up yet

		// no tear down yet

		std::string getExpectedXmlStringForChatMessageToXml()
		{
			return std::string("");
		}

		PsaiXmlGenerator& getGenerator()
		{
			PsaiXmlGenerator* generator = new PsaiXmlGenerator();
			return *(generator);
		}

};

/*int main(int argc, char **argv)
{
	std::cout << "Running main() from XmlGeneratorTest.cpp\n";

	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}*/

/*void testPsaiXmlGeneratorPlaySoundMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorSoundEventMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorPersistItemMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorPersistActorMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorPersistActionLocationMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorRemoveObjectMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorDRMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorStatDRMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorCombatEventMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorModeMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorMoveLockMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorNewSectorMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorEffectMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorStopEffectMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorSpellCastMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorSpellCancelMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorStatsMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorSystemMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorWeatherMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorCharacterDetailsMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorGUIInventoryMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorGUIActiveMagicMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorGUIInteractMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorGUIMerchantMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorGUISkillMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorGUITargetUpdateMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorLootMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorQuestListMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorQuestRewardMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorUpdateObjectNameMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorViewItemDescriptionMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorViewItemUpdateMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }

 void testPsaiXmlGeneratorEquipmentMessageToXml()
 {
 // TODO: Implement testPsaiXmlGenerator_ToXml() function.
 }*/

TEST_F(XmlGeneratorTest, testChatMessageToXml)
{
	uint32_t msgNum = 4321;
	psChatMessage msg(msgNum, "Me\0", "You\0", "Something Said\0", CHAT_SAY, false);
	std::string chatXml = getGenerator().toXml(msg);

	ASSERT_EQ(getExpectedXmlStringForChatMessageToXml(), chatXml);
}
