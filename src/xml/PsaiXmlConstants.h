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

typedef std::string String;

namespace PsaiXmlConstants
{
		// support type names
		extern const String TYPE_VECTOR_3D;
		extern const String TYPE_CONTAINER_CONTENTS;
		extern const String TYPE_ITEM_DESCRIPTION;
		extern const String TYPE_NETWORK_DETAIL_SKILL;
		extern const String TYPE_NET_WEATHER_INFO;
		extern const String TYPE_PS_MONEY;

		// enumerated types

		// Message Class Types
		extern const String MSGTYPE_PING;
		extern const String MSGTYPE_AUTHENTICATE;
		extern const String MSGTYPE_PREAUTHENTICATE;
		extern const String MSGTYPE_PREAUTHAPPROVED;
		extern const String MSGTYPE_AUTHAPPROVED;
		extern const String MSGTYPE_AUTHREJECTED;
		extern const String MSGTYPE_DISCONNECT;
		extern const String MSGTYPE_CHAT;
		extern const String MSGTYPE_GUILDCMD;
		extern const String MSGTYPE_USERCMD;
		extern const String MSGTYPE_SYSTEM;
		extern const String MSGTYPE_CHARREJECT;
		extern const String MSGTYPE_DEAD_RECKONING;
		extern const String MSGTYPE_CELPERSIST;
		extern const String MSGTYPE_CONFIRMQUESTION;
		extern const String MSGTYPE_USERACTION;
		extern const String MSGTYPE_ADMINCMD;
		extern const String MSGTYPE_GUIINTERACT;
		extern const String MSGTYPE_GUIINVENTORY;
		extern const String MSGTYPE_VIEW_ITEM;
		extern const String MSGTYPE_VIEW_CONTAINER;
		extern const String MSGTYPE_VIEW_SKETCH;
		extern const String MSGTYPE_VIEW_ACTION_LOCATION;
		extern const String MSGTYPE_READ_BOOK;
		extern const String MSGTYPE_WRITE_BOOK;
		extern const String MSGTYPE_UPDATE_ITEM;
		extern const String MSGTYPE_MODE;
		extern const String MSGTYPE_WEATHER;
		extern const String MSGTYPE_NEWSECTOR;
		extern const String MSGTYPE_GUIGUILD;
		extern const String MSGTYPE_EQUIPMENT;
		extern const String MSGTYPE_GUIEXCHANGE;
		extern const String MSGTYPE_EXCHANGE_REQUEST;
		extern const String MSGTYPE_EXCHANGE_ADD_ITEM;
		extern const String MSGTYPE_EXCHANGE_REMOVE_ITEM;
		extern const String MSGTYPE_EXCHANGE_ACCEPT;
		extern const String MSGTYPE_EXCHANGE_STATUS;
		extern const String MSGTYPE_EXCHANGE_END;
		extern const String MSGTYPE_EXCHANGE_MONEY;
		extern const String MSGTYPE_GUIMERCHANT;
		extern const String MSGTYPE_GROUPCMD;
		extern const String MSGTYPE_GUIGROUP;
		extern const String MSGTYPE_STATDRUPDATE;
		extern const String MSGTYPE_SPELL_BOOK;
		extern const String MSGTYPE_GLYPH_REQUEST;
		extern const String MSGTYPE_GLYPH_ASSEMBLE;
		extern const String MSGTYPE_PURIFY_GLYPH;
		extern const String MSGTYPE_SPELL_CAST;
		extern const String MSGTYPE_SPELL_CANCEL;
		extern const String MSGTYPE_EFFECT;
		extern const String MSGTYPE_EFFECT_STOP;
		extern const String MSGTYPE_NPCAUTHENT;
		extern const String MSGTYPE_NPCLIST;
		extern const String MSGTYPE_GUITARGETUPDATE;
		extern const String MSGTYPE_MAPLIST;
		extern const String MSGTYPE_NPCOMMANDLIST;
		extern const String MSGTYPE_ALLENTITYPOS;
		extern const String MSGTYPE_NEW_NPC;
		extern const String MSGTYPE_PETITION;
		extern const String MSGTYPE_MSGSTRINGS;
		extern const String MSGTYPE_CHARACTERDATA;
		extern const String MSGTYPE_AUTHCHARACTER;
		extern const String MSGTYPE_AUTHCHARACTERAPPROVED;
		extern const String MSGTYPE_CHAR_CREATE_CP;
		extern const String MSGTYPE_COMBATEVENT;
		extern const String MSGTYPE_LOOT;
		extern const String MSGTYPE_LOOTITEM;
		extern const String MSGTYPE_LOOTREMOVE;
		extern const String MSGTYPE_GUISKILL;
		extern const String MSGTYPE_OVERRIDEACTION;
		extern const String MSGTYPE_QUESTLIST;
		extern const String MSGTYPE_QUESTINFO;
		extern const String MSGTYPE_GMGUI;
		extern const String MSGTYPE_WORKCMD;
		extern const String MSGTYPE_BUDDY_LIST;
		extern const String MSGTYPE_BUDDY_STATUS;
		extern const String MSGTYPE_MOTD;
		extern const String MSGTYPE_MOTDREQUEST;
		extern const String MSGTYPE_QUESTION;
		extern const String MSGTYPE_QUESTIONRESPONSE;
		extern const String MSGTYPE_SLOT_MOVEMENT;
		extern const String MSGTYPE_QUESTIONCANCEL;
		extern const String MSGTYPE_GUILDMOTDSET;
		extern const String MSGTYPE_PLAYSOUND;
		extern const String MSGTYPE_CHARACTERDETAILS;
		extern const String MSGTYPE_CHARDETAILSREQUEST;
		extern const String MSGTYPE_CHARDESCUPDATE;
		extern const String MSGTYPE_FACTION_INFO;
		extern const String MSGTYPE_QUESTREWARD;
		extern const String MSGTYPE_NAMECHANGE;
		extern const String MSGTYPE_GUILDCHANGE;
		extern const String MSGTYPE_LOCKPICK;
		extern const String MSGTYPE_GMSPAWNITEMS;
		extern const String MSGTYPE_GMSPAWNTYPES;
		extern const String MSGTYPE_GMSPAWNITEM;
		extern const String MSGTYPE_ADVICE;
		extern const String MSGTYPE_ACTIVEMAGIC;
		extern const String MSGTYPE_GROUPCHANGE;
		extern const String MSGTYPE_MAPACTION;
		extern const String MSGTYPE_CLIENTSTATUS;
		extern const String MSGTYPE_TUTORIAL;
		extern const String MSGTYPE_BANKING;
		extern const String MSGTYPE_REQUESTMOVEMENTS;
		extern const String MSGTYPE_MOVEINFO;
		extern const String MSGTYPE_MOVEMOD;
		extern const String MSGTYPE_MOVELOCK;
		extern const String MSGTYPE_CHAR_DELETE;
		extern const String MSGTYPE_CHAR_CREATE_PARENTS;
		extern const String MSGTYPE_CHAR_CREATE_CHILDHOOD;
		extern const String MSGTYPE_CHAR_CREATE_LIFEEVENTS;
		extern const String MSGTYPE_CHAR_CREATE_UPLOAD;
		extern const String MSGTYPE_CHAR_CREATE_VERIFY;
		extern const String MSGTYPE_CHAR_CREATE_NAME;
		extern const String MSGTYPE_PERSIST_WORLD_REQUEST;
		extern const String MSGTYPE_PERSIST_WORLD;
		extern const String MSGTYPE_PERSIST_ACTOR_REQUEST;
		extern const String MSGTYPE_PERSIST_ACTOR;
		extern const String MSGTYPE_PERSIST_ITEM;
		extern const String MSGTYPE_PERSIST_ACTIONLOCATION;
		extern const String MSGTYPE_PERSIST_ALL;
		extern const String MSGTYPE_REMOVE_OBJECT;
		extern const String MSGTYPE_CHANGE_TRAIT;
		extern const String MSGTYPE_DAMAGE_EVENT;
		extern const String MSGTYPE_DEATH_EVENT;
		extern const String MSGTYPE_TARGET_EVENT;
		extern const String MSGTYPE_ZPOINT_EVENT;
		extern const String MSGTYPE_BUY_EVENT;
		extern const String MSGTYPE_SELL_EVENT;
		extern const String MSGTYPE_PICKUP_EVENT;
		extern const String MSGTYPE_DROP_EVENT;
		extern const String MSGTYPE_LOOT_EVENT;
		extern const String MSGTYPE_CONNECT_EVENT;
		extern const String MSGTYPE_MOVEMENT_EVENT;
		extern const String MSGTYPE_GENERIC_EVENT;
		extern const String MSGTYPE_SOUND_EVENT;
		extern const String MSGTYPE_CHAR_CREATE_TRAITS;
		extern const String MSGTYPE_STATS;
		extern const String MSGTYPE_NPC_SETOWNER;
		extern const String MSGTYPE_PET_COMMAND;
		extern const String MSGTYPE_PET_SKILL;
		extern const String MSGTYPE_CRAFT_INFO;
		extern const String MSGTYPE_PETITION_REQUEST;
		extern const String MSGTYPE_HEART_BEAT;
		extern const String MSGTYPE_NPC_COMMAND;
		extern const String MSGTYPE_MINIGAME_STARTSTOP;
		extern const String MSGTYPE_MINIGAME_BOARD;
		extern const String MSGTYPE_MINIGAME_UPDATE;
		extern const String MSGTYPE_ENTRANCE;
		extern const String MSGTYPE_GMEVENT_LIST;
		extern const String MSGTYPE_GMEVENT_INFO;
		extern const String MSGTYPE_SEQUENCE;
		extern const String MSGTYPE_NPCRACELIST;
		extern const String MSGTYPE_INTRODUCTION;

