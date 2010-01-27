/*
 * PsaiMessageRedirector.cpp
 *
 *  Created on: 03-Jul-2008
 *      Author: tim
 */

#include <stdio.h>
#include <string>

#include <psconfig.h>
#include <psengine.h>

#include <net/messages.h>
#include <net/msghandler.h>
#include <net/cmdbase.h>

#include "PsaiMessageRedirector.h"
#include "xml/PsaiXmlGenerator.h"

PsaiMessageRedirector::PsaiMessageRedirector(MsgHandler* messageHandler, psEngine* engine)
{
	setupSubscriptions(messageHandler);
	this->engine = engine;
	msgStringsHashReversable = NULL;
	xmlGenerator = new PsaiXmlGenerator();
}

PsaiMessageRedirector::~PsaiMessageRedirector()
{
	if (msgStringsHashReversable)
	{
		delete msgStringsHashReversable;
	}
}

void PsaiMessageRedirector::HandleMessage(MsgEntry* msg)
{
	switch (msg->GetType())
	{
		case MSGTYPE_CHAT:
		{
			psChatMessage chatMsg(msg);
			handleChatMessage(chatMsg);
			break;
		}
		case MSGTYPE_COMBATEVENT:
		{
			psCombatEventMessage combatMsg(msg);
			handleCombatEventMessage(combatMsg);
			break;
		}
		case MSGTYPE_MSGSTRINGS:
		{
			psMsgStringsMessage messageStringsMessage(msg);
			handleMessageStringsMessage(messageStringsMessage);
			break;
		}
		case MSGTYPE_DEAD_RECKONING:
		{
			if (msgStringsHashReversable)
			{
				//new psDRMessage()
				psDRMessage drMsg(msg, 0, msgStringsHashReversable, engine->GetEngine());
				handleDeadReckonMessage(drMsg);
			}
			break;
		}
		case MSGTYPE_EFFECT:
		{
			psEffectMessage effectMsg(msg);
			handleEffectMessage(effectMsg);
			break;
		}
		case MSGTYPE_EFFECT_STOP:
		{
			psStopEffectMessage stopEffectMsg(msg);
			handleStopEffectMessage(stopEffectMsg);
			break;
		}
		case MSGTYPE_MODE:
		{
			psModeMessage modeMsg(msg);
			handleModeMessage(modeMsg);
			break;
		}
		case MSGTYPE_MOVELOCK:
		{
			psMoveLockMessage moveLockMsg(msg);
			handleMoveLockMessage(moveLockMsg);
			break;
		}
		case MSGTYPE_NEWSECTOR:
		{
			psNewSectorMessage newSectorMsg(msg);
			handleNewSectorMessage(newSectorMsg);
			break;
		}
		case MSGTYPE_PERSIST_ACTIONLOCATION:
		{
			psPersistActionLocation persistActionLocationMessage(msg);
			handlePersistActionLocationMessage(persistActionLocationMessage);
			break;
		}
		case MSGTYPE_PERSIST_ACTOR:
		{
			if (msgStringsHashReversable)
			{
				psPersistActor persistActorMsg(msg, 0, msgStringsHashReversable, engine->GetEngine());
				handlePersistActorMessage(persistActorMsg);
			}
			break;
		}
		case MSGTYPE_PERSIST_ITEM:
		{
			if (msgStringsHashReversable)
			{
				psPersistItem persistItemMsg(msg, msgStringsHashReversable);
				handlePersistItemMessage(persistItemMsg);
			}
			break;
		}
		case MSGTYPE_REMOVE_OBJECT:
		{
			psRemoveObject removeObjectMsg(msg);
			handleRemoveObjectMessage(removeObjectMsg);
			break;
		}
		case MSGTYPE_SOUND_EVENT:
		{
			psSoundEventMessage soundEventMsg(msg);
			handleSoundEventMessage(soundEventMsg);
			break;
		}
		case MSGTYPE_PLAYSOUND:
		{
			psPlaySoundMessage playSoundMessage(msg);
			handlePlaySoundMessage(playSoundMessage);
			break;
		}
		case MSGTYPE_SPELL_CANCEL:
		{
			psSpellCancelMessage spellCancelMsg(msg);
			handleSpellCancelMessage(spellCancelMsg);
			break;
		}
		case MSGTYPE_SPELL_CAST:
		{
			psSpellCastMessage spellCastMsg(msg);
			handleSpellCastMessage(spellCastMsg);
			break;
		}
		case MSGTYPE_STATDRUPDATE:
		{
			psStatDRMessage statDRMsg(msg);
			handleStatDeadReckonMessage(statDRMsg);
			break;
		}
		case MSGTYPE_STATS:
		{
			psStatsMessage statsMsg(msg);
			handleStatsMessage(statsMsg);
			break;
		}
		case MSGTYPE_SYSTEM:
		{
			psSystemMessage systemMsg(msg);
			handleSystemMessage(systemMsg);
			break;
		}
		case MSGTYPE_WEATHER:
		{
			psWeatherMessage weatherMessage(msg);
			handleWeatherMessage(weatherMessage);
			break;
		}

		case MSGTYPE_CHARACTERDETAILS:
		{
			psCharacterDetailsMessage charDetailsMessage(msg);
			handleCharacterDetailsMessage(charDetailsMessage);
			break;
		}
		case MSGTYPE_GUIINVENTORY:
		{
			if (msgStringsHashReversable)
			{
				psGUIInventoryMessage guiInvMessage(msg, msgStringsHashReversable);
				handleGuiInventoryMessage(guiInvMessage);
			}
			break;
		}
		case MSGTYPE_ACTIVEMAGIC:
		{
			psGUIActiveMagicMessage guiActiveMagicMessage(msg);
			handleGuiActiveMagicMessage(guiActiveMagicMessage);
			break;
		}
		case MSGTYPE_GUIINTERACT:
		{
			psGUIInteractMessage guiInteractMessage(msg);
			handleGuiInteractMessage(guiInteractMessage);
			break;
		}
		case MSGTYPE_GUIMERCHANT:
		{
			psGUIMerchantMessage guiMerchantMessage(msg);
			handleGuiMerchantMessage(guiMerchantMessage);
			break;
		}
		case MSGTYPE_GUISKILL:
		{
			psGUISkillMessage guiSkillMessage(msg);
			handleGuiSkillMessage(guiSkillMessage);
			break;
		}
		case MSGTYPE_GUITARGETUPDATE:
		{
			psGUITargetUpdateMessage guiTargetUpdateMessage(msg);
			handleGuiTargetUpdateMessage(guiTargetUpdateMessage);
			break;
		}
		case MSGTYPE_LOOT:
		{
			psLootMessage lootMessage(msg);
			handleLootMessage(lootMessage);
			break;
		}
		case MSGTYPE_QUESTLIST:
		{
			psQuestListMessage questListMessage(msg);
			handleQuestListMessage(questListMessage);
			break;
		}
		case MSGTYPE_QUESTREWARD:
		{
			psQuestRewardMessage questRewardMessage(msg);
			handleQuestRewardMessage(questRewardMessage);
			break;
		}
		case MSGTYPE_UPDATE_ITEM:
		{
			printf("Received update item message type");
			break;
		}
		case MSGTYPE_VIEW_ITEM:
		{
			printf("Received view item message type");
			break;
		}
		case MSGTYPE_EQUIPMENT:
		{
			psEquipmentMessage equipmentMessage(msg);
			handleEquipmentMessage(equipmentMessage);
		}
	}
}

