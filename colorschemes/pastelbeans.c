static const char *colorname[] = {
	/* 8 normal colors */
	"#525252",
	"#ff9da4",
	"#d1f1a9",
	"#ffe6b5",
	"#bbdaff",
  "#ebbbff",
	"#BBFFFF",
	"#e8e8d3",

	/* 8 bright colors */
	"#525252",
	"#ff9da4",
	"#d1f1a9",
	"#ffe6b5",
	"#bbdaff",
  "#ebbbff",
	"#BBFFFF",
	"#e8e8d3",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#d0e0e0", // cursor
	"#505050",
	"#eee8d3", /* default foreground colour */
	"#151515", /* default background colour */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
