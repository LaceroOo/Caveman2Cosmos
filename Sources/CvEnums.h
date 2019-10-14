#pragma once

#ifndef CVENUMS_h
#define CVENUMS_h

// enums.h

#include "CvDefines.h"
/************************************************************************************************/
/* MODULAR_MOD_TOOLS                       10/16/07                                MRGENIE      */
/*                                                                                              */
/*                                                                                              */
/************************************************************************************************/
#include "CvDefinesModTools.h"
/************************************************************************************************/
/* MODULAR_MOD_TOOLS                       END                                                  */
/************************************************************************************************/

enum GameStateTypes // Exposed to Python
{
	GAMESTATE_ON,
	GAMESTATE_OVER,
	GAMESTATE_EXTENDED,
};

enum PopupStates // Exposed to Python
{
	POPUPSTATE_IMMEDIATE,
	POPUPSTATE_QUEUED,
	POPUPSTATE_MINIMIZED,
};

enum PopupEventTypes
{
	POPUPEVENT_NONE,
	POPUPEVENT_PRODUCTION,
	POPUPEVENT_TECHNOLOGY,
	POPUPEVENT_RELIGION,
	POPUPEVENT_WARNING,
	POPUPEVENT_CIVIC,
};

enum CameraLookAtTypes // Exposed to Python
{
	CAMERALOOKAT_NORMAL,
	CAMERALOOKAT_CITY_ZOOM_IN,
	CAMERALOOKAT_BATTLE,
	CAMERALOOKAT_BATTLE_ZOOM_IN,
	CAMERALOOKAT_SHRINE_ZOOM_IN,
	CAMERALOOKAT_IMMEDIATE,
	CAMERALOOKAT_HOTSEAT,
};

enum CameraMovementSpeeds // Exposed to Python
{
	CAMERAMOVEMENTSPEED_NORMAL,
	CAMERAMOVEMENTSPEED_SLOW,
	CAMERAMOVEMENTSPEED_FAST,
};

enum CameraAnimationTypes
{
	NO_CAMERA_ANIMATION = -1,
};

enum ZoomLevelTypes // Exposed to Python
{
	ZOOM_UNKNOWN			  = 0x00000000,
	ZOOM_DETAIL				  = 0x00000001,
	ZOOM_NORMAL				  = 0x00000002,
	ZOOM_GLOBEVIEW_TRANSITION = 0x00000004,
	ZOOM_GLOBEVIEW			  = 0x00000008
};

enum DirectionTypes // Exposed to Python
{
	NO_DIRECTION = -1,

	DIRECTION_NORTH,
	DIRECTION_NORTHEAST,
	DIRECTION_EAST,
	DIRECTION_SOUTHEAST,
	DIRECTION_SOUTH,
	DIRECTION_SOUTHWEST,
	DIRECTION_WEST,
	DIRECTION_NORTHWEST,

#ifdef _USRDLL
	NUM_DIRECTION_TYPES,
#endif

	DIRECTION_NORTH_MASK	 = 1 << DIRECTION_NORTH,
	DIRECTION_NORTHEAST_MASK = 1 << DIRECTION_NORTHEAST,
	DIRECTION_EAST_MASK		 = 1 << DIRECTION_EAST,
	DIRECTION_SOUTHEAST_MASK = 1 << DIRECTION_SOUTHEAST,
	DIRECTION_SOUTH_MASK	 = 1 << DIRECTION_SOUTH,
	DIRECTION_SOUTHWEST_MASK = 1 << DIRECTION_SOUTHWEST,
	DIRECTION_WEST_MASK		 = 1 << DIRECTION_WEST,
	DIRECTION_NORTHWEST_MASK = 1 << DIRECTION_NORTHWEST,
};

enum CardinalDirectionTypes // Exposed to Python
{
	NO_CARDINALDIRECTION = -1,

	CARDINALDIRECTION_NORTH,
	CARDINALDIRECTION_EAST,
	CARDINALDIRECTION_SOUTH,
	CARDINALDIRECTION_WEST,

#ifdef _USRDLL
	NUM_CARDINALDIRECTION_TYPES
#endif
};

enum RotationTypes
{
	ROTATE_NONE = 0,
	ROTATE_90CW,
	ROTATE_180CW,
	ROTATE_270CW,
	NUM_ROTATION_TYPES,

	ROTATE_NONE_MASK  = 1 << ROTATE_NONE,
	ROTATE_90CW_MASK  = 1 << ROTATE_90CW,
	ROTATE_180CW_MASK = 1 << ROTATE_180CW,
	ROTATE_270CW_MASK = 1 << ROTATE_270CW,
};

// camera wrap helper
enum WrapDirection
{
	WRAP_SAVE,
	WRAP_NONE = WRAP_SAVE,
	WRAP_RESTORE,
	WRAP_LEFT,
	WRAP_RIGHT,
	WRAP_UP,
	WRAP_DOWN,

#ifdef _USRDLL
	NUM_WRAP_DIRECTIONS,
#endif

	WRAP_LEFT_MASK	= 1 << WRAP_LEFT,
	WRAP_RIGHT_MASK = 1 << WRAP_RIGHT,
	WRAP_UP_MASK	= 1 << WRAP_UP,
	WRAP_DOWN_MASK	= 1 << WRAP_DOWN,
};

enum ColorTypes // Exposed to Python
{
	NO_COLOR = -1,
};

enum PlayerColorTypes // Exposed to Python
{
	NO_PLAYERCOLOR = -1,
};

//Warning: these values correspond to locations in the plot texture [JW]
enum PlotStyles // Exposed to Python
{
	PLOT_STYLE_NONE = -1,

	//first row
	PLOT_STYLE_NUMPAD_1 = 0,
	PLOT_STYLE_NUMPAD_2,
	PLOT_STYLE_NUMPAD_3,
	PLOT_STYLE_NUMPAD_4,
	PLOT_STYLE_NUMPAD_6,
	PLOT_STYLE_NUMPAD_7,
	PLOT_STYLE_NUMPAD_8,
	PLOT_STYLE_NUMPAD_9,

	//second row
	PLOT_STYLE_NUMPAD_1_ANGLED = 8,
	PLOT_STYLE_NUMPAD_2_ANGLED,
	PLOT_STYLE_NUMPAD_3_ANGLED,
	PLOT_STYLE_NUMPAD_4_ANGLED,
	PLOT_STYLE_NUMPAD_6_ANGLED,
	PLOT_STYLE_NUMPAD_7_ANGLED,
	PLOT_STYLE_NUMPAD_8_ANGLED,
	PLOT_STYLE_NUMPAD_9_ANGLED,

	//third row
	PLOT_STYLE_BOX_FILL = 16,
	PLOT_STYLE_BOX_OUTLINE,
	PLOT_STYLE_RIVER_SOUTH,
	PLOT_STYLE_RIVER_EAST,
	PLOT_STYLE_SIDE_ARROWS,
	PLOT_STYLE_CIRCLE,
	PLOT_STYLE_TARGET,
	PLOT_STYLE_DOT_TARGET,

	//fourth row
	PLOT_STYLE_WAVES = 24,
	PLOT_STYLE_DOTS,
	PLOT_STYLE_CIRCLES,
};

//Warning: these values are used as an index into a fixed array
enum PlotLandscapeLayers // Exposed to Python
{
	PLOT_LANDSCAPE_LAYER_ALL			   = -1,
	PLOT_LANDSCAPE_LAYER_BASE			   = 0,
	PLOT_LANDSCAPE_LAYER_RECOMMENDED_PLOTS = 1,
	PLOT_LANDSCAPE_LAYER_WORLD_BUILDER	   = 2,
	PLOT_LANDSCAPE_LAYER_NUMPAD_HELP	   = 2,
	PLOT_LANDSCAPE_LAYER_REVEALED_PLOTS	   = 1,
};

enum AreaBorderLayers
{
	AREA_BORDER_LAYER_REVEALED_PLOTS,
	AREA_BORDER_LAYER_WORLD_BUILDER,
	AREA_BORDER_LAYER_FOUNDING_BORDER,
	AREA_BORDER_LAYER_CITY_RADIUS,
	AREA_BORDER_LAYER_RANGED,
	AREA_BORDER_LAYER_HIGHLIGHT_PLOT,
	AREA_BORDER_LAYER_BLOCKADING,
	AREA_BORDER_LAYER_BLOCKADED,
	NUM_AREA_BORDER_LAYERS
};

enum EffectTypes
{
	NO_EFFECT = -1,
};

enum AttachableTypes
{
	NO_ATTACHABLE = -1,
};

// Dale - RB: Field Bombard new interface added at end of list
// Dale - AB: Bombing new interfaces added at end of list
// Dale - FE: Fighter new interfaces added at end of list
enum InterfaceModeTypes // Exposed to Python
{
	NO_INTERFACEMODE = -1,

	INTERFACEMODE_SELECTION,
	INTERFACEMODE_PING,
	INTERFACEMODE_SIGN,
	INTERFACEMODE_GRIP,
	INTERFACEMODE_GLOBELAYER_INPUT,
	INTERFACEMODE_GO_TO,
	INTERFACEMODE_GO_TO_TYPE,
	INTERFACEMODE_GO_TO_ALL,
	INTERFACEMODE_ROUTE_TO,
	INTERFACEMODE_AIRLIFT,
	INTERFACEMODE_NUKE,
	INTERFACEMODE_RECON,
	INTERFACEMODE_PARADROP,
	INTERFACEMODE_AIRBOMB,
	INTERFACEMODE_RANGE_ATTACK,
	INTERFACEMODE_AIRSTRIKE,
	INTERFACEMODE_REBASE,
	INTERFACEMODE_PYTHON_PICK_PLOT,
	INTERFACEMODE_SAVE_PLOT_NIFS,
	/************************************************************************************************/
	/* DCM                                     04/19/09                                Johny Smith  */
	/************************************************************************************************/
	INTERFACEMODE_AIRBOMB1,
	INTERFACEMODE_AIRBOMB2,
	INTERFACEMODE_AIRBOMB3,
	INTERFACEMODE_AIRBOMB4,
	INTERFACEMODE_AIRBOMB5,
	INTERFACEMODE_BOMBARD,
	INTERFACEMODE_ABOMBARD,
	INTERFACEMODE_FENGAGE,
/************************************************************************************************/
/* DCM                                     END                                                  */
/************************************************************************************************/
// BUG - Sentry Actions - start
#ifdef _MOD_SENTRY
	INTERFACEMODE_GO_TO_SENTRY,
#endif
	// BUG - Sentry Actions - end
	// < M.A.D. Nukes Start >
	INTERFACEMODE_PRETARGET_NUKE,
	// < M.A.D. Nukes End   >
	/************************************************************************************************/
	/* Afforess	                  Start		 09/16/10                                               */
	/*                                                                                              */
	/* Advanced Automations                                                                         */
	/************************************************************************************************/
	INTERFACEMODE_SHADOW_UNIT,
/************************************************************************************************/
/* Afforess	                     END                                                            */
/************************************************************************************************/

#ifdef _USRDLL
	NUM_INTERFACEMODE_TYPES
#endif
};

enum InterfaceMessageTypes // Exposed to Python
{
	NO_MESSAGE_TYPE = -1,

	MESSAGE_TYPE_INFO,
	MESSAGE_TYPE_DISPLAY_ONLY,
	MESSAGE_TYPE_MAJOR_EVENT,
	MESSAGE_TYPE_MINOR_EVENT,
	MESSAGE_TYPE_CHAT,
	MESSAGE_TYPE_COMBAT_MESSAGE,
	MESSAGE_TYPE_QUEST,

#ifdef _USRDLL
	NUM_INTERFACE_MESSAGE_TYPES
#endif
};

enum FlyoutTypes
{
	NO_FLYOUT = -1,

	FLYOUT_HURRY,
	FLYOUT_CONSCRIPT,
	FLYOUT_TRAIN,
	FLYOUT_CONSTRUCT,
	FLYOUT_CREATE,
	FLYOUT_MAINTAIN,
	FLYOUT_MOVE_TO,
	FLYOUT_SELECT_UNIT,
	FLYOUT_SELECT_ALL,
	FLYOUT_WAKE_ALL,
	FLYOUR_FORTIFY_ALL,
	FLYOUR_SLEEP_ALL,
};

enum MinimapModeTypes // Exposed to Python
{
	NO_MINIMAPMODE = -1,

	MINIMAPMODE_TERRITORY,
	MINIMAPMODE_TERRAIN,
	MINIMAPMODE_REPLAY,
	MINIMAPMODE_MILITARY,

#ifdef _USRDLL
	NUM_MINIMAPMODE_TYPES
#endif
};

enum EngineDirtyBits // Exposed to Python
{
	GlobeTexture_DIRTY_BIT,
	GlobePartialTexture_DIRTY_BIT,
	MinimapTexture_DIRTY_BIT,
	CultureBorders_DIRTY_BIT,

#ifdef _USRDLL
	NUM_ENGINE_DIRTY_BITS
#endif
};

enum InterfaceDirtyBits // Exposed to Python
{
	SelectionCamera_DIRTY_BIT,
	Fog_DIRTY_BIT,
	GlobeLayer_DIRTY_BIT,
	GlobeInfo_DIRTY_BIT,
	Waypoints_DIRTY_BIT,
	PercentButtons_DIRTY_BIT,
	MiscButtons_DIRTY_BIT,
	PlotListButtons_DIRTY_BIT,
	SelectionButtons_DIRTY_BIT,
	CitizenButtons_DIRTY_BIT,
	ResearchButtons_DIRTY_BIT,
	Event_DIRTY_BIT,
	Center_DIRTY_BIT,
	GameData_DIRTY_BIT,
	Score_DIRTY_BIT,
	TurnTimer_DIRTY_BIT,
	Help_DIRTY_BIT,
	MinimapSection_DIRTY_BIT,
	SelectionSound_DIRTY_BIT,
	Cursor_DIRTY_BIT,
	CityInfo_DIRTY_BIT,
	UnitInfo_DIRTY_BIT,
	Popup_DIRTY_BIT,
	CityScreen_DIRTY_BIT,
	InfoPane_DIRTY_BIT,
	Flag_DIRTY_BIT,
	HighlightPlot_DIRTY_BIT,
	ColoredPlots_DIRTY_BIT,
	BlockadedPlots_DIRTY_BIT,
	Financial_Screen_DIRTY_BIT,
	Foreign_Screen_DIRTY_BIT,
	Soundtrack_DIRTY_BIT,
	Domestic_Advisor_DIRTY_BIT,
	Espionage_Advisor_DIRTY_BIT,
	Advanced_Start_DIRTY_BIT,

#ifdef _USRDLL
	NUM_INTERFACE_DIRTY_BITS
#endif
};

enum CityTabTypes // Exposed to Python
{
	NO_CITYTAB = -1,

	CITYTAB_UNITS,
	CITYTAB_BUILDINGS,
	CITYTAB_WONDERS,

#ifdef _USRDLL
	NUM_CITYTAB_TYPES
#endif
};

enum WidgetTypes // Exposed to Python
{
	WIDGET_PLOT_LIST,
	WIDGET_PLOT_LIST_SHIFT,
	WIDGET_CITY_SCROLL,
	WIDGET_LIBERATE_CITY,
	WIDGET_CITY_NAME,
	WIDGET_UNIT_NAME,
	WIDGET_CREATE_GROUP,
	WIDGET_DELETE_GROUP,
	WIDGET_TRAIN,
	WIDGET_CONSTRUCT,
	WIDGET_CREATE,
	WIDGET_MAINTAIN,
	WIDGET_HURRY,
	WIDGET_MENU_ICON,
	WIDGET_CONSCRIPT,
	WIDGET_ACTION,
	WIDGET_DISABLED_CITIZEN,
	WIDGET_CITIZEN,
	WIDGET_FREE_CITIZEN,
	WIDGET_ANGRY_CITIZEN,
	WIDGET_CHANGE_SPECIALIST,
	WIDGET_RESEARCH,
	WIDGET_TECH_TREE,
	WIDGET_CHANGE_PERCENT,
	WIDGET_CITY_TAB,
	WIDGET_CONTACT_CIV,
	WIDGET_SCORE_BREAKDOWN,
	WIDGET_ZOOM_CITY,
	WIDGET_END_TURN,
	WIDGET_LAUNCH_VICTORY,
	WIDGET_CONVERT,
	WIDGET_AUTOMATE_CITIZENS,
	WIDGET_AUTOMATE_PRODUCTION,
	WIDGET_EMPHASIZE,
	WIDGET_DIPLOMACY_RESPONSE,
	WIDGET_GENERAL,
	WIDGET_FILE_LISTBOX,
	WIDGET_FILE_EDITBOX,
	WIDGET_WB_UNITNAME_EDITBOX,
	WIDGET_WB_CITYNAME_EDITBOX,
	WIDGET_WB_SAVE_BUTTON,
	WIDGET_WB_LOAD_BUTTON,
	WIDGET_WB_ALL_PLOTS_BUTTON,
	WIDGET_WB_LANDMARK_BUTTON,
	WIDGET_WB_ERASE_BUTTON,
	WIDGET_WB_EXIT_BUTTON,
	WIDGET_WB_UNIT_EDIT_BUTTON,
	WIDGET_WB_CITY_EDIT_BUTTON,
	WIDGET_WB_NORMAL_PLAYER_TAB_MODE_BUTTON,
	WIDGET_WB_NORMAL_MAP_TAB_MODE_BUTTON,
	WIDGET_WB_REVEAL_TAB_MODE_BUTTON,
	WIDGET_WB_DIPLOMACY_MODE_BUTTON,
	WIDGET_WB_REVEAL_ALL_BUTTON,
	WIDGET_WB_UNREVEAL_ALL_BUTTON,
	WIDGET_WB_REGENERATE_MAP,
	WIDGET_TRADE_ITEM,
	WIDGET_UNIT_MODEL,
	WIDGET_FLAG,
	WIDGET_POPUP_QUEUE,

