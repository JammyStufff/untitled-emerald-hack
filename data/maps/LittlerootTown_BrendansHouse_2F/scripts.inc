RivalsHouse_POKEMON_POKEMON_POKEMON::
# 3 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lock
# 4 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_POKEMON_POKEMON_POKEMON_Text_0
# 5 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	release
	end


RivalsHouse_Mother::
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lock
# 12 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	faceplayer
# 13 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_Mother_Text_0
# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	release
	end


RivalsHouse_Wooper::
# 20 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lock
# 21 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	faceplayer
# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_Wooper_Text_0
# 23 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	release
	end


# 26 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
.set LOCALID_RIVAL, 1
# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_MapScripts::
# 30 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_OnTransition
# 31 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_BrendansHouse_2F_OnWarp
# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.byte 0
# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition:
# 35 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan
# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 4, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 42 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
# 43 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 44 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 45 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 46 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 47 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	@ Odd that the MaysHouse equivalent was used below instead
# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 0, 2
# 53 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_UP
# 54 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 55 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 56 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Ret::
# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
# 65 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnWarp:
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.2byte 0
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SecretBase_EventScript_InitDecorations
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 84 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
# 85 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	addobject LOCALID_RIVAL
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters
# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 92 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth
# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest
# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast
# 100 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadedefaultbgm
# 106 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth::
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth
# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth
# 117 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth
# 118 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 119 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 120 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth::
# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth
# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth
# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth
# 130 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 131 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 132 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 133 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest::
# 134 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest
# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 139 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 140 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest
# 141 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest
# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 143 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 144 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 145 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast::
# 146 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast
# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 151 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 152 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast
# 153 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 154 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 155 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 156 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters:
# 157 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 158 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 159 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 160 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 161 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 162 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth:
# 163 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 164 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 165 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 166 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 168 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 169 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 170 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth:
# 171 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 173 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 174 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 176 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 177 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 178 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 179 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 180 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 181 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth:
# 182 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 183 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 184 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 185 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 186 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 187 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 188 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 189 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 191 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth:
# 192 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 193 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 194 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 196 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 197 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth:
# 198 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 199 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 200 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 201 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 202 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 203 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 204 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 205 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 206 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth:
# 207 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 208 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 209 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 210 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 211 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 212 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 214 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest:
# 215 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 216 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 217 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 219 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 220 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 221 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest:
# 222 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 223 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 224 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 225 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 226 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 227 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 228 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 229 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 230 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 231 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 232 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest:
# 233 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_8
# 234 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 235 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 237 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 238 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 239 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 240 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast:
# 242 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 243 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 244 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 245 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 246 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 247 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 248 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 249 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 250 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast:
# 251 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 252 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 253 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 254 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 255 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 256 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 257 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 258 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 260 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 261 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 262 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 263 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 264 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 265 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 266 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 267 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 268 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC
# 269 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 270 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 271 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
# 272 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 273 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 274 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 275 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 276 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 277 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 278 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 279 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 280 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 281 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 282 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 283 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 284 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 285 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 286 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 287 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 288 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
# 289 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 290 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 291 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 292 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 293 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_Notebook::
# 294 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
# 295 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 296 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 297 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_GameCube::
# 298 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
# 299 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 300 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 301 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ClockIsStopped:
# 302 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
# 303 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Better set it and start it!$"
# 304 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 305 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_HowDoYouLikeYourRoom:
# 306 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "MOM: {PLAYER}, how do you like your\n"
# 307 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "new room?\p"
# 308 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Good! Everything's put away neatly!\p"
# 309 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "They finished moving everything in\n"
# 310 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "downstairs, too.\p"
# 311 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "POKéMON movers are so convenient!\p"
# 312 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oh, you should make sure that\n"
# 313 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "everything's all there on your desk.$"
# 314 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 315 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_Notebook:
# 316 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\p"
# 317 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 1\n"
# 318 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Open the MENU with START.\p"
# 319 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 2\n"
# 320 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Record your progress with SAVE.\p"
# 321 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The remaining pages are blank…$"
# 322 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 323 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
Common_Text_LookCloserAtMap:
# 324 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} took a closer look at the\n"
# 325 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "HOENN region map.$"
# 326 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 327 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ItsAGameCube:
# 328 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 329 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 330 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "serve as the Controller.$"

RivalsHouse_POKEMON_POKEMON_POKEMON_Text_0:
# 4 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "POKEMON POKEMON POKEMON POKEMON\n"
	.string "POKEMON POKEMON POKEMON POKEMON\l"
	.string "POKEMON POKEMON POKEMON POKEMON\l"
	.string "POKEMON POKEMON POKEMON POKEMON\l"
	.string "POKEMON POKEMON POKEMON POKEMON$"

RivalsHouse_Mother_Text_0:
# 13 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "I get it's good to have something you're\n"
	.string "really into...but my daughter's habits\l"
	.string "get a little worrying, sometimes.$"

RivalsHouse_Wooper_Text_0:
# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "This Wooper absolutely FORBIDS you\n"
	.string "from going upstairs.$"