		// Chat Message Types
		extern const String CHAT_SYSTEM;
		extern const String CHAT_SAY;
		extern const String CHAT_TELL;
		extern const String CHAT_GROUP;
		extern const String CHAT_GUILD;
		extern const String CHAT_AUCTION;
		extern const String CHAT_SHOUT;
		extern const String CHAT_ME;
		extern const String CHAT_TELLSELF;
		extern const String CHAT_REPORT;
		extern const String CHAT_ADVISOR;
		extern const String CHAT_ADVICE;
		extern const String CHAT_ADVICE_LIST;
		extern const String CHAT_SERVER_TELL;
		extern const String CHAT_GM;
		extern const String CHAT_SERVER_INFO;
		extern const String CHAT_MY;
		extern const String CHAT_NPC;
		extern const String CHAT_SYSTEM_BASE;
		extern const String CHAT_PET_ACTION;
		extern const String CHAT_NPC_ME;
		extern const String CHAT_NPC_MY;
		extern const String CHAT_NPC_NARRATE;

		// Combat Event Types
		extern const String COMBAT_DODGE;
		extern const String COMBAT_BLOCK;
		extern const String COMBAT_DAMAGE;
		extern const String COMBAT_MISS;
		extern const String COMBAT_OUTOFRANGE;
		extern const String COMBAT_DEATH;
		extern const String COMBAT_DAMAGE_NEARLY_DEAD;