	//	This is meant for python buttons, it will call python functions for display and execution
	WIDGET_PYTHON,

	//	This button type is reserved for widgets meant to be displayed only.  This is meant for general interface text and such...
	WIDGET_HELP_MAINTENANCE,
	WIDGET_HELP_RELIGION,
	WIDGET_HELP_RELIGION_CITY,
	WIDGET_HELP_CORPORATION_CITY,
	WIDGET_HELP_NATIONALITY,
	WIDGET_HELP_DEFENSE,
	WIDGET_HELP_HEALTH,
	WIDGET_HELP_HAPPINESS,
	WIDGET_HELP_POPULATION,
	WIDGET_HELP_PRODUCTION,
	WIDGET_HELP_CULTURE,
	WIDGET_HELP_GREAT_PEOPLE,
	WIDGET_HELP_GREAT_GENERAL,
	WIDGET_HELP_SELECTED,
	WIDGET_HELP_BUILDING,
	WIDGET_HELP_TRADE_ROUTE_CITY,
	WIDGET_HELP_ESPIONAGE_COST,
	WIDGET_HELP_TECH_ENTRY,
	WIDGET_HELP_TECH_PREPREQ,
	WIDGET_HELP_OBSOLETE,
	WIDGET_HELP_OBSOLETE_BONUS,
	WIDGET_HELP_OBSOLETE_SPECIAL,
	WIDGET_HELP_MOVE_BONUS,
	WIDGET_HELP_FREE_UNIT,
	WIDGET_HELP_FEATURE_PRODUCTION,
	WIDGET_HELP_WORKER_RATE,
	WIDGET_HELP_TRADE_ROUTES,
	WIDGET_HELP_HEALTH_RATE,
	WIDGET_HELP_HAPPINESS_RATE,
	WIDGET_HELP_FREE_TECH,
	WIDGET_HELP_LOS_BONUS,
	WIDGET_HELP_MAP_CENTER,
	WIDGET_HELP_MAP_REVEAL,
	WIDGET_HELP_MAP_TRADE,
	WIDGET_HELP_TECH_TRADE,
	WIDGET_HELP_GOLD_TRADE,
	WIDGET_HELP_OPEN_BORDERS,
	WIDGET_HELP_DEFENSIVE_PACT,
	WIDGET_HELP_PERMANENT_ALLIANCE,
	WIDGET_HELP_VASSAL_STATE,
	WIDGET_HELP_BUILD_BRIDGE,
	WIDGET_HELP_IRRIGATION,
	WIDGET_HELP_IGNORE_IRRIGATION,
	WIDGET_HELP_WATER_WORK,
	WIDGET_HELP_IMPROVEMENT,
	WIDGET_HELP_DOMAIN_EXTRA_MOVES,
	WIDGET_HELP_ADJUST,
	WIDGET_HELP_TERRAIN_TRADE,
	WIDGET_HELP_SPECIAL_BUILDING,
	WIDGET_HELP_YIELD_CHANGE,
	WIDGET_HELP_BONUS_REVEAL,
	WIDGET_HELP_CIVIC_REVEAL,
	WIDGET_HELP_PROCESS_INFO,
	WIDGET_HELP_FOUND_RELIGION,
	WIDGET_HELP_FOUND_CORPORATION,
	WIDGET_HELP_FINANCE_NUM_UNITS,
	WIDGET_HELP_FINANCE_UNIT_COST,
	WIDGET_HELP_FINANCE_AWAY_SUPPLY,
	WIDGET_HELP_FINANCE_CITY_MAINT,
	WIDGET_HELP_FINANCE_CIVIC_UPKEEP,
	WIDGET_HELP_FINANCE_FOREIGN_INCOME,
	WIDGET_HELP_FINANCE_INFLATED_COSTS,
	WIDGET_HELP_FINANCE_GROSS_INCOME,
	WIDGET_HELP_FINANCE_NET_GOLD,
	WIDGET_HELP_FINANCE_GOLD_RESERVE,
	WIDGET_HELP_PROMOTION,

	WIDGET_CHOOSE_EVENT,
	WIDGET_PEDIA_JUMP_TO_TECH,
	WIDGET_PEDIA_JUMP_TO_UNIT,
	WIDGET_PEDIA_JUMP_TO_BUILDING,
	WIDGET_PEDIA_JUMP_TO_REQUIRED_TECH,
	WIDGET_PEDIA_JUMP_TO_DERIVED_TECH,
	WIDGET_PEDIA_BACK,
	WIDGET_PEDIA_FORWARD,
	WIDGET_PEDIA_JUMP_TO_BONUS,
	WIDGET_PEDIA_MAIN,
	WIDGET_PEDIA_JUMP_TO_PROMOTION,
	WIDGET_PEDIA_JUMP_TO_UNIT_COMBAT,
	WIDGET_PEDIA_JUMP_TO_IMPROVEMENT,
	WIDGET_PEDIA_JUMP_TO_CIVIC,
	WIDGET_PEDIA_JUMP_TO_CIV,
	WIDGET_PEDIA_JUMP_TO_LEADER,
	WIDGET_PEDIA_JUMP_TO_SPECIALIST,
	WIDGET_PEDIA_JUMP_TO_PROJECT,
	WIDGET_PEDIA_JUMP_TO_TERRAIN,
	WIDGET_PEDIA_JUMP_TO_FEATURE,
	WIDGET_TURN_EVENT,
	WIDGET_FOREIGN_ADVISOR,
	WIDGET_REVOLUTION,
	WIDGET_PEDIA_DESCRIPTION,
	WIDGET_PEDIA_DESCRIPTION_NO_HELP,
	WIDGET_DEAL_KILL,
	WIDGET_MINIMAP_HIGHLIGHT,
	WIDGET_PRODUCTION_MOD_HELP,
	WIDGET_LEADERHEAD,
	WIDGET_LEADER_LINE,
	WIDGET_COMMERCE_MOD_HELP,
	WIDGET_CLOSE_SCREEN,
	WIDGET_PEDIA_JUMP_TO_RELIGION,
	WIDGET_PEDIA_JUMP_TO_CORPORATION,
	WIDGET_GLOBELAYER,
	WIDGET_GLOBELAYER_OPTION,
	WIDGET_GLOBELAYER_TOGGLE,

	// BUG - Min/Max Commerce Rate - start
	WIDGET_SET_PERCENT,
	// BUG - Min/Max Commerce Rate - end

	// BUG - Finance Advisor - start
	WIDGET_HELP_FINANCE_DOMESTIC_TRADE,
	WIDGET_HELP_FINANCE_FOREIGN_TRADE,
	WIDGET_HELP_FINANCE_SPECIALISTS,
	// BUG - Finance Advisor - end

	// BUG - Trade Denial - start
	WIDGET_PEDIA_JUMP_TO_BONUS_TRADE,
	WIDGET_PEDIA_JUMP_TO_TECH_TRADE,
	// BUG - Trade Denial - end

	// BUG - Foreign Advisor INFO Trade - start
	WIDGET_TRADE_ROUTES,
	// BUG - Foreign Advisor INFO Trade - end

	// BUG - Food Rate Hover - start
	WIDGET_FOOD_MOD_HELP,
	// BUG - Food Rate Hover - end

	// BUG - Leaderhead Relations - start
	WIDGET_LEADERHEAD_RELATIONS,
	// BUG - Leaderhead Relations - end
	/************************************************************************************************/
	/* Afforess	                  Start		 01/18/10                                               */
	/*                                                                                              */
	/*                                                                                              */
	/************************************************************************************************/
	WIDGET_OBSOLETE_PROMOTION,
	WIDGET_OBSOLETE_CORPORATION,
	WIDGET_HELP_EMPLOYMENT,
	WIDGET_HELP_IMPROVEMENT_CAN_UPGRADE,
	WIDGET_EXTRA_TECH_STRENGTH,
	/************************************************************************************************/
	/* Afforess	                     END                                                            */
	/************************************************************************************************/
	WIDGET_BUILDING_FILTER,
	WIDGET_BUILDING_GROUPING,
	WIDGET_BUILDING_SORT,
	WIDGET_UNIT_FILTER,
	WIDGET_UNIT_GROUPING,
	WIDGET_UNIT_SORT,

	WIDGET_PROPERTY,

	WIDGET_BUILD_LIST_TRAIN,
	WIDGET_BUILD_LIST_CONSTRUCT,
	WIDGET_BUILD_LIST_CREATE,
	WIDGET_BUILD_LIST_QUEUE,
	WIDGET_BUILD_LIST,
	WIDGET_BUILD_LIST_LIST,
	WIDGET_HELP_TRAIT,
	WIDGET_PEDIA_JUMP_TO_TRAIT,
	//ls612: Viewport Goto Helper Widget
	WIDGET_CITY_GOTO,
	WIDGET_PEDIA_JUMP_TO_ROUTE,
	WIDGET_HELP_IMPROVEMENT_ACTUAL,
	WIDGET_HELP_BUILDUP,

#ifdef _USRDLL
	NUM_WIDGET_TYPES
#endif
};

enum ButtonPopupTypes // Exposed to Python
{
	BUTTONPOPUP_TEXT,
	BUTTONPOPUP_MAIN_MENU,
	BUTTONPOPUP_CONFIRM_MENU,
	BUTTONPOPUP_DECLAREWARMOVE,
	BUTTONPOPUP_CONFIRMCOMMAND,
	BUTTONPOPUP_LOADUNIT,
	BUTTONPOPUP_LEADUNIT,
	BUTTONPOPUP_DOESPIONAGE,
	BUTTONPOPUP_DOESPIONAGE_TARGET,
	BUTTONPOPUP_CHOOSETECH,
	BUTTONPOPUP_RAZECITY,
	BUTTONPOPUP_DISBANDCITY,
	BUTTONPOPUP_CHOOSEPRODUCTION,
	BUTTONPOPUP_CHANGECIVIC,
	BUTTONPOPUP_CHANGERELIGION,
	BUTTONPOPUP_CHOOSEELECTION,
	BUTTONPOPUP_DIPLOVOTE,
	BUTTONPOPUP_ALARM,
	BUTTONPOPUP_DEAL_CANCELED,
	BUTTONPOPUP_PYTHON,
	BUTTONPOPUP_PYTHON_SCREEN,
	BUTTONPOPUP_DETAILS,
	BUTTONPOPUP_ADMIN,
	BUTTONPOPUP_ADMIN_PASSWORD,
	BUTTONPOPUP_EXTENDED_GAME,
	BUTTONPOPUP_DIPLOMACY,
	BUTTONPOPUP_ADDBUDDY,
	BUTTONPOPUP_FORCED_DISCONNECT,
	BUTTONPOPUP_PITBOSS_DISCONNECT,
	BUTTONPOPUP_KICKED,
	BUTTONPOPUP_VASSAL_DEMAND_TRIBUTE,
	BUTTONPOPUP_VASSAL_GRANT_TRIBUTE,
	BUTTONPOPUP_EVENT,
	BUTTONPOPUP_FREE_COLONY,
	BUTTONPOPUP_LAUNCH,
	BUTTONPOPUP_FOUND_RELIGION,
	/************************************************************************************************/
	/* Afforess	                  Start		 09/18/10                                               */
	/*                                                                                              */
	/*                                                                                              */
	/************************************************************************************************/
	//Castle Mod
	BUTTONPOPUP_INVASION,
	//AUA
	BUTTONPOPUP_SELECT_UNIT,
	BUTTONPOPUP_SELECT_DISCOVERY_TECH,
	/************************************************************************************************/
	/* Afforess	                     END                                                            */
	/************************************************************************************************/
	BUTTONPOPUP_GET_SAVE_FORMAT, //	Koshling - user choose save format dialog
	BUTTONPOPUP_SAVE_INFO_LOST, //	Non-fatal warning that some entities could not be instantiated

	BUTTONPOPUP_MODIFIER_RECALCULATION, // Ask user if he wants to recalculated modifiers when DLL or assets have changed
	BUTTONPOPUP_NAME_LIST,
	BUTTONPOPUP_CHOOSE_TRAIT,
	BUTTONPOPUP_CHOOSE_TRAIT_NEGATIVE,
	BUTTONPOPUP_GOTO_CITY, //ls612: For Go To City popup
	BUTTONPOPUP_CHOOSE_MERGE_UNIT,
	BUTTONPOPUP_CONFIRM_SPLIT_UNIT,
	BUTTONPOPUP_IMPROVEMENT_UPGRADE_OPTIONS,
	BUTTONPOPUP_CHOOSE_BUILDUP,
	BUTTONPOPUP_CHOOSE_ARREST_UNIT,
	BUTTONPOPUP_CONFIRM_AMBUSH,

#ifdef _USRDLL
	NUM_BUTTONPOPUP_TYPES
#endif
};

enum ClimateTypes // Exposed to Python
{
	NO_CLIMATE = -1,
};

enum SeaLevelTypes // Exposed to Python
{
	NO_SEALEVEL = -1,
};

enum CustomMapOptionTypes // Exposed to Python
{
	NO_CUSTOM_MAPOPTION = -1,
};

enum WorldSizeTypes // Exposed to Python
{
	NO_WORLDSIZE = -1,

	WORLDSIZE_DUEL,
	WORLDSIZE_TINY,
	WORLDSIZE_SMALL,
	WORLDSIZE_STANDARD,
	WORLDSIZE_LARGE,
	WORLDSIZE_HUGE,

#ifdef _USRDLL
	NUM_WORLDSIZE_TYPES
#endif
};

/*********************************/
/***** Parallel Maps - Begin *****/
/*********************************/

enum MapTypes
{
	NO_MAP = -1,
	MAP_INITIAL,
	MAX_MAPS = 10,
};

enum MapSwitchTypes
{
	NO_MAPSWITCH = -1,
};

/*******************************/
/***** Parallel Maps - End *****/
/*******************************/

// This is our current relationship with each
// one of our connected network peers
enum InitStates
{
	INIT_INACTIVE,
	INIT_CONNECTED,
	INIT_SENT_READY,
	INIT_READY,
	INIT_ASSIGNED_ID,
	INIT_SENT_ID,
	INIT_PEER,
	INIT_FILE_TRANSFER,
	INIT_TRANSFER_COMPLETE,
	INIT_AUTHORIZED,
	INIT_MAP_CONFIRMED,
	INIT_GAME_STARTED,
};

enum TerrainTypes // Exposed to Python
{
	NO_TERRAIN = -1,
};

enum PlotTypes // Exposed to Python
{
	NO_PLOT = -1,

	PLOT_PEAK,
	PLOT_HILLS,
	PLOT_LAND,
	PLOT_OCEAN,

#ifdef _USRDLL
	NUM_PLOT_TYPES
#endif
};

enum YieldTypes // Exposed to Python
{
	NO_YIELD = -1,

	YIELD_FOOD,
	YIELD_PRODUCTION,
	YIELD_COMMERCE,

#ifdef _USRDLL
	NUM_YIELD_TYPES
#endif
};

enum CommerceTypes // Exposed to Python
{
	NO_COMMERCE = -1,

	COMMERCE_GOLD,
	COMMERCE_RESEARCH,
	COMMERCE_CULTURE,
	COMMERCE_ESPIONAGE,

#ifdef _USRDLL
	NUM_COMMERCE_TYPES
#endif
};

enum AdvisorTypes // Exposed to Python
{
	NO_ADVISOR = -1
};

enum FlavorTypes // Exposed to Python
{
	NO_FLAVOR = -1
};

enum EmphasizeTypes // Exposed to Python
{
	NO_EMPHASIZE = -1,
};

enum GameOptionTypes // Exposed to Python
{
	NO_GAMEOPTION = -1,

	GAMEOPTION_ADVANCED_START,
	GAMEOPTION_NO_CITY_RAZING,
	GAMEOPTION_NO_CITY_FLIPPING,
	GAMEOPTION_FLIPPING_AFTER_CONQUEST,
	GAMEOPTION_NO_BARBARIANS,
	GAMEOPTION_RAGING_BARBARIANS,
	GAMEOPTION_AGGRESSIVE_AI,
	GAMEOPTION_LEAD_ANY_CIV,
	GAMEOPTION_RANDOM_PERSONALITIES,
	GAMEOPTION_PICK_RELIGION,
	GAMEOPTION_NO_TECH_TRADING,
	GAMEOPTION_NO_TECH_BROKERING,
	GAMEOPTION_PERMANENT_ALLIANCES,
	GAMEOPTION_ONE_CITY_CHALLENGE,
	GAMEOPTION_NEW_RANDOM_SEED,
	GAMEOPTION_LOCK_MODS,
	GAMEOPTION_COMPLETE_KILLS,
	GAMEOPTION_NO_VASSAL_STATES,
	GAMEOPTION_NO_GOODY_HUTS,
	GAMEOPTION_NO_EVENTS,
	GAMEOPTION_NO_ESPIONAGE,

