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

namespace PsaiXmlConstants
{
		// support type names
		extern const std::string TYPE_VECTOR_3D;
		extern const std::string TYPE_CONTAINER_CONTENTS;
		extern const std::string TYPE_ITEM_DESCRIPTION;
		extern const std::string TYPE_NETWORK_DETAIL_SKILL;
		extern const std::string TYPE_NET_WEATHER_INFO;
		extern const std::string TYPE_PS_MONEY;

		// enumerated types

		// Message Class Types
		extern const std::string MSGTYPE_PING;
		extern const std::string MSGTYPE_AUTHENTICATE;
		extern const std::string MSGTYPE_PREAUTHENTICATE;
		extern const std::string MSGTYPE_PREAUTHAPPROVED;
		extern const std::string MSGTYPE_AUTHAPPROVED;
		extern const std::string MSGTYPE_AUTHREJECTED;
		extern const std::string MSGTYPE_DISCONNECT;
		extern const std::string MSGTYPE_CHAT;
		extern const std::string MSGTYPE_GUILDCMD;
		extern const std::string MSGTYPE_USERCMD;
		extern const std::string MSGTYPE_SYSTEM;
		extern const std::string MSGTYPE_CHARREJECT;
		extern const std::string MSGTYPE_DEAD_RECKONING;
		extern const std::string MSGTYPE_CELPERSIST;
		extern const std::string MSGTYPE_CONFIRMQUESTION;
		extern const std::string MSGTYPE_USERACTION;
		extern const std::string MSGTYPE_ADMINCMD;
		extern const std::string MSGTYPE_GUIINTERACT;
		extern const std::string MSGTYPE_GUIINVENTORY;
		extern const std::string MSGTYPE_VIEW_ITEM;
		extern const std::string MSGTYPE_VIEW_CONTAINER;
		extern const std::string MSGTYPE_VIEW_SKETCH;
		extern const std::string MSGTYPE_VIEW_ACTION_LOCATION;
		extern const std::string MSGTYPE_READ_BOOK;
		extern const std::string MSGTYPE_WRITE_BOOK;
		extern const std::string MSGTYPE_UPDATE_ITEM;
		extern const std::string MSGTYPE_MODE;
		extern const std::string MSGTYPE_WEATHER;
		extern const std::string MSGTYPE_NEWSECTOR;
		extern const std::string MSGTYPE_GUIGUILD;
		extern const std::string MSGTYPE_EQUIPMENT;
		extern const std::string MSGTYPE_GUIEXCHANGE;
		extern const std::string MSGTYPE_EXCHANGE_REQUEST;
		extern const std::string MSGTYPE_EXCHANGE_ADD_ITEM;
		extern const std::string MSGTYPE_EXCHANGE_REMOVE_ITEM;
		extern const std::string MSGTYPE_EXCHANGE_ACCEPT;
		extern const std::string MSGTYPE_EXCHANGE_STATUS;
		extern const std::string MSGTYPE_EXCHANGE_END;
		extern const std::string MSGTYPE_EXCHANGE_MONEY;
		extern const std::string MSGTYPE_GUIMERCHANT;
		extern const std::string MSGTYPE_GROUPCMD;
		extern const std::string MSGTYPE_GUIGROUP;
		extern const std::string MSGTYPE_STATDRUPDATE;
		extern const std::string MSGTYPE_SPELL_BOOK;
		extern const std::string MSGTYPE_GLYPH_REQUEST;
		extern const std::string MSGTYPE_GLYPH_ASSEMBLE;
		extern const std::string MSGTYPE_PURIFY_GLYPH;
		extern const std::string MSGTYPE_SPELL_CAST;
		extern const std::string MSGTYPE_SPELL_CANCEL;
		extern const std::string MSGTYPE_EFFECT;
		extern const std::string MSGTYPE_EFFECT_STOP;
		extern const std::string MSGTYPE_NPCAUTHENT;
		extern const std::string MSGTYPE_NPCLIST;
		extern const std::string MSGTYPE_GUITARGETUPDATE;
		extern const std::string MSGTYPE_MAPLIST;
		extern const std::string MSGTYPE_NPCOMMANDLIST;
		extern const std::string MSGTYPE_ALLENTITYPOS;
		extern const std::string MSGTYPE_NEW_NPC;
		extern const std::string MSGTYPE_PETITION;
		extern const std::string MSGTYPE_MSGSTRINGS;
		extern const std::string MSGTYPE_CHARACTERDATA;
		extern const std::string MSGTYPE_AUTHCHARACTER;
		extern const std::string MSGTYPE_AUTHCHARACTERAPPROVED;
		extern const std::string MSGTYPE_CHAR_CREATE_CP;
		extern const std::string MSGTYPE_COMBATEVENT;
		extern const std::string MSGTYPE_LOOT;
		extern const std::string MSGTYPE_LOOTITEM;
		extern const std::string MSGTYPE_LOOTREMOVE;
		extern const std::string MSGTYPE_GUISKILL;
		extern const std::string MSGTYPE_OVERRIDEACTION;
		extern const std::string MSGTYPE_QUESTLIST;
		extern const std::string MSGTYPE_QUESTINFO;
		extern const std::string MSGTYPE_GMGUI;
		extern const std::string MSGTYPE_WORKCMD;
		extern const std::string MSGTYPE_BUDDY_LIST;
		extern const std::string MSGTYPE_BUDDY_STATUS;
		extern const std::string MSGTYPE_MOTD;
		extern const std::string MSGTYPE_MOTDREQUEST;
		extern const std::string MSGTYPE_QUESTION;
		extern const std::string MSGTYPE_QUESTIONRESPONSE;
		extern const std::string MSGTYPE_SLOT_MOVEMENT;
		extern const std::string MSGTYPE_QUESTIONCANCEL;
		extern const std::string MSGTYPE_GUILDMOTDSET;
		extern const std::string MSGTYPE_PLAYSOUND;
		extern const std::string MSGTYPE_CHARACTERDETAILS;
		extern const std::string MSGTYPE_CHARDETAILSREQUEST;
		extern const std::string MSGTYPE_CHARDESCUPDATE;
		extern const std::string MSGTYPE_FACTION_INFO;
		extern const std::string MSGTYPE_QUESTREWARD;
		extern const std::string MSGTYPE_NAMECHANGE;
		extern const std::string MSGTYPE_GUILDCHANGE;
		extern const std::string MSGTYPE_LOCKPICK;
		extern const std::string MSGTYPE_GMSPAWNITEMS;
		extern const std::string MSGTYPE_GMSPAWNTYPES;
		extern const std::string MSGTYPE_GMSPAWNITEM;
		extern const std::string MSGTYPE_ADVICE;
		extern const std::string MSGTYPE_ACTIVEMAGIC;
		extern const std::string MSGTYPE_GROUPCHANGE;
		extern const std::string MSGTYPE_MAPACTION;
		extern const std::string MSGTYPE_CLIENTSTATUS;
		extern const std::string MSGTYPE_TUTORIAL;
		extern const std::string MSGTYPE_BANKING;
		extern const std::string MSGTYPE_REQUESTMOVEMENTS;
		extern const std::string MSGTYPE_MOVEINFO;
		extern const std::string MSGTYPE_MOVEMOD;
		extern const std::string MSGTYPE_MOVELOCK;
		extern const std::string MSGTYPE_CHAR_DELETE;
		extern const std::string MSGTYPE_CHAR_CREATE_PARENTS;
		extern const std::string MSGTYPE_CHAR_CREATE_CHILDHOOD;
		extern const std::string MSGTYPE_CHAR_CREATE_LIFEEVENTS;
		extern const std::string MSGTYPE_CHAR_CREATE_UPLOAD;
		extern const std::string MSGTYPE_CHAR_CREATE_VERIFY;
		extern const std::string MSGTYPE_CHAR_CREATE_NAME;
		extern const std::string MSGTYPE_PERSIST_WORLD_REQUEST;
		extern const std::string MSGTYPE_PERSIST_WORLD;
		extern const std::string MSGTYPE_PERSIST_ACTOR_REQUEST;
		extern const std::string MSGTYPE_PERSIST_ACTOR;
		extern const std::string MSGTYPE_PERSIST_ITEM;
		extern const std::string MSGTYPE_PERSIST_ACTIONLOCATION;
		extern const std::string MSGTYPE_PERSIST_ALL;
		extern const std::string MSGTYPE_REMOVE_OBJECT;
		extern const std::string MSGTYPE_CHANGE_TRAIT;
		extern const std::string MSGTYPE_DAMAGE_EVENT;
		extern const std::string MSGTYPE_DEATH_EVENT;
		extern const std::string MSGTYPE_TARGET_EVENT;
		extern const std::string MSGTYPE_ZPOINT_EVENT;
		extern const std::string MSGTYPE_BUY_EVENT;
		extern const std::string MSGTYPE_SELL_EVENT;
		extern const std::string MSGTYPE_PICKUP_EVENT;
		extern const std::string MSGTYPE_DROP_EVENT;
		extern const std::string MSGTYPE_LOOT_EVENT;
		extern const std::string MSGTYPE_CONNECT_EVENT;
		extern const std::string MSGTYPE_MOVEMENT_EVENT;
		extern const std::string MSGTYPE_GENERIC_EVENT;
		extern const std::string MSGTYPE_SOUND_EVENT;
		extern const std::string MSGTYPE_CHAR_CREATE_TRAITS;
		extern const std::string MSGTYPE_STATS;
		extern const std::string MSGTYPE_NPC_SETOWNER;
		extern const std::string MSGTYPE_PET_COMMAND;
		extern const std::string MSGTYPE_PET_SKILL;
		extern const std::string MSGTYPE_CRAFT_INFO;
		extern const std::string MSGTYPE_PETITION_REQUEST;
		extern const std::string MSGTYPE_HEART_BEAT;
		extern const std::string MSGTYPE_NPC_COMMAND;
		extern const std::string MSGTYPE_MINIGAME_STARTSTOP;
		extern const std::string MSGTYPE_MINIGAME_BOARD;
		extern const std::string MSGTYPE_MINIGAME_UPDATE;
		extern const std::string MSGTYPE_ENTRANCE;
		extern const std::string MSGTYPE_GMEVENT_LIST;
		extern const std::string MSGTYPE_GMEVENT_INFO;
		extern const std::string MSGTYPE_SEQUENCE;
		extern const std::string MSGTYPE_NPCRACELIST;
		extern const std::string MSGTYPE_INTRODUCTION;

