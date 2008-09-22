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

#include <string>

class PsaiXmlConstants
{
	public:
		// support type names
		static const std::string TYPE_VECTOR_3D;
		static const std::string TYPE_CONTAINER_CONTENTS;
		static const std::string TYPE_ITEM_DESCRIPTION;
		static const std::string TYPE_NETWORK_DETAIL_SKILL;
		static const std::string TYPE_NET_WEATHER_INFO;
		static const std::string TYPE_PS_MONEY;

		// enumerated types

		// Message Class Types
		static const std::string MSGTYPE_PING;
		static const std::string MSGTYPE_AUTHENTICATE;
		static const std::string MSGTYPE_PREAUTHENTICATE;
		static const std::string MSGTYPE_PREAUTHAPPROVED;
		static const std::string MSGTYPE_AUTHAPPROVED;
		static const std::string MSGTYPE_AUTHREJECTED;
		static const std::string MSGTYPE_DISCONNECT;
		static const std::string MSGTYPE_CHAT;
		static const std::string MSGTYPE_GUILDCMD;
		static const std::string MSGTYPE_USERCMD;
		static const std::string MSGTYPE_SYSTEM;
		static const std::string MSGTYPE_CHARREJECT;
		static const std::string MSGTYPE_DEAD_RECKONING;
		static const std::string MSGTYPE_CELPERSIST;
		static const std::string MSGTYPE_CONFIRMQUESTION;
		static const std::string MSGTYPE_USERACTION;
		static const std::string MSGTYPE_ADMINCMD;
		static const std::string MSGTYPE_GUIINTERACT;
		static const std::string MSGTYPE_GUIINVENTORY;
		static const std::string MSGTYPE_VIEW_ITEM;
		static const std::string MSGTYPE_VIEW_CONTAINER;
		static const std::string MSGTYPE_VIEW_SKETCH;
		static const std::string MSGTYPE_VIEW_ACTION_LOCATION;
		static const std::string MSGTYPE_READ_BOOK;
		static const std::string MSGTYPE_WRITE_BOOK;
		static const std::string MSGTYPE_UPDATE_ITEM;
		static const std::string MSGTYPE_MODE;
		static const std::string MSGTYPE_WEATHER;
		static const std::string MSGTYPE_NEWSECTOR;
		static const std::string MSGTYPE_GUIGUILD;
		static const std::string MSGTYPE_EQUIPMENT;
		static const std::string MSGTYPE_GUIEXCHANGE;
		static const std::string MSGTYPE_EXCHANGE_REQUEST;
		static const std::string MSGTYPE_EXCHANGE_ADD_ITEM;
		static const std::string MSGTYPE_EXCHANGE_REMOVE_ITEM;
		static const std::string MSGTYPE_EXCHANGE_ACCEPT;
		static const std::string MSGTYPE_EXCHANGE_STATUS;
		static const std::string MSGTYPE_EXCHANGE_END;
		static const std::string MSGTYPE_EXCHANGE_MONEY;
		static const std::string MSGTYPE_GUIMERCHANT;
		static const std::string MSGTYPE_GROUPCMD;
		static const std::string MSGTYPE_GUIGROUP;
		static const std::string MSGTYPE_STATDRUPDATE;
		static const std::string MSGTYPE_SPELL_BOOK;
		static const std::string MSGTYPE_GLYPH_REQUEST;
		static const std::string MSGTYPE_GLYPH_ASSEMBLE;
		static const std::string MSGTYPE_PURIFY_GLYPH;
		static const std::string MSGTYPE_SPELL_CAST;
		static const std::string MSGTYPE_SPELL_CANCEL;
		static const std::string MSGTYPE_EFFECT;
		static const std::string MSGTYPE_EFFECT_STOP;
		static const std::string MSGTYPE_NPCAUTHENT;
		static const std::string MSGTYPE_NPCLIST;
		static const std::string MSGTYPE_GUITARGETUPDATE;
		static const std::string MSGTYPE_MAPLIST;
		static const std::string MSGTYPE_NPCOMMANDLIST;
		static const std::string MSGTYPE_ALLENTITYPOS;
		static const std::string MSGTYPE_NEW_NPC;
		static const std::string MSGTYPE_PETITION;
		static const std::string MSGTYPE_MSGSTRINGS;
		static const std::string MSGTYPE_CHARACTERDATA;
		static const std::string MSGTYPE_AUTHCHARACTER;
		static const std::string MSGTYPE_AUTHCHARACTERAPPROVED;
		static const std::string MSGTYPE_CHAR_CREATE_CP;
		static const std::string MSGTYPE_COMBATEVENT;
		static const std::string MSGTYPE_LOOT;
		static const std::string MSGTYPE_LOOTITEM;
		static const std::string MSGTYPE_LOOTREMOVE;
		static const std::string MSGTYPE_GUISKILL;
		static const std::string MSGTYPE_OVERRIDEACTION;
		static const std::string MSGTYPE_QUESTLIST;
		static const std::string MSGTYPE_QUESTINFO;
		static const std::string MSGTYPE_GMGUI;
		static const std::string MSGTYPE_WORKCMD;
		static const std::string MSGTYPE_BUDDY_LIST;
		static const std::string MSGTYPE_BUDDY_STATUS;
		static const std::string MSGTYPE_MOTD;
		static const std::string MSGTYPE_MOTDREQUEST;
		static const std::string MSGTYPE_QUESTION;
		static const std::string MSGTYPE_QUESTIONRESPONSE;
		static const std::string MSGTYPE_SLOT_MOVEMENT;
		static const std::string MSGTYPE_QUESTIONCANCEL;
		static const std::string MSGTYPE_GUILDMOTDSET;
		static const std::string MSGTYPE_PLAYSOUND;
		static const std::string MSGTYPE_CHARACTERDETAILS;
		static const std::string MSGTYPE_CHARDETAILSREQUEST;
		static const std::string MSGTYPE_CHARDESCUPDATE;
		static const std::string MSGTYPE_FACTION_INFO;
		static const std::string MSGTYPE_QUESTREWARD;
		static const std::string MSGTYPE_NAMECHANGE;
		static const std::string MSGTYPE_GUILDCHANGE;
		static const std::string MSGTYPE_LOCKPICK;
		static const std::string MSGTYPE_GMSPAWNITEMS;
		static const std::string MSGTYPE_GMSPAWNTYPES;
		static const std::string MSGTYPE_GMSPAWNITEM;
		static const std::string MSGTYPE_ADVICE;
		static const std::string MSGTYPE_ACTIVEMAGIC;
		static const std::string MSGTYPE_GROUPCHANGE;
		static const std::string MSGTYPE_MAPACTION;
		static const std::string MSGTYPE_CLIENTSTATUS;
		static const std::string MSGTYPE_TUTORIAL;
		static const std::string MSGTYPE_BANKING;
		static const std::string MSGTYPE_REQUESTMOVEMENTS;
		static const std::string MSGTYPE_MOVEINFO;
		static const std::string MSGTYPE_MOVEMOD;
		static const std::string MSGTYPE_MOVELOCK;
		static const std::string MSGTYPE_CHAR_DELETE;
		static const std::string MSGTYPE_CHAR_CREATE_PARENTS;
		static const std::string MSGTYPE_CHAR_CREATE_CHILDHOOD;
		static const std::string MSGTYPE_CHAR_CREATE_LIFEEVENTS;
		static const std::string MSGTYPE_CHAR_CREATE_UPLOAD;
		static const std::string MSGTYPE_CHAR_CREATE_VERIFY;
		static const std::string MSGTYPE_CHAR_CREATE_NAME;
		static const std::string MSGTYPE_PERSIST_WORLD_REQUEST;
		static const std::string MSGTYPE_PERSIST_WORLD;
		static const std::string MSGTYPE_PERSIST_ACTOR_REQUEST;
		static const std::string MSGTYPE_PERSIST_ACTOR;
		static const std::string MSGTYPE_PERSIST_ITEM;
		static const std::string MSGTYPE_PERSIST_ACTIONLOCATION;
		static const std::string MSGTYPE_PERSIST_ALL;
		static const std::string MSGTYPE_REMOVE_OBJECT;
		static const std::string MSGTYPE_CHANGE_TRAIT;
		static const std::string MSGTYPE_DAMAGE_EVENT;
		static const std::string MSGTYPE_DEATH_EVENT;
		static const std::string MSGTYPE_TARGET_EVENT;
		static const std::string MSGTYPE_ZPOINT_EVENT;
		static const std::string MSGTYPE_BUY_EVENT;
		static const std::string MSGTYPE_SELL_EVENT;
		static const std::string MSGTYPE_PICKUP_EVENT;
		static const std::string MSGTYPE_DROP_EVENT;
		static const std::string MSGTYPE_LOOT_EVENT;
		static const std::string MSGTYPE_CONNECT_EVENT;
		static const std::string MSGTYPE_MOVEMENT_EVENT;
		static const std::string MSGTYPE_GENERIC_EVENT;
		static const std::string MSGTYPE_SOUND_EVENT;
		static const std::string MSGTYPE_CHAR_CREATE_TRAITS;
		static const std::string MSGTYPE_STATS;
		static const std::string MSGTYPE_NPC_SETOWNER;
		static const std::string MSGTYPE_PET_COMMAND;
		static const std::string MSGTYPE_PET_SKILL;
		static const std::string MSGTYPE_CRAFT_INFO;
		static const std::string MSGTYPE_PETITION_REQUEST;
		static const std::string MSGTYPE_HEART_BEAT;
		static const std::string MSGTYPE_NPC_COMMAND;
		static const std::string MSGTYPE_MINIGAME_STARTSTOP;
		static const std::string MSGTYPE_MINIGAME_BOARD;
		static const std::string MSGTYPE_MINIGAME_UPDATE;
		static const std::string MSGTYPE_ENTRANCE;
		static const std::string MSGTYPE_GMEVENT_LIST;
		static const std::string MSGTYPE_GMEVENT_INFO;
		static const std::string MSGTYPE_SEQUENCE;
		static const std::string MSGTYPE_NPCRACELIST;
		static const std::string MSGTYPE_INTRODUCTION;

		// Chat Message Types
		static const std::string CHAT_SYSTEM;
		static const std::string CHAT_SAY;
		static const std::string CHAT_TELL;
		static const std::string CHAT_GROUP;
		static const std::string CHAT_GUILD;
		static const std::string CHAT_AUCTION;
		static const std::string CHAT_SHOUT;
		static const std::string CHAT_ME;
		static const std::string CHAT_TELLSELF;
		static const std::string CHAT_REPORT;
		static const std::string CHAT_ADVISOR;
		static const std::string CHAT_ADVICE;
		static const std::string CHAT_ADVICE_LIST;
		static const std::string CHAT_SERVER_TELL;
		static const std::string CHAT_GM;
		static const std::string CHAT_SERVER_INFO;
		static const std::string CHAT_MY;
		static const std::string CHAT_NPC;
		static const std::string CHAT_SYSTEM_BASE;
		static const std::string CHAT_PET_ACTION;
		static const std::string CHAT_NPC_ME;
		static const std::string CHAT_NPC_MY;
		static const std::string CHAT_NPC_NARRATE;