	/********************************************************************************/
	/**		REVOLUTION_MOD							5/27/08				jdog5000	*/
	/**																				*/
	/**																				*/
	/********************************************************************************/
	GAMEOPTION_BARBARIAN_WORLD,
	GAMEOPTION_NO_REVOLUTION,
	GAMEOPTION_LIMITED_RELIGIONS,
	GAMEOPTION_NO_INQUISITIONS,
	GAMEOPTION_NO_BARBARIAN_CIV,
	GAMEOPTION_NO_TECH_DIFFUSION,
	GAMEOPTION_START_AS_MINORS,
	/********************************************************************************/
	/*		REVOLUTION_MOD							END								*/
	/********************************************************************************/

	/************************************************************************************************/
	/* Afforess			 		Last Update: 6/12/11                                                */
	/*                              New Gameoptions                                                 */
	/*                                                                                              */
	/************************************************************************************************/
	GAMEOPTION_MOUNTAINS,
	GAMEOPTION_SAD,
	GAMEOPTION_ADVANCED_DIPLOMACY,
	GAMEOPTION_UNLIMITED_WONDERS,
	GAMEOPTION_BARBARIAN_GENERALS,
	GAMEOPTION_NO_ZOC,
	GAMEOPTION_ASSIMILATION,
	GAMEOPTION_CHALLENGE_CUT_LOSERS,
	GAMEOPTION_CHALLENGE_HIGH_TO_LOW,
	GAMEOPTION_CHALLENGE_INCREASING_DIFFICULTY,
	GAMEOPTION_RUTHLESS_AI,
	GAMEOPTION_GREAT_COMMANDERS,
	GAMEOPTION_CULTURALLY_LINKED_STARTS,
	GAMEOPTION_PERSONALIZED_MAP,
	GAMEOPTION_ADVANCED_ECONOMY,
	GAMEOPTION_REALISTIC_CULTURE_SPREAD,
	GAMEOPTION_LARGER_CITIES,
	GAMEOPTION_REALISTIC_CORPORATIONS,
	GAMEOPTION_RELIGION_DECAY,
	GAMEOPTION_NO_FUTURE,
	GAMEOPTION_BARBARIANS_ALWAYS_RAZE,
	GAMEOPTION_UNITED_NATIONS,
	GAMEOPTION_ADVANCED_ESPIONAGE,
	GAMEOPTION_ADVANCED_NUKES,
/************************************************************************************************/
/* Afforess						          END                                                   */
/************************************************************************************************/
#ifdef C2C_BUILD
	GAMEOPTION_DIVINE_PROPHETS,
	GAMEOPTION_NO_CITY_LIMITS,
	GAMEOPTION_NO_FIXED_BORDERS,
	GAMEOPTION_INFINITE_XP,
	GAMEOPTION_UNLIMITED_NATIONAL_UNITS,
	GAMEOPTION_STRENGTH_IN_NUMBERS,
	GAMEOPTION_NO_NEGATIVE_TRAITS,
	GAMEOPTION_PURE_TRAITS,
	GAMEOPTION_LEADERHEAD_LEVELUPS,
	GAMEOPTION_START_NO_POSITIVE_TRAITS,
	GAMEOPTION_NO_NUKES,
	GAMEOPTION_SCALE_CITY_LIMITS,
	GAMEOPTION_COMPLEX_TRAITS,
	GAMEOPTION_LS612_TRAITS,
	GAMEOPTION_RELIGIOUS_DISABLING,
	GAMEOPTION_UPSCALED_BUILDING_AND_UNIT_COSTS,
	GAMEOPTION_FIGHT_OR_FLIGHT,
	GAMEOPTION_SIZE_MATTERS,
	GAMEOPTION_HEART_OF_WAR,
	GAMEOPTION_BATTLEWORN,
	GAMEOPTION_UPRANGE,
	GAMEOPTION_EQUIPMENT,
	GAMEOPTION_MAXIMUM_POPULATION,
	GAMEOPTION_MIN_CITY_BORDER,
	GAMEOPTION_MORE_RIVERS,
	GAMEOPTION_MORE_RESOURCES,
	GAMEOPTION_XP_FROM_ASSIGNED_SPECIALISTS,
	GAMEOPTION_MORE_XP_TO_LEVEL,
	GAMEOPTION_ONGOING_TRAINING,
	GAMEOPTION_NIGHTMARE_MODE,
	GAMEOPTION_SIZE_MATTERS_UNCUT,
	GAMEOPTION_ECOLOGICAL_ANIMALS,
	GAMEOPTION_TELEPORT_HUNTING_AWARDS,
	GAMEOPTION_AMNESTY,
	GAMEOPTION_HIDE_AND_SEEK,
	GAMEOPTION_PEACE_AMONG_NPCS,
	GAMEOPTION_ANIMALS_STAY_OUT,
	GAMEOPTION_RECKLESS_ANIMALS,
	GAMEOPTION_NEANDERTHAL_CITIES,
	GAMEOPTION_1_CITY_TILE_FOUNDING,
	GAMEOPTION_REALISTIC_SIEGE,
	GAMEOPTION_VANILLA_COMBAT_ENGINE,
	GAMEOPTION_WITHOUT_WARNING,
	GAMEOPTION_WIN_FOR_LOSING,
	GAMEOPTION_BEELINE_STINGS,
	GAMEOPTION_OUTBREAKS_AND_AFFLICTIONS,
	GAMEOPTION_NO_TECH_HANDICAPS_FOR_HUMANS,
	GAMEOPTION_DOWNSIZING_IS_PROFITABLE,
	GAMEOPTION_UPSCALED_RESEARCH_COSTS,
	GAMEOPTION_DANGEROUS_WILDLIFE,
	GAMEOPTION_HISTORICAL_WONDERS
#endif
};

#define NUM_GAMEOPTION_TYPES GC.getNumGameOptionInfos()

enum MultiplayerOptionTypes // Exposed to Python
{
	NO_MPOPTION = -1,

	MPOPTION_SIMULTANEOUS_TURNS,
	MPOPTION_TAKEOVER_AI,
	MPOPTION_SHUFFLE_TEAMS,
	MPOPTION_ANONYMOUS,
	MPOPTION_TURN_TIMER,

#ifdef _USRDLL
	NUM_MPOPTION_TYPES
#endif
};

enum SpecialOptionTypes // Exposed to Python
{
	NO_SPECIALOPTION = -1,

	SPECIALOPTION_REPORT_STATS,

#ifdef _USRDLL
	NUM_SPECIALOPTION_TYPES
#endif
};

enum PlayerOptionTypes // Exposed to Python
{
	NO_PLAYEROPTION = -1,

	PLAYEROPTION_ADVISOR_POPUPS,
	PLAYEROPTION_ADVISOR_HELP,
	PLAYEROPTION_WAIT_END_TURN,
	PLAYEROPTION_MINIMIZE_POP_UPS,
	PLAYEROPTION_SHOW_FRIENDLY_MOVES,
	PLAYEROPTION_SHOW_ENEMY_MOVES,
	PLAYEROPTION_QUICK_MOVES,
	PLAYEROPTION_QUICK_ATTACK,
	PLAYEROPTION_QUICK_DEFENSE,
	PLAYEROPTION_STACK_ATTACK,
	PLAYEROPTION_AUTO_PROMOTION,
	PLAYEROPTION_START_AUTOMATED,
	PLAYEROPTION_SAFE_AUTOMATION,
	PLAYEROPTION_NUMPAD_HELP,
	PLAYEROPTION_NO_UNIT_CYCLING,
	PLAYEROPTION_NO_UNIT_RECOMMENDATIONS,
	PLAYEROPTION_RIGHT_CLICK_MENU,
	PLAYEROPTION_LEAVE_FORESTS,
	PLAYEROPTION_MISSIONARIES_AUTOMATED,
	PLAYEROPTION_MODDER_1,
	PLAYEROPTION_MODDER_2,
	PLAYEROPTION_MODDER_3,

#ifdef _USRDLL
	NUM_PLAYEROPTION_TYPES
#endif
};

enum GraphicOptionTypes // Exposed to Python
{
	NO_GRAPHICOPTION = -1,

	GRAPHICOPTION_SINGLE_UNIT_GRAPHICS,
	GRAPHICOPTION_HEALTH_BARS,
	GRAPHICOPTION_CITY_DETAIL,
	GRAPHICOPTION_NO_COMBAT_ZOOM,
	GRAPHICOPTION_NO_ENEMY_GLOW,
	GRAPHICOPTION_FROZEN_ANIMATIONS,
	GRAPHICOPTION_EFFECTS_DISABLED,
	GRAPHICOPTION_GLOBE_VIEW_BUILDINGS_DISABLED,
	GRAPHICOPTION_FULLSCREEN,
	GRAPHICOPTION_LOWRES_TEXTURES,
	GRAPHICOPTION_HIRES_TERRAIN,
	GRAPHICOPTION_NO_MOVIES,
	GRAPHICOPTION_CITY_RADIUS,

#ifdef _USRDLL
	NUM_GRAPHICOPTION_TYPES
#endif
};

enum ForceControlTypes // Exposed to Python
{
	NO_FORCECONTROL = -1,

	FORCECONTROL_SPEED,
	FORCECONTROL_HANDICAP,
	FORCECONTROL_OPTIONS,
	FORCECONTROL_VICTORIES,
	FORCECONTROL_MAX_TURNS,
	FORCECONTROL_MAX_CITY_ELIMINATION,
	FORCECONTROL_ADVANCED_START,

#ifdef _USRDLL
	NUM_FORCECONTROL_TYPES
#endif
};

enum TileArtTypes
{
	TILE_ART_TYPE_NONE = -1,
	TILE_ART_TYPE_TREES,
	TILE_ART_TYPE_HALF_TILING,
	TILE_ART_TYPE_PLOT_TILING,
	NUM_TILE_ART_TYPES
};

enum LightTypes
{
	LIGHT_TYPE_NONE = -1,
	LIGHT_TYPE_SUN,
	LIGHT_TYPE_TERRAIN,
	LIGHT_TYPE_UNIT,
	NUM_LIGHT_TYPES
};

enum VictoryTypes // Exposed to Python
{
	NO_VICTORY = -1,
};

enum FeatureTypes // Exposed to Python
{
	NO_FEATURE = -1,
};

enum BonusTypes // Exposed to Python
{
	NO_BONUS = -1,
};

enum BonusClassTypes // Exposed to Python
{
	NO_BONUSCLASS = -1,
};

enum ImprovementTypes // Exposed to Python
{
	NO_IMPROVEMENT = -1,
};

enum RouteTypes // Exposed to Python
{
	NO_ROUTE = -1,
};

enum RiverTypes // Exposed to Python
{
	NO_RIVER = -1,
};

enum GoodyTypes // Exposed to Python
{
	NO_GOODY = -1,
};

enum BuildTypes // Exposed to Python
{
	NO_BUILD = -1,
};

enum SymbolTypes // Exposed to Python
{
	NO_SYMBOL = -1,
};

enum FontSymbols // Exposed to Python
{
	// 'OTHER' symbols
	HAPPY_CHAR = 0,
	UNHAPPY_CHAR,
	HEALTHY_CHAR,
	UNHEALTHY_CHAR,
	BULLET_CHAR,
	STRENGTH_CHAR,
	MOVES_CHAR,
	RELIGION_CHAR,
	STAR_CHAR,
	SILVER_STAR_CHAR,
	TRADE_CHAR,
	DEFENSE_CHAR,
	GREAT_PEOPLE_CHAR,
	BAD_GOLD_CHAR,
	BAD_FOOD_CHAR,
	EATEN_FOOD_CHAR,
	GOLDEN_AGE_CHAR,
	ANGRY_POP_CHAR,
	OPEN_BORDERS_CHAR,
	DEFENSIVE_PACT_CHAR,
	MAP_CHAR,
	OCCUPATION_CHAR,
	POWER_CHAR,
	// BUG - start
	CITIZEN_CHAR,
	GREAT_GENERAL_CHAR,
	AIRPORT_CHAR,
	// BUG - end
	ANGRY_CIV_CHAR,
	UNHAPPY_CIV_CHAR,
	NORMAL_CIV_CHAR,
	HAPPY_CIV_CHAR,
	VERYHAPPY_CIV_CHAR,
	CROSSED_CHAR,
	RANDOM_CHAR,

#ifdef _USRDLL
	MAX_NUM_SYMBOLS
#endif
};

enum HandicapTypes // Exposed to Python
{
	NO_HANDICAP = -1,
};

enum GameSpeedTypes // Exposed to Python
{
	NO_GAMESPEED = -1,
};

enum TurnTimerTypes // Exposed to Python
{
	NO_TURNTIMER = -1,
};

enum EraTypes // Exposed to Python
{
	NO_ERA = -1,
};

enum PropertyTypes
{
	NO_PROPERTY = -1,
};

enum OutcomeTypes
{
	NO_OUTCOME = -1,
};

enum CivilizationTypes // Exposed to Python
{
	NO_CIVILIZATION = -1,
};

enum LeaderHeadTypes // Exposed to Python
{
	NO_LEADER = -1,
};

// Used for managing Art Differences based on nationality
enum ArtStyleTypes // Exposed to Python
{
	NO_ARTSTYLE = -1,
};

enum UnitArtStyleTypes
{
	NO_UNIT_ARTSTYLE = -1,
};

enum CitySizeTypes // Exposed to Python
{
	NO_CITYSIZE = -1,

	CITYSIZE_SMALL,
	CITYSIZE_MEDIUM,
	CITYSIZE_LARGE,

#ifdef _USRDLL
	NUM_CITYSIZE_TYPES
#endif
};

enum FootstepAudioTypes // Exposed to Python
{
	NO_FOOTSTEPAUDIO = -1,
};

enum FootstepAudioTags // Exposed to Python
{
	NO_FOOTSTEPAUDIO_TAG = -1,
};

enum ChatTargetTypes // Exposed to Python
{
	NO_CHATTARGET	= -1,
	CHATTARGET_ALL	= -2,
	CHATTARGET_TEAM = -3,
};

enum VoiceTargetTypes // Exposed to Python
{
	NO_VOICETARGET = -1,

	VOICETARGET_DIPLO,
	VOICETARGET_TEAM,
	VOICETARGET_ALL,

#ifdef _USRDLL
	NUM_VOICETARGETS
#endif
};

enum TeamTypes // Exposed to Python
{
	NO_TEAM = -1,
};

enum PlayerTypes // Exposed to Python
{
	NO_PLAYER = -1,
};

enum TraitTypes // Exposed to Python
{
	NO_TRAIT = -1,
};

enum OrderTypes // Exposed to Python
{
	NO_ORDER = -1,

	ORDER_TRAIN,
	ORDER_CONSTRUCT,
	ORDER_CREATE,
	ORDER_MAINTAIN,
	ORDER_LIST,

#ifdef _USRDLL
	NUM_ORDER_TYPES
#endif
};

enum TaskTypes // Exposed to Python
{
	NO_TASK = -1,

	TASK_RAZE,
	TASK_DISBAND,
	TASK_GIFT,
	TASK_SET_AUTOMATED_CITIZENS,
	TASK_SET_AUTOMATED_PRODUCTION,
	TASK_SET_EMPHASIZE,
	TASK_CHANGE_SPECIALIST,
	TASK_CHANGE_WORKING_PLOT,
	TASK_CLEAR_WORKING_OVERRIDE,
	TASK_HURRY,
	TASK_CONSCRIPT,
	TASK_CLEAR_ORDERS,
	TASK_RALLY_PLOT,
	TASK_CLEAR_RALLY_PLOT,
	TASK_LIBERATE,
	/************************************************************************************************/
	/* Afforess	                  Start		 03/26/10                                               */
	/*                                                                                              */
	/*                                                                                              */
	/************************************************************************************************/
	TASK_SACK_CITY,
	TASK_ENSLAVE_CITY,
	/************************************************************************************************/
	/* Afforess	                     END                                                            */
	/************************************************************************************************/
	TASK_EMPHASIZE_SPECIALIST,
	TASK_KEEP, // keep conquered city

#ifdef _USRDLL
	NUM_TASK_TYPES
#endif
};

enum BuildingClassTypes // Exposed to Python
{
	NO_BUILDINGCLASS = -1,
};

enum BuildingTypes // Exposed to Python
{
	NO_BUILDING = -1,
};

enum SpecialBuildingTypes // Exposed to Python
{
	NO_SPECIALBUILDING = -1,
};

enum ProjectTypes // Exposed to Python
{
	NO_PROJECT = -1,
};

enum AxisTypes
{
	AXIS_X,
	AXIS_Y,
	AXIS_Z,
	NUM_AXIS_TYPES
};

