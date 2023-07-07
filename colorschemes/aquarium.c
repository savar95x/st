static const char *colorname[] = {
	/* 8 normal colors */
	"#4e4e58",
	"#ebb9b9",
	"#b1dba4",
	"#E6DFB8",
	"#CDDBF9",
  "#f6bbe7",
	"#b8dceb",
	"#ced4df",

	/* 8 bright colors */
	"#4e4e58",
	"#ebb9b9",
	"#b1dba4",
	"#E6DFB8",
	"#CDDBF9",
  "#f6bbe7",
	"#b8dceb",
	"#ced4df",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#bac0cb", // cursor
	"#505050",
	"#ced4df", /* default foreground colour */
	"#20202A", /* default background colour */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
