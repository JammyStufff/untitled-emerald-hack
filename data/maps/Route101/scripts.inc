Route1_KILLRIVAL::
# 3 "data/maps/Route101/scripts.pory"
	removeobject 6
	end


BugCatcherDennis::
# 9 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, BugCatcherDennis_Text_0, BugCatcherDennis_Text_1
# 10 "data/maps/Route101/scripts.pory"
	msgbox BugCatcherDennis_Text_2, MSGBOX_AUTOCLOSE
	return


LassEmma::
# 15 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, LassEmma_Text_0, LassEmma_Text_1
# 16 "data/maps/Route101/scripts.pory"
	msgbox LassEmma_Text_2, MSGBOX_AUTOCLOSE
	return


Route1_MeetRival::
# 21 "data/maps/Route101/scripts.pory"
	lock
# 22 "data/maps/Route101/scripts.pory"
	addobject 6
# 23 "data/maps/Route101/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 24 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_0
# 26 "data/maps/Route101/scripts.pory"
	case 25, Route1_MeetRival_3
# 28 "data/maps/Route101/scripts.pory"
	case 26, Route1_MeetRival_4
Route1_MeetRival_1:
# 31 "data/maps/Route101/scripts.pory"
	applymovement 6, RivalApproach
# 32 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route101/scripts.pory"
	trainerbattle_no_whiteout_continue_script TRAINER_GRUNT_AQUA_HIDEOUT_2, Route1_MeetRival_Text_0, Route1_MeetRival_Text_1, Route1_PostRivalBattle
	end

Route1_MeetRival_3:
# 27 "data/maps/Route101/scripts.pory"
	setobjectxy 6, 25, 9
	goto Route1_MeetRival_1

Route1_MeetRival_4:
# 29 "data/maps/Route101/scripts.pory"
	setobjectxy 6, 26, 9
	goto Route1_MeetRival_1


Route1_PostRivalBattle::
# 39 "data/maps/Route101/scripts.pory"
	addobject 6
# 40 "data/maps/Route101/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 41 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route1_PostRivalBattle_2
# 47 "data/maps/Route101/scripts.pory"
	msgbox Route1_PostRivalBattle_Text_1
Route1_PostRivalBattle_1:
# 49 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 50 "data/maps/Route101/scripts.pory"
	release
	end

Route1_PostRivalBattle_2:
# 43 "data/maps/Route101/scripts.pory"
	msgbox Route1_PostRivalBattle_Text_0
	goto Route1_PostRivalBattle_1


# 54 "data/maps/Route101/scripts.pory"
RivalApproach:
# 56 "data/maps/Route101/scripts.pory"
	walk_up
# 56 "data/maps/Route101/scripts.pory"
	walk_up
# 56 "data/maps/Route101/scripts.pory"
	walk_up
# 56 "data/maps/Route101/scripts.pory"
	walk_up
# 56 "data/maps/Route101/scripts.pory"
	walk_up
# 57 "data/maps/Route101/scripts.pory"
	step_end

# 60 "data/maps/Route101/scripts.pory"

# 61 "data/maps/Route101/scripts.pory"
.set LOCALID_BIRCH, 2
# 62 "data/maps/Route101/scripts.pory"
.set LOCALID_ZIGZAGOON, 4
# 63 "data/maps/Route101/scripts.pory"

# 64 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 65 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route1_KILLRIVAL
# 66 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 67 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 68 "data/maps/Route101/scripts.pory"
	.byte 0
# 69 "data/maps/Route101/scripts.pory"

# 70 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 71 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 72 "data/maps/Route101/scripts.pory"
	end
# 73 "data/maps/Route101/scripts.pory"

# 74 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 75 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 76 "data/maps/Route101/scripts.pory"
	.2byte 0
# 77 "data/maps/Route101/scripts.pory"

# 78 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 79 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 80 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 81 "data/maps/Route101/scripts.pory"
	end
# 82 "data/maps/Route101/scripts.pory"

# 83 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 84 "data/maps/Route101/scripts.pory"
	lockall
# 85 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 86 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 87 "data/maps/Route101/scripts.pory"
	closemessage
# 88 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_BIRCH, 0, 15
# 89 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
# 90 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 91 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 92 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 93 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 94 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 95 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 96 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 98 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 99 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 100 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 101 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 102 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 103 "data/maps/Route101/scripts.pory"
	closemessage
