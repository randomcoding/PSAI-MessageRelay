/*
 * XmlTests.h
 *
 *  Created on: 05-Oct-2008
 *      Author: tim
 */

#ifndef XMLTESTS_H_
#define XMLTESTS_H_

#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

#include<string>

class PsaiXmlGenerator;

class XmlTests: public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( XmlTests);
	CPPUNIT_TEST( testPsaiXmlGeneratorChatMessageToXml);
	CPPUNIT_TEST_SUITE_END ();

	public:
		XmlTests() : CppUnit::TestFixture()	{};

		virtual ~XmlTests();

		void testPsaiXmlGeneratorChatMessageToXml();

		void testPsaiXmlGeneratorPlaySoundMessageToXml();

				void testPsaiXmlGeneratorSoundEventMessageToXml();

				void testPsaiXmlGeneratorPersistItemMessageToXml();

				void testPsaiXmlGeneratorPersistActorMessageToXml();

				void testPsaiXmlGeneratorPersistActionLocationMessageToXml();

				void testPsaiXmlGeneratorRemoveObjectMessageToXml();

				void testPsaiXmlGeneratorDRMessageToXml();

				void testPsaiXmlGeneratorStatDRMessageToXml();

				void testPsaiXmlGeneratorCombatEventMessageToXml();

				void testPsaiXmlGeneratorModeMessageToXml();

				void testPsaiXmlGeneratorMoveLockMessageToXml();

				void testPsaiXmlGeneratorNewSectorMessageToXml();

				void testPsaiXmlGeneratorEffectMessageToXml();

				void testPsaiXmlGeneratorStopEffectMessageToXml();

				void testPsaiXmlGeneratorSpellCastMessageToXml();

				void testPsaiXmlGeneratorSpellCancelMessageToXml();

				void testPsaiXmlGeneratorStatsMessageToXml();

				void testPsaiXmlGeneratorSystemMessageToXml();

				void testPsaiXmlGeneratorWeatherMessageToXml();

				void testPsaiXmlGeneratorCharacterDetailsMessageToXml();

				void testPsaiXmlGeneratorGUIInventoryMessageToXml();

				void testPsaiXmlGeneratorGUIActiveMagicMessageToXml();

				void testPsaiXmlGeneratorGUIInteractMessageToXml();

				void testPsaiXmlGeneratorGUIMerchantMessageToXml();

				void testPsaiXmlGeneratorGUISkillMessageToXml();

				void testPsaiXmlGeneratorGUITargetUpdateMessageToXml();

				void testPsaiXmlGeneratorLootMessageToXml();

				void testPsaiXmlGeneratorQuestListMessageToXml();

				void testPsaiXmlGeneratorQuestRewardMessageToXml();

				void testPsaiXmlGeneratorUpdateObjectNameMessageToXml();

				void testPsaiXmlGeneratorViewItemDescriptionMessageToXml();

				void testPsaiXmlGeneratorViewItemUpdateMessageToXml();

				void testPsaiXmlGeneratorEquipmentMessageToXml();

	private:
		PsaiXmlGenerator& getGenerator();

		const std::string getExpectedXmlStringForChatMessageToXml();
};

#endif /* XMLTESTS_H_ */
