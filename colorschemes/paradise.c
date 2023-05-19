static const char *colorname[] = {
	/* 8 normal colors */
	"#181818", // black
	"#B86467", // red
	"#8D987E", // green
	"#DABD8D", // yellow
	"#8EA5BA", // blue
	"#AB89B2", // magenta
	"#8BA8A4", // cyan
	"#E9E4E4", // white

	/* 8 bright colors */
	"#181818", // black
	"#B86467", // red
	"#8D987E", // green
	"#DABD8D", // yellow
	"#8EA5BA", // blue
	"#AB89B2", // magenta
	"#8BA8A4", // cyan
	"#E9E4E4", // white

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#404040", // cursor
	"#505050",
	"#E9E4E4", /* default foreground colour */
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