		// Combat Event Types
		static const std::string COMBAT_DODGE;
		static const std::string COMBAT_BLOCK;
		static const std::string COMBAT_DAMAGE;
		static const std::string COMBAT_MISS;
		static const std::string COMBAT_OUTOFRANGE;
		static const std::string COMBAT_DEATH;
		static const std::string COMBAT_DAMAGE_NEARLY_DEAD;

		// Persist Item Flags
		static const std::string PERSIST_ITEM_NONE;
		static const std::string PERSIST_ITEM_NOPICKUP;
		static const std::string PERSIST_ITEM_COLLIDE;

		// Persist Actor flags
		static const std::string PERSIST_ACTOR_NONE;
		static const std::string PERSIST_ACTOR_NPC;
		static const std::string PERSIST_ACTOR_NAME_KNOWN;

		// Dead Reckoning Data Flags
		static const std::string DR_DATA_NOT_MOVING;
		static const std::string DR_DATA_ACTOR_MODE;
		static const std::string DR_DATA_ANG_VELOCITY;
		static const std::string DR_DATA_X_VELOCITY;
		static const std::string DR_DATA_Y_VELOCITY;
		static const std::string DR_DATA_Z_VELOCITY;
		static const std::string DR_DATA_X_WORLDVELOCITY;
		static const std::string DR_DATA_Y_WORLDVELOCITY;
		static const std::string DR_DATA_Z_WORLDVELOCITY;
		static const std::string DR_DATA_ALL_DATA;

		// Equipment Message Commands
		static const std::string EQUIP;
		static const std::string DEEQUIP;

		// Player Modes
		static const std::string PLAYER_MODE_PEACE;
		static const std::string PLAYER_MODE_COMBAT;
		static const std::string PLAYER_MODE_SPELL_CASTING;
		static const std::string PLAYER_MODE_WORK;
		static const std::string PLAYER_MODE_DEAD;
		static const std::string PLAYER_MODE_SIT;
		static const std::string PLAYER_MODE_OVERWEIGHT;
		static const std::string PLAYER_MODE_EXHAUSTED;
		static const std::string PLAYER_MODE_DEFEATED;

		// Quest Reward Message Type
		static const std::string QUEST_REWARD_OFFER_REWARDS;
		static const std::string QUEST_REWARD_SELECT_REWARDS;

		// View Item Message Type
		static const std::string VIEW_ITEM_REQUEST;
		static const std::string VIEW_ITEM_DESCRIPTION;

		// System Message Types
		static const std::string SYSTEM_MSG_ERROR;
		static const std::string SYSTEM_MSG_INFO;
		static const std::string SYSTEM_MSG_INFO_SERVER;
		static const std::string SYSTEM_MSG_RESULT;
		static const std::string SYSTEM_MSG_OK;
		static const std::string SYSTEM_MSG_WHO;
		static const std::string SYSTEM_MSG_ACK;
		static const std::string SYSTEM_MSG_INFO_BASE;
		static const std::string SYSTEM_MSG_COMBAT;
		static const std::string SYSTEM_MSG_COMBAT_DODGE;
		static const std::string SYSTEM_MSG_COMBAT_BLOCK;
		static const std::string SYSTEM_MSG_COMBAT_HITYOU;
		static const std::string SYSTEM_MSG_COMBAT_HITOTHER;
		static const std::string SYSTEM_MSG_COMBAT_YOURHIT;
		static const std::string SYSTEM_MSG_COMBAT_OTHERHIT;
		static const std::string SYSTEM_MSG_COMBAT_MISS;
		static const std::string SYSTEM_MSG_COMBAT_OWN_DEATH;
		static const std::string SYSTEM_MSG_COMBAT_DEATH;
		static const std::string SYSTEM_MSG_COMBAT_VICTORY;
		static const std::string SYSTEM_MSG_COMBAT_STANCE;
		static const std::string SYSTEM_MSG_COMBAT_NEARLY_DEAD;
		static const std::string SYSTEM_MSG_LOOT;
		static const std::string SYSTEM_MSG_SEC;
		static const std::string SYSTEM_SEC_LEVEL0;
		static const std::string SYSTEM_SEC_LEVEL1;
		static const std::string SYSTEM_SEC_LEVEL2;
		static const std::string SYSTEM_SEC_LEVEL3;
		static const std::string SYSTEM_SEC_LEVEL4;
		static const std::string SYSTEM_MSG_PURCHASE;

		// GUI Inventory Message Types
		static const std::string GUI_INVENTORY_LIST;
		static const std::string GUI_INVENTORY_REQUEST;
		static const std::string GUI_INVENTORY_UPDATE_REQUEST;
		static const std::string GUI_INVENTORY_UPDATE_LIST;

		// Player Weather Mode
		static const std::string WEATHER_MODE_DAYNIGHT;
		static const std::string WEATHER_MODE_WEATHER;

		// Weather Types
		static const std::string WEATHER_TYPE_RAIN;
		static const std::string WEATHER_TYPE_SNOW;
		static const std::string WEATHER_TYPE_FOG;
		static const std::string WEATHER_TYPE_LIGHTNING;

		// Active Magic Command Type
		static const std::string ACTIVE_MAGIC_ADD_CATEGORY;
		static const std::string ACTIVE_MAGIC_REMOVE_CATEGORY;

		// GUI Interaction TYpes
		static const std::string GUI_INTERACTION_PICKUP;
		static const std::string GUI_INTERACTION_EXAMINE;
		static const std::string GUI_INTERACTION_UNLOCK;
		static const std::string GUI_INTERACTION_LOOT;
		static const std::string GUI_INTERACTION_BUYSELL;
		static const std::string GUI_INTERACTION_GIVE;
		static const std::string GUI_INTERACTION_CLOSE;
		static const std::string GUI_INTERACTION_USE;
		static const std::string GUI_INTERACTION_PLAYERDESC;
		static const std::string GUI_INTERACTION_ATTACK;
		static const std::string GUI_INTERACTION_COMBINE;
		static const std::string GUI_INTERACTION_EXCHANGE;
		static const std::string GUI_INTERACTION_TRAIN;
		static const std::string GUI_INTERACTION_NPCTALK;
		static const std::string GUI_INTERACTION_VIEWSTATS;
		static const std::string GUI_INTERACTION_DISMISS;
		static const std::string GUI_INTERACTION_MARRIAGE;
		static const std::string GUI_INTERACTION_DIVORCE;
		static const std::string GUI_INTERACTION_PLAYGAME;
		static const std::string GUI_INTERACTION_ENTER;
		static const std::string GUI_INTERACTION_LOCK;
		static const std::string GUI_INTERACTION_ENTERLOCKED;
		static const std::string GUI_INTERACTION_BANK;
		static const std::string GUI_INTERACTION_INTRODUCE;

		// GUI Merchant Message Types
		static const std::string GUI_MERCHANT_MESSAGE_REQUEST;
		static const std::string GUI_MERCHANT_MESSAGE_MERCHANT;
		static const std::string GUI_MERCHANT_MESSAGE_CATEGORIES;
		static const std::string GUI_MERCHANT_MESSAGE_CATEGORY;
		static const std::string GUI_MERCHANT_MESSAGE_MONEY;
		static const std::string GUI_MERCHANT_MESSAGE_ITEMS;
		static const std::string GUI_MERCHANT_MESSAGE_BUY;
		static const std::string GUI_MERCHANT_MESSAGE_SELL;
		static const std::string GUI_MERCHANT_MESSAGE_VIEW;
		static const std::string GUI_MERCHANT_MESSAGE_CANCEL;

		// GUI Skill Message Types
		static const std::string GUI_SKILL_MESSAGE_REQUEST;
		static const std::string GUI_SKILL_MESSAGE_BUY_SKILL;
		static const std::string GUI_SKILL_MESSAGE_SKILL_LIST;
		static const std::string GUI_SKILL_MESSAGE_SKILL_SELECTED;
		static const std::string GUI_SKILL_MESSAGE_DESCRIPTION;
		static const std::string GUI_SKILL_MESSAGE_QUIT;

		// Message types and elements
		static const std::string ELEMENT_ALL_MESSAGE_TYPE;

		static const std::string TYPE_CHAT_MESSAGE;
		static const std::string ELEMENT_CHAT_TEXT;
		static const std::string ELEMENT_CHAT_SPEAKER;
		static const std::string ELEMENT_CHAT_SPEAKER_FROM;
		static const std::string ELEMENT_CHAT_SPEAKER_TO;
		static const std::string ELEMENT_CHAT_CHAT_TYPE;

		static const std::string TYPE_COMBAT_MESSAGE;
		static const std::string ELEMENT_COMBAT_ATTACKER_ID;
		static const std::string ELEMENT_COMBAT_TARGET_ID;
		static const std::string ELEMENT_COMBAT_DAMAGE;
		static const std::string ELEMENT_COMBAT_TARGET_LOCATION;
		static const std::string ELEMENT_COMBAT_EVENT_TYPE;

		static const std::string TYPE_DR_MESSAGE;
		static const std::string ELEMENT_DR_COUNTER;
		static const std::string ELEMENT_DR_ON_GROUND;
		static const std::string ELEMENT_DR_POSITION;
		static const std::string ELEMENT_DR_VELOCITY;
		static const std::string ELEMENT_DR_WORLD_VELOCITY;
		static const std::string ELEMENT_DR_Y_ROTATION;
		static const std::string ELEMENT_DR_SECTOR_NAME;
		static const std::string ELEMENT_DR_ANGULAR_VELOCITY;
		static const std::string ELEMENT_DR_ENTITY_ID;

		static const std::string TYPE_EFFECT_MESSAGE;
		static const std::string ELEMENT_EFFECT_MESSAGE_NAME;
		static const std::string ELEMENT_EFFECT_MESSAGE_ANCHOR_ID;
		static const std::string ELEMENT_EFFECT_MESSAGE_TARGET_ID;
		static const std::string ELEMENT_EFFECT_MESSAGE_CAST_DURATION;
		static const std::string ELEMENT_EFFECT_MESSAGE_UID;
		static const std::string ELEMENT_EFFECT_MESSAGE_EFFECT_TEXT;

		static const std::string TYPE_GUI_ACTIVE_MAGIC_MESSAGE;
		static const std::string ELEMENT_GUI_ACTIVE_MAGIC_CATEGORY_LIST;
		static const std::string ELEMENT_GUI_ACTIVE_MAGIC_COMMAND;

		static const std::string TYPE_GUI_INTERACT_MESSAGE;
		static const std::string ELEMENT_GUI_INTERACT_TYPE;

		static const std::string TYPE_GUI_INVENTORY_MESSAGE;
		static const std::string ELEMENT_GUI_INVENTORY_ITEMS;
		static const std::string ELEMENT_GUI_INVENTORY_TOTAL_ITEMS;
		static const std::string ELEMENT_GUI_INVENTORY_TOTAL_EMPTIED_SLOTS;
		static const std::string ELEMENT_GUI_INVENTORY_MAX_WEIGHT;
		static const std::string ELEMENT_GUI_INVENTORY_MONEY;

