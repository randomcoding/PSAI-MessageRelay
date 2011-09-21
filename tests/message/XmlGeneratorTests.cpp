/*
 * XmlGeneratorTests.cpp
 *
 *  Created on: 04-Jan-2009
 *      Author: tim
 */

#include <cssysdef.h>
#include <psconfig.h>
#include <cstring>
#include <csutil/strhashr.h>
#include <iutil/objreg.h>
#include <iengine/sector.h>

#include <util/psconst.h>
#include <cstool/initapp.h>

#include <gtest/gtest.h>

#include <iostream>
#include <string>

#include <net/messages.h>
#include <engine/linmove.h>

#include <xml/PsaiXmlGenerator.h>
#include <xml/PsaiXmlUtils.h>

#include <xercesc/util/PlatformUtils.hpp>
#include <xercesc/dom/DOMDocument.hpp>

#include <xml/PsaiXmlConstants.h>
#include <util/PsaiStringUtilities.h>

typedef std::string String;

XERCES_CPP_NAMESPACE_USE

CS_IMPLEMENT_APPLICATION

class XmlGeneratorTest: public ::testing::Test
{
	public:

	virtual ~XmlGeneratorTest() {}

		// Declarations of test values
		static String itemName;
		static String factionName;
		static String fileName;
		static String sector;
		static String soundName;
		static String you;
		static String me;
		static String chatMessage;
		static EID defaultEid;
		static uint32_t defaultClientNum;
		static csVector3 defaultPositionVector;
		static int soundEventType;
		static int persistItemFlags;
		static int persistItemType;
		static float defaultXRotation;
		static float defaultYRotation;
		static float defaultZRotation;

		// persist actor message
		static int actorType;
		static int masqueradeType;
		static bool control;
		static String actorName;
		static String guildName;
		static String raceName;
		static String mounterAnim;
		static String mountGroup;
		static String mountFactionName;
		static unsigned short int gender;
		static String helmGroup;
		static String beltGroup;
		static String cloakGroup;
		static String bracerGroup;
		static String matName;
		static csVector3 collisionTop;
		static csVector3 collisionBottom;
		static csVector3 collisionOffset;
		static String texParts;
		static String equipmentParts;
		static uint8_t counter;
		static EID mappedEid;
		//static csStringHashReversible* msgStringsHashReversable;
		static psLinearMovement* linearMovement;
		static uint8_t movementMode;
		static uint8_t serverMode;
		static PID playerId;
		static uint32_t groupId;
		static EID ownerEid;
		static uint32_t persistActorMessageFlags;
		static csStringSet* msgStrings;

		static int actionLocationType;
		static String actionLocationName;
		static String meshName;

		static EID objectEid;

		static csVector3 position;
		static float yRot;
		static iSector* iSec;
		static csVector3 velocity;
		static csVector3 worldVelocity;
		static float ang_velocity;

		// combat message
		static int combatEventType;
		static EID attacker;
		static EID target;
		static int targetLocation;
		static float damage;
		static int attackAnimation;
		static int defenseAnimation;

		static NetBase::AccessPointers* accessPointers;

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

		psLinearMovement* createLinearMovement()
		{
			const char* argv = { "arg" };
			CS_INITIALIZE_PLATFORM_APPLICATION
			bool init = csInitializer::InitializeSCF(1, &argv);
			iObjectRegistry* objectRegistry = csInitializer::CreateObjectRegistry();
			psLinearMovement* linearMovement = new psLinearMovement(objectRegistry);
			linearMovement->SetPathSector(XmlGeneratorTest::sector.c_str());

			return linearMovement;
		}

		String getXmlStringStartForMessageType(String messageType)
		{
			String xmlString = "<?xml version=\"1.0\" encoding=\"UTF-16\" standalone=\"no\" ?>";
			xmlString.append("<psai:psaimessage xmlns:psai=\"");
			xmlString.append("http://www.zarniwoops.plus.com/psai/xml/psaiXmlMessages.xsd");
			xmlString.append("\">");
			xmlString.append("<psai:messagetype>");
			xmlString.append(messageType.c_str());
			xmlString.append("</psai:messagetype>");

			return xmlString;
		}

		String getXmlStringMessageEnd()
		{
			return "</psai:psaimessage>";
		}

