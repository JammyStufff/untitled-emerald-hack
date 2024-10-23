Lab_ItsJammyOhMyGod::
# 3 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 4 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox JammyText
# 5 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	return


Lab_ComplainingScientist::
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 11 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 12 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Lab_ComplainingScientist_2
# 19 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ScientistTest2
Lab_ComplainingScientist_1:
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	return

Lab_ComplainingScientist_2:
# 14 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ScientistTest1
# 15 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto Lab_ComplainingScientist_1


Lab_ProfessorMissionStart::
# 26 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 27 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ProfessorTalking1
# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 6, ProfessorFaceYou
# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ProfessorTalking2, MSGBOX_YESNO
Lab_ProfessorMissionStart_2:
# 31 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Lab_ProfessorMissionStart_3
# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ProfessorTalking3
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 6, ProfessorWalkToStarters1
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 6, ProfessorWalkToStarters2
# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFollowProfessor
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ProfessorTalking4
# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_BIRCH_LAB_STATE, 1
# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	end

Lab_ProfessorMissionStart_3:
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_ProfessorMissionStart_Text_0, MSGBOX_YESNO
	goto Lab_ProfessorMissionStart_2


# 74 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
ProfessorFaceYou:
# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_down
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end

# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
ProfessorWalkToStarters1:
# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end

# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
ProfessorWalkToStarters2:
# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end

# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
PlayerFollowProfessor:
# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end

chooseCroagunk::
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox chooseCroagunk_Text_0, MSGBOX_YESNO
# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq chooseCroagunk_2
chooseCroagunk_1:
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	return

chooseCroagunk_2:
# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CROAGUNK, 10, ITEM_NONE
# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox chooseCroagunk_Text_1
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 10
# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_PICKED_STARTER
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_STARTER_MON, 0
# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto chooseCroagunk_1


chooseMurkrow::
# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox chooseMurkrow_Text_0, MSGBOX_YESNO
# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq chooseMurkrow_2
chooseMurkrow_1:
# 165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	return

chooseMurkrow_2:
# 156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_MURKROW, 10, ITEM_NONE
# 158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox chooseMurkrow_Text_1
# 160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 8
# 161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_PICKED_STARTER
# 162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_STARTER_MON, 1
# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto chooseMurkrow_1


chooseDwebble::
# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox chooseDwebble_Text_0, MSGBOX_YESNO
# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq chooseDwebble_2
chooseDwebble_1:
# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	return

chooseDwebble_2:
# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_DWEBBLE, 10, ITEM_NONE
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox chooseDwebble_Text_1
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 9
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_PICKED_STARTER
# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_STARTER_MON, 2
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto chooseDwebble_1


NicknamePartyMon::
# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_2
NicknamePartyMon_1:
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_BIRCH_LAB_STATE, 1
# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfessorMissionDeclare
	return

NicknamePartyMon_2:
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyMon_1


ProfessorMissionDeclare::
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ProfessorMissionDeclare_Text_0
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ProfessorMissionDeclare_Text_1
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	end


Lab_ProfessorInteract::
# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_BIRCH_LAB_STATE
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, Lab_ProfessorInteract_3
# 223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, Lab_ProfessorInteract_4
Lab_ProfessorInteract_1:
# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	end

Lab_ProfessorInteract_3:
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_ProfessorInteract_Text_0
	goto Lab_ProfessorInteract_1

Lab_ProfessorInteract_4:
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_ProfessorInteract_Text_1
	goto Lab_ProfessorInteract_1


Lab_GetBackHereBitch::
# 232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Lab_GetBackHereBitch_Text_0
# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerGetBackHere
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	end


# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
PlayerGetBackHere:
# 242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end

# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_AIDE, 1
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BIRCH, 2
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_RIVAL, 3
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_CYNDAQUIL, 4
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_TOTODILE, 5
# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_CHIKORITA, 6
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_MapScripts::
# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_OnFrame
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.byte 0
# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ State descriptions for VAR_DEX_UPGRADE_JOHTO_STARTER_STATE
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 1: Beat Elite Four, Dex upgrade ready
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 2: Received National Dex
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 3: Left lab after receiving National Dex
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 4: Entered lab after catching all Hoenn mons
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 5: Birch told player to choose Johto starter
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 6: Chose Johto starter
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ State descriptions for VAR_BIRCH_LAB_STATE
# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 1: Never occurs
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 2: Chose starter
# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 3: Received starter in lab
# 270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 4: Defeated rival on Route 103
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 5: Received pokedex
# 272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnTransition:
# 274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout
# 277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter
# 279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter::
# 282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter
# 284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter::
# 289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4
# 290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout::
# 293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout::
# 297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnWarp:
# 303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter
# 304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnFrame:
# 313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 0, Lab_ProfessorMissionStart
# 314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter::
# 317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade::
# 321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCH
# 323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_NORTH
# 325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_RIVAL, 5, 5
# 326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCH, DIR_SOUTH
# 327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCH, 6, 4
# 328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_AIDE, DIR_EAST
# 329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_AIDE, 10, 10
# 330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject::
# 333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters::
# 337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_CYNDAQUIL
# 338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_TOTODILE
# 339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_CHIKORITA
# 340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_CYNDAQUIL, DIR_SOUTH
# 342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_CYNDAQUIL, 8, 4
# 343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_TOTODILE, DIR_SOUTH
# 344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_TOTODILE, 9, 4
# 345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_CHIKORITA, DIR_SOUTH
# 346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_CHIKORITA, 10, 4
# 347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCH, DIR_SOUTH
# 348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCH, 6, 4
# 349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_EAST
# 350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_RIVAL, 5, 5
# 351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ The starter is technically given prior to this on Route 101 by special ChooseStarter
# 354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ This is just where the game tells you its yours and lets you nickname it
# 355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent::
# 356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon
# 359 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 360 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon, MSGBOX_YESNO
# 363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter
# 364 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 367 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter::
# 368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_0x8004, 0
# 369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 370 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 373 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival::
# 374 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival, MSGBOX_YESNO
# 375 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 377 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival::
# 380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou, MSGBOX_DEFAULT
# 381 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival::
# 387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay, MSGBOX_YESNO
# 388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 391 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent::
# 393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex
# 395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex
# 397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex:
# 400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex::
# 410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational, MSGBOX_DEFAULT
# 413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes
# 415 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 425 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterRight
# 426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 427 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 428 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 429 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment
# 430 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment
# 431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_PC_ON
# 432 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitse
# 433 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex
# 435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 438 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 439 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone, MSGBOX_DEFAULT
# 440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 441 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
# 442 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 449 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 450 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_SCOTT_BF_CALL_STEP_COUNTER, 0
# 452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 453 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 454 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment::
# 457 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool, MSGBOX_DEFAULT
# 458 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 459 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment::
# 462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe, MSGBOX_DEFAULT
# 463 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 465 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 466 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes:
# 467 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 468 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 469 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 470 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 475 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 476 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 477 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 479 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 480 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 481 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 482 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_up
# 484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 485 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 486 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex:
# 487 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 488 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 490 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 493 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 494 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 496 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 498 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter::
# 499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter
# 501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 502 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon, MSGBOX_DEFAULT
# 503 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5
# 504 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 505 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 506 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 507 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter:
# 508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 511 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 512 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 513 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 514 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 516 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 517 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 518 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter
# 521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_BIRCH_AIDE_MET, LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet
# 522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork, MSGBOX_DEFAULT
# 523 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_BIRCH_AIDE_MET
# 524 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 525 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet::
# 528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork, MSGBOX_DEFAULT
# 529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 531 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter::
# 533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo, MSGBOX_DEFAULT
# 534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
# 538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil, MSGBOX_YESNO
# 544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil
# 546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 548 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
# 549 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 550 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 552 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile, MSGBOX_YESNO
# 555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 556 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile
# 557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
# 560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 563 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita, MSGBOX_YESNO
# 566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita
# 568 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 570 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter::
# 571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone, MSGBOX_DEFAULT
# 572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 575 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime::
# 576 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 577 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable, MSGBOX_DEFAULT
# 578 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 580 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 581 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil::
# 582 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 583 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CYNDAQUIL
# 584 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty
# 586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC
# 587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 588 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 590 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty::
# 592 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CYNDAQUIL
# 594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 598 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC::
# 602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CYNDAQUIL
# 604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC::
# 611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil::
# 616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 620 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 621 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 622 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile::
# 623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TOTODILE
# 625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty
# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC
# 628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty::
# 633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 634 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_TOTODILE
# 635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 638 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 642 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC::
# 643 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 644 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_TOTODILE
# 645 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 647 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 648 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 649 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 650 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 651 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC::
# 652 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 654 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 655 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 656 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile::
# 657 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 658 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 659 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 660 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 661 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 662 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 663 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita::
# 664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 665 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHIKORITA
# 666 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 667 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty
# 668 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC
# 669 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 670 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 671 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 673 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty::
# 674 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CHIKORITA
# 676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 677 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 678 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 680 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 681 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 682 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 683 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC::
# 684 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 685 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CHIKORITA
# 686 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 687 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 688 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 689 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 690 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 691 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 692 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC::
# 693 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 694 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 695 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 696 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 697 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita::
# 698 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 699 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 700 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 701 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 702 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 703 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 704 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter::
# 705 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 706 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter
# 707 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 708 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 709 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 710 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 711 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
# 712 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 713 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 714 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon
# 715 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting
# 716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HAS_MATCH_CALL, LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 717 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_ENABLE_PROF_BIRCH_MATCH_CALL, EventScript_RegisterProfBirch
# 718 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 719 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 720 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 721 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon::
# 722 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon, MSGBOX_DEFAULT
# 723 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 724 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 725 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 726 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting::
# 727 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 728 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 729 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 730 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister::
# 732 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380, ProfBirch_EventScript_RatePokedexOrRegister
# 733 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, ProfBirch_EventScript_RatePokedexOrRegister
# 734 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, ProfBirch_EventScript_RatePokedexOrRegister
# 735 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_BIRCH_LAB_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait
# 736 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome, MSGBOX_DEFAULT
# 737 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 738 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 739 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 740 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
EventScript_RegisterProfBirch::
# 741 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_BirchRegisterCall, MSGBOX_DEFAULT
# 742 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 743 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 744 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 745 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_RegisteredBirch, MSGBOX_DEFAULT
# 746 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 747 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 748 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 749 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 750 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 751 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 752 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 753 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 754 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex::
# 755 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex, MSGBOX_DEFAULT
# 756 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
# 757 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 758 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 759 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer
# 760 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 761 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 762 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 763 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 764 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls
# 765 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls
# 766 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 767 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 768 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 769 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 770 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 771 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 772 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 773 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 774 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls::
# 775 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 776 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 777 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls
# 778 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls, MSGBOX_DEFAULT
# 779 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 0
# 780 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 781 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 782 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls::
# 783 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 784 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 785 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls
# 786 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls, MSGBOX_DEFAULT
# 787 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 1
# 788 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 789 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 790 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex::
# 791 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 792 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
# 793 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 794 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 795 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 796 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 797 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 798 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 799 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 800 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait::
# 801 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait, MSGBOX_DEFAULT
# 802 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 803 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 804 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 805 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls::
# 806 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull, MSGBOX_DEFAULT
# 807 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 808 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 809 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls::
# 810 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull, MSGBOX_DEFAULT
# 811 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 812 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 813 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer:
# 814 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 815 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_left
# 816 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 817 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 818 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 819 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
# 820 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 821 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 822 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 823 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 824 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 825 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans
# 826 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier
# 827 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork
# 828 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 829 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext
# 830 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext
# 831 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 832 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 833 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 834 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext::
# 835 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 836 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 837 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 838 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext::
# 839 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 840 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 841 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 842 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans::
# 843 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 844 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere
# 845 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly
# 846 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 847 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 848 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 849 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere::
# 850 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere, MSGBOX_DEFAULT
# 851 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 852 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 853 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly:
# 854 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly, MSGBOX_DEFAULT
# 855 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 856 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 857 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier::
# 858 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 859 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier
# 860 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier
# 861 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 862 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 863 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 864 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier::
# 865 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 866 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 867 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 868 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier::
# 869 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 870 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 871 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 872 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork::
# 873 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 874 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork
# 875 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork
# 876 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 877 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 878 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 879 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork::
# 880 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 881 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 882 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 883 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork::
# 884 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 885 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 886 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 887 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 888 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
# 889 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 890 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 891 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 892 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
# 893 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 894 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 895 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 896 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
# 897 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 898 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 899 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 900 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 901 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	pokenavcall LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall
# 902 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 903 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 904 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 905 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 906 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 907 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork:
# 908 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hunh? PROF. BIRCH?\p"
# 909 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF's away on fieldwork.\n"
# 910 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ergo, he isn't here.\p"
# 911 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, let me explain what fieldwork is.\p"
# 912 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It is to study things in the natural\n"
# 913 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "environment, like fields and mountains,\l"
# 914 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "instead of a laboratory.\p"
# 915 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF isn't one for doing desk work.\n"
# 916 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 917 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 918 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 919 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 920 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork:
# 921 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF isn't one for doing desk work.\n"
# 922 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 923 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 924 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 925 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 926 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo:
# 927 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH is studying the habitats\n"
# 928 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and distribution of POKéMON.\p"
# 929 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF enjoys {RIVAL}'s help, too.\n"
# 930 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's a lot of love there.$"
# 931 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 932 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon:
# 933 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: So, {PLAYER}{KUN}.\p"
# 934 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard so much about you from\n"
# 935 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your father.\p"
# 936 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard that you don't have your\n"
# 937 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "own POKéMON yet.\p"
# 938 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "But the way you battled earlier,\n"
# 939 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you pulled it off with aplomb!\p"
# 940 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I guess you have your father's blood\n"
# 941 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in your veins after all!\p"
# 942 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, yes. As thanks for rescuing me,\n"
# 943 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'd like you to have the POKéMON you\l"
# 944 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "used earlier.\p"
# 945 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}!$"
# 946 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 947 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon:
# 948 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: While you're at it, why not\n"
# 949 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "give a nickname to that {STR_VAR_1}?$"
# 950 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 951 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival:
# 952 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: If you work at POKéMON\n"
# 953 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and gain experience, I think you'll make\l"
# 954 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "an extremely good TRAINER.\p"
# 955 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, is also studying\n"
# 956 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON while helping me out.\p"
# 957 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN}, don't you think it might be\n"
# 958 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a good idea to go see {RIVAL}?$"
# 959 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 960 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou:
# 961 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Great!\n"
# 962 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} should be happy, too.\p"
# 963 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Get {RIVAL} to teach you what it\n"
# 964 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "means to be a TRAINER.$"
# 965 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 966 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay:
# 967 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, don't be that way.\n"
# 968 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You should go meet my kid.$"
# 969 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 970 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome:
# 971 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: {RIVAL}?\n"
# 972 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gone home, I think.\p"
# 973 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or maybe that kid's scrabbling around\n"
# 974 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in tall grass again somewhere…\p"
# 975 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you or your POKéMON get tired,\n"
# 976 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you should get some rest at home.$"
# 977 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 978 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex:
# 979 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, hi, {PLAYER}{KUN}!\p"
# 980 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I heard you beat {RIVAL} on\n"
# 981 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your first try. That's excellent!\p"
# 982 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL}'s been helping with my research\n"
# 983 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a long time.\p"
# 984 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} has an extensive history as\n"
# 985 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a TRAINER already.\p"
# 986 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, {PLAYER}{KUN}, I ordered this for my\n"
# 987 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "research, but I think you should have\l"
# 988 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this POKéDEX.$"
# 989 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 990 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex:
# 991 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"
# 992 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 993 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex:
# 994 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The POKéDEX is a high-tech\n"
# 995 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "tool that automatically makes a record\l"
# 996 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of any POKéMON you meet or catch.\p"
# 997 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, goes everywhere\n"
# 998 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "with it.\p"
# 999 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Whenever my kid catches a rare POKéMON\n"
# 1000 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and records its data in the POKéDEX,\l"
# 1001 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "why, {RIVAL} looks for me while I'm out\l"
# 1002 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "doing fieldwork, and shows me.$"
# 1003 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1004 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait:
# 1005 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Countless POKéMON\n"
# 1006 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "await you!\p"
# 1007 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Argh, I'm getting the itch to get out\n"
# 1008 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and do fieldwork again!$"
# 1009 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1010 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese:
# 1011 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Oh, wow, {PLAYER}{KUN}!\n"
# 1012 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You got a POKéDEX, too!\p"
# 1013 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's great! Just like me!\n"
# 1014 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've got something for you, too!$"
# 1015 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1016 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls:
# 1017 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: It's fun if you can get a lot of\n"
# 1018 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON!\p"
# 1019 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to look all over the place\n"
# 1020 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "because I want different POKéMON.\p"
# 1021 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cute POKéMON, I'll catch\n"
# 1022 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "them with POKé BALLS!$"
# 1023 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1024 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull:
# 1025 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh? Your BAG's full.$"
# 1026 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1027 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:
# 1028 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: I wonder where I should go look\n"
# 1029 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for POKéMON next?$"
# 1030 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1031 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese:
# 1032 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Huh…\n"
# 1033 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So you got a POKéDEX, too.\p"
# 1034 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Well then, here.\n"
# 1035 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll give you these.$"
# 1036 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1037 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls:
# 1038 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: You know it's more fun to\n"
# 1039 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "have a whole bunch of POKéMON.\p"
# 1040 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to explore all over the place\n"
# 1041 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to find different POKéMON.\p"
# 1042 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cool POKéMON, you bet\n"
# 1043 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll try to get them with POKé BALLS.$"
# 1044 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1045 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull:
# 1046 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hey, your BAG's full.$"
# 1047 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1048 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext:
# 1049 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Where should I look for\n"
# 1050 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON next…$"
# 1051 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1052 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine:
# 1053 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a serious-looking machine.\n"
# 1054 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF must use this for research.$"
# 1055 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1056 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch:
# 1057 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a PC used for research.\n"
# 1058 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better not mess around with it.$"
# 1059 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1060 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon:
# 1061 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's crammed with books on POKéMON.$"
# 1062 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1063 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead:
# 1064 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a book that's too hard to read.$"
# 1065 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1066 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational:
# 1067 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Now…\p"
# 1068 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN} and {RIVAL}, I've had the two\n"
# 1069 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of you help me study POKéMON.\p"
# 1070 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Thanks to your help, new facts\n"
# 1071 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "are coming to light.\p"
# 1072 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It appears that in the HOENN region,\n"
# 1073 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "there are also POKéMON from other\l"
# 1074 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "regions.\p"
# 1075 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It goes to show how rich and varied\n"
# 1076 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the natural environments of HOENN\l"
# 1077 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "happen to be.\p"
# 1078 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's why I think it's necessary for\n"
# 1079 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "me to upgrade your POKéDEX to\l"
# 1080 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL Mode.\p"
# 1081 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, let me see your POKéDEX units.$"
# 1082 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1083 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool:
# 1084 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Eheheh!\p"
# 1085 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's so cool that even my POKéDEX\n"
# 1086 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "is getting updated!\p"
# 1087 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's because you went out and caught\n"
# 1088 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "so many POKéMON, {PLAYER}{KUN}!$"
# 1089 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1090 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe:
# 1091 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: I went out all over HOENN\n"
# 1092 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and checked out POKéMON.\p"
# 1093 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can thank me for getting\n"
# 1094 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL Mode POKéDEX.\p"
# 1095 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yep, you're lucky, {PLAYER}!$"
# 1096 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1097 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone:
# 1098 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Okay, all done!$"
# 1099 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational:
# 1101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}'s POKéDEX was upgraded\n"
# 1102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to the NATIONAL Mode!$"
# 1103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2:
# 1105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: But listen.\n"
# 1106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've become the CHAMPION,\l"
# 1107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 1108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 1109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is POKéMON.\p"
# 1110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 1111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 1112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork:
# 1114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: I think I'll take a short break\n"
# 1115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from fieldwork.\p"
# 1116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I think I'll help the PROF here for\n"
# 1117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a while.$"
# 1118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork:
# 1120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: For the time being,\n"
# 1121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm taking a break from fieldwork.\p"
# 1122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll be helping out the PROF here\n"
# 1123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a while.$"
# 1124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon:
# 1126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 1127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Let's have a look at your POKéDEX.\p"
# 1128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 1129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\p"
# 1130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yes, there's no doubt about it.\p"
# 1131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You really have completed the HOENN\n"
# 1132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "region's POKéDEX.\p"
# 1133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's more than just impressive.\p"
# 1134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I have a gift for you.\p"
# 1135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Consider it my show of appreciation\n"
# 1136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for the fantastic work you've done.\p"
# 1137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My gift is a rare POKéMON only found\n"
# 1138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in another region!\p"
# 1139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 1140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three POKéMON!$"
# 1141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon:
# 1143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: These are rare POKéMON\n"
# 1144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "only found in another region!\p"
# 1145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 1146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three POKéMON!$"
# 1147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil:
# 1149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The FIRE POKéMON\n"
# 1150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CYNDAQUIL caught your eye!\p"
# 1151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You're as sharp as ever!\p"
# 1152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So the CYNDAQUIL is your choice?$"
# 1153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile:
# 1155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The WATER POKéMON\n"
# 1156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "TOTODILE is your choice!\p"
# 1157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You know how to pick a good one.\p"
# 1158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the TOTODILE?$"
# 1159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita:
# 1161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The GRASS POKéMON\n"
# 1162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CHIKORITA is your choice!\p"
# 1163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You sure know what you're doing.\p"
# 1164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the CHIKORITA?$"
# 1165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable:
# 1167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Take your time before\n"
# 1168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you decide.\p"
# 1169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "They're all invaluable POKéMON.$"
# 1170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 1172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PickedFinePokemon:
# 1173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: I see!\n"
# 1174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You picked a fine POKéMON!$"
# 1175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter:
# 1177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
# 1178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from PROF. BIRCH!$"
# 1179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 1181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_NicknameJohtoStarter:
# 1182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Want to give a nickname to\n"
# 1183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the {STR_VAR_1} you received?$"
# 1184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:
# 1186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Listen, {PLAYER}{KUN}.\n"
# 1187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've completed the HOENN POKéDEX,\l"
# 1188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 1189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 1190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is POKéMON.\p"
# 1191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 1192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 1193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:
# 1195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You received the promised POKéMON.\n"
# 1196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better leave the others alone.$"
# 1197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 1199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontHaveAnyRoomForPokemon:
# 1200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, you don't have any room for\n"
# 1201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this POKéMON.$"
# 1202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere:
# 1204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, after this…\n"
# 1205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What are you going to do?\p"
# 1206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Are you going to keep battling\n"
# 1207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and sharpening your skills?\p"
# 1208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or are you going to try filling\n"
# 1209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL POKéDEX?\p"
# 1210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm staying here to help the PROF.$"
# 1211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly:
# 1213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Rather than collecting\n"
# 1214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON, I prefer slowly and \l"
# 1215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "steadily raising the one I chose.$"
# 1216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier:
# 1218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\n"
# 1219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone to that place,\l"
# 1220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 1221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier:
# 1223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}!\n"
# 1224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone out to that place,\l"
# 1225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 1226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall:
# 1228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 1229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Beep!\p"
# 1230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "SCOTT: Hi, hi, {PLAYER}!\n"
# 1231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's me, SCOTT.\p"
# 1232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm aboard the S.S. TIDAL now.\n"
# 1233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It feels great to be on the sea!\p"
# 1234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "By the way…\p"
# 1235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's this place that I'd like to\n"
# 1236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "invite you to for a visit.\p"
# 1237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you're interested, board a ferry\n"
# 1238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "at either SLATEPORT or LILYCOVE.\p"
# 1239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll fill you in on the details when\n"
# 1240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "we meet. I'll be waiting!\p"
# 1241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 1242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Click!$"

