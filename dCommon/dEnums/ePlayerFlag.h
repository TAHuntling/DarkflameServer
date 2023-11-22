#ifndef __EPLAYERFLAG__H__
#define __EPLAYERFLAG__H__

#include <cstdint>

enum ePlayerFlag : int32_t {
	BTARR_TESTING = 0,
	PLAYER_HAS_ENTERED_PET_RANCH = 1,
	MINIMAP_UNLOCKED = 2,
	ACTIVITY_REBUILDING_FAIL_TIME = 3,
	ACTIVITY_REBUILDING_FAIL_RANGE = 4,
	ACTIVITY_SHOOTING_GALLERY_HELP = 5,
	HELP_WALKING_CONTROLS = 6,
	FIRST_SMASHABLE = 7,
	FIRST_IMAGINATION_PICKUP = 8,
	FIRST_DAMAGE = 9,
	FIRST_ITEM = 10,
	FIRST_BRICK = 11,
	FIRST_CONSUMABLE = 12,
	FIRST_EQUIPPABLE = 13,
	CHAT_HELP = 14,
	FIRST_PET_TAMING_MINIGAME = 15,
	FIRST_PET_ON_SWITCH = 16,
	FIRST_PET_JUMPED_ON_SWITCH = 17,
	FIRST_PET_FOUND_TREASURE = 18,
	FIRST_PET_DUG_TREASURE = 19,
	FIRST_PET_OWNER_ON_PET_BOUNCER = 20,
	FIRST_PET_DESPAWN_NO_IMAGINATION = 21,
	FIRST_PET_SELECTED_ENOUGH_BRICKS = 22,
	FIRST_EMOTE_UNLOCKED = 23,
	GF_PIRATE_REP = 24,
	AG_BOB_CINEMATIC_EVENT = 25,
	HELP_JUMPING_CONTROLS = 26,
	HELP_DOUBLE_JUMP_CONTROLS = 27,
	HELP_CAMERA_CONTROLS = 28,
	HELP_ROTATE_CONTROLS = 29,
	HELP_SMASH = 30,
	MONUMENT_INTRO_MUSIC_PLAYED = 31,
	BEGINNING_ZONE_SUMMARY_DISPLAYED = 32,
	AG_FINISH_LINE_BUILT = 33,
	AG_BOSS_AREA_FOUND = 34,
	AG_LANDED_IN_BATTLEFIELD = 35,
	GF_PLAYER_HAS_BEEN_TO_THE_RAVINE = 36,
	MODULAR_BUILD_STARTED = 37,
	MODULAR_BUILD_FINISHED_CLICK_BUTTON = 38,
	THINKING_HAT_RECEIVED_GO_TO_MODULAR_BUILD_AREA = 39,
	BUILD_AREA_ENTERED_MOD_NOT_ACTIVATED_PUT_ON_HAT = 40,
	HAT_ON_INSIDE_OF_MOD_BUILD_EQUIP_A_MODULE_FROM_LEG = 41,
	MODULE_EQUIPPED_PLACE_ON_GLOWING_BLUE_SPOT = 42,
	FIRST_MODULE_PLACED_CORRECTLY_NOW_DO_THE_REST = 43,
	ROCKET_COMPLETE_NOW_LAUNCH_FROM_PAD = 44,
	JOINED_A_FACTION = 45,
	VENTURE_FACTION = 46,
	ASSEMBLY_FACTION = 47,
	PARADOX_FACTION = 48,
	SENTINEL_FACTION = 49,
	LUP_WORLD_ACCESS = 50,
	AG_FIRST_FLAG_COLLECTED = 51,
	TOOLTIP_TALK_TO_SKYLAND_TO_GET_HAT = 52,
	MODULAR_BUILD_PLAYER_PLACES_FIRST_MODEL_IN_SCRATCH = 53,
	MODULAR_BUILD_FIRST_ARROW_DISPLAY_FOR_MODULE = 54,
	AG_BEACON_QB_SO_THE_PLAYER_CAN_ALWAYS_BUILD_THEM = 55,
	GF_PET_DIG_FLAG_1 = 56,
	GF_PET_DIG_FLAG_2 = 57,
	GF_PET_DIG_FLAG_3 = 58,
	SUPPRESS_SPACESHIP_CINEMATIC_FLYTHROUGH = 59,
	GF_PLAYER_FALL_DEATH = 60,
	GF_PLAYER_CAN_GET_FLAG_1 = 61,
	GF_PLAYER_CAN_GET_FLAG_2 = 62,
	GF_PLAYER_CAN_GET_FLAG_3 = 63,
	ENTER_BBB_FROM_PROPERTY_EDIT_CONFIRMATION_DIALOG = 64,
	AG_FIRST_COMBAT_COMPLETE = 65,
	AG_COMPLETE_BOB_MISSION = 66,
	FIRST_MANUAL_PET_HIBERNATE = 69,
	CAGED_SPIDER = 74,
	IS_NEWS_SCREEN_VISIBLE = 114,
	NJ_GARMADON_CINEMATIC_SEEN = 125,
	EQUPPED_TRIAL_FACTION_GEAR = 126,
	ELEPHANT_PET_3050 = 801,
	CAT_PET_3054 = 803,
	TRICERATOPS_PET_3195 = 806,
	TERRIER_PET_3254 = 807,
	SKUNK_PET_3261 = 811,
	BUNNY_PET_3672 = 813,
	CROCODILE_PET_3994 = 814,
	DOBERMAN_PET_5635 = 815,
	BUFFALO_PET_5636 = 816,
	ROBOT_DOG_PET_5637 = 818,
	RED_DRAGON_PET_5639 = 819,
	TORTOISE_PET_5640 = 820,
	GREEN_DRAGON_PET_5641 = 821,
	PANDA_PET_5643 = 822,
	MANTIS_PET_5642 = 823,
	WARTHOG_PET_6720 = 824,
	LION_PET_3520 = 825,
	GOAT_PET_7638 = 818,
	CRAB_PET_7694 = 827,
	REINDEER_PET_12294 = 829,
	STEGOSAURUS_PET_12431 = 830,
	SABER_CAT_PET_12432 = 831,
	GRYPHON_PET_12433 = 832,
	ALINE_PET_12334 = 833,
	UNKNOWN_PET = 834,
	EARTH_DRAGON_PET_16210 = 836,
	SKELETON_DRAGON_PET_13067 = 838,
	AG_SPACE_SHIP_BINOC_AT_LAUNCH = 1001,
	AG_SPACE_SHIP_BINOC_AT_LAUNCH_PLATFORM = 1002,
	AG_SPACE_SHIP_BINOC_ON_PLATFORM_TO_LEFT_OF_START = 1003,
	AG_SPACE_SHIP_BINOC_ON_PLATFORM_TO_RIGHT_OF_START = 1004,
	AG_SPACE_SHIP_BINOC_AT_BOB = 1005,
	AG_BATTLE_BINOC_FOR_TRICERETOPS = 1101,
	AG_BATTLE_BINOC_AT_PARADOX = 1102,
	AG_BATTLE_BINOC_AT_MISSION_GIVER = 1103,
	AG_BATTLE_BINOC_AT_BECK = 1104,
	AG_MONUMENT_BINOC_INTRO = 1105,
	AG_MONUMENT_BINOC_OUTRO = 1106,
	AG_LAUNCH_BINOC_INTRO = 1107,
	AG_LAUNCH_BINOC_BISON = 1108,
	AG_LAUNCH_BINOC_SHARK = 1109,
	NS_BINOC_CONCERT_TRANSITION = 1201,
	NS_BINOC_RACE_PLACE_TRANSITION = 1202,
	NS_BINOC_BRICK_ANNEX_TRANSITION = 1203,
	NS_BINOC_GF_LAUNCH = 1204,
	NS_BINOC_FV_LAUNCH = 1205,
	NS_BINOC_BRICK_ANNEX_WATER = 1206,
	NS_BINOC_AG_LAUNCH_AT_RACE_PLACE = 1207,
	NS_BINOC_AG_LAUNCH_AT_BRICK_ANNEX = 1208,
	NS_BINOC_AG_LAUNCH_AT_PLAZA = 1209,
	NS_BINOC_TBA = 1210,
	NS_FLAG_COLLECTABLE_1_BY_JONNY_THUNDER = 1211,
	NS_FLAG_COLLECTABLE_2_UNDER_CONCERT_BRIDGE = 1212,
	NS_FLAG_COLLECTABLE_3_BY_FV_LAUNCH = 1213,
	NS_FLAG_COLLECTABLE_4_IN_PLAZA_BEHIND_BUILDING = 1214,
	NS_FLAG_COLLECTABLE_5_BY_GF_LAUNCH = 1215,
	NS_FLAG_COLLECTABLE_6_BY_DUCK_SG = 1216,
	NS_FLAG_COLLECTABLE_7_BY_LUP_LAUNCH = 1217,
	NS_FLAG_COLLECTABLE_8_BY_NT_LUANCH = 1218,
	NS_FLAG_COLLECTABLE_9_BY_RACE_BUILD = 1219,
	NS_FLAG_COLLECTABLE_10_ON_AG_LAUNCH_PATH = 1220,
	PR_BINOC_AT_LAUNCH_PAD = 1251,
	PR_BINOC_AT_BEGINNING_OF_ISLAND_B = 1252,
	PR_BINOC_AT_FIRST_PET_BOUNCER = 1253,
	PR_BINOC_ON_BY_CROWS_NEST = 1254,
	PR_PET_DIG_AT_BEGINNING_OF_ISLAND_B = 1261,
	PR_PET_DIG_AT_THE_LOCATION_OF_OLD_BOUNCE_BACK = 1262,
	PR_PET_DIG_UNDER_QB_BRIDGE = 1263,
	PR_PET_DIG_BACK_SIDE_BY_PARTNER_BOUNCE = 1264,
	PR_PET_DIG_BY_LAUNCH_PAD = 1265,
	PR_PET_DIG_BY_FIRST_PET_BOUNCER = 1266,
	GF_BINOC_ON_LANDING_PAD = 1301,
	GF_BINOC_AT_RAVINE_START = 1302,
	GF_BINOC_ON_TOP_OF_RAVINE_HEAD = 1303,
	GF_BINOC_AT_TURTLE_AREA = 1304,
	GF_BINOC_IN_TUNNEL_TO_ELEPHANTS = 1305,
	GF_BINOC_IN_ELEPHANTS_AREA = 1306,
	GF_BINOC_IN_RACING_AREA = 1307,
	GF_BINOC_IN_CROC_AREA = 1308,
	GF_BINOC_IN_JAIL_AREA = 1309,
	GF_BINOC_TELESCOPE_NEXT_TO_CAPTAIN_JACK = 1310,
	NT_HEART_OF_DARKNESS = 1911,
	NT_PLINTH_REBUILD = 1919,
	NT_FACTION_SPY_DUKE = 1974,
	NT_FACTION_SPY_OVERBUILD = 1976,
	NT_FACTION_SPY_HAEL = 1977,
	NJ_EARTH_SPINJITZU = 2030,
	NJ_LIGHTNING_SPINJITZU = 2031,
	NJ_ICE_SPINJITZU = 2032,
	NJ_FIRE_SPINJITZU = 2033,
	NJ_WU_SHOW_DAILY_CHEST = 2099,
	DLU_SKIP_CINEMATICS = 1'000'000,
};

#endif  //!__EPLAYERFLAG__H__