		// Chat Message Types
		extern const std::string CHAT_SYSTEM;
		extern const std::string CHAT_SAY;
		extern const std::string CHAT_TELL;
		extern const std::string CHAT_GROUP;
		extern const std::string CHAT_GUILD;
		extern const std::string CHAT_AUCTION;
		extern const std::string CHAT_SHOUT;
		extern const std::string CHAT_ME;
		extern const std::string CHAT_TELLSELF;
		extern const std::string CHAT_REPORT;
		extern const std::string CHAT_ADVISOR;
		extern const std::string CHAT_ADVICE;
		extern const std::string CHAT_ADVICE_LIST;
		extern const std::string CHAT_SERVER_TELL;
		extern const std::string CHAT_GM;
		extern const std::string CHAT_SERVER_INFO;
		extern const std::string CHAT_MY;
		extern const std::string CHAT_NPC;
		extern const std::string CHAT_SYSTEM_BASE;
		extern const std::string CHAT_PET_ACTION;
		extern const std::string CHAT_NPC_ME;
		extern const std::string CHAT_NPC_MY;
		extern const std::string CHAT_NPC_NARRATE;

		// Combat Event Types
		extern const std::string COMBAT_DODGE;
		extern const std::string COMBAT_BLOCK;
		extern const std::string COMBAT_DAMAGE;
		extern const std::string COMBAT_MISS;
		extern const std::string COMBAT_OUTOFRANGE;
		extern const std::string COMBAT_DEATH;
		extern const std::string COMBAT_DAMAGE_NEARLY_DEAD;