enum SpaceShipInfoTypes
{
	SPACE_SHIP_INFO_TYPE_NONE,
	SPACE_SHIP_INFO_TYPE_FILENAME,
	SPACE_SHIP_INFO_TYPE_ALPHA_CENTAURI,
	SPACE_SHIP_INFO_TYPE_LAUNCH,
	SPACE_SHIP_INFO_TYPE_LAUNCHED,
	SPACE_SHIP_INFO_TYPE_ZOOM_IN,
	SPACE_SHIP_INFO_TYPE_ZOOM_MOVE,
	SPACE_SHIP_INFO_TYPE_COMPONENT_OFF,
	SPACE_SHIP_INFO_TYPE_COMPONENT_PREVIEW,
	SPACE_SHIP_INFO_TYPE_COMPONENT_APPEAR,
	SPACE_SHIP_INFO_TYPE_COMPONENT_ON,
	SPACE_SHIP_INFO_TYPE_LIGHT_OFF,
	SPACE_SHIP_INFO_TYPE_GANTRY_SMOKE_ON,
	SPACE_SHIP_INFO_TYPE_IN_SPACE_SMOKE_ON,
	SPACE_SHIP_INFO_TYPE_IN_GAME_SMOKE_ON,
	NUM_SPACE_SHIP_INFO_TYPES
};

enum ProcessTypes // Exposed to Python
{
	NO_PROCESS = -1,
};

enum VoteTypes // Exposed to Python
{
	NO_VOTE = -1,
};

enum PlayerVoteTypes // Exposed to Python
{
	NO_PLAYER_VOTE_CHECKED = -6,
	PLAYER_VOTE_NEVER	   = -5,
	PLAYER_VOTE_ABSTAIN	   = -4,
	PLAYER_VOTE_NO		   = -3,
	PLAYER_VOTE_YES		   = -2,
	NO_PLAYER_VOTE		   = -1
};

enum InfoBarTypes // Exposed to Python
{
	INFOBAR_STORED,
	INFOBAR_RATE,
	INFOBAR_RATE_EXTRA,
	INFOBAR_EMPTY,

#ifdef _USRDLL
	NUM_INFOBAR_TYPES
#endif
};

enum HealthBarTypes // Exposed to Python
{
	HEALTHBAR_ALIVE_ATTACK,
	HEALTHBAR_ALIVE_DEFEND,
	HEALTHBAR_DEAD,

#ifdef _USRDLL
	NUM_HEALTHBAR_TYPES
#endif
};

enum ConceptTypes // Exposed to Python
{
	NO_CONCEPT = -1,
};

enum NewConceptTypes // Exposed to Python
{
	NO_NEW_CONCEPT = -1,
};

/************************************************************************************************/
/* DCM                                     04/19/09                                Johny Smith  */
/************************************************************************************************/
// Dale - DCM: Pedia Concepts START
enum DCMConceptTypes // Exposed to Python
{
	NO_DCM_CONCEPT = -1,
};
// Dale - DCM: Pedia Concepts END
/************************************************************************************************/
/* DCM                                     END                                                  */
/************************************************************************************************/

/************************************************************************************************/
/* Afforess                                     11/13/09                                        */
/************************************************************************************************/
enum ANDConceptTypes // Exposed to Python
{
	NO_AND_CONCEPT = -1,
};
/************************************************************************************************/
/* Afforess                                END                                                  */
/************************************************************************************************/
enum CalendarTypes // Exposed to Python
{
	NO_CALENDAR = -1,

	CALENDAR_DEFAULT,
	CALENDAR_BI_YEARLY,
	CALENDAR_YEARS,
	CALENDAR_TURNS,
	CALENDAR_SEASONS,
	CALENDAR_MONTHS,
	CALENDAR_WEEKS,
	CALENDAR_NO_SEASONS
};

enum SeasonTypes // Exposed to Python
{
	NO_SEASON = -1,
	SEASON_WINTER,
	SEASON_SPRING,
	SEASON_SUMMER,
	SEASON_AUTUMN
};

enum MonthTypes // Exposed to Python
{
	NO_MONTH = -1,
};

enum DenialTypes // Exposed to Python
{
	NO_DENIAL = -1,

	DENIAL_UNKNOWN,
	DENIAL_NEVER,
	DENIAL_TOO_MUCH,
	DENIAL_MYSTERY,
	DENIAL_JOKING,
	DENIAL_ANGER_CIVIC,
	DENIAL_FAVORITE_CIVIC,
	DENIAL_MINORITY_RELIGION,
	DENIAL_CONTACT_THEM,
	DENIAL_VICTORY,
	DENIAL_ATTITUDE,
	DENIAL_ATTITUDE_THEM,
	DENIAL_TECH_WHORE,
	DENIAL_TECH_MONOPOLY,
	DENIAL_POWER_US,
	DENIAL_POWER_YOU,
	DENIAL_POWER_THEM,
	DENIAL_TOO_MANY_WARS,
	DENIAL_NO_GAIN,
	DENIAL_NOT_ALLIED,
	DENIAL_RECENT_CANCEL,
	DENIAL_WORST_ENEMY,
	DENIAL_POWER_YOUR_ENEMIES,
	DENIAL_TOO_FAR,
	DENIAL_VASSAL,
	DENIAL_WAR_NOT_POSSIBLE_US,
	DENIAL_WAR_NOT_POSSIBLE_YOU,
	DENIAL_PEACE_NOT_POSSIBLE_US,
	DENIAL_PEACE_NOT_POSSIBLE_YOU
};

enum DomainTypes // Exposed to Python
{
	NO_DOMAIN = -1,

	DOMAIN_SEA,
	DOMAIN_AIR,
	DOMAIN_LAND,
	DOMAIN_IMMOBILE,

#ifdef _USRDLL
	NUM_DOMAIN_TYPES
#endif
};

enum UnitClassTypes // Exposed to Python
{
	NO_UNITCLASS = -1,
};

enum UnitTypes // Exposed to Python
{
	NO_UNIT = -1,
};

enum SpawnTypes // Exposed to Python
{
	NO_SPAWN = -1,
};

enum SpecialUnitTypes // Exposed to Python
{
	NO_SPECIALUNIT = -1,
};

enum UnitCombatTypes // Exposed to Python
{
	NO_UNITCOMBAT = -1,
};
//TB Promotion Line Mod begin
enum PromotionLineTypes
{
	NO_PROMOTIONLINE = -1,
};

enum MapCategoryTypes
{
	NO_MAPCATEGORY = -1,
};

enum IdeaClassTypes
{
	NO_IDEACLASS = -1,
};

enum IdeaTypes
{
	NO_IDEA = -1,
};

enum TraitOptionEditsTypes
{
	NO_TRAITOPTIONEDIT = -1,
};
//	Koshling - UNITAIs are NOT registered based on the XML any more, but entirely done in code
//	This means that UNITAIs can be freely added provided you update here and also in
//	cvInternalGlobals::registerUnitAIs().  The order of the enum no longer matters and the XML
//	is not read, so serves at most a documentary function
enum UnitAITypes // Exposed to Python
{
	NO_UNITAI = -1,

	UNITAI_UNKNOWN,
	UNITAI_ANIMAL,
	UNITAI_SETTLE,
	UNITAI_WORKER,
	UNITAI_ATTACK,
	UNITAI_ATTACK_CITY,
	UNITAI_COLLATERAL,
	UNITAI_PILLAGE,
	UNITAI_RESERVE,
	UNITAI_COUNTER,
	UNITAI_CITY_DEFENSE,
	UNITAI_CITY_COUNTER,
	UNITAI_CITY_SPECIAL,
	UNITAI_EXPLORE,
	UNITAI_MISSIONARY,
	UNITAI_PROPHET,
	UNITAI_ARTIST,
	UNITAI_SCIENTIST,
	UNITAI_GENERAL,
	UNITAI_MERCHANT,
	UNITAI_ENGINEER,
	UNITAI_SPY,
	UNITAI_ICBM,
	UNITAI_WORKER_SEA,
	UNITAI_ATTACK_SEA,
	UNITAI_RESERVE_SEA,
	UNITAI_ESCORT_SEA,
	UNITAI_EXPLORE_SEA,
	UNITAI_ASSAULT_SEA,
	UNITAI_SETTLER_SEA,
	UNITAI_MISSIONARY_SEA,
	UNITAI_SPY_SEA,
	UNITAI_CARRIER_SEA,
	UNITAI_MISSILE_CARRIER_SEA,
	UNITAI_PIRATE_SEA,
	UNITAI_ATTACK_AIR,
	UNITAI_DEFENSE_AIR,
	UNITAI_CARRIER_AIR,
	UNITAI_MISSILE_AIR,
	UNITAI_PARADROP,
	UNITAI_ATTACK_CITY_LEMMING,
	UNITAI_PILLAGE_COUNTER,
	UNITAI_SUBDUED_ANIMAL,
	UNITAI_HUNTER,
	UNITAI_GREAT_HUNTER,
	UNITAI_GREAT_ADMIRAL,
	UNITAI_PROPERTY_CONTROL,
	UNITAI_HEALER,
	UNITAI_PROPERTY_CONTROL_SEA,
	UNITAI_HEALER_SEA,
	UNITAI_HUNTER_ESCORT,
	UNITAI_BARB_CRIMINAL,
	UNITAI_INVESTIGATOR,
	UNITAI_INFILTRATOR,
	UNITAI_SEE_INVISIBLE,
	UNITAI_SEE_INVISIBLE_SEA,
	UNITAI_ESCORT,

	NUM_UNITAI_TYPES
};

#define IS_NAVAL_AITYPE(eAIType)                \
	((eAIType) == UNITAI_WORKER_SEA ||          \
	 (eAIType) == UNITAI_ATTACK_SEA ||          \
	 (eAIType) == UNITAI_RESERVE_SEA ||         \
	 (eAIType) == UNITAI_ESCORT_SEA ||          \
	 (eAIType) == UNITAI_EXPLORE_SEA ||         \
	 (eAIType) == UNITAI_ASSAULT_SEA ||         \
	 (eAIType) == UNITAI_SETTLER_SEA ||         \
	 (eAIType) == UNITAI_MISSIONARY_SEA ||      \
	 (eAIType) == UNITAI_SPY_SEA ||             \
	 (eAIType) == UNITAI_CARRIER_SEA ||         \
	 (eAIType) == UNITAI_MISSILE_CARRIER_SEA || \
	 (eAIType) == UNITAI_PIRATE_SEA ||          \
	 (eAIType) == UNITAI_SEE_INVISIBLE_SEA)

#define IS_AIR_AITYPE(eAIType)          \
	((eAIType) == UNITAI_ATTACK_AIR ||  \
	 (eAIType) == UNITAI_DEFENSE_AIR || \
	 (eAIType) == UNITAI_CARRIER_AIR || \
	 (eAIType) == UNITAI_MISSILE_AIR)

enum AIScaleTypes
{
	AISCALE_NONE = -1,
	AISCALE_CITY,
	AISCALE_AREA,
	AISCALE_PLAYER,
	AISCALE_TEAM
};


enum InvisibleTypes // Exposed to Python
{
	NO_INVISIBLE = -1,
};

enum VoteSourceTypes // Exposed to Python
{
	NO_VOTESOURCE = -1,
};

enum ProbabilityTypes // Exposed to Python
{
	NO_PROBABILITY = -1,

	PROBABILITY_LOW,
	PROBABILITY_REAL,
	PROBABILITY_HIGH,
};

enum ActivityTypes // Exposed to Python
{
	NO_ACTIVITY = -1,

	ACTIVITY_AWAKE,
	ACTIVITY_HOLD,
	ACTIVITY_SLEEP,
	ACTIVITY_HEAL,
	ACTIVITY_SENTRY,
	ACTIVITY_INTERCEPT,
	ACTIVITY_MISSION,
	ACTIVITY_PATROL,
	ACTIVITY_PLUNDER,
// BUG - Sentry Actions - start
#ifdef _MOD_SENTRY
	ACTIVITY_SENTRY_WHILE_HEAL,
	ACTIVITY_SENTRY_NAVAL_UNITS,
	ACTIVITY_SENTRY_LAND_UNITS,
#endif
// BUG - Sentry Actions - end

#ifdef _USRDLL
	NUM_ACTIVITY_TYPES
#endif
};

enum AutomateTypes // Exposed to Python
{
	NO_AUTOMATE = -1,

	AUTOMATE_BUILD,
	AUTOMATE_NETWORK,
	AUTOMATE_CITY,
	AUTOMATE_EXPLORE,
	AUTOMATE_RELIGION,
	/************************************************************************************************/
	/* Afforess	                  Start		 09/16/10                                               */
	/*                                                                                              */
	/* Advanced Automations                                                                         */
	/************************************************************************************************/
	AUTOMATE_PILLAGE,
	AUTOMATE_HUNT,
	AUTOMATE_CITY_DEFENSE,
	AUTOMATE_BORDER_PATROL,
	AUTOMATE_HURRY,
	AUTOMATE_PIRATE,
	AUTOMATE_AIRSTRIKE,
	AUTOMATE_AIRBOMB,
	AUTOMATE_AIR_RECON,
	AUTOMATE_UPGRADING,
	AUTOMATE_CANCEL_UPGRADING,
	AUTOMATE_PROMOTIONS,
	AUTOMATE_CANCEL_PROMOTIONS,
	AUTOMATE_SHADOW,
/************************************************************************************************/
/* Afforess	                     END                                                            */
/************************************************************************************************/
#ifdef _USRDLL
	NUM_AUTOMATE_TYPES
#endif
};


// Dale - RB: Field bombard new mission at end of list
// Dale - AB: Bombing new missions at end of list
// Dale - FE: Fighters new missions at end of list
// any additions need to be reflected in GlobalTypes.xml
enum MissionTypes // Exposed to Python
{
	NO_MISSION = -1,

	MISSION_MOVE_TO,
	MISSION_ROUTE_TO,
	MISSION_MOVE_TO_UNIT,
	MISSION_SKIP,
	MISSION_SLEEP,
	MISSION_FORTIFY,
	MISSION_PLUNDER,
	MISSION_AIRPATROL,
	MISSION_SEAPATROL,
	MISSION_HEAL,
	MISSION_SENTRY,
	MISSION_AIRLIFT,
	MISSION_NUKE,
	MISSION_RECON,
	MISSION_PARADROP,
	MISSION_AIRBOMB,
	MISSION_RANGE_ATTACK,
	MISSION_BOMBARD,
	MISSION_PILLAGE,
	MISSION_SABOTAGE,
	MISSION_DESTROY,
	MISSION_STEAL_PLANS,
	MISSION_FOUND,
	MISSION_SPREAD,
	MISSION_SPREAD_CORPORATION,
	MISSION_JOIN,
	MISSION_CONSTRUCT,
	MISSION_DISCOVER,
	MISSION_HURRY,
	MISSION_TRADE,
	MISSION_GREAT_WORK,
	MISSION_INFILTRATE,
	MISSION_GOLDEN_AGE,
	MISSION_BUILD,
	MISSION_LEAD,
	MISSION_ESPIONAGE,
	MISSION_DIE_ANIMATION,

	MISSION_BEGIN_COMBAT,
	MISSION_END_COMBAT,
	MISSION_AIRSTRIKE,
	MISSION_SURRENDER,
	MISSION_CAPTURED,
	MISSION_IDLE,
	MISSION_DIE,
	MISSION_DAMAGE,
	MISSION_MULTI_SELECT,
	MISSION_MULTI_DESELECT,
	/************************************************************************************************/
	/* DCM                                     04/19/09                                Johny Smith  */
	/************************************************************************************************/
	MISSION_AIRBOMB1,
	MISSION_AIRBOMB2,
	MISSION_AIRBOMB3,
	MISSION_AIRBOMB4,
	MISSION_AIRBOMB5,
	MISSION_RBOMBARD,
	MISSION_ABOMBARD,
	MISSION_FENGAGE,
/************************************************************************************************/
/* DCM                                     END                                                  */
/************************************************************************************************/
//TSHEEP Assassin Mission
//MISSION_ASSASSIN,
//TSHEEP End

// BUG - Sentry Actions - start
#ifdef _MOD_SENTRY
	MISSION_MOVE_TO_SENTRY,
	MISSION_SENTRY_WHILE_HEAL,
	MISSION_SENTRY_NAVAL_UNITS,
	MISSION_SENTRY_LAND_UNITS,
#endif
	// BUG - Sentry Actions - end

	/************************************************************************************************/
	/* Afforess                                     6/05/10                                         */
	/*                                                                                              */
	/*                                                                                              */
	/************************************************************************************************/
	MISSION_INQUISITION,
	MISSION_CLAIM_TERRITORY,
	MISSION_HURRY_FOOD,
	MISSION_ESPIONAGE_SLEEP,
	MISSION_GREAT_COMMANDER,
	MISSION_SHADOW,
	MISSION_WAIT_FOR_TECH,
	/************************************************************************************************/
	/* Afforess	                         END                                                        */
	/************************************************************************************************/

