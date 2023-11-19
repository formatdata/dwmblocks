//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"^c#42be65^ ", "wlan-bar",                             1,    0},
	{"^d^ ^c#ff7eb6^", "bar | awk '{ print $1 }'",					1,		0},
	{" ", "bar | awk '{ print $2 }'",					1,		0},
	{"^d^ ^c#be95ff^", "bar | awk '{ print $3}'",					1,		0},
	{" ", "bar | awk '{ print $4}'",					1,		0},
	{"^d^ ^c#78a9ff^󰥔  ", "date '+%H:%M '",					        1,		0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