		// Persist Item Flags
		extern const std::string PERSIST_ITEM_NONE;
		extern const std::string PERSIST_ITEM_NOPICKUP;
		extern const std::string PERSIST_ITEM_COLLIDE;

		// Persist Actor flags
		extern const std::string PERSIST_ACTOR_NONE;
		extern const std::string PERSIST_ACTOR_NPC;
		extern const std::string PERSIST_ACTOR_NAME_KNOWN;

		// Dead Reckoning Data Flags
		extern const std::string DR_DATA_NOT_MOVING;
		extern const std::string DR_DATA_ACTOR_MODE;
		extern const std::string DR_DATA_ANG_VELOCITY;
		extern const std::string DR_DATA_X_VELOCITY;
		extern const std::string DR_DATA_Y_VELOCITY;
		extern const std::string DR_DATA_Z_VELOCITY;
		extern const std::string DR_DATA_X_WORLDVELOCITY;
		extern const std::string DR_DATA_Y_WORLDVELOCITY;
		extern const std::string DR_DATA_Z_WORLDVELOCITY;
		extern const std::string DR_DATA_ALL_DATA;

		// Equipment Message Commands
		extern const std::string EQUIP;
		extern const std::string DEEQUIP;

		// Player Modes
		extern const std::string PLAYER_MODE_PEACE;
		extern const std::string PLAYER_MODE_COMBAT;
		extern const std::string PLAYER_MODE_SPELL_CASTING;
		extern const std::string PLAYER_MODE_WORK;
		extern const std::string PLAYER_MODE_DEAD;
		extern const std::string PLAYER_MODE_SIT;
		extern const std::string PLAYER_MODE_OVERWEIGHT;
		extern const std::string PLAYER_MODE_EXHAUSTED;
		extern const std::string PLAYER_MODE_DEFEATED;

