static const char *colorname[] = {
	/* 8 normal colors */
	"#232a2d",
	"#e57474",
	"#8ccf7e",
	"#e5c76b",
	"#67b0e8",
	"#c47fd5",
	"#6cbfbf",
	"#b3b9b8",

	/* 8 bright colors */
	"#232a2d",
	"#e57474",
	"#8ccf7e",
	"#e5c76b",
	"#67b0e8",
	"#c47fd5",
	"#6cbfbf",
	"#b3b9b8",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#b3b9b8", // cursor
	"#505050",
	"#dadada", /* default foreground colour */
	"#141b1e", /* default background colour */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