		// Persist Item Flags
		extern const String PERSIST_ITEM_NONE;
		extern const String PERSIST_ITEM_NOPICKUP;
		extern const String PERSIST_ITEM_COLLIDE;

		// Persist Actor flags
		extern const String PERSIST_ACTOR_NONE;
		extern const String PERSIST_ACTOR_NPC;
		extern const String PERSIST_ACTOR_NAME_KNOWN;

		// Dead Reckoning Data Flags
		extern const String DR_DATA_NOT_MOVING;
		extern const String DR_DATA_ACTOR_MODE;
		extern const String DR_DATA_ANG_VELOCITY;
		extern const String DR_DATA_X_VELOCITY;
		extern const String DR_DATA_Y_VELOCITY;
		extern const String DR_DATA_Z_VELOCITY;
		extern const String DR_DATA_X_WORLDVELOCITY;
		extern const String DR_DATA_Y_WORLDVELOCITY;
		extern const String DR_DATA_Z_WORLDVELOCITY;
		extern const String DR_DATA_ALL_DATA;

		// Equipment Message Commands
		extern const String EQUIP;
		extern const String DEEQUIP;

		// Player Modes
		extern const String PLAYER_MODE_PEACE;
		extern const String PLAYER_MODE_COMBAT;
		extern const String PLAYER_MODE_SPELL_CASTING;
		extern const String PLAYER_MODE_WORK;
		extern const String PLAYER_MODE_DEAD;
		extern const String PLAYER_MODE_SIT;
		extern const String PLAYER_MODE_OVERWEIGHT;
		extern const String PLAYER_MODE_EXHAUSTED;
		extern const String PLAYER_MODE_DEFEATED;

