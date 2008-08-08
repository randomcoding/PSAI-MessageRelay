/*
 * PsaiXmlGenerator.h
 *
 *  Created on: 30-Jul-2008
 *      Author: tim
 *
 *      Creates xml from PlaneShift message objects for sending to the various registered AI backends
 */

#ifndef PSAIXMLGENERATOR_H_
#define PSAIXMLGENERATOR_H_

#include <string.h>

// message types
class psChatMessage;
class psPlaySoundMessage;
class psSoundEventMessage;
class psPersistItem;
class psPersistActor;
class psPersistActionLocation;
class psRemoveObject;
class psDRMessage;
class psStatDRMessage;
class psCombatEventMessage;
class psModeMessage;
class psMoveLockMessage;
class psNewSectorMessage;
class psEffectMessage;
class psStopEffectMessage;
class psSpellCastMessage;
class psSpellCancelMessage;
class psStatsMessage;
class psSystemMessage;
class psWeatherMessage;
class psCharacterDetailsMessage;
class psGUIInventoryMessage;
class psGUIActiveMagicMessage;
class psGUIInteractMessage;
class psGUIMerchantMessage;
class psGUISkillMessage;
class psGUITargetUpdateMessage;
class psLootMessage;
class psQuestListMessage;
class psQuestRewardMessage;
class psUpdateObjectNameMessage;
class psViewItemDescription;
class psViewItemUpdate;
class psEquipmentMessage;

class PsaiXmlGenerator
{
	public:
		PsaiXmlGenerator();
		virtual ~PsaiXmlGenerator();

	private:

		std::string toXml(psChatMessage& msg);
		std::string toXml(psPlaySoundMessage& msg);
		std::string toXml(psSoundEventMessage& msg);
		std::string toXml(psPersistItem& msg);
		std::string toXml(psPersistActor& msg);
		std::string toXml(psPersistActionLocation& msg);

		static const char* XML_HEADER;
		static const char* PSAI_NAMESPACE;
};

static const char* XML_HEADER="<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";
static const char* PSAI_NAMESPACE="xmlns=\"http://www.psaidoesnt-exist.org/psaiXmlMessages\"";

#endif /* PSAIXMLGENERATOR_H_ */