Lab_ProfessorMissionStart_Text_0:
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "...you wanna...go home, right?$"

chooseCroagunk_Text_0:
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Croagunk slouches, glaring at you. Take\n"
	.string "it?$"

chooseCroagunk_Text_1:
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Croagunk playfully jabs you in the hip!\n"
	.string "You fight the resulting nausea to the\l"
	.string "best of your ability.$"

chooseMurkrow_Text_0:
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Murkrow eyes your bracelet\n"
	.string "suspiciously and chitters to itself.\l"
	.string "Take it?$"

chooseMurkrow_Text_1:
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Murkrow happily perches on your\n"
	.string "shoulder! Your wallet feels\l"
	.string "ever-so-slightly lighter.$"

chooseDwebble_Text_0:
# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Dwebble absentmindedly drools, melting\n"
	.string "a hole in the floor. The professor looks\l"
	.string "rather eager to be rid of this Pokemon.\l"
	.string "Take it?$"

chooseDwebble_Text_1:
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Dwebble beckons you to pick it up!\n"
	.string "Unfortunately, it's just as heavy as it\l"
	.string "looks.$"

NicknamePartyMon_Text_0:
# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Give it a nickname?$"

ProfessorMissionDeclare_Text_0:
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Beautiful! I think you two will make a\n"
	.string "great pair.\p"
	.string "And here, have these. They'll help for\n"
	.string "catching more Pokemon!$"

