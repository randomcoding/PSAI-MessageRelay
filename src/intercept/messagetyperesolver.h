/*
 * messagetyperesolver.h
 *
 *  Created on: 02-May-2008
 *      Author: tim
 */

#ifndef MESSAGETYPERESOLVER_H_
#define MESSAGETYPERESOLVER_H_

#include <string>

class MessageTypeResolver
{
	public:
		/*MessageTypeResolver();
		virtual ~MessageTypeResolver();*/

		static const std::string typeNames[150];
};

const std::string MessageTypeResolver::typeNames[] = { "MSGTYPE_PING",
		"MSGTYPE_AUTHENTICATE",
		"MSGTYPE_PREAUTHENTICATE",
		"MSGTYPE_PREAUTHAPPROVED",
		"MSGTYPE_AUTHAPPROVED",
		"MSGTYPE_AUTHREJECTED",
		"MSGTYPE_DISCONNECT",
		"MSGTYPE_CHAT",
		"MSGTYPE_GUILDCMD",
		"MSGTYPE_USERCMD",
		"MSGTYPE_SYSTEM",
		"MSGTYPE_CHARREJECT",
		"MSGTYPE_DEAD_RECKONING",
		"MSGTYPE_CELPERSIST",
		"MSGTYPE_CONFIRMQUESTION",
		"MSGTYPE_USERACTION",
		"MSGTYPE_ADMINCMD",
		"MSGTYPE_GUIINTERACT",
		"MSGTYPE_GUIINVENTORY",
		"MSGTYPE_VIEW_ITEM",
		"MSGTYPE_VIEW_CONTAINER",
		"MSGTYPE_VIEW_SKETCH",
		"MSGTYPE_VIEW_ACTION_LOCATION",
		"MSGTYPE_READ_BOOK",
		"MSGTYPE_WRITE_BOOK",
		"MSGTYPE_UPDATE_ITEM",
		"MSGTYPE_MODE",
		"MSGTYPE_WEATHER",
		"MSGTYPE_NEWSECTOR",
		"MSGTYPE_GUIGUILD",
		"MSGTYPE_EQUIPMENT",
		"MSGTYPE_GUIEXCHANGE",
		"MSGTYPE_EXCHANGE_REQUEST",
		"MSGTYPE_EXCHANGE_ADD_ITEM",
		"MSGTYPE_EXCHANGE_REMOVE_ITEM",
		"MSGTYPE_EXCHANGE_ACCEPT",
		"MSGTYPE_EXCHANGE_STATUS",
		"MSGTYPE_EXCHANGE_END",
		"MSGTYPE_EXCHANGE_MONEY",
		"MSGTYPE_GUIMERCHANT",
		"MSGTYPE_GROUPCMD",
		"MSGTYPE_GUIGROUP",
		"MSGTYPE_STATDRUPDATE",
		"MSGTYPE_SPELL_BOOK",
		"MSGTYPE_GLPYH_REQUEST",
		"MSGTYPE_GLYPH_ASSEMBLE",
		"MSGTYPE_PURIFY_GLYPH",
		"MSGTYPE_SPELL_CAST",
		"MSGTYPE_SPELL_CANCEL",
		"MSGTYPE_EFFECT",
		"MSGTYPE_EFFECT_STOP",
		"MSGTYPE_NPCAUTHENT",
		"MSGTYPE_NPCLIST",
		"MSGTYPE_GUITARGETUPDATE",
		"MSGTYPE_MAPLIST",
		"MSGTYPE_NPCOMMANDLIST",
		"MSGTYPE_ALLENTITYPOS",
		"MSGTYPE_NEW_NPC",
		"MSGTYPE_PETITION",
		"MSGTYPE_MSGSTRINGS",
		"MSGTYPE_CHARACTERDATA",
		"MSGTYPE_AUTHCHARACTER",
		"MSGTYPE_AUTHCHARACTERAPPROVED",
		"MSGTYPE_CHAR_CREATE_CP",
		"MSGTYPE_COMBATEVENT",
		"MSGTYPE_LOOT",
		"MSGTYPE_LOOTITEM",
		"MSGTYPE_LOOTREMOVE",
		"MSGTYPE_GUISKILL",
		"MSGTYPE_OVERRIDEACTION",
		"MSGTYPE_QUESTLIST",
		"MSGTYPE_QUESTINFO",
		"MSGTYPE_GMGUI",
		"MSGTYPE_WORKCMD",
		"MSGTYPE_BUDDY_LIST",
		"MSGTYPE_BUDDY_STATUS",
		"MSGTYPE_MOTD",
		"MSGTYPE_MOTDREQUEST",
		"MSGTYPE_QUESTION",
		"MSGTYPE_QUESTIONRESPONSE",
		"MSGTYPE_SLOT_MOVEMENT",
		"MSGTYPE_QUESTIONCANCEL",
		"MSGTYPE_GUILDMOTDSET",
		"MSGTYPE_PLAYSOUND",
		"MSGTYPE_CHARACTERDETAILS",
		"MSGTYPE_CHARDETAILSREQUEST",
		"MSGTYPE_CHARDESCUPDATE",
		"MSGTYPE_FACTION_INFO",
		"MSGTYPE_QUESTREWARD",
		"MSGTYPE_NAMECHANGE",
		"MSGTYPE_GUILDCHANGE",
		"MSGTYPE_LOCKPICK",
		"MSGTYPE_GMSPAWNITEMS",
		"MSGTYPE_GMSPAWNTYPES",
		"MSGTYPE_GMSPAWNITEM",
		"MSGTYPE_ADVICE",
		"MSGTYPE_ACTIVEMAGIC",
		"MSGTYPE_GROUPCHANGE",
		"MSGTYPE_MAPACTION",
		"MSGTYPE_CLIENTSTATUS",
		"MSGTYPE_TUTORIAL",
		"MSGTYPE_BANKING",
		"MSGTYPE_REQUESTMOVEMENTS",
		"MSGTYPE_MOVEINFO",
		"MSGTYPE_MOVEMOD",
		"MSGTYPE_MOVELOCK",
		"MSGTYPE_CHAR_DELETE",
		"MSGTYPE_CHAR_CREATE_PARENTS",
		"MSGTYPE_CHAR_CREATE_CHILDHOOD",
		"MSGTYPE_CHAR_CREATE_LIFEEVENTS",
		"MSGTYPE_CHAR_CREATE_UPLOAD",
		"MSGTYPE_CHAR_CREATE_VERIFY",
		"MSGTYPE_CHAR_CREATE_NAME",
		"MSGTYPE_PERSIST_WORLD_REQUEST",
		"MSGTYPE_PERSIST_WORLD",
		"MSGTYPE_PERSIST_ACTOR_REQUEST",
		"MSGTYPE_PERSIST_ACTOR",
		"MSGTYPE_PERSIST_ITEM",
		"MSGTYPE_PERSIST_ACTIONLOCATION",
		"MSGTYPE_PERSIST_ALL",
		"MSGTYPE_REMOVE_OBJECT",
		"MSGTYPE_CHANGE_TRAIT",
		"MSGTYPE_DAMAGE_EVENT",
		"MSGTYPE_DEATH_EVENT",
		"MSGTYPE_TARGET_EVENT",
		"MSGTYPE_ZPOINT_EVENT",
		"MSGTYPE_BUY_EVENT",
		"MSGTYPE_SELL_EVENT",
		"MSGTYPE_CONNECT_EVENT",
		"MSGTYPE_MOVEMENT_EVENT",
		"MSGTYPE_GENERIC_EVENT",
		"MSGTYPE_SOUND_EVENT",
		"MSGTYPE_CHAR_CREATE_TRAITS",
		"MSGTYPE_STATS",
		"MSGTYPE_NPC_SETOWNER",
		"MSGTYPE_PET_COMMAND",
		"MSGTYPE_PET_SKILL",
		"MSGTYPE_CRAFT_INFO",
		"MSGTYPE_PETITION_REQUEST",
		"MSGTYPE_HEART_BEAT",
		"MSGTYPE_NPC_COMMAND",
		"MSGTYPE_MINIGAME_STARTSTOP",
		"MSGTYPE_MINIGAME_BOARD",
		"MSGTYPE_MINIGAME_UPDATE",
		"MSGTYPE_ENTRANCE",
		"MSGTYPE_GMEVENT_LIST",
		"MSGTYPE_GMEVENT_INFO",
		"MSGTYPE_SEQUENCE",
		"MSGTYPE_NPCRACELIST",
		"MSGTYPE_INTRODUCTION" };

#endif /* MESSAGETYPERESOLVER_H_ */
