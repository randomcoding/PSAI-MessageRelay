#ifndef MESSAGEREDIRECTOR_H_
#define MESSAGEREDIRECTOR_H_

/**
 * This class is responsible for passing messages coming from the PS server on to the Agent Systems that are registered to the comms system.
 * More specifically, the messages of interest here are those that indicate the state of the world, such as object create/remove messages, chat messages
 * (whether directly to the player or overheard), perceptions of combat or other creature's activities like mining etc.
 */
struct iEvent;
class MsgEntry;

class psChatMessage;
class psCombatEventMessage;
class psHeartBeatMsg;
class psLootMessage;
class psEquipmentMessage;
class psMovementInfoMessage;
class psMoveModMsg;
class psMoveLockMessage;
class psUserActionMessage;
class psUserCmdMessage;
class psLootRemoveMessage;
class psExchangeAcceptMsg;
class psExchangeAddItemMsg;
class psExchangeEndMsg;
class psExchangeMoneyMsg;
class psExchangeRemoveItemMsg;
class psExchangeRequestMsg;
class psExchangeStatusMsg;
class psBuddyListMsg;
class psCharIntroduction;
class psCharacterDetailsMessage;
class psCharacterDetailsRequestMessage;
class psClientStatusMessage;
class psDRMessage;
class psEffectMessage;
class psEntranceMessage;
class psFactionMessage;
class psGlyphAssembleMessage;
class psGUIActiveMagicMessage;
class psGUIBankingMessage;
class psGUIGroupMessage;
class psGUIGuildMessage;
class psGUIInteractMessage;
class psGUIInventoryMessage;
class psGUIMerchantMessage;
class psGUISkillMessage;
class psGUITargetUpdateMessage;
class psGuildCmdMessage;
class psLifeEventMsg;
class psLockpickMessage;
class psMapActionMessage;
class psMarriageMsgDivorce;
class psMarriageMsgDivorceConfirm;
class psMarriageMsgPropose;
class psModeMessage;
class psMsgCraftingInfo;
class psMsgRequestMovement;
class psNameCheckMessage;
class psNewSectorMessage;
class psOverrideActionMessage;
class psPurifyGlyphMessage;
class psQuestInfoMessage;
class psQuestListMessage;
class psQuestRewardMessage;
class psQuestionMessage;
class psQuestionCancelMessage;
class psQuestionResponseMsg;
class psReadBookTextMessage;
class psRequestGlyphsMessage;
class psSpellBookMessage;
class psSpellCancelMessage;
class psSpellCastMessage;
class psStatDRMessage;
class psStatsMessage;
class psStopEffectMessage;
class psTraitChangeMessage;
class psUpdateObjectNameMessage;
class psUpdatePlayerGroupMessage;
class psUpdatePlayerGuildMessage;
class psViewActionLocationMessage;
class psWeatherMessage;
class psWorkCmdMessage;
class psWriteBookMessage;
class psPersistItem;
class psRemoveObject;
class psPersistActor;
class psPersistWorld;
class psPersistActionLocation;

class MessageRedirector
{
	public:
		MessageRedirector();
		virtual ~MessageRedirector();

		void handleClientMessageReceivedMessage(MsgEntry* msg);

		void handleEventManagerMessage(MsgEntry* msg);

		void handleUserCommandMessage(psUserCmdMessage& userCommandMessage);

		void handleChatMessage(psChatMessage& chatMessage);

		void handleCombatEventMessage(psCombatEventMessage& combatEventMessage);

		void handleHeartbeatMessage(psHeartBeatMsg& heartbeatMessage);

		void handleLootMessage(psLootMessage& lootMessage);

		void handleEquipmentMessage(psEquipmentMessage& equipmentMEssage);

		void handleMoveInfoMessage(psMovementInfoMessage& moveInfoMessage);

		void handleMoveModMessage(psMoveModMsg& moveModMessage);

		void handleMoveLockMessage(psMoveLockMessage& msg);

		void handleUserActionMessage(psUserActionMessage& userActionMessage);

		void handleLootRemoveMessage(psLootRemoveMessage& lootRemoveMessage);

		void handleExchangeStatusMessage(psExchangeStatusMsg& exchangeStatusMessage);

		void handleExchangeAcceptMessage(psExchangeAcceptMsg& exchangeAcceptMessage);

		void handleExchangeAddItemMessage(psExchangeAddItemMsg& exchangeAddItemMessage);

		void handleExchangeEndMessage(psExchangeEndMsg& exchangeEndMessage);

		void handleExchangeMoneyMessage(psExchangeMoneyMsg& exchangeMoneyMessage);

