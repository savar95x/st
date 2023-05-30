static const char *colorname[] = {
	/* 8 normal colors */
	"#7c6f64",
	//"#292929",
	"#fb4934",
	"#b8bb26",
	"#d79921",
	"#458588",
	"#b4bbc8",
	"#82b3a8",
	"#ebdbb2",

	/* 8 bright colors */
	"#7c6f64",
	//"#292929",
	"#fb4934",
	"#b8bb26",
	"#d79921",
	"#458588",
	"#b4bbc8",
	"#82b3a8",
	"#ebdbb2",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#bdae93", // cursor
	"#505050",
	"gray90", /* default foreground colour */
	"#282828", /* default background colour */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
