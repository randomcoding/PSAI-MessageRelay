/*
 * PsaiXmlGenerator.cpp
 *
 *  Created on: 30-Jul-2008
 *      Author: tim
 */

#include <string.h>

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
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psSoundEventMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psPersistItem& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psPersistActor& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psPersistActionLocation& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psRemoveObject& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psDRMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psStatDRMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psCombatEventMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psModeMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psMoveLockMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psNewSectorMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psEffectMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psStopEffectMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psSpellCastMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psSpellCancelMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psStatsMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psSystemMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psWeatherMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psCharacterDetailsMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psGUIInventoryMessage& msg)
{

}

std::string PsaiXmlGenerator::toXml(const psGUIActiveMagicMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psGUIInteractMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psGUIMerchantMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psGUISkillMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psGUITargetUpdateMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psLootMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psQuestListMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psQuestRewardMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psUpdateObjectNameMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psViewItemDescription& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psViewItemUpdate& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(const psEquipmentMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

