#include <iostream>

#include "MessageRedirector.h"

#include <net/messages.h>

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
			std::cout << "Unknown Message Type: " + messageEntry.GetType();
	}	
}

void MessageRedirector::handleUserCommandMessage(psUserCmdMessage& msg)
{
	// TODO: write method
}

void MessageRedirector::handleChatMessage(psChatMessage& msg)
{
	// TODO: write method
}

void MessageRedirector::handleCombatEventMessage(psCombatEventMessage& msg)
{
	// TODO: write method
}

void MessageRedirector::handleEquipmentMessage(psEquipmentMessage& msg)
{
	// TODO: write method
}

void MessageRedirector::handleHeartbeatMessage(psHeartBeatMsg& msg)
{
	// TODO: write method
}

void MessageRedirector::handleLootMessage(psLootMessage& msg)
{
	// TODO: write method
}

void MessageRedirector::handleMoveInfoMessage(psMovementInfoMessage& msg)
{
	// TODO: write method
}

void MessageRedirector::handleMoveModMessage(psMoveModMsg& msg)
{
	// TODO: write method
}

void MessageRedirector::handleUserActionMessage(psUserActionMessage& msg)
{
	// TODO: write method
}

void MessageRedirector::handleUserCommandMessage(psUserCmdMessage& msg)
{
	// TODO: write method
}