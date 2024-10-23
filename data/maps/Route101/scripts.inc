BugCatcherDennis::
# 5 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, BugCatcherDennis_Text_0, BugCatcherDennis_Text_1
# 6 "data/maps/Route101/scripts.pory"
	msgbox BugCatcherDennis_Text_2, MSGBOX_AUTOCLOSE
	return


LassEmma::
# 11 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, LassEmma_Text_0, LassEmma_Text_1
# 12 "data/maps/Route101/scripts.pory"
	msgbox LassEmma_Text_2, MSGBOX_AUTOCLOSE
	return


Route1_MeetRival::
# 17 "data/maps/Route101/scripts.pory"
	lock
# 18 "data/maps/Route101/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 19 "data/maps/Route101/scripts.pory"
	setobjectxy 6, var ( VAR_TEMP_0 ), 9
# 20 "data/maps/Route101/scripts.pory"
	applymovement 6, RivalApproach
# 21 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 22 "data/maps/Route101/scripts.pory"
	release
	end


# 26 "data/maps/Route101/scripts.pory"
RivalApproach:
# 28 "data/maps/Route101/scripts.pory"
	walk_up
# 28 "data/maps/Route101/scripts.pory"
	walk_up
# 28 "data/maps/Route101/scripts.pory"
	walk_up
# 28 "data/maps/Route101/scripts.pory"
	walk_up
# 28 "data/maps/Route101/scripts.pory"
	walk_up
# 29 "data/maps/Route101/scripts.pory"
	step_end

# 32 "data/maps/Route101/scripts.pory"

# 33 "data/maps/Route101/scripts.pory"
.set LOCALID_BIRCH, 2
# 34 "data/maps/Route101/scripts.pory"
.set LOCALID_ZIGZAGOON, 4
# 35 "data/maps/Route101/scripts.pory"

# 36 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 37 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 38 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 39 "data/maps/Route101/scripts.pory"
	.byte 0
# 40 "data/maps/Route101/scripts.pory"

# 41 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 42 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 43 "data/maps/Route101/scripts.pory"
	end
# 44 "data/maps/Route101/scripts.pory"

# 45 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 46 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 47 "data/maps/Route101/scripts.pory"
	.2byte 0
# 48 "data/maps/Route101/scripts.pory"

# 49 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 50 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 51 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 52 "data/maps/Route101/scripts.pory"
	end
# 53 "data/maps/Route101/scripts.pory"

# 54 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 55 "data/maps/Route101/scripts.pory"
	lockall
# 56 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 57 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 58 "data/maps/Route101/scripts.pory"
	closemessage
# 59 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_BIRCH, 0, 15
# 60 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
# 61 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 62 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 63 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 64 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 66 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 67 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 69 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 71 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 72 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 74 "data/maps/Route101/scripts.pory"
	closemessage
# 75 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 76 "data/maps/Route101/scripts.pory"
	releaseall
# 77 "data/maps/Route101/scripts.pory"
	end
# 78 "data/maps/Route101/scripts.pory"

# 79 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 80 "data/maps/Route101/scripts.pory"
	lockall
# 81 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 82 "data/maps/Route101/scripts.pory"
	closemessage
# 83 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 84 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route101/scripts.pory"
	releaseall
# 86 "data/maps/Route101/scripts.pory"
	end
# 87 "data/maps/Route101/scripts.pory"

# 88 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 89 "data/maps/Route101/scripts.pory"
	lockall
# 90 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 91 "data/maps/Route101/scripts.pory"
	closemessage
# 92 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 93 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 94 "data/maps/Route101/scripts.pory"
	releaseall
# 95 "data/maps/Route101/scripts.pory"
	end
# 96 "data/maps/Route101/scripts.pory"

# 97 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 98 "data/maps/Route101/scripts.pory"
	lockall
# 99 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 100 "data/maps/Route101/scripts.pory"
	closemessage
# 101 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 102 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route101/scripts.pory"
	releaseall
# 104 "data/maps/Route101/scripts.pory"
	end
# 105 "data/maps/Route101/scripts.pory"

# 106 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 107 "data/maps/Route101/scripts.pory"
	walk_up
# 108 "data/maps/Route101/scripts.pory"
	step_end
# 109 "data/maps/Route101/scripts.pory"

# 110 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 111 "data/maps/Route101/scripts.pory"
	walk_right
# 112 "data/maps/Route101/scripts.pory"
	step_end
# 113 "data/maps/Route101/scripts.pory"

# 114 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 115 "data/maps/Route101/scripts.pory"
	walk_down
# 116 "data/maps/Route101/scripts.pory"
	step_end
# 117 "data/maps/Route101/scripts.pory"

# 118 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 119 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 120 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 122 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 123 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 124 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 125 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 126 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 127 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 128 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 129 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 130 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 131 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 132 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 133 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 134 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 135 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 136 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 137 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 138 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 139 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 140 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 141 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 142 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 143 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 144 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 145 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 146 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 147 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 148 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 149 "data/maps/Route101/scripts.pory"
	step_end
# 150 "data/maps/Route101/scripts.pory"

# 151 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 152 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 153 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 154 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 155 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 156 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 158 "data/maps/Route101/scripts.pory"
	step_end
# 159 "data/maps/Route101/scripts.pory"

# 160 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 161 "data/maps/Route101/scripts.pory"
	step_end
