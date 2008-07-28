/*
 * PsaiMessageRedirector.h
 *
 *  Created on: 03-Jul-2008
 *      Author: tim
 */

#ifndef PSAIMESSAGEREDIRECTOR_H_
#define PSAIMESSAGEREDIRECTOR_H_

class psClientNetSubscriber;
class MsgHandler;
class psChatMessage;

class PsaiMessageRedirector: public psClientNetSubscriber
{
	public:
		PsaiMessageRedirector(MsgHandler* messageHandler);
		virtual ~PsaiMessageRedirector();

		virtual void HandleMessage(MsgEntry* msg);

	private:
		void setupSubscriptions(MsgHandler* messageHandler);

		void handleChatMessage(psChatMessage& msg);
};

#endif /* PSAIMESSAGEREDIRECTOR_H_ */
