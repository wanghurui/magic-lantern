static char __module_string_a_name [] MODULE_STRINGS_SECTION = "Name";
static char __module_string_a_value[] MODULE_STRINGS_SECTION = "Expose To The Right";
static char __module_string_b_name [] MODULE_STRINGS_SECTION = "Author";
static char __module_string_b_value[] MODULE_STRINGS_SECTION = "a1ex";
static char __module_string_c_name [] MODULE_STRINGS_SECTION = "License";
static char __module_string_c_value[] MODULE_STRINGS_SECTION = "GPL";
static char __module_string_d_name [] MODULE_STRINGS_SECTION = "Summary";
static char __module_string_d_value[] MODULE_STRINGS_SECTION = "Expose To The Right - auto exposure that minimizes noise";
static char __module_string_e_name [] MODULE_STRINGS_SECTION = "Forum";
static char __module_string_e_value[] MODULE_STRINGS_SECTION = "http://www.magiclantern.fm/forum/index.php?topic=5693.0";
static char __module_string_f_name [] MODULE_STRINGS_SECTION = "Description";
static char __module_string_f_value[] MODULE_STRINGS_SECTION = 
    "ETTR is a techinque that optimizes your exposure for raw\n"
    "shooting, with the goal of minimizing noise without blowing the\n"
    "highlights.\n"
    "\n"
    "Auto ETTR will adjust the exposure for you until the histogram will\n"
    "touch the right side, but - whenever possible - without clipping.\n"
    "This will minimize image noise for your given set of restrictions\n"
    "(e.g. slowest shutter, max ISO, or what highlights can be clipped).\n"
    "\n"
    "You will usually have to darken the image in post (which is good).\n"
    "\n"
    "Tip: on the raw histogram you will see an ETTR hint that can be\n"
    "used for manually exposing the image.\n"
    "\n"
;
static char __module_string_g_name [] MODULE_STRINGS_SECTION = "Last update";
static char __module_string_g_value[] MODULE_STRINGS_SECTION = 
    "6abd21a on 2016-07-08 20:30:36 UTC by alex:\n"
    "ETTR: fix roundoff error when displaying next shutter speed in BU...\n"
;
static char __module_string_h_name [] MODULE_STRINGS_SECTION = "Build date";
static char __module_string_h_value[] MODULE_STRINGS_SECTION = "2020-05-10 06:42:20 UTC";
static char __module_string_i_name [] MODULE_STRINGS_SECTION = "Build user";
static char __module_string_i_value[] MODULE_STRINGS_SECTION = 
    "root@ubuntu\n"
    "\n"
;

#define MODULE_STRINGS() \
  MODULE_STRINGS_START() \
    MODULE_STRING(__module_string_a_name, __module_string_a_value) \
    MODULE_STRING(__module_string_b_name, __module_string_b_value) \
    MODULE_STRING(__module_string_c_name, __module_string_c_value) \
    MODULE_STRING(__module_string_d_name, __module_string_d_value) \
    MODULE_STRING(__module_string_e_name, __module_string_e_value) \
    MODULE_STRING(__module_string_f_name, __module_string_f_value) \
    MODULE_STRING(__module_string_g_name, __module_string_g_value) \
    MODULE_STRING(__module_string_h_name, __module_string_h_value) \
    MODULE_STRING(__module_string_i_name, __module_string_i_value) \
  MODULE_STRINGS_END()
