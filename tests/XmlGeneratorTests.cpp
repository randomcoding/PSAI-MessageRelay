/*
 * XmlGeneratorTests.cpp
 *
 *  Created on: 04-Jan-2009
 *      Author: tim
 */

#include <cstring>
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

		std::string getOpenTag(std::string tagName)
		{
			std::string tag("<");
			tag.append(tagName);
			tag.append(">");

			return tag;
		}

		std::string getCloseTag(std::string tagName)
		{
			std::string tag("</");
			tag.append(tagName);
			tag.append(">");

			return tag;
		}

		std::string getEmptyTag(std::string tagName)
		{
			std::string tag("<");
			tag.append(tagName);
			tag.append(" />");

			return tag;
		}

		std::string getTextTag(std::string tagName, std::string tagContent)
		{
			std::string tag(getOpenTag(tagName));
			tag.append(tagContent);
			tag.append(getCloseTag(tagName));

			return tag;
		}

		std::string getExpectedXmlStringForChatMessageToXml()
		{
			std::string chatMessageXml = getXmlStringStartForMessageType(PsaiXmlConstants::MSGTYPE_CHAT);
			chatMessageXml.append(getOpenTag(PsaiXmlConstants::TYPE_CHAT_MESSAGE));
			chatMessageXml.append(getTextTag(PsaiXmlConstants::ELEMENT_TEXT, "Something Said"));
			chatMessageXml.append(getOpenTag(PsaiXmlConstants::ELEMENT_CHAT_SPEAKER));
			chatMessageXml.append(getTextTag(PsaiXmlConstants::ELEMENT_CHAT_SPEAKER_TO, "You"));
			chatMessageXml.append(getTextTag(PsaiXmlConstants::ELEMENT_CHAT_SPEAKER_FROM, "Me"));
			chatMessageXml.append(getCloseTag(PsaiXmlConstants::ELEMENT_CHAT_SPEAKER));
			chatMessageXml.append(getOpenTag(PsaiXmlConstants::ELEMENT_CHAT_CHAT_TYPE));
			chatMessageXml.append(PsaiXmlConstants::CHAT_SAY);
			chatMessageXml.append(getCloseTag(PsaiXmlConstants::ELEMENT_CHAT_CHAT_TYPE));
			chatMessageXml.append(getCloseTag(PsaiXmlConstants::TYPE_CHAT_MESSAGE));
			chatMessageXml.append(getXmlStringMessageEnd());

			return chatMessageXml;
		}

		std::string getExpectedXmlForPlaySoundMessage()
		{
			std::string xml = getXmlStringStartForMessageType(PsaiXmlConstants::MSGTYPE_PLAYSOUND);
			xml.append(getOpenTag(PsaiXmlConstants::TYPE_PLAY_SOUND_MESSAGE));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PLAY_SOUND_SOUND, "aSound"));
			xml.append(getCloseTag(PsaiXmlConstants::TYPE_PLAY_SOUND_MESSAGE));
			xml.append(getXmlStringMessageEnd());

			return xml;
		}

		std::string getExpectedXmlForSoundEventMessage()
		{
			std::string xml = getXmlStringStartForMessageType(PsaiXmlConstants::MSGTYPE_SOUND_EVENT);
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_SOUNT_EVENT_TYPE, "10"));
			xml.append(getXmlStringMessageEnd());
			return xml;
		}

};

TEST_F(XmlGeneratorTest, testChatMessageToXml)
{
	psChatMessage* msg = new psChatMessage(4321, "Me", "You", "Something Said", CHAT_SAY, false);
	ASSERT_TRUE(msg)<< "Chat Message was null";

	std::string chatXml = getGenerator().toXml(*(msg));

	ASSERT_STREQ(getExpectedXmlStringForChatMessageToXml().c_str(), chatXml.c_str()) << "Xml generated from psChatMessage was not the same as expected";
}

TEST_F(XmlGeneratorTest, testPlaySoundMessageToXml)
{
	csString csstring("aSound");
	psPlaySoundMessage msg(1, csstring);
	msg.sound = csstring;
	std::cout << "sound is " << msg.sound.GetDataSafe() << "\n";

	std::string msgXml = getGenerator().toXml(msg);

	ASSERT_STREQ(getExpectedXmlForPlaySoundMessage().c_str(), msgXml.c_str());
}

TEST_F(XmlGeneratorTest, testSoundEventMessageToXml)
{
	csString csstring("aSound");
	psSoundEventMessage msg(1, 10);

	std::string msgXml = getGenerator().toXml(msg);

	ASSERT_STREQ(getExpectedXmlForSoundEventMessage().c_str(), msgXml.c_str());
}

/*

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

