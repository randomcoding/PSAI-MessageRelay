/*
 * PsaiXmlGenerator.cpp
 *
 *  Created on: 30-Jul-2008
 *      Author: tim
 */

#include <string>
#include <sstream>

#include <csutil/util.h>

#include <net/messages.h>

#include <xercesc/util/PlatformUtils.hpp>
#include <xercesc/dom/DOM.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMElement.hpp>

#include "PsaiXmlConstants.h"
#include "PsaiXmlGenerator.h"
#include "PsaiXmlUtils.h"
#include <string>

using namespace XERCES_CPP_NAMESPACE;

PsaiXmlGenerator::PsaiXmlGenerator()
{
	// does nothing yet
}

PsaiXmlGenerator::~PsaiXmlGenerator()
{
	// does nothing yet
}

std::string PsaiXmlGenerator::toXml(const psChatMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{
		DOMDocument& doc = PsaiXmlUtils::getDOMDocumentForMessageType(PsaiXmlConstants::TYPE_CHAT_MESSAGE);
		DOMElement& root = PsaiXmlUtils::getDocumentRootElement(doc);

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
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{
		DOMDocument& doc = PsaiXmlUtils::getDOMDocumentForMessageType(PsaiXmlConstants::TYPE_PLAY_SOUND_MESSAGE);

		DOMElement& root = PsaiXmlUtils::getDocumentRootElement(doc);

		PsaiXmlUtils::createDomElement(doc, root, PsaiXmlConstants::ELEMENT_PLAY_SOUND_SOUND, msg.sound.GetDataSafe());

		PsaiXmlUtils::clearXmlUtils();

		xmlString = PsaiXmlUtils::convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psSoundEventMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{
		DOMDocument& doc = PsaiXmlUtils::getDOMDocumentForMessageType(PsaiXmlConstants::TYPE_SOUND_EVENT_MESSAGE);

		DOMElement& root = PsaiXmlUtils::getDocumentRootElement(doc);

		std::string typeString;
		std::stringstream out;
		out << msg.type;
		typeString = out.str();

		PsaiXmlUtils::createDomElement(doc, root, PsaiXmlConstants::ELEMENT_SOUNT_EVENT_TYPE, typeString);

		PsaiXmlUtils::clearXmlUtils();

		xmlString = PsaiXmlUtils::convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psPersistItem& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psPersistActor& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psPersistActionLocation& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psRemoveObject& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psDRMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psStatDRMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psCombatEventMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psModeMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psMoveLockMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psNewSectorMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psEffectMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psStopEffectMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psSpellCastMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psSpellCancelMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psStatsMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psSystemMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psWeatherMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psCharacterDetailsMessage& msg)
{
	std::string xmlString = NULL;

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
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psGUIInteractMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psGUIMerchantMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psGUISkillMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psGUITargetUpdateMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psLootMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psQuestListMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psQuestRewardMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psUpdateObjectNameMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psViewItemDescription& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psViewItemUpdate& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

std::string PsaiXmlGenerator::toXml(const psEquipmentMessage& msg)
{
	std::string xmlString = NULL;

	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}

	return xmlString;
}

