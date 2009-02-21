/*
 * PsaiXmlConstants.cpp
 *
 *  Created on: 06-Jan-2009
 *      Author: tim
 */

#include "PsaiXmlConstants.h"

namespace PsaiXmlConstants
{
const std::string TYPE_VECTOR_3D("psai:vector3d");
const std::string TYPE_CONTAINER_CONTENTS("psai:containercontents");
const std::string TYPE_ITEM_DESCRIPTION("psai:itemdescription");
const std::string TYPE_NETWORK_DETAIL_SKILL("psai:networkdetailskill");
const std::string TYPE_NET_WEATHER_INFO("psai:netweatherinfo");
const std::string TYPE_PS_MONEY("psai:psmoney");

// enumerated types

// Message Class Types
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

// Chat Message Types
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

// Combat Event Types
const std::string COMBAT_DODGE("COMBAT_DODGE");
const std::string COMBAT_BLOCK("COMBAT_BLOCK");
const std::string COMBAT_DAMAGE("COMBAT_DAMAGE");
const std::string COMBAT_MISS("COMBAT_MISS");
const std::string COMBAT_OUTOFRANGE("COMBAT_OUTOFRANGE");
const std::string COMBAT_DEATH("COMBAT_DEATH");
const std::string COMBAT_DAMAGE_NEARLY_DEAD("COMBAT_DAMAGE_NEARLY_DEAD");

// Persist Item Flags
const std::string PERSIST_ITEM_NONE("NONE");
const std::string PERSIST_ITEM_NOPICKUP("NOPICKUP");
const std::string PERSIST_ITEM_COLLIDE("COLLIDE");

// Persist Actor flags
const std::string PERSIST_ACTOR_NONE("NONE");
const std::string PERSIST_ACTOR_NPC("NPC");
const std::string PERSIST_ACTOR_NAME_KNOWN("NAME_KNOWN");

// Dead Reckoning Data Flags
const std::string DR_DATA_NOT_MOVING("NOT_MOVING");
const std::string DR_DATA_ACTOR_MODE("ACTOR_MODE");
const std::string DR_DATA_ANG_VELOCITY("ANG_VELOCITY");
const std::string DR_DATA_X_VELOCITY("X_VELOCITY");
const std::string DR_DATA_Y_VELOCITY("Y_VELOCITY");
const std::string DR_DATA_Z_VELOCITY("Z_VELOCITY");
const std::string DR_DATA_X_WORLDVELOCITY("X_WORLDVELOCITY");
const std::string DR_DATA_Y_WORLDVELOCITY("Y_WORLDVELOCITY");
const std::string DR_DATA_Z_WORLDVELOCITY("Z_WORLDVELOCITY");
const std::string DR_DATA_ALL_DATA("ALL_DATA");

// Equipment Message Commands
const std::string EQUIP("EQUIP");
const std::string DEEQUIP("DEEQUIP");

// Player Modes
const std::string PLAYER_MODE_PEACE("PEACE");
const std::string PLAYER_MODE_COMBAT("COMBAT");
const std::string PLAYER_MODE_SPELL_CASTING("SPELL_CASTING");
const std::string PLAYER_MODE_WORK("WORK");
const std::string PLAYER_MODE_DEAD("DEAD");
const std::string PLAYER_MODE_SIT("SIT");
const std::string PLAYER_MODE_OVERWEIGHT("OVERWEIGHT");
const std::string PLAYER_MODE_EXHAUSTED("EXHAUSTED");
const std::string PLAYER_MODE_DEFEATED("DEFEATED");

// Quest Reward Message Type
const std::string QUEST_REWARD_OFFER_REWARDS("OFFER_REWARDS");
const std::string QUEST_REWARD_SELECT_REWARDS("SELECT_REWARDS");

// View Item Message Type
const std::string VIEW_ITEM_REQUEST("REQUEST");
const std::string VIEW_ITEM_DESCRIPTION("DESCRIPTION");

// System Message Types
const std::string SYSTEM_MSG_ERROR("MSG_ERROR");
const std::string SYSTEM_MSG_INFO("MSG_INFO");
const std::string SYSTEM_MSG_INFO_SERVER("MSG_INFO_SERVER");
const std::string SYSTEM_MSG_RESULT("MSG_RESULT");
const std::string SYSTEM_MSG_OK("MSG_OK");
const std::string SYSTEM_MSG_WHO("MSG_WHO");
const std::string SYSTEM_MSG_ACK("MSG_ACK");
const std::string SYSTEM_MSG_INFO_BASE("MSG_INFO_BASE");
const std::string SYSTEM_MSG_COMBAT("MSG_COMBAT");
const std::string SYSTEM_MSG_COMBAT_DODGE("MSG_COMBAT_DODGE");
const std::string SYSTEM_MSG_COMBAT_BLOCK("MSG_COMBAT_BLOCK");
const std::string SYSTEM_MSG_COMBAT_HITYOU("MSG_COMBAT_HITYOU");
const std::string SYSTEM_MSG_COMBAT_HITOTHER("MSG_COMBAT_HITOTHER");
const std::string SYSTEM_MSG_COMBAT_YOURHIT("MSG_COMBAT_YOURHIT");
const std::string SYSTEM_MSG_COMBAT_OTHERHIT("MSG_COMBAT_OTHERHIT");
const std::string SYSTEM_MSG_COMBAT_MISS("MSG_COMBAT_MISS");
const std::string SYSTEM_MSG_COMBAT_OWN_DEATH("MSG_COMBAT_OWN_DEATH");
const std::string SYSTEM_MSG_COMBAT_DEATH("MSG_COMBAT_DEATH");
const std::string SYSTEM_MSG_COMBAT_VICTORY("MSG_COMBAT_VICTORY");
const std::string SYSTEM_MSG_COMBAT_STANCE("MSG_COMBAT_STANCE");
const std::string SYSTEM_MSG_COMBAT_NEARLY_DEAD("MSG_COMBAT_NEARLY_DEAD");
const std::string SYSTEM_MSG_LOOT("MSG_LOOT");
const std::string SYSTEM_MSG_SEC("MSG_SEC");
const std::string SYSTEM_SEC_LEVEL0("SEC_LEVEL0");
const std::string SYSTEM_SEC_LEVEL1("SEC_LEVEL1");
const std::string SYSTEM_SEC_LEVEL2("SEC_LEVEL2");
const std::string SYSTEM_SEC_LEVEL3("SEC_LEVEL3");
const std::string SYSTEM_SEC_LEVEL4("SEC_LEVEL4");
const std::string SYSTEM_MSG_PURCHASE("MSG_PURCHASE");

// GUI Inventory Message Types
const std::string GUI_INVENTORY_LIST("LIST");
const std::string GUI_INVENTORY_REQUEST("REQUEST");
const std::string GUI_INVENTORY_UPDATE_REQUEST("UPDATE_REQUEST");
const std::string GUI_INVENTORY_UPDATE_LIST("UPDATE_LIST");

// Player Weather Mode
const std::string WEATHER_MODE_DAYNIGHT("DAYNIGHT");
const std::string WEATHER_MODE_WEATHER("WEATHER");

// Weather Types
const std::string WEATHER_TYPE_RAIN("RAIN");
const std::string WEATHER_TYPE_SNOW("SNOW");
const std::string WEATHER_TYPE_FOG("FOG");
const std::string WEATHER_TYPE_LIGHTNING("LIGHTNING");

// Active Magic Command Type
const std::string ACTIVE_MAGIC_ADD_CATEGORY("ADD_CATEGORY");
const std::string ACTIVE_MAGIC_REMOVE_CATEGORY("REMOVE_CATEGORY");

// GUI Interaction TYpes
const std::string GUI_INTERACTION_PICKUP("PICKUP");
const std::string GUI_INTERACTION_EXAMINE("EXAMINE");
const std::string GUI_INTERACTION_UNLOCK("UNLOCK");
const std::string GUI_INTERACTION_LOOT("LOOT");
const std::string GUI_INTERACTION_BUYSELL("BUYSELL");
const std::string GUI_INTERACTION_GIVE("GIVE");
const std::string GUI_INTERACTION_CLOSE("CLOSE");
const std::string GUI_INTERACTION_USE("USE");
const std::string GUI_INTERACTION_PLAYERDESC("PLAYERDESC");
const std::string GUI_INTERACTION_ATTACK("ATTACK");
const std::string GUI_INTERACTION_COMBINE("COMBINE");
const std::string GUI_INTERACTION_EXCHANGE("EXCHANGE");
const std::string GUI_INTERACTION_TRAIN("TRAIN");
const std::string GUI_INTERACTION_NPCTALK("NPCTALK");
const std::string GUI_INTERACTION_VIEWSTATS("VIEWSTATS");
const std::string GUI_INTERACTION_DISMISS("DISMISS");
const std::string GUI_INTERACTION_MARRIAGE("MARRIAGE");
const std::string GUI_INTERACTION_DIVORCE("DIVORCE");
const std::string GUI_INTERACTION_PLAYGAME("PLAYGAME");
const std::string GUI_INTERACTION_ENTER("ENTER");
const std::string GUI_INTERACTION_LOCK("LOCK");
const std::string GUI_INTERACTION_ENTERLOCKED("ENTERLOCKED");
const std::string GUI_INTERACTION_BANK("BANK");
const std::string GUI_INTERACTION_INTRODUCE("INTRODUCE");

// GUI Merchant Message Types
const std::string GUI_MERCHANT_MESSAGE_REQUEST("REQUEST");
const std::string GUI_MERCHANT_MESSAGE_MERCHANT("MERCHANT");
const std::string GUI_MERCHANT_MESSAGE_CATEGORIES("CATEGORIES");
const std::string GUI_MERCHANT_MESSAGE_CATEGORY("CATEGORY");
const std::string GUI_MERCHANT_MESSAGE_MONEY("MONEY");
const std::string GUI_MERCHANT_MESSAGE_ITEMS("ITEMS");
const std::string GUI_MERCHANT_MESSAGE_BUY("BUY");
const std::string GUI_MERCHANT_MESSAGE_SELL("SELL");
const std::string GUI_MERCHANT_MESSAGE_VIEW("VIEW");
const std::string GUI_MERCHANT_MESSAGE_CANCEL("CANCEL");

// GUI Skill Message Types
const std::string GUI_SKILL_MESSAGE_REQUEST("REQUEST");
const std::string GUI_SKILL_MESSAGE_BUY_SKILL("BUY_SKILL");
const std::string GUI_SKILL_MESSAGE_SKILL_LIST("SKILL_LIST");
const std::string GUI_SKILL_MESSAGE_SKILL_SELECTED("SKILL_SELECTED");
const std::string GUI_SKILL_MESSAGE_DESCRIPTION("DESCRIPTION");
const std::string GUI_SKILL_MESSAGE_QUIT("QUIT");

// Message types and elements
const std::string ELEMENT_ALL_MESSAGE_TYPE("psai:messagetype");

const std::string TYPE_CHAT_MESSAGE("psai:chatmessage");
const std::string ELEMENT_CHAT_TEXT("psai:text");
const std::string ELEMENT_CHAT_SPEAKER("psai:speaker");
const std::string ELEMENT_CHAT_SPEAKER_FROM("psai:from");
const std::string ELEMENT_CHAT_SPEAKER_TO("psai:to");
const std::string ELEMENT_CHAT_CHAT_TYPE("psai:chattype");

const std::string TYPE_COMBAT_MESSAGE("psai:combateventmessage");
const std::string ELEMENT_COMBAT_ATTACKER_ID("psai:attackerid");
const std::string ELEMENT_COMBAT_TARGET_ID("psai:targetid");
const std::string ELEMENT_COMBAT_DAMAGE("psai:damage");
const std::string ELEMENT_COMBAT_TARGET_LOCATION("psai:targetlocation");
const std::string ELEMENT_COMBAT_EVENT_TYPE("psai:combateventtype");

const std::string TYPE_DR_MESSAGE("psai:drmessage");
const std::string ELEMENT_DR_COUNTER("psai:counter");
const std::string ELEMENT_DR_ON_GROUND("psai:onground");
const std::string ELEMENT_DR_POSITION("psai:position");
const std::string ELEMENT_DR_VELOCITY("psai:velocity");
const std::string ELEMENT_DR_WORLD_VELOCITY("psai:worldvelocity");
const std::string ELEMENT_DR_Y_ROTATION("psai:yrotation");
const std::string ELEMENT_DR_SECTOR_NAME("psai:sectorname");
const std::string ELEMENT_DR_ANGULAR_VELOCITY("psai:angularvelocity");
const std::string ELEMENT_DR_ENTITY_ID("psai:entityid");

const std::string TYPE_EFFECT_MESSAGE("psai:effectmessage");
const std::string ELEMENT_EFFECT_MESSAGE_NAME("psai:name");
const std::string ELEMENT_EFFECT_MESSAGE_ANCHOR_ID("psai:anshorid");
const std::string ELEMENT_EFFECT_MESSAGE_TARGET_ID("psai:targetid");
const std::string ELEMENT_EFFECT_MESSAGE_CAST_DURATION("psai:castduration");
const std::string ELEMENT_EFFECT_MESSAGE_UID("psai:uid");
const std::string ELEMENT_EFFECT_MESSAGE_EFFECT_TEXT("psai:effecttext");

const std::string TYPE_GUI_ACTIVE_MAGIC_MESSAGE("psai:guiactivemagicmessage");
const std::string ELEMENT_GUI_ACTIVE_MAGIC_CATEGORY_LIST("psai:catrgorylist");
const std::string ELEMENT_GUI_ACTIVE_MAGIC_COMMAND("psai:command");

const std::string TYPE_GUI_INTERACT_MESSAGE("psai:guiinteractmessage");
const std::string ELEMENT_GUI_INTERACT_TYPE("psai:type");

const std::string TYPE_GUI_INVENTORY_MESSAGE("psai:guiinventorymessage");
const std::string ELEMENT_GUI_INVENTORY_ITEMS("psai:items");
const std::string ELEMENT_GUI_INVENTORY_TOTAL_ITEMS("psai:totalitens");
const std::string ELEMENT_GUI_INVENTORY_TOTAL_EMPTIED_SLOTS("psai:totalemptiedslots");
const std::string ELEMENT_GUI_INVENTORY_MAX_WEIGHT("psai:maxweight");
const std::string ELEMENT_GUI_INVENTORY_MONEY("psai:money");

const std::string TYPE_GUI_MERCHANT_MESSAGE("psai:guimerchantmessage");
const std::string ELEMENT_GUI_MERCHANT_COMMAND_TYPE("psai:commandtype");
const std::string ELEMENT_GUI_MERCHANT_MESSAGE_CONTENT("psai:messagecontent");

const std::string TYPE_GUI_SKILL_MESSAGE("psai:guiskillmessage");
const std::string ELEMENT_GUI_SKILL_COMMAND("psai:command");
const std::string ELEMENT_GUI_SKILL_COMMAND_DATA("psai:commanddata");
const std::string ELEMENT_GUI_SKILL_STRENGTH("psai:strength");
const std::string ELEMENT_GUI_SKILL_ENDURANCE("psai:endurance");
const std::string ELEMENT_GUI_SKILL_AGILITY("psai:agility");
const std::string ELEMENT_GUI_SKILL_WILL("psai:will");
const std::string ELEMENT_GUI_SKILL_CHARISMA("psai:charisma");
const std::string ELEMENT_GUI_SKILL_HIT_POINTS("psai:hitpoints");
const std::string ELEMENT_GUI_SKILL_MANA("psai:mana");
const std::string ELEMENT_GUI_SKILL_PHYSICAL_STAMINA("psai:physicalstamina");
const std::string ELEMENT_GUI_SKILL_MENTAL_STAMINA("psai:mentalstamina");
const std::string ELEMENT_GUI_SKILL_MAX_HIT_POINTS("psai:maxhitpoints");
const std::string ELEMENT_GUI_SKILL_MAX_MANA("psai:max_mana");
const std::string ELEMENT_GUI_SKILL_MAX_PHYSICAL_STAMINA("psai:maxphysicalstamina");
const std::string ELEMENT_GUI_SKILL_MAX_MENTAL_STAMINA("psai:maxmentalstamina");

const std::string TYPE_GUI_TARGET_UPDATE_MESSAGE("psai:guitargetupdatemessage");
const std::string ELEMENT_GUI_TARGET_UPDATE_CLIENT_ID("psai:clientid");
const std::string ELEMENT_GUI_TARGET_UPDATE_TARGET_ID("psai:targetid");

const std::string TYPE_MODE_MESSAGE("psai:modemessage");
const std::string ELEMENT_MODE_ACTOR_ID("psai:actorid");
const std::string ELEMENT_MODE_MODE("psai:mode");
const std::string ELEMENT_MODE_STANCE("psai:stance");

const std::string TYPE_MOVE_LOCK_MESSAGE("psai:movelockmessage");
const std::string ELEMENT_MOVE_LOCK_LOCKED("psai:locked");

const std::string TYPE_NEW_SECTOR_MESSAGE("psai:newsectormessage");
const std::string ELEMENT_NEW_SECTOR_OLD_SECTOR("psai:oldsector");
const std::string ELEMENT_NEW_SECTOR_NEW_SECTOR("psai:newsector");
const std::string ELEMENT_NEW_SECTOR_POSITION("psai:position");

const std::string TYPE_PERSIST_ACTION_LOCATION_MESSAGE("psai:persistactionlocationmessage");
const std::string ELEMENT_PERSIST_ACTION_LOCATION_SECTOR("psai:sector");
const std::string ELEMENT_PERSIST_ACTION_LOCATION_MESH("psai:mesh");
const std::string ELEMENT_PERSIST_ACTION_LOCATION_ID("psai:id");
const std::string ELEMENT_PERSIST_ACTION_LOCATION_TYPE("psai:type");

const std::string TYPE_PERSIST_ACTOR_MESSAGE("psai:persistactormessage");
const std::string ELEMENT_PERSIST_ACTOR_DR_MESSAGE("psai:drmessage");
const std::string ELEMENT_PERSIST_ACTOR_NAME("psai:name");
const std::string ELEMENT_PERSIST_ACTOR_GUILD("psai:guild");
const std::string ELEMENT_PERSIST_ACTOR_FACT_NAME("psai:factname");
const std::string ELEMENT_PERSIST_ACTOR__FILE_NAME("psai:filename");
const std::string ELEMENT_PERSIST_ACTOR_RACE("psai:race");
const std::string ELEMENT_PERSIST_ACTOR_GENDER("psai:gender");
const std::string ELEMENT_PERSIST_ACTOR_HELM_GROUPS("psai:helmgroups");
const std::string ELEMENT_PERSIST_ACTOR_TOP("psai:top");
const std::string ELEMENT_PERSIST_ACTOR_BOTTOM("psai:bottom");
const std::string ELEMENT_PERSIST_ACTOR_OFFSET("psai:offset");
const std::string ELEMENT_PERSIST_ACTOR_TYPE("psai:type");
const std::string ELEMENT_PERSIST_ACTOR_MASQUERADED_TYPE("psai:masqueradedtype");
const std::string ELEMENT_PERSIST_ACTOR_SERVER_MODE("psai:servermode");
const std::string ELEMENT_PERSIST_ACTOR_PLAYER_ID("psai:playerid");
const std::string ELEMENT_PERSIST_ACTOR_GROUP_ID("psai:groupid");
const std::string ELEMENT_PERSIST_ACTOR_OWNER_EID("psai:ownereid");
const std::string ELEMENT_PERSIST_ACTOR_CONTROL("psai:control");
const std::string ELEMENT_PERSIST_ACTOR_FLAGS("psai:flags");
const std::string ELEMENT_PERSIST_ACTOR_INSTANCE("psai:instance");

const std::string TYPE_PERSIST_ITEM_MESSAGE("psai:persistitemmessage");
const std::string ELEMENT_PERSIST_ITEM_NAME("psai:name");
const std::string ELEMENT_PERSIST_ITEM_FACT_NAME("psai:factname");
const std::string ELEMENT_PERSIST_ITEM_FILE_NAME("psai:filename");
const std::string ELEMENT_PERSIST_ITEM_SECTOR("psai:sector");
const std::string ELEMENT_PERSIST_ITEM_POSITION("psai:position");
const std::string ELEMENT_PERSIST_ITEM_Y_ROTATION("psai:yrotation");
const std::string ELEMENT_PERSIST_ITEM_ID("psai:id");
const std::string ELEMENT_PERSIST_ITEM_TYPE("psai:type");
const std::string ELEMENT_PERSIST_ITEM_FLAGS("psai:flags");

const std::string TYPE_PLAY_SOUND_MESSAGE("psai:playsoundmessage");
const std::string ELEMENT_PLAY_SOUND_SOUND("psai:sound");

const std::string TYPE_QUEST_LIST_MESSAGE("psai:questlistmessage");
const std::string ELEMENT_QUEST_LIST_QUEST_XML("psai:questxml");

const std::string TYPE_QUEST_REWARD_MESSAGE("psai:questrewardmessage");
const std::string ELEMENT_QUEST_REWARD_TYPE("psai:type");
const std::string ELEMENT_QUEST_REWARD_NEW_VALUE("psai:newvalue");

const std::string TYPE_REMOVE_OBJECT_MESSAGE("psai:removeobjectmessage");
const std::string ELEMENT_REMOVE_OBJECT_OBJECT_ID("psai:objectid");

const std::string TYPE_SOUND_EVENT_MESSAGE("psai:soundeventmessage");
const std::string ELEMENT_SOUNT_EVENT_TYPE("psai:soundeventtype");

const std::string TYPE_SPELL_CANCEL_MESSAGE("psai:spellcancelmessage");
// empty message

const std::string TYPE_SPELL_CAST_MESSAGE("psai:spellcastmessage");
const std::string ELEMENT_SPELL_CAST_SPELL("psai:spell");
const std::string ELEMENT_SPELL_CAST_K_FACTOR("psai:kfactor");

const std::string TYPE_STAT_DR_MESSAGE("psai:statdrmessage");
const std::string ELEMENT_STAT_DR_USEFUL("psai:useful");
const std::string ELEMENT_STAT_DR_ENTITY_ID("psai:entityid");
const std::string ELEMENT_STAT_DR_STATS_DIRTY("psai:statsdirty");
const std::string ELEMENT_STAT_DR_COUNTER("psai:counter");

const std::string TYPE_STATS_MESSAGE("psai:statsmessage");
const std::string ELEMENT_STATS_HIT_POINTS("psai:hp");
const std::string ELEMENT_STATS_MANA("psai:mana");
const std::string ELEMENT_STATS_WEIGHT("psai:weight");
const std::string ELEMENT_STATS_CAPACITY("psai:capacity");

const std::string TYPE_STOP_EFFECT_MESSAGE("psai:stopeffectmessage");
const std::string ELEMENT_STOP_EFFECT_UID("psai:uid");

const std::string TYPE_SYSTEM_MESSAGE("psai:systemmessage");
const std::string ELEMENT_SYSTEM_TEXT("psai:text");
const std::string ELEMENT_SYSTEM_TYPE("psai:type");

const std::string TYPE_UPDATE_OBJECT_NAME_MESSAGE("psai:updateobjectname");
const std::string ELEMENT_UPDATE_OBJECT_NAME_OBJECT_ID("psai:objectid");
const std::string ELEMENT_UPDATE_OBJECT_NAME_NEW_NAME("psai:newname");

const std::string TYPE_VIEW_ITEM_DESCRIPTION_MESSAGE("psai:viewitemdescriptionmessage");
const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_ITEM_NAME("psai:itemname");
const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_ITEM_DESCRIPTION("psai:itemdescription");
const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_STACK_COUNT("psai:stackcount");
const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_CONTAINER_ID("psai:containerid");
const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_SLOT_ID("psai:slotid");
const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_HAS_CONTENTS("psai:hascontents");
const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_TO_CLIENT("psai:toclient");
const std::string ELEMENT_VIEW_ITEM_DESCRIPTION_CONTENTS("psai:contents");

const std::string TYPE_VIEW_ITEM_UPDATE_MESSAGE("psai:viewitemupdatemessage");
const std::string ELEMENT_VIEW_ITEM_UPDATE_CLEAR_SLOT("psai:clearslot");
const std::string ELEMENT_VIEW_ITEM_UPDATE_TO_CLIENT("psai:toclient");
const std::string ELEMENT_VIEW_ITEM_UPDATE_CONTAINER_ID("psai:containerid");
const std::string ELEMENT_VIEW_ITEM_UPDATE_NAME("psai:name");
const std::string ELEMENT_VIEW_ITEM_UPDATE_ICON("psai:icon");
const std::string ELEMENT_VIEW_ITEM_UPDATE_SLOT_ID("psai:slotid");
const std::string ELEMENT_VIEW_ITEM_UPDATE_STACK_COUNT("psai:stackcount");
const std::string ELEMENT_VIEW_ITEM_UPDATE_OWNER_ID("psai:ownerid");

const std::string TYPE_WEATHER_MESSAGE("psai:weathermessage");
const std::string ELEMENT_WEATHER_MINUTE("psai:minute");
const std::string ELEMENT_WEATHER_HOUR("psai:hour");
const std::string ELEMENT_WEATHER_DAY("psai:day");
const std::string ELEMENT_WEATHER_MONTH("psai:month");
const std::string ELEMENT_WEATHER_YEAR("psai:year");
const std::string ELEMENT_WEATHER_WEATHER("psai:weather");

const std::string XML_HEADER("<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
const std::string PSAI_MESSAGE_ELEMENT_START("psai:psaimessage");
const std::string PSAI_MESSAGE_ELEMENT_END("psai:psaimessage");

const std::string PSAI_SCHEMA_LOCATION("http://www.zarniwoops.plus.com/psai/xml http://www.zarniwoops.plus.com/psai/xml/psaiXmlMessages.xsd");
const std::string PSAI_NAMESPACE("http://www.zarniwoops.plus.com/psai/xml/psaiXmlMessages.xsd");

const std::string ELEMENT_VECTOR_X("x");
const std::string ELEMENT_VECTOR_Y("y");
const std::string ELEMENT_VECTOR_Z("z");

const std::string ELEMENT_CONTAINER_CONTENTS_NAME("name");
const std::string ELEMENT_CONTAINER_CONTENTS_ICON("icon");
const std::string ELEMENT_CONTAINER_CONTENTS_SLOT_ID("slotid");
const std::string ELEMENT_CONTAINER_CONTENTS_STACK_COUNT("stackcount");
const std::string ELEMENT_CONTAINER_CONTENTS_PURIFY_STATUS("purifystatus");
}
