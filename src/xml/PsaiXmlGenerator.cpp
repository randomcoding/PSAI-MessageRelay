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

DOMElement& addVectorElement(DOMDocument& doc, DOMElement& parentElement, float posX, float posY, float posZ)
{
	std::string posXString = convertToString(posX);
	std::string posYString = convertToString(posY);
	std::string posZString = convertToString(posZ);
	DOMElement& vectorElement = PsaiXmlUtils::createDomElement(doc, parentElement, PsaiXmlConstants::TYPE_VECTOR_3D, "");
	PsaiXmlUtils::createDomElement(doc, vectorElement, PsaiXmlConstants::ELEMENT_VECTOR_X, posXString);
	PsaiXmlUtils::createDomElement(doc, vectorElement, PsaiXmlConstants::ELEMENT_VECTOR_Y, posYString);
	PsaiXmlUtils::createDomElement(doc, vectorElement, PsaiXmlConstants::ELEMENT_VECTOR_Z, posZString);

	return vectorElement;
}

std::string PsaiXmlGenerator::toXml(const psChatMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{
		DOMDocument& doc = PsaiXmlUtils::getDOMDocumentForMessageType(PsaiXmlConstants::TYPE_CHAT_MESSAGE);
		//DOMElement& root = PsaiXmlUtils::getDocumentRootElement(doc);
		DOMElement& root = *(doc.getDocumentElement());

		PsaiXmlUtils::createDomElement(doc, root, PsaiXmlConstants::ELEMENT_CHAT_TEXT, msg.sText.GetDataSafe());

		DOMElement& speakerElement = PsaiXmlUtils::createDomElement(doc, root, PsaiXmlConstants::ELEMENT_CHAT_SPEAKER, "");

		if (msg.sOther != NULL && msg.sOther.Length() > 0)
		{
			PsaiXmlUtils::createDomElement(doc, speakerElement, PsaiXmlConstants::ELEMENT_CHAT_SPEAKER_TO, msg.sOther.GetDataSafe());
		}
		else if (msg.sPerson != NULL && msg.sPerson.Length() > 0)
		{
			PsaiXmlUtils::createDomElement(doc, speakerElement, PsaiXmlConstants::ELEMENT_CHAT_SPEAKER_FROM, msg.sPerson.GetDataSafe());
		}

		PsaiXmlUtils::createDomElement(doc, root, PsaiXmlConstants::ELEMENT_CHAT_CHAT_TYPE, PsaiXmlUtils::getChatTypeAsString(msg.iChatType));

		PsaiXmlUtils::clearXmlUtils();

		xmlString = PsaiXmlUtils::convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psPlaySoundMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{
		DOMDocument& doc = PsaiXmlUtils::getDOMDocumentForMessageType(PsaiXmlConstants::TYPE_PLAY_SOUND_MESSAGE);

		//DOMElement& root = PsaiXmlUtils::getDocumentRootElement(doc);
		DOMElement& root = *(doc.getDocumentElement());

		PsaiXmlUtils::createDomElement(doc, root, PsaiXmlConstants::ELEMENT_PLAY_SOUND_SOUND, msg.sound.GetDataSafe());

		PsaiXmlUtils::clearXmlUtils();

		xmlString = PsaiXmlUtils::convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psSoundEventMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{
		DOMDocument& doc = PsaiXmlUtils::getDOMDocumentForMessageType(PsaiXmlConstants::TYPE_SOUND_EVENT_MESSAGE);

		//DOMElement& root = PsaiXmlUtils::getDocumentRootElement(doc);
		DOMElement& root = *(doc.getDocumentElement());

		std::string typeString = convertToString(msg.type);

		PsaiXmlUtils::createDomElement(doc, root, PsaiXmlConstants::ELEMENT_SOUNT_EVENT_TYPE, typeString);

		PsaiXmlUtils::clearXmlUtils();

		xmlString = PsaiXmlUtils::convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psPersistItem& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{
		DOMDocument& doc = PsaiXmlUtils::getDOMDocumentForMessageType(PsaiXmlConstants::TYPE_PERSIST_ITEM_MESSAGE);

		//DOMElement& root = PsaiXmlUtils::getDocumentRootElement(doc);
		DOMElement& root = *(doc.getDocumentElement());

		std::string factName(msg.factname.GetDataSafe());
		PsaiXmlUtils::createDomElement(doc, root, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_FACT_NAME, factName);

		std::string fileName(msg.filename.GetDataSafe());
		PsaiXmlUtils::createDomElement(doc, root, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_FILE_NAME, fileName);

		std::string flags = convertToString(msg.flags);
		PsaiXmlUtils::createDomElement(doc, root, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_FLAGS, flags);

		std::string id = convertToString(msg.eid.Unbox());
		PsaiXmlUtils::createDomElement(doc, root, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_ID, id);

		std::string name(msg.name.GetDataSafe());
		PsaiXmlUtils::createDomElement(doc, root, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_NAME, name);

		DOMElement& positionElement = PsaiXmlUtils::createDomElement(doc, root, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_POSITION, "");

		addVectorElement(doc, positionElement, msg.pos.x, msg.pos.y, msg.pos.z);

		std::string sector(msg.sector.GetDataSafe());
		PsaiXmlUtils::createDomElement(doc, root, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_SECTOR, sector);

		std::string type = convertToString(msg.type);
		PsaiXmlUtils::createDomElement(doc, root, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_TYPE, type);

		std::string yRot = convertToString(msg.yRot);
		PsaiXmlUtils::createDomElement(doc, root, PsaiXmlConstants::ELEMENT_PERSIST_ITEM_Y_ROTATION, yRot);

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psPersistActor& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{
		DOMDocument& doc = PsaiXmlUtils::getDOMDocumentForMessageType(PsaiXmlConstants::TYPE_PERSIST_ACTOR_MESSAGE);

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psPersistActionLocation& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psRemoveObject& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psDRMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psStatDRMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psCombatEventMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psModeMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psMoveLockMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psNewSectorMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psEffectMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psStopEffectMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psSpellCastMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psSpellCancelMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psStatsMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psSystemMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psWeatherMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psCharacterDetailsMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psGUIInventoryMessage& msg)
{

}

std::string PsaiXmlGenerator::toXml(const psGUIActiveMagicMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psGUIInteractMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psGUIMerchantMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psGUISkillMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psGUITargetUpdateMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psLootMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psQuestListMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psQuestRewardMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psUpdateObjectNameMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psViewItemDescription& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psViewItemUpdate& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psEquipmentMessage& msg)
{
	std::string xmlString;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