		// Quest Reward Message Type
		extern const String QUEST_REWARD_OFFER_REWARDS;
		extern const String QUEST_REWARD_SELECT_REWARDS;

		// View Item Message Type
		extern const String VIEW_ITEM_REQUEST;
		extern const String VIEW_ITEM_DESCRIPTION;

		// System Message Types
		extern const String SYSTEM_MSG_ERROR;
		extern const String SYSTEM_MSG_INFO;
		extern const String SYSTEM_MSG_INFO_SERVER;
		extern const String SYSTEM_MSG_RESULT;
		extern const String SYSTEM_MSG_OK;
		extern const String SYSTEM_MSG_WHO;
		extern const String SYSTEM_MSG_ACK;
		extern const String SYSTEM_MSG_INFO_BASE;
		extern const String SYSTEM_MSG_COMBAT;
		extern const String SYSTEM_MSG_COMBAT_DODGE;
		extern const String SYSTEM_MSG_COMBAT_BLOCK;
		extern const String SYSTEM_MSG_COMBAT_HITYOU;
		extern const String SYSTEM_MSG_COMBAT_HITOTHER;
		extern const String SYSTEM_MSG_COMBAT_YOURHIT;
		extern const String SYSTEM_MSG_COMBAT_OTHERHIT;
		extern const String SYSTEM_MSG_COMBAT_MISS;
		extern const String SYSTEM_MSG_COMBAT_OWN_DEATH;
		extern const String SYSTEM_MSG_COMBAT_DEATH;
		extern const String SYSTEM_MSG_COMBAT_VICTORY;
		extern const String SYSTEM_MSG_COMBAT_STANCE;
		extern const String SYSTEM_MSG_COMBAT_NEARLY_DEAD;
		extern const String SYSTEM_MSG_LOOT;
		extern const String SYSTEM_MSG_SEC;
		extern const String SYSTEM_SEC_LEVEL0;
		extern const String SYSTEM_SEC_LEVEL1;
		extern const String SYSTEM_SEC_LEVEL2;
		extern const String SYSTEM_SEC_LEVEL3;
		extern const String SYSTEM_SEC_LEVEL4;
		extern const String SYSTEM_MSG_PURCHASE;

		// GUI Inventory Message Types
		extern const String GUI_INVENTORY_LIST;
		extern const String GUI_INVENTORY_REQUEST;
		extern const String GUI_INVENTORY_UPDATE_REQUEST;
		extern const String GUI_INVENTORY_UPDATE_LIST;

		// Player Weather Mode
		extern const String WEATHER_MODE_DAYNIGHT;
		extern const String WEATHER_MODE_WEATHER;

		// Weather Types
		extern const String WEATHER_TYPE_RAIN;
		extern const String WEATHER_TYPE_SNOW;
		extern const String WEATHER_TYPE_FOG;
		extern const String WEATHER_TYPE_LIGHTNING;

		// Active Magic Command Type
		extern const String ACTIVE_MAGIC_ADD_CATEGORY;
		extern const String ACTIVE_MAGIC_REMOVE_CATEGORY;

