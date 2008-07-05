/*
 * PsaiMessageRedirector.cpp
 *
 *  Created on: 03-Jul-2008
 *      Author: tim
 */

#include <stdio.h>

#include <psconfig.h>

#include <net/messages.h>
#include <net/msghandler.h>
#include <net/cmdbase.h>

#include "PsaiMessageRedirector.h"

PsaiMessageRedirector::PsaiMessageRedirector(MsgHandler* messageHandler)
{
	setupSubscriptions(messageHandler);
}

PsaiMessageRedirector::~PsaiMessageRedirector()
{
	// TODO Auto-generated destructor stub
}

void PsaiMessageRedirector::HandleMessage(MsgEntry* msg)
{
	switch (msg->GetType())
	{
		case MSGTYPE_CHAT:
			psChatMessage chatMsg(msg);
			handleChatMessage(chatMsg);
			break;
	}
}

void PsaiMessageRedirector::setupSubscriptions(MsgHandler* messageHandler)
{
	messageHandler->Subscribe(this, MSGTYPE_CHAT);
}

void PsaiMessageRedirector::handleChatMessage(psChatMessage& msg)
{
	const char* messageTypeName = msg.GetMessageTypeName();
	const char* from = msg.sPerson.GetDataSafe();
	const char* to = msg.sOther.GetDataSafe();
	const char* text = msg.sText.GetDataSafe();
	printf("Handle Chat Message of type %s from %s to %s saying %s\n", messageTypeName, from, to, text);
}