	//ls612: City Goto in Viewports
	MISSION_GOTO,
	// < M.A.D. Nukes Start >
	MISSION_PRETARGET_NUKE,
	// < M.A.D. Nukes End   >
	//TB Combat Mod and Mission fix begin
	MISSION_BUTCHER,
	MISSION_DIPLOMAT_ASSIMULATE_IND_PEOPLE,
	MISSION_DIPLOMAT_PRAISE_IND_PEOPLE,
	MISSION_DIPLOMAT_SPEAK_TO_BARBARIAN_LEADERS,
	MISSION_DIPLOMAT_SPREAD_RELIGION,
	MISSION_LAWYER_REMOVE_CORPORATIONS,
	MISSION_JOIN_CITY_POPULATION,
	MISSION_CURE,
	MISSION_ESTABLISH,
	MISSION_ESCAPE,
	MISSION_BUILDUP,
	MISSION_AUTO_BUILDUP,
	MISSION_HEAL_BUILDUP,
	MISSION_AMBUSH,
	MISSION_ASSASSINATE,
	MISSION_ENTERTAIN_CITY,
	MISSION_HURRY_PRODUCTION_CARAVAN,
	MISSION_CAPTIVE_UPGRADE_TO_SETTLER,
	MISSION_CAPTIVE_UPGRADE_TO_GATHERER,
	MISSION_CAPTIVE_UPGRADE_TO_WORKER,
	MISSION_CAPTIVE_UPGRADE_TO_IMMIGRANT,
	MISSION_CAPTIVE_UPGRADE_TO_STONE_THROWER,
	MISSION_CAPTIVE_UPGRADE_TO_ARCHER,
	MISSION_CAPTIVE_UPGRADE_TO_AXEMAN,
	MISSION_CAPTIVE_UPGRADE_TO_SPEARMAN,
	MISSION_CAPTIVE_UPGRADE_TO_NEANDERTHAL_WARRIOR,
	MISSION_SELL_CAPTIVE,
	MISSION_FREE_CAPTIVE,
	MISSION_JOIN_CITY_FREED_SLAVE,
	MISSION_RECORD_TALE,
	MISSION_RECORD_TALE_ORAL,
	MISSION_RECORD_TALE_WRITTEN,
	MISSION_ANIMAL_COMBAT,
	MISSION_ANIMAL_STUDY,
	MISSION_ANIMAL_SACRIFICE,
	MISSION_BUILD_DOMESTICATED_HERD,
	MISSION_CAPTIVE_UPGRADE_TO_NEANDERTHAL_GATHERER,
	MISSION_CAPTIVE_UPGRADE_TO_NEANDERTHAL_TRACKER,
//TB Combat Mod and Mission fix end
#ifdef FIXED_MISSION_NUMBER
	NUM_MISSION_TYPES
#endif
};

enum MissionAITypes // Exposed to Python
{
	NO_MISSIONAI = -1,

	MISSIONAI_SHADOW,
	MISSIONAI_GROUP,
	MISSIONAI_LOAD_ASSAULT,
	MISSIONAI_LOAD_SETTLER,
	MISSIONAI_LOAD_SPECIAL,
	MISSIONAI_GUARD_CITY,
	MISSIONAI_GUARD_BONUS,
	MISSIONAI_GUARD_TRADE_NET,
	MISSIONAI_GUARD_SPY,
	MISSIONAI_ATTACK_SPY,
	MISSIONAI_SPREAD,
	MISSIONAI_SPREAD_CORPORATION,
	MISSIONAI_CONSTRUCT,
	MISSIONAI_HURRY,
	MISSIONAI_GREAT_WORK,
	MISSIONAI_EXPLORE,
	MISSIONAI_BLOCKADE,
	MISSIONAI_PILLAGE,
	MISSIONAI_FOUND,
	MISSIONAI_BUILD,
	MISSIONAI_ASSAULT,
	MISSIONAI_CARRIER,
	MISSIONAI_PICKUP

	/************************************************************************************************/
	/* Afforess                                     12/7/09                                         */
	/*                                                                                              */
	/*                                                                                              */
	/************************************************************************************************/
	,
	MISSIONAI_INQUISITION,
	MISSIONAI_CLAIM_TERRITORY,
	MISSIONAI_HURRY_FOOD
	/************************************************************************************************/
	/* Afforess	                         END                                                        */
	/************************************************************************************************/
	,
	MISSIONAI_CONTRACT,
	MISSIONAI_CONTRACT_UNIT,
	MISSIONAI_DELIBERATE_KILL,
	MISSIONAI_REGROUP,
	MISSIONAI_HEAL_SUPPORT,
	MISSIONAI_PROPERTY_CONTROL_RESPONSE,
	MISSIONAI_PROPERTY_CONTROL_MAINTAIN,
	MISSIONAI_INVESTIGATOR_RESPONSE,
	MISSIONAI_INVESTIGATOR_MAINTAIN,
	MISSIONAI_INFILTRATOR_MAINTAIN,
	MISSIONAI_SEE_INVISIBLE_MAINTAIN,
	MISSIONAI_SEE_INVISIBLE_SEA_MAINTAIN,
	MISSIONAI_WAIT_FOR_ESCORT,
	MISSIONAI_WAIT_FOR_SEE_INVISIBLE
};

// any additions need to be reflected in GlobalTypes.xml
enum CommandTypes // Exposed to Python
{
	NO_COMMAND = -1,

	COMMAND_PROMOTION,
	COMMAND_UPGRADE,
	COMMAND_AUTOMATE,
	COMMAND_WAKE,
	COMMAND_CANCEL,
	COMMAND_CANCEL_ALL,
	COMMAND_STOP_AUTOMATION,
	COMMAND_DELETE,
	COMMAND_GIFT,
	COMMAND_LOAD,
	COMMAND_LOAD_UNIT,
	COMMAND_UNLOAD,
	COMMAND_UNLOAD_ALL,
	COMMAND_HOTKEY,
	COMMAND_REEQUIP,
	COMMAND_MERGE,
	COMMAND_SPLIT,
	COMMAND_STATUS,
	COMMAND_ARREST,
	COMMAND_AMBUSH,

#ifdef _USRDLL
	NUM_COMMAND_TYPES
#endif
};

enum ControlTypes // Exposed to Python
{
	NO_CONTROL = -1,

	CONTROL_CENTERONSELECTION,
	CONTROL_SELECTYUNITTYPE,
	CONTROL_SELECTYUNITALL,
	CONTROL_SELECTCITY,
	CONTROL_SELECTCAPITAL,
	CONTROL_NEXTCITY,
	CONTROL_PREVCITY,
	CONTROL_NEXTUNIT,
	CONTROL_PREVUNIT,
	CONTROL_CYCLEUNIT,
	CONTROL_CYCLEUNIT_ALT,
	CONTROL_CYCLEWORKER,
	CONTROL_LASTUNIT,
	CONTROL_ENDTURN,
	CONTROL_ENDTURN_ALT,
	CONTROL_FORCEENDTURN,
	CONTROL_AUTOMOVES,
	CONTROL_PING,
	CONTROL_SIGN,
	CONTROL_GRID,
	CONTROL_BARE_MAP,
	CONTROL_YIELDS,
	CONTROL_RESOURCE_ALL,
	CONTROL_UNIT_ICONS,
	CONTROL_GLOBELAYER,
	CONTROL_SCORES,
	CONTROL_LOAD_GAME,
	CONTROL_OPTIONS_SCREEN,
	CONTROL_RETIRE,
	CONTROL_SAVE_GROUP,
	CONTROL_SAVE_NORMAL,
	CONTROL_QUICK_SAVE,
	CONTROL_QUICK_LOAD,
	CONTROL_ORTHO_CAMERA,
	CONTROL_CYCLE_CAMERA_FLYING_MODES,
	CONTROL_ISOMETRIC_CAMERA_LEFT,
	CONTROL_ISOMETRIC_CAMERA_RIGHT,
	CONTROL_FLYING_CAMERA,
	CONTROL_MOUSE_FLYING_CAMERA,
	CONTROL_TOP_DOWN_CAMERA,
	CONTROL_CIVILOPEDIA,
	CONTROL_RELIGION_SCREEN,
	CONTROL_CORPORATION_SCREEN,
	CONTROL_CIVICS_SCREEN,
	CONTROL_FOREIGN_SCREEN,
	CONTROL_FINANCIAL_SCREEN,
	CONTROL_MILITARY_SCREEN,
	CONTROL_TECH_CHOOSER,
	CONTROL_TURN_LOG,
	CONTROL_CHAT_ALL,
	CONTROL_CHAT_TEAM,
	CONTROL_DOMESTIC_SCREEN,
	CONTROL_VICTORY_SCREEN,
	CONTROL_INFO,
	CONTROL_GLOBE_VIEW,
	CONTROL_DETAILS,
	CONTROL_ADMIN_DETAILS,
	CONTROL_HALL_OF_FAME,
	CONTROL_WORLD_BUILDER,
	CONTROL_DIPLOMACY,
	CONTROL_SELECT_HEALTHY,
	CONTROL_ESPIONAGE_SCREEN,
	CONTROL_FREE_COLONY,

#ifdef _USRDLL
	NUM_CONTROL_TYPES
#endif
};

enum PromotionTypes // Exposed to Python
{
	NO_PROMOTION = -1,
};

enum TechTypes // Exposed to Python
{
	NO_TECH = -1,
};

enum SpecialistTypes // Exposed to Python
{
	NO_SPECIALIST = -1,
};

enum ReligionTypes // Exposed to Python
{
	NO_RELIGION = -1,
};

enum CorporationTypes // Exposed to Python
{
	NO_CORPORATION = -1,
};

enum HurryTypes // Exposed to Python
{
	NO_HURRY = -1,
};

enum UpkeepTypes // Exposed to Python
{
	NO_UPKEEP = -1,
};

enum CultureLevelTypes // Exposed to Python
{
	NO_CULTURELEVEL = -1,
};

enum CivicOptionTypes // Exposed to Python
{
	NO_CIVICOPTION = -1,
};

enum CivicTypes // Exposed to Python
{
	NO_CIVIC = -1,
};

enum WarPlanTypes // Exposed to Python
{
	NO_WARPLAN = -1,

	WARPLAN_ATTACKED_RECENT,
	WARPLAN_ATTACKED,
	WARPLAN_PREPARING_LIMITED,
	WARPLAN_PREPARING_TOTAL,
	WARPLAN_LIMITED,
	WARPLAN_TOTAL,
	WARPLAN_DOGPILE
};

enum AreaAITypes // Exposed to Python
{
	NO_AREAAI = -1,

	AREAAI_OFFENSIVE,
	AREAAI_DEFENSIVE,
	AREAAI_MASSING,
	AREAAI_ASSAULT,
	AREAAI_ASSAULT_MASSING,
	AREAAI_ASSAULT_ASSIST,
	AREAAI_NEUTRAL
};

enum EndTurnButtonStates // Exposed to Python
{
	END_TURN_GO,
	END_TURN_OVER_HIGHLIGHT,
	END_TURN_OVER_DARK,

#ifdef _USRDLL
	NUM_END_TURN_STATES
#endif
};

enum FogOfWarModeTypes // Exposed to Python
{
	FOGOFWARMODE_OFF,
	FOGOFWARMODE_UNEXPLORED,
	FOGOFWARMODE_NOVIS,

#ifdef _USRDLL
	NUM_FOGOFWARMODE_TYPES
#endif
};

enum FogTypes
{
	FOG_TYPE_NONE,
	FOG_TYPE_PARALLEL,
	FOG_TYPE_PROJECTED,
	NUM_FOG_TYPES
};

enum CameraOverlayTypes
{
	CAMERA_OVERLAY_DECAL,
	CAMERA_OVERLAY_ADDITIVE,
	NUM_CAMERA_OVERLAY_TYPES
};

enum FOWUpdateTypes
{
	FOW_UPDATE_REGULAR,
	FOW_UPDATE_IMMEDIATE,
	FOW_UPDATE_UNDO_IMMEDIATE,
	FOW_UPDATE_FORCE_CHANGE,
	NUM_FOW_UPDATE_TYPES
};

// AnimationTypes is depreciated, and will be eventually removed.
// BONUSANIMATION_* and IMPROVEMENTANIMATION_* are still used, and will be left.

enum AnimationTypes // Exposed to Python
{
	NONE_ANIMATION = -1, // NO_ANIMATION is used by FirePlace

	BONUSANIMATION_UNIMPROVED = 1,
	BONUSANIMATION_NOT_WORKED,
	BONUSANIMATION_WORKED,

	IMPROVEMENTANIMATION_OFF = 2,
	IMPROVEMENTANIMATION_ON,
	IMPROVEMENTANIMATION_OFF_EXTRA,
	IMPROVEMENTANIMATION_ON_EXTRA_1,
	IMPROVEMENTANIMATION_ON_EXTRA_2,
	IMPROVEMENTANIMATION_ON_EXTRA_3,
	IMPROVEMENTANIMATION_ON_EXTRA_4,
};

enum EntityEventTypes // Exposed to Python
{
	ENTITY_EVENT_NONE = -1, //!< Invalid event
};

enum AnimationPathTypes // Exposed to Python
{
	ANIMATIONPATH_NONE = -1,

	// Default animation paths
	ANIMATIONPATH_IDLE,
	ANIMATIONPATH_MOVE,
	ANIMATIONPATH_DAMAGE, //!< Updates the damage state for the unit

	// Combat related animation paths
	ANIMATIONPATH_RANDOMIZE_ANIMATION_SET,
	ANIMATIONPATH_NUKE_STRIKE,
	ANIMATIONPATH_MELEE_STRIKE,
	ANIMATIONPATH_MELEE_HURT,
	ANIMATIONPATH_MELEE_DIE,
	ANIMATIONPATH_MELEE_FORTIFIED,
	ANIMATIONPATH_MELEE_DIE_FADE, //!< Used only in combat. The colateral damage die should have a fade integrated.
	ANIMATIONPATH_MELEE_FLEE, //!< Used only by settler children, so they don't die in combat

	// Ranged combat related animation paths
	ANIMATIONPATH_RANGED_STRIKE,
	ANIMATIONPATH_RANGED_DIE,
	ANIMATIONPATH_RANGED_FORTIFIED,
	ANIMATIONPATH_RANGED_RUNHIT,
	ANIMATIONPATH_RANGED_RUNDIE,
	ANIMATIONPATH_RANGED_DIE_FADE, //!< Used only in combat. The colateral damage die should have a fade integrated.
	ANIMATIONPATH_LEADER_COMMAND,

	// Air Units animation paths
	ANIMATIONPATH_AIRFADEIN,
	ANIMATIONPATH_AIRFADEOUT,
	ANIMATIONPATH_AIRSTRIKE,
	ANIMATIONPATH_AIRBOMB,

	//mission related animation paths
	ANIMATIONPATH_HEAL,
	ANIMATIONPATH_SLEEP,
	ANIMATIONPATH_FORTIFY,
	ANIMATIONPATH_MELEE_FORTIFY,
	ANIMATIONPATH_PILLAGE,
	ANIMATIONPATH_SENTRY,
	ANIMATIONPATH_FOUND,
	ANIMATIONPATH_IRRIGATE,
	ANIMATIONPATH_BUILD,
	ANIMATIONPATH_MINE,
	ANIMATIONPATH_CHOP,
	ANIMATIONPATH_SHOVEL,
	ANIMATIONPATH_RAILROAD,
	ANIMATIONPATH_SABOTAGE,
	ANIMATIONPATH_DESTROY,
	ANIMATIONPATH_STEAL_PLANS,
	ANIMATIONPATH_GREAT_EVENT,
	ANIMATIONPATH_SURRENDER,
	ANIMATIONPATH_AIRPATROL,
};

//!<  Enumeration for the animation category types.
enum AnimationCategoryTypes // Exposed to Python
{
	ANIMCAT_NONE = -1,
};

//!< Animation category operators.
enum AnimationOperatorTypes
{
	ANIMOP_FIRST	= 1001,
	ANIMOP_RAND_FPR = ANIMOP_FIRST, //!< Sets the FPR to a random number [0..1].
	ANIMOP_SET_FPR, //!< Sets the FPR to the input value
	ANIMOP_SET_BR, //!< Sets the BR to true the input value is non-zero
	ANIMOP_ADD_FPR, //!< Adds the input value to the FPR register (input can be negative)
	ANIMOP_TEST_GT, //!< Sets/resets the BR if the FPR is greater than the input
	ANIMOP_TEST_LT, //!< Sets/resets the BR if the FPR is less than the input
	ANIMOP_LOAD_CAS, //!< Sets the FPR to the CAS/32.
	ANIMOP_SET_ANIMATION_SET, //!< Modifies the current animation set, by setting it to ((FPR*32)%32)
	ANIMOP_SKIP_IF, //!< Skips the given number of instructions if the BR is true
	ANIMOP_CAS_INCR, //!< Increments the CAS (and resets to zero if it is the maximum)
	ANIMOP_IS_RANGED, //!< Sets the BR to true if the unit is "ranged", and to false otherwise
	ANIMOP_DEACTIVATE_DAMAGE_LAYERS, //!< Deactivates all animations that are layered
	ANIMOP_SETCAS_DAMAGE, //!< Set the current animation set to the damage level of the unit (damage/art define max)
	ANIMOP_LAST
};

