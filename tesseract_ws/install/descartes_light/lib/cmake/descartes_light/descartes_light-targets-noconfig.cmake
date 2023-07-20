#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "descartes::descartes_light" for configuration ""
set_property(TARGET descartes::descartes_light APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(descartes::descartes_light PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libdescartes_light.so"
  IMPORTED_SONAME_NOCONFIG "libdescartes_light.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS descartes::descartes_light )
list(APPEND _IMPORT_CHECK_FILES_FOR_descartes::descartes_light "${_IMPORT_PREFIX}/lib/libdescartes_light.so" )

# Import target "descartes::descartes_light_bgl" for configuration ""
set_property(TARGET descartes::descartes_light_bgl APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(descartes::descartes_light_bgl PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libdescartes_light_bgl.so"
  IMPORTED_SONAME_NOCONFIG "libdescartes_light_bgl.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS descartes::descartes_light_bgl )
list(APPEND _IMPORT_CHECK_FILES_FOR_descartes::descartes_light_bgl "${_IMPORT_PREFIX}/lib/libdescartes_light_bgl.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
