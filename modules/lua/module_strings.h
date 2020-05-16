static char __module_string_a_name [] MODULE_STRINGS_SECTION = "Name";
static char __module_string_a_value[] MODULE_STRINGS_SECTION = "Lua scripting";
static char __module_string_b_name [] MODULE_STRINGS_SECTION = "Authors";
static char __module_string_b_value[] MODULE_STRINGS_SECTION = "dmilligan";
static char __module_string_c_name [] MODULE_STRINGS_SECTION = "License";
static char __module_string_c_value[] MODULE_STRINGS_SECTION = "GPL";
static char __module_string_d_name [] MODULE_STRINGS_SECTION = "Summary";
static char __module_string_d_value[] MODULE_STRINGS_SECTION = "Lua scripting";
static char __module_string_e_name [] MODULE_STRINGS_SECTION = "Forum";
static char __module_string_e_value[] MODULE_STRINGS_SECTION = "http://www.magiclantern.fm/forum/index.php?topic=14828.0";
static char __module_string_f_name [] MODULE_STRINGS_SECTION = "Description";
static char __module_string_f_value[] MODULE_STRINGS_SECTION = 
    "Module for running Lua scripts on the camera.\n"
    "\n"
    "The scripting engine looks for scripts (*.LUA) in ML/SCRIPTS. Any\n"
    "scripts found get \"loaded\" at startup by the scripting engine\n"
    "simply running them. Therefore the main body of the script\n"
    "should simply _define_ the script's menu and behavior, not\n"
    "actually _execute_ anything.\n"
    "\n"
    "The scripting engine will maintain your script's global state from\n"
    "run to run, so any global variables you declare will persist until\n"
    "the camera is turned off.\n"
    "\n"
    "API documentation: http://davidmilligan.github.io/ml-lua/\n"
    "\n"
;
static char __module_string_g_name [] MODULE_STRINGS_SECTION = "Last update";
static char __module_string_g_value[] MODULE_STRINGS_SECTION = 
    "58eefd7 on 2016-05-05 12:06:45 UTC by alex:\n"
    "Modules: unmount the card after running \"make install\"\n"
;
static char __module_string_h_name [] MODULE_STRINGS_SECTION = "Build date";
static char __module_string_h_value[] MODULE_STRINGS_SECTION = "2020-05-10 06:42:32 UTC";
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
