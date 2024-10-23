SymphoCity_House1_TeachingYamper::
# 3 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 4 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox SymphoCity_House1_TeachingYamper_Text_0
# 7 "data/maps/OldaleTown_House1/scripts.pory"
	faceplayer
# 8 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox SymphoCity_House1_TeachingYamper_Text_1
# 9 "data/maps/OldaleTown_House1/scripts.pory"
	release
	end


SymphoCity_House1_WeHaveToGo::
# 15 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 16 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox SymphoCity_House1_WeHaveToGo_Text_0
# 17 "data/maps/OldaleTown_House1/scripts.pory"
	release
	end


# 21 "data/maps/OldaleTown_House1/scripts.pory"

# 22 "data/maps/OldaleTown_House1/scripts.pory"
OldaleTown_House1_MapScripts::
# 23 "data/maps/OldaleTown_House1/scripts.pory"
	.byte 0
# 24 "data/maps/OldaleTown_House1/scripts.pory"

# 25 "data/maps/OldaleTown_House1/scripts.pory"
OldaleTown_House1_EventScript_Woman::
# 26 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_Text_LeftPokemonGoesOutFirst, MSGBOX_NPC
# 27 "data/maps/OldaleTown_House1/scripts.pory"
	end
# 28 "data/maps/OldaleTown_House1/scripts.pory"

# 29 "data/maps/OldaleTown_House1/scripts.pory"
OldaleTown_House1_Text_LeftPokemonGoesOutFirst:
# 30 "data/maps/OldaleTown_House1/scripts.pory"
	.string "When a POKéMON battle starts, the one\n"
# 31 "data/maps/OldaleTown_House1/scripts.pory"
	.string "at the left of the list goes out first.\p"
# 32 "data/maps/OldaleTown_House1/scripts.pory"
	.string "So, when you get more POKéMON in your\n"
# 33 "data/maps/OldaleTown_House1/scripts.pory"
	.string "party, try switching around the order\l"
# 34 "data/maps/OldaleTown_House1/scripts.pory"
	.string "of your POKéMON.\p"
# 35 "data/maps/OldaleTown_House1/scripts.pory"
	.string "It could give you an advantage.$"

SymphoCity_House1_TeachingYamper_Text_0:
# 4 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Yamper, sit!\p"
	.string "Yamper, roll over!\p"
	.string "Yamper, use Tail Whip!$"

SymphoCity_House1_TeachingYamper_Text_1:
# 8 "data/maps/OldaleTown_House1/scripts.pory"
	.string "My Yamper is so well trained!$"

SymphoCity_House1_WeHaveToGo_Text_0:
# 16 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Honey, hurry up! We have to go!$"