		static const std::string TYPE_GUI_MERCHANT_MESSAGE;
		static const std::string ELEMENT_GUI_MERCHANT_COMMAND_TYPE;
		static const std::string ELEMENT_GUI_MERCHANT_MESSAGE_CONTENT;

		static const std::string TYPE_GUI_SKILL_MESSAGE;
		static const std::string ELEMENT_GUI_SKILL_COMMAND;
		static const std::string ELEMENT_GUI_SKILL_COMMAND_DATA;
		static const std::string ELEMENT_GUI_SKILL_STRENGTH;
		static const std::string ELEMENT_GUI_SKILL_ENDURANCE;
		static const std::string ELEMENT_GUI_SKILL_AGILITY;
		static const std::string ELEMENT_GUI_SKILL_WILL;
		static const std::string ELEMENT_GUI_SKILL_CHARISMA;
		static const std::string ELEMENT_GUI_SKILL_HIT_POINTS;
		static const std::string ELEMENT_GUI_SKILL_MANA;
		static const std::string ELEMENT_GUI_SKILL_PHYSICAL_STAMINA;
		static const std::string ELEMENT_GUI_SKILL_MENTAL_STAMINA;
		static const std::string ELEMENT_GUI_SKILL_MAX_HIT_POINTS;
		static const std::string ELEMENT_GUI_SKILL_MAX_MANA;
		static const std::string ELEMENT_GUI_SKILL_MAX_PHYSICAL_STAMINA;
		static const std::string ELEMENT_GUI_SKILL_MAX_MENTAL_STAMINA;

		static const std::string TYPE_GUI_TARGET_UPDATE_MESSAGE;
		static const std::string ELEMENT_GUI_TARGET_UPDATE_CLIENT_ID;
		static const std::string ELEMENT_GUI_TARGET_UPDATE_TARGET_ID;

		static const std::string TYPE_MODE_MESSAGE;
		static const std::string ELEMENT_MODE_ACTOR_ID;
		static const std::string ELEMENT_MODE_MODE;
		static const std::string ELEMENT_MODE_STANCE;

		static const std::string TYPE_MOVE_LOCK_MESSAGE;
		static const std::string ELEMENT_MOVE_LOCK_LOCKED;

		static const std::string TYPE_NEW_SECTOR_MESSAGE;
		static const std::string ELEMENT_NEW_SECTOR_OLD_SECTOR;
		static const std::string ELEMENT_NEW_SECTOR_NEW_SECTOR;
		static const std::string ELEMENT_NEW_SECTOR_POSITION;

		static const std::string TYPE_PERSIST_ACTION_LOCATION_MESSAGE;
		static const std::string ELEMENT_PERSIST_ACTION_LOCATION_SECTOR;
		static const std::string ELEMENT_PERSIST_ACTION_LOCATION_MESH;
		static const std::string ELEMENT_PERSIST_ACTION_LOCATION_ID;
		static const std::string ELEMENT_PERSIST_ACTION_LOCATION_TYPE;

		static const std::string TYPE_PERSIST_ACTOR_MESSAGE;
		static const std::string ELEMENT_PERSIST_ACTOR_DR_MESSAGE;
		static const std::string ELEMENT_PERSIST_ACTOR_NAME;
		static const std::string ELEMENT_PERSIST_ACTOR_GUILD;
		static const std::string ELEMENT_PERSIST_ACTOR_FACT_NAME;
		static const std::string ELEMENT_PERSIST_ACTOR__FILE_NAME;
		static const std::string ELEMENT_PERSIST_ACTOR_RACE;
		static const std::string ELEMENT_PERSIST_ACTOR_GENDER;
		static const std::string ELEMENT_PERSIST_ACTOR_HELM_GROUPS;
		static const std::string ELEMENT_PERSIST_ACTOR_TOP;
		static const std::string ELEMENT_PERSIST_ACTOR_BOTTOM;
		static const std::string ELEMENT_PERSIST_ACTOR_OFFSET;
		static const std::string ELEMENT_PERSIST_ACTOR_TYPE;
		static const std::string ELEMENT_PERSIST_ACTOR_MASQUERADED_TYPE;
		static const std::string ELEMENT_PERSIST_ACTOR_SERVER_MODE;
		static const std::string ELEMENT_PERSIST_ACTOR_PLAYER_ID;
		static const std::string ELEMENT_PERSIST_ACTOR_GROUP_ID;
		static const std::string ELEMENT_PERSIST_ACTOR_OWNER_EID;
		static const std::string ELEMENT_PERSIST_ACTOR_CONTROL;
		static const std::string ELEMENT_PERSIST_ACTOR_FLAGS;
		static const std::string ELEMENT_PERSIST_ACTOR_INSTANCE;

		static const std::string TYPE_PERSIST_ITEM_MESSAGE;
		static const std::string ELEMENT_PERSIST_ITEM_NAME;
		static const std::string ELEMENT_PERSIST_ITEM_FACT_NAME;
		static const std::string ELEMENT_PERSIST_ITEM_FILE_NAME;
		static const std::string ELEMENT_PERSIST_ITEM_SECTOR;
		static const std::string ELEMENT_PERSIST_ITEM_POSITION;
		static const std::string ELEMENT_PERSIST_ITEM_Y_ROTATION;
		static const std::string ELEMENT_PERSIST_ITEM_ID;
		static const std::string ELEMENT_PERSIST_ITEM_TYPE;
		static const std::string ELEMENT_PERSIST_ITEM_FLAGS;

		static const std::string TYPE_PLAY_SOUND_MESSAGE;
		static const std::string ELEMENT_PLAY_SOUND_SOUND;

		static const std::string TYPE_QUEST_LIST_MESSAGE;
		static const std::string ELEMENT_QUEST_LIST_QUEST_XML;

		static const std::string TYPE_QUEST_REWARD_MESSAGE;
		static const std::string ELEMENT_QUEST_REWARD_TYPE;
		static const std::string ELEMENT_QUEST_REWARD_NEW_VALUE;

		static const std::string TYPE_REMOVE_OBJECT_MESSAGE;
		static const std::string ELEMENT_REMOVE_OBJECT_OBJECT_ID;

		static const std::string TYPE_SOUND_EVENT_MESSAGE;
		static const std::string ELEMENT_SOUNT_EVENT_TYPE;

		static const std::string TYPE_SPELL_CANCEL_MESSAGE;
		// empty message

		static const std::string TYPE_SPELL_CAST_MESSAGE;
		static const std::string ELEMENT_SPELL_CAST_SPELL;
		static const std::string ELEMENT_SPELL_CAST_K_FACTOR;

		static const std::string TYPE_STAT_DR_MESSAGE;
		static const std::string ELEMENT_STAT_DR_USEFUL;
		static const std::string ELEMENT_STAT_DR_ENTITY_ID;
		static const std::string ELEMENT_STAT_DR_STATS_DIRTY;
		static const std::string ELEMENT_STAT_DR_COUNTER;

		static const std::string TYPE_STATS_MESSAGE;
		static const std::string ELEMENT_STATS_HIT_POINTS;
		static const std::string ELEMENT_STATS_MANA;
		static const std::string ELEMENT_STATS_WEIGHT;
		static const std::string ELEMENT_STATS_CAPACITY;

		static const std::string TYPE_STOP_EFFECT_MESSAGE;
		static const std::string ELEMENT_STOP_EFFECT_UID;

		static const std::string TYPE_SYSTEM_MESSAGE;
		static const std::string ELEMENT_SYSTEM_TEXT;
		static const std::string ELEMENT_SYSTEM_TYPE;

		static const std::string TYPE_UPDATE_OBJECT_NAME_MESSAGE;
		static const std::string ELEMENT_UPDATE_OBJECT_NAME_OBJECT_ID;
		static const std::string ELEMENT_UPDATE_OBJECT_NAME_NEW_NAME;

		static const std::string TYPE_VIEW_ITEM_DESCRIPTION_MESSAGE;
		static const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_ITEM_NAME;
		static const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_ITEM_DESCRIPTION;
		static const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_STACK_COUNT;
		static const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_CONTAINER_ID;
		static const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_SLOT_ID;
		static const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_HAS_CONTENTS;
		static const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_TO_CLIENT;
		static const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_CONTENTS;

		static const std::string TYPE_VIEW_ITEM_UPDATE_MESSAGE;
		static const std::string ELEMENT_VIEW_ITEM_UPDATE_CLEAR_SLOT;
		static const std::string ELEMENT_VIEW_ITEM_UPDATE_TO_CLIENT;
		static const std::string ELEMENT_VIEW_ITEM_UPDATE_CONTAINER_ID;
		static const std::string ELEMENT_VIEW_ITEM_UPDATE_NAME;
		static const std::string ELEMENT_VIEW_ITEM_UPDATE_ICON;
		static const std::string ELEMENT_VIEW_ITEM_UPDATE_SLOT_ID;
		static const std::string ELEMENT_VIEW_ITEM_UPDATE_STACK_COUNT;
		static const std::string ELEMENT_VIEW_ITEM_UPDATE_OWNER_ID;

		static const std::string TYPE_WEATHER_MESSAGE;
		static const std::string ELEMENT_WEATHER_MINUTE;
		static const std::string ELEMENT_WEATHER_HOUR;
		static const std::string ELEMENT_WEATHER_DAY;
		static const std::string ELEMENT_WEATHER_MONTH;
		static const std::string ELEMENT_WEATHER_YEAR;
		static const std::string ELEMENT_WEATHER_WEATHER;

		static const std::string XML_HEADER;
		static const std::string PSAI_MESSAGE_ELEMENT_START;
		static const std::string PSAI_MESSAGE_ELEMENT_END;

		static const std::string PSAI_SCHEMA_LOCATION;
		static const std::string PSAI_NAMESPACE;

};


const std::string PsaiXmlConstants::TYPE_VECTOR_3D("psai:vector3d");
const std::string PsaiXmlConstants::PsaiXmlConstants::TYPE_CONTAINER_CONTENTS("psai:containercontents");
const std::string PsaiXmlConstants::PsaiXmlConstants::TYPE_ITEM_DESCRIPTION("psai:itemdescription");
const std::string PsaiXmlConstants::PsaiXmlConstants::TYPE_NETWORK_DETAIL_SKILL("psai:networkdetailskill");
const std::string PsaiXmlConstants::PsaiXmlConstants::TYPE_NET_WEATHER_INFO("psai:netweatherinfo");
const std::string PsaiXmlConstants::PsaiXmlConstants::TYPE_PS_MONEY("psai:psmoney");

// enumerated types

