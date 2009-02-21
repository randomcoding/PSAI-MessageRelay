/*
 * XmlGeneratorTests.cpp
 *
 *  Created on: 04-Jan-2009
 *      Author: tim
 */

#include <gtest/gtest.h>

#include <iostream>
#include <string>

#include <net/messages.h>

#include <xml/PsaiXmlGenerator.h>
#include <xml/PsaiXmlUtils.h>

#include <xercesc/util/PlatformUtils.hpp>
#include <xercesc/dom/DOMDocument.hpp>

#include <xml/PsaiXmlConstants.h>

XERCES_CPP_NAMESPACE_USE

CS_IMPLEMENT_APPLICATION

class XmlGeneratorTest: public testing::Test
{
	protected:
		// no set up yet

		// no tear down yet

		PsaiXmlGenerator& getGenerator()
		{
			PsaiXmlGenerator* generator = new PsaiXmlGenerator();
			return *(generator);
		}

		std::string getXmlStringStartForMessageType(std::string messageType)
		{
			std::string xmlString = "<?xml version=\"1.0\" encoding=\"UTF-16\" standalone=\"no\" ?>";
			xmlString.append("<psai:psaimessage xmlns:psai=\"");
			xmlString.append("http://www.zarniwoops.plus.com/psai/xml/psaiXmlMessages.xsd");
			xmlString.append("\">");
			xmlString.append("<psai:messagetype>");
			xmlString.append(messageType.c_str());
			xmlString.append("</psai:messagetype>");

			return xmlString;
		}

		std::string getXmlStringMessageEnd()
		{
			return "</psai:psaimessage>";
		}

		std::string getExpectedXmlStringForChatMessageToXml()
		{
			std::string chatMessageXml = getXmlStringStartForMessageType(PsaiXmlConstants::MSGTYPE_CHAT);
			chatMessageXml.append("<psai:chatmessage>");
			chatMessageXml.append("<psai:text>Something Said</psai:text>");
			chatMessageXml.append("<psai:speaker><psai:to>You</psai:to><psai:from>Me</psai:from></psai:speaker>");
			chatMessageXml.append("<psai:chattype>");
			chatMessageXml.append(PsaiXmlConstants::CHAT_SAY);
			chatMessageXml.append("</psai:chattype>");
			chatMessageXml.append("</psai:chatmessage>");
			chatMessageXml.append(getXmlStringMessageEnd());

			return chatMessageXml;
		}

};

TEST_F(XmlGeneratorTest, testChatMessageToXml)
{
	uint32_t msgNum = 4321;
	psChatMessage* msg = new psChatMessage(msgNum, "Me", "You", "Something Said", CHAT_SAY, false);
	ASSERT_TRUE(msg) << "Chat Message was null";

	std::string chatXml = getGenerator().toXml(*(msg));

	ASSERT_STREQ(getExpectedXmlStringForChatMessageToXml().c_str(), chatXml.c_str()) << "Xml generated from psChatMessage was not the same as expected";
}

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

