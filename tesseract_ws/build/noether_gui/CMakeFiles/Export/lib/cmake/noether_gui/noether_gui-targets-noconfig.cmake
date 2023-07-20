#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "noether::noether_gui" for configuration ""
set_property(TARGET noether::noether_gui APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(noether::noether_gui PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libnoether_gui.so"
  IMPORTED_SONAME_NOCONFIG "libnoether_gui.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS noether::noether_gui )
list(APPEND _IMPORT_CHECK_FILES_FOR_noether::noether_gui "${_IMPORT_PREFIX}/lib/libnoether_gui.so" )

# Import target "noether::noether_gui_plugins" for configuration ""
set_property(TARGET noether::noether_gui_plugins APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(noether::noether_gui_plugins PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libnoether_gui_plugins.so"
  IMPORTED_SONAME_NOCONFIG "libnoether_gui_plugins.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS noether::noether_gui_plugins )
list(APPEND _IMPORT_CHECK_FILES_FOR_noether::noether_gui_plugins "${_IMPORT_PREFIX}/lib/libnoether_gui_plugins.so" )

# Import target "noether::noether_gui_app" for configuration ""
set_property(TARGET noether::noether_gui_app APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(noether::noether_gui_app PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/bin/noether_gui_app"
  )

list(APPEND _IMPORT_CHECK_TARGETS noether::noether_gui_app )
list(APPEND _IMPORT_CHECK_FILES_FOR_noether::noether_gui_app "${_IMPORT_PREFIX}/bin/noether_gui_app" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