enum CursorTypes // Exposed to Python
{
	NO_CURSOR = -1,
};

enum FunctionTypes
{
	FUNC_NOINTERP = 0, // NiAnimationKey::NOINTERP,
	FUNC_LINKEY, //	= NiAnimationKey::LINKEY,
	FUNC_BEZKEY, //	= NiAnimationKey::BEZKEY,
	FUNC_TCBKEY, // = NiAnimationKey::TCBKEY,
	FUNC_EULERKEY, // = NiAnimationKey::EULERKEY,
	FUNC_STEPKEY, // = NiAnimationKey::STEPKEY,

#ifdef _USRDLL
	NUM_FUNC_TYPES // = NiAnimationKey::NUMKEYTYPES
#endif
};

enum TradeableItems // Exposed to Python
{
	TRADE_ITEM_NONE = -1,

	TRADE_GOLD,
	TRADE_GOLD_PER_TURN,
	TRADE_MAPS,
	TRADE_VASSAL,
	TRADE_SURRENDER,
	TRADE_OPEN_BORDERS,
	/************************************************************************************************/
	/* Afforess	                  Start		 06/26/10                                               */
	/*                                                                                              */
	/* Advanced Diplomacy                                                                           */
	/************************************************************************************************/
	TRADE_RITE_OF_PASSAGE,
	TRADE_FREE_TRADE_ZONE,
	/************************************************************************************************/
	/* Afforess	                     END                                                            */
	/************************************************************************************************/
	TRADE_DEFENSIVE_PACT,
	TRADE_PERMANENT_ALLIANCE,
	TRADE_PEACE_TREATY,

#ifdef _USRDLL
	NUM_BASIC_ITEMS,

	TRADE_TECHNOLOGIES = NUM_BASIC_ITEMS,
#else
	TRADE_TECHNOLOGIES,
#endif

	TRADE_RESOURCES,
	TRADE_CITIES,
	TRADE_PEACE,
	TRADE_WAR,
	TRADE_EMBARGO,
	TRADE_CIVIC,
	TRADE_RELIGION,
	/************************************************************************************************/
	/* Afforess	                  Start		 06/16/10                                               */
	/*                                                                                              */
	/* Advanced Diplomacy                                                                           */
	/************************************************************************************************/
	TRADE_EMBASSY,
	TRADE_WORKER,
	TRADE_MILITARY_UNIT,
	TRADE_CONTACT,
	TRADE_CORPORATION,
	TRADE_SECRETARY_GENERAL_VOTE,
	TRADE_PLEDGE_VOTE,
/************************************************************************************************/
/* Afforess	                     END                                                            */
/************************************************************************************************/
#ifdef _USRDLL
	NUM_TRADEABLE_HEADINGS,

	NUM_TRADEABLE_ITEMS = NUM_TRADEABLE_HEADINGS,
#endif
};

enum DiploEventTypes // Exposed to Python
{
	NO_DIPLOEVENT = -1,

	DIPLOEVENT_CONTACT,
	DIPLOEVENT_AI_CONTACT,
	DIPLOEVENT_FAILED_CONTACT,
	DIPLOEVENT_GIVE_HELP,
	DIPLOEVENT_REFUSED_HELP,
	DIPLOEVENT_ACCEPT_DEMAND,
	DIPLOEVENT_REJECTED_DEMAND,
	DIPLOEVENT_DEMAND_WAR,
	DIPLOEVENT_CONVERT,
	DIPLOEVENT_NO_CONVERT,
	DIPLOEVENT_REVOLUTION,
	DIPLOEVENT_NO_REVOLUTION,
	DIPLOEVENT_JOIN_WAR,
	DIPLOEVENT_NO_JOIN_WAR,
	DIPLOEVENT_STOP_TRADING,
	DIPLOEVENT_NO_STOP_TRADING,
	DIPLOEVENT_ASK_HELP,
	DIPLOEVENT_MADE_DEMAND,
	DIPLOEVENT_RESEARCH_TECH,
	DIPLOEVENT_TARGET_CITY,
	DIPLOEVENT_MADE_DEMAND_VASSAL,
	/************************************************************************************************/
	/* Afforess                                     12/7/09                                         */
	/*                                                                                              */
	/*                                                                                              */
	/************************************************************************************************/
	DIPLOEVENT_MAKE_PEACE_WITH,
	DIPLOEVENT_NO_MAKE_PEACE_WITH,
	/************************************************************************************************/
	/* Afforess	                         END                                                        */
	/************************************************************************************************/
	// RevolutionDCM start - new diplomacy option
	DIPLOEVENT_DO_NOT_BOTHER,
	DIPLOEVENT_RESUME_BOTHER,
// RevolutionDCM end

#ifdef _USRDLL
	NUM_DIPLOEVENT_TYPES
#endif
};

enum DiploCommentTypes // Exposed to Python
{
	NO_DIPLOCOMMENT = -1
};

enum NetContactTypes // Exposed to Python
{
	NO_NETCONTACT = -1,
	NETCONTACT_INITIAL,
	NETCONTACT_RESPONSE,
	NETCONTACT_ESTABLISHED,
	NETCONTACT_BUSY,

#ifdef _USRDLL
	NUM_NETCONTACT_TYPES
#endif
};

enum ContactTypes // Exposed to Python
{
	CONTACT_RELIGION_PRESSURE,
	CONTACT_CIVIC_PRESSURE,
	CONTACT_JOIN_WAR,
	CONTACT_STOP_TRADING,
	CONTACT_GIVE_HELP,
	CONTACT_ASK_FOR_HELP,
	CONTACT_DEMAND_TRIBUTE,
	CONTACT_OPEN_BORDERS,
	CONTACT_DEFENSIVE_PACT,
	CONTACT_PERMANENT_ALLIANCE,
	CONTACT_PEACE_TREATY,
	CONTACT_TRADE_TECH,
	CONTACT_TRADE_BONUS,
	CONTACT_TRADE_MAP,
	/************************************************************************************************/
	/* Afforess                                     12/7/09                                         */
	/*                                                                                              */
	/*                                                                                              */
	/************************************************************************************************/
	CONTACT_PEACE_PRESSURE,
	CONTACT_EMBASSY,
	CONTACT_TRADE_STOP_TRADING,
	CONTACT_TRADE_JOIN_WAR,
	CONTACT_SECRETARY_GENERAL_VOTE,
	CONTACT_TRADE_MILITARY_UNITS,
	CONTACT_TRADE_WORKERS,
	CONTACT_TRADE_CONTACTS,
	CONTACT_TRADE_CORPORATION,
	CONTACT_TRADE_BUY_WAR,
	/************************************************************************************************/
	/* Afforess	                         END                                                        */
	/************************************************************************************************/

	NUM_CONTACT_TYPES
};

enum MemoryTypes // Exposed to Python
{
	MEMORY_DECLARED_WAR,
	MEMORY_DECLARED_WAR_ON_FRIEND,
	MEMORY_HIRED_WAR_ALLY,
	MEMORY_NUKED_US,
	MEMORY_NUKED_FRIEND,
	MEMORY_RAZED_CITY,
	MEMORY_RAZED_HOLY_CITY,
	MEMORY_SPY_CAUGHT,
	MEMORY_GIVE_HELP,
	MEMORY_REFUSED_HELP,
	MEMORY_ACCEPT_DEMAND,
	MEMORY_REJECTED_DEMAND,
	MEMORY_ACCEPTED_RELIGION,
	MEMORY_DENIED_RELIGION,
	MEMORY_ACCEPTED_CIVIC,
	MEMORY_DENIED_CIVIC,
	MEMORY_ACCEPTED_JOIN_WAR,
	MEMORY_DENIED_JOIN_WAR,
	MEMORY_ACCEPTED_STOP_TRADING,
	MEMORY_DENIED_STOP_TRADING,
	MEMORY_STOPPED_TRADING,
	MEMORY_STOPPED_TRADING_RECENT,
	MEMORY_HIRED_TRADE_EMBARGO,
	MEMORY_MADE_DEMAND,
	MEMORY_MADE_DEMAND_RECENT,
	MEMORY_CANCELLED_OPEN_BORDERS,
	MEMORY_TRADED_TECH_TO_US,
	MEMORY_RECEIVED_TECH_FROM_ANY,
	MEMORY_VOTED_AGAINST_US,
	MEMORY_VOTED_FOR_US,
	MEMORY_EVENT_GOOD_TO_US,
	MEMORY_EVENT_BAD_TO_US,
	MEMORY_LIBERATED_CITIES,
	/************************************************************************************************/
	/* Afforess                                     12/7/09                                         */
	/*                                                                                              */
	/*                                                                                              */
	/************************************************************************************************/
	MEMORY_INQUISITION,
	MEMORY_RECALLED_AMBASSADOR,
	MEMORY_WARMONGER,
	MEMORY_MADE_PEACE,
	MEMORY_SACKED_CITY,
	MEMORY_SACKED_HOLY_CITY,
	MEMORY_ENSLAVED_CITIZENS,
	MEMORY_BACKSTAB,
	MEMORY_BACKSTAB_FRIEND,
	/************************************************************************************************/
	/* Afforess	                         END                                                        */
	/************************************************************************************************/

	NUM_MEMORY_TYPES
};

enum AttitudeTypes // Exposed to Python
{
	NO_ATTITUDE = -1,

	ATTITUDE_FURIOUS,
	ATTITUDE_ANNOYED,
	ATTITUDE_CAUTIOUS,
	ATTITUDE_PLEASED,
	ATTITUDE_FRIENDLY,

	NUM_ATTITUDE_TYPES
};

//! Enumeration for playing events with CvLeaderheadWidget
enum LeaderheadAction // Exposed to Python
{
	NO_LEADERANIM = -1, //!< If used with CvLeaderheadWidget::PerformAction, plays the idle animation

	LEADERANIM_GREETING, //!< The leaderhead greets you
	LEADERANIM_FRIENDLY, //!< The leaderhead is friendly to you
	LEADERANIM_PLEASED, //!< The leaderhead is pleased
	LEADERANIM_CAUTIOUS, //!< The leaderhead is cautious
	LEADERANIM_ANNOYED, //!< The leaderhead is annoyed
	LEADERANIM_FURIOUS, //!< The leaderhead is furious
	LEADERANIM_DISAGREE, //!< The leaderhead makes a disagree gesture
	LEADERANIM_AGREE, //!< The leaderhead makes an agree gesture

#ifdef _USRDLL
	NUM_LEADERANIM_TYPES //!< The number of leaderhead event types
#endif
};

enum DiplomacyPowerTypes // Exposed to Python
{
	NO_DIPLOMACYPOWER = -1,
	DIPLOMACYPOWER_WEAKER,
	DIPLOMACYPOWER_EQUAL,
	DIPLOMACYPOWER_STRONGER,

	NUM_DIPLOMACYPOWER_TYPES
};

enum FeatTypes // Exposed to Python
{
	FEAT_UNITCOMBAT_ARCHER,
	FEAT_UNITCOMBAT_MOUNTED,
	FEAT_UNITCOMBAT_MELEE,
	FEAT_UNITCOMBAT_SIEGE,
	FEAT_UNITCOMBAT_GUN,
	FEAT_UNITCOMBAT_ARMOR,
	FEAT_UNITCOMBAT_HELICOPTER,
	FEAT_UNITCOMBAT_NAVAL,
	FEAT_UNIT_PRIVATEER,
	FEAT_UNIT_SPY,
	FEAT_NATIONAL_WONDER,
	FEAT_TRADE_ROUTE,
	FEAT_COPPER_CONNECTED,
	FEAT_HORSE_CONNECTED,
	FEAT_IRON_CONNECTED,
	FEAT_LUXURY_CONNECTED,
	FEAT_FOOD_CONNECTED,
	FEAT_POPULATION_HALF_MILLION,
	FEAT_POPULATION_1_MILLION,
	FEAT_POPULATION_2_MILLION,
	FEAT_POPULATION_5_MILLION,
	FEAT_POPULATION_10_MILLION,
	FEAT_POPULATION_20_MILLION,
	FEAT_POPULATION_50_MILLION,
	FEAT_POPULATION_100_MILLION,
	FEAT_POPULATION_200_MILLION,
	FEAT_POPULATION_500_MILLION,
	FEAT_POPULATION_1_BILLION,
	FEAT_POPULATION_2_BILLION,
	FEAT_CORPORATION_ENABLED,
	FEAT_PAD,

	NUM_FEAT_TYPES
};

enum SaveGameTypes // Exposed to Python
{
	SAVEGAME_NONE = -1,

	SAVEGAME_AUTO,
	SAVEGAME_RECOVERY,
	SAVEGAME_QUICK,
	SAVEGAME_NORMAL,
	SAVEGAME_GROUP,
	SAVEGAME_DROP_QUIT,
	SAVEGAME_DROP_CONTINUE,
	SAVEGAME_PBEM,
	SAVEGAME_REPLAY,

#ifdef _USRDLL
	NUM_SAVEGAME_TYPES
#endif
};

enum InitializationStates
{
	INIT_OK,
	INIT_FAILED,

#ifdef _USRDLL
	NUM_INIT_STATES
#endif
};

enum GameType // Exposed to Python
{
	GAME_NONE = -1,

	GAME_SP_NEW,
	GAME_SP_SCENARIO,
	GAME_SP_LOAD,
	GAME_MP_NEW,
	GAME_MP_SCENARIO,
	GAME_MP_LOAD,
	GAME_HOTSEAT_NEW,
	GAME_HOTSEAT_SCENARIO,
	GAME_HOTSEAT_LOAD,
	GAME_PBEM_NEW,
	GAME_PBEM_SCENARIO,
	GAME_PBEM_LOAD,
	GAME_REPLAY,

#ifdef _USRDLL
	NUM_GAMETYPES
#endif
};

enum GameMode // Exposed to Python
{
	NO_GAMEMODE = -1,

	GAMEMODE_NORMAL,
	GAMEMODE_PITBOSS,

#ifdef _USRDLL
	NUM_GAMEMODES
#endif
};

enum GamePwdTypes
{
	NO_PWDTYPE = -1,

	PWD_NEWGAME,
	PWD_SCENARIO,
	PWD_JOINGAME,

#ifdef _USRDLL
	NUM_PWDTYPES
#endif
};

enum SlotClaim
{
	SLOTCLAIM_UNASSIGNED,
	SLOTCLAIM_RESERVED,
	SLOTCLAIM_ASSIGNED,

#ifdef _USRDLL
	NUM_SLOTCLAIMS
#endif
};

enum SlotStatus
{
	SS_OPEN,
	SS_COMPUTER,
	SS_CLOSED,
	SS_TAKEN,

	SS_MAX_SLOT_STATUS,
};

enum InterfaceVisibility // Exposed to Python
{
	INTERFACE_SHOW,
	INTERFACE_HIDE,
	INTERFACE_HIDE_ALL,
	INTERFACE_MINIMAP_ONLY,
	INTERFACE_ADVANCED_START,
};

enum GenericButtonSizes // Exposed to Python
{
	BUTTON_SIZE_46,
	BUTTON_SIZE_32,
	BUTTON_SIZE_24,
	BUTTON_SIZE_16,

	BUTTON_SIZE_CUSTOM,
};

enum MenuScreenType
{
	MENU_SCREEN_STANDARD,
	MENU_SCREEN_BASELOBBY,
	MENU_SCREEN_BASE_SCENARIO,
	MENU_SCREEN_JOIN,
	MENU_SCREEN_BASE_LOAD,
	MENU_SCREEN_LAUNCHING,
	MENU_SCREEN_BASE_INIT,

	MENU_SCREEN_OPENING_MENU,
	MENU_SCREEN_MOD_MENU,

	MENU_SCREEN_GS_BUDDYLIST,
	MENU_SCREEN_GS_CHATROOM,
	MENU_SCREEN_GS_CHANNEL,
	MENU_SCREEN_GS_CHOOSE_SCENARIO,
	MENU_SCREEN_GS_SCENARIO,
	MENU_SCREEN_GS_NAVBAR,
	MENU_SCREEN_GS_LOAD_STAGING,
	MENU_SCREEN_GS_MOTD,
	MENU_SCREEN_GS_LOGIN,
	MENU_SCREEN_GS_LOAD,
	MENU_SCREEN_GS_JOIN,
	MENU_SCREEN_GS_INIT,
	MENU_SCREEN_GS_CUSTOM_GAMES,

	MENU_SCREEN_LANLOBBY,
	MENU_SCREEN_MP_CHOOSE_SCENARIO,
	MENU_SCREEN_MP_SCENARIO,
	MENU_SCREEN_MP_LOAD_STAGING,
	MENU_SCREEN_MP_LOAD,
	MENU_SCREEN_MP_INIT,
	MENU_SCREEN_MP_CHOICES,
	MENU_SCREEN_MP_JOIN,

	MENU_SCREEN_SP_WORLD_SIZE,
	MENU_SCREEN_SP_SCENARIO,
	MENU_SCREEN_SP_LOAD,
	MENU_SCREEN_SP_INIT,
	MENU_SCREEN_SP_CHOICES,
	MENU_SCREEN_SP_ADVANCED_LOAD,
	MENU_SCREEN_SP_SIMPLE_CIV_PICKER,
	MENU_SCREEN_SP_REPLAY,
	MENU_SCREEN_SP_MAP_SCRIPT,
	MENU_SCREEN_SP_DIFFICULTY,
};