		String getOpenTag(String tagName)
		{
			String tag("<");
			tag.append(tagName);
			tag.append(">");

			return tag;
		}

		String getCloseTag(String tagName)
		{
			String tag("</");
			tag.append(tagName);
			tag.append(">");

			return tag;
		}

		String getEmptyTag(String tagName)
		{
			String tag("<");
			tag.append(tagName);
			tag.append(" />");

			return tag;
		}

		String getTextTag(String tagName, String tagContent)
		{
			String tag(getOpenTag(tagName));
			tag.append(tagContent);
			tag.append(getCloseTag(tagName));

			return tag;
		}

		String getTextTag(String tagName, int tagContent)
		{
			return getTextTag(tagName, getStringUtils().convertToString(tagContent));
		}

		String getTextTag(String tagName, unsigned int tagContent)
		{
			return getTextTag(tagName, getStringUtils().convertToString(tagContent));
		}

		String getTextTag(String tagName, bool tagContent)
		{
			return getTextTag(tagName, getStringUtils().convertToString(tagContent));
		}

		String getTextTag(String tagName, float tagContent)
		{
			return getTextTag(tagName, getStringUtils().convertToString(tagContent));
		}

		String getTextTag(String tagName, double tagContent)
		{
			return getTextTag(tagName, getStringUtils().convertToString(tagContent));
		}

		String getTextTag(String tagName, unsigned short int tagContent)
		{
			return getTextTag(tagName, getStringUtils().convertToString(tagContent));
		}

		String getTextTag(String tagName, uint8_t tagContent)
		{
			return getTextTag(tagName, getStringUtils().convertToString((int)tagContent));
		}

		String getVectorTag(csVector3 vector)
		{
			String vectorXml = getOpenTag(PsaiXmlConstants::TYPE_VECTOR_3D);
			vectorXml.append(getTextTag(PsaiXmlConstants::ELEMENT_VECTOR_X, vector.x));
			vectorXml.append(getTextTag(PsaiXmlConstants::ELEMENT_VECTOR_Y, vector.y));
			vectorXml.append(getTextTag(PsaiXmlConstants::ELEMENT_VECTOR_Z, vector.z));
			vectorXml.append(getCloseTag(PsaiXmlConstants::TYPE_VECTOR_3D));

			return vectorXml;
		}

