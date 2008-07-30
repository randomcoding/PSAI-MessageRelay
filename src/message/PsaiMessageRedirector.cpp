/*
 * PsaiMessageRedirector.cpp
 *
 *  Created on: 03-Jul-2008
 *      Author: tim
 */

#include <stdio.h>

#include <psconfig.h>
#include <psengine.h>

#include <net/messages.h>
#include <net/msghandler.h>
#include <net/cmdbase.h>

#include "PsaiMessageRedirector.h"

PsaiMessageRedirector::PsaiMessageRedirector(MsgHandler* messageHandler, psEngine* engine)
{
	setupSubscriptions(messageHandler);
	this->engine = engine;
	msgStrings = NULL;
}

PsaiMessageRedirector::~PsaiMessageRedirector()
{
	if (msgStrings)
	{
		delete msgStrings;
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
		case MSGTYPE_PLAYSOUND:
		{
			psPlaySoundMessage soundMsg(msg);
			handlePlaySoundMessage(soundMsg);
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
			if (msgStrings)
			{
				psDRMessage drMsg(msg, msgStrings, engine->GetEngine());
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
			if (msgStrings)
			{
				psPersistActor persistActorMsg(msg, msgStrings, engine->GetEngine());
				handlePersistActorMessage(persistActorMsg);
			}
			break;
		}
		case MSGTYPE_PERSIST_ITEM:
		{
			psPersistItem persistItemMsg(msg);
			handlePersistItemMessage(persistItemMsg);
			break;
		}
		case MSGTYPE_REMOVE_OBJECT:
		{
			psRemoveObject removeObjectMsg(msg);
			handleRemoveObjectMessage(removeObjectMsg);
			break;
		}
			/*case MSGTYPE_PLAYSOUND:
			 {
			 psSoundEventMessage soundEventMsg(msg);
			 handleSoundEventMessage(soundEventMsg);
			 break;
			 }*/
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
			psSystemMessage systemMSg(msg);
			handleSystemMessage(systemMSg);
			break;
		}
		case MSGTYPE_WEATHER:
		{
			psWeatherMessage weatherMessage(msg);
			handleWeatherMessage(weatherMessage);
			break;
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
	messageHandler->Subscribe(this, MSGTYPE_REMOVE_OBJECT);
	messageHandler->Subscribe(this, MSGTYPE_SPELL_CANCEL);
	messageHandler->Subscribe(this, MSGTYPE_SPELL_CAST);
	messageHandler->Subscribe(this, MSGTYPE_WEATHER);
	messageHandler->Subscribe(this, MSGTYPE_MSGSTRINGS);
}

void PsaiMessageRedirector::handleChatMessage(psChatMessage& msg)
{
	const char* messageTypeName = msg.GetMessageTypeName();
	const char* from = msg.sPerson.GetDataSafe();
	const char* to = msg.sOther.GetDataSafe();
	const char* text = msg.sText.GetDataSafe();
	printf("Handle Chat Message of type %s from %s to %s saying %s\n", messageTypeName, from, to, text);
}

void PsaiMessageRedirector::handleCombatEventMessage(psCombatEventMessage& msg)
{
	printf("Handle Combat Message of type %s. Attack by %u on %u for %f damage on location %i\n", msg.GetMessageTypeName().GetDataSafe(), msg.attacker_id, msg.target_id, msg.damage,
			msg.target_location);
}

void PsaiMessageRedirector::handleDeadReckonMessage(psDRMessage& msg)
{
	printf("Handle message of type %s. Entity %u message is %s\n", msg.GetMessageTypeName().GetDataSafe(), msg.entityid, (msg.valid ? "valid" : "not valid"));
}

void PsaiMessageRedirector::handleEffectMessage(psEffectMessage& msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}

void PsaiMessageRedirector::handleModeMessage(psModeMessage& msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}

void PsaiMessageRedirector::handleMoveLockMessage(psMoveLockMessage& msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}

void PsaiMessageRedirector::handleNewSectorMessage(psNewSectorMessage& msg)
{
	printf("Handle message of type %s. Changed sector to %s from %s.\n", msg.GetMessageTypeName().GetDataSafe(), msg.newSector.GetDataSafe(), msg.oldSector.GetDataSafe());
}

void PsaiMessageRedirector::handlePersistActionLocationMessage(psPersistActionLocation& msg)
{
	printf("Handle message of type %s. Persisted Action Location %s in sector %s.\n", msg.GetMessageTypeName().GetDataSafe(), msg.name.GetDataSafe(), msg.sector.GetDataSafe());
}

void PsaiMessageRedirector::handlePersistActorMessage(psPersistActor& msg)
{
	printf("Handle message of type %s. Player id %u - name %s\n", msg.GetMessageTypeName().GetDataSafe(), msg.playerID, msg.name.GetDataSafe());
}

void PsaiMessageRedirector::handlePersistItemMessage(psPersistItem& msg)
{
	printf("Handle message of type %s. Persisting item with id %u named %s\n", msg.GetMessageTypeName().GetDataSafe(), msg.id, msg.name.GetDataSafe());
}

void PsaiMessageRedirector::handlePlaySoundMessage(psPlaySoundMessage& msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}

void PsaiMessageRedirector::handleRemoveObjectMessage(psRemoveObject& msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}

void PsaiMessageRedirector::handleSpellCancelMessage(psSpellCancelMessage& msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}

void PsaiMessageRedirector::handleSpellCastMessage(psSpellCastMessage& msg)
{
	printf("Handle message of type %s. Spell %s being cast\n", msg.GetMessageTypeName().GetDataSafe(), msg.spell.GetDataSafe());
}

void PsaiMessageRedirector::handleStatDeadReckonMessage(psStatDRMessage& msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}

void PsaiMessageRedirector::handleStatsMessage(psStatsMessage& msg)
{
	printf("Handle message of type %s.\n", msg.GetMessageTypeName().GetDataSafe());
}

void PsaiMessageRedirector::handleStopEffectMessage(psStopEffectMessage& msg)
{
	printf("Handle message of type %s. Stopping effect with id %u\n", msg.GetMessageTypeName().GetDataSafe(), msg.uid);
}

void PsaiMessageRedirector::handleWeatherMessage(psWeatherMessage& msg)
{
	printf("Handle message of type %s. Weather for sector %s is unknown (TDB) \n", msg.GetMessageTypeName().GetDataSafe(), msg.weather.sector.GetDataSafe());
}

void PsaiMessageRedirector::handleSystemMessage(psSystemMessage& msg)
{
	printf("Handle message of type %s. Content %s, type %i\n", msg.GetMessageTypeName().GetDataSafe(), msg.msgline.GetDataSafe(), msg.type);
}

void PsaiMessageRedirector::handleMessageStringsMessage(psMsgStringsMessage& msg)
{
	msgStrings = msg.msgstrings;
}
