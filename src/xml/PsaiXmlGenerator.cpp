/*
 * PsaiXmlGenerator.cpp
 *
 *  Created on: 30-Jul-2008
 *      Author: tim
 */

#include <string>
#include <sstream>

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

const PsaiStringUtilities& stringUtils = PsaiStringUtilities::getStringUtils();

PsaiXmlGenerator::PsaiXmlGenerator()
{
	// no construction
}

PsaiXmlGenerator::~PsaiXmlGenerator()
{
	// does nothing yet
}

PsaiXmlUtils& PsaiXmlGenerator::getXmlUtils()
{
	PsaiXmlUtils& utils = *(new PsaiXmlUtils());

	return utils;
}

uint32_t PsaiXmlGenerator::getClientNumber(const psMessageCracker& msg)
{
	return msg.msg->clientnum;
}

DOMElement& PsaiXmlGenerator::addVectorElement(DOMDocument& doc, DOMElement& parentElement, const float posX, const float posY, const float posZ)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	const std::string posXString = stringUtils.convertToString(posX);
	const std::string posYString = stringUtils.convertToString(posY);
	const std::string posZString = stringUtils.convertToString(posZ);
	DOMElement& vectorElement = xmlUtils.createDomElement(doc, parentElement, PsaiXmlConstants::TYPE_VECTOR_3D, "");
	xmlUtils.createDomElement(doc, vectorElement, PsaiXmlConstants::ELEMENT_VECTOR_X, posXString);
	xmlUtils.createDomElement(doc, vectorElement, PsaiXmlConstants::ELEMENT_VECTOR_Y, posYString);
	xmlUtils.createDomElement(doc, vectorElement, PsaiXmlConstants::ELEMENT_VECTOR_Z, posZString);

	return vectorElement;
}

DOMElement& PsaiXmlGenerator::addClientNumberElement(DOMDocument& doc, DOMElement& parentElement, uint32_t clientNumber)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	return xmlUtils.createDomElement(doc, parentElement, PsaiXmlConstants::ELEMENT_CLIENT_NUM, stringUtils.convertToString(clientNumber));
}

std::string PsaiXmlGenerator::toXml(const psChatMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_CHAT);
		DOMElement& root = xmlUtils.getDocumentRootElement(doc);

		DOMElement& messageElement = xmlUtils.createDomElement(doc, root, PsaiXmlConstants::TYPE_CHAT_MESSAGE);

		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_CHAT_TEXT, msg.sText.GetDataSafe());

		DOMElement& speakerElement = xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_CHAT_SPEAKER, "");

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

std::string PsaiXmlGenerator::toXml(const psPlaySoundMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_PLAYSOUND);
		DOMElement& root = *(doc.getDocumentElement());

		DOMElement& messageElement = xmlUtils.createDomElement(doc, root, PsaiXmlConstants::TYPE_PLAY_SOUND_MESSAGE);
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PLAY_SOUND_SOUND, msg.sound.GetDataSafe());
		addClientNumberElement(doc, messageElement, getClientNumber(msg));
		xmlUtils.clearXmlUtils();

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psSoundEventMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_SOUND_EVENT);

		DOMElement& root = *(doc.getDocumentElement());

		DOMElement& messageElement = xmlUtils.createDomElement(doc, root, PsaiXmlConstants::TYPE_SOUND_EVENT_MESSAGE);

		std::string typeString = stringUtils.convertToString(msg.type);

		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_SOUNT_EVENT_TYPE, typeString);
		addClientNumberElement(doc, messageElement, getClientNumber(msg));
		xmlUtils.clearXmlUtils();

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psPersistItem& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_PERSIST_ITEM);

		DOMElement& root = *(doc.getDocumentElement());

		DOMElement& messageElement = xmlUtils.createDomElement(doc, root, PsaiXmlConstants::TYPE_PERSIST_ITEM_MESSAGE);

		std::string name(msg.name.GetDataSafe());
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_NAME, name);

		std::string factName(msg.factname.GetDataSafe());
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_FACT_NAME, factName);

		std::string fileName(msg.filename.GetDataSafe());
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_FILE_NAME, fileName);

		std::string flags = stringUtils.convertToString(msg.flags);
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_FLAGS, flags);

		std::string id = stringUtils.convertToString(msg.eid.Unbox());
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_ID, id);

		DOMElement& positionElement = xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_POSITION, "");

		addVectorElement(doc, positionElement, msg.pos.x, msg.pos.y, msg.pos.z);

		std::string sector(msg.sector.GetDataSafe());
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_SECTOR, sector);

		std::string type = stringUtils.convertToString(msg.type);
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_TYPE, type);

		std::string yRot = stringUtils.convertToString(msg.yRot);
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_Y_ROTATION, yRot);

		addClientNumberElement(doc, messageElement, getClientNumber(msg));

		xmlUtils.clearXmlUtils();

		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psPersistActor& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_PERSIST_ACTOR);
		DOMElement& root = *(doc.getDocumentElement());
		DOMElement& messageElement = xmlUtils.createDomElement(doc, root, PsaiXmlConstants::TYPE_PERSIST_ACTOR_MESSAGE, "");
		addClientNumberElement(doc, messageElement, getClientNumber(msg));
		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psPersistActionLocation& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_PERSIST_ACTIONLOCATION);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psRemoveObject& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_REMOVE_OBJECT);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psDRMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_DEAD_RECKONING);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psStatDRMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_STATDRUPDATE);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psCombatEventMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_COMBATEVENT);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psModeMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_MODE);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psMoveLockMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_MOVELOCK);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psNewSectorMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_NEWSECTOR);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psEffectMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_EFFECT);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psStopEffectMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_EFFECT_STOP);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psSpellCastMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_SPELL_CAST);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psSpellCancelMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_SPELL_CANCEL);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psStatsMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_STATS);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psSystemMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_SYSTEM);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psWeatherMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_WEATHER);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psCharacterDetailsMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_CHARACTERDETAILS);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psGUIInventoryMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_GUIINVENTORY);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psGUIActiveMagicMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_ACTIVEMAGIC);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psGUIInteractMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_GUIINTERACT);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psGUIMerchantMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_GUIMERCHANT);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psGUISkillMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_GUISKILL);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psGUITargetUpdateMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_GUITARGETUPDATE);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psLootMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_LOOT);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psQuestListMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_QUESTLIST);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psQuestRewardMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_QUESTREWARD);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psUpdateObjectNameMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_UPDATE_ITEM);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psViewItemDescription& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_VIEW_ITEM);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psViewItemUpdate& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_VIEW_ITEM);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psEquipmentMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_EQUIPMENT);

		xmlUtils.clearXmlUtils();
		xmlString = xmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

