#ifndef PSAIXMLTESTS_H_
#define PSAIXMLTESTS_H_

#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

#include <string>
#include <net/messages.h>

class PsaiXmlGeneratorTests: public CppUnit::TestCase
{
	public:

		void testPsaiXmlGeneratorChatMessageToXml()
		{
			psChatMessage& msg(4321, "Me", "You", "Something Said", CHAT_SAY, false);
			std::string chatXml = getGenerator().toXml(msg);

			//TS_ASSERT_EQUALS(getExpectedXmlStringForChatMessageToXml, chatXml);
		}

		std::string getExpectedXmlStringForChatMessageToXml()
		{
			return std::string("");
		}

		void testPsaiXmlGeneratorPlaySoundMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorSoundEventMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorPersistItemMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorPersistActorMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorPersistActionLocationMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorRemoveObjectMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorDRMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorStatDRMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorCombatEventMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorModeMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorMoveLockMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorNewSectorMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorEffectMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorStopEffectMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorSpellCastMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorSpellCancelMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorStatsMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorSystemMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorWeatherMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorCharacterDetailsMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorGUIInventoryMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorGUIActiveMagicMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorGUIInteractMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorGUIMerchantMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorGUISkillMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorGUITargetUpdateMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorLootMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorQuestListMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorQuestRewardMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorUpdateObjectNameMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorViewItemDescriptionMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorViewItemUpdateMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

		void testPsaiXmlGeneratorEquipmentMessageToXml()
		{
			// TODO: Implement testPsaiXmlGenerator_ToXml() function.
		}

	private:
		PsaiXmlGenerator& getGenerator()
		{
			PsaiXmlGenerator& generator();
			return generator;
		};
};

#endif /*PSAIXMLTESTS_H_*/