		// Quest Reward Message Type
		extern const std::string QUEST_REWARD_OFFER_REWARDS;
		extern const std::string QUEST_REWARD_SELECT_REWARDS;

		// View Item Message Type
		extern const std::string VIEW_ITEM_REQUEST;
		extern const std::string VIEW_ITEM_DESCRIPTION;

		// System Message Types
		extern const std::string SYSTEM_MSG_ERROR;
		extern const std::string SYSTEM_MSG_INFO;
		extern const std::string SYSTEM_MSG_INFO_SERVER;
		extern const std::string SYSTEM_MSG_RESULT;
		extern const std::string SYSTEM_MSG_OK;
		extern const std::string SYSTEM_MSG_WHO;
		extern const std::string SYSTEM_MSG_ACK;
		extern const std::string SYSTEM_MSG_INFO_BASE;
		extern const std::string SYSTEM_MSG_COMBAT;
		extern const std::string SYSTEM_MSG_COMBAT_DODGE;
		extern const std::string SYSTEM_MSG_COMBAT_BLOCK;
		extern const std::string SYSTEM_MSG_COMBAT_HITYOU;
		extern const std::string SYSTEM_MSG_COMBAT_HITOTHER;
		extern const std::string SYSTEM_MSG_COMBAT_YOURHIT;
		extern const std::string SYSTEM_MSG_COMBAT_OTHERHIT;
		extern const std::string SYSTEM_MSG_COMBAT_MISS;
		extern const std::string SYSTEM_MSG_COMBAT_OWN_DEATH;
		extern const std::string SYSTEM_MSG_COMBAT_DEATH;
		extern const std::string SYSTEM_MSG_COMBAT_VICTORY;
		extern const std::string SYSTEM_MSG_COMBAT_STANCE;
		extern const std::string SYSTEM_MSG_COMBAT_NEARLY_DEAD;
		extern const std::string SYSTEM_MSG_LOOT;
		extern const std::string SYSTEM_MSG_SEC;
		extern const std::string SYSTEM_SEC_LEVEL0;
		extern const std::string SYSTEM_SEC_LEVEL1;
		extern const std::string SYSTEM_SEC_LEVEL2;
		extern const std::string SYSTEM_SEC_LEVEL3;
		extern const std::string SYSTEM_SEC_LEVEL4;
		extern const std::string SYSTEM_MSG_PURCHASE;

		// GUI Inventory Message Types
		extern const std::string GUI_INVENTORY_LIST;
		extern const std::string GUI_INVENTORY_REQUEST;
		extern const std::string GUI_INVENTORY_UPDATE_REQUEST;
		extern const std::string GUI_INVENTORY_UPDATE_LIST;

		// Player Weather Mode
		extern const std::string WEATHER_MODE_DAYNIGHT;
		extern const std::string WEATHER_MODE_WEATHER;

		// Weather Types
		extern const std::string WEATHER_TYPE_RAIN;
		extern const std::string WEATHER_TYPE_SNOW;
		extern const std::string WEATHER_TYPE_FOG;
		extern const std::string WEATHER_TYPE_LIGHTNING;

		// Active Magic Command Type
		extern const std::string ACTIVE_MAGIC_ADD_CATEGORY;
		extern const std::string ACTIVE_MAGIC_REMOVE_CATEGORY;

