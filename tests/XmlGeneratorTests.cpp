/*
 * XmlGeneratorTests.cpp
 *
 *  Created on: 04-Jan-2009
 *      Author: tim
 */

#include <cstring>

#include <util/psconst.h>

#include <gtest/gtest.h>

#include <iostream>
#include <string>

#include <net/messages.h>

#include <xml/PsaiXmlGenerator.h>
#include <xml/PsaiXmlUtils.h>

#include <xercesc/util/PlatformUtils.hpp>
#include <xercesc/dom/DOMDocument.hpp>

#include <xml/PsaiXmlConstants.h>
#include <util/PsaiStringUtilities.h>

XERCES_CPP_NAMESPACE_USE

CS_IMPLEMENT_APPLICATION

class XmlGeneratorTest: public testing::Test
{
	public:
		// Declarations of test values
		static std::string itemName;
		static std::string factionName;
		static std::string fileName;
		static std::string sector;
		static std::string soundName;
		static std::string you;
		static std::string me;
		static std::string chatMessage;
		static EID defaultEid;
		static uint32_t defaultClientNum;
		static csVector3 defaultPositionVector;
		static int soundEventType;
		static int persistItemFlags;
		static int persistItemType;
		static float defaultYRotation;

	protected:
		// no set up yet

		// no tear down yet


		PsaiXmlGenerator& getGenerator()
		{
			PsaiXmlGenerator* generator = new PsaiXmlGenerator();
			return *(generator);
		}

		const PsaiStringUtilities& getStringUtils()
		{
			return PsaiStringUtilities::getStringUtils();
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

		std::string getTextTag(std::string tagName, int tagContent)
		{
			return getTextTag(tagName, getStringUtils().convertToString(tagContent));
		}

		std::string getTextTag(std::string tagName, unsigned int tagContent)
		{
			return getTextTag(tagName, getStringUtils().convertToString(tagContent));
		}

		std::string getTextTag(std::string tagName, bool tagContent)
		{
			return getTextTag(tagName, getStringUtils().convertToString(tagContent));
		}

		std::string getTextTag(std::string tagName, float tagContent)
		{
			return getTextTag(tagName, getStringUtils().convertToString(tagContent));
		}

		std::string getTextTag(std::string tagName, double tagContent)
		{
			return getTextTag(tagName, getStringUtils().convertToString(tagContent));
		}

		std::string getExpectedXmlStringForChatMessageToXml()
		{
			std::string xml = getXmlStringStartForMessageType(PsaiXmlConstants::MSGTYPE_CHAT);
			xml.append(getOpenTag(PsaiXmlConstants::TYPE_CHAT_MESSAGE));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_TEXT, chatMessage));
			xml.append(getOpenTag(PsaiXmlConstants::ELEMENT_CHAT_SPEAKER));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_CHAT_SPEAKER_TO, you));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_CHAT_SPEAKER_FROM, me));
			xml.append(getCloseTag(PsaiXmlConstants::ELEMENT_CHAT_SPEAKER));
			xml.append(getOpenTag(PsaiXmlConstants::ELEMENT_CHAT_CHAT_TYPE));
			xml.append(PsaiXmlConstants::CHAT_SAY);
			xml.append(getCloseTag(PsaiXmlConstants::ELEMENT_CHAT_CHAT_TYPE));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_CLIENT_NUM, getStringUtils().convertToString(defaultClientNum)));
			xml.append(getCloseTag(PsaiXmlConstants::TYPE_CHAT_MESSAGE));
			xml.append(getXmlStringMessageEnd());

			return xml;
		}

		std::string getExpectedXmlForPlaySoundMessage()
		{
			std::string xml = getXmlStringStartForMessageType(PsaiXmlConstants::MSGTYPE_PLAYSOUND);
			xml.append(getOpenTag(PsaiXmlConstants::TYPE_PLAY_SOUND_MESSAGE));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PLAY_SOUND_SOUND, soundName));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_CLIENT_NUM, getStringUtils().convertToString(defaultClientNum)));
			xml.append(getCloseTag(PsaiXmlConstants::TYPE_PLAY_SOUND_MESSAGE));
			xml.append(getXmlStringMessageEnd());

			return xml;
		}

		std::string getExpectedXmlForSoundEventMessage()
		{
			std::string xml = getXmlStringStartForMessageType(PsaiXmlConstants::MSGTYPE_SOUND_EVENT);
			xml.append(getOpenTag(PsaiXmlConstants::TYPE_SOUND_EVENT_MESSAGE));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_SOUNT_EVENT_TYPE, getStringUtils().convertToString(soundEventType)));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_CLIENT_NUM, getStringUtils().convertToString(defaultClientNum)));
			xml.append(getCloseTag(PsaiXmlConstants::TYPE_SOUND_EVENT_MESSAGE));
			xml.append(getXmlStringMessageEnd());
			return xml;
		}

		std::string getExpectedXmlForPersistItemMessage()
		{
			std::string xml = getXmlStringStartForMessageType(PsaiXmlConstants::MSGTYPE_PERSIST_ITEM);
			xml.append(getOpenTag(PsaiXmlConstants::TYPE_PERSIST_ITEM_MESSAGE));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ITEM_NAME, itemName));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ITEM_FACT_NAME, factionName));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ITEM_FILE_NAME, fileName));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ITEM_FLAGS, getStringUtils().convertToString(persistItemFlags)));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ITEM_ID, defaultEid.Unbox()));
			xml.append(getOpenTag(PsaiXmlConstants::ELEMENT_PERSIST_ITEM_POSITION));
			xml.append(getOpenTag(PsaiXmlConstants::TYPE_VECTOR_3D));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_VECTOR_X, defaultPositionVector.x));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_VECTOR_Y, defaultPositionVector.y));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_VECTOR_Z, defaultPositionVector.z));
			xml.append(getCloseTag(PsaiXmlConstants::TYPE_VECTOR_3D));
			xml.append(getCloseTag(PsaiXmlConstants::ELEMENT_PERSIST_ITEM_POSITION));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ITEM_SECTOR, sector));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ITEM_TYPE, getStringUtils().convertToString(persistItemType)));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ITEM_Y_ROTATION, getStringUtils().convertToString(defaultYRotation)));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_CLIENT_NUM, getStringUtils().convertToString(defaultClientNum)));
			xml.append(getCloseTag(PsaiXmlConstants::TYPE_PERSIST_ITEM_MESSAGE));
			xml.append(getXmlStringMessageEnd());

			return xml;
		}

};

