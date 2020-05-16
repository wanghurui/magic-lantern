static char __module_string_a_name [] MODULE_STRINGS_SECTION = "Name";
static char __module_string_a_value[] MODULE_STRINGS_SECTION = "Advanced Intervalometer";
static char __module_string_b_name [] MODULE_STRINGS_SECTION = "Author";
static char __module_string_b_value[] MODULE_STRINGS_SECTION = "David Milligan";
static char __module_string_c_name [] MODULE_STRINGS_SECTION = "License";
static char __module_string_c_value[] MODULE_STRINGS_SECTION = "GPL 3.0";
static char __module_string_d_name [] MODULE_STRINGS_SECTION = "Summary";
static char __module_string_d_value[] MODULE_STRINGS_SECTION = "Advanced ramping and exposure control for the intervalometer";
static char __module_string_e_name [] MODULE_STRINGS_SECTION = "Forum";
static char __module_string_e_value[] MODULE_STRINGS_SECTION = "http://www.magiclantern.fm/forum/index.php?topic=8431.0";
static char __module_string_f_name [] MODULE_STRINGS_SECTION = "Description";
static char __module_string_f_value[] MODULE_STRINGS_SECTION = 
    "Advanced ramping and exposure control for the intervalometer\n"
    "\n"
    "Create keyframes from current camera settings and specify the\n"
    "frame at which the keyframe is applied. You will select which\n"
    "parameters you would like to set in the keyframe and which you\n"
    "would like to ignore. The module ramps (linearly) the vaules of\n"
    "selected parameters from one keyframe to the next while the\n"
    "intervalometer is running.\n"
    "\n"
    "\n"
;
static char __module_string_g_name [] MODULE_STRINGS_SECTION = "Help page 1";
static char __module_string_g_value[] MODULE_STRINGS_SECTION = 
    "Usage\n"
    "\n"
    "You should create an initial keyframe at 1, that has the settings\n"
    "you are going to start with, that way the module knows what to\n"
    "ramp from. If you don't do this the module won't ramp to your\n"
    "first keyframe, it will simply set the values when it gets there (it\n"
    "doesn't know how to calculate the ramp, b/c it doesn't know what\n"
    "the values started as).\n"
    "\n"
    "\n"
;
static char __module_string_h_name [] MODULE_STRINGS_SECTION = "Help page 2";
static char __module_string_h_value[] MODULE_STRINGS_SECTION = 
    "Exposure ramping\n"
    "\n"
    "To ramp basic expo controls (Av, Tv, ISO) set them like normal in\n"
    "the canon GUI as if you were taking a picture, then go into the\n"
    "ML menu under 'Shoot' -> 'Intervalometer' -> 'Advanced\n"
    "Intervalometer' -> 'New Keyframe' and create a new keyframe.\n"
    "Turn on or off to specify which parameters are to be included in\n"
    "the keyframe. The current values are displayed on the right for\n"
    "you, but you cannot change them from here.\n"
    "\n"
    "\n"
;
static char __module_string_i_name [] MODULE_STRINGS_SECTION = "Help page 3";
static char __module_string_i_value[] MODULE_STRINGS_SECTION = 
    "Focus ramping\n"
    "\n"
    "For Focus you do specify the offset to focus to from the 'New\n"
    "Keyframe' menu. The module will calculate the number of focus\n"
    "steps it need to take each frame to arrive at your offset that\n"
    "you specify. It steps from wherever the lens is focused at the\n"
    "start. Negative values mean focus closer, positve is towards\n"
    "infinity. You need to be in LiveView for the focusing to work and\n"
    "make sure there is enough time after the exposure is taken,\n"
    "before the next one starts for the focusing to take place (I\n"
    "recommend at least 2s, maybe more depending on camera and\n"
    "lens)\n"
    "\n"
    "\n"
;
static char __module_string_j_name [] MODULE_STRINGS_SECTION = "Help page 4";
static char __module_string_j_value[] MODULE_STRINGS_SECTION = 
    "Misc notes\n"
    "\n"
    "You can ramp the intervalometer period as well, this you also\n"
    "specify from within the new keyframe menu\n"
    "\n"
    "Once you have created keyframes you can view them with the\n"
    "'List Keyframes' menu. You can also save your keyframe\n"
    "sequence to file, and then reload them later. If not saved, any\n"
    "keyframes you created will be lost when the camera is turned\n"
    "off. Keyframes are saved and loaded from a file called \"SEQ.TXT\"\n"
    "in the ML/SETTINGS directory.\n"
    "\n"
    "When you have created keyframes and are ready to begin, make\n"
    "sure the advanced intervalometer is turned on, then turn the\n"
    "intervalometer on as usual from the ML Shoot menu.\n"
    "\n"
    "\n"
;
static char __module_string_k_name [] MODULE_STRINGS_SECTION = "Help page 5";
static char __module_string_k_value[] MODULE_STRINGS_SECTION = 
    "AutoETTR compatibility\n"
    "\n"
    "This module is compatible with AutoETTR so long as you don't try\n"
    "to ramp the parameters that AutoETTR is trying to change. You\n"
    "can ramp Av and let AutoETTR take care of Tv and ISO, or you\n"
    "can ramp Av and Tv and let AuttoETTR only set ISO, or put\n"
    "AutoETTR to link to Canon shutter (then your Tv will basically be\n"
    "setting the slowest Tv parameter of AutoETTR)\n"
    "\n"
;
static char __module_string_l_name [] MODULE_STRINGS_SECTION = "Last update";
static char __module_string_l_value[] MODULE_STRINGS_SECTION = 
    "287c785 on 2016-06-26 20:27:40 UTC by alex:\n"
    "adv_int: ignore empty lines when loading keyframes\n"
;
static char __module_string_m_name [] MODULE_STRINGS_SECTION = "Build date";
static char __module_string_m_value[] MODULE_STRINGS_SECTION = "2020-05-10 06:42:51 UTC";
static char __module_string_n_name [] MODULE_STRINGS_SECTION = "Build user";
static char __module_string_n_value[] MODULE_STRINGS_SECTION = 
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
    MODULE_STRING(__module_string_l_name, __module_string_l_value) \
    MODULE_STRING(__module_string_m_name, __module_string_m_value) \
    MODULE_STRING(__module_string_n_name, __module_string_n_value) \
  MODULE_STRINGS_END()
