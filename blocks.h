//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"", "[ -f /tmp/stopwatch ] && date -u --date=\"@$(cat /tmp/stopwatch)\" +%T", 1, 0},
	{"", "cat /tmp/timer 2>/dev/null", 1, 0},
	{"", "cat /tmp/current_song 2>/dev/null | sed 's/....$//'", 1, 0},
	{"", "[ -f /tmp/current_playlist ] && basename \"$(cat /tmp/current_playlist)\" | sed -e 's/|//g' -e 's/^/ /'", 1, 0},
	{"", "date '+%a %b %-d %H:%M'", 5, 0},
#ifdef LAPTOP
	{"", "echo \"$(cat /sys/class/power_supply/BAT1/capacity)%$([ \"$(cat /sys/class/power_supply/BAT1/status)\" = \"Discharging\" ] && echo \" !\")\"", 3, 0},
#endif
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " │ ";
static unsigned int delimLen = 5;
