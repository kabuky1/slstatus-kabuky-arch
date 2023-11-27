/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
        /* function format          argument */
	{ run_command, "%supd", "checkupdates | wc -l"},
        { run_command, " %spkg", "pacman -Q | wc -l"},
        { battery_perc, " %s%%", "BAT0"},
        { ram_used, " %s/", ""},
        { ram_total, "%s ", ""},
        { datetime, "%s", "%H:%M %b %d  " },
};