// Definitions of test values
std::string XmlGeneratorTest::itemName("Item Name");
std::string XmlGeneratorTest::factionName("Faction Name");
std::string XmlGeneratorTest::fileName("Filename");
std::string XmlGeneratorTest::sector("Sector1");
std::string XmlGeneratorTest::you("You");
std::string XmlGeneratorTest::me("Me");
std::string XmlGeneratorTest::chatMessage("Something Said");
EID XmlGeneratorTest::defaultEid(23);
uint32_t XmlGeneratorTest::defaultClientNum = 4321;
csVector3 XmlGeneratorTest::defaultPositionVector(1.1, 2.2, 3.3);
int XmlGeneratorTest::soundEventType = 10;
std::string XmlGeneratorTest::soundName("aSound");

int XmlGeneratorTest::persistItemFlags = 1;
int XmlGeneratorTest::persistItemType = 3;
float XmlGeneratorTest::defaultYRotation = 34.5;

TEST_F(XmlGeneratorTest, testChatMessageToXml)
{
	psChatMessage msg(defaultClientNum, me.c_str(), you.c_str(), chatMessage.c_str(), CHAT_SAY, false);

	std::string chatXml = getGenerator().toXml(msg);

	ASSERT_STREQ(getExpectedXmlStringForChatMessageToXml().c_str(), chatXml.c_str())<< "Xml generated from psChatMessage was not the same as expected";
}

TEST_F(XmlGeneratorTest, testPlaySoundMessageToXml)
{
	csString csstring(soundName.c_str());
	psPlaySoundMessage msg(defaultClientNum, csstring);

	msg.sound = csstring;

	std::string msgXml = getGenerator().toXml(msg);

	ASSERT_STREQ(getExpectedXmlForPlaySoundMessage().c_str(), msgXml.c_str());
}

TEST_F(XmlGeneratorTest, testSoundEventMessageToXml)
{
	psSoundEventMessage msg(defaultClientNum, soundEventType);
	msg.type = soundEventType;

	std::string msgXml = getGenerator().toXml(msg);

	ASSERT_STREQ(getExpectedXmlForSoundEventMessage().c_str(), msgXml.c_str());
}

TEST_F(XmlGeneratorTest, testPersistItemMessageToXml)
{
	psPersistItem msg(defaultClientNum, defaultEid, persistItemType, itemName.c_str(), factionName.c_str(), fileName.c_str(), sector.c_str(), defaultPositionVector, defaultYRotation, persistItemFlags);

	msg.name = itemName.c_str();
	msg.eid = defaultEid;
	msg.factname = factionName.c_str();
	msg.filename = fileName.c_str();
	msg.flags = persistItemFlags;
	msg.pos = defaultPositionVector;
	msg.sector = sector.c_str();
	msg.type = persistItemType;
	msg.yRot = defaultYRotation;

	std::string msgXml = getGenerator().toXml(msg);

	ASSERT_STREQ(getExpectedXmlForPersistItemMessage().c_str(), msgXml.c_str());
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