void PsaiMessageRedirector::setupSubscriptions(MsgHandler* messageHandler)
{
	messageHandler->Subscribe(this, MSGTYPE_CHAT);
	messageHandler->Subscribe(this, MSGTYPE_COMBATEVENT);
	messageHandler->Subscribe(this, MSGTYPE_DAMAGE_EVENT);
	messageHandler->Subscribe(this, MSGTYPE_DEAD_RECKONING);
	messageHandler->Subscribe(this, MSGTYPE_EFFECT);
	messageHandler->Subscribe(this, MSGTYPE_EFFECT_STOP);
	messageHandler->Subscribe(this, MSGTYPE_MODE);
	messageHandler->Subscribe(this, MSGTYPE_MOVELOCK);
	messageHandler->Subscribe(this, MSGTYPE_NEWSECTOR);
	messageHandler->Subscribe(this, MSGTYPE_PERSIST_ACTIONLOCATION);
	messageHandler->Subscribe(this, MSGTYPE_PERSIST_ACTOR);
	messageHandler->Subscribe(this, MSGTYPE_PERSIST_ITEM);
	messageHandler->Subscribe(this, MSGTYPE_PLAYSOUND);
	messageHandler->Subscribe(this, MSGTYPE_SOUND_EVENT);
	messageHandler->Subscribe(this, MSGTYPE_REMOVE_OBJECT);
	messageHandler->Subscribe(this, MSGTYPE_SPELL_CANCEL);
	messageHandler->Subscribe(this, MSGTYPE_SPELL_CAST);
	messageHandler->Subscribe(this, MSGTYPE_WEATHER);
	messageHandler->Subscribe(this, MSGTYPE_MSGSTRINGS);
	messageHandler->Subscribe(this, MSGTYPE_SYSTEM);
	messageHandler->Subscribe(this, MSGTYPE_CHARACTERDETAILS);
	messageHandler->Subscribe(this, MSGTYPE_GUIINVENTORY);
	messageHandler->Subscribe(this, MSGTYPE_ACTIVEMAGIC);
	messageHandler->Subscribe(this, MSGTYPE_GUIINTERACT);
	messageHandler->Subscribe(this, MSGTYPE_GUIMERCHANT);
	messageHandler->Subscribe(this, MSGTYPE_GUISKILL);
	messageHandler->Subscribe(this, MSGTYPE_GUITARGETUPDATE);
	messageHandler->Subscribe(this, MSGTYPE_LOOT);
	messageHandler->Subscribe(this, MSGTYPE_QUESTLIST);
	messageHandler->Subscribe(this, MSGTYPE_QUESTREWARD);
	messageHandler->Subscribe(this, MSGTYPE_UPDATE_ITEM);
	messageHandler->Subscribe(this, MSGTYPE_VIEW_ITEM);
	messageHandler->Subscribe(this, MSGTYPE_EQUIPMENT);
}

