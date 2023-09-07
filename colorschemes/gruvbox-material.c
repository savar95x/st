static const char *colorname[] = {
	/* 8 normal colors */
	"#5a524c", // black
	"#ea6962", // red
	"#a9b665", // green
	"#d8a657", // yellow
	"#7daea3", // blue
	"#d3869b", // magenta
	"#89b482", // cyan
	"#ddc7a1", // white

	/* 8 bright colors */
	"#5a524c", // black
	"#ea6962", // red
	"#a9b665", // green
	"#d8a657", // yellow
	"#7daea3", // blue
	"#d3869b", // magenta
	"#89b482", // cyan
	"#ddc7a1", // white

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#d4be98", // cursor
	"#505050",
	"#fbf1c7", /* default foreground colour */
	"#282828"/*#1B1F20*/, /* default background colour */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