ProfessorMissionDeclare_Text_1:
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Now, listen close {PLAYER}. This\n"
	.string "island doesn't have a Pokemon League\l"
	.string "like the mainland.\p"
	.string "Instead, we have the Grande Scavenger\n"
	.string "Hunt! Sounds intriguing, yes?\p"
	.string "I'm sure you're bored of hearing this\n"
	.string "geezer talk, though, so I'll let the\l"
	.string "officials explain it to you. All you need\l"
	.string "to do right now is head to the right of\l"
	.string "this town, down Route 1. It's a straight\l"
	.string "path from there to Sympho City, where\l"
	.string "you can sign up.\p"
	.string "Good luck, {PLAYER}! If you manage to\n"
	.string "win, I'd be honored to accompany you to\l"
	.string "Mystiq Mountain!\p"
	.string "Now...I have so many reports to catch up\n"
	.string "on...$"

Lab_ProfessorInteract_Text_0:
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Don't be shy! Pick one!$"

Lab_ProfessorInteract_Text_1:
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Go on, {PLAYER}! I believe in you!$"

Lab_GetBackHereBitch_Text_0:
# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Where are you going?! Come on, you don't\n"
	.string "get this opportunity every day!$"

JammyText::
# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "This little guy is working hard on the\n"
	.string "rest of the rom hack...\p"
	.string "Best not to interrupt him!$"

