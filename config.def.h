// use ipc functionality
static bool ipc = true;
// initially hide all bars
static bool hidden = false;
// initially draw all bars at the bottom
static bool bottom = false;
// hide vacant tags
static bool hide_vacant = false;
// vertical pixel padding above and below text
static uint32_t vertical_padding = 1;
// allow in-line color commands in status text
static bool status_commands = true;
// center title text
static bool center_title = false;
// use title space as status text element
static bool custom_title = false;
// scale
static uint32_t buffer_scale = 1;
// font
static char *fontstr = "JetBrains Mono:size=9";
// tag names
static char *tags_names[] = { "term", "util", "www", "docs", "comm", "media", "proc", "misc", "misc" };

// set 16-bit colors for bar
// 8-bit color can be converted to 16-bit color by simply duplicating values e.g
// 0x55 -> 0x5555, 0xf1 -> 0xf1f1
static pixman_color_t active_fg_color = { .red = 0xeeee, .green = 0xeeee, .blue = 0xeeee, .alpha = 0xffff, };
static pixman_color_t active_bg_color = { .red = 0x0000, .green = 0x5555, .blue = 0x7777, .alpha = 0xffff, };
static pixman_color_t occupied_fg_color = { .red = 0xeeee, .green = 0xeeee, .blue = 0xeeee, .alpha = 0xffff, };
static pixman_color_t occupied_bg_color = { .red = 0x2222, .green = 0x2222, .blue = 0x2222, .alpha = 0xffff, };
static pixman_color_t inactive_fg_color = { .red = 0xbbbb, .green = 0xbbbb, .blue = 0xbbbb, .alpha = 0xffff, };
static pixman_color_t inactive_bg_color = { .red = 0x2222, .green = 0x2222, .blue = 0x2222, .alpha = 0xffff, };
static pixman_color_t urgent_fg_color = { .red = 0x2222, .green = 0x2222, .blue = 0x2222, .alpha = 0xffff, };
static pixman_color_t urgent_bg_color = { .red = 0xeeee, .green = 0xeeee, .blue = 0xeeee, .alpha = 0xffff, };
static pixman_color_t middle_bg_color = { .red = 0x2222, .green = 0x2222, .blue = 0x2222, .alpha = 0xffff, };
static pixman_color_t middle_bg_color_selected = { .red = 0x0000, .green = 0x5555, .blue = 0x7777, .alpha = 0xffff, };
