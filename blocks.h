//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"", "cat /tmp/timer 2>/dev/null", 1, 0},
	{"", "cat /tmp/current_song 2>/dev/null | sed 's/....$//'", 1, 0},
	{"", "[ -f /tmp/current_playlist ] && find \"$(cat /tmp/current_playlist)\" -printf ' %f'", 1, 0},
	{"", "date '+%a %b %-d %-H:%M'", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " │ ";
static unsigned int delimLen = 5;
