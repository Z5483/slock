/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#181818",     /* after initialization */
	[INPUT] =  "#181818",   /* during input */
	[FAILED] = "#ab4642",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
