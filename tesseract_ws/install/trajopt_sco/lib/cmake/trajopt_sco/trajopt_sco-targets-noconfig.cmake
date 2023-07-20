#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "trajopt::trajopt_sco" for configuration ""
set_property(TARGET trajopt::trajopt_sco APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(trajopt::trajopt_sco PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtrajopt_sco.so"
  IMPORTED_SONAME_NOCONFIG "libtrajopt_sco.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS trajopt::trajopt_sco )
list(APPEND _IMPORT_CHECK_FILES_FOR_trajopt::trajopt_sco "${_IMPORT_PREFIX}/lib/libtrajopt_sco.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