		// GUI Interaction TYpes
		extern const std::string GUI_INTERACTION_PICKUP;
		extern const std::string GUI_INTERACTION_EXAMINE;
		extern const std::string GUI_INTERACTION_UNLOCK;
		extern const std::string GUI_INTERACTION_LOOT;
		extern const std::string GUI_INTERACTION_BUYSELL;
		extern const std::string GUI_INTERACTION_GIVE;
		extern const std::string GUI_INTERACTION_CLOSE;
		extern const std::string GUI_INTERACTION_USE;
		extern const std::string GUI_INTERACTION_PLAYERDESC;
		extern const std::string GUI_INTERACTION_ATTACK;
		extern const std::string GUI_INTERACTION_COMBINE;
		extern const std::string GUI_INTERACTION_EXCHANGE;
		extern const std::string GUI_INTERACTION_TRAIN;
		extern const std::string GUI_INTERACTION_NPCTALK;
		extern const std::string GUI_INTERACTION_VIEWSTATS;
		extern const std::string GUI_INTERACTION_DISMISS;
		extern const std::string GUI_INTERACTION_MARRIAGE;
		extern const std::string GUI_INTERACTION_DIVORCE;
		extern const std::string GUI_INTERACTION_PLAYGAME;
		extern const std::string GUI_INTERACTION_ENTER;
		extern const std::string GUI_INTERACTION_LOCK;
		extern const std::string GUI_INTERACTION_ENTERLOCKED;
		extern const std::string GUI_INTERACTION_BANK;
		extern const std::string GUI_INTERACTION_INTRODUCE;

		// GUI Merchant Message Types
		extern const std::string GUI_MERCHANT_MESSAGE_REQUEST;
		extern const std::string GUI_MERCHANT_MESSAGE_MERCHANT;
		extern const std::string GUI_MERCHANT_MESSAGE_CATEGORIES;
		extern const std::string GUI_MERCHANT_MESSAGE_CATEGORY;
		extern const std::string GUI_MERCHANT_MESSAGE_MONEY;
		extern const std::string GUI_MERCHANT_MESSAGE_ITEMS;
		extern const std::string GUI_MERCHANT_MESSAGE_BUY;
		extern const std::string GUI_MERCHANT_MESSAGE_SELL;
		extern const std::string GUI_MERCHANT_MESSAGE_VIEW;
		extern const std::string GUI_MERCHANT_MESSAGE_CANCEL;

		// GUI Skill Message Types
		extern const std::string GUI_SKILL_MESSAGE_REQUEST;
		extern const std::string GUI_SKILL_MESSAGE_BUY_SKILL;
		extern const std::string GUI_SKILL_MESSAGE_SKILL_LIST;
		extern const std::string GUI_SKILL_MESSAGE_SKILL_SELECTED;
		extern const std::string GUI_SKILL_MESSAGE_DESCRIPTION;
		extern const std::string GUI_SKILL_MESSAGE_QUIT;

		// Message types and elements
		extern const std::string ELEMENT_ALL_MESSAGE_TYPE;

		extern const std::string TYPE_CHAT_MESSAGE;
		extern const std::string ELEMENT_CHAT_TEXT;
		extern const std::string ELEMENT_CHAT_SPEAKER;
		extern const std::string ELEMENT_CHAT_SPEAKER_FROM;
		extern const std::string ELEMENT_CHAT_SPEAKER_TO;
		extern const std::string ELEMENT_CHAT_CHAT_TYPE;

		extern const std::string TYPE_COMBAT_MESSAGE;
		extern const std::string ELEMENT_COMBAT_ATTACKER_ID;
		extern const std::string ELEMENT_COMBAT_TARGET_ID;
		extern const std::string ELEMENT_COMBAT_DAMAGE;
		extern const std::string ELEMENT_COMBAT_TARGET_LOCATION;
		extern const std::string ELEMENT_COMBAT_EVENT_TYPE;

