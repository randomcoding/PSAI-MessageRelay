/*
 * PsaiXmlGenerator.h
 *
 *  Created on: 30-Jul-2008
 *      Author: tim
 *
 *      Creates xml from PlaneShift message objects for sending to the various registered AI backends
 */

#ifndef PSAIXMLGENERATOR_H_
#define PSAIXMLGENERATOR_H_


// message types
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
class psMsgStringsMessage;

class PsaiXmlGenerator
{
	public:
		PsaiXmlGenerator();
		virtual ~PsaiXmlGenerator();
};

#endif /* PSAIXMLGENERATOR_H_ */