		void handleExchangeRemoveItemMessage(psExchangeRemoveItemMsg& exchangeRemoveItemMessage);

		void handleExchangeRequestMessage(psExchangeRequestMsg& exchangeRequestMessage);

		void handleBuddyListMessage(psBuddyListMsg& msg);

		void handleIntroduction(psCharIntroduction msg);

		void handleCharacterDetailsMessage(psCharacterDetailsMessage& msg);

		void handleCharacterDetailsRequestMessage(psCharacterDetailsRequestMessage& msg);

		void handleClientStatusMessage(psClientStatusMessage& msg);

		void handleDeadReckonMessage(psDRMessage& msg);

		void handleEffectMessage(psEffectMessage& msg);

		void handleEntranceMessage(psEntranceMessage& msg);

		void handleFactionMessage(psFactionMessage& msg);

		void handleGuiActiveMagicMessage(psGUIActiveMagicMessage& msg);

		void handleGuiBankingMessage(psGUIBankingMessage& msg);

		void handleGuiGroupMessage(psGUIGroupMessage& msg);

		void handleGuiGuildMessage(psGUIGuildMessage& msg);

		void handleGuiInteractMessage(psGUIInteractMessage& msg);

		void handleGuiInventoryMessage(psGUIInventoryMessage& msg);

		void handleGuiMerchantMessage(psGUIMerchantMessage& msg);

		void handleGuiSkillMessage(psGUISkillMessage& msg);

		void handleGuiTargetUpdateMessage(psGUITargetUpdateMessage& msg);

		void handleGuildCommandMessage(psGuildCmdMessage& msg);

		void handleLifeEventMessage(psLifeEventMsg& msg);

		void handleLockpickMessage(psLockpickMessage& msg);

		void handleMapActionMessage(psMapActionMessage& msg);

		void handleMarriageDivorceMessage(psMarriageMsgDivorce msg);

		void handleMarriageDivorceConfirmMessage(psMarriageMsgDivorceConfirm msg);

		void handleMarriageProposeMessage(psMarriageMsgPropose msg);

		void handleModeMessage(psModeMessage& msg);

		void handleCraftingInfoMessage(psMsgCraftingInfo msg);

		void handleRequestMovementMessage(psMsgRequestMovement msg);

		void handleNameCheckMessage(psNameCheckMessage& msg);

		void handleNewSectorMessage(psNewSectorMessage& msg);

		void handleOverrideActionMessage(psOverrideActionMessage& msg);

		void handleAssembleGlyphMessage(psGlyphAssembleMessage& msg);

		void handlePurifyGlyphMessage(psPurifyGlyphMessage& msg);

		void handleQuestInfoMessage(psQuestInfoMessage& msg);

		void handleQuestListMessage(psQuestListMessage& msg);

		void handleQuestRewardMessage(psQuestRewardMessage& msg);

		void handleQuestionCancelMessage(psQuestionCancelMessage& msg);

		void handleQuestionMessage(psQuestionMessage& msg);

		void handleQuestionResponseMessage(psQuestionResponseMsg& msg);

		void handleReadBookTextMessage(psReadBookTextMessage& msg);

		void handleRequestGlyphsMessage(psRequestGlyphsMessage& msg);

		void handleSpellBookMessage(psSpellBookMessage& msg);

		void handleSpellCancelMessage(psSpellCancelMessage& msg);

		void handleSpellCastMessage(psSpellCastMessage& msg);

		void handleStatDRMessage(psStatDRMessage& msg);

		void handleStatsMessage(psStatsMessage& msg);

		void handleStopEffectMessage(psStopEffectMessage& msg);

		void handleTraitChangeMessage(psTraitChangeMessage& msg);

		void handleUpdateObjectNameMessage(psUpdateObjectNameMessage& msg);

		void handleUpdatePlayerGgoupMessage(psUpdatePlayerGroupMessage& msg);

		void handleUpdatePlayerGuildMessage(psUpdatePlayerGuildMessage& msg);

		void handleViewActionLocationMessage(psViewActionLocationMessage& msg);

		void handleWeatherMessage(psWeatherMessage& msg);

		void handleWorkCommandMessage(psWorkCmdMessage& msg);

		void handleWriteBookMessage(psWriteBookMessage& msg);

		void handlePersistItemMessage(psPersistItem& msg);

		void handleRemoveObjectMessage(psRemoveObject& msg);

		void handlePersistActorMessage(psPersistActor& msg);

		void handlePersistActionLocationMessage(psPersistActionLocation& msg);

		//void handlePersistWorldMessage(psPersistWorld& msg);

	private:

		void logMessageTypeReceived(int msgType);
};

#endif /*MESSAGEREDIRECTOR_H_*/
