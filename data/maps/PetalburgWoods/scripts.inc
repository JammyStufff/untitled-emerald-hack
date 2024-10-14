# 1 "data/maps/PetalburgWoods/scripts.pory"

# 2 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 3 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0

# 6 "data/maps/PetalburgWoods/scripts.pory"
ProfFacePlayer:
# 8 "data/maps/PetalburgWoods/scripts.pory"
	face_down
	step_end

MeetProf::
# 34 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 35 "data/maps/PetalburgWoods/scripts.pory"
	applymovement 1, ProfFacePlayer
# 36 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 37 "data/maps/PetalburgWoods/scripts.pory"
	msgbox ProfIntro
# 38 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_MET_PROF
# 39 "data/maps/PetalburgWoods/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 2
# 40 "data/maps/PetalburgWoods/scripts.pory"
	addvar VAR_TEMP_0, 1
# 41 "data/maps/PetalburgWoods/scripts.pory"
	release
	return


ProfIntro::
# 11 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh! Pardon me, I just saw the strangest\n"
	.string "creature dart past me just now!\p"
	.string "Such a shame it's gone to Mystiq\n"
	.string "Mountain...only very high-level Pokemon\l"
	.string "trainers can go there.\p"
	.string "Say...you don't have any Pokemon, do\n"
	.string "you?\p"
	.string "Impossible! How did you even manage to\n"
	.string "get this far?\p"
	.string "Eh? You have no recollection?\p"
	.string "...\p"
	.string "You last remember being in Cordel Town?\n"
	.string "Why, isn't that town located in the\l"
	.string "mainland of this region? How did you\l"
	.string "manage to get here?\p"
	.string "Well, let's chat somewhere safer. Follow\n"
	.string "me to my lab, my Pokemon will keep us\l"
	.string "safe.$"