		extern const std::string TYPE_DR_MESSAGE;
		extern const std::string ELEMENT_DR_COUNTER;
		extern const std::string ELEMENT_DR_ON_GROUND;
		extern const std::string ELEMENT_DR_POSITION;
		extern const std::string ELEMENT_DR_VELOCITY;
		extern const std::string ELEMENT_DR_WORLD_VELOCITY;
		extern const std::string ELEMENT_DR_Y_ROTATION;
		extern const std::string ELEMENT_DR_SECTOR_NAME;
		extern const std::string ELEMENT_DR_ANGULAR_VELOCITY;
		extern const std::string ELEMENT_DR_ENTITY_ID;

		extern const std::string TYPE_EFFECT_MESSAGE;
		extern const std::string ELEMENT_EFFECT_MESSAGE_NAME;
		extern const std::string ELEMENT_EFFECT_MESSAGE_ANCHOR_ID;
		extern const std::string ELEMENT_EFFECT_MESSAGE_TARGET_ID;
		extern const std::string ELEMENT_EFFECT_MESSAGE_CAST_DURATION;
		extern const std::string ELEMENT_EFFECT_MESSAGE_UID;
		extern const std::string ELEMENT_EFFECT_MESSAGE_EFFECT_TEXT;

		extern const std::string TYPE_GUI_ACTIVE_MAGIC_MESSAGE;
		extern const std::string ELEMENT_GUI_ACTIVE_MAGIC_CATEGORY_LIST;
		extern const std::string ELEMENT_GUI_ACTIVE_MAGIC_COMMAND;

		extern const std::string TYPE_GUI_INTERACT_MESSAGE;
		extern const std::string ELEMENT_GUI_INTERACT_TYPE;

		extern const std::string TYPE_GUI_INVENTORY_MESSAGE;
		extern const std::string ELEMENT_GUI_INVENTORY_ITEMS;
		extern const std::string ELEMENT_GUI_INVENTORY_TOTAL_ITEMS;
		extern const std::string ELEMENT_GUI_INVENTORY_TOTAL_EMPTIED_SLOTS;
		extern const std::string ELEMENT_GUI_INVENTORY_MAX_WEIGHT;
		extern const std::string ELEMENT_GUI_INVENTORY_MONEY;

		extern const std::string TYPE_GUI_MERCHANT_MESSAGE;
		extern const std::string ELEMENT_GUI_MERCHANT_COMMAND_TYPE;
		extern const std::string ELEMENT_GUI_MERCHANT_MESSAGE_CONTENT;

		extern const std::string TYPE_GUI_SKILL_MESSAGE;
		extern const std::string ELEMENT_GUI_SKILL_COMMAND;
		extern const std::string ELEMENT_GUI_SKILL_COMMAND_DATA;
		extern const std::string ELEMENT_GUI_SKILL_STRENGTH;
		extern const std::string ELEMENT_GUI_SKILL_ENDURANCE;
		extern const std::string ELEMENT_GUI_SKILL_AGILITY;
		extern const std::string ELEMENT_GUI_SKILL_WILL;
		extern const std::string ELEMENT_GUI_SKILL_CHARISMA;
		extern const std::string ELEMENT_GUI_SKILL_HIT_POINTS;
		extern const std::string ELEMENT_GUI_SKILL_MANA;
		extern const std::string ELEMENT_GUI_SKILL_PHYSICAL_STAMINA;
		extern const std::string ELEMENT_GUI_SKILL_MENTAL_STAMINA;
		extern const std::string ELEMENT_GUI_SKILL_MAX_HIT_POINTS;
		extern const std::string ELEMENT_GUI_SKILL_MAX_MANA;
		extern const std::string ELEMENT_GUI_SKILL_MAX_PHYSICAL_STAMINA;
		extern const std::string ELEMENT_GUI_SKILL_MAX_MENTAL_STAMINA;

		extern const std::string TYPE_GUI_TARGET_UPDATE_MESSAGE;
		extern const std::string ELEMENT_GUI_TARGET_UPDATE_CLIENT_ID;
		extern const std::string ELEMENT_GUI_TARGET_UPDATE_TARGET_ID;

		extern const std::string TYPE_MODE_MESSAGE;
		extern const std::string ELEMENT_MODE_ACTOR_ID;
		extern const std::string ELEMENT_MODE_MODE;
		extern const std::string ELEMENT_MODE_STANCE;

		extern const std::string TYPE_MOVE_LOCK_MESSAGE;
		extern const std::string ELEMENT_MOVE_LOCK_LOCKED;