enum WorldBuilderPopupTypes // Exposed to Python
{
	WBPOPUP_NONE = -1,

	WBPOPUP_START = 200,
	WBPOPUP_CITY  = WBPOPUP_START, // first entry, starts at 0
	WBPOPUP_UNIT,
	WBPOPUP_PLAYER,
	WBPOPUP_PLOT,
	WBPOPUP_TERRAIN,
	WBPOPUP_FEATURE,
	WBPOPUP_IMPROVEMENT,
	WBPOPUP_GAME,

#ifdef _USRDLL
	NUM_WBPOPUP
#endif
};

enum EventType // Exposed to Python
{
	// mouseEvent
	EVT_LBUTTONDOWN = 1,
	EVT_LBUTTONDBLCLICK,
	EVT_RBUTTONDOWN,
	EVT_BACK,
	EVT_FORWARD,

	// kbdEvent
	EVT_KEYDOWN,
	EVT_KEYUP,
};

// Different types of load
enum LoadType // Exposed to Python
{
	LOAD_NORMAL,
	LOAD_INIT,
	LOAD_SETUP,
	LOAD_GAMETYPE,
	LOAD_REPLAY,
	LOAD_NORMAL_AND_GAMETYPE,
};

//	Available Fonts
enum FontTypes // Exposed to Python
{
	TITLE_FONT,
	GAME_FONT,
	SMALL_FONT,
	MENU_FONT,
	MENU_HIGHLIGHT_FONT,
};

enum PanelStyles // Exposed to Python
{
	// Built in styles
	PANEL_STYLE_STANDARD,
	PANEL_STYLE_SOLID,
	PANEL_STYLE_EMPTY,
	PANEL_STYLE_FLAT,
	PANEL_STYLE_IN,
	PANEL_STYLE_OUT,
	PANEL_STYLE_EXTERNAL,
	PANEL_STYLE_DEFAULT,

	// Civ specific styles
	PANEL_STYLE_CIVILPEDIA,
	PANEL_STYLE_STONE,
	PANEL_STYLE_UNITSTAT,
	PANEL_STYLE_BLUELARGE,
	PANEL_STYLE_BLUE50,

	PANEL_STYLE_TOPBAR,
	PANEL_STYLE_BOTTOMBAR,
	PANEL_STYLE_TECH,

	PANEL_STYLE_GAMEHUD_LEFT,
	PANEL_STYLE_GAMEHUD_RIGHT,
	PANEL_STYLE_GAMEHUD_CENTER,
	PANEL_STYLE_GAMEHUD_STATS,
	PANEL_STYLE_GAME_MAP,
	PANEL_STYLE_GAME_TOPBAR,
	PANEL_STYLE_HUD_HELP,

	PANEL_STYLE_CITY_LEFT,
	PANEL_STYLE_CITY_RIGHT,
	PANEL_STYLE_CITY_TOP,
	PANEL_STYLE_CITY_TANSHADE,
	PANEL_STYLE_CITY_INFO,
	PANEL_STYLE_CITY_TANTL,
	PANEL_STYLE_CITY_TANTR,
	PANEL_STYLE_CITY_COLUMNL,
	PANEL_STYLE_CITY_COLUMNC,
	PANEL_STYLE_CITY_COLUMNR,
	PANEL_STYLE_CITY_TITLE,

	PANEL_STYLE_DAWN,
	PANEL_STYLE_DAWNTOP,
	PANEL_STYLE_DAWNBOTTOM,

	PANEL_STYLE_MAIN,
	PANEL_STYLE_MAIN_BLACK25,
	PANEL_STYLE_MAIN_BLACK50,
	PANEL_STYLE_MAIN_WHITE,
	PANEL_STYLE_MAIN_WHITETAB,
	PANEL_STYLE_MAIN_TAN,
	PANEL_STYLE_MAIN_TAN15,
	PANEL_STYLE_MAIN_TANL,
	PANEL_STYLE_MAIN_TANR,
	PANEL_STYLE_MAIN_TANT,
	PANEL_STYLE_MAIN_TANB,
	PANEL_STYLE_MAIN_BOTTOMBAR,
	PANEL_STYLE_MAIN_SELECT,
};

enum ButtonStyles // Exposed to Python
{
	BUTTON_STYLE_STANDARD,
	BUTTON_STYLE_ETCHED,
	BUTTON_STYLE_FLAT,
	BUTTON_STYLE_IMAGE,
	BUTTON_STYLE_LABEL,
	BUTTON_STYLE_LINK,
	BUTTON_STYLE_SQUARE,
	BUTTON_STYLE_TOOL,
	BUTTON_STYLE_DEFAULT,

	// Civ specific styles
	BUTTON_STYLE_CIRCLE,
	BUTTON_STYLE_CITY_B01,
	BUTTON_STYLE_CITY_B02TL,
	BUTTON_STYLE_CITY_B02TR,
	BUTTON_STYLE_CITY_B02BL,
	BUTTON_STYLE_CITY_B02BR,
	BUTTON_STYLE_CITY_B03TL,
	BUTTON_STYLE_CITY_B03TC,
	BUTTON_STYLE_CITY_B03TR,
	BUTTON_STYLE_CITY_B03BL,
	BUTTON_STYLE_CITY_B03BC,
	BUTTON_STYLE_CITY_B03BR,
	BUTTON_STYLE_CITY_FLAT,
	BUTTON_STYLE_CITY_PLUS,
	BUTTON_STYLE_CITY_MINUS,

	BUTTON_STYLE_ARROW_LEFT,
	BUTTON_STYLE_ARROW_RIGHT
};

enum TableStyles // Exposed to Python
{
	TABLE_STYLE_STANDARD,
	TABLE_STYLE_EMPTY,
	TABLE_STYLE_ALTEMPTY,
	TABLE_STYLE_CITY,
	TABLE_STYLE_EMPTYSELECTINACTIVE,
	TABLE_STYLE_ALTDEFAULT,
	TABLE_STYLE_STAGINGROOM
};

enum EventContextTypes // Exposed to Python
{
	NO_EVENTCONTEXT = -1,

	EVENTCONTEXT_SELF,
	EVENTCONTEXT_ALL,
};

enum CivLoginStates
{
	NO_CIV_LOGIN = -1,

	LOGIN_CIV_OK,
	LOGIN_CIV_BAD_PWD,
	LOGIN_CIV_TAKEN,
	LOGIN_CIV_HAS_ID,
};

enum VersionTypes
{
	NO_VERSIONTYPE = -1,

	VERSIONTYPE_EXE,
	VERSIONTYPE_DLL,
	VERSIONTYPE_SHADERS,
	VERSIONTYPE_PYTHON,
	VERSIONTYPE_XML,
};

enum VoteResultTypes
{
	VOTERESULT_MAJORITY,
	VOTERESULT_UNANIMOUS,
};

enum VoteStatusTypes
{
	NO_VOTESTATUS = -1,

	VOTESTATUS_TIED		  = -2,
	VOTESTATUS_UNDECIDED  = -3,
	VOTESTATUS_INCOMPLETE = -4
};

// Tab Group in Options Menu
enum TabGroupTypes // Exposed to Python
{
	NO_TABGROUP = -1,

	TABGROUP_GAME,
	TABGROUP_INPUT,
	TABGROUP_GRAPHICS,
	TABGROUP_AUDIO,
	TABGROUP_CLOCK,

#ifdef _USRDLL
	NUM_TABGROUPS
#endif
};

enum ReplayMessageTypes // Exposed to Python
{
	NO_REPLAY_MESSAGE = -1,

	REPLAY_MESSAGE_MAJOR_EVENT,
	REPLAY_MESSAGE_CITY_FOUNDED,
	REPLAY_MESSAGE_PLOT_OWNER_CHANGE,

#ifdef _USRDLL
	NUM_REPLAY_MESSAGE_TYPES
#endif
};

/*------------------------------------------------------------------------------------
Enum:		EAudioTag
Purpose:	To enumerate all of the tag strings loaded from the csv or xml files
------------------------------------------------------------------------------------*/
enum AudioTag // Exposed to Python
{
	AUDIOTAG_NONE = -1,
	AUDIOTAG_SOUNDID,
	AUDIOTAG_CONTEXTID,
	AUDIOTAG_SOUNDTYPE,
	AUDIOTAG_2DSCRIPT,
	AUDIOTAG_3DSCRIPT,
	AUDIOTAG_SOUNDSCAPE,
	AUDIOTAG_POSITION,
	AUDIOTAG_SCRIPTTYPE,
	AUDIOTAG_LOADTYPE,
	AUDIOTAG_COUNT,
};

enum CivilopediaPageTypes // Exposed to Python
{
	NO_CIVILOPEDIA_PAGE = -1,

	CIVILOPEDIA_PAGE_TECH,
	CIVILOPEDIA_PAGE_UNIT,
	CIVILOPEDIA_PAGE_BUILDING,
	CIVILOPEDIA_PAGE_WONDER,
	CIVILOPEDIA_PAGE_TERRAIN,
	CIVILOPEDIA_PAGE_FEATURE,
	CIVILOPEDIA_PAGE_BONUS,
	CIVILOPEDIA_PAGE_IMPROVEMENT,
	CIVILOPEDIA_PAGE_SPECIALIST,
	CIVILOPEDIA_PAGE_PROMOTION,
	CIVILOPEDIA_PAGE_UNIT_GROUP,
	CIVILOPEDIA_PAGE_CIV,
	CIVILOPEDIA_PAGE_LEADER,
	CIVILOPEDIA_PAGE_RELIGION,
	CIVILOPEDIA_PAGE_CORPORATION,
	CIVILOPEDIA_PAGE_CIVIC,
	CIVILOPEDIA_PAGE_PROJECT,
	CIVILOPEDIA_PAGE_CONCEPT,
	CIVILOPEDIA_PAGE_CONCEPT_NEW,
	/************************************************************************************************/
	/* DCM                                     04/19/09                                Johny Smith  */
	/************************************************************************************************/
	// Dale - DCM: Pedia Concepts START
	CIVILOPEDIA_PAGE_CONCEPT_DCM,
	// Dale - DCM: Pedia Concepts END
	/************************************************************************************************/
	/* DCM                                     END                                                  */
	/************************************************************************************************/
	/************************************************************************************************/
	/* Afforess                                     11/13/09                                        */
	/************************************************************************************************/
	CIVILOPEDIA_PAGE_CONCEPT_AND,
	/************************************************************************************************/
	/* Afforess                                END                                                  */
	/************************************************************************************************/
	CIVILOPEDIA_PAGE_HINTS,

	NUM_CIVILOPEDIA_PAGE_TYPES
};

enum ActionSubTypes // Exposed to Python
{
	NO_ACTIONSUBTYPE = -1,

	ACTIONSUBTYPE_INTERFACEMODE,
	ACTIONSUBTYPE_COMMAND,
	ACTIONSUBTYPE_BUILD,
	ACTIONSUBTYPE_PROMOTION,
	ACTIONSUBTYPE_UNIT,
	ACTIONSUBTYPE_RELIGION,
	ACTIONSUBTYPE_CORPORATION,
	ACTIONSUBTYPE_SPECIALIST,
	ACTIONSUBTYPE_BUILDING,
	ACTIONSUBTYPE_CONTROL,
	ACTIONSUBTYPE_AUTOMATE,
	ACTIONSUBTYPE_MISSION,

#ifdef _USRDLL
	NUM_ACTIONSUBTYPES
#endif
};

enum GameMessageTypes // Exposed to Python
{
	GAMEMESSAGE_NETWORK_READY,
	GAMEMESSAGE_SAVE_GAME_FLAG,
	GAMEMESSAGE_SAVE_FLAG_ACK,
	GAMEMESSAGE_VERIFY_VERSION,
	GAMEMESSAGE_VERSION_NACK,
	GAMEMESSAGE_VERSION_WARNING,
	GAMEMESSAGE_GAME_TYPE,
	GAMEMESSAGE_ID_ASSIGNMENT,
	GAMEMESSAGE_FILE_INFO,
	GAMEMESSAGE_PICK_YOUR_CIV,
	GAMEMESSAGE_CIV_CHOICE,
	GAMEMESSAGE_CONFIRM_CIV_CLAIM,
	GAMEMESSAGE_CLAIM_INFO,
	GAMEMESSAGE_CIV_CHOICE_ACK,
	GAMEMESSAGE_CIV_CHOICE_NACK,
	GAMEMESSAGE_CIV_CHOSEN,
	GAMEMESSAGE_INTERIM_NOTICE,
	GAMEMESSAGE_INIT_INFO,
	GAMEMESSAGE_MAPSCRIPT_CHECK,
	GAMEMESSAGE_MAPSCRIPT_ACK,
	GAMEMESSAGE_LOAD_GAME,
	GAMEMESSAGE_PLAYER_ID,
	GAMEMESSAGE_SLOT_REASSIGNMENT,
	GAMEMESSAGE_PLAYER_INFO,
	GAMEMESSAGE_GAME_INFO,
	GAMEMESSAGE_REASSIGN_PLAYER,
	GAMEMESSAGE_PITBOSS_INFO,
	GAMEMESSAGE_LAUNCHING_INFO,
	GAMEMESSAGE_INIT_GAME,
	GAMEMESSAGE_INIT_PLAYERS,
	GAMEMESSAGE_AUTH_REQUEST,
	GAMEMESSAGE_AUTH_RESPONSE,
	GAMEMESSAGE_SYNCH_START,
	GAMEMESSAGE_PLAYER_OPTION,
	GAMEMESSAGE_EXTENDED_GAME,
	GAMEMESSAGE_AUTO_MOVES,
	GAMEMESSAGE_TURN_COMPLETE,
	GAMEMESSAGE_JOIN_GROUP,
	GAMEMESSAGE_PUSH_MISSION,
	GAMEMESSAGE_AUTO_MISSION,
	GAMEMESSAGE_DO_COMMAND,
	GAMEMESSAGE_PUSH_ORDER,
	GAMEMESSAGE_POP_ORDER,
	GAMEMESSAGE_DO_TASK,
	GAMEMESSAGE_RESEARCH,
	GAMEMESSAGE_PERCENT_CHANGE,
	GAMEMESSAGE_ESPIONAGE_CHANGE,
	GAMEMESSAGE_CONVERT,
	GAMEMESSAGE_CHAT,
	GAMEMESSAGE_PING,
	GAMEMESSAGE_SIGN,
	GAMEMESSAGE_LINE_ENTITY,
	GAMEMESSAGE_SIGN_DELETE,
	GAMEMESSAGE_LINE_ENTITY_DELETE,
	GAMEMESSAGE_LINE_GROUP_DELETE,
	GAMEMESSAGE_PAUSE,
	GAMEMESSAGE_MP_KICK,
	GAMEMESSAGE_MP_RETIRE,
	GAMEMESSAGE_CLOSE_CONNECTION,
	GAMEMESSAGE_NEVER_JOINED,
	GAMEMESSAGE_MP_DROP_INIT,
	GAMEMESSAGE_MP_DROP_VOTE,
	GAMEMESSAGE_MP_DROP_UPDATE,
	GAMEMESSAGE_MP_DROP_RESULT,
	GAMEMESSAGE_MP_DROP_SAVE,
	GAMEMESSAGE_TOGGLE_TRADE,
	GAMEMESSAGE_IMPLEMENT_OFFER,
	GAMEMESSAGE_CHANGE_WAR,
	GAMEMESSAGE_CHANGE_VASSAL,
	GAMEMESSAGE_CHOOSE_ELECTION,
	GAMEMESSAGE_DIPLO_VOTE,
	GAMEMESSAGE_APPLY_EVENT,
	GAMEMESSAGE_CONTACT_CIV,
	GAMEMESSAGE_DIPLO_CHAT,
	GAMEMESSAGE_SEND_OFFER,
	GAMEMESSAGE_DIPLO_EVENT,
	GAMEMESSAGE_RENEGOTIATE,
	GAMEMESSAGE_RENEGOTIATE_ITEM,
	GAMEMESSAGE_EXIT_TRADE,
	GAMEMESSAGE_KILL_DEAL,
	GAMEMESSAGE_SAVE_GAME,
	GAMEMESSAGE_UPDATE_CIVICS,
	GAMEMESSAGE_CLEAR_TABLE,
	GAMEMESSAGE_POPUP_PROCESSED,
	GAMEMESSAGE_DIPLOMACY_PROCESSED,
	GAMEMESSAGE_HOT_JOIN_NOTICE,
	GAMEMESSAGE_HOT_DROP_NOTICE,
	GAMEMESSAGE_DIPLOMACY,
	GAMEMESSAGE_POPUP,
	GAMEMESSAGE_EVENT_TRIGGERED,
	GAMEMESSAGE_EMPIRE_SPLIT,
	GAMEMESSAGE_LAUNCH_SPACESHIP,
	GAMEMESSAGE_ADVANCED_START_ACTION,
	GAMEMESSAGE_FOUND_RELIGION,
	GAMEMESSAGE_MOD_NET_MESSAGE
	// BUG - Reminder Mod - start
	,
	GAMEMESSAGE_ADD_REMINDER
	// BUG - Reminder Mod - end
	/************************************************************************************************/
	/* Afforess	                  Start		 08/18/10                                               */
	/*                                                                                              */
	/*                                                                                              */
	/************************************************************************************************/
	,
	GAMEMESSAGE_SET_GLOBAL_DEFINE,
	/************************************************************************************************/
	/* Afforess	                     END                                                            */
	/************************************************************************************************/
	GAMEMESSAGE_RECALCULATE_MODIFIERS,
	GAMEMESSAGE_BUILD_LISTS,
	GAMEMESSAGE_BUILD_LIST_PUSH_ORDER,
	GAMEMESSAGE_BUILD_LIST_POP_ORDER,
	GAMEMESSAGE_BUILD_LIST_EDIT,
	GAMEMESSAGE_CHOOSE_TRAIT,
	GAMEMESSAGE_CHOOSE_MERGE_UNIT,
	GAMEMESSAGE_CONFIRM_SPLIT_UNIT,
	GAMEMESSAGE_IMPROVEMENT_UPGRADE,
	GAMEMESSAGE_CHOOSE_BUILDUP,
	GAMEMESSAGE_CHOOSE_ARREST_UNIT,
	GAMEMESSAGE_CONFIRM_AMBUSH
};

