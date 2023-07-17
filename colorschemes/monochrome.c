// this does not feel like monochrome but whatever, gotta recheck
static const char *colorname[] = {
	/* 8 normal colors */
	"#606060", // black
	"#ec8989", // red
	"#c9d36a", // green
	"#ffe6b5", // yellow
	"#8abae1", // blue
	"#e1bee9", // magenta
	"#9aafe6", // cyan
	"#D8DEE9", // white

	/* 8 bright colors */
	"#606060", // black
	"#ec8989", // red
	"#c9d36a", // green
	"#ffe6b5", // yellow
	"#8abae1", // blue
	"#e1bee9", // magenta
	"#9aafe6", // cyan
	"#D8DEE9", // white

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#bfc5d0", // cursor
	"#424242",
	"#D8DEE9", /* default foreground colour */
	"#101010", /* default background colour */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
