/*
 * PsaiXmlConstants.h
 *
 * Defines constants for all type, element and attribute names used in the message schema
 *
 *  Created on: 30-Aug-2008
 *      Author: tim
 */

#ifndef PSAIXMLCONSTANTS_H_
#define PSAIXMLCONSTANTS_H_

#include <string.h>

class PsaiXmlConstants
{
	public:

		// support type names
		const std::string VECTOR_3D("vector3d");
		const std::string CONTAINER_CONTENTS("containercontents");
		const std::string ITEM_DESCRIPTION("itemdescription");
		const std::string NETWORK_DETAIL_SKILL("networkdetailskill");
		const std::string NET_WEATHER_INFO("netweatherinfo");
		const std::string PS_MONEY("psmoney");

		// enumerated types
		const std::string MSGTYPE_PING("MSGTYPE_PING");
		const std::string MSGTYPE_AUTHENTICATE("MSGTYPE_AUTHENTICATE");
		const std::string MSGTYPE_PREAUTHENTICATE("MSGTYPE_PREAUTHENTICATE");
		const std::string MSGTYPE_PREAUTHAPPROVED("MSGTYPE_PREAUTHAPPROVED");
		const std::string MSGTYPE_AUTHAPPROVED("MSGTYPE_AUTHAPPROVED");
		const std::string MSGTYPE_AUTHREJECTED("MSGTYPE_AUTHREJECTED");
		const std::string MSGTYPE_DISCONNECT("MSGTYPE_DISCONNECT");
		const std::string MSGTYPE_CHAT("MSGTYPE_CHAT");
		const std::string MSGTYPE_GUILDCMD("MSGTYPE_GUILDCMD");
		const std::string MSGTYPE_USERCMD("MSGTYPE_USERCMD");
		const std::string MSGTYPE_SYSTEM("MSGTYPE_SYSTEM");
		const std::string MSGTYPE_CHARREJECT("MSGTYPE_CHARREJECT");
		const std::string MSGTYPE_DEAD_RECKONING("MSGTYPE_DEAD_RECKONING");
		const std::string MSGTYPE_CELPERSIST("MSGTYPE_CELPERSIST");
		const std::string MSGTYPE_CONFIRMQUESTION("MSGTYPE_CONFIRMQUESTION");
		const std::string MSGTYPE_USERACTION("MSGTYPE_USERACTION");
		const std::string MSGTYPE_ADMINCMD("MSGTYPE_ADMINCMD");
		const std::string MSGTYPE_GUIINTERACT("MSGTYPE_GUIINTERACT");
		const std::string MSGTYPE_GUIINVENTORY("MSGTYPE_GUIINVENTORY");
		const std::string MSGTYPE_VIEW_ITEM("MSGTYPE_VIEW_ITEM");
		const std::string MSGTYPE_VIEW_CONTAINER("MSGTYPE_VIEW_CONTAINER");
		const std::string MSGTYPE_VIEW_SKETCH("MSGTYPE_VIEW_SKETCH");
		const std::string MSGTYPE_VIEW_ACTION_LOCATION("MSGTYPE_VIEW_ACTION_LOCATION");
		const std::string MSGTYPE_READ_BOOK("MSGTYPE_READ_BOOK");
		const std::string MSGTYPE_WRITE_BOOK("MSGTYPE_WRITE_BOOK");
		const std::string MSGTYPE_UPDATE_ITEM("MSGTYPE_UPDATE_ITEM");
		const std::string MSGTYPE_MODE("MSGTYPE_MODE");
		const std::string MSGTYPE_WEATHER("MSGTYPE_WEATHER");
		const std::string MSGTYPE_NEWSECTOR("MSGTYPE_NEWSECTOR");
		const std::string MSGTYPE_GUIGUILD("MSGTYPE_GUIGUILD");
		const std::string MSGTYPE_EQUIPMENT("MSGTYPE_EQUIPMENT");
		const std::string MSGTYPE_GUIEXCHANGE("MSGTYPE_GUIEXCHANGE");
		const std::string MSGTYPE_EXCHANGE_REQUEST("MSGTYPE_EXCHANGE_REQUEST");
		const std::string MSGTYPE_EXCHANGE_ADD_ITEM("MSGTYPE_EXCHANGE_ADD_ITEM");
		const std::string MSGTYPE_EXCHANGE_REMOVE_ITEM("MSGTYPE_EXCHANGE_REMOVE_ITEM");
		const std::string MSGTYPE_EXCHANGE_ACCEPT("MSGTYPE_EXCHANGE_ACCEPT");
		const std::string MSGTYPE_EXCHANGE_STATUS("MSGTYPE_EXCHANGE_STATUS");
		const std::string MSGTYPE_EXCHANGE_END("MSGTYPE_EXCHANGE_END");
		const std::string MSGTYPE_EXCHANGE_MONEY("MSGTYPE_EXCHANGE_MONEY");
		const std::string MSGTYPE_GUIMERCHANT("MSGTYPE_GUIMERCHANT");
		const std::string MSGTYPE_GROUPCMD("MSGTYPE_GROUPCMD");
		const std::string MSGTYPE_GUIGROUP("MSGTYPE_GUIGROUP");
		const std::string MSGTYPE_STATDRUPDATE("MSGTYPE_STATDRUPDATE");
		const std::string MSGTYPE_SPELL_BOOK("MSGTYPE_SPELL_BOOK");
		const std::string MSGTYPE_GLYPH_REQUEST("MSGTYPE_GLYPH_REQUEST");
		const std::string MSGTYPE_GLYPH_ASSEMBLE("MSGTYPE_GLYPH_ASSEMBLE");
		const std::string MSGTYPE_PURIFY_GLYPH("MSGTYPE_PURIFY_GLYPH");
		const std::string MSGTYPE_SPELL_CAST("MSGTYPE_SPELL_CAST");
		const std::string MSGTYPE_SPELL_CANCEL("MSGTYPE_SPELL_CANCEL");
		const std::string MSGTYPE_EFFECT("MSGTYPE_EFFECT");
		const std::string MSGTYPE_EFFECT_STOP("MSGTYPE_EFFECT_STOP");
		const std::string MSGTYPE_NPCAUTHENT("MSGTYPE_NPCAUTHENT");
		const std::string MSGTYPE_NPCLIST("MSGTYPE_NPCLIST");
		const std::string MSGTYPE_GUITARGETUPDATE("MSGTYPE_GUITARGETUPDATE");
		const std::string MSGTYPE_MAPLIST("MSGTYPE_MAPLIST");
		const std::string MSGTYPE_NPCOMMANDLIST("MSGTYPE_NPCOMMANDLIST");
		const std::string MSGTYPE_ALLENTITYPOS("MSGTYPE_ALLENTITYPOS");
		const std::string MSGTYPE_NEW_NPC("MSGTYPE_NEW_NPC");
		const std::string MSGTYPE_PETITION("MSGTYPE_PETITION");
		const std::string MSGTYPE_MSGSTRINGS("MSGTYPE_MSGSTRINGS");
		const std::string MSGTYPE_CHARACTERDATA("MSGTYPE_CHARACTERDATA");
		const std::string MSGTYPE_AUTHCHARACTER("MSGTYPE_AUTHCHARACTER");
		const std::string MSGTYPE_AUTHCHARACTERAPPROVED("MSGTYPE_AUTHCHARACTERAPPROVED");
		const std::string MSGTYPE_CHAR_CREATE_CP("MSGTYPE_CHAR_CREATE_CP");
		const std::string MSGTYPE_COMBATEVENT("MSGTYPE_COMBATEVENT");
		const std::string MSGTYPE_LOOT("MSGTYPE_LOOT");
		const std::string MSGTYPE_LOOTITEM("MSGTYPE_LOOTITEM");
		const std::string MSGTYPE_LOOTREMOVE("MSGTYPE_LOOTREMOVE");
		const std::string MSGTYPE_GUISKILL("MSGTYPE_GUISKILL");
		const std::string MSGTYPE_OVERRIDEACTION("MSGTYPE_OVERRIDEACTION");
		const std::string MSGTYPE_QUESTLIST("MSGTYPE_QUESTLIST");
		const std::string MSGTYPE_QUESTINFO("MSGTYPE_QUESTINFO");
		const std::string MSGTYPE_GMGUI("MSGTYPE_GMGUI");
		const std::string MSGTYPE_WORKCMD("MSGTYPE_WORKCMD");
		const std::string MSGTYPE_BUDDY_LIST("MSGTYPE_BUDDY_LIST");
		const std::string MSGTYPE_BUDDY_STATUS("MSGTYPE_BUDDY_STATUS");
		const std::string MSGTYPE_MOTD("MSGTYPE_MOTD");
		const std::string MSGTYPE_MOTDREQUEST("MSGTYPE_MOTDREQUEST");
		const std::string MSGTYPE_QUESTION("MSGTYPE_QUESTION");
		const std::string MSGTYPE_QUESTIONRESPONSE("MSGTYPE_QUESTIONRESPONSE");
		const std::string MSGTYPE_SLOT_MOVEMENT("MSGTYPE_SLOT_MOVEMENT");
		const std::string MSGTYPE_QUESTIONCANCEL("MSGTYPE_QUESTIONCANCEL");
		const std::string MSGTYPE_GUILDMOTDSET("MSGTYPE_GUILDMOTDSET");
		const std::string MSGTYPE_PLAYSOUND("MSGTYPE_PLAYSOUND");
		const std::string MSGTYPE_CHARACTERDETAILS("MSGTYPE_CHARACTERDETAILS");
		const std::string MSGTYPE_CHARDETAILSREQUEST("MSGTYPE_CHARDETAILSREQUEST");
		const std::string MSGTYPE_CHARDESCUPDATE("MSGTYPE_CHARDESCUPDATE");
		const std::string MSGTYPE_FACTION_INFO("MSGTYPE_FACTION_INFO");
		const std::string MSGTYPE_QUESTREWARD("MSGTYPE_QUESTREWARD");
		const std::string MSGTYPE_NAMECHANGE("MSGTYPE_NAMECHANGE");
		const std::string MSGTYPE_GUILDCHANGE("MSGTYPE_GUILDCHANGE");
		const std::string MSGTYPE_LOCKPICK("MSGTYPE_LOCKPICK");
		const std::string MSGTYPE_GMSPAWNITEMS("MSGTYPE_GMSPAWNITEMS");
		const std::string MSGTYPE_GMSPAWNTYPES("MSGTYPE_GMSPAWNTYPES");
		const std::string MSGTYPE_GMSPAWNITEM("MSGTYPE_GMSPAWNITEM");
		const std::string MSGTYPE_ADVICE("MSGTYPE_ADVICE");
		const std::string MSGTYPE_ACTIVEMAGIC("MSGTYPE_ACTIVEMAGIC");
		const std::string MSGTYPE_GROUPCHANGE("MSGTYPE_GROUPCHANGE");
		const std::string MSGTYPE_MAPACTION("MSGTYPE_MAPACTION");
		const std::string MSGTYPE_CLIENTSTATUS("MSGTYPE_CLIENTSTATUS");
		const std::string MSGTYPE_TUTORIAL("MSGTYPE_TUTORIAL");
		const std::string MSGTYPE_BANKING("MSGTYPE_BANKING");
		const std::string MSGTYPE_REQUESTMOVEMENTS("MSGTYPE_REQUESTMOVEMENTS");
		const std::string MSGTYPE_MOVEINFO("MSGTYPE_MOVEINFO");
		const std::string MSGTYPE_MOVEMOD("MSGTYPE_MOVEMOD");
		const std::string MSGTYPE_MOVELOCK("MSGTYPE_MOVELOCK");
		const std::string MSGTYPE_CHAR_DELETE("MSGTYPE_CHAR_DELETE");
		const std::string MSGTYPE_CHAR_CREATE_PARENTS("MSGTYPE_CHAR_CREATE_PARENTS");
		const std::string MSGTYPE_CHAR_CREATE_CHILDHOOD("MSGTYPE_CHAR_CREATE_CHILDHOOD");
		const std::string MSGTYPE_CHAR_CREATE_LIFEEVENTS("MSGTYPE_CHAR_CREATE_LIFEEVENTS");
		const std::string MSGTYPE_CHAR_CREATE_UPLOAD("MSGTYPE_CHAR_CREATE_UPLOAD");
		const std::string MSGTYPE_CHAR_CREATE_VERIFY("MSGTYPE_CHAR_CREATE_VERIFY");
		const std::string MSGTYPE_CHAR_CREATE_NAME("MSGTYPE_CHAR_CREATE_NAME");
		const std::string MSGTYPE_PERSIST_WORLD_REQUEST("MSGTYPE_PERSIST_WORLD_REQUEST");
		const std::string MSGTYPE_PERSIST_WORLD("MSGTYPE_PERSIST_WORLD");
		const std::string MSGTYPE_PERSIST_ACTOR_REQUEST("MSGTYPE_PERSIST_ACTOR_REQUEST");
		const std::string MSGTYPE_PERSIST_ACTOR("MSGTYPE_PERSIST_ACTOR");
		const std::string MSGTYPE_PERSIST_ITEM("MSGTYPE_PERSIST_ITEM");
		const std::string MSGTYPE_PERSIST_ACTIONLOCATION("MSGTYPE_PERSIST_ACTIONLOCATION");
		const std::string MSGTYPE_PERSIST_ALL("MSGTYPE_PERSIST_ALL");
		const std::string MSGTYPE_REMOVE_OBJECT("MSGTYPE_REMOVE_OBJECT");
		const std::string MSGTYPE_CHANGE_TRAIT("MSGTYPE_CHANGE_TRAIT");
		const std::string MSGTYPE_DAMAGE_EVENT("MSGTYPE_DAMAGE_EVENT");
		const std::string MSGTYPE_DEATH_EVENT("MSGTYPE_DEATH_EVENT");
		const std::string MSGTYPE_TARGET_EVENT("MSGTYPE_TARGET_EVENT");
		const std::string MSGTYPE_ZPOINT_EVENT("MSGTYPE_ZPOINT_EVENT");
		const std::string MSGTYPE_BUY_EVENT("MSGTYPE_BUY_EVENT");
		const std::string MSGTYPE_SELL_EVENT("MSGTYPE_SELL_EVENT");
		const std::string MSGTYPE_PICKUP_EVENT("MSGTYPE_PICKUP_EVENT");
		const std::string MSGTYPE_DROP_EVENT("MSGTYPE_DROP_EVENT");
		const std::string MSGTYPE_LOOT_EVENT("MSGTYPE_LOOT_EVENT");
		const std::string MSGTYPE_CONNECT_EVENT("MSGTYPE_CONNECT_EVENT");
		const std::string MSGTYPE_MOVEMENT_EVENT("MSGTYPE_MOVEMENT_EVENT");
		const std::string MSGTYPE_GENERIC_EVENT("MSGTYPE_GENERIC_EVENT");
		const std::string MSGTYPE_SOUND_EVENT("MSGTYPE_SOUND_EVENT");
		const std::string MSGTYPE_CHAR_CREATE_TRAITS("MSGTYPE_CHAR_CREATE_TRAITS");
		const std::string MSGTYPE_STATS("MSGTYPE_STATS");
		const std::string MSGTYPE_NPC_SETOWNER("MSGTYPE_NPC_SETOWNER");
		const std::string MSGTYPE_PET_COMMAND("MSGTYPE_PET_COMMAND");
		const std::string MSGTYPE_PET_SKILL("MSGTYPE_PET_SKILL");
		const std::string MSGTYPE_CRAFT_INFO("MSGTYPE_CRAFT_INFO");
		const std::string MSGTYPE_PETITION_REQUEST("MSGTYPE_PETITION_REQUEST");
		const std::string MSGTYPE_HEART_BEAT("MSGTYPE_HEART_BEAT");
		const std::string MSGTYPE_NPC_COMMAND("MSGTYPE_NPC_COMMAND");
		const std::string MSGTYPE_MINIGAME_STARTSTOP("MSGTYPE_MINIGAME_STARTSTOP");
		const std::string MSGTYPE_MINIGAME_BOARD("MSGTYPE_MINIGAME_BOARD");
		const std::string MSGTYPE_MINIGAME_UPDATE("MSGTYPE_MINIGAME_UPDATE");
		const std::string MSGTYPE_ENTRANCE("MSGTYPE_ENTRANCE");
		const std::string MSGTYPE_GMEVENT_LIST("MSGTYPE_GMEVENT_LIST");
		const std::string MSGTYPE_GMEVENT_INFO("MSGTYPE_GMEVENT_INFO");
		const std::string MSGTYPE_SEQUENCE("MSGTYPE_SEQUENCE");
		const std::string MSGTYPE_NPCRACELIST("MSGTYPE_NPCRACELIST");
		const std::string MSGTYPE_INTRODUCTION("MSGTYPE_INTRODUCTION");