void PsaiMessageRedirector::handleChatMessage(psChatMessage& msg)
{
	const char* messageTypeName = msg.GetMessageTypeName();
	const char* from = msg.sPerson.GetDataSafe();
	const char* to = msg.sOther.GetDataSafe();
	const char* text = msg.sText.GetDataSafe();
	printf("Handle Chat Message of type %s from %s to %s saying %s\n", messageTypeName, from, to, text);
	//std::string chatXml = xmlGenerator->toXml(msg);
	//printf("Generated xml for chat message: %s", chatXml.c_str());
}

void PsaiMessageRedirector::handleCombatEventMessage(psCombatEventMessage& msg)
{
	printf("Handle Combat Message of type %s. Attack by %u on %u for %f damage on location %i\n", msg.GetMessageTypeName().GetDataSafe(),
			msg.attacker_id.Unbox(), msg.target_id.Unbox(), msg.damage, msg.target_location);
}

void PsaiMessageRedirector::handleDeadReckonMessage(psDRMessage& msg)
{
	//printf("Handle message of type %s. Entity %u message is %s\n", msg.GetMessageTypeName().GetDataSafe(), msg.entityid, (msg.valid ? "valid" : "not valid"));
}

void PsaiMessageRedirector::handleEffectMessage(psEffectMessage& msg)
{
	printf("Handle message of type %s.Effect text: %s\n", msg.GetMessageTypeName().GetDataSafe(), msg.effectText.GetDataSafe());
}

void PsaiMessageRedirector::handleModeMessage(psModeMessage& msg)
{
	printf("Handle message of type %s. Actor: %u, mode %u\n", msg.GetMessageTypeName().GetDataSafe(), msg.actorID.Unbox(), msg.mode);
}

void PsaiMessageRedirector::handleMoveLockMessage(psMoveLockMessage& msg)
{
	printf("Handle message of type %s. Movement %s\n", msg.GetMessageTypeName().GetDataSafe(), (msg.locked ? "locked" : "not locked"));
}

void PsaiMessageRedirector::handleNewSectorMessage(psNewSectorMessage& msg)
{
	printf("Handle message of type %s. Changed sector to %s from %s.\n", msg.GetMessageTypeName().GetDataSafe(), msg.newSector.GetDataSafe(),
			msg.oldSector.GetDataSafe());
}

void PsaiMessageRedirector::handlePersistActionLocationMessage(psPersistActionLocation& msg)
{
	printf("Handle message of type %s. Persisted Action Location %s in sector %s.\n", msg.GetMessageTypeName().GetDataSafe(), msg.name.GetDataSafe(),
			msg.sector.GetDataSafe());
}

void PsaiMessageRedirector::handlePersistActorMessage(psPersistActor& msg)
{
	printf("Handle message of type %s. Player id %u - name %s\n", msg.GetMessageTypeName().GetDataSafe(), msg.playerID.Unbox(),
			msg.name.GetDataSafe());
}

void PsaiMessageRedirector::handlePersistItemMessage(psPersistItem& msg)
{
	printf("Handle message of type %s. Persisting item with id %u named %s\n", msg.GetMessageTypeName().GetDataSafe(), msg.eid.Unbox(),
			msg.name.GetDataSafe());
}