// Message Class Types
const std::string PsaiXmlConstants::PsaiXmlConstants::MSGTYPE_PING("psai:MSGTYPE_PING");
const std::string PsaiXmlConstants::PsaiXmlConstants::MSGTYPE_AUTHENTICATE("psai:MSGTYPE_AUTHENTICATE");
const std::string PsaiXmlConstants::PsaiXmlConstants::MSGTYPE_PREAUTHENTICATE("psai:MSGTYPE_PREAUTHENTICATE");
const std::string PsaiXmlConstants::PsaiXmlConstants::MSGTYPE_PREAUTHAPPROVED("psai:MSGTYPE_PREAUTHAPPROVED");
const std::string PsaiXmlConstants::PsaiXmlConstants::MSGTYPE_AUTHAPPROVED("psai:MSGTYPE_AUTHAPPROVED");
const std::string PsaiXmlConstants::PsaiXmlConstants::MSGTYPE_AUTHREJECTED("psai:MSGTYPE_AUTHREJECTED");
const std::string PsaiXmlConstants::PsaiXmlConstants::MSGTYPE_DISCONNECT("psai:MSGTYPE_DISCONNECT");
const std::string PsaiXmlConstants::MSGTYPE_CHAT("psai:MSGTYPE_CHAT");
const std::string PsaiXmlConstants::MSGTYPE_GUILDCMD("psai:MSGTYPE_GUILDCMD");
const std::string PsaiXmlConstants::MSGTYPE_USERCMD("psai:MSGTYPE_USERCMD");
const std::string PsaiXmlConstants::MSGTYPE_SYSTEM("psai:MSGTYPE_SYSTEM");
const std::string PsaiXmlConstants::MSGTYPE_CHARREJECT("psai:MSGTYPE_CHARREJECT");
const std::string PsaiXmlConstants::MSGTYPE_DEAD_RECKONING("psai:MSGTYPE_DEAD_RECKONING");
const std::string PsaiXmlConstants::MSGTYPE_CELPERSIST("psai:MSGTYPE_CELPERSIST");
const std::string PsaiXmlConstants::MSGTYPE_CONFIRMQUESTION("psai:MSGTYPE_CONFIRMQUESTION");
const std::string PsaiXmlConstants::MSGTYPE_USERACTION("psai:MSGTYPE_USERACTION");
const std::string PsaiXmlConstants::MSGTYPE_ADMINCMD("psai:MSGTYPE_ADMINCMD");
const std::string PsaiXmlConstants::MSGTYPE_GUIINTERACT("psai:MSGTYPE_GUIINTERACT");
const std::string PsaiXmlConstants::MSGTYPE_GUIINVENTORY("psai:MSGTYPE_GUIINVENTORY");
const std::string PsaiXmlConstants::MSGTYPE_VIEW_ITEM("psai:MSGTYPE_VIEW_ITEM");
const std::string PsaiXmlConstants::MSGTYPE_VIEW_CONTAINER("psai:MSGTYPE_VIEW_CONTAINER");
const std::string PsaiXmlConstants::MSGTYPE_VIEW_SKETCH("psai:MSGTYPE_VIEW_SKETCH");
const std::string PsaiXmlConstants::MSGTYPE_VIEW_ACTION_LOCATION("psai:MSGTYPE_VIEW_ACTION_LOCATION");
const std::string PsaiXmlConstants::MSGTYPE_READ_BOOK("psai:MSGTYPE_READ_BOOK");
const std::string PsaiXmlConstants::MSGTYPE_WRITE_BOOK("psai:MSGTYPE_WRITE_BOOK");
const std::string PsaiXmlConstants::MSGTYPE_UPDATE_ITEM("psai:MSGTYPE_UPDATE_ITEM");
const std::string PsaiXmlConstants::MSGTYPE_MODE("psai:MSGTYPE_MODE");
const std::string PsaiXmlConstants::MSGTYPE_WEATHER("psai:MSGTYPE_WEATHER");
const std::string PsaiXmlConstants::MSGTYPE_NEWSECTOR("psai:MSGTYPE_NEWSECTOR");
const std::string PsaiXmlConstants::MSGTYPE_GUIGUILD("psai:MSGTYPE_GUIGUILD");
const std::string PsaiXmlConstants::MSGTYPE_EQUIPMENT("psai:MSGTYPE_EQUIPMENT");
const std::string PsaiXmlConstants::MSGTYPE_GUIEXCHANGE("psai:MSGTYPE_GUIEXCHANGE");
const std::string PsaiXmlConstants::MSGTYPE_EXCHANGE_REQUEST("psai:MSGTYPE_EXCHANGE_REQUEST");
const std::string PsaiXmlConstants::MSGTYPE_EXCHANGE_ADD_ITEM("psai:MSGTYPE_EXCHANGE_ADD_ITEM");
const std::string PsaiXmlConstants::MSGTYPE_EXCHANGE_REMOVE_ITEM("psai:MSGTYPE_EXCHANGE_REMOVE_ITEM");
const std::string PsaiXmlConstants::MSGTYPE_EXCHANGE_ACCEPT("psai:MSGTYPE_EXCHANGE_ACCEPT");
const std::string PsaiXmlConstants::MSGTYPE_EXCHANGE_STATUS("psai:MSGTYPE_EXCHANGE_STATUS");
const std::string PsaiXmlConstants::MSGTYPE_EXCHANGE_END("psai:MSGTYPE_EXCHANGE_END");
const std::string PsaiXmlConstants::MSGTYPE_EXCHANGE_MONEY("psai:MSGTYPE_EXCHANGE_MONEY");
const std::string PsaiXmlConstants::MSGTYPE_GUIMERCHANT("psai:MSGTYPE_GUIMERCHANT");
const std::string PsaiXmlConstants::MSGTYPE_GROUPCMD("psai:MSGTYPE_GROUPCMD");
const std::string PsaiXmlConstants::MSGTYPE_GUIGROUP("psai:MSGTYPE_GUIGROUP");
const std::string PsaiXmlConstants::MSGTYPE_STATDRUPDATE("psai:MSGTYPE_STATDRUPDATE");
const std::string PsaiXmlConstants::MSGTYPE_SPELL_BOOK("psai:MSGTYPE_SPELL_BOOK");
const std::string PsaiXmlConstants::MSGTYPE_GLYPH_REQUEST("psai:MSGTYPE_GLYPH_REQUEST");
const std::string PsaiXmlConstants::MSGTYPE_GLYPH_ASSEMBLE("psai:MSGTYPE_GLYPH_ASSEMBLE");
const std::string PsaiXmlConstants::MSGTYPE_PURIFY_GLYPH("psai:MSGTYPE_PURIFY_GLYPH");
const std::string PsaiXmlConstants::MSGTYPE_SPELL_CAST("psai:MSGTYPE_SPELL_CAST");
const std::string PsaiXmlConstants::MSGTYPE_SPELL_CANCEL("psai:MSGTYPE_SPELL_CANCEL");
const std::string PsaiXmlConstants::MSGTYPE_EFFECT("psai:MSGTYPE_EFFECT");
const std::string PsaiXmlConstants::MSGTYPE_EFFECT_STOP("psai:MSGTYPE_EFFECT_STOP");
const std::string PsaiXmlConstants::MSGTYPE_NPCAUTHENT("psai:MSGTYPE_NPCAUTHENT");
const std::string PsaiXmlConstants::MSGTYPE_NPCLIST("psai:MSGTYPE_NPCLIST");
const std::string PsaiXmlConstants::MSGTYPE_GUITARGETUPDATE("psai:MSGTYPE_GUITARGETUPDATE");
const std::string PsaiXmlConstants::MSGTYPE_MAPLIST("psai:MSGTYPE_MAPLIST");
const std::string PsaiXmlConstants::MSGTYPE_NPCOMMANDLIST("psai:MSGTYPE_NPCOMMANDLIST");
const std::string PsaiXmlConstants::MSGTYPE_ALLENTITYPOS("psai:MSGTYPE_ALLENTITYPOS");
const std::string PsaiXmlConstants::MSGTYPE_NEW_NPC("psai:MSGTYPE_NEW_NPC");
const std::string PsaiXmlConstants::MSGTYPE_PETITION("psai:MSGTYPE_PETITION");
const std::string PsaiXmlConstants::MSGTYPE_MSGSTRINGS("psai:MSGTYPE_MSGSTRINGS");
const std::string PsaiXmlConstants::MSGTYPE_CHARACTERDATA("psai:MSGTYPE_CHARACTERDATA");
const std::string PsaiXmlConstants::MSGTYPE_AUTHCHARACTER("psai:MSGTYPE_AUTHCHARACTER");
const std::string PsaiXmlConstants::MSGTYPE_AUTHCHARACTERAPPROVED("psai:MSGTYPE_AUTHCHARACTERAPPROVED");
const std::string PsaiXmlConstants::MSGTYPE_CHAR_CREATE_CP("psai:MSGTYPE_CHAR_CREATE_CP");
const std::string PsaiXmlConstants::MSGTYPE_COMBATEVENT("psai:MSGTYPE_COMBATEVENT");
const std::string PsaiXmlConstants::MSGTYPE_LOOT("psai:MSGTYPE_LOOT");
const std::string PsaiXmlConstants::MSGTYPE_LOOTITEM("psai:MSGTYPE_LOOTITEM");
const std::string PsaiXmlConstants::MSGTYPE_LOOTREMOVE("psai:MSGTYPE_LOOTREMOVE");
const std::string PsaiXmlConstants::MSGTYPE_GUISKILL("psai:MSGTYPE_GUISKILL");
const std::string PsaiXmlConstants::MSGTYPE_OVERRIDEACTION("psai:MSGTYPE_OVERRIDEACTION");
const std::string PsaiXmlConstants::MSGTYPE_QUESTLIST("psai:MSGTYPE_QUESTLIST");
const std::string PsaiXmlConstants::MSGTYPE_QUESTINFO("psai:MSGTYPE_QUESTINFO");
const std::string PsaiXmlConstants::MSGTYPE_GMGUI("psai:MSGTYPE_GMGUI");
const std::string PsaiXmlConstants::MSGTYPE_WORKCMD("psai:MSGTYPE_WORKCMD");
const std::string PsaiXmlConstants::MSGTYPE_BUDDY_LIST("psai:MSGTYPE_BUDDY_LIST");
const std::string PsaiXmlConstants::MSGTYPE_BUDDY_STATUS("psai:MSGTYPE_BUDDY_STATUS");
const std::string PsaiXmlConstants::MSGTYPE_MOTD("psai:MSGTYPE_MOTD");
const std::string PsaiXmlConstants::MSGTYPE_MOTDREQUEST("psai:MSGTYPE_MOTDREQUEST");
const std::string PsaiXmlConstants::MSGTYPE_QUESTION("psai:MSGTYPE_QUESTION");
const std::string PsaiXmlConstants::MSGTYPE_QUESTIONRESPONSE("psai:MSGTYPE_QUESTIONRESPONSE");
const std::string PsaiXmlConstants::MSGTYPE_SLOT_MOVEMENT("psai:MSGTYPE_SLOT_MOVEMENT");
const std::string PsaiXmlConstants::MSGTYPE_QUESTIONCANCEL("psai:MSGTYPE_QUESTIONCANCEL");
const std::string PsaiXmlConstants::MSGTYPE_GUILDMOTDSET("psai:MSGTYPE_GUILDMOTDSET");
const std::string PsaiXmlConstants::MSGTYPE_PLAYSOUND("psai:MSGTYPE_PLAYSOUND");
const std::string PsaiXmlConstants::MSGTYPE_CHARACTERDETAILS("psai:MSGTYPE_CHARACTERDETAILS");
const std::string PsaiXmlConstants::MSGTYPE_CHARDETAILSREQUEST("psai:MSGTYPE_CHARDETAILSREQUEST");
const std::string PsaiXmlConstants::MSGTYPE_CHARDESCUPDATE("psai:MSGTYPE_CHARDESCUPDATE");
const std::string PsaiXmlConstants::MSGTYPE_FACTION_INFO("psai:MSGTYPE_FACTION_INFO");
const std::string PsaiXmlConstants::MSGTYPE_QUESTREWARD("psai:MSGTYPE_QUESTREWARD");
const std::string PsaiXmlConstants::MSGTYPE_NAMECHANGE("psai:MSGTYPE_NAMECHANGE");
const std::string PsaiXmlConstants::MSGTYPE_GUILDCHANGE("psai:MSGTYPE_GUILDCHANGE");
const std::string PsaiXmlConstants::MSGTYPE_LOCKPICK("psai:MSGTYPE_LOCKPICK");
const std::string PsaiXmlConstants::MSGTYPE_GMSPAWNITEMS("psai:MSGTYPE_GMSPAWNITEMS");
const std::string PsaiXmlConstants::MSGTYPE_GMSPAWNTYPES("psai:MSGTYPE_GMSPAWNTYPES");
const std::string PsaiXmlConstants::MSGTYPE_GMSPAWNITEM("psai:MSGTYPE_GMSPAWNITEM");
const std::string PsaiXmlConstants::MSGTYPE_ADVICE("psai:MSGTYPE_ADVICE");
const std::string PsaiXmlConstants::MSGTYPE_ACTIVEMAGIC("psai:MSGTYPE_ACTIVEMAGIC");
const std::string PsaiXmlConstants::MSGTYPE_GROUPCHANGE("psai:MSGTYPE_GROUPCHANGE");
const std::string PsaiXmlConstants::MSGTYPE_MAPACTION("psai:MSGTYPE_MAPACTION");
const std::string PsaiXmlConstants::MSGTYPE_CLIENTSTATUS("psai:MSGTYPE_CLIENTSTATUS");
const std::string PsaiXmlConstants::MSGTYPE_TUTORIAL("psai:MSGTYPE_TUTORIAL");
const std::string PsaiXmlConstants::MSGTYPE_BANKING("psai:MSGTYPE_BANKING");
const std::string PsaiXmlConstants::MSGTYPE_REQUESTMOVEMENTS("psai:MSGTYPE_REQUESTMOVEMENTS");
const std::string PsaiXmlConstants::MSGTYPE_MOVEINFO("psai:MSGTYPE_MOVEINFO");
const std::string PsaiXmlConstants::MSGTYPE_MOVEMOD("psai:MSGTYPE_MOVEMOD");
const std::string PsaiXmlConstants::MSGTYPE_MOVELOCK("psai:MSGTYPE_MOVELOCK");
const std::string PsaiXmlConstants::MSGTYPE_CHAR_DELETE("psai:MSGTYPE_CHAR_DELETE");
const std::string PsaiXmlConstants::MSGTYPE_CHAR_CREATE_PARENTS("psai:MSGTYPE_CHAR_CREATE_PARENTS");
const std::string PsaiXmlConstants::MSGTYPE_CHAR_CREATE_CHILDHOOD("psai:MSGTYPE_CHAR_CREATE_CHILDHOOD");
const std::string PsaiXmlConstants::MSGTYPE_CHAR_CREATE_LIFEEVENTS("psai:MSGTYPE_CHAR_CREATE_LIFEEVENTS");
const std::string PsaiXmlConstants::MSGTYPE_CHAR_CREATE_UPLOAD("psai:MSGTYPE_CHAR_CREATE_UPLOAD");
const std::string PsaiXmlConstants::MSGTYPE_CHAR_CREATE_VERIFY("psai:MSGTYPE_CHAR_CREATE_VERIFY");
const std::string PsaiXmlConstants::MSGTYPE_CHAR_CREATE_NAME("psai:MSGTYPE_CHAR_CREATE_NAME");
const std::string PsaiXmlConstants::MSGTYPE_PERSIST_WORLD_REQUEST("psai:MSGTYPE_PERSIST_WORLD_REQUEST");
const std::string PsaiXmlConstants::MSGTYPE_PERSIST_WORLD("psai:MSGTYPE_PERSIST_WORLD");
const std::string PsaiXmlConstants::MSGTYPE_PERSIST_ACTOR_REQUEST("psai:MSGTYPE_PERSIST_ACTOR_REQUEST");
const std::string PsaiXmlConstants::MSGTYPE_PERSIST_ACTOR("psai:MSGTYPE_PERSIST_ACTOR");
const std::string PsaiXmlConstants::MSGTYPE_PERSIST_ITEM("psai:MSGTYPE_PERSIST_ITEM");
const std::string PsaiXmlConstants::MSGTYPE_PERSIST_ACTIONLOCATION("psai:MSGTYPE_PERSIST_ACTIONLOCATION");
const std::string PsaiXmlConstants::MSGTYPE_PERSIST_ALL("psai:MSGTYPE_PERSIST_ALL");
const std::string PsaiXmlConstants::MSGTYPE_REMOVE_OBJECT("psai:MSGTYPE_REMOVE_OBJECT");
const std::string PsaiXmlConstants::MSGTYPE_CHANGE_TRAIT("psai:MSGTYPE_CHANGE_TRAIT");
const std::string PsaiXmlConstants::MSGTYPE_DAMAGE_EVENT("psai:MSGTYPE_DAMAGE_EVENT");
const std::string PsaiXmlConstants::MSGTYPE_DEATH_EVENT("psai:MSGTYPE_DEATH_EVENT");
const std::string PsaiXmlConstants::MSGTYPE_TARGET_EVENT("psai:MSGTYPE_TARGET_EVENT");
const std::string PsaiXmlConstants::MSGTYPE_ZPOINT_EVENT("psai:MSGTYPE_ZPOINT_EVENT");
const std::string PsaiXmlConstants::MSGTYPE_BUY_EVENT("psai:MSGTYPE_BUY_EVENT");
const std::string PsaiXmlConstants::MSGTYPE_SELL_EVENT("psai:MSGTYPE_SELL_EVENT");
const std::string PsaiXmlConstants::MSGTYPE_PICKUP_EVENT("psai:MSGTYPE_PICKUP_EVENT");
const std::string PsaiXmlConstants::MSGTYPE_DROP_EVENT("psai:MSGTYPE_DROP_EVENT");
const std::string PsaiXmlConstants::MSGTYPE_LOOT_EVENT("psai:MSGTYPE_LOOT_EVENT");
const std::string PsaiXmlConstants::MSGTYPE_CONNECT_EVENT("psai:MSGTYPE_CONNECT_EVENT");
const std::string PsaiXmlConstants::MSGTYPE_MOVEMENT_EVENT("psai:MSGTYPE_MOVEMENT_EVENT");
const std::string PsaiXmlConstants::MSGTYPE_GENERIC_EVENT("psai:MSGTYPE_GENERIC_EVENT");
const std::string PsaiXmlConstants::MSGTYPE_SOUND_EVENT("psai:MSGTYPE_SOUND_EVENT");
const std::string PsaiXmlConstants::MSGTYPE_CHAR_CREATE_TRAITS("psai:MSGTYPE_CHAR_CREATE_TRAITS");
const std::string PsaiXmlConstants::MSGTYPE_STATS("psai:MSGTYPE_STATS");
const std::string PsaiXmlConstants::MSGTYPE_NPC_SETOWNER("psai:MSGTYPE_NPC_SETOWNER");
const std::string PsaiXmlConstants::MSGTYPE_PET_COMMAND("psai:MSGTYPE_PET_COMMAND");
const std::string PsaiXmlConstants::MSGTYPE_PET_SKILL("psai:MSGTYPE_PET_SKILL");
const std::string PsaiXmlConstants::MSGTYPE_CRAFT_INFO("psai:MSGTYPE_CRAFT_INFO");
const std::string PsaiXmlConstants::MSGTYPE_PETITION_REQUEST("psai:MSGTYPE_PETITION_REQUEST");
const std::string PsaiXmlConstants::MSGTYPE_HEART_BEAT("psai:MSGTYPE_HEART_BEAT");
const std::string PsaiXmlConstants::MSGTYPE_NPC_COMMAND("psai:MSGTYPE_NPC_COMMAND");
const std::string PsaiXmlConstants::MSGTYPE_MINIGAME_STARTSTOP("psai:MSGTYPE_MINIGAME_STARTSTOP");
const std::string PsaiXmlConstants::MSGTYPE_MINIGAME_BOARD("psai:MSGTYPE_MINIGAME_BOARD");
const std::string PsaiXmlConstants::MSGTYPE_MINIGAME_UPDATE("psai:MSGTYPE_MINIGAME_UPDATE");
const std::string PsaiXmlConstants::MSGTYPE_ENTRANCE("psai:MSGTYPE_ENTRANCE");
const std::string PsaiXmlConstants::MSGTYPE_GMEVENT_LIST("psai:MSGTYPE_GMEVENT_LIST");
const std::string PsaiXmlConstants::MSGTYPE_GMEVENT_INFO("psai:MSGTYPE_GMEVENT_INFO");
const std::string PsaiXmlConstants::MSGTYPE_SEQUENCE("psai:MSGTYPE_SEQUENCE");
const std::string PsaiXmlConstants::MSGTYPE_NPCRACELIST("psai:MSGTYPE_NPCRACELIST");
const std::string PsaiXmlConstants::MSGTYPE_INTRODUCTION("psai:MSGTYPE_INTRODUCTION");

