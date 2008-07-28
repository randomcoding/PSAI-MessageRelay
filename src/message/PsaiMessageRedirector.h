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

class PsaiMessageRedirector: public psClientNetSubscriber
{
	public:
		PsaiMessageRedirector(MsgHandler* messageHandler);
		virtual ~PsaiMessageRedirector();

		virtual void HandleMessage(MsgEntry* msg);

	private:
		void setupSubscriptions(MsgHandler* messageHandler);

		void handleChatMessage(psChatMessage& msg);

		void handlePlaySoundMessage(psPlaySoundMessage& msg);

		void handleSoundEventMessage(psSoundEventMessage& msg);

		void handlePersistItemMessage(psPersistItem& msg);

		void handlePersistActorMessage(psPersistActor& msg);

		void handlePersistActionLocationMessage(psPersistActionLocation& msg);

		void handleRemoveObjectMessage(psRemoveObject& msg);

		void handleDeadReckonMessage(psDRMessage& msg);

		void handleStatDeadReckonMessage(psStatDRMessage& msg);

		void handleCombatEventMessage(psCombatEventMessage& msg);

		void handleModeMessage(psModeMessage& msg);

		void handleMoveLockMessage(psMoveLockMessage& msg);

		void handleNewSectorMessage(psNewSectorMessage& msg);

		void handleEffectMessage(psEffectMessage& msg);

		void handleStopEffectMessage(psStopEffectMessage& msg);

		void handleSpellCastMessage(psSpellCastMessage& msg);

		void handleSpellCancelMessage(psSpellCancelMessage& msg);

		void handleStatsMessage(psStatsMessage& msg);

		void handleWeatherMessage(psWeatherMessage& msg);
};

#endif /* PSAIMESSAGEREDIRECTOR_H_ */