enum PopupControlLayout // Exposed to Python
{
	POPUP_LAYOUT_LEFT,
	POPUP_LAYOUT_CENTER,
	POPUP_LAYOUT_RIGHT,
	POPUP_LAYOUT_STRETCH,

	POPUP_LAYOUT_NUMLAYOUTS
};

enum JustificationTypes // Exposed to Python
{
	DLL_FONT_LEFT_JUSTIFY	   = 1 << 0,
	DLL_FONT_RIGHT_JUSTIFY	   = 1 << 1,
	DLL_FONT_CENTER_JUSTIFY	   = 1 << 2,
	DLL_FONT_CENTER_VERTICALLY = 1 << 3,
	DLL_FONT_ADDITIVE		   = 1 << 4,
};

enum ToolTipAlignTypes // Exposed to Python
{
	TOOLTIP_TOP_LEFT,
	TOOLTIP_TOP_INLEFT,
	TOOLTIP_TOP_CENTER,
	TOOLTIP_TOP_INRIGHT,
	TOOLTIP_TOP_RIGHT,

	TOOLTIP_INTOP_RIGHT,
	TOOLTIP_CENTER_RIGHT,
	TOOLTIP_INBOTTOM_RIGHT,

	TOOLTIP_BOTTOM_RIGHT,
	TOOLTIP_BOTTOM_INRIGHT,
	TOOLTIP_BOTTOM_CENTER,
	TOOLTIP_BOTTOM_INLEFT,
	TOOLTIP_BOTTOM_LEFT,

	TOOLTIP_INBOTTOM_LEFT,
	TOOLTIP_CENTER_LEFT,
	TOOLTIP_INTOP_LEFT,
};

enum ActivationTypes // Exposed to Python
{
	ACTIVATE_NORMAL,
	ACTIVATE_CHILDFOCUS,
	ACTIVATE_MIMICPARENT,
	ACTIVATE_MIMICPARENTFOCUS,
};

enum HitTestTypes // Exposed to Python
{
	HITTEST_DEFAULT,
	HITTEST_ON,
	HITTEST_SOLID,
	HITTEST_CHILDREN,
	HITTEST_NOHIT,
};

enum GraphicLevelTypes // Exposed to Python
{
	GRAPHICLEVEL_HIGH,
	GRAPHICLEVEL_MEDIUM,
	GRAPHICLEVEL_LOW,
	GRAPHICLEVEL_CURRENT,

#ifdef _USRDLL
	NUM_GRAPHICLEVELS
#endif
};

enum EventTypes // Exposed to Python
{
	NO_EVENT = -1,
};

enum EventTriggerTypes // Exposed to Python
{
	NO_EVENTTRIGGER = -1,
};

enum EspionageMissionTypes // Exposed to Python
{
	NO_ESPIONAGEMISSION = -1,
};

enum AdvancedStartActionTypes // Exposed to Python
{
	NO_ADVANCEDSTARTACTION = -1,

	ADVANCEDSTARTACTION_EXIT,
	ADVANCEDSTARTACTION_UNIT,
	ADVANCEDSTARTACTION_CITY,
	ADVANCEDSTARTACTION_POP,
	ADVANCEDSTARTACTION_CULTURE,
	ADVANCEDSTARTACTION_BUILDING,
	ADVANCEDSTARTACTION_IMPROVEMENT,
	ADVANCEDSTARTACTION_ROUTE,
	ADVANCEDSTARTACTION_TECH,
	ADVANCEDSTARTACTION_VISIBILITY,
	ADVANCEDSTARTACTION_AUTOMATE
};

enum GlobeLayerTypes
{
	GLOBE_LAYER_STRATEGY = -1,
	GLOBE_LAYER_TRADE,
	GLOBE_LAYER_UNIT,
	GLOBE_LAYER_RESOURCE,
	GLOBE_LAYER_RELIGION,
	GLOBE_LAYER_CULTURE,
	GLOBE_LAYER_DEBUG,

#ifdef _USRDLL
	NUM_GLOBE_LAYER_TYPES
#endif
};

enum GlobeLayerUnitOptionTypes
{
	SHOW_ALL_MILITARY,
	SHOW_TEAM_MILITARY,
	SHOW_ENEMIES_IN_TERRITORY,
	SHOW_ENEMIES,
	SHOW_PLAYER_DOMESTICS,

#ifdef _USRDLL
	NUM_UNIT_OPTION_TYPES
#endif
};

enum GlobeLayerResourceOptionTypes
{
	SHOW_ALL_RESOURCES,
	SHOW_STRATEGIC_RESOURCES,
	SHOW_HAPPY_RESOURCES,
	SHOW_HEALTH_RESOURCES,

#ifdef _USRDLL
	NUM_RESOURCE_OPTION_TYPES
#endif
};

enum PlotIndicatorVisibilityFlags
{
	PLOT_INDICATOR_VISIBLE_ALWAYS,
	PLOT_INDICATOR_VISIBLE_ONSCREEN_ONLY,
	PLOT_INDICATOR_VISIBLE_OFFSCREEN_ONLY,
	PLOT_INDICATOR_VISIBLE_ONGLOBE_ONLY,
	PLOT_INDICATOR_VISIBLE_NEVER
};

enum UnitSubEntityTypes
{
	UNIT_SUB_ENTITY_NORMAL,
	UNIT_SUB_ENTITY_LEADER,
	UNIT_SUB_ENTITY_SIEGE_TOWER,
	UNIT_SUB_ENTITY_COUNT
};

enum CivilopediaWidgetShowTypes
{
	CIVILOPEDIA_WIDGET_SHOW_NONE,
	CIVILOPEDIA_WIDGET_SHOW_LAND,
	CIVILOPEDIA_WIDGET_SHOW_WATER,
};

/************************************************************************************************/
/* Afforess	                  Start		 06/01/10                                               */
/*                                                                                              */
/*                                                                                              */
/************************************************************************************************/
enum RankingTypes
{
	RANKING_POWER,
	RANKING_POPULATION,
	RANKING_LAND,
	RANKING_CULTURE,
	RANKING_ESPIONAGE,
	RANKING_WONDERS,
	RANKING_TECH,
	NUM_RANKINGS
};

enum LandmarkTypes
{
	NO_LANDMARK = -1,
	LANDMARK_BAY,
	LANDMARK_ISLAND,
	LANDMARK_FOREST,
	LANDMARK_JUNGLE,
	LANDMARK_PEAK,
	LANDMARK_MOUNTAIN_RANGE,
	LANDMARK_PLAINS,
	LANDMARK_DESERT,
	LANDMARK_OCEAN,
	LANDMARK_LAKE,
	NUM_LANDMARK_TYPES
};

//Used for each player
enum ModderOptionTypes // Exposed to Python
{
	NO_MODDEROPTION = -1,

	MODDEROPTION_FLEXIBLE_DIFFICULTY,
	MODDEROPTION_SHOW_COASTAL_BUILDINGS,
	MODDEROPTION_HIDE_OBSOLETE_BUILDINGS,
	MODDEROPTION_HIDE_REPLACED_BUILDINGS,
	MODDEROPTION_NO_FRIENDLY_PILLAGING,
	MODDEROPTION_HIDE_UNAVAILBLE_BUILDS,
	MODDEROPTION_HIDE_OBSOLETE_BUILDS,
	MODDEROPTION_SHOW_REV_EFFECTS,
	MODDEROPTION_USE_LANDMARK_NAMES,
	MODDEROPTION_FLEXIBLE_DIFFICULTY_TURN_INCREMENTS,
	MODDEROPTION_FLEXIBLE_DIFFICULTY_TIMER,
	MODDEROPTION_SHOW_TRAITS_FLAG,
	MODDEROPTION_FLEXIBLE_DIFFICULTY_MIN_DIFFICULTY,
	MODDEROPTION_FLEXIBLE_DIFFICULTY_MAX_DIFFICULTY,
	MODDEROPTION_FLEXIBLE_DIFFICULTY_MIN_RANK,
	MODDEROPTION_FLEXIBLE_DIFFICULTY_MAX_RANK,
	MODDEROPTION_EVENT_IMAGES,
	MODDEROPTION_IGNORE_DISABLED_ALERTS,
	MODDEROPTION_AUTO_PILLAGE_AVOID_ENEMY_UNITS,
	MODDEROPTION_AUTO_PILLAGE_AVOID_BARBARIAN_CITIES,
	MODDEROPTION_HIDE_AUTO_PILLAGE,
	MODDEROPTION_AUTO_HUNT_NO_CITY_CAPTURING,
	MODDEROPTION_AUTO_HUNT_ALLOW_UNIT_SUICIDING,
	MODDEROPTION_HIDE_AUTO_HUNT,
	MODDEROPTION_AUTO_HUNT_MIN_COMBAT_ODDS,
	MODDEROPTION_AUTO_PATROL_CAN_LEAVE_BORDERS,
	MODDEROPTION_AUTO_PATROL_ALLOW_UNIT_SUICIDING,
	MODDEROPTION_AUTO_PATROL_NO_CITY_CAPTURING,
	MODDEROPTION_HIDE_AUTO_PATROL,
	MODDEROPTION_AUTO_PATROL_MIN_COMBAT_ODDS,
	MODDEROPTION_AUTO_DEFENSE_CAN_LEAVE_CITY,
	MODDEROPTION_HIDE_AUTO_DEFENSE,
	MODDEROPTION_AUTO_DEFENSE_MIN_COMBAT_ODDS,
	MODDEROPTION_AUTO_AIR_CAN_DEFEND,
	MODDEROPTION_AUTO_AIR_CAN_REBASE,
	MODDEROPTION_HIDE_AUTO_AIR,
	MODDEROPTION_HIDE_AUTO_EXPLORE,
	MODDEROPTION_HIDE_AUTO_SPREAD,
	MODDEROPTION_HIDE_AUTO_CARAVAN,
	MODDEROPTION_HIDE_AUTO_PIRATE,
	MODDEROPTION_AUTO_PIRATE_MIN_COMBAT_ODDS,
	MODDEROPTION_HIDE_AUTO_PROTECT,
	MODDEROPTION_HIDE_AUTO_UPGRADE,
	MODDEROPTION_UPGRADE_MOST_EXPENSIVE,
	MODDEROPTION_UPGRADE_MOST_EXPERIENCED,
	MODDEROPTION_UPGRADE_MIN_GOLD,
	MODDEROPTION_HIDE_AUTO_PROMOTE,
	MODDEROPTION_INFRASTRUCTURE_IGNORES_IMPROVEMENTS,

	NUM_MODDEROPTION_TYPES
};

//Used for the game
enum ModderGameOptionTypes
{
	NO_MODDERGAMEOPTION = -1,

	MODDERGAMEOPTION_DEFENDER_WITHDRAW,
	MODDERGAMEOPTION_MAX_UNITS_PER_TILES,
	MODDERGAMEOPTION_MAX_BOMBARD_DEFENSE,
	MODDERGAMEOPTION_CANNOT_CLAIM_OCEAN,
	MODDERGAMEOPTION_RESOURCE_DEPLETION,
	MODDERGAMEOPTION_BETTER_INTERCETION,
	MODDERGAMEOPTION_AIRLIFT_RANGE,
	MODDERGAMEOPTION_MERCY_RULE,
	MODDERGAMEOPTION_REALISTIC_DIPLOMACY,
	MODDERGAMEOPTION_BATTLEFIELD_PROMOTIONS,
	MODDERGAMEOPTION_NO_STORMS,
	MODDERGAMEOPTION_IMPROVED_XP,
	MODDERGAMEOPTION_MULTIPLE_RELIGION_SPREAD,
	MODDERGAMEOPTION_TERRAIN_DAMAGE,
	MODDERGAMEOPTION_STRATEGIC_EVENTS,
	MODDERGAMEOPTION_NO_AUTO_CORPORATION_FOUNDING,
	MODDERGAMEOPTION_AI_USE_FLEXIBLE_DIFFICULTY,

	NUM_MODDERGAMEOPTION_TYPES
};
/************************************************************************************************/
/* Afforess	                     END                                                            */
/************************************************************************************************/

// AIAndy: Game object types
enum GameObjectTypes
{
	NO_GAMEOBJECT = -1,
	GAMEOBJECT_GAME,
	GAMEOBJECT_TEAM,
	GAMEOBJECT_PLAYER,
	GAMEOBJECT_CITY,
	GAMEOBJECT_UNIT,
	GAMEOBJECT_PLOT,

	NUM_GAMEOBJECTS
};

// AIAndy: Game object modifier types
enum GOMTypes
{
	NO_GOM = -1,
	GOM_BUILDING,
	GOM_PROMOTION,
	GOM_TRAIT,
	GOM_FEATURE,
	GOM_OPTION,
	GOM_TERRAIN,
	GOM_GAMESPEED,
	GOM_ROUTE,
	GOM_BONUS,
	GOM_UNITTYPE,
	GOM_TECH,
	GOM_CIVIC,
	GOM_RELIGION,
	GOM_CORPORATION,
	GOM_IMPROVEMENT,
	GOM_UNITCOMBAT,
	GOM_HANDICAP,

	NUM_GOMS
};

// AIAndy: Game object relation types
enum RelationTypes
{
	NO_RELATION = -1,
	RELATION_ASSOCIATED, // owner, owned, ... depending on type
	RELATION_TRADE,
	RELATION_NEAR,
	RELATION_SAME_PLOT,
	RELATION_WORKING,

	NUM_RELATIONS
};

// AIAndy: Built-in game object properties
enum AttributeTypes
{
	NO_ATTRIBUTE = -1,
	ATTRIBUTE_POPULATION,
	ATTRIBUTE_HEALTH,
	ATTRIBUTE_HAPPINESS,
	ATTRIBUTE_PLAYERS,
	ATTRIBUTE_TEAMS,

	NUM_ATTRIBUTES
};

// AIAndy: Built-in game boolean object properties
enum TagTypes
{
	NO_TAG = -1,
	TAG_ONLY_DEFENSIVE,
	TAG_SPY,
	TAG_FIRST_STRIKE_IMMUNE,
	TAG_NO_DEFENSIVE_BONUS,
	TAG_CAN_MOVE_IMPASSABLE,
	TAG_HIDDEN_NATIONALITY,
	TAG_BLITZ,
	TAG_ALWAYS_HEAL,
	TAG_ENEMY_ROUTE,
	TAG_WATER,
	TAG_FRESH_WATER,
	TAG_PEAK,
	TAG_HILL,
	TAG_FLATLAND,
	TAG_OWNED,
	TAG_CITY,
	TAG_ANARCHY,
	TAG_COASTAL,

	NUM_TAGS
};

// AIAndy: Types of property sources
enum PropertySourceTypes
{
	NO_PROPERTYSOURCE = -1,
	PROPERTYSOURCE_CONSTANT,
	PROPERTYSOURCE_CONSTANT_LIMITED,
	PROPERTYSOURCE_DECAY,
	PROPERTYSOURCE_ATTRIBUTE_CONSTANT,

	NUM_PROPERTYSOURCES
};

// AIAndy: Types of property interactions
enum PropertyInteractionTypes
{
	NO_PROPERTYINTERACTION = -1,
	PROPERTYINTERACTION_CONVERT_CONSTANT,
	PROPERTYINTERACTION_INHIBITED_GROWTH,
	PROPERTYINTERACTION_CONVERT_PERCENT,

	NUM_PROPERTYINTERACTIONS
};

// AIAndy: Types of property propagators
enum PropertyPropagatorTypes
{
	NO_PROPERTYPROPAGATOR = -1,
	PROPERTYPROPAGATOR_SPREAD,
	PROPERTYPROPAGATOR_GATHER,
	PROPERTYPROPAGATOR_DIFFUSE,

	NUM_PROPERTYPROPAGATORS
};


#endif // CVENUMS_h