		// GUI Interaction TYpes
		extern const String GUI_INTERACTION_PICKUP;
		extern const String GUI_INTERACTION_EXAMINE;
		extern const String GUI_INTERACTION_UNLOCK;
		extern const String GUI_INTERACTION_LOOT;
		extern const String GUI_INTERACTION_BUYSELL;
		extern const String GUI_INTERACTION_GIVE;
		extern const String GUI_INTERACTION_CLOSE;
		extern const String GUI_INTERACTION_USE;
		extern const String GUI_INTERACTION_PLAYERDESC;
		extern const String GUI_INTERACTION_ATTACK;
		extern const String GUI_INTERACTION_COMBINE;
		extern const String GUI_INTERACTION_EXCHANGE;
		extern const String GUI_INTERACTION_TRAIN;
		extern const String GUI_INTERACTION_NPCTALK;
		extern const String GUI_INTERACTION_VIEWSTATS;
		extern const String GUI_INTERACTION_DISMISS;
		extern const String GUI_INTERACTION_MARRIAGE;
		extern const String GUI_INTERACTION_DIVORCE;
		extern const String GUI_INTERACTION_PLAYGAME;
		extern const String GUI_INTERACTION_ENTER;
		extern const String GUI_INTERACTION_LOCK;
		extern const String GUI_INTERACTION_ENTERLOCKED;
		extern const String GUI_INTERACTION_BANK;
		extern const String GUI_INTERACTION_INTRODUCE;

		// GUI Merchant Message Types
		extern const String GUI_MERCHANT_MESSAGE_REQUEST;
		extern const String GUI_MERCHANT_MESSAGE_MERCHANT;
		extern const String GUI_MERCHANT_MESSAGE_CATEGORIES;
		extern const String GUI_MERCHANT_MESSAGE_CATEGORY;
		extern const String GUI_MERCHANT_MESSAGE_MONEY;
		extern const String GUI_MERCHANT_MESSAGE_ITEMS;
		extern const String GUI_MERCHANT_MESSAGE_BUY;
		extern const String GUI_MERCHANT_MESSAGE_SELL;
		extern const String GUI_MERCHANT_MESSAGE_VIEW;
		extern const String GUI_MERCHANT_MESSAGE_CANCEL;

		// GUI Skill Message Types
		extern const String GUI_SKILL_MESSAGE_REQUEST;
		extern const String GUI_SKILL_MESSAGE_BUY_SKILL;
		extern const String GUI_SKILL_MESSAGE_SKILL_LIST;
		extern const String GUI_SKILL_MESSAGE_SKILL_SELECTED;
		extern const String GUI_SKILL_MESSAGE_DESCRIPTION;
		extern const String GUI_SKILL_MESSAGE_QUIT;

		// Message types and elements
		extern const String ELEMENT_ALL_MESSAGE_TYPE;

		extern const String TYPE_CHAT_MESSAGE;
		extern const String ELEMENT_CHAT_TEXT;
		extern const String ELEMENT_CHAT_SPEAKER;
		extern const String ELEMENT_CHAT_SPEAKER_FROM;
		extern const String ELEMENT_CHAT_SPEAKER_TO;
		extern const String ELEMENT_CHAT_CHAT_TYPE;

		extern const String TYPE_COMBAT_MESSAGE;
		extern const String ELEMENT_COMBAT_ATTACKER_ID;
		extern const String ELEMENT_COMBAT_TARGET_ID;
		extern const String ELEMENT_COMBAT_DAMAGE;
		extern const String ELEMENT_COMBAT_TARGET_LOCATION;
		extern const String ELEMENT_COMBAT_EVENT_TYPE;

		extern const String TYPE_DR_MESSAGE;
		extern const String ELEMENT_DR_COUNTER;
		extern const String ELEMENT_DR_ON_GROUND;
		extern const String ELEMENT_DR_POSITION;
		extern const String ELEMENT_DR_VELOCITY;
		extern const String ELEMENT_DR_WORLD_VELOCITY;
		extern const String ELEMENT_DR_Y_ROTATION;
		extern const String ELEMENT_DR_SECTOR_NAME;
		extern const String ELEMENT_DR_ANGULAR_VELOCITY;
		extern const String ELEMENT_DR_ENTITY_ID;