// Chat Message Types
const std::string PsaiXmlConstants::CHAT_SYSTEM("psai:CHAT_SYSTEM");
const std::string PsaiXmlConstants::CHAT_SAY("psai:CHAT_SAY");
const std::string PsaiXmlConstants::CHAT_TELL("psai:CHAT_TELL");
const std::string PsaiXmlConstants::CHAT_GROUP("psai:CHAT_GROUP");
const std::string PsaiXmlConstants::CHAT_GUILD("psai:CHAT_GUILD");
const std::string PsaiXmlConstants::CHAT_AUCTION("psai:CHAT_AUCTION");
const std::string PsaiXmlConstants::CHAT_SHOUT("psai:CHAT_SHOUT");
const std::string PsaiXmlConstants::CHAT_ME("psai:CHAT_ME");
const std::string PsaiXmlConstants::CHAT_TELLSELF("psai:CHAT_TELLSELF");
const std::string PsaiXmlConstants::CHAT_REPORT("psai:CHAT_REPORT");
const std::string PsaiXmlConstants::CHAT_ADVISOR("psai:CHAT_ADVISOR");
const std::string PsaiXmlConstants::CHAT_ADVICE("psai:CHAT_ADVICE");
const std::string PsaiXmlConstants::CHAT_ADVICE_LIST("psai:CHAT_ADVICE_LIST");
const std::string PsaiXmlConstants::CHAT_SERVER_TELL("psai:CHAT_SERVER_TELL");
const std::string PsaiXmlConstants::CHAT_GM("psai:CHAT_GM");
const std::string PsaiXmlConstants::CHAT_SERVER_INFO("psai:CHAT_SERVER_INFO");
const std::string PsaiXmlConstants::CHAT_MY("psai:CHAT_MY");
const std::string PsaiXmlConstants::CHAT_NPC("psai:CHAT_NPC");
const std::string PsaiXmlConstants::CHAT_SYSTEM_BASE("psai:CHAT_SYSTEM_BASE");
const std::string PsaiXmlConstants::CHAT_PET_ACTION("psai:CHAT_PET_ACTION");
const std::string PsaiXmlConstants::CHAT_NPC_ME("psai:CHAT_NPC_ME");
const std::string PsaiXmlConstants::CHAT_NPC_MY("psai:CHAT_NPC_MY");
const std::string PsaiXmlConstants::CHAT_NPC_NARRATE("psai:CHAT_NPC_NARRATE");

