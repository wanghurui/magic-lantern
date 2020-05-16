static char __module_string_a_name [] MODULE_STRINGS_SECTION = "Name";
static char __module_string_a_value[] MODULE_STRINGS_SECTION = "MLV Player";
static char __module_string_b_name [] MODULE_STRINGS_SECTION = "License";
static char __module_string_b_value[] MODULE_STRINGS_SECTION = "GPL";
static char __module_string_c_name [] MODULE_STRINGS_SECTION = "Summary";
static char __module_string_c_value[] MODULE_STRINGS_SECTION = "Play MLV/RAW";
static char __module_string_d_name [] MODULE_STRINGS_SECTION = "Authors";
static char __module_string_d_value[] MODULE_STRINGS_SECTION = "g3gg0, a1ex, ayshih";
static char __module_string_e_name [] MODULE_STRINGS_SECTION = "Forum";
static char __module_string_e_value[] MODULE_STRINGS_SECTION = "http://www.magiclantern.fm/forum/index.php?topic=9062.0";
static char __module_string_f_name [] MODULE_STRINGS_SECTION = "Description";
static char __module_string_f_value[] MODULE_STRINGS_SECTION = 
    "Plays Magic Lantern video files (both MLV and RAW). You can\n"
    "select videos for playback in the file_man module, or you can\n"
    "press the PLAY key in LV to play the most recent recording.\n"
    "\n"
    " *  \"all\": play every video frame\n"
    " *  \"exact\": drop video frames to match recorded FPS\n"
    "\n"
    "Keys:\n"
    "\n"
    " *  SET: use the on-screen menu\n"
    " *  PLAY: pause or resume playback\n"
    " *  INFO: toggle display of video information\n"
    " *  wheel: switch to previous or next video\n"
    "\n"
;
static char __module_string_g_name [] MODULE_STRINGS_SECTION = "Last update";
static char __module_string_g_value[] MODULE_STRINGS_SECTION = 
    "02f01f0 on 2017-08-16 22:24:59 UTC by alex:\n"
    "mlv_play: fix a fio_malloc issue (not tested, might fix issue #2766)\n"
;
static char __module_string_h_name [] MODULE_STRINGS_SECTION = "Build date";
static char __module_string_h_value[] MODULE_STRINGS_SECTION = "2020-05-10 06:42:10 UTC";
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