		const std::string CHAT_SYSTEM("CHAT_SYSTEM");
		const std::string CHAT_SAY("CHAT_SAY");
		const std::string CHAT_TELL("CHAT_TELL");
		const std::string CHAT_GROUP("CHAT_GROUP");
		const std::string CHAT_GUILD("CHAT_GUILD");
		const std::string CHAT_AUCTION("CHAT_AUCTION");
		const std::string CHAT_SHOUT("CHAT_SHOUT");
		const std::string CHAT_ME("CHAT_ME");
		const std::string CHAT_TELLSELF("CHAT_TELLSELF");
		const std::string CHAT_REPORT("CHAT_REPORT");
		const std::string CHAT_ADVISOR("CHAT_ADVISOR");
		const std::string CHAT_ADVICE("CHAT_ADVICE");
		const std::string CHAT_ADVICE_LIST("CHAT_ADVICE_LIST");
		const std::string CHAT_SERVER_TELL("CHAT_SERVER_TELL");
		const std::string CHAT_GM("CHAT_GM");
		const std::string CHAT_SERVER_INFO("CHAT_SERVER_INFO");
		const std::string CHAT_MY("CHAT_MY");
		const std::string CHAT_NPC("CHAT_NPC");
		const std::string CHAT_SYSTEM_BASE("CHAT_SYSTEM_BASE");
		const std::string CHAT_PET_ACTION("CHAT_PET_ACTION");
		const std::string CHAT_NPC_ME("CHAT_NPC_ME");
		const std::string CHAT_NPC_MY("CHAT_NPC_MY");
		const std::string CHAT_NPC_NARRATE("CHAT_NPC_NARRATE");

