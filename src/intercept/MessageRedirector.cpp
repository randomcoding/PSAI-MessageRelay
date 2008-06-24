#include <stdio.h>
#include <string>

#include "MessageRedirector.h"
#include "messagetyperesolver.h"

#include <psconfig.h>

#include <net/messages.h>
#include <net/charmessages.h>
#include <iutil/event.h>
#include <iutil/eventnames.h>
#include <iutil/strset.h>

#include <pscelclient.h>

#include <globals.h>

MessageRedirector::MessageRedirector()
{
}

MessageRedirector::~MessageRedirector()
{
}

void MessageRedirector::logMessageTypeReceived(int msgType)
{
	if (msgType != MSGTYPE_DEAD_RECKONING)
	{
		std::string typeString("");
		if (msgType > 1)
		{
			typeString = MessageTypeResolver::typeNames[msgType - 1];
		}

		printf("Redirecting message of type: %s\n", typeString.c_str());
	}
}

/*void MessageRedirector::redirect(MsgEntry* msg)
{
	char msgType = msg->GetType();

	logMessageTypeReceived((int) msgType);

	switch (msg->GetType())
	{
		case MSGTYPE_USERCMD:
			handleUserCommandMessage(msg);
			break;
		case MSGTYPE_CHAT:
			handleChatMessage(msg);
			break;
		case MSGTYPE_COMBATEVENT:
			handleCombatEventMessage(msg);
			break;
		case MSGTYPE_HEART_BEAT:
			handleHeartbeatMessage(msg);
			break;
		case MSGTYPE_LOOT:
			handleLootMessage(msg);
			break;
		case MSGTYPE_EQUIPMENT:
			handleEquipmentMessage(msg);
			break;
		case MSGTYPE_MOVEMOD:
			handleMoveModMessage(msg);
			break;
		case MSGTYPE_MOVEINFO:
			handleMoveInfoMessage(msg);
			break;
		case MSGTYPE_USERACTION:
			handleUserActionMessage(msg);
			break;
		case MSGTYPE_DAMAGE_EVENT:
			break;
		default:
			//printf("Received Message Type %i\n", msg->GetType());
			break;
	}
}

void MessageRedirector::redirect(iEvent& ev)
{
	if (ev.GetName() > 1)
	{
		printf("Redirected event with id: %u\n", ev.GetName());
	}
}

void MessageRedirector::handleChatMessage(MsgEntry* msg)
{
	psChatMessage chatMessage(msg);
	handleChatMessage(&chatMessage);
}

void MessageRedirector::handleCombatEventMessage(MsgEntry* msg)
{
	psCombatEventMessage combatEventMessage(msg);
	handleCombatEventMessage(&combatEventMessage);
}

void MessageRedirector::handleEquipmentMessage(MsgEntry* msg)
{
	psEquipmentMessage equipmentMessage(msg);
	handleEquipmentMessage(&equipmentMessage);
}

void MessageRedirector::handleHeartbeatMessage(MsgEntry* msg)
{
	psHeartBeatMsg heartbeatMessage(msg);
	handleHeartbeatMessage(&heartbeatMessage);
}

void MessageRedirector::handleLootMessage(MsgEntry* msg)
{
	psLootMessage lootMessage(msg);
	handleLootMessage(&lootMessage);
}

void MessageRedirector::handleMoveInfoMessage(MsgEntry* msg)
{
	psMovementInfoMessage moveInfoMessage(msg);
	handleMoveInfoMessage(&moveInfoMessage);
}

void MessageRedirector::handleMoveModMessage(MsgEntry* msg)
{
	psMoveModMsg moveModMessage(msg);
	handleMoveModMessage(&moveModMessage);
}

void MessageRedirector::handleUserActionMessage(MsgEntry* msg)
{
	psUserActionMessage userActionMessage(msg);
	handleUserActionMessage(&userActionMessage);
}

void MessageRedirector::handleUserCommandMessage(MsgEntry* msg)
{
	psUserCmdMessage commandMessage(msg);
	handleUserCommandMessage(&commandMessage);
}*/

void MessageRedirector::handleClientMessageReceivedMessage(MsgEntry* msg)
{
	printf("%s Message (%u) Received from psClientMessageManager\n", MessageTypeResolver::typeNames[msg->GetType() - 1].data(), msg->GetType());
}

void MessageRedirector::handleEventManagerMessage(MsgEntry* msg)
{
	printf("%s Message (%u) Received from event manager\n", MessageTypeResolver::typeNames[msg->GetType() - 1].data(), msg->GetType());
}