ScientistTest1::
# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've spent nearly 5 hours trying to\n"
	.string "debug this script...\p"
	.string "STRAIGHT!$"

ScientistTest2::
# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Don't end up like me, kid.\p"
	.string "I could've been a Pokemon Champion, but\n"
	.string "noooooo! I HAD to get a computer\l"
	.string "science degree!$"

ProfessorTalking1::
# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hm...click click...so, click..the last\n"
	.string "thing you remember is waking up next to\l"
	.string "a mysterious, onion-like Pokemon...$"

ProfessorTalking2::
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Could the creature that we saw be...the\n"
	.string "mythical Time Travel Pokemon, Celebi?\p"
	.string "If so, there's a likely chance that you\n"
	.string "were taken from your timeline and\l"
	.string "brought here, for whatever reason.\p"
	.string "Celebi is said to be a playful and\n"
	.string "mischievous spirit, perhaps it's trying\l"
	.string "to play with you?\p"
	.string "The only problem is that it has entered\n"
	.string "Mystiq Mountain, an extremely\l"
	.string "dangerous place that only highly\l"
	.string "skilled Pokemon Trainers can enter.\p"
	.string "Do not fret, however! Unlike the\n"
	.string "mainland of this region, becoming a high\l"
	.string "level Pokemon trainer isn't too\l"
	.string "difficult as long as you have the\l"
	.string "skills! Do you think you're up to it?$"

ProfessorTalking3::
# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Perfect!\p"
	.string "But before we can do that, you need a\n"
	.string "Pokemon. Follow me!$"

ProfessorTalking4::
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}, meet Croagunk, Dwebble, and\n"
	.string "Murkrow. They're the most energetic,\l"
	.string "battle hungry Pokemon that I care for!\l"
	.string "Go ahead and pick the one most\l"
	.string "appealing to you!$"
