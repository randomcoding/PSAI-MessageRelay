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

#include "PsaiXmlGenerator.h"

using namespace XERCES_CPP_NAMESPACE;

PsaiXmlGenerator::PsaiXmlGenerator()
{
	// does nothing yet
}

PsaiXmlGenerator::~PsaiXmlGenerator()
{
	// does nothing yet
}

bool PsaiXmlGenerator::initiliaseXmlUtils()
{
	bool initialiseSuccess = true;

	try
	{
		XMLPlatformUtils::Initialize();
	}
	catch (const XMLException& toCatch)
	{
		initialiseSuccess = false;
	}
	return initialiseSuccess;
}

void PsaiXmlGenerator::clearXmlUtils()
{
	XMLPlatformUtils::Terminate();
}

std::string PsaiXmlGenerator::toXml(psChatMessage& msg)
{
	if (initiliaseXmlUtils())
	{
		XMLCh tempStr[100];

		XMLString::transcode("Range", tempStr, 99);
		DOMImplementation* impl = DOMImplementationRegistry::getDOMImplementation(tempStr);

		XMLString::transcode("root", tempStr, 99);
		DOMDocument* doc = impl->createDocument(0, tempStr, 0);
		DOMElement* root = doc->getDocumentElement();

		impl.createDOMWriter();

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psPlaySoundMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psSoundEventMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psPersistItem& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psPersistActor& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psPersistActionLocation& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psRemoveObject& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psDRMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psStatDRMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psCombatEventMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psModeMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psMoveLockMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psNewSectorMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psEffectMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psStopEffectMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psSpellCastMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psSpellCancelMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psStatsMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psSystemMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psWeatherMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psCharacterDetailsMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psGUIInventoryMessage& msg)
{

}

std::string PsaiXmlGenerator::toXml(psGUIActiveMagicMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psGUIInteractMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psGUIMerchantMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psGUISkillMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psGUITargetUpdateMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psLootMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psQuestListMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psQuestRewardMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psUpdateObjectNameMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psViewItemDescription& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psViewItemUpdate& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

std::string PsaiXmlGenerator::toXml(psEquipmentMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

