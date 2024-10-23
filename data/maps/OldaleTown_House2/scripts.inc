SymphoCity_House2_WatchingTV::
# 3 "data/maps/OldaleTown_House2/scripts.pory"
	lock
# 4 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox SymphoCity_House2_WatchingTV_Text_0
# 6 "data/maps/OldaleTown_House2/scripts.pory"
	release
	end


SymphoCity_House2_Fridge::
# 12 "data/maps/OldaleTown_House2/scripts.pory"
	lock
# 13 "data/maps/OldaleTown_House2/scripts.pory"
	random 4
SymphoCity_House2_Fridge_2:
# 14 "data/maps/OldaleTown_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SymphoCity_House2_Fridge_3
# 19 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox SymphoCity_House2_Fridge_Text_1
# 20 "data/maps/OldaleTown_House2/scripts.pory"
	release
	end

SymphoCity_House2_Fridge_3:
# 15 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox SymphoCity_House2_Fridge_Text_0
# 17 "data/maps/OldaleTown_House2/scripts.pory"
	addvar VAR_RESULT, -1
	goto SymphoCity_House2_Fridge_2


# 24 "data/maps/OldaleTown_House2/scripts.pory"

# 25 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_MapScripts::
# 26 "data/maps/OldaleTown_House2/scripts.pory"
	.byte 0
# 27 "data/maps/OldaleTown_House2/scripts.pory"

# 28 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_EventScript_Woman::
# 29 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTown_House2_Text_PokemonLevelUp, MSGBOX_NPC
# 30 "data/maps/OldaleTown_House2/scripts.pory"
	end
# 31 "data/maps/OldaleTown_House2/scripts.pory"

# 32 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_EventScript_Man::
# 33 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_NPC
# 34 "data/maps/OldaleTown_House2/scripts.pory"
	end
# 35 "data/maps/OldaleTown_House2/scripts.pory"

# 36 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_Text_PokemonLevelUp:
# 37 "data/maps/OldaleTown_House2/scripts.pory"
	.string "When POKéMON battle, they eventually\n"
# 38 "data/maps/OldaleTown_House2/scripts.pory"
	.string "level up and become stronger.$"
# 39 "data/maps/OldaleTown_House2/scripts.pory"

# 40 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon:
# 41 "data/maps/OldaleTown_House2/scripts.pory"
	.string "If the POKéMON with you become\n"
# 42 "data/maps/OldaleTown_House2/scripts.pory"
	.string "stronger, you'll be able to go farther\l"
# 43 "data/maps/OldaleTown_House2/scripts.pory"
	.string "away from here.$"

SymphoCity_House2_WatchingTV_Text_0:
# 4 "data/maps/OldaleTown_House2/scripts.pory"
	.string "I've been watching these guys fight for\n"
	.string "18 episodes straight now.\p"
	.string "I know this is what I came for, but man\n"
	.string "do I miss Dragonite Ball...$"

SymphoCity_House2_Fridge_Text_0:
# 15 "data/maps/OldaleTown_House2/scripts.pory"
	.string "Ugh, there's nothing good in the fridge\n"
	.string "right now...\p"
	.string "Maybe if I close it and check again...?$"

SymphoCity_House2_Fridge_Text_1:
# 19 "data/maps/OldaleTown_House2/scripts.pory"
	.string "Still nothing good...$"
