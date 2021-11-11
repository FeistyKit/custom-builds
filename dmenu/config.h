/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int colorprompt = 1;                /* -p  option; if 1, prompt uses SchemeSel, otherwise SchemeNorm */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"mononokiNerdFont-10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
/* colours stolen from https://github.com/chriskempson/base16-vim/blob/master/colors/base16-gruvbox-dark-hard.vim */
/* ["#1d2021", "#1d2021"], */
/* ["#3c3836", "#3c3836"], */
/* ["#504945", "#504945"], */
/* ["#665c54", "#665c54"], */
/* ["#bdae93", "#bdae93"], */
/* ["#d5c4a1", "#d5c4a1"], */
/* ["#ebdbb2", "#ebdbb2"], */
/* ["#fbf1c7", "#fbf1c7"], */
/* ["#fb4934", "#fb4934"], */
/* ["#fe8019", "#fe8019"], */
/* ["#fabd2f", "#fabd2f"], */
/* ["#b8bb26", "#b8bb26"], */
/* ["#8ec07c", "#8ec07c"], */
/* ["#83a598", "#83a598"], */
/* ["#d3869b", "#d3869b"], */
/* ["#d65d0e", "#d65d0e"], */

// DMENU="dmenu_run -nb '#3c3836' -nf '#fbf1c7' -sb '#fb4934' -fn mononokiNerdFont-10"

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#ebdbb2", "#1d2021" } ,
	[SchemeSel]  = { "#ebdbb2", "#fb4934" },
 	[SchemeHp]   = { "#bbbbbb", "#1d2021" },
	[SchemeOut]  = { "#ebdbb2", "#b8bb26" },
	[SchemeMid]  = { "#eeeeee", "#3c3836" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