# 162 "data/maps/Route101/scripts.pory"

# 163 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 164 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 165 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 166 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 167 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 168 "data/maps/Route101/scripts.pory"
	step_end
# 169 "data/maps/Route101/scripts.pory"

# 170 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 171 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 173 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 174 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 175 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 176 "data/maps/Route101/scripts.pory"
	step_end
# 177 "data/maps/Route101/scripts.pory"

# 178 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 179 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 180 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 181 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 182 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 183 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 184 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 185 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 186 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 187 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 188 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 189 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 190 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 191 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 192 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 194 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 195 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 196 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 197 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 198 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 199 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 200 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 201 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 202 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 203 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 204 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 205 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 206 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 207 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 208 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 209 "data/maps/Route101/scripts.pory"
	step_end
# 210 "data/maps/Route101/scripts.pory"

# 211 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 212 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 213 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 214 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 215 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 216 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 217 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 218 "data/maps/Route101/scripts.pory"
	step_end
# 219 "data/maps/Route101/scripts.pory"

# 220 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 221 "data/maps/Route101/scripts.pory"
	step_end
# 222 "data/maps/Route101/scripts.pory"

# 223 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 224 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 225 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 226 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 227 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 228 "data/maps/Route101/scripts.pory"
	step_end
# 229 "data/maps/Route101/scripts.pory"

# 230 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 231 "data/maps/Route101/scripts.pory"
	walk_up
# 232 "data/maps/Route101/scripts.pory"
	walk_up
# 233 "data/maps/Route101/scripts.pory"
	step_end
# 234 "data/maps/Route101/scripts.pory"

# 235 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 236 "data/maps/Route101/scripts.pory"
	walk_up
# 237 "data/maps/Route101/scripts.pory"
	walk_left
# 238 "data/maps/Route101/scripts.pory"
	walk_up
# 239 "data/maps/Route101/scripts.pory"
	step_end
# 240 "data/maps/Route101/scripts.pory"

# 241 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 242 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 243 "data/maps/Route101/scripts.pory"
	end
# 244 "data/maps/Route101/scripts.pory"

# 245 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 246 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 247 "data/maps/Route101/scripts.pory"
	end
# 248 "data/maps/Route101/scripts.pory"

# 249 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 250 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 251 "data/maps/Route101/scripts.pory"
	end
# 252 "data/maps/Route101/scripts.pory"

# 253 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 254 "data/maps/Route101/scripts.pory"
	lock
# 255 "data/maps/Route101/scripts.pory"
	faceplayer
# 256 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 257 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 258 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 259 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 260 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
# 261 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 262 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 263 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 264 "data/maps/Route101/scripts.pory"
	waitstate
# 265 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
# 266 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 267 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 268 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 269 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 270 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 271 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 272 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 273 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 274 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 275 "data/maps/Route101/scripts.pory"
	checkplayergender
# 276 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 277 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 278 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 279 "data/maps/Route101/scripts.pory"
	waitstate
# 280 "data/maps/Route101/scripts.pory"
	release
# 281 "data/maps/Route101/scripts.pory"
	end
# 282 "data/maps/Route101/scripts.pory"

# 283 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 284 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 285 "data/maps/Route101/scripts.pory"
	return
# 286 "data/maps/Route101/scripts.pory"

# 287 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 288 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 289 "data/maps/Route101/scripts.pory"
	return
# 290 "data/maps/Route101/scripts.pory"

# 291 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 292 "data/maps/Route101/scripts.pory"
	walk_right
# 293 "data/maps/Route101/scripts.pory"
	step_end
# 294 "data/maps/Route101/scripts.pory"

# 295 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 296 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 297 "data/maps/Route101/scripts.pory"

# 298 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 299 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 300 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 301 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 302 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 303 "data/maps/Route101/scripts.pory"

# 304 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 305 "data/maps/Route101/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 306 "data/maps/Route101/scripts.pory"
	.string "Don't leave me like this!$"
# 307 "data/maps/Route101/scripts.pory"

# 308 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 309 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 310 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 311 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 312 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 313 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 314 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 315 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 316 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 317 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 318 "data/maps/Route101/scripts.pory"

# 319 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 320 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 321 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 322 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 323 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 324 "data/maps/Route101/scripts.pory"

# 325 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 326 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 327 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 328 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 329 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 330 "data/maps/Route101/scripts.pory"

# 331 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 332 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 333 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"

BugCatcherDennis_Text_0:
# 5 "data/maps/Route101/scripts.pory"
	.string "You just got a Pokemon, didn't you?\p"
	.string "Yay! That means I'm your first\n"
	.string "opponent!$"

BugCatcherDennis_Text_1:
# 5 "data/maps/Route101/scripts.pory"
	.string "It seems I was your first victory, too...$"

BugCatcherDennis_Text_2:
# 6 "data/maps/Route101/scripts.pory"
	.string "Wow, you're tough!$"

LassEmma_Text_0:
# 11 "data/maps/Route101/scripts.pory"
	.string "Isn't it so nice out? It puts me in the\n"
	.string "mood to battle!$"

LassEmma_Text_1:
# 11 "data/maps/Route101/scripts.pory"
	.string "I'm still happy to be out here!$"

LassEmma_Text_2:
# 12 "data/maps/Route101/scripts.pory"
	.string "Thanks for sharing this moment with me!$"
