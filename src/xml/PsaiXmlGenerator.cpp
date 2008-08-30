/*
 * PsaiXmlGenerator.cpp
 *
 *  Created on: 30-Jul-2008
 *      Author: tim
 */

#include <string.h>

#include <csutil/util.h>
#include <csutil/csstring.h>

#include <net/messages.h>

#include <xercesc/util/PlatformUtils.hpp>
#include <xercesc/dom/DOM.hpp>

#include "PsaiXmlGenerator.h"

using namespace XERCES_CPP_NAMESPACE;
using namespace std;

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

string PsaiXmlGenerator::toXml(psChatMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

string PsaiXmlGenerator::toXml(psPlaySoundMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

string PsaiXmlGenerator::toXml(psSoundEventMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

string PsaiXmlGenerator::toXml(psPersistItem& msg)
{

}

string PsaiXmlGenerator::toXml(psPersistActor& msg)
{

}

string PsaiXmlGenerator::toXml(psPersistActionLocation& msg)
{

}

string PsaiXmlGenerator::toXml(psRemoveObject& msg)
{

}

string PsaiXmlGenerator::toXml(psDRMessage& msg)
{

}

string PsaiXmlGenerator::toXml(psStatDRMessage& msg)
{

}

string PsaiXmlGenerator::toXml(psCombatEventMessage& msg)
{

}

string PsaiXmlGenerator::toXml(psModeMessage& msg)
{

}

string PsaiXmlGenerator::toXml(psMoveLockMessage& msg)
{

}

string PsaiXmlGenerator::toXml(psNewSectorMessage& msg)
{

}

string PsaiXmlGenerator::toXml(psEffectMessage& msg)
{

}

string PsaiXmlGenerator::toXml(psStopEffectMessage& msg)
{

}

string PsaiXmlGenerator::toXml(psSpellCastMessage& msg)
{

}

string PsaiXmlGenerator::toXml(psSpellCancelMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

string PsaiXmlGenerator::toXml(psStatsMessage& msg)
{

}

string PsaiXmlGenerator::toXml(psSystemMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

string PsaiXmlGenerator::toXml(psWeatherMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

string PsaiXmlGenerator::toXml(psCharacterDetailsMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

string PsaiXmlGenerator::toXml(psGUIInventoryMessage& msg)
{

}

string PsaiXmlGenerator::toXml(psGUIActiveMagicMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

string PsaiXmlGenerator::toXml(psGUIInteractMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

string PsaiXmlGenerator::toXml(psGUIMerchantMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

string PsaiXmlGenerator::toXml(psGUISkillMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

string PsaiXmlGenerator::toXml(psGUITargetUpdateMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

string PsaiXmlGenerator::toXml(psLootMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

string PsaiXmlGenerator::toXml(psQuestListMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

string PsaiXmlGenerator::toXml(psQuestRewardMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

string PsaiXmlGenerator::toXml(psUpdateObjectNameMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

string PsaiXmlGenerator::toXml(psViewItemDescription& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

string PsaiXmlGenerator::toXml(psViewItemUpdate& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

string PsaiXmlGenerator::toXml(psEquipmentMessage& msg)
{
	if (initiliaseXmlUtils())
	{

		clearXmlUtils();
	}
}

