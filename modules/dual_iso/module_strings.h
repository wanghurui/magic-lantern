static char __module_string_a_name [] MODULE_STRINGS_SECTION = "Name";
static char __module_string_a_value[] MODULE_STRINGS_SECTION = "Dual ISO";
static char __module_string_b_name [] MODULE_STRINGS_SECTION = "Author";
static char __module_string_b_value[] MODULE_STRINGS_SECTION = "a1ex";
static char __module_string_c_name [] MODULE_STRINGS_SECTION = "License";
static char __module_string_c_value[] MODULE_STRINGS_SECTION = "GPL";
static char __module_string_d_name [] MODULE_STRINGS_SECTION = "Summary";
static char __module_string_d_value[] MODULE_STRINGS_SECTION = "Dynamic range improvement by using two ISOs in one picture";
static char __module_string_e_name [] MODULE_STRINGS_SECTION = "Forum";
static char __module_string_e_value[] MODULE_STRINGS_SECTION = "http://www.magiclantern.fm/forum/index.php?topic=7139.0";
static char __module_string_f_name [] MODULE_STRINGS_SECTION = "Description";
static char __module_string_f_value[] MODULE_STRINGS_SECTION = 
    "Increases dynamic range by sampling the sensor at two different\n"
    "ISOs, switching ISO for every other line pair. This trick cleans up\n"
    "shadow noise, resulting in a dynamic range improvement of\n"
    "around 3 stops, at the cost of reduced vertical resolution,\n"
    "aliasing and moire.\n"
    "\n"
    "Works for both raw photos (CR2) and raw videos (DNG). You need\n"
    "to postprocess these files with a tool called **cr2hdr**.\n"
    "\n"
    "After postprocessing, you will get a DNG that looks like a dark ISO\n"
    "100 shot, but you can bring the exposure back up and be\n"
    "delighted by how little noise is present in those recovered\n"
    "shadows.\n"
    "\n"
    "\n"
;
static char __module_string_g_name [] MODULE_STRINGS_SECTION = "Help page 1";
static char __module_string_g_value[] MODULE_STRINGS_SECTION = 
    "Quick start\n"
    "\n"
    " *  Start at ISO 100 in Canon menu\n"
    " *  Expose to the right by changing shutter and aperture\n"
    " *  If the image is still dark, enable dual ISO\n"
    " *  Adjust recovery ISO: higher values = cleaner shadows, but more\n"
    "    artifacts\n"
    " *  Try not to go past ISO 1600; you will not see any major\n"
    "    improvements, but you will get more interpolation artifacts and\n"
    "    hot pixels.\n"
    "\n"
    "\n"
;
static char __module_string_h_name [] MODULE_STRINGS_SECTION = "Help page 2";
static char __module_string_h_value[] MODULE_STRINGS_SECTION = 
    "Tips and tricks\n"
    "\n"
    " *  Do not use dual ISO for regular scenes that don't require a very\n"
    "    high dynamic range.\n"
    " *  Raw zebras are aware of dual ISO: weak zebras are displayed\n"
    "    where only the high ISO is overexposed, strong (solid) zebras are\n"
    "    displayed where both ISOs are overexposed.\n"
    " *  Raw histogram will display only the low-ISO half of the image\n"
    "    (since the high-ISO data is used for cleaning up shadow noise).\n"
    " *  For optimal exposure (minimal noise without clipped highlights),\n"
    "    try both dual ISO and ETTR.\n"
    " *  Do not be afraid of less aggressive settings like 100/400. They\n"
    "    are almost as good as 100/1600 regarding shadow noise, but\n"
    "    with much less aliasing artifacts.\n"
    " *  Be careful with long exposures, you may get lots of hot pixels.\n"
    "\n"
;
static char __module_string_i_name [] MODULE_STRINGS_SECTION = "Last update";
static char __module_string_i_value[] MODULE_STRINGS_SECTION = 
    "185da25 on 2018-02-04 22:52:42 UTC by Dan:\n"
    "Find the latest version of exiftool.\n"
;
static char __module_string_j_name [] MODULE_STRINGS_SECTION = "Build date";
static char __module_string_j_value[] MODULE_STRINGS_SECTION = "2020-05-10 06:42:22 UTC";
static char __module_string_k_name [] MODULE_STRINGS_SECTION = "Build user";
static char __module_string_k_value[] MODULE_STRINGS_SECTION = 
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
    MODULE_STRING(__module_string_k_name, __module_string_k_value) \
  MODULE_STRINGS_END()
