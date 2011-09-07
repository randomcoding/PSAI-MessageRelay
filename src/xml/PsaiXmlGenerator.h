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

//typedef std::string String;

#include <string>

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

		std::string toXml(const psChatMessage& msg);

		std::string toXml(const psPlaySoundMessage& msg);

		std::string toXml(const psSoundEventMessage& msg);

		std::string toXml(const psPersistItem& msg);

		std::string toXml(const psPersistActor& msg);

		std::string toXml(const psPersistActionLocation& msg);

		std::string toXml(const psRemoveObject& msg);

		std::string toXml(const psDRMessage& msg);

		std::string toXml(const psStatDRMessage& msg);

		std::string toXml(const psCombatEventMessage& msg);

		std::string toXml(const psModeMessage& msg);

		std::string toXml(const psMoveLockMessage& msg);

		std::string toXml(const psNewSectorMessage& msg);

		std::string toXml(const psEffectMessage& msg);

		std::string toXml(const psStopEffectMessage& msg);

		std::string toXml(const psSpellCastMessage& msg);

		std::string toXml(const psSpellCancelMessage& msg);

		std::string toXml(const psStatsMessage& msg);

		std::string toXml(const psSystemMessage& msg);

		std::string toXml(const psWeatherMessage& msg);

		std::string toXml(const psCharacterDetailsMessage& msg);

		std::string toXml(const psGUIInventoryMessage& msg);

		std::string toXml(const psGUIActiveMagicMessage& msg);

		std::string toXml(const psGUIInteractMessage& msg);

		std::string toXml(const psGUIMerchantMessage& msg);

		std::string toXml(const psGUISkillMessage& msg);

		std::string toXml(const psGUITargetUpdateMessage& msg);

		std::string toXml(const psLootMessage& msg);

		std::string toXml(const psQuestListMessage& msg);

		std::string toXml(const psQuestRewardMessage& msg);

		std::string toXml(const psUpdateObjectNameMessage& msg);

		std::string toXml(const psViewItemDescription& msg);

		std::string toXml(const psViewItemUpdate& msg);

		std::string toXml(const psEquipmentMessage& msg);

	private:
		XERCES_CPP_NAMESPACE::DOMElement& addVectorElement(XERCES_CPP_NAMESPACE::DOMDocument& doc, XERCES_CPP_NAMESPACE::DOMElement& parentElement, float posX, float posY, float posZ);

		uint32_t getClientNumber(const psMessageCracker& msg);

		XERCES_CPP_NAMESPACE::DOMElement& addClientNumberElement(XERCES_CPP_NAMESPACE::DOMDocument& doc, XERCES_CPP_NAMESPACE::DOMElement& parentElement, uint32_t clientNumber);
};

#endif /* PSAIXMLGENERATOR_H_ */
