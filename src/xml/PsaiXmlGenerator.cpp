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

using namespace XERCES_CPP_NAMESPACE;

PsaiXmlGenerator::PsaiXmlGenerator()
{
	// does nothing yet
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

// convert values to strings

std::string convertToString(uint value)
{
	std::string valueString;
	std::stringstream out;
	out << value;
	valueString = out.str();

	return valueString;
}

std::string convertToString(int value)
{
	std::string valueString;
	std::stringstream out;
	out << value;
	valueString = out.str();

	return valueString;
}

std::string convertToString(float value)
{
	std::string valueString;
	std::stringstream out;
	out << value;
	valueString = out.str();

	return valueString;
}

std::string convertToString(double value)
{
	std::string valueString;
	std::stringstream out;
	out << value;
	valueString = out.str();

	return valueString;
}

std::string convertToString(bool value)
{
	std::string valueString(value ? "true" : "false");

	return valueString;
}

DOMElement& PsaiXmlGenerator::addVectorElement(DOMDocument& doc, DOMElement& parentElement, float posX, float posY, float posZ)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string posXString = convertToString(posX);
	std::string posYString = convertToString(posY);
	std::string posZString = convertToString(posZ);
	DOMElement& vectorElement = xmlUtils.createDomElement(doc, parentElement, PsaiXmlConstants::TYPE_VECTOR_3D, "");
	xmlUtils.createDomElement(doc, vectorElement, PsaiXmlConstants::ELEMENT_VECTOR_X, posXString);
	xmlUtils.createDomElement(doc, vectorElement, PsaiXmlConstants::ELEMENT_VECTOR_Y, posYString);
	xmlUtils.createDomElement(doc, vectorElement, PsaiXmlConstants::ELEMENT_VECTOR_Z, posZString);

	return vectorElement;
}

std::string PsaiXmlGenerator::toXml(const psChatMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::MSGTYPE_CHAT);
		DOMElement& root = xmlUtils.getDocumentRootElement(doc);

		DOMElement& messageElement = xmlUtils.createDomElement(doc, root, PsaiXmlConstants::TYPE_CHAT_MESSAGE, "");

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

		DOMElement& messageElement = xmlUtils.createDomElement(doc, root, PsaiXmlConstants::TYPE_PLAY_SOUND_MESSAGE, "");
		xmlUtils.createDomElement(doc, messageElement, PsaiXmlConstants::ELEMENT_PLAY_SOUND_SOUND, msg.sound.GetDataSafe());

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

		std::string typeString = convertToString(msg.type);

		xmlUtils.createDomElement(doc, root, PsaiXmlConstants::ELEMENT_SOUNT_EVENT_TYPE, typeString);

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
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::TYPE_PERSIST_ITEM_MESSAGE);

		//DOMElement& root = xmlUtils.getDocumentRootElement(doc);
		DOMElement& root = *(doc.getDocumentElement());

		std::string factName(msg.factname.GetDataSafe());
		xmlUtils.createDomElement(doc, root, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_FACT_NAME, factName);

		std::string fileName(msg.filename.GetDataSafe());
		xmlUtils.createDomElement(doc, root, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_FILE_NAME, fileName);

		std::string flags = convertToString(msg.flags);
		xmlUtils.createDomElement(doc, root, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_FLAGS, flags);

		std::string id = convertToString(msg.eid.Unbox());
		xmlUtils.createDomElement(doc, root, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_ID, id);

		std::string name(msg.name.GetDataSafe());
		xmlUtils.createDomElement(doc, root, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_NAME, name);

		DOMElement& positionElement = xmlUtils.createDomElement(doc, root, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_POSITION, "");

		addVectorElement(doc, positionElement, msg.pos.x, msg.pos.y, msg.pos.z);

		std::string sector(msg.sector.GetDataSafe());
		xmlUtils.createDomElement(doc, root, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_SECTOR, sector);

		std::string type = convertToString(msg.type);
		xmlUtils.createDomElement(doc, root, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_TYPE, type);

		std::string yRot = convertToString(msg.yRot);
		xmlUtils.createDomElement(doc, root, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_Y_ROTATION, yRot);

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psPersistActor& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{
		DOMDocument& doc = xmlUtils.getDOMDocumentForMessageType(PsaiXmlConstants::TYPE_PERSIST_ACTOR_MESSAGE);

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psPersistActionLocation& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psRemoveObject& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psDRMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psStatDRMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psCombatEventMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psModeMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psMoveLockMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psNewSectorMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psEffectMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psStopEffectMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psSpellCastMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psSpellCancelMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psStatsMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psSystemMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psWeatherMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psCharacterDetailsMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psGUIInventoryMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psGUIActiveMagicMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psGUIInteractMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psGUIMerchantMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psGUISkillMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psGUITargetUpdateMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psLootMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psQuestListMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psQuestRewardMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psUpdateObjectNameMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psViewItemDescription& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psViewItemUpdate& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psEquipmentMessage& msg)
{
	PsaiXmlUtils& xmlUtils = getXmlUtils();

	std::string xmlString;

	if (xmlUtils.initiliaseXmlUtils())
	{

		xmlUtils.clearXmlUtils();
	}

	return xmlString;
}

