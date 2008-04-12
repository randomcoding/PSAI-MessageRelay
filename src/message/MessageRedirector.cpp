#include <iostream>

#include "MessageRedirector.h"

#include <net/messages.h>

using namespace std;

MessageRedirector::MessageRedirector()
{
}

MessageRedirector::~MessageRedirector()
{
}

void MessageRedirector::redirect(MsgEntry* messageEntry)
{
	switch (messageEntry->GetType())
	{
		case MSGTYPE_USERCMD:
			psUserCmdMessage commandMessage(messageEntry);
			handleUserCommandMessage(commandMessage);
			break;
		case MSGTYPE_CHAT:
			psChatMessage chatMessage(messageEntry);
			handleChatMessage(chatMessage);
			break;
		case MSGTYPE_COMBATEVENT:
			psCombatEventMessage combatEventMessage(messageEntry);
			handleCombatEventMessage(combatEventMessage);
			break;
		case MSGTYPE_HEART_BEAT:
			psHeartBeatMsg heartbeatMessage(messageEntry);
			handleHeartbeatMessage(heartbeatMessage);
			break;
		case MSGTYPE_LOOT:
			psLootMessage lootMessage(messageEntry);
			handleLootMessage(lootMessage);
			break;
		case MSGTYPE_EQUIPMENT:
			psEquipmentMessage equipmentMessage(messageEntry);
			handleEquipmentMessage(equipmentMessage);
			break;
		case MSGTYPE_MOVEMOD:
			psMoveModMsg moveModMessage(messageEntry);
			handleMoveModMessage(moveModMessage);
			break;
		case MSGTYPE_MOVEINFO:
			psMovementInfoMessage moveInfoMessage(messageEntry);
			handleMoveInfoMessage(moveInfoMessage);
			break;
		case MSGTYPE_USERACTION:
			psUserActionMessage userActionMessage(messageEntry);
			handleUserActionMessage(userActionMessage);
			break;
		default:
			cout << "Unknown Message Type: " << messageEntry.GetType();
	}	
}

void MessageRedirector::handleChatMessage(psChatMessage& msg)
{
	cout << "Handle Chat Message from " << msg.sPerson << " to " << msg.sOther << " saying " << msg.sText;
	// TODO: write method
}

void MessageRedirector::handleCombatEventMessage(psCombatEventMessage& msg)
{
	cout << "Handle Combat Event Message on target " << msg.target_id << " for " << msg.damage << " damage.";
	// TODO: write method
}

void MessageRedirector::handleEquipmentMessage(psEquipmentMessage& msg)
{
	cout << "Handle Equipment Message for part " << msg.part;
	// TODO: write method
}

void MessageRedirector::handleHeartbeatMessage(psHeartBeatMsg& msg)
{
	cout << "Handle heartbeat message";
	// TODO: write method
}

void MessageRedirector::handleLootMessage(psLootMessage& msg)
{
	cout << "Handle Loot Message: " << msg.lootxml;
	// TODO: write method
}

void MessageRedirector::handleMoveInfoMessage(psMovementInfoMessage& msg)
{
	cout << "Handle Move Info Message: " << msg.GetMessageTypeName();
	// TODO: write method
}

void MessageRedirector::handleMoveModMessage(psMoveModMsg& msg)
{
	cout << "Handle Move Mod Message: " << msg.movementMod;
	// TODO: write method
}

void MessageRedirector::handleUserActionMessage(psUserActionMessage& msg)
{
	cout << "Handle User Action Message: " << msg.action;
	// TODO: write method
}

void MessageRedirector::handleUserCommandMessage(psUserCmdMessage& msg)
{
	cout << "Handle User Command Message: " << msg.command;
	// TODO: write method
}
