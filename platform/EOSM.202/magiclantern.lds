SECTIONS
{



 . = 0x0009E1E0;

 .text : {
  _text_start = .;
  *(.text)
  _text_end = .;
  . = ALIGN(64);
  _rodata_start = .;
  *(.rodata)
  _rodata_end = .;
 }

 _data_start = .;

 .data : {

  . = ALIGN(8);
  _task_overrides_start = .;
  *(.task_overrides);
  _task_overrides_end = .;


  . = ALIGN(8);
  _tasks_start = .;
  *(.tasks)
  _tasks_end = .;


  . = ALIGN(8);
  _init_funcs_start = .;
  *(.init_funcs)
  _init_funcs_end = .;


  . = ALIGN(8);
  _ptp_handlers_start = .;
  *(.ptp_handlers)
  _ptp_handlers_end = .;


  . = ALIGN(8);
  _config_vars_start = .;
  *(.config_vars)
  _config_vars_end = .;


  . = ALIGN(8);
  _prop_handlers_start = .;
  *(.prop_handlers)
  _prop_handlers_end = .;


  . = ALIGN(8);
  _module_symbols_start = .;
  *(.module_symbols)
  _module_symbols_end = .;


  . = ALIGN(64);
  *(.data)
 }

 _data.end = .;

    __exidx_start = .;
    .ARM.exidx : { *(.ARM.exidx*) }
    __exidx_end = .;


 . = ALIGN(64);
 _bss_start = .;
 .bss : { *(.bss) }
 . = ALIGN(64);
 _bss_end = .;
}
