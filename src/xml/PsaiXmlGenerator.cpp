/*
 * PsaiXmlGenerator.cpp
 *
 *  Created on: 30-Jul-2008
 *      Author: tim
 */

#include <string>
#include <sstream>
#include <iostream>

#include <net/messages.h>

#include <xercesc/util/PlatformUtils.hpp>
#include <xercesc/dom/DOM.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMElement.hpp>

#include "PsaiXmlConstants.h"
#include "PsaiXmlGenerator.h"
#include "PsaiXmlUtils.h"
#include "util/PsaiStringUtilities.h"

using namespace XERCES_CPP_NAMESPACE;

static const PsaiStringUtilities& stringUtils = PsaiStringUtilities::getStringUtils();
static PsaiXmlUtils& xmlUtils = *(new PsaiXmlUtils());

PsaiXmlGenerator::PsaiXmlGenerator()
{
	// no construction
}

PsaiXmlGenerator::~PsaiXmlGenerator()
{
	// does nothing yet
}

uint32_t PsaiXmlGenerator::getClientNumber(const psMessageCracker& msg)
{
	return msg.msg->clientnum;
}

DOMElement& PsaiXmlGenerator::addVectorElement(DOMDocument& doc, DOMElement& parentElement, const float posX, const float posY, const float posZ)
{
	const String posXString = stringUtils.convertToString(posX);
	const String posYString = stringUtils.convertToString(posY);
	const String posZString = stringUtils.convertToString(posZ);
	DOMElement& vectorElement = xmlUtils.createDomElement(doc, parentElement, PsaiXmlConstants::TYPE_VECTOR_3D);
	xmlUtils.createDomElement(doc, vectorElement, PsaiXmlConstants::ELEMENT_VECTOR_X, posXString);
	xmlUtils.createDomElement(doc, vectorElement, PsaiXmlConstants::ELEMENT_VECTOR_Y, posYString);
	xmlUtils.createDomElement(doc, vectorElement, PsaiXmlConstants::ELEMENT_VECTOR_Z, posZString);

	return vectorElement;
}

DOMElement& PsaiXmlGenerator::addClientNumberElement(DOMDocument& doc, DOMElement& parentElement, uint32_t clientNumber)
{
	return xmlUtils.createDomElement(doc, parentElement, PsaiXmlConstants::ELEMENT_CLIENT_NUM, stringUtils.convertToString(clientNumber));
}

