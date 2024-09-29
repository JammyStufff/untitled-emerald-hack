# 1 "data/maps/InsideOfTruck/scripts.pory"

# 2 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_MapScripts::
# 3 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, InsideOfTruck_OnLoad
# 4 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, InsideOfTruck_OnResume
# 5 "data/maps/InsideOfTruck/scripts.pory"
	.byte 0
# 6 "data/maps/InsideOfTruck/scripts.pory"

# 7 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_OnLoad:
# 8 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
# 9 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
# 10 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
# 11 "data/maps/InsideOfTruck/scripts.pory"
	end
# 12 "data/maps/InsideOfTruck/scripts.pory"

# 13 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_OnResume:
# 14 "data/maps/InsideOfTruck/scripts.pory"
	setstepcallback STEP_CB_TRUCK
# 15 "data/maps/InsideOfTruck/scripts.pory"
	end
# 16 "data/maps/InsideOfTruck/scripts.pory"

# 17 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlags::
# 18 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 19 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 20 "data/maps/InsideOfTruck/scripts.pory"
	checkplayergender
# 21 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, InsideOfTruck_EventScript_SetIntroFlagsMale
# 22 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, InsideOfTruck_EventScript_SetIntroFlagsFemale
# 23 "data/maps/InsideOfTruck/scripts.pory"
	end
# 24 "data/maps/InsideOfTruck/scripts.pory"

# 25 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlagsMale::
# 26 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 27 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 28 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
# 29 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 30 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
# 31 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
# 32 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 33 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
# 34 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 3, 10
# 35 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
# 36 "data/maps/InsideOfTruck/scripts.pory"
	end
# 37 "data/maps/InsideOfTruck/scripts.pory"

# 38 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlagsFemale::
# 39 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
# 40 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 41 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
# 42 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 43 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
# 44 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
# 45 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 46 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 1
# 47 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 12, 10
# 48 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
# 49 "data/maps/InsideOfTruck/scripts.pory"
	end
# 50 "data/maps/InsideOfTruck/scripts.pory"

# 51 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_MovingBox::
# 52 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_Text_BoxPrintedWithMonLogo, MSGBOX_SIGN
# 53 "data/maps/InsideOfTruck/scripts.pory"
	end
# 54 "data/maps/InsideOfTruck/scripts.pory"

# 55 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_Text_BoxPrintedWithMonLogo:
# 56 "data/maps/InsideOfTruck/scripts.pory"
	.string "The box is printed with a POKéMON logo.\p"
# 57 "data/maps/InsideOfTruck/scripts.pory"
	.string "It's a POKéMON brand moving and\n"
# 58 "data/maps/InsideOfTruck/scripts.pory"
	.string "delivery service.$"
# 59 "data/maps/InsideOfTruck/scripts.pory"

# 60 "data/maps/InsideOfTruck/scripts.pory"
StartingArea_EventScript_TerritorialWhiscash::
# 61 "data/maps/InsideOfTruck/scripts.pory"
	lock
# 62 "data/maps/InsideOfTruck/scripts.pory"
	msgbox StartingArea_Text_TerritorialeWhiscash_NoPokemon, MSGBOX_SIGN
# 63 "data/maps/InsideOfTruck/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StartingArea_TerritorialWhiscash_Run
# 64 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement 0
# 65 "data/maps/InsideOfTruck/scripts.pory"
	release
# 66 "data/maps/InsideOfTruck/scripts.pory"
	end
# 67 "data/maps/InsideOfTruck/scripts.pory"

# 68 "data/maps/InsideOfTruck/scripts.pory"
StartingArea_Text_TerritorialeWhiscash_NoPokemon:
# 69 "data/maps/InsideOfTruck/scripts.pory"
	.string "This Whiscash seems very protective of\n"
# 70 "data/maps/InsideOfTruck/scripts.pory"
	.string "its territory...\p"
# 71 "data/maps/InsideOfTruck/scripts.pory"
	.string "It's probably best to stay away for now.$"
# 72 "data/maps/InsideOfTruck/scripts.pory"

# 73 "data/maps/InsideOfTruck/scripts.pory"
StartingArea_TerritorialWhiscash_Run:
# 74 "data/maps/InsideOfTruck/scripts.pory"
walk_up
# 75 "data/maps/InsideOfTruck/scripts.pory"
step_end

StartingArea_CelebiEncounter::
# 80 "data/maps/InsideOfTruck/scripts.pory"
	lock
# 81 "data/maps/InsideOfTruck/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StartingArea_playerFaceRight
# 82 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement 0
# 83 "data/maps/InsideOfTruck/scripts.pory"
	msgbox StartingArea_CelebiEncounter_Text_0
# 84 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 2, StartingArea_CelebiLeaves
# 85 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement 0
# 86 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_CELEBI_0x020
# 87 "data/maps/InsideOfTruck/scripts.pory"
	addvar VAR_TEMP_1, 1
# 88 "data/maps/InsideOfTruck/scripts.pory"
	release
	return


# 91 "data/maps/InsideOfTruck/scripts.pory"
StartingArea_playerFaceRight:
# 92 "data/maps/InsideOfTruck/scripts.pory"
	face_right
	step_end

# 95 "data/maps/InsideOfTruck/scripts.pory"
StartingArea_CelebiLeaves:
# 97 "data/maps/InsideOfTruck/scripts.pory"
	walk_up
# 98 "data/maps/InsideOfTruck/scripts.pory"
	walk_left
# 98 "data/maps/InsideOfTruck/scripts.pory"
	walk_left
# 98 "data/maps/InsideOfTruck/scripts.pory"
	walk_left
# 99 "data/maps/InsideOfTruck/scripts.pory"
	walk_down
# 99 "data/maps/InsideOfTruck/scripts.pory"
	walk_down
# 100 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 100 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 100 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 100 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 100 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 100 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 100 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 100 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 100 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 100 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 101 "data/maps/InsideOfTruck/scripts.pory"
	step_end

StartingArea_CelebiEncounter_Text_0:
# 83 "data/maps/InsideOfTruck/scripts.pory"
	.string "The strange Pokemon laughs to itself.\n It seems to beckons you to follow.$"