// Combat Event Types
const std::string PsaiXmlConstants::COMBAT_DODGE("psai:COMBAT_DODGE");
const std::string PsaiXmlConstants::COMBAT_BLOCK("psai:COMBAT_BLOCK");
const std::string PsaiXmlConstants::COMBAT_DAMAGE("psai:COMBAT_DAMAGE");
const std::string PsaiXmlConstants::COMBAT_MISS("psai:COMBAT_MISS");
const std::string PsaiXmlConstants::COMBAT_OUTOFRANGE("psai:COMBAT_OUTOFRANGE");
const std::string PsaiXmlConstants::COMBAT_DEATH("psai:COMBAT_DEATH");
const std::string PsaiXmlConstants::COMBAT_DAMAGE_NEARLY_DEAD("psai:COMBAT_DAMAGE_NEARLY_DEAD");

// Persist Item Flags
const std::string PsaiXmlConstants::PERSIST_ITEM_NONE("psai:NONE");
const std::string PsaiXmlConstants::PERSIST_ITEM_NOPICKUP("psai:NOPICKUP");
const std::string PsaiXmlConstants::PERSIST_ITEM_COLLIDE("psai:COLLIDE");

// Persist Actor flags
const std::string PsaiXmlConstants::PERSIST_ACTOR_NONE("psai:NONE");
const std::string PsaiXmlConstants::PERSIST_ACTOR_NPC("psai:NPC");
const std::string PsaiXmlConstants::PERSIST_ACTOR_NAME_KNOWN("psai:NAME_KNOWN");

// Dead Reckoning Data Flags
const std::string PsaiXmlConstants::DR_DATA_NOT_MOVING("psai:NOT_MOVING");
const std::string PsaiXmlConstants::DR_DATA_ACTOR_MODE("psai:ACTOR_MODE");
const std::string PsaiXmlConstants::DR_DATA_ANG_VELOCITY("psai:ANG_VELOCITY");
const std::string PsaiXmlConstants::DR_DATA_X_VELOCITY("psai:X_VELOCITY");
const std::string PsaiXmlConstants::DR_DATA_Y_VELOCITY("psai:Y_VELOCITY");
const std::string PsaiXmlConstants::DR_DATA_Z_VELOCITY("psai:Z_VELOCITY");
const std::string PsaiXmlConstants::DR_DATA_X_WORLDVELOCITY("psai:X_WORLDVELOCITY");
const std::string PsaiXmlConstants::DR_DATA_Y_WORLDVELOCITY("psai:Y_WORLDVELOCITY");
const std::string PsaiXmlConstants::DR_DATA_Z_WORLDVELOCITY("psai:Z_WORLDVELOCITY");
const std::string PsaiXmlConstants::DR_DATA_ALL_DATA("psai:ALL_DATA");

// Equipment Message Commands
const std::string PsaiXmlConstants::EQUIP("psai:EQUIP");
const std::string PsaiXmlConstants::DEEQUIP("psai:DEEQUIP");

// Player Modes
const std::string PsaiXmlConstants::PLAYER_MODE_PEACE("psai:PEACE");
const std::string PsaiXmlConstants::PLAYER_MODE_COMBAT("psai:COMBAT");
const std::string PsaiXmlConstants::PLAYER_MODE_SPELL_CASTING("psai:SPELL_CASTING");
const std::string PsaiXmlConstants::PLAYER_MODE_WORK("psai:WORK");
const std::string PsaiXmlConstants::PLAYER_MODE_DEAD("psai:DEAD");
const std::string PsaiXmlConstants::PLAYER_MODE_SIT("psai:SIT");
const std::string PsaiXmlConstants::PLAYER_MODE_OVERWEIGHT("psai:OVERWEIGHT");
const std::string PsaiXmlConstants::PLAYER_MODE_EXHAUSTED("psai:EXHAUSTED");
const std::string PsaiXmlConstants::PLAYER_MODE_DEFEATED("psai:DEFEATED");

// Quest Reward Message Type
const std::string PsaiXmlConstants::QUEST_REWARD_OFFER_REWARDS("psai:OFFER_REWARDS");
const std::string PsaiXmlConstants::QUEST_REWARD_SELECT_REWARDS("psai:SELECT_REWARDS");

// View Item Message Type
const std::string PsaiXmlConstants::VIEW_ITEM_REQUEST("psai:REQUEST");
const std::string PsaiXmlConstants::VIEW_ITEM_DESCRIPTION("psai:DESCRIPTION");

// System Message Types
const std::string PsaiXmlConstants::SYSTEM_MSG_ERROR("psai:MSG_ERROR");
const std::string PsaiXmlConstants::SYSTEM_MSG_INFO("psai:MSG_INFO");
const std::string PsaiXmlConstants::SYSTEM_MSG_INFO_SERVER("psai:MSG_INFO_SERVER");
const std::string PsaiXmlConstants::SYSTEM_MSG_RESULT("psai:MSG_RESULT");
const std::string PsaiXmlConstants::SYSTEM_MSG_OK("psai:MSG_OK");
const std::string PsaiXmlConstants::SYSTEM_MSG_WHO("psai:MSG_WHO");
const std::string PsaiXmlConstants::SYSTEM_MSG_ACK("psai:MSG_ACK");
const std::string PsaiXmlConstants::SYSTEM_MSG_INFO_BASE("psai:MSG_INFO_BASE");
const std::string PsaiXmlConstants::SYSTEM_MSG_COMBAT("psai:MSG_COMBAT");
const std::string PsaiXmlConstants::SYSTEM_MSG_COMBAT_DODGE("psai:MSG_COMBAT_DODGE");
const std::string PsaiXmlConstants::SYSTEM_MSG_COMBAT_BLOCK("psai:MSG_COMBAT_BLOCK");
const std::string PsaiXmlConstants::SYSTEM_MSG_COMBAT_HITYOU("psai:MSG_COMBAT_HITYOU");
const std::string PsaiXmlConstants::SYSTEM_MSG_COMBAT_HITOTHER("psai:MSG_COMBAT_HITOTHER");
const std::string PsaiXmlConstants::SYSTEM_MSG_COMBAT_YOURHIT("psai:MSG_COMBAT_YOURHIT");
const std::string PsaiXmlConstants::SYSTEM_MSG_COMBAT_OTHERHIT("psai:MSG_COMBAT_OTHERHIT");
const std::string PsaiXmlConstants::SYSTEM_MSG_COMBAT_MISS("psai:MSG_COMBAT_MISS");
const std::string PsaiXmlConstants::SYSTEM_MSG_COMBAT_OWN_DEATH("psai:MSG_COMBAT_OWN_DEATH");
const std::string PsaiXmlConstants::SYSTEM_MSG_COMBAT_DEATH("psai:MSG_COMBAT_DEATH");
const std::string PsaiXmlConstants::SYSTEM_MSG_COMBAT_VICTORY("psai:MSG_COMBAT_VICTORY");
const std::string PsaiXmlConstants::SYSTEM_MSG_COMBAT_STANCE("psai:MSG_COMBAT_STANCE");
const std::string PsaiXmlConstants::SYSTEM_MSG_COMBAT_NEARLY_DEAD("psai:MSG_COMBAT_NEARLY_DEAD");
const std::string PsaiXmlConstants::SYSTEM_MSG_LOOT("psai:MSG_LOOT");
const std::string PsaiXmlConstants::SYSTEM_MSG_SEC("psai:MSG_SEC");
const std::string PsaiXmlConstants::SYSTEM_SEC_LEVEL0("psai:SEC_LEVEL0");
const std::string PsaiXmlConstants::SYSTEM_SEC_LEVEL1("psai:SEC_LEVEL1");
const std::string PsaiXmlConstants::SYSTEM_SEC_LEVEL2("psai:SEC_LEVEL2");
const std::string PsaiXmlConstants::SYSTEM_SEC_LEVEL3("psai:SEC_LEVEL3");
const std::string PsaiXmlConstants::SYSTEM_SEC_LEVEL4("psai:SEC_LEVEL4");
const std::string PsaiXmlConstants::SYSTEM_MSG_PURCHASE("psai:MSG_PURCHASE");

// GUI Inventory Message Types
const std::string PsaiXmlConstants::GUI_INVENTORY_LIST("psai:LIST");
const std::string PsaiXmlConstants::GUI_INVENTORY_REQUEST("psai:REQUEST");
const std::string PsaiXmlConstants::GUI_INVENTORY_UPDATE_REQUEST("psai:UPDATE_REQUEST");
const std::string PsaiXmlConstants::GUI_INVENTORY_UPDATE_LIST("psai:UPDATE_LIST");

// Player Weather Mode
const std::string PsaiXmlConstants::WEATHER_MODE_DAYNIGHT("psai:DAYNIGHT");
const std::string PsaiXmlConstants::WEATHER_MODE_WEATHER("psai:WEATHER");

// Weather Types
const std::string PsaiXmlConstants::WEATHER_TYPE_RAIN("psai:RAIN");
const std::string PsaiXmlConstants::WEATHER_TYPE_SNOW("psai:SNOW");
const std::string PsaiXmlConstants::WEATHER_TYPE_FOG("psai:FOG");
const std::string PsaiXmlConstants::WEATHER_TYPE_LIGHTNING("psai:LIGHTNING");

// Active Magic Command Type
const std::string PsaiXmlConstants::ACTIVE_MAGIC_ADD_CATEGORY("psai:ADD_CATEGORY");
const std::string PsaiXmlConstants::ACTIVE_MAGIC_REMOVE_CATEGORY("psai:REMOVE_CATEGORY");