		String getExpectedXmlStringForChatMessageToXml()
		{
			String xml = getXmlStringStartForMessageType(PsaiXmlConstants::MSGTYPE_CHAT);
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

		String getExpectedXmlForPlaySoundMessage()
		{
			String xml = getXmlStringStartForMessageType(PsaiXmlConstants::MSGTYPE_PLAYSOUND);
			xml.append(getOpenTag(PsaiXmlConstants::TYPE_PLAY_SOUND_MESSAGE));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PLAY_SOUND_SOUND, soundName));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_CLIENT_NUM, getStringUtils().convertToString(defaultClientNum)));
			xml.append(getCloseTag(PsaiXmlConstants::TYPE_PLAY_SOUND_MESSAGE));
			xml.append(getXmlStringMessageEnd());

			return xml;
		}

		String getExpectedXmlForSoundEventMessage()
		{
			String xml = getXmlStringStartForMessageType(PsaiXmlConstants::MSGTYPE_SOUND_EVENT);
			xml.append(getOpenTag(PsaiXmlConstants::TYPE_SOUND_EVENT_MESSAGE));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_SOUNT_EVENT_TYPE, getStringUtils().convertToString(soundEventType)));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_CLIENT_NUM, getStringUtils().convertToString(defaultClientNum)));
			xml.append(getCloseTag(PsaiXmlConstants::TYPE_SOUND_EVENT_MESSAGE));
			xml.append(getXmlStringMessageEnd());
			return xml;
		}

		String getExpectedXmlForPersistItemMessage()
		{
			String xml = getXmlStringStartForMessageType(PsaiXmlConstants::MSGTYPE_PERSIST_ITEM);
			xml.append(getOpenTag(PsaiXmlConstants::TYPE_PERSIST_ITEM_MESSAGE));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ITEM_NAME, itemName));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ITEM_FACT_NAME, factionName));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ITEM_FLAGS, getStringUtils().convertToString(persistItemFlags)));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ITEM_ID, defaultEid.Unbox()));
			xml.append(getOpenTag(PsaiXmlConstants::ELEMENT_PERSIST_ITEM_POSITION));
			xml.append(getVectorTag(defaultPositionVector));
			xml.append(getCloseTag(PsaiXmlConstants::ELEMENT_PERSIST_ITEM_POSITION));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ITEM_SECTOR, sector));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ITEM_TYPE, getStringUtils().convertToString(persistItemType)));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ITEM_Y_ROTATION, getStringUtils().convertToString(defaultYRotation)));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_CLIENT_NUM, getStringUtils().convertToString(defaultClientNum)));
			xml.append(getCloseTag(PsaiXmlConstants::TYPE_PERSIST_ITEM_MESSAGE));
			xml.append(getXmlStringMessageEnd());

			return xml;
		}

		String getExpectedXmlForPersistActorMessage()
		{
			String xml = getXmlStringStartForMessageType(PsaiXmlConstants::MSGTYPE_PERSIST_ACTOR);
			xml.append(getOpenTag(PsaiXmlConstants::TYPE_PERSIST_ACTOR_MESSAGE));
			xml.append(getOpenTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_BOTTOM));
			xml.append(getVectorTag(collisionBottom));
			xml.append(getCloseTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_BOTTOM));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_CONTROL, control));
			xml.append(getOpenTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_DR_MESSAGE));
			xml.append(getCloseTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_DR_MESSAGE));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_FACT_NAME, factionName));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_FLAGS, persistActorMessageFlags));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_GENDER, gender));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_GROUP_ID, groupId));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_GUILD, guildName));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_HELM_GROUPS, helmGroup));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_INSTANCE, "Unknown Value"));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_MASQUERADED_TYPE, masqueradeType));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_NAME, actorName));
			xml.append(getOpenTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_OFFSET));
			xml.append(getVectorTag(collisionOffset));
			xml.append(getCloseTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_OFFSET));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_OWNER_EID, ownerEid.Unbox()));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_PLAYER_ID, playerId.Unbox()));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_RACE, raceName));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_SERVER_MODE, serverMode));
			xml.append(getOpenTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_TOP));
			xml.append(getVectorTag(collisionTop));
			xml.append(getCloseTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_TOP));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_TYPE, actorType));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTOR__FILE_NAME, fileName));
			xml.append(getCloseTag(PsaiXmlConstants::TYPE_PERSIST_ACTOR_MESSAGE));
			xml.append(getXmlStringMessageEnd());

			return xml;
		}

		String getExpectedXmlForPersistActionLocationMessage()
		{
			String xml = getXmlStringStartForMessageType(PsaiXmlConstants::MSGTYPE_PERSIST_ACTIONLOCATION);
			xml.append(getOpenTag(PsaiXmlConstants::TYPE_PERSIST_ACTION_LOCATION_MESSAGE));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTION_LOCATION_SECTOR, sector));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTION_LOCATION_MESH, meshName));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTION_LOCATION_TYPE, actionLocationType));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTION_LOCATION_ID, ownerEid.Unbox()));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_PERSIST_ACTION_LOCATION_NAME, actionLocationName));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_CLIENT_NUM, getStringUtils().convertToString(defaultClientNum)));
			xml.append(getCloseTag(PsaiXmlConstants::TYPE_PERSIST_ACTION_LOCATION_MESSAGE));
			xml.append(getXmlStringMessageEnd());

			return xml;
		}

		String getExpectedXmlForRemoveObjectMessage()
		{
			String xml = getXmlStringStartForMessageType(PsaiXmlConstants::MSGTYPE_REMOVE_OBJECT);
			xml.append(getOpenTag(PsaiXmlConstants::TYPE_REMOVE_OBJECT_MESSAGE));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_REMOVE_OBJECT_OBJECT_ID, objectEid.Unbox()));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_CLIENT_NUM, getStringUtils().convertToString(defaultClientNum)));
			xml.append(getCloseTag(PsaiXmlConstants::TYPE_REMOVE_OBJECT_MESSAGE));
			xml.append(getXmlStringMessageEnd());

			return xml;
		}

		String getExpectedXmlForDeadReckoningMessage()
		{
			String xml = getXmlStringStartForMessageType(PsaiXmlConstants::MSGTYPE_DEAD_RECKONING);
			xml.append(getOpenTag(PsaiXmlConstants::TYPE_DR_MESSAGE));

			xml.append(getCloseTag(PsaiXmlConstants::TYPE_DR_MESSAGE));
			xml.append(getXmlStringMessageEnd());

			return xml;
		}

		String getExpectedXmlForCombatEventMessage()
		{
			String xml = getXmlStringStartForMessageType(PsaiXmlConstants::MSGTYPE_COMBATEVENT);
			xml.append(getOpenTag(PsaiXmlConstants::TYPE_COMBAT_MESSAGE));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_COMBAT_ATTACKER_ID, attacker.Unbox()));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_COMBAT_DAMAGE, damage));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_COMBAT_TARGET_ID, target.Unbox()));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_COMBAT_TARGET_LOCATION, targetLocation));
			xml.append(getTextTag(PsaiXmlConstants::ELEMENT_CLIENT_NUM, getStringUtils().convertToString(defaultClientNum)));
			xml.append(getCloseTag(PsaiXmlConstants::TYPE_COMBAT_MESSAGE));
			xml.append(getXmlStringMessageEnd());

			return xml;
		}
};