String PsaiXmlGenerator::toXml(const psChatMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_CHAT);
		DOMElement& root = xmlUtils.getDocumentRootElement(doc);

		DOMElement& messageElement = xmlUtils.createDomElement(doc, root, PsaiXmlConstants::TYPE_CHAT_MESSAGE);

		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_CHAT_TEXT, msg.sText.GetDataSafe());

		DOMElement& speakerElement = xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_CHAT_SPEAKER);

		if (msg.sOther.GetDataSafe() != NULL && msg.sOther.Length() > 0)
		{
			xmlUtils.createDomElement(doc, speakerElement, PsaiXmlConstants::ELEMENT_CHAT_SPEAKER_TO, msg.sOther.GetDataSafe());
		}

		if (msg.sPerson.GetDataSafe() != NULL && msg.sPerson.Length() > 0)
		{
			xmlUtils.createDomElement(doc, speakerElement, PsaiXmlConstants::ELEMENT_CHAT_SPEAKER_FROM, msg.sPerson.GetDataSafe());
		}

		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_CHAT_CHAT_TYPE, xmlUtils.getChatTypeAsString(msg.iChatType));

		addClientNumberElement(doc, messageElement, getClientNumber(msg));

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psPlaySoundMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_PLAYSOUND);
		DOMElement& root = *(doc.getDocumentElement());

		DOMElement& messageElement = xmlUtils.createDomElement(doc, root, PsaiXmlConstants::TYPE_PLAY_SOUND_MESSAGE);
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PLAY_SOUND_SOUND, msg.sound.GetDataSafe());
		addClientNumberElement(doc, messageElement, getClientNumber(msg));

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psSoundEventMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_SOUND_EVENT);

		DOMElement& root = *(doc.getDocumentElement());

		DOMElement& messageElement = xmlUtils.createDomElement(doc, root, PsaiXmlConstants::TYPE_SOUND_EVENT_MESSAGE);

		String typeString = stringUtils.convertToString(msg.type);

		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_SOUNT_EVENT_TYPE, typeString);
		addClientNumberElement(doc, messageElement, getClientNumber(msg));
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psPersistItem& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_PERSIST_ITEM);

		DOMElement& root = *(doc.getDocumentElement());

		DOMElement& messageElement = xmlUtils.createDomElement(doc, root, PsaiXmlConstants::TYPE_PERSIST_ITEM_MESSAGE);

		String name(msg.name.GetDataSafe());
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_NAME, name);

		String factName(msg.factname.GetDataSafe());
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_FACT_NAME, factName);

		/*String fileName(msg.filename.GetDataSafe());
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_FILE_NAME, fileName);*/

		String flags = stringUtils.convertToString(msg.flags);
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_FLAGS, flags);

		String id = stringUtils.convertToString(msg.eid.Unbox());
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_ID, id);

		DOMElement& positionElement = xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_POSITION);

		addVectorElement(doc, positionElement, msg.pos.x, msg.pos.y, msg.pos.z);

		String sector(msg.sector.GetDataSafe());
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_SECTOR, sector);

		String type = stringUtils.convertToString(msg.type);
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_TYPE, type);

		String yRot = stringUtils.convertToString(msg.yRot);
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_Y_ROTATION, yRot);

		addClientNumberElement(doc, messageElement, getClientNumber(msg));

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psPersistActor& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_PERSIST_ACTOR);
		DOMElement& root = *(doc.getDocumentElement());
		DOMElement& messageElement = xmlUtils.createDomElement(doc, root, PsaiXmlConstants::TYPE_PERSIST_ACTOR_MESSAGE);
		addClientNumberElement(doc, messageElement, getClientNumber(msg));
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psPersistActionLocation& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_PERSIST_ACTIONLOCATION);
		DOMElement& root = *(doc.getDocumentElement());
		DOMElement& messageElement = xmlUtils.createDomElement(doc, root, PsaiXmlConstants::TYPE_PERSIST_ACTION_LOCATION_MESSAGE);

		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ACTION_LOCATION_SECTOR, msg.sector.GetDataSafe());
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ACTION_LOCATION_MESH, msg.mesh.GetDataSafe());
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ACTION_LOCATION_TYPE, stringUtils.convertToString(msg.type));
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ACTION_LOCATION_ID, stringUtils.convertToString(msg.eid.Unbox()));
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ACTION_LOCATION_NAME, msg.name.GetDataSafe());

		addClientNumberElement(doc, messageElement, getClientNumber(msg));
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psRemoveObject& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_REMOVE_OBJECT);
		DOMElement& root = *(doc.getDocumentElement());
		DOMElement& messageElement = xmlUtils.createDomElement(doc, root, PsaiXmlConstants::TYPE_REMOVE_OBJECT_MESSAGE);
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_REMOVE_OBJECT_OBJECT_ID, stringUtils.convertToString(msg.objectEID.Unbox()));
		addClientNumberElement(doc, messageElement, getClientNumber(msg));
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psDRMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_DEAD_RECKONING);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psStatDRMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_STATDRUPDATE);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psCombatEventMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_COMBATEVENT);
		DOMElement& root = xmlUtils.getDocumentRootElement(doc);
		DOMElement& messageElement = xmlUtils.createDomElement(doc, root, PsaiXmlConstants::TYPE_COMBAT_MESSAGE);
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_COMBAT_ATTACKER_ID, stringUtils.convertToString(msg.attacker_id.Unbox()));
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_COMBAT_DAMAGE, stringUtils.convertToString(msg.damage));
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_COMBAT_TARGET_ID, stringUtils.convertToString(msg.target_id.Unbox()));
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_COMBAT_TARGET_LOCATION, stringUtils.convertToString(msg.target_location));

		int clientNum = getClientNumber(msg);
		addClientNumberElement(doc, messageElement, clientNum);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psModeMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_MODE);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psMoveLockMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_MOVELOCK);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psNewSectorMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_NEWSECTOR);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psEffectMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_EFFECT);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psStopEffectMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_EFFECT_STOP);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psSpellCastMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_SPELL_CAST);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psSpellCancelMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_SPELL_CANCEL);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psStatsMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_STATS);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psSystemMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_SYSTEM);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psWeatherMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_WEATHER);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psCharacterDetailsMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_CHARACTERDETAILS);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psGUIInventoryMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_GUIINVENTORY);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psGUIActiveMagicMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_ACTIVEMAGIC);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psGUIInteractMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_GUIINTERACT);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psGUIMerchantMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_GUIMERCHANT);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psGUISkillMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_GUISKILL);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psGUITargetUpdateMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_GUITARGETUPDATE);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psLootMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_LOOT);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psQuestListMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_QUESTLIST);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psQuestRewardMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_QUESTREWARD);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psUpdateObjectNameMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_UPDATE_ITEM);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psViewItemDescription& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_VIEW_ITEM);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psViewItemUpdate& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_VIEW_ITEM);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

String PsaiXmlGenerator::toXml(const psEquipmentMessage& msg)
{
	String xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_EQUIPMENT);

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

