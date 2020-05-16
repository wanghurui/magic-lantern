static char __module_string_a_name [] MODULE_STRINGS_SECTION = "Name";
static char __module_string_a_value[] MODULE_STRINGS_SECTION = "Post Deflicker";
static char __module_string_b_name [] MODULE_STRINGS_SECTION = "Author";
static char __module_string_b_value[] MODULE_STRINGS_SECTION = "a1ex";
static char __module_string_c_name [] MODULE_STRINGS_SECTION = "License";
static char __module_string_c_value[] MODULE_STRINGS_SECTION = "GPL";
static char __module_string_d_name [] MODULE_STRINGS_SECTION = "Credits";
static char __module_string_d_value[] MODULE_STRINGS_SECTION = "Audionut (Module)";
static char __module_string_e_name [] MODULE_STRINGS_SECTION = "Summary";
static char __module_string_e_value[] MODULE_STRINGS_SECTION = "Post deflicker sidecar files";
static char __module_string_f_name [] MODULE_STRINGS_SECTION = "Forum";
static char __module_string_f_value[] MODULE_STRINGS_SECTION = "http://www.magiclantern.fm/forum/index.php?topic=12585.0";
static char __module_string_g_name [] MODULE_STRINGS_SECTION = "Description";
static char __module_string_g_value[] MODULE_STRINGS_SECTION = 
    "Generate sidecar (XMP/UFRaw) files for post deflicking.\n"
    "\n"
;
static char __module_string_h_name [] MODULE_STRINGS_SECTION = "Last update";
static char __module_string_h_value[] MODULE_STRINGS_SECTION = 
    "4f5d5fb on 2016-02-26 22:46:30 UTC by a1ex:\n"
    "Removed duplicate console_printf/printf implementations (replac...\n"
;
static char __module_string_i_name [] MODULE_STRINGS_SECTION = "Build date";
static char __module_string_i_value[] MODULE_STRINGS_SECTION = "2020-05-10 06:42:31 UTC";
static char __module_string_j_name [] MODULE_STRINGS_SECTION = "Build user";
static char __module_string_j_value[] MODULE_STRINGS_SECTION = 
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
    MODULE_STRING(__module_string_j_name, __module_string_j_value) \
  MODULE_STRINGS_END()
