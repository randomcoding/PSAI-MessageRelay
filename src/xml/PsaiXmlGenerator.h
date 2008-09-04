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

class string;

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

		std::string toXml(psChatMessage& msg);

		std::string toXml(psPlaySoundMessage& msg);

		std::string toXml(psSoundEventMessage& msg);

		std::string toXml(psPersistItem& msg);

		std::string toXml(psPersistActor& msg);

		std::string toXml(psPersistActionLocation& msg);

		std::string toXml(psRemoveObject& msg);

		std::string toXml(psDRMessage& msg);

		std::string toXml(psStatDRMessage& msg);

		std::string toXml(psCombatEventMessage& msg);

		std::string toXml(psModeMessage& msg);

		std::string toXml(psMoveLockMessage& msg);

		std::string toXml(psNewSectorMessage& msg);

		std::string toXml(psEffectMessage& msg);

		std::string toXml(psStopEffectMessage& msg);

		std::string toXml(psSpellCastMessage& msg);

		std::string toXml(psSpellCancelMessage& msg);

		std::string toXml(psStatsMessage& msg);

		std::string toXml(psSystemMessage& msg);

		std::string toXml(psWeatherMessage& msg);

		std::string toXml(psCharacterDetailsMessage& msg);

		std::string toXml(psGUIInventoryMessage& msg);

		std::string toXml(psGUIActiveMagicMessage& msg);

		std::string toXml(psGUIInteractMessage& msg);

		std::string toXml(psGUIMerchantMessage& msg);

		std::string toXml(psGUISkillMessage& msg);

		std::string toXml(psGUITargetUpdateMessage& msg);

		std::string toXml(psLootMessage& msg);

		std::string toXml(psQuestListMessage& msg);

		std::string toXml(psQuestRewardMessage& msg);

		std::string toXml(psUpdateObjectNameMessage& msg);

		std::string toXml(psViewItemDescription& msg);

		std::string toXml(psViewItemUpdate& msg);

		std::string toXml(psEquipmentMessage& msg);
};

#endif /* PSAIXMLGENERATOR_H_ */