		extern const std::string TYPE_NEW_SECTOR_MESSAGE;
		extern const std::string ELEMENT_NEW_SECTOR_OLD_SECTOR;
		extern const std::string ELEMENT_NEW_SECTOR_NEW_SECTOR;
		extern const std::string ELEMENT_NEW_SECTOR_POSITION;

		extern const std::string TYPE_PERSIST_ACTION_LOCATION_MESSAGE;
		extern const std::string ELEMENT_PERSIST_ACTION_LOCATION_SECTOR;
		extern const std::string ELEMENT_PERSIST_ACTION_LOCATION_MESH;
		extern const std::string ELEMENT_PERSIST_ACTION_LOCATION_ID;
		extern const std::string ELEMENT_PERSIST_ACTION_LOCATION_TYPE;

		extern const std::string TYPE_PERSIST_ACTOR_MESSAGE;
		extern const std::string ELEMENT_PERSIST_ACTOR_DR_MESSAGE;
		extern const std::string ELEMENT_PERSIST_ACTOR_NAME;
		extern const std::string ELEMENT_PERSIST_ACTOR_GUILD;
		extern const std::string ELEMENT_PERSIST_ACTOR_FACT_NAME;
		extern const std::string ELEMENT_PERSIST_ACTOR__FILE_NAME;
		extern const std::string ELEMENT_PERSIST_ACTOR_RACE;
		extern const std::string ELEMENT_PERSIST_ACTOR_GENDER;
		extern const std::string ELEMENT_PERSIST_ACTOR_HELM_GROUPS;
		extern const std::string ELEMENT_PERSIST_ACTOR_TOP;
		extern const std::string ELEMENT_PERSIST_ACTOR_BOTTOM;
		extern const std::string ELEMENT_PERSIST_ACTOR_OFFSET;
		extern const std::string ELEMENT_PERSIST_ACTOR_TYPE;
		extern const std::string ELEMENT_PERSIST_ACTOR_MASQUERADED_TYPE;
		extern const std::string ELEMENT_PERSIST_ACTOR_SERVER_MODE;
		extern const std::string ELEMENT_PERSIST_ACTOR_PLAYER_ID;
		extern const std::string ELEMENT_PERSIST_ACTOR_GROUP_ID;
		extern const std::string ELEMENT_PERSIST_ACTOR_OWNER_EID;
		extern const std::string ELEMENT_PERSIST_ACTOR_CONTROL;
		extern const std::string ELEMENT_PERSIST_ACTOR_FLAGS;
		extern const std::string ELEMENT_PERSIST_ACTOR_INSTANCE;

		extern const std::string TYPE_PERSIST_ITEM_MESSAGE;
		extern const std::string ELEMENT_PERSIST_ITEM_NAME;
		extern const std::string ELEMENT_PERSIST_ITEM_FACT_NAME;
		extern const std::string ELEMENT_PERSIST_ITEM_FILE_NAME;
		extern const std::string ELEMENT_PERSIST_ITEM_SECTOR;
		extern const std::string ELEMENT_PERSIST_ITEM_POSITION;
		extern const std::string ELEMENT_PERSIST_ITEM_Y_ROTATION;
		extern const std::string ELEMENT_PERSIST_ITEM_ID;
		extern const std::string ELEMENT_PERSIST_ITEM_TYPE;
		extern const std::string ELEMENT_PERSIST_ITEM_FLAGS;

		extern const std::string TYPE_PLAY_SOUND_MESSAGE;
		extern const std::string ELEMENT_PLAY_SOUND_SOUND;

		extern const std::string TYPE_QUEST_LIST_MESSAGE;
		extern const std::string ELEMENT_QUEST_LIST_QUEST_XML;

		extern const std::string TYPE_QUEST_REWARD_MESSAGE;
		extern const std::string ELEMENT_QUEST_REWARD_TYPE;
		extern const std::string ELEMENT_QUEST_REWARD_NEW_VALUE;

		extern const std::string TYPE_REMOVE_OBJECT_MESSAGE;
		extern const std::string ELEMENT_REMOVE_OBJECT_OBJECT_ID;

		extern const std::string TYPE_SOUND_EVENT_MESSAGE;
		extern const std::string ELEMENT_SOUNT_EVENT_TYPE;

		extern const std::string TYPE_SPELL_CANCEL_MESSAGE;
		// empty message

