static const char *colorname[] = {
	/* 8 normal colors */
	"#4c4c4c",
	"#cf6a4c",
	"#99ad6a",
	"#fad07a",
	"#8197bf",
	"#ea94ea",
	"#8fbfdc",
	"#e8e8d3",

	/* 8 bright colors */
	"#4c4c4c",
	"#cf6a4c",
	"#99ad6a",
	"#fad07a",
	"#8197bf",
	"#ea94ea",
	"#8fbfdc",
	"#e8e8d3",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#d9d9c4", // cursor
	"#474747", // reverse cursor
	"#e8e8d3", /* default foreground colour */
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
