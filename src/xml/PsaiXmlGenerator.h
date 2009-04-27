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

#include<xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMElement.hpp>

typedef std::string String;

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
class PsaiXmlUtils;
class PsaiStringUtilities;
class psMessageCracker;

class PsaiXmlGenerator
{
	public:
		PsaiXmlGenerator();
		virtual ~PsaiXmlGenerator();

		String toXml(const psChatMessage& msg);

		String toXml(const psPlaySoundMessage& msg);

		String toXml(const psSoundEventMessage& msg);

		String toXml(const psPersistItem& msg);

		String toXml(const psPersistActor& msg);

		String toXml(const psPersistActionLocation& msg);

		String toXml(const psRemoveObject& msg);

		String toXml(const psDRMessage& msg);

		String toXml(const psStatDRMessage& msg);

		String toXml(const psCombatEventMessage& msg);

		String toXml(const psModeMessage& msg);

		String toXml(const psMoveLockMessage& msg);

		String toXml(const psNewSectorMessage& msg);

		String toXml(const psEffectMessage& msg);

		String toXml(const psStopEffectMessage& msg);

		String toXml(const psSpellCastMessage& msg);

		String toXml(const psSpellCancelMessage& msg);

		String toXml(const psStatsMessage& msg);

		String toXml(const psSystemMessage& msg);

		String toXml(const psWeatherMessage& msg);

		String toXml(const psCharacterDetailsMessage& msg);

		String toXml(const psGUIInventoryMessage& msg);

		String toXml(const psGUIActiveMagicMessage& msg);

		String toXml(const psGUIInteractMessage& msg);

		String toXml(const psGUIMerchantMessage& msg);

		String toXml(const psGUISkillMessage& msg);

		String toXml(const psGUITargetUpdateMessage& msg);

		String toXml(const psLootMessage& msg);

		String toXml(const psQuestListMessage& msg);

		String toXml(const psQuestRewardMessage& msg);

		String toXml(const psUpdateObjectNameMessage& msg);

		String toXml(const psViewItemDescription& msg);

		String toXml(const psViewItemUpdate& msg);

		String toXml(const psEquipmentMessage& msg);

	private:
		PsaiXmlUtils& getXmlUtils();

		XERCES_CPP_NAMESPACE::DOMElement& addVectorElement(XERCES_CPP_NAMESPACE::DOMDocument& doc, XERCES_CPP_NAMESPACE::DOMElement& parentElement, float posX, float posY, float posZ);

		uint32_t getClientNumber(const psMessageCracker& msg);

		XERCES_CPP_NAMESPACE::DOMElement& addClientNumberElement(XERCES_CPP_NAMESPACE::DOMDocument& doc, XERCES_CPP_NAMESPACE::DOMElement& parentElement, uint32_t clientNumber, PsaiXmlUtils& xmlUtils);
};

#endif /* PSAIXMLGENERATOR_H_ */