// GUI Interaction TYpes
const std::string PsaiXmlConstants::GUI_INTERACTION_PICKUP("psai:PICKUP");
const std::string PsaiXmlConstants::GUI_INTERACTION_EXAMINE("psai:EXAMINE");
const std::string PsaiXmlConstants::GUI_INTERACTION_UNLOCK("psai:UNLOCK");
const std::string PsaiXmlConstants::GUI_INTERACTION_LOOT("psai:LOOT");
const std::string PsaiXmlConstants::GUI_INTERACTION_BUYSELL("psai:BUYSELL");
const std::string PsaiXmlConstants::GUI_INTERACTION_GIVE("psai:GIVE");
const std::string PsaiXmlConstants::GUI_INTERACTION_CLOSE("psai:CLOSE");
const std::string PsaiXmlConstants::GUI_INTERACTION_USE("psai:USE");
const std::string PsaiXmlConstants::GUI_INTERACTION_PLAYERDESC("psai:PLAYERDESC");
const std::string PsaiXmlConstants::GUI_INTERACTION_ATTACK("psai:ATTACK");
const std::string PsaiXmlConstants::GUI_INTERACTION_COMBINE("psai:COMBINE");
const std::string PsaiXmlConstants::GUI_INTERACTION_EXCHANGE("psai:EXCHANGE");
const std::string PsaiXmlConstants::GUI_INTERACTION_TRAIN("psai:TRAIN");
const std::string PsaiXmlConstants::GUI_INTERACTION_NPCTALK("psai:NPCTALK");
const std::string PsaiXmlConstants::GUI_INTERACTION_VIEWSTATS("psai:VIEWSTATS");
const std::string PsaiXmlConstants::GUI_INTERACTION_DISMISS("psai:DISMISS");
const std::string PsaiXmlConstants::GUI_INTERACTION_MARRIAGE("psai:MARRIAGE");
const std::string PsaiXmlConstants::GUI_INTERACTION_DIVORCE("psai:DIVORCE");
const std::string PsaiXmlConstants::GUI_INTERACTION_PLAYGAME("psai:PLAYGAME");
const std::string PsaiXmlConstants::GUI_INTERACTION_ENTER("psai:ENTER");
const std::string PsaiXmlConstants::GUI_INTERACTION_LOCK("psai:LOCK");
const std::string PsaiXmlConstants::GUI_INTERACTION_ENTERLOCKED("psai:ENTERLOCKED");
const std::string PsaiXmlConstants::GUI_INTERACTION_BANK("psai:BANK");
const std::string PsaiXmlConstants::GUI_INTERACTION_INTRODUCE("psai:INTRODUCE");

// GUI Merchant Message Types
const std::string PsaiXmlConstants::GUI_MERCHANT_MESSAGE_REQUEST("psai:REQUEST");
const std::string PsaiXmlConstants::GUI_MERCHANT_MESSAGE_MERCHANT("psai:MERCHANT");
const std::string PsaiXmlConstants::GUI_MERCHANT_MESSAGE_CATEGORIES("psai:CATEGORIES");
const std::string PsaiXmlConstants::GUI_MERCHANT_MESSAGE_CATEGORY("psai:CATEGORY");
const std::string PsaiXmlConstants::GUI_MERCHANT_MESSAGE_MONEY("psai:MONEY");
const std::string PsaiXmlConstants::GUI_MERCHANT_MESSAGE_ITEMS("psai:ITEMS");
const std::string PsaiXmlConstants::GUI_MERCHANT_MESSAGE_BUY("psai:BUY");
const std::string PsaiXmlConstants::GUI_MERCHANT_MESSAGE_SELL("psai:SELL");
const std::string PsaiXmlConstants::GUI_MERCHANT_MESSAGE_VIEW("psai:VIEW");
const std::string PsaiXmlConstants::GUI_MERCHANT_MESSAGE_CANCEL("psai:CANCEL");

// GUI Skill Message Types
const std::string PsaiXmlConstants::GUI_SKILL_MESSAGE_REQUEST("psai:REQUEST");
const std::string PsaiXmlConstants::GUI_SKILL_MESSAGE_BUY_SKILL("psai:BUY_SKILL");
const std::string PsaiXmlConstants::GUI_SKILL_MESSAGE_SKILL_LIST("psai:SKILL_LIST");
const std::string PsaiXmlConstants::GUI_SKILL_MESSAGE_SKILL_SELECTED("psai:SKILL_SELECTED");
const std::string PsaiXmlConstants::GUI_SKILL_MESSAGE_DESCRIPTION("psai:DESCRIPTION");
const std::string PsaiXmlConstants::GUI_SKILL_MESSAGE_QUIT("psai:QUIT");

// Message types and elements
const std::string PsaiXmlConstants::ELEMENT_ALL_MESSAGE_TYPE("psai:messagetype");

const std::string PsaiXmlConstants::TYPE_CHAT_MESSAGE("psai:chatmessage");
const std::string PsaiXmlConstants::ELEMENT_CHAT_TEXT("psai:text");
const std::string PsaiXmlConstants::ELEMENT_CHAT_SPEAKER("psai:speaker");
const std::string PsaiXmlConstants::ELEMENT_CHAT_SPEAKER_FROM("psai:from");
const std::string PsaiXmlConstants::ELEMENT_CHAT_SPEAKER_TO("psai:to");
const std::string PsaiXmlConstants::ELEMENT_CHAT_CHAT_TYPE("psai:chattype");

const std::string PsaiXmlConstants::TYPE_COMBAT_MESSAGE("psai:combateventmessage");
const std::string PsaiXmlConstants::ELEMENT_COMBAT_ATTACKER_ID("psai:attackerid");
const std::string PsaiXmlConstants::ELEMENT_COMBAT_TARGET_ID("psai:targetid");
const std::string PsaiXmlConstants::ELEMENT_COMBAT_DAMAGE("psai:damage");
const std::string PsaiXmlConstants::ELEMENT_COMBAT_TARGET_LOCATION("psai:targetlocation");
const std::string PsaiXmlConstants::ELEMENT_COMBAT_EVENT_TYPE("psai:combateventtype");

const std::string PsaiXmlConstants::TYPE_DR_MESSAGE("psai:drmessage");
const std::string PsaiXmlConstants::ELEMENT_DR_COUNTER("psai:counter");
const std::string PsaiXmlConstants::ELEMENT_DR_ON_GROUND("psai:onground");
const std::string PsaiXmlConstants::ELEMENT_DR_POSITION("psai:position");
const std::string PsaiXmlConstants::ELEMENT_DR_VELOCITY("psai:velocity");
const std::string PsaiXmlConstants::ELEMENT_DR_WORLD_VELOCITY("psai:worldvelocity");
const std::string PsaiXmlConstants::ELEMENT_DR_Y_ROTATION("psai:yrotation");
const std::string PsaiXmlConstants::ELEMENT_DR_SECTOR_NAME("psai:sectorname");
const std::string PsaiXmlConstants::ELEMENT_DR_ANGULAR_VELOCITY("psai:angularvelocity");
const std::string PsaiXmlConstants::ELEMENT_DR_ENTITY_ID("psai:entityid");

const std::string PsaiXmlConstants::TYPE_EFFECT_MESSAGE("psai:effectmessage");
const std::string PsaiXmlConstants::ELEMENT_EFFECT_MESSAGE_NAME("psai:name");
const std::string PsaiXmlConstants::ELEMENT_EFFECT_MESSAGE_ANCHOR_ID("psai:anshorid");
const std::string PsaiXmlConstants::ELEMENT_EFFECT_MESSAGE_TARGET_ID("psai:targetid");
const std::string PsaiXmlConstants::ELEMENT_EFFECT_MESSAGE_CAST_DURATION("psai:castduration");
const std::string PsaiXmlConstants::ELEMENT_EFFECT_MESSAGE_UID("psai:uid");
const std::string PsaiXmlConstants::ELEMENT_EFFECT_MESSAGE_EFFECT_TEXT("psai:effecttext");

const std::string PsaiXmlConstants::TYPE_GUI_ACTIVE_MAGIC_MESSAGE("psai:guiactivemagicmessage");
const std::string PsaiXmlConstants::ELEMENT_GUI_ACTIVE_MAGIC_CATEGORY_LIST("psai:catrgorylist");
const std::string PsaiXmlConstants::ELEMENT_GUI_ACTIVE_MAGIC_COMMAND("psai:command");

const std::string PsaiXmlConstants::TYPE_GUI_INTERACT_MESSAGE("psai:guiinteractmessage");
const std::string PsaiXmlConstants::ELEMENT_GUI_INTERACT_TYPE("psai:type");

const std::string PsaiXmlConstants::TYPE_GUI_INVENTORY_MESSAGE("psai:guiinventorymessage");
const std::string PsaiXmlConstants::ELEMENT_GUI_INVENTORY_ITEMS("psai:items");
const std::string PsaiXmlConstants::ELEMENT_GUI_INVENTORY_TOTAL_ITEMS("psai:totalitens");
const std::string PsaiXmlConstants::ELEMENT_GUI_INVENTORY_TOTAL_EMPTIED_SLOTS("psai:totalemptiedslots");
const std::string PsaiXmlConstants::ELEMENT_GUI_INVENTORY_MAX_WEIGHT("psai:maxweight");
const std::string PsaiXmlConstants::ELEMENT_GUI_INVENTORY_MONEY("psai:money");

const std::string PsaiXmlConstants::TYPE_GUI_MERCHANT_MESSAGE("psai:guimerchantmessage");
const std::string PsaiXmlConstants::ELEMENT_GUI_MERCHANT_COMMAND_TYPE("psai:commandtype");
const std::string PsaiXmlConstants::ELEMENT_GUI_MERCHANT_MESSAGE_CONTENT("psai:messagecontent");

const std::string PsaiXmlConstants::TYPE_GUI_SKILL_MESSAGE("psai:guiskillmessage");
const std::string PsaiXmlConstants::ELEMENT_GUI_SKILL_COMMAND("psai:command");
const std::string PsaiXmlConstants::ELEMENT_GUI_SKILL_COMMAND_DATA("psai:commanddata");
const std::string PsaiXmlConstants::ELEMENT_GUI_SKILL_STRENGTH("psai:strength");
const std::string PsaiXmlConstants::ELEMENT_GUI_SKILL_ENDURANCE("psai:endurance");
const std::string PsaiXmlConstants::ELEMENT_GUI_SKILL_AGILITY("psai:agility");
const std::string PsaiXmlConstants::ELEMENT_GUI_SKILL_WILL("psai:will");
const std::string PsaiXmlConstants::ELEMENT_GUI_SKILL_CHARISMA("psai:charisma");
const std::string PsaiXmlConstants::ELEMENT_GUI_SKILL_HIT_POINTS("psai:hitpoints");
const std::string PsaiXmlConstants::ELEMENT_GUI_SKILL_MANA("psai:mana");
const std::string PsaiXmlConstants::ELEMENT_GUI_SKILL_PHYSICAL_STAMINA("psai:physicalstamina");
const std::string PsaiXmlConstants::ELEMENT_GUI_SKILL_MENTAL_STAMINA("psai:mentalstamina");
const std::string PsaiXmlConstants::ELEMENT_GUI_SKILL_MAX_HIT_POINTS("psai:maxhitpoints");
const std::string PsaiXmlConstants::ELEMENT_GUI_SKILL_MAX_MANA("psai:max_mana");
const std::string PsaiXmlConstants::ELEMENT_GUI_SKILL_MAX_PHYSICAL_STAMINA("psai:maxphysicalstamina");
const std::string PsaiXmlConstants::ELEMENT_GUI_SKILL_MAX_MENTAL_STAMINA("psai:maxmentalstamina");

