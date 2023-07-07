static const char *colorname[] = {
	/* 8 normal colors */
	"#515558",
	"#c79595",
	"#aec795",
	"#c7c795",
	"#95aec7",
  "#ae95c7",
	"#9eb7d0",
	"#c7ccd1",

	/* 8 bright colors */
	"#515558",
	"#c79595",
	"#aec795",
	"#c7c795",
	"#95aec7",
  "#ae95c7",
	"#9eb7d0",
	"#c7ccd1",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#adb3ba", // cursor
	"#505050",
	"#c7ccd1", /* default foreground colour */
	"#181818", /* default background colour */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
