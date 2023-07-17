static const char *colorname[] = {
	/* 8 normal colors */
	"#767676",
	"#d75f5f",
	"#87AF87",
	"#AFAF87",
	"#87AFD7",
	"#AF87AF",
	"#87afaf",
	"#bcbcbc",

	/* 8 bright colors */
	"#767676",
	"#d75f5f",
	"#87AF87",
	"#AFAF87",
	"#87AFD7",
	"#AF87AF",
	"#87afaf",
	"#bcbcbc",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#9e9e9e", // cursor
	"#505050",
	"#bcbcbc", /* default foreground colour */
	"#1C1C1C", /* default background colour */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