void PsaiMessageRedirector::handlePlaySoundMessage(psPlaySoundMessage& msg)
{
	printf("Handle message of type %s. Sound: %s\n", msg.GetMessageTypeName().GetDataSafe(), msg.sound.GetDataSafe());
}

void PsaiMessageRedirector::handleRemoveObjectMessage(psRemoveObject& msg)
{
	printf("Handle message of type %s. Object id %u\n", msg.GetMessageTypeName().GetDataSafe(), msg.objectEID.Unbox());
}

void PsaiMessageRedirector::handleSoundEventMessage(psSoundEventMessage& msg)
{
	printf("Handle message of type %s. Sound type is %u and it %s valid.\n", msg.GetMessageTypeName().GetDataSafe(), msg.type, (msg.valid ? "is"
			: "is not"));
}

void PsaiMessageRedirector::handleSpellCancelMessage(psSpellCancelMessage& msg)
{
	printf("Handle message of type %s. Message %s valid.\n", msg.GetMessageTypeName().GetDataSafe(), (msg.valid ? "is" : "is not"));
}

void PsaiMessageRedirector::handleSpellCastMessage(psSpellCastMessage& msg)
{
	printf("Handle message of type %s. Spell %s being cast\n", msg.GetMessageTypeName().GetDataSafe(), msg.spell.GetDataSafe());
}

void PsaiMessageRedirector::handleStatDeadReckonMessage(psStatDRMessage& msg)
{
	printf("Handle message of type %s. Entity id: %u\n", msg.GetMessageTypeName().GetDataSafe(), msg.entityid.Unbox());
}

void PsaiMessageRedirector::handleStatsMessage(psStatsMessage& msg)
{
	printf("Handle message of type %s. HP: %f, Mana: %f, Weight: %f\n", msg.GetMessageTypeName().GetDataSafe(), msg.hp, msg.mana, msg.weight);
}

void PsaiMessageRedirector::handleStopEffectMessage(psStopEffectMessage& msg)
{
	printf("Handle message of type %s. Stopping effect with id %u\n", msg.GetMessageTypeName().GetDataSafe(), msg.uid);
}

void PsaiMessageRedirector::handleWeatherMessage(psWeatherMessage& msg)
{
	printf("Handle message of type %s. Weather for sector %s is unknown (TDB) \n", msg.GetMessageTypeName().GetDataSafe(),
			msg.weather.sector.GetDataSafe());
}

void PsaiMessageRedirector::handleSystemMessage(psSystemMessage& msg)
{
	printf("Handle message of type %s. Content %s, type %i\n", msg.GetMessageTypeName().GetDataSafe(), msg.msgline.GetDataSafe(), msg.type);
}

void PsaiMessageRedirector::handleMessageStringsMessage(psMsgStringsMessage& msg)
{
	printf("Updating msgstrings\n");
	msgStringsHashReversable = msg.msgstrings;
}

void PsaiMessageRedirector::handleCharacterDetailsMessage(psCharacterDetailsMessage& msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}

void PsaiMessageRedirector::handleGuiInventoryMessage(psGUIInventoryMessage& msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}

void PsaiMessageRedirector::handleGuiActiveMagicMessage(psGUIActiveMagicMessage& msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}

void PsaiMessageRedirector::handleGuiInteractMessage(psGUIInteractMessage& msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}

void PsaiMessageRedirector::handleGuiMerchantMessage(psGUIMerchantMessage& msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}

void PsaiMessageRedirector::handleGuiSkillMessage(psGUISkillMessage& msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}

void PsaiMessageRedirector::handleGuiTargetUpdateMessage(psGUITargetUpdateMessage& msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}

void PsaiMessageRedirector::handleLootMessage(psLootMessage& msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}

void PsaiMessageRedirector::handleQuestListMessage(psQuestListMessage& msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}

void PsaiMessageRedirector::handleQuestRewardMessage(psQuestRewardMessage& msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}

void PsaiMessageRedirector::handleUpdateObjectNameMessage(psUpdateObjectNameMessage& msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}

void PsaiMessageRedirector::handleViewItemDescriptionMessage(psViewItemDescription msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}

void PsaiMessageRedirector::handleViewItemUpdateMessage(psViewItemUpdate& msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}

void PsaiMessageRedirector::handleEquipmentMessage(psEquipmentMessage& msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}
