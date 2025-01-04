static const char *colorname[] = {
	/* 8 normal colors */
	// 20% desaturated colors
	"#867970", // black
	"#d67b76", // red
	"#a3ae6d", // green
	"#cba364", // yellow
	"#82a9a0", // blue
	"#cb8e9e", // magenta
	"#8daf87", // cyan
	"#d7c5a7", // white

	/* 8 bright colors */
	"#867970", // black
	"#d67b76", // red
	"#a3ae6d", // green
	"#cba364", // yellow
	"#82a9a0", // blue
	"#cb8e9e", // magenta
	"#8daf87", // cyan
	"#d7c5a7", // white

	/* og gruv mat colors
	"#867970", // black
	"#ea6962", // red
	"#a9b665", // green
	"#d8a657", // yellow
	"#7daea3", // blue
	"#d3869b", // magenta
	"#89b482", // cyan
	"#ddc7a1", // white

	30% desaturated colors
	"#867970", // black
	"#d67b76", // red
	"#a1aa71", // green
	"#c5a26a", // yellow
	"#84a79f", // blue
	"#c792a0", // magenta
	"#8eac89", // cyan
	"#d4c5aa", // white
	*/

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#d4be98", // cursor
	"#505050",
	"#fbf1c7", /* default foreground colour */
	"#202020"/*#1C2021 #1D2021 #282828*/, /* default background colour */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