		const std::string COMBAT_DODGE("COMBAT_DODGE");
		const std::string COMBAT_BLOCK("COMBAT_BLOCK");
		const std::string COMBAT_DAMAGE("COMBAT_DAMAGE");
		const std::string COMBAT_MISS("COMBAT_MISS");
		const std::string COMBAT_OUTOFRANGE("COMBAT_OUTOFRANGE");
		const std::string COMBAT_DEATH("COMBAT_DEATH");
		const std::string COMBAT_DAMAGE_NEARLY_DEAD("COMBAT_DAMAGE_NEARLY_DEAD");

		const std::string NONE("NONE");
		const std::string NOPICKUP("NOPICKUP");
		const std::string COLLIDE("COLLIDE");

		const std::string NONE("NONE");
		const std::string NPC("NPC");
		const std::string NAME_KNOWN("NAME_KNOWN");

		const std::string NOT_MOVING("NOT_MOVING");
		const std::string ACTOR_MODE("ACTOR_MODE");
		const std::string ANG_VELOCITY("ANG_VELOCITY");
		const std::string X_VELOCITY("X_VELOCITY");
		const std::string Y_VELOCITY("Y_VELOCITY");
		const std::string Z_VELOCITY("Z_VELOCITY");
		const std::string X_WORLDVELOCITY("X_WORLDVELOCITY");
		const std::string Y_WORLDVELOCITY("Y_WORLDVELOCITY");
		const std::string Z_WORLDVELOCITY("Z_WORLDVELOCITY");
		const std::string ALL_DATA("ALL_DATA");