// Definitions of test values
String XmlGeneratorTest::itemName("Item Name");
String XmlGeneratorTest::factionName("Faction Name");
String XmlGeneratorTest::fileName("Filename");
String XmlGeneratorTest::sector("Sector1");
String XmlGeneratorTest::you("You");
String XmlGeneratorTest::me("Me");
String XmlGeneratorTest::chatMessage("Something Said");
EID XmlGeneratorTest::defaultEid(23);
uint32_t XmlGeneratorTest::defaultClientNum = 4321;
csVector3 XmlGeneratorTest::defaultPositionVector(1.1, 2.2, 3.3);
int XmlGeneratorTest::soundEventType = 10;
String XmlGeneratorTest::soundName("aSound");
int XmlGeneratorTest::persistItemFlags = 1;
int XmlGeneratorTest::persistItemType = 3;
float XmlGeneratorTest::defaultXRotation = 43.5;
float XmlGeneratorTest::defaultYRotation = 34.5;
float XmlGeneratorTest::defaultZRotation = 54.3;
EID XmlGeneratorTest::objectEid(44);

NetBase::AccessPointers* XmlGeneratorTest::accessPointers = new NetBase::AccessPointers();

// persist actor message
int XmlGeneratorTest::actorType = 98;
int XmlGeneratorTest::masqueradeType = 45;
bool XmlGeneratorTest::control = true;
String XmlGeneratorTest::actorName("Actor Name");
String XmlGeneratorTest::guildName("Guild Name");
String XmlGeneratorTest::raceName("Race Name");
String XmlGeneratorTest::matName("Mat Name");
String XmlGeneratorTest::mountFactionName("Mount Faction");
unsigned short int XmlGeneratorTest::gender = 1;
String XmlGeneratorTest::helmGroup("Helm Group");
String XmlGeneratorTest::beltGroup("Belt Group");
String XmlGeneratorTest::cloakGroup("Cloak Group");
String XmlGeneratorTest::bracerGroup("Bracer Group");
csVector3 XmlGeneratorTest::collisionTop(23.4, 32.1, 2.3);
csVector3 XmlGeneratorTest::collisionBottom(23.4, 32.1, 0.3);
csVector3 XmlGeneratorTest::collisionOffset(1.0, 1.0, 2.0);
String XmlGeneratorTest::texParts("Tex Parts");
String XmlGeneratorTest::equipmentParts("Equipment Parts");
uint8_t XmlGeneratorTest::counter = 2;
EID XmlGeneratorTest::mappedEid(43);
//csStringHashReversible* XmlGeneratorTest::msgStringsHashReversable = new csStringHashReversible(10);
uint8_t XmlGeneratorTest::movementMode = 5;
uint8_t XmlGeneratorTest::serverMode = 3;
PID XmlGeneratorTest::playerId(123);
uint32_t XmlGeneratorTest::groupId = 9876;
EID XmlGeneratorTest::ownerEid(789);
uint32_t XmlGeneratorTest::persistActorMessageFlags = 45;
csStringSet* XmlGeneratorTest::msgStrings = new csStringSet();
String XmlGeneratorTest::mounterAnim("Mounter Anim");