# 104 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 105 "data/maps/Route101/scripts.pory"
	releaseall
# 106 "data/maps/Route101/scripts.pory"
	end
# 107 "data/maps/Route101/scripts.pory"

# 108 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 109 "data/maps/Route101/scripts.pory"
	lockall
# 110 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 111 "data/maps/Route101/scripts.pory"
	closemessage
# 112 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 113 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 114 "data/maps/Route101/scripts.pory"
	releaseall
# 115 "data/maps/Route101/scripts.pory"
	end
# 116 "data/maps/Route101/scripts.pory"

# 117 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 118 "data/maps/Route101/scripts.pory"
	lockall
# 119 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 120 "data/maps/Route101/scripts.pory"
	closemessage
# 121 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 122 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 123 "data/maps/Route101/scripts.pory"
	releaseall
# 124 "data/maps/Route101/scripts.pory"
	end
# 125 "data/maps/Route101/scripts.pory"

# 126 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 127 "data/maps/Route101/scripts.pory"
	lockall
# 128 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 129 "data/maps/Route101/scripts.pory"
	closemessage
# 130 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 131 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route101/scripts.pory"
	releaseall
# 133 "data/maps/Route101/scripts.pory"
	end
# 134 "data/maps/Route101/scripts.pory"

# 135 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 136 "data/maps/Route101/scripts.pory"
	walk_up
# 137 "data/maps/Route101/scripts.pory"
	step_end
# 138 "data/maps/Route101/scripts.pory"

# 139 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 140 "data/maps/Route101/scripts.pory"
	walk_right
# 141 "data/maps/Route101/scripts.pory"
	step_end
# 142 "data/maps/Route101/scripts.pory"

# 143 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 144 "data/maps/Route101/scripts.pory"
	walk_down
# 145 "data/maps/Route101/scripts.pory"
	step_end
# 146 "data/maps/Route101/scripts.pory"

# 147 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 148 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 149 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 150 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 151 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 152 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 153 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 154 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 155 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 156 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 159 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 160 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 161 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 162 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 163 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 164 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 165 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 166 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 167 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 169 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 171 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 173 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 174 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 175 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 176 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 178 "data/maps/Route101/scripts.pory"
	step_end
# 179 "data/maps/Route101/scripts.pory"

# 180 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 181 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 182 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 183 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 184 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 185 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 186 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 187 "data/maps/Route101/scripts.pory"
	step_end
# 188 "data/maps/Route101/scripts.pory"

# 189 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 190 "data/maps/Route101/scripts.pory"
	step_end
# 191 "data/maps/Route101/scripts.pory"

# 192 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 193 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 194 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 195 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 196 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 197 "data/maps/Route101/scripts.pory"
	step_end
# 198 "data/maps/Route101/scripts.pory"

# 199 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 200 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 201 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 202 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 203 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 204 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 205 "data/maps/Route101/scripts.pory"
	step_end
# 206 "data/maps/Route101/scripts.pory"

# 207 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 208 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 209 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 210 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 211 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 212 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 213 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 214 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 215 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 216 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 217 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 218 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 219 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 220 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 221 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 222 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 223 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 224 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 225 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 226 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 227 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 228 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 229 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 230 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 231 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 232 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 233 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 234 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 235 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 236 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 237 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 238 "data/maps/Route101/scripts.pory"
	step_end
# 239 "data/maps/Route101/scripts.pory"

# 240 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 241 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 242 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 243 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 244 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 245 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 246 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 247 "data/maps/Route101/scripts.pory"
	step_end
# 248 "data/maps/Route101/scripts.pory"

# 249 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 250 "data/maps/Route101/scripts.pory"
	step_end
# 251 "data/maps/Route101/scripts.pory"

# 252 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 253 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 254 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 255 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 256 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 257 "data/maps/Route101/scripts.pory"
	step_end
# 258 "data/maps/Route101/scripts.pory"

# 259 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 260 "data/maps/Route101/scripts.pory"
	walk_up
# 261 "data/maps/Route101/scripts.pory"
	walk_up
# 262 "data/maps/Route101/scripts.pory"
	step_end
# 263 "data/maps/Route101/scripts.pory"

# 264 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 265 "data/maps/Route101/scripts.pory"
	walk_up
# 266 "data/maps/Route101/scripts.pory"
	walk_left
# 267 "data/maps/Route101/scripts.pory"
	walk_up