		extern const String TYPE_EFFECT_MESSAGE;
		extern const String ELEMENT_EFFECT_MESSAGE_NAME;
		extern const String ELEMENT_EFFECT_MESSAGE_ANCHOR_ID;
		extern const String ELEMENT_EFFECT_MESSAGE_TARGET_ID;
		extern const String ELEMENT_EFFECT_MESSAGE_CAST_DURATION;
		extern const String ELEMENT_EFFECT_MESSAGE_UID;
		extern const String ELEMENT_EFFECT_MESSAGE_EFFECT_TEXT;

		extern const String TYPE_GUI_ACTIVE_MAGIC_MESSAGE;
		extern const String ELEMENT_GUI_ACTIVE_MAGIC_CATEGORY_LIST;
		extern const String ELEMENT_GUI_ACTIVE_MAGIC_COMMAND;

		extern const String TYPE_GUI_INTERACT_MESSAGE;
		extern const String ELEMENT_GUI_INTERACT_TYPE;

		extern const String TYPE_GUI_INVENTORY_MESSAGE;
		extern const String ELEMENT_GUI_INVENTORY_ITEMS;
		extern const String ELEMENT_GUI_INVENTORY_TOTAL_ITEMS;
		extern const String ELEMENT_GUI_INVENTORY_TOTAL_EMPTIED_SLOTS;
		extern const String ELEMENT_GUI_INVENTORY_MAX_WEIGHT;
		extern const String ELEMENT_GUI_INVENTORY_MONEY;

		extern const String TYPE_GUI_MERCHANT_MESSAGE;
		extern const String ELEMENT_GUI_MERCHANT_COMMAND_TYPE;
		extern const String ELEMENT_GUI_MERCHANT_MESSAGE_CONTENT;

		extern const String TYPE_GUI_SKILL_MESSAGE;
		extern const String ELEMENT_GUI_SKILL_COMMAND;
		extern const String ELEMENT_GUI_SKILL_COMMAND_DATA;
		extern const String ELEMENT_GUI_SKILL_STRENGTH;
		extern const String ELEMENT_GUI_SKILL_ENDURANCE;
		extern const String ELEMENT_GUI_SKILL_AGILITY;
		extern const String ELEMENT_GUI_SKILL_WILL;
		extern const String ELEMENT_GUI_SKILL_CHARISMA;
		extern const String ELEMENT_GUI_SKILL_HIT_POINTS;
		extern const String ELEMENT_GUI_SKILL_MANA;
		extern const String ELEMENT_GUI_SKILL_PHYSICAL_STAMINA;
		extern const String ELEMENT_GUI_SKILL_MENTAL_STAMINA;
		extern const String ELEMENT_GUI_SKILL_MAX_HIT_POINTS;
		extern const String ELEMENT_GUI_SKILL_MAX_MANA;
		extern const String ELEMENT_GUI_SKILL_MAX_PHYSICAL_STAMINA;
		extern const String ELEMENT_GUI_SKILL_MAX_MENTAL_STAMINA;

		extern const String TYPE_GUI_TARGET_UPDATE_MESSAGE;
		extern const String ELEMENT_GUI_TARGET_UPDATE_CLIENT_ID;
		extern const String ELEMENT_GUI_TARGET_UPDATE_TARGET_ID;

		extern const String TYPE_MODE_MESSAGE;
		extern const String ELEMENT_MODE_ACTOR_ID;
		extern const String ELEMENT_MODE_MODE;
		extern const String ELEMENT_MODE_STANCE;

		extern const String TYPE_MOVE_LOCK_MESSAGE;
		extern const String ELEMENT_MOVE_LOCK_LOCKED;

		extern const String TYPE_NEW_SECTOR_MESSAGE;
		extern const String ELEMENT_NEW_SECTOR_OLD_SECTOR;
		extern const String ELEMENT_NEW_SECTOR_NEW_SECTOR;
		extern const String ELEMENT_NEW_SECTOR_POSITION;

		extern const String TYPE_PERSIST_ACTION_LOCATION_MESSAGE;
		extern const String ELEMENT_PERSIST_ACTION_LOCATION_SECTOR;
		extern const String ELEMENT_PERSIST_ACTION_LOCATION_MESH;
		extern const String ELEMENT_PERSIST_ACTION_LOCATION_ID;
		extern const String ELEMENT_PERSIST_ACTION_LOCATION_TYPE;