const std::string PsaiXmlConstants::TYPE_GUI_TARGET_UPDATE_MESSAGE("psai:guitargetupdatemessage");
const std::string PsaiXmlConstants::ELEMENT_GUI_TARGET_UPDATE_CLIENT_ID("psai:clientid");
const std::string PsaiXmlConstants::ELEMENT_GUI_TARGET_UPDATE_TARGET_ID("psai:targetid");

const std::string PsaiXmlConstants::TYPE_MODE_MESSAGE("psai:modemessage");
const std::string PsaiXmlConstants::ELEMENT_MODE_ACTOR_ID("psai:actorid");
const std::string PsaiXmlConstants::ELEMENT_MODE_MODE("psai:mode");
const std::string PsaiXmlConstants::ELEMENT_MODE_STANCE("psai:stance");

const std::string PsaiXmlConstants::TYPE_MOVE_LOCK_MESSAGE("psai:movelockmessage");
const std::string PsaiXmlConstants::ELEMENT_MOVE_LOCK_LOCKED("psai:locked");

const std::string PsaiXmlConstants::TYPE_NEW_SECTOR_MESSAGE("psai:newsectormessage");
const std::string PsaiXmlConstants::ELEMENT_NEW_SECTOR_OLD_SECTOR("psai:oldsector");
const std::string PsaiXmlConstants::ELEMENT_NEW_SECTOR_NEW_SECTOR("psai:newsector");
const std::string PsaiXmlConstants::ELEMENT_NEW_SECTOR_POSITION("psai:position");

const std::string PsaiXmlConstants::TYPE_PERSIST_ACTION_LOCATION_MESSAGE("psai:persistactionlocationmessage");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTION_LOCATION_SECTOR("psai:sector");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTION_LOCATION_MESH("psai:mesh");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTION_LOCATION_ID("psai:id");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTION_LOCATION_TYPE("psai:type");

const std::string PsaiXmlConstants::TYPE_PERSIST_ACTOR_MESSAGE("psai:persistactormessage");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_DR_MESSAGE("psai:drmessage");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_NAME("psai:name");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_GUILD("psai:guild");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_FACT_NAME("psai:factname");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTOR__FILE_NAME("psai:filename");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_RACE("psai:race");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_GENDER("psai:gender");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_HELM_GROUPS("psai:helmgroups");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_TOP("psai:top");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_BOTTOM("psai:bottom");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_OFFSET("psai:offset");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_TYPE("psai:type");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_MASQUERADED_TYPE("psai:masqueradedtype");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_SERVER_MODE("psai:servermode");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_PLAYER_ID("psai:playerid");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_GROUP_ID("psai:groupid");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_OWNER_EID("psai:ownereid");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_CONTROL("psai:control");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_FLAGS("psai:flags");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ACTOR_INSTANCE("psai:instance");

const std::string PsaiXmlConstants::TYPE_PERSIST_ITEM_MESSAGE("psai:persistitemmessage");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ITEM_NAME("psai:name");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ITEM_FACT_NAME("psai:factname");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ITEM_FILE_NAME("psai:filename");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ITEM_SECTOR("psai:sector");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ITEM_POSITION("psai:position");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ITEM_Y_ROTATION("psai:yrotation");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ITEM_ID("psai:id");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ITEM_TYPE("psai:type");
const std::string PsaiXmlConstants::ELEMENT_PERSIST_ITEM_FLAGS("psai:flags");

const std::string PsaiXmlConstants::TYPE_PLAY_SOUND_MESSAGE("psai:playsoundmessage");
const std::string PsaiXmlConstants::ELEMENT_PLAY_SOUND_SOUND("psai:sound");

const std::string PsaiXmlConstants::TYPE_QUEST_LIST_MESSAGE("psai:questlistmessage");
const std::string PsaiXmlConstants::ELEMENT_QUEST_LIST_QUEST_XML("psai:questxml");

const std::string PsaiXmlConstants::TYPE_QUEST_REWARD_MESSAGE("psai:questrewardmessage");
const std::string PsaiXmlConstants::ELEMENT_QUEST_REWARD_TYPE("psai:type");
const std::string PsaiXmlConstants::ELEMENT_QUEST_REWARD_NEW_VALUE("psai:newvalue");

const std::string PsaiXmlConstants::TYPE_REMOVE_OBJECT_MESSAGE("psai:removeobjectmessage");
const std::string PsaiXmlConstants::ELEMENT_REMOVE_OBJECT_OBJECT_ID("psai:objectid");

const std::string PsaiXmlConstants::TYPE_SOUND_EVENT_MESSAGE("psai:soundeventmessage");
const std::string PsaiXmlConstants::ELEMENT_SOUNT_EVENT_TYPE("psai:soundeventtype");

const std::string PsaiXmlConstants::TYPE_SPELL_CANCEL_MESSAGE("psai:spellcancelmessage");
// empty message

const std::string PsaiXmlConstants::TYPE_SPELL_CAST_MESSAGE("psai:spellcastmessage");
const std::string PsaiXmlConstants::ELEMENT_SPELL_CAST_SPELL("psai:spell");
const std::string PsaiXmlConstants::ELEMENT_SPELL_CAST_K_FACTOR("psai:kfactor");

const std::string PsaiXmlConstants::TYPE_STAT_DR_MESSAGE("psai:statdrmessage");
const std::string PsaiXmlConstants::ELEMENT_STAT_DR_USEFUL("psai:useful");
const std::string PsaiXmlConstants::ELEMENT_STAT_DR_ENTITY_ID("psai:entityid");
const std::string PsaiXmlConstants::ELEMENT_STAT_DR_STATS_DIRTY("psai:statsdirty");
const std::string PsaiXmlConstants::ELEMENT_STAT_DR_COUNTER("psai:counter");

const std::string PsaiXmlConstants::TYPE_STATS_MESSAGE("psai:statsmessage");
const std::string PsaiXmlConstants::ELEMENT_STATS_HIT_POINTS("psai:hp");
const std::string PsaiXmlConstants::ELEMENT_STATS_MANA("psai:mana");
const std::string PsaiXmlConstants::ELEMENT_STATS_WEIGHT("psai:weight");
const std::string PsaiXmlConstants::ELEMENT_STATS_CAPACITY("psai:capacity");

const std::string PsaiXmlConstants::TYPE_STOP_EFFECT_MESSAGE("psai:stopeffectmessage");
const std::string PsaiXmlConstants::ELEMENT_STOP_EFFECT_UID("psai:uid");

const std::string PsaiXmlConstants::TYPE_SYSTEM_MESSAGE("psai:systemmessage");
const std::string PsaiXmlConstants::ELEMENT_SYSTEM_TEXT("psai:text");
const std::string PsaiXmlConstants::ELEMENT_SYSTEM_TYPE("psai:type");

const std::string PsaiXmlConstants::TYPE_UPDATE_OBJECT_NAME_MESSAGE("psai:updateobjectname");
const std::string PsaiXmlConstants::ELEMENT_UPDATE_OBJECT_NAME_OBJECT_ID("psai:objectid");
const std::string PsaiXmlConstants::ELEMENT_UPDATE_OBJECT_NAME_NEW_NAME("psai:newname");

const std::string PsaiXmlConstants::TYPE_VIEW_ITEM_DESCRIPTION_MESSAGE("psai:viewitemdescriptionmessage");
const std::string PsaiXmlConstants::ELEMENT_VIEW_ITEM_DESCRIPTION_ITEM_NAME("psai:itemname");
const std::string PsaiXmlConstants::ELEMENT_VIEW_ITEM_DESCRIPTION_ITEM_DESCRIPTION("psai:itemdescription");
const std::string PsaiXmlConstants::ELEMENT_VIEW_ITEM_DESCRIPTION_STACK_COUNT("psai:stackcount");
const std::string PsaiXmlConstants::ELEMENT_VIEW_ITEM_DESCRIPTION_CONTAINER_ID("psai:containerid");
const std::string PsaiXmlConstants::ELEMENT_VIEW_ITEM_DESCRIPTION_SLOT_ID("psai:slotid");
const std::string PsaiXmlConstants::ELEMENT_VIEW_ITEM_DESCRIPTION_HAS_CONTENTS("psai:hascontents");
const std::string PsaiXmlConstants::ELEMENT_VIEW_ITEM_DESCRIPTION_TO_CLIENT("psai:toclient");
const std::string PsaiXmlConstants::ELEMENT_VIEW_ITEM_DESCRIPTION_CONTENTS("psai:contents");

const std::string PsaiXmlConstants::TYPE_VIEW_ITEM_UPDATE_MESSAGE("psai:viewitemupdatemessage");
const std::string PsaiXmlConstants::ELEMENT_VIEW_ITEM_UPDATE_CLEAR_SLOT("psai:clearslot");
const std::string PsaiXmlConstants::ELEMENT_VIEW_ITEM_UPDATE_TO_CLIENT("psai:toclient");
const std::string PsaiXmlConstants::ELEMENT_VIEW_ITEM_UPDATE_CONTAINER_ID("psai:containerid");
const std::string PsaiXmlConstants::ELEMENT_VIEW_ITEM_UPDATE_NAME("psai:name");
const std::string PsaiXmlConstants::ELEMENT_VIEW_ITEM_UPDATE_ICON("psai:icon");
const std::string PsaiXmlConstants::ELEMENT_VIEW_ITEM_UPDATE_SLOT_ID("psai:slotid");
const std::string PsaiXmlConstants::ELEMENT_VIEW_ITEM_UPDATE_STACK_COUNT("psai:stackcount");
const std::string PsaiXmlConstants::ELEMENT_VIEW_ITEM_UPDATE_OWNER_ID("psai:ownerid");

const std::string PsaiXmlConstants::TYPE_WEATHER_MESSAGE("psai:weathermessage");
const std::string PsaiXmlConstants::ELEMENT_WEATHER_MINUTE("psai:minute");
const std::string PsaiXmlConstants::ELEMENT_WEATHER_HOUR("psai:hour");
const std::string PsaiXmlConstants::ELEMENT_WEATHER_DAY("psai:day");
const std::string PsaiXmlConstants::ELEMENT_WEATHER_MONTH("psai:month");
const std::string PsaiXmlConstants::ELEMENT_WEATHER_YEAR("psai:year");
const std::string PsaiXmlConstants::ELEMENT_WEATHER_WEATHER("psai:weather");

const std::string PsaiXmlConstants::XML_HEADER("<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
const std::string PsaiXmlConstants::PSAI_MESSAGE_ELEMENT_START("<psai:psaimessage>");
const std::string PsaiXmlConstants::PSAI_MESSAGE_ELEMENT_END("</psai:psaimessage>");

const std::string PsaiXmlConstants::PSAI_SCHEMA_LOCATION("xsi:schemaLocation=\"http://www.zarniwoops.plus.com/psai/xml http://www.zarniwoops.plus.com/psai/xml/psaiXmlMessages.xsd\"");
const std::string PsaiXmlConstants::PSAI_NAMESPACE("xmlns:psai=\"http://www.zarniwoops.plus.com/psai/xml\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\"");

#endif /* PSAIXMLCONSTANTS_H_ */