# 268 "data/maps/Route101/scripts.pory"
	step_end
# 269 "data/maps/Route101/scripts.pory"

# 270 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 271 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 272 "data/maps/Route101/scripts.pory"
	end
# 273 "data/maps/Route101/scripts.pory"

# 274 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 275 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 276 "data/maps/Route101/scripts.pory"
	end
# 277 "data/maps/Route101/scripts.pory"

# 278 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 279 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 280 "data/maps/Route101/scripts.pory"
	end
# 281 "data/maps/Route101/scripts.pory"

# 282 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 283 "data/maps/Route101/scripts.pory"
	lock
# 284 "data/maps/Route101/scripts.pory"
	faceplayer
# 285 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 286 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 287 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 288 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 289 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
# 290 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 291 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 292 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 293 "data/maps/Route101/scripts.pory"
	waitstate
# 294 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
# 295 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 296 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 297 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 298 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 299 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 300 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 301 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 302 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 303 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 304 "data/maps/Route101/scripts.pory"
	checkplayergender
# 305 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 306 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 307 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 308 "data/maps/Route101/scripts.pory"
	waitstate
# 309 "data/maps/Route101/scripts.pory"
	release
# 310 "data/maps/Route101/scripts.pory"
	end
# 311 "data/maps/Route101/scripts.pory"

# 312 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 313 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 314 "data/maps/Route101/scripts.pory"
	return
# 315 "data/maps/Route101/scripts.pory"

# 316 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 317 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 318 "data/maps/Route101/scripts.pory"
	return
# 319 "data/maps/Route101/scripts.pory"

# 320 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 321 "data/maps/Route101/scripts.pory"
	walk_right
# 322 "data/maps/Route101/scripts.pory"
	step_end
# 323 "data/maps/Route101/scripts.pory"

# 324 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 325 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 326 "data/maps/Route101/scripts.pory"

# 327 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 328 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 329 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 330 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 331 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 332 "data/maps/Route101/scripts.pory"

# 333 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 334 "data/maps/Route101/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 335 "data/maps/Route101/scripts.pory"
	.string "Don't leave me like this!$"
# 336 "data/maps/Route101/scripts.pory"

# 337 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 338 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 339 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 340 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 341 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 342 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 343 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 344 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 345 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 346 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 347 "data/maps/Route101/scripts.pory"

# 348 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 349 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 350 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 351 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 352 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 353 "data/maps/Route101/scripts.pory"

# 354 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 355 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 356 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 357 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 358 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 359 "data/maps/Route101/scripts.pory"

# 360 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 361 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 362 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"

BugCatcherDennis_Text_0:
# 9 "data/maps/Route101/scripts.pory"
	.string "You just got a Pokemon, didn't you?\p"
	.string "Yay! That means I'm your first\n"
	.string "opponent!$"

BugCatcherDennis_Text_1:
# 9 "data/maps/Route101/scripts.pory"
	.string "It seems I was your first victory, too...$"

BugCatcherDennis_Text_2:
# 10 "data/maps/Route101/scripts.pory"
	.string "Wow, you're tough!$"

LassEmma_Text_0:
# 15 "data/maps/Route101/scripts.pory"
	.string "Isn't it so nice out? It puts me in the\n"
	.string "mood to battle!$"

LassEmma_Text_1:
# 15 "data/maps/Route101/scripts.pory"
	.string "I'm still happy to be out here!$"

LassEmma_Text_2:
# 16 "data/maps/Route101/scripts.pory"
	.string "Thanks for sharing this moment with me!$"

Route1_MeetRival_Text_0:
# 33 "data/maps/Route101/scripts.pory"
	.string "YOU HAVE POKEMON? FIGHT FIGHT FIGHT\n"
	.string "FIGHT FIGHT FIGHT FIGHT FIGHT FIGHT\l"
	.string "FIGHT FIGHT FIGHT$"

Route1_MeetRival_Text_1:
# 33 "data/maps/Route101/scripts.pory"
	.string "AW DANGIT$"

Route1_PostRivalBattle_Text_0:
# 43 "data/maps/Route101/scripts.pory"
	.string "WOW! SO STRONG! SO STRONG!$"

Route1_PostRivalBattle_Text_1:
# 47 "data/maps/Route101/scripts.pory"
	.string "GOOD TRY! YOU FIGHT GREAT!$"
