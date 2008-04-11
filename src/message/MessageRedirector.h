#ifndef MESSAGEREDIRECTOR_H_
#define MESSAGEREDIRECTOR_H_

#include <net/message.h>
#include <net/messages.h>

class MessageRedirector
{
public:
	MessageRedirector();
	virtual ~MessageRedirector();
	
	void redirect(MsgEntry* msg);
	
	void handleUserCommandMessage(psUserCmdMessage& msg);
	
	void handleChatMessage(psChatMessage& msg);
	
	void handleCombatEventMessage(psCombatEventMessage& msg);
	
	void handleHeartbeatMessage(psHeartBeatMsg& msg);
	
	void handleLootMessage(psLootMessage& msg);
	
	void handleEquipmentMessage(psEquipmentMessage& msg);
	
	void handleMoveInfoMessage(psMovementInfoMessage& msg);
	
	void handleMoveModMessage(psMoveModMsg& msg);
	
	void handleUserActionMessage(psUserActionMessage& msg);
};

#endif /*MESSAGEREDIRECTOR_H_*/