void MessageRedirector::handleChatMessage(psChatMessage& chatMessage)
{
	const char* messageTypeName = chatMessage.GetMessageTypeName();
	const char* from = chatMessage.sPerson.GetDataSafe();
	const char* to = chatMessage.sOther.GetDataSafe();
	const char* text = chatMessage.sText.GetDataSafe();
	printf("Handle Chat Message of type %s from %s to %s saying %s\n", messageTypeName, from, to, text);
	// TODO: write method
}

void MessageRedirector::handleCombatEventMessage(psCombatEventMessage& combatEventMessage)
{
	printf("Handle Combat Event Message on target %u for %f damage\n", combatEventMessage.target_id, combatEventMessage.damage);
}

void MessageRedirector::handleHeartbeatMessage(psHeartBeatMsg& heartBeatMessage)
{
	printf("%s message received\n", heartBeatMessage.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleLootMessage(psLootMessage& lootMessage)
{
	printf("%s message received %s\n", lootMessage.GetMessageTypeName().GetDataSafe(), lootMessage.lootxml.GetDataSafe());
}

void MessageRedirector::handleEquipmentMessage(psEquipmentMessage& equipmentMessage)
{
	printf("%s message received\n", equipmentMessage.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleMoveInfoMessage(psMovementInfoMessage& moveInfoMessage)
{
	printf("%s message received\n", moveInfoMessage.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleMoveModMessage(psMoveModMsg& moveModMessage)
{
	printf("%s message received\n", moveModMessage.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleMoveLockMessage(psMoveLockMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleUserActionMessage(psUserActionMessage& userActionMessage)
{
	printf("%s message received for action %s\n", userActionMessage.GetMessageTypeName().GetDataSafe(), userActionMessage.action.GetDataSafe());
}

void MessageRedirector::handleUserCommandMessage(psUserCmdMessage& userCommandMessage)
{
	printf("%s message received with user command: %s\n", userCommandMessage.GetMessageTypeName().GetDataSafe(), userCommandMessage.command.GetDataSafe());
}

void MessageRedirector::handleLootRemoveMessage(psLootRemoveMessage& lootRemoveMessage)
{
	printf("%s message received to remove loot with id %d\n", lootRemoveMessage.GetMessageTypeName().GetDataSafe(), lootRemoveMessage.id);
}

void MessageRedirector::handleExchangeStatusMessage(psExchangeStatusMsg& exchangeStatusMessage)
{
	printf("%s message received.\n", exchangeStatusMessage.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleExchangeAcceptMessage(psExchangeAcceptMsg& exchangeAcceptMessage)
{
	printf("%s message received.\n", exchangeAcceptMessage.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleExchangeAddItemMessage(psExchangeAddItemMsg& exchangeAddItemMessage)
{
	printf("%s message received.\n", exchangeAddItemMessage.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleExchangeEndMessage(psExchangeEndMsg& exchangeEndMessage)
{
	printf("%s message received.\n", exchangeEndMessage.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleExchangeMoneyMessage(psExchangeMoneyMsg& exchangeMoneyMessage)
{
	printf("%s message received.\n", exchangeMoneyMessage.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleExchangeRemoveItemMessage(psExchangeRemoveItemMsg& exchangeRemoveItemMessage)
{
	printf("%s message received.\n", exchangeRemoveItemMessage.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleExchangeRequestMessage(psExchangeRequestMsg& exchangeRequestMessage)
{
	printf("%s message received.\n", exchangeRequestMessage.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleBuddyListMessage(psBuddyListMsg& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleIntroduction(psCharIntroduction msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleCharacterDetailsMessage(psCharacterDetailsMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleCharacterDetailsRequestMessage(psCharacterDetailsRequestMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleClientStatusMessage(psClientStatusMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleDeadReckonMessage(psDRMessage& msg)
{
	printf("%s message received for entity with id %u ins sector %s an position (%d, %d, %d) with velocity (%d, %d, %d)\n", msg.GetMessageTypeName().GetDataSafe(), msg.entityid, msg.sectorName.GetDataSafe(), msg.pos.x, msg.pos.y, msg.pos.z, msg.vel.x, msg.vel.y, msg.vel.z);
}

void MessageRedirector::handleEffectMessage(psEffectMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleEntranceMessage(psEntranceMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleFactionMessage(psFactionMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleGuiActiveMagicMessage(psGUIActiveMagicMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleGuiBankingMessage(psGUIBankingMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleGuiGroupMessage(psGUIGroupMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleGuiGuildMessage(psGUIGuildMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleGuiInteractMessage(psGUIInteractMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleGuiInventoryMessage(psGUIInventoryMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleGuiMerchantMessage(psGUIMerchantMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleGuiSkillMessage(psGUISkillMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleGuiTargetUpdateMessage(psGUITargetUpdateMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleGuildCommandMessage(psGuildCmdMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleLifeEventMessage(psLifeEventMsg& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleLockpickMessage(psLockpickMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleMapActionMessage(psMapActionMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleMarriageDivorceMessage(psMarriageMsgDivorce msg)
{
	printf("psMarriageMsgDivorce message received\n"/*, msg.GetMessageTypeName().GetDataSafe()*/);
}

void MessageRedirector::handleMarriageDivorceConfirmMessage(psMarriageMsgDivorceConfirm msg)
{
	printf("psMarriageMsgPropose message received\n"/*, msg.GetMessageTypeName().GetDataSafe()*/);
}

void MessageRedirector::handleMarriageProposeMessage(psMarriageMsgPropose msg)
{
	printf("psMarriageMsgPropose message received\n"/*, msg.GetMessageTypeName().GetDataSafe()*/);
}

void MessageRedirector::handleModeMessage(psModeMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleCraftingInfoMessage(psMsgCraftingInfo msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleRequestMovementMessage(psMsgRequestMovement msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleNameCheckMessage(psNameCheckMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleNewSectorMessage(psNewSectorMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleOverrideActionMessage(psOverrideActionMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleAssembleGlyphMessage(psGlyphAssembleMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handlePurifyGlyphMessage(psPurifyGlyphMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleQuestInfoMessage(psQuestInfoMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleQuestListMessage(psQuestListMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleQuestRewardMessage(psQuestRewardMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleQuestionCancelMessage(psQuestionCancelMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleQuestionMessage(psQuestionMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleQuestionResponseMessage(psQuestionResponseMsg& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleReadBookTextMessage(psReadBookTextMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleRequestGlyphsMessage(psRequestGlyphsMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleSpellBookMessage(psSpellBookMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleSpellCancelMessage(psSpellCancelMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleSpellCastMessage(psSpellCastMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleStatDRMessage(psStatDRMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleStatsMessage(psStatsMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleStopEffectMessage(psStopEffectMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleTraitChangeMessage(psTraitChangeMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleUpdateObjectNameMessage(psUpdateObjectNameMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleUpdatePlayerGgoupMessage(psUpdatePlayerGroupMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleUpdatePlayerGuildMessage(psUpdatePlayerGuildMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleViewActionLocationMessage(psViewActionLocationMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleWeatherMessage(psWeatherMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleWorkCommandMessage(psWorkCmdMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handleWriteBookMessage(psWriteBookMessage& msg)
{
	printf("%s message received\n", msg.GetMessageTypeName().GetDataSafe());
}

void MessageRedirector::handlePersistItemMessage(psPersistItem& msg)
{
	printf("%s message received\nPersisting item with id %u\nnamed %s\nin sector %s\nat location (%d, %d, %d)\n", msg.GetMessageTypeName().GetDataSafe(), msg.id, msg.name.GetDataSafe(), msg.sector.GetDataSafe(), msg.pos.x, msg.pos.y, msg.pos.z);
}

void MessageRedirector::handleRemoveObjectMessage(psRemoveObject& msg)
{
	printf("%s message received for object with EID %u\n", msg.GetMessageTypeName().GetDataSafe(), msg.objectEID);
}

void MessageRedirector::handlePersistActorMessage(psPersistActor& msg)
{
	printf("%S message received\nPersisting Actor named %s with PS_ID %u in sector %s of race %s and general id %u", msg.GetMessageTypeName().GetDataSafe(), msg.name.GetDataSafe(), msg.entityid, msg.sectorName.GetDataSafe(), msg.race.GetDataSafe(), msg.playerID);
}

void MessageRedirector::handlePersistActionLocationMessage(psPersistActionLocation& msg)
{
	printf("%s message received with name %s in sector %s\n", msg.GetMessageTypeName().GetDataSafe(), msg.name.GetDataSafe(), msg.sector.GetDataSafe());
}

/*void MessageRedirector::handlePersistWorldMessage(psPersistWorld& msg)
{
	printf("%s message received to persist sector %s\n", msg.GetMessageTypeName(), msg.sector.GetDataSafe());
}*/