		const std::string EQUIP("EQUIP");
		const std::string DEEQUIP("DEEQUIP");

		const std::string PEACE("PEACE");
		const std::string COMBAT("COMBAT");
		const std::string SPELL_CASTING("SPELL_CASTING");
		const std::string WORK("WORK");
		const std::string DEAD("DEAD");
		const std::string SIT("SIT");
		const std::string OVERWEIGHT("OVERWEIGHT");
		const std::string EXHAUSTED("EXHAUSTED");
		const std::string DEFEATED("DEFEATED");

		const std::string OFFER_REWARDS("OFFER_REWARDS");
		const std::string SELECT_REWARDS("SELECT_REWARDS");

		const std::string REQUEST("REQUEST");
		const std::string DESCRIPTION("DESCRIPTION");

		const std::string MSG_ERROR("MSG_ERROR");
		const std::string MSG_INFO("MSG_INFO");
		const std::string MSG_INFO_SERVER("MSG_INFO_SERVER");
		const std::string MSG_RESULT("MSG_RESULT");
		const std::string MSG_OK("MSG_OK");
		const std::string MSG_WHO("MSG_WHO");
		const std::string MSG_ACK("MSG_ACK");
		const std::string MSG_INFO_BASE("MSG_INFO_BASE");
		const std::string MSG_COMBAT("MSG_COMBAT");
		const std::string MSG_COMBAT_DODGE("MSG_COMBAT_DODGE");
		const std::string MSG_COMBAT_BLOCK("MSG_COMBAT_BLOCK");
		const std::string MSG_COMBAT_HITYOU("MSG_COMBAT_HITYOU");
		const std::string MSG_COMBAT_HITOTHER("MSG_COMBAT_HITOTHER");
		const std::string MSG_COMBAT_YOURHIT("MSG_COMBAT_YOURHIT");
		const std::string MSG_COMBAT_OTHERHIT("MSG_COMBAT_OTHERHIT");
		const std::string MSG_COMBAT_MISS("MSG_COMBAT_MISS");
		const std::string MSG_COMBAT_OWN_DEATH("MSG_COMBAT_OWN_DEATH");
		const std::string MSG_COMBAT_DEATH("MSG_COMBAT_DEATH");
		const std::string MSG_COMBAT_VICTORY("MSG_COMBAT_VICTORY");
		const std::string MSG_COMBAT_STANCE("MSG_COMBAT_STANCE");
		const std::string MSG_COMBAT_NEARLY_DEAD("MSG_COMBAT_NEARLY_DEAD");
		const std::string MSG_LOOT("MSG_LOOT");
		const std::string MSG_SEC("MSG_SEC");
		const std::string SEC_LEVEL0("SEC_LEVEL0");
		const std::string SEC_LEVEL1("SEC_LEVEL1");
		const std::string SEC_LEVEL2("SEC_LEVEL2");
		const std::string SEC_LEVEL3("SEC_LEVEL3");
		const std::string SEC_LEVEL4("SEC_LEVEL4");
		const std::string MSG_PURCHASE("MSG_PURCHASE");