		extern const std::string TYPE_SPELL_CAST_MESSAGE;
		extern const std::string ELEMENT_SPELL_CAST_SPELL;
		extern const std::string ELEMENT_SPELL_CAST_K_FACTOR;

		extern const std::string TYPE_STAT_DR_MESSAGE;
		extern const std::string ELEMENT_STAT_DR_USEFUL;
		extern const std::string ELEMENT_STAT_DR_ENTITY_ID;
		extern const std::string ELEMENT_STAT_DR_STATS_DIRTY;
		extern const std::string ELEMENT_STAT_DR_COUNTER;

		extern const std::string TYPE_STATS_MESSAGE;
		extern const std::string ELEMENT_STATS_HIT_POINTS;
		extern const std::string ELEMENT_STATS_MANA;
		extern const std::string ELEMENT_STATS_WEIGHT;
		extern const std::string ELEMENT_STATS_CAPACITY;

		extern const std::string TYPE_STOP_EFFECT_MESSAGE;
		extern const std::string ELEMENT_STOP_EFFECT_UID;

		extern const std::string TYPE_SYSTEM_MESSAGE;
		extern const std::string ELEMENT_TEXT;
		extern const std::string ELEMENT_SYSTEM_TYPE;

		extern const std::string TYPE_UPDATE_OBJECT_NAME_MESSAGE;
		extern const std::string ELEMENT_UPDATE_OBJECT_NAME_OBJECT_ID;
		extern const std::string ELEMENT_UPDATE_OBJECT_NAME_NEW_NAME;

		extern const std::string TYPE_VIEW_ITEM_DESCRIPTION_MESSAGE;
		extern const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_ITEM_NAME;
		extern const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_ITEM_DESCRIPTION;
		extern const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_STACK_COUNT;
		extern const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_CONTAINER_ID;
		extern const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_SLOT_ID;
		extern const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_HAS_CONTENTS;
		extern const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_TO_CLIENT;
		extern const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_CONTENTS;

		extern const std::string TYPE_VIEW_ITEM_UPDATE_MESSAGE;
		extern const std::string ELEMENT_VIEW_ITEM_UPDATE_CLEAR_SLOT;
		extern const std::string ELEMENT_VIEW_ITEM_UPDATE_TO_CLIENT;
		extern const std::string ELEMENT_VIEW_ITEM_UPDATE_CONTAINER_ID;
		extern const std::string ELEMENT_VIEW_ITEM_UPDATE_NAME;
		extern const std::string ELEMENT_VIEW_ITEM_UPDATE_ICON;
		extern const std::string ELEMENT_VIEW_ITEM_UPDATE_SLOT_ID;
		extern const std::string ELEMENT_VIEW_ITEM_UPDATE_STACK_COUNT;
		extern const std::string ELEMENT_VIEW_ITEM_UPDATE_OWNER_ID;

		extern const std::string TYPE_WEATHER_MESSAGE;
		extern const std::string ELEMENT_WEATHER_MINUTE;
		extern const std::string ELEMENT_WEATHER_HOUR;
		extern const std::string ELEMENT_WEATHER_DAY;
		extern const std::string ELEMENT_WEATHER_MONTH;
		extern const std::string ELEMENT_WEATHER_YEAR;
		extern const std::string ELEMENT_WEATHER_WEATHER;

		extern const std::string XML_HEADER;
		extern const std::string PSAI_MESSAGE_ELEMENT_START;
		extern const std::string PSAI_MESSAGE_ELEMENT_END;

		extern const std::string PSAI_SCHEMA_LOCATION;
		extern const std::string PSAI_NAMESPACE;

		extern const std::string ELEMENT_VECTOR_X;
		extern const std::string ELEMENT_VECTOR_Y;
		extern const std::string ELEMENT_VECTOR_Z;

		extern const std::string ELEMENT_CONTAINER_CONTENTS_NAME;
		extern const std::string ELEMENT_CONTAINER_CONTENTS_ICON;
		extern const std::string ELEMENT_CONTAINER_CONTENTS_SLOT_ID;
		extern const std::string ELEMENT_CONTAINER_CONTENTS_STACK_COUNT;
		extern const std::string ELEMENT_CONTAINER_CONTENTS_PURIFY_STATUS;

		extern const std::string ELEMENT_CLIENT_NUM;
};

#endif /* PSAIXMLCONSTANTS_H_ */
