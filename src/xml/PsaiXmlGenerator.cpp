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

std::string PsaiXmlGenerator::toXml(psChatMessage& msg)
{
	std::string xmlString = NULL;
	if (PsaiXmlUtils::PsaiXmlUtils::initiliaseXmlUtils())
	{
		DOMDocument& doc = PsaiXmlUtils::getDOMDocumentForMessageType(PsaiXmlConstants.TYPE_CHAT_MESSAGE);
		DOMElement& root = *(doc.getDocumentElement());

		PsaiXmlUtils::createDomElement(doc, root, PsaiXmlConstants.ELEMENT_CHAT_TEXT, msg.sText.GetDataSafe());

		DOMElement& speakerElement = PsaiXmlUtils::createDomElement(doc, root, PsaiXmlConstants.ELEMENT_CHAT_SPEAKER, NULL);

		if (msg.sOther != NULL && msg.sOther.Length() > 0)
		{
			PsaiXmlUtils::createDomElement(doc, speakerElement, PsaiXmlConstants.ELEMENT_CHAT_SPEAKER_TO, msg.sOther.GetDataSafe());
		}
		else if (msg.sPerson != NULL && msg.sPerson.Length() > 0)
		{
			PsaiXmlUtils::createDomElement(doc, speakerElement, PsaiXmlConstants.ELEMENT_CHAT_SPEAKER_FROM, msg.sPerson.GetDataSafe());
		}

		PsaiXmlUtils::createDomElement(doc, root, PsaiXmlConstants.ELEMENT_CHAT_CHAT_TYPE, PsaiXmlUtils::getChatTypeAsString(msg.iChatType));

		PsaiXmlUtils::clearXmlUtils();

		xmlString = PsaiXmlUtils.convertDomDocumentToXmlString(doc);
	}

	return xmlString;
}



std::string PsaiXmlGenerator::toXml(psPlaySoundMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psSoundEventMessage& msg)
{
	if (PsaiXmlUtils::PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psPersistItem& msg)
{
	if (PsaiXmlUtils::PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psPersistActor& msg)
{
	if (PsaiXmlUtils::PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psPersistActionLocation& msg)
{
	if (PsaiXmlUtils::PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psRemoveObject& msg)
{
	if (PsaiXmlUtils::PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psDRMessage& msg)
{
	if (PsaiXmlUtils::PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psStatDRMessage& msg)
{
	if (PsaiXmlUtils::PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psCombatEventMessage& msg)
{
	if (PsaiXmlUtils::PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psModeMessage& msg)
{
	if (PsaiXmlUtils::PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psMoveLockMessage& msg)
{
	if (PsaiXmlUtils::PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psNewSectorMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psEffectMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psStopEffectMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psSpellCastMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psSpellCancelMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psStatsMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psSystemMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psWeatherMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psCharacterDetailsMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psGUIInventoryMessage& msg)
{

}

std::string PsaiXmlGenerator::toXml(psGUIActiveMagicMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psGUIInteractMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psGUIMerchantMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psGUISkillMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psGUITargetUpdateMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psLootMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psQuestListMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psQuestRewardMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psUpdateObjectNameMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psViewItemDescription& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psViewItemUpdate& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psEquipmentMessage& msg)
{
	if (PsaiXmlUtils::initiliaseXmlUtils())
	{

		PsaiXmlUtils::clearXmlUtils();
	}
}