		extern const String TYPE_PERSIST_ACTOR_MESSAGE;
		extern const String ELEMENT_PERSIST_ACTOR_DR_MESSAGE;
		extern const String ELEMENT_PERSIST_ACTOR_NAME;
		extern const String ELEMENT_PERSIST_ACTOR_GUILD;
		extern const String ELEMENT_PERSIST_ACTOR_FACT_NAME;
		extern const String ELEMENT_PERSIST_ACTOR__FILE_NAME;
		extern const String ELEMENT_PERSIST_ACTOR_RACE;
		extern const String ELEMENT_PERSIST_ACTOR_GENDER;
		extern const String ELEMENT_PERSIST_ACTOR_HELM_GROUPS;
		extern const String ELEMENT_PERSIST_ACTOR_TOP;
		extern const String ELEMENT_PERSIST_ACTOR_BOTTOM;
		extern const String ELEMENT_PERSIST_ACTOR_OFFSET;
		extern const String ELEMENT_PERSIST_ACTOR_TYPE;
		extern const String ELEMENT_PERSIST_ACTOR_MASQUERADED_TYPE;
		extern const String ELEMENT_PERSIST_ACTOR_SERVER_MODE;
		extern const String ELEMENT_PERSIST_ACTOR_PLAYER_ID;
		extern const String ELEMENT_PERSIST_ACTOR_GROUP_ID;
		extern const String ELEMENT_PERSIST_ACTOR_OWNER_EID;
		extern const String ELEMENT_PERSIST_ACTOR_CONTROL;
		extern const String ELEMENT_PERSIST_ACTOR_FLAGS;
		extern const String ELEMENT_PERSIST_ACTOR_INSTANCE;

		extern const String TYPE_PERSIST_ITEM_MESSAGE;
		extern const String ELEMENT_PERSIST_ITEM_NAME;
		extern const String ELEMENT_PERSIST_ITEM_FACT_NAME;
		extern const String ELEMENT_PERSIST_ITEM_FILE_NAME;
		extern const String ELEMENT_PERSIST_ITEM_SECTOR;
		extern const String ELEMENT_PERSIST_ITEM_POSITION;
		extern const String ELEMENT_PERSIST_ITEM_Y_ROTATION;
		extern const String ELEMENT_PERSIST_ITEM_ID;
		extern const String ELEMENT_PERSIST_ITEM_TYPE;
		extern const String ELEMENT_PERSIST_ITEM_FLAGS;

		extern const String TYPE_PLAY_SOUND_MESSAGE;
		extern const String ELEMENT_PLAY_SOUND_SOUND;

		extern const String TYPE_QUEST_LIST_MESSAGE;
		extern const String ELEMENT_QUEST_LIST_QUEST_XML;

		extern const String TYPE_QUEST_REWARD_MESSAGE;
		extern const String ELEMENT_QUEST_REWARD_TYPE;
		extern const String ELEMENT_QUEST_REWARD_NEW_VALUE;

		extern const String TYPE_REMOVE_OBJECT_MESSAGE;
		extern const String ELEMENT_REMOVE_OBJECT_OBJECT_ID;

		extern const String TYPE_SOUND_EVENT_MESSAGE;
		extern const String ELEMENT_SOUNT_EVENT_TYPE;

		extern const String TYPE_SPELL_CANCEL_MESSAGE;
		// empty message

		extern const String TYPE_SPELL_CAST_MESSAGE;
		extern const String ELEMENT_SPELL_CAST_SPELL;
		extern const String ELEMENT_SPELL_CAST_K_FACTOR;

		extern const String TYPE_STAT_DR_MESSAGE;
		extern const String ELEMENT_STAT_DR_USEFUL;
		extern const String ELEMENT_STAT_DR_ENTITY_ID;
		extern const String ELEMENT_STAT_DR_STATS_DIRTY;
		extern const String ELEMENT_STAT_DR_COUNTER;