		const std::string LIST("LIST");
		const std::string REQUEST("request");
		const std::string UPDATE_REQUEST("UPDATE_REQUEST");
		const std::string UPDATE_LIST("UPDATE_LIST");

		const std::string DAYNIGHT("DAYNIGHT");
		const std::string WEATHER("WEATHER");

		const std::string RAIN("RAIN");
		const std::string SNOW("SNOW");
		const std::string FOG("FOG");
		const std::string LIGHTNING("LIGHTNING");

		const std::string ADD_CATEGORY("ADD_CATEGORY");
		const std::string REMOVE_CATEGORY("REMOVE_CATEGORY");

		const std::string PICKUP("PICKUP");
		const std::string EXAMINE("EXAMINE");
		const std::string UNLOCK("UNLOCK");
		const std::string LOOT("LOOT");
		const std::string BUYSELL("BUYSELL");
		const std::string GIVE("GIVE");
		const std::string CLOSE("CLOSE");
		const std::string USE("USE");
		const std::string PLAYERDESC("PLAYERDESC");
		const std::string ATTACK("ATTACK");
		const std::string COMBINE("COMBINE");
		const std::string EXCHANGE("EXCHANGE");
		const std::string TRAIN("TRAIN");
		const std::string NPCTALK("NPCTALK");
		const std::string VIEWSTATS("VIEWSTATS");
		const std::string DISMISS("DISMISS");
		const std::string MARRIAGE("MARRIAGE");
		const std::string DIVORCE("DIVORCE");
		const std::string PLAYGAME("PLAYGAME");
		const std::string ENTER("ENTER");
		const std::string LOCK("LOCK");
		const std::string ENTERLOCKED("ENTERLOCKED");
		const std::string BANK("BANK");
		const std::string INTRODUCE("INTRODUCE");

		const std::string REQUEST("REQUEST");
		const std::string MERCHANT("MERCHANT");
		const std::string CATEGORIES("CATEGORIES");
		const std::string CATEGORY("CATEGORY");
		const std::string MONEY("MONEY");
		const std::string ITEMS("ITEMS");
		const std::string BUY("BUY");
		const std::string SELL("SELL");
		const std::string VIEW("VIEW");
		const std::string CANCEL("CANCEL");

		const std::string REQUEST("REQUEST");
		const std::string BUY_SKILL("BUY_SKILL");
		const std::string SKILL_LIST("SKILL_LIST");
		const std::string SKILL_SELECTED("SKILL_SELECTED");
		const std::string DESCRIPTION("DESCRIPTION");
		const std::string QUIT("QUIT");

		// Message types and elements
	};

#endif /* PSAIXMLCONSTANTS_H_ */
