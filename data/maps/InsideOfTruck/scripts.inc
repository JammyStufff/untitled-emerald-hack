# 1 "data/maps/InsideOfTruck/scripts.pory"

# 2 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_MapScripts::
# 3 "data/maps/InsideOfTruck/scripts.pory"
	.byte 0
# 4 "data/maps/InsideOfTruck/scripts.pory"

# 5 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_OnLoad:
# 6 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
# 7 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
# 8 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
# 9 "data/maps/InsideOfTruck/scripts.pory"
	end
# 10 "data/maps/InsideOfTruck/scripts.pory"

# 11 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_OnResume:
# 12 "data/maps/InsideOfTruck/scripts.pory"
	setstepcallback STEP_CB_TRUCK
# 13 "data/maps/InsideOfTruck/scripts.pory"
	end
# 14 "data/maps/InsideOfTruck/scripts.pory"

# 15 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlags::
# 16 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 17 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 18 "data/maps/InsideOfTruck/scripts.pory"
	checkplayergender
# 19 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, InsideOfTruck_EventScript_SetIntroFlagsMale
# 20 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, InsideOfTruck_EventScript_SetIntroFlagsFemale
# 21 "data/maps/InsideOfTruck/scripts.pory"
	end
# 22 "data/maps/InsideOfTruck/scripts.pory"

# 23 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlagsMale::
# 24 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 25 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 26 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
# 27 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 28 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
# 29 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
# 30 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 31 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
# 32 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 3, 10
# 33 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
# 34 "data/maps/InsideOfTruck/scripts.pory"
	end
# 35 "data/maps/InsideOfTruck/scripts.pory"

# 36 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlagsFemale::
# 37 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
# 38 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 39 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
# 40 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 41 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
# 42 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
# 43 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 44 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 1
# 45 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 12, 10
# 46 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
# 47 "data/maps/InsideOfTruck/scripts.pory"
	end
# 48 "data/maps/InsideOfTruck/scripts.pory"

# 49 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_MovingBox::
# 50 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_Text_BoxPrintedWithMonLogo, MSGBOX_SIGN
# 51 "data/maps/InsideOfTruck/scripts.pory"
	end
# 52 "data/maps/InsideOfTruck/scripts.pory"

# 53 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_Text_BoxPrintedWithMonLogo:
# 54 "data/maps/InsideOfTruck/scripts.pory"
	.string "The box is printed with a POKéMON logo.\p"
# 55 "data/maps/InsideOfTruck/scripts.pory"
	.string "It's a POKéMON brand moving and\n"
# 56 "data/maps/InsideOfTruck/scripts.pory"
	.string "delivery service.$"
# 57 "data/maps/InsideOfTruck/scripts.pory"

# 58 "data/maps/InsideOfTruck/scripts.pory"
StartingArea_EventScript_TerritorialWhiscash::
# 59 "data/maps/InsideOfTruck/scripts.pory"
	lock
# 60 "data/maps/InsideOfTruck/scripts.pory"
	msgbox StartingArea_Text_TerritorialeWhiscash_NoPokemon, MSGBOX_SIGN
# 61 "data/maps/InsideOfTruck/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StartingArea_TerritorialWhiscash_Run
# 62 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement 0
# 63 "data/maps/InsideOfTruck/scripts.pory"
	release
# 64 "data/maps/InsideOfTruck/scripts.pory"
	end
# 65 "data/maps/InsideOfTruck/scripts.pory"

# 66 "data/maps/InsideOfTruck/scripts.pory"
StartingArea_Text_TerritorialeWhiscash_NoPokemon:
# 67 "data/maps/InsideOfTruck/scripts.pory"
	.string "This Whiscash seems very protective of\n"
# 68 "data/maps/InsideOfTruck/scripts.pory"
	.string "its territory...\p"
# 69 "data/maps/InsideOfTruck/scripts.pory"
	.string "It's probably best to stay away for now.$"
# 70 "data/maps/InsideOfTruck/scripts.pory"

# 71 "data/maps/InsideOfTruck/scripts.pory"
StartingArea_TerritorialWhiscash_Run:
# 72 "data/maps/InsideOfTruck/scripts.pory"
walk_up
# 73 "data/maps/InsideOfTruck/scripts.pory"
step_end

StartingArea_CelebiEncounter::
# 78 "data/maps/InsideOfTruck/scripts.pory"
	lock
# 79 "data/maps/InsideOfTruck/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StartingArea_playerFaceRight
# 80 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement 0
# 81 "data/maps/InsideOfTruck/scripts.pory"
	msgbox StartingArea_CelebiEncounter_Text_0
# 82 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 2, StartingArea_CelebiLeaves
# 83 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement 0
# 84 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_CELEBI_0x020
# 85 "data/maps/InsideOfTruck/scripts.pory"
	addvar VAR_TEMP_1, 1
# 86 "data/maps/InsideOfTruck/scripts.pory"
	release
	return


# 89 "data/maps/InsideOfTruck/scripts.pory"
StartingArea_playerFaceRight:
# 90 "data/maps/InsideOfTruck/scripts.pory"
	face_right
	step_end

# 93 "data/maps/InsideOfTruck/scripts.pory"
StartingArea_CelebiLeaves:
# 95 "data/maps/InsideOfTruck/scripts.pory"
	walk_up
# 96 "data/maps/InsideOfTruck/scripts.pory"
	walk_left
# 96 "data/maps/InsideOfTruck/scripts.pory"
	walk_left
# 96 "data/maps/InsideOfTruck/scripts.pory"
	walk_left
# 97 "data/maps/InsideOfTruck/scripts.pory"
	walk_down
# 97 "data/maps/InsideOfTruck/scripts.pory"
	walk_down
# 98 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 98 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 98 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 98 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 98 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 98 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 98 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 98 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 98 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 98 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 99 "data/maps/InsideOfTruck/scripts.pory"
	step_end

StartingArea_CelebiEncounter_Text_0:
# 81 "data/maps/InsideOfTruck/scripts.pory"
	.string "The strange Pokemon laughs to itself.\n It seems to beckon you to follow.$"