		extern const String TYPE_STATS_MESSAGE;
		extern const String ELEMENT_STATS_HIT_POINTS;
		extern const String ELEMENT_STATS_MANA;
		extern const String ELEMENT_STATS_WEIGHT;
		extern const String ELEMENT_STATS_CAPACITY;

		extern const String TYPE_STOP_EFFECT_MESSAGE;
		extern const String ELEMENT_STOP_EFFECT_UID;

		extern const String TYPE_SYSTEM_MESSAGE;
		extern const String ELEMENT_TEXT;
		extern const String ELEMENT_SYSTEM_TYPE;

		extern const String TYPE_UPDATE_OBJECT_NAME_MESSAGE;
		extern const String ELEMENT_UPDATE_OBJECT_NAME_OBJECT_ID;
		extern const String ELEMENT_UPDATE_OBJECT_NAME_NEW_NAME;

		extern const String TYPE_VIEW_ITEM_DESCRIPTION_MESSAGE;
		extern const String ELEMENT_VIEW_ITEM_DESCRIPTION_ITEM_NAME;
		extern const String ELEMENT_VIEW_ITEM_DESCRIPTION_ITEM_DESCRIPTION;
		extern const String ELEMENT_VIEW_ITEM_DESCRIPTION_STACK_COUNT;
		extern const String ELEMENT_VIEW_ITEM_DESCRIPTION_CONTAINER_ID;
		extern const String ELEMENT_VIEW_ITEM_DESCRIPTION_SLOT_ID;
		extern const String ELEMENT_VIEW_ITEM_DESCRIPTION_HAS_CONTENTS;
		extern const String ELEMENT_VIEW_ITEM_DESCRIPTION_TO_CLIENT;
		extern const String ELEMENT_VIEW_ITEM_DESCRIPTION_CONTENTS;

		extern const String TYPE_VIEW_ITEM_UPDATE_MESSAGE;
		extern const String ELEMENT_VIEW_ITEM_UPDATE_CLEAR_SLOT;
		extern const String ELEMENT_VIEW_ITEM_UPDATE_TO_CLIENT;
		extern const String ELEMENT_VIEW_ITEM_UPDATE_CONTAINER_ID;
		extern const String ELEMENT_VIEW_ITEM_UPDATE_NAME;
		extern const String ELEMENT_VIEW_ITEM_UPDATE_ICON;
		extern const String ELEMENT_VIEW_ITEM_UPDATE_SLOT_ID;
		extern const String ELEMENT_VIEW_ITEM_UPDATE_STACK_COUNT;
		extern const String ELEMENT_VIEW_ITEM_UPDATE_OWNER_ID;

		extern const String TYPE_WEATHER_MESSAGE;
		extern const String ELEMENT_WEATHER_MINUTE;
		extern const String ELEMENT_WEATHER_HOUR;
		extern const String ELEMENT_WEATHER_DAY;
		extern const String ELEMENT_WEATHER_MONTH;
		extern const String ELEMENT_WEATHER_YEAR;
		extern const String ELEMENT_WEATHER_WEATHER;

		extern const String XML_HEADER;
		extern const String PSAI_MESSAGE_ELEMENT_START;
		extern const String PSAI_MESSAGE_ELEMENT_END;

		extern const String PSAI_SCHEMA_LOCATION;
		extern const String PSAI_NAMESPACE;

		extern const String ELEMENT_VECTOR_X;
		extern const String ELEMENT_VECTOR_Y;
		extern const String ELEMENT_VECTOR_Z;

		extern const String ELEMENT_CONTAINER_CONTENTS_NAME;
		extern const String ELEMENT_CONTAINER_CONTENTS_ICON;
		extern const String ELEMENT_CONTAINER_CONTENTS_SLOT_ID;
		extern const String ELEMENT_CONTAINER_CONTENTS_STACK_COUNT;
		extern const String ELEMENT_CONTAINER_CONTENTS_PURIFY_STATUS;

		extern const String ELEMENT_CLIENT_NUM;
};

#endif /* PSAIXMLCONSTANTS_H_ */
