static const char *colorname[] = {
	/* 8 normal colors */
	"#4c4c4c", // black
	"#AC8A8C", // red
	"#8AAC8B", // green
	"#ACA98A", // yellow
	"#8F8AAC", // blue
	"#AC8AAC", // magenta
	"#8AABAC", // cyan
	"#E7E7E7", // white

	/* 8 bright colors */
	"#4c4c4c", // black
	"#AC8A8C", // red
	"#8AAC8B", // green
	"#ACA98A", // yellow
	"#8F8AAC", // blue
	"#AC8AAC", // magenta
	"#8AABAC", // cyan
	"#E7E7E7", // white

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#404040", // cursor
	"#505050",
	"#F0F0F0", /* default foreground colour */
	"#0F0F0F", /* default background colour */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