// persist action location
int XmlGeneratorTest::actionLocationType = 10;
String XmlGeneratorTest::actionLocationName("actionLocation");
String XmlGeneratorTest::meshName("mesh");

// DR message
csVector3 XmlGeneratorTest::position(23.0, 45.0, 67.0);
float XmlGeneratorTest::yRot = 65.7;
iSector* XmlGeneratorTest::iSec;
csVector3 XmlGeneratorTest::velocity(45.0, 92.0, 0.0);
csVector3 XmlGeneratorTest::worldVelocity(1.0, 1.0, 1.0);
float XmlGeneratorTest::ang_velocity = 78.3;

// Combat message
int XmlGeneratorTest::combatEventType = psCombatEventMessage::COMBAT_DAMAGE;
EID XmlGeneratorTest::attacker(15);
EID XmlGeneratorTest::target(20);
int XmlGeneratorTest::targetLocation = 5;
float XmlGeneratorTest::damage = 34.5;
int XmlGeneratorTest::attackAnimation = 6;
int XmlGeneratorTest::defenseAnimation = 7;

// Test Fixtures
TEST_F(XmlGeneratorTest, testChatMessageToXml)
{
	psChatMessage msg(defaultClientNum, defaultEid, me.c_str(), you.c_str(), chatMessage.c_str(), CHAT_SAY, false);

	String chatXml = getGenerator().toXml(msg);

	ASSERT_STREQ(getExpectedXmlStringForChatMessageToXml().c_str(), chatXml.c_str());
}

TEST_F(XmlGeneratorTest, testPlaySoundMessageToXml)
{
	csString csstring(soundName.c_str());
	psPlaySoundMessage msg(defaultClientNum, csstring);
	msg.sound = csstring;

	String msgXml = getGenerator().toXml(msg);

	ASSERT_STREQ(getExpectedXmlForPlaySoundMessage().c_str(), msgXml.c_str());
}

TEST_F(XmlGeneratorTest, testSoundEventMessageToXml)
{
	psSoundEventMessage msg(defaultClientNum, soundEventType);
	msg.type = soundEventType;

	String msgXml = getGenerator().toXml(msg);

	ASSERT_STREQ(getExpectedXmlForSoundEventMessage().c_str(), msgXml.c_str());
}

TEST_F(XmlGeneratorTest, testPersistItemMessageToXml)
{
	psPersistItem msg(defaultClientNum, defaultEid, persistItemType, itemName.c_str(), factionName.c_str(), matName.c_str(), sector.c_str(),
			defaultPositionVector, defaultXRotation, defaultYRotation, defaultZRotation, persistItemFlags, msgStrings);

	msg.name = itemName.c_str();
	msg.eid = defaultEid;
	msg.factname = factionName.c_str();
	msg.matname = matName.c_str();
	msg.flags = persistItemFlags;
	msg.pos = defaultPositionVector;
	msg.sector = sector.c_str();
	msg.type = persistItemType;
	msg.yRot = defaultYRotation;
	msg.xRot = defaultXRotation;
	msg.zRot = defaultZRotation;

	String msgXml = getGenerator().toXml(msg);

	ASSERT_STREQ(getExpectedXmlForPersistItemMessage().c_str(), msgXml.c_str());
}

// Disabled as the creation of the DRMessage fails as the required iSector is null
TEST_F(XmlGeneratorTest, DISABLED_testPersistActorMessageToXml)
{
	psLinearMovement* linearMove = createLinearMovement();
    float scale = 1.0;
    float mountScale = 1.0;
	psPersistActor msg(defaultClientNum, actorType, masqueradeType, control, actorName.c_str(), guildName.c_str(), factionName.c_str(),
			matName.c_str(), raceName.c_str(), mountFactionName.c_str(), mounterAnim.c_str(), gender, scale, mountScale, helmGroup.c_str(), bracerGroup.c_str(),
			beltGroup.c_str(), cloakGroup.c_str(), collisionTop, collisionBottom, collisionOffset, texParts.c_str(), equipmentParts.c_str(), counter,
			mappedEid, msgStrings, linearMove, movementMode, serverMode, playerId, groupId, ownerEid, persistActorMessageFlags);

	msg.bottom = collisionBottom;
	msg.masqueradeType = masqueradeType;
	msg.guild = guildName.c_str();
	msg.factname = factionName.c_str();
	msg.mountFactname = mountFactionName.c_str();
	msg.matname = matName.c_str();
	msg.MounterAnim = mounterAnim.c_str();
	msg.race = raceName.c_str();
	msg.helmGroup = helmGroup.c_str();
	msg.BeltGroup = beltGroup.c_str();
	msg.CloakGroup = cloakGroup.c_str();
	msg.top = collisionTop;
	msg.offset = collisionOffset;
	msg.texParts = texParts.c_str();
	msg.counter = counter;
	msg.equipment = equipmentParts.c_str();
	msg.entityid = mappedEid;
	msg.mode = movementMode;
	msg.serverMode = serverMode;
	msg.playerID = playerId;
	msg.groupID = groupId;
	msg.ownerEID = ownerEid;
	msg.flags = persistActorMessageFlags;

	String msgXml = getGenerator().toXml(msg);
	ASSERT_STREQ(getExpectedXmlForPersistActorMessage().c_str(), msgXml.c_str());
}

