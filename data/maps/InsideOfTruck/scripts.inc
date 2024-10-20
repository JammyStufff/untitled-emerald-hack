# 1 "data/maps/InsideOfTruck/scripts.pory"

# 2 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_MapScripts::
# 3 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, StartingArea_OnFrame
# 4 "data/maps/InsideOfTruck/scripts.pory"
	.byte 0
# 5 "data/maps/InsideOfTruck/scripts.pory"

# 6 "data/maps/InsideOfTruck/scripts.pory"
StartingArea_OnFrame:
# 7 "data/maps/InsideOfTruck/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, StartingArea_CelebiEncounter
# 8 "data/maps/InsideOfTruck/scripts.pory"
	.2byte 0
# 9 "data/maps/InsideOfTruck/scripts.pory"

# 10 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_OnLoad:
# 11 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
# 12 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
# 13 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
# 14 "data/maps/InsideOfTruck/scripts.pory"
	end
# 15 "data/maps/InsideOfTruck/scripts.pory"

# 16 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_OnResume:
# 17 "data/maps/InsideOfTruck/scripts.pory"
	setstepcallback STEP_CB_TRUCK
# 18 "data/maps/InsideOfTruck/scripts.pory"
	end
# 19 "data/maps/InsideOfTruck/scripts.pory"

# 20 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlags::
# 21 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 22 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 23 "data/maps/InsideOfTruck/scripts.pory"
	checkplayergender
# 24 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, InsideOfTruck_EventScript_SetIntroFlagsMale
# 25 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, InsideOfTruck_EventScript_SetIntroFlagsFemale
# 26 "data/maps/InsideOfTruck/scripts.pory"
	end
# 27 "data/maps/InsideOfTruck/scripts.pory"

# 28 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlagsMale::
# 29 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 30 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 31 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
# 32 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 33 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
# 34 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
# 35 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 36 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
# 37 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 3, 10
# 38 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
# 39 "data/maps/InsideOfTruck/scripts.pory"
	end
# 40 "data/maps/InsideOfTruck/scripts.pory"

# 41 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlagsFemale::
# 42 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
# 43 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 44 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
# 45 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 46 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
# 47 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
# 48 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 49 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 1
# 50 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 12, 10
# 51 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
# 52 "data/maps/InsideOfTruck/scripts.pory"
	end
# 53 "data/maps/InsideOfTruck/scripts.pory"

# 54 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_MovingBox::
# 55 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_Text_BoxPrintedWithMonLogo, MSGBOX_SIGN
# 56 "data/maps/InsideOfTruck/scripts.pory"
	end
# 57 "data/maps/InsideOfTruck/scripts.pory"

# 58 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_Text_BoxPrintedWithMonLogo:
# 59 "data/maps/InsideOfTruck/scripts.pory"
	.string "The box is printed with a POKéMON logo.\p"
# 60 "data/maps/InsideOfTruck/scripts.pory"
	.string "It's a POKéMON brand moving and\n"
# 61 "data/maps/InsideOfTruck/scripts.pory"
	.string "delivery service.$"
# 62 "data/maps/InsideOfTruck/scripts.pory"

# 63 "data/maps/InsideOfTruck/scripts.pory"
StartingArea_EventScript_TerritorialWhiscash::
# 64 "data/maps/InsideOfTruck/scripts.pory"
	lock
# 65 "data/maps/InsideOfTruck/scripts.pory"
	msgbox StartingArea_Text_TerritorialeWhiscash_NoPokemon, MSGBOX_SIGN
# 66 "data/maps/InsideOfTruck/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StartingArea_TerritorialWhiscash_Run
# 67 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement 0
# 68 "data/maps/InsideOfTruck/scripts.pory"
	release
# 69 "data/maps/InsideOfTruck/scripts.pory"
	end
# 70 "data/maps/InsideOfTruck/scripts.pory"

# 71 "data/maps/InsideOfTruck/scripts.pory"
StartingArea_Text_TerritorialeWhiscash_NoPokemon:
# 72 "data/maps/InsideOfTruck/scripts.pory"
	.string "This Whiscash seems very protective of\n"
# 73 "data/maps/InsideOfTruck/scripts.pory"
	.string "its territory...\p"
# 74 "data/maps/InsideOfTruck/scripts.pory"
	.string "It's probably best to stay away for now.$"
# 75 "data/maps/InsideOfTruck/scripts.pory"

# 76 "data/maps/InsideOfTruck/scripts.pory"
StartingArea_TerritorialWhiscash_Run:
# 77 "data/maps/InsideOfTruck/scripts.pory"
walk_up
# 78 "data/maps/InsideOfTruck/scripts.pory"
step_end

StartingArea_CelebiEncounter::
# 85 "data/maps/InsideOfTruck/scripts.pory"
	lock
# 86 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_CELEBI_0x020, StartingArea_CelebiEncounter_2
StartingArea_CelebiEncounter_1:
# 97 "data/maps/InsideOfTruck/scripts.pory"
	addvar VAR_TEMP_0, 1
# 98 "data/maps/InsideOfTruck/scripts.pory"
	release
	end

StartingArea_CelebiEncounter_2:
# 88 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 89 "data/maps/InsideOfTruck/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StartingArea_playerFaceRight
# 90 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement 0
# 91 "data/maps/InsideOfTruck/scripts.pory"
	msgbox StartingArea_CelebiEncounter_Text_0
# 92 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 2, StartingArea_CelebiLeaves
# 93 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement 0
# 94 "data/maps/InsideOfTruck/scripts.pory"
	removeobject 2
# 95 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_CELEBI_0x020
	goto StartingArea_CelebiEncounter_1


# 102 "data/maps/InsideOfTruck/scripts.pory"
StartingArea_playerFaceRight:
# 103 "data/maps/InsideOfTruck/scripts.pory"
	face_right
	step_end

# 106 "data/maps/InsideOfTruck/scripts.pory"
StartingArea_CelebiLeaves:
# 108 "data/maps/InsideOfTruck/scripts.pory"
	walk_fast_up
# 109 "data/maps/InsideOfTruck/scripts.pory"
	walk_fast_left
# 109 "data/maps/InsideOfTruck/scripts.pory"
	walk_fast_left
# 109 "data/maps/InsideOfTruck/scripts.pory"
	walk_fast_left
# 110 "data/maps/InsideOfTruck/scripts.pory"
	walk_fast_down
# 110 "data/maps/InsideOfTruck/scripts.pory"
	walk_fast_down
# 111 "data/maps/InsideOfTruck/scripts.pory"
	walk_fast_right
# 111 "data/maps/InsideOfTruck/scripts.pory"
	walk_fast_right
# 111 "data/maps/InsideOfTruck/scripts.pory"
	walk_fast_right
# 111 "data/maps/InsideOfTruck/scripts.pory"
	walk_fast_right
# 111 "data/maps/InsideOfTruck/scripts.pory"
	walk_fast_right
# 111 "data/maps/InsideOfTruck/scripts.pory"
	walk_fast_right
# 111 "data/maps/InsideOfTruck/scripts.pory"
	walk_fast_right
# 111 "data/maps/InsideOfTruck/scripts.pory"
	walk_fast_right
# 111 "data/maps/InsideOfTruck/scripts.pory"
	walk_fast_right
# 111 "data/maps/InsideOfTruck/scripts.pory"
	walk_fast_right
# 112 "data/maps/InsideOfTruck/scripts.pory"
	step_end

StartingArea_CelebiEncounter_Text_0:
# 91 "data/maps/InsideOfTruck/scripts.pory"
	.string "The strange Pokemon laughs to itself.\n It seems to beckon you to follow.$"