TEST_F(XmlGeneratorTest, testPersistActionLocationMessageToXml)
{
	psPersistActionLocation msg(defaultClientNum, ownerEid, actionLocationType, actionLocationName.c_str(), sector.c_str(), meshName.c_str());

	msg.eid = ownerEid;
	msg.mesh = meshName.c_str();
	msg.name = actionLocationName.c_str();
	msg.sector = sector.c_str();
	msg.type = actionLocationType;

	String msgXml = getGenerator().toXml(msg);
	ASSERT_STREQ(getExpectedXmlForPersistActionLocationMessage().c_str(), msgXml.c_str());
}

TEST_F(XmlGeneratorTest, testRemoveObjectMessageToXml)
{
	psRemoveObject msg(defaultClientNum, objectEid);

	msg.objectEID = objectEid;

	String msgXml = getGenerator().toXml(msg);
	ASSERT_STREQ(getExpectedXmlForRemoveObjectMessage().c_str(), msgXml.c_str());
}

// Disabled for the same reason as testPersistActorMessageToXml
TEST_F(XmlGeneratorTest, DISABLED_testDeadReckoningMessageToXml)
{
	psDRMessage msg(defaultClientNum, mappedEid, true, movementMode, counter, position, yRot, iSec, sector.c_str(), velocity, worldVelocity, ang_velocity, accessPointers);

	msg.entityid = mappedEid;
	msg.on_ground = true;
	msg.mode = movementMode;
	msg.counter = counter;
	msg.pos = position;
	msg.yrot = yRot;
	msg.sector = iSec;
	msg.vel = velocity;
	msg.worldVel = worldVelocity;
	msg.ang_vel = ang_velocity;
	msg.sectorName = sector.c_str();

	String msgXml = getGenerator().toXml(msg);

	ASSERT_STREQ(getExpectedXmlForDeadReckoningMessage().c_str(), msgXml.c_str());
}

// DR messages all seem to have problems being created without the required setup. Is there a C++ mock library?
TEST_F(XmlGeneratorTest, DISABLED_testStatDeadReckoningMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testCombatEventMessageToXml)
{

	psCombatEventMessage msg(defaultClientNum, combatEventType, attacker, target, targetLocation, damage, attackAnimation, defenseAnimation);
	msg.attack_anim = attackAnimation;
	msg.attacker_id = attacker;
	msg.damage = damage;
	msg.defense_anim = defenseAnimation;
	msg.target_id = target;
	msg.target_location = targetLocation;

	String xmlString = getGenerator().toXml(msg);
	ASSERT_STREQ(getExpectedXmlForCombatEventMessage().c_str(), xmlString.c_str());

}

TEST_F(XmlGeneratorTest, testModeMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testMoveLockMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testNewSectorMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testEffectMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testStopEffectMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testSpellCastMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testSpellCancelMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testStatsMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testSystemMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testWeatherMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testCharacterDetailMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testGuiInventoryMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testGuiActiveMagicMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testGuiInteractMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testGuiMerchantMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testGuiSkillMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testGuiTargetUpdateMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testLootMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testQuestListMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testQuestRewardMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testUpdateObjectNameMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testViewItemDescriptionMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testViewItemUpdateMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

TEST_F(XmlGeneratorTest, testEquipmentMessageToXml)
{
	FAIL() << "Not Implemented Yet" ;
}

