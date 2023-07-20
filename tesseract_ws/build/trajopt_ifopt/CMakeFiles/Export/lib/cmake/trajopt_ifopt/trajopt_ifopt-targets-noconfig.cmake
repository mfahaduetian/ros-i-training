#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "trajopt::trajopt_ifopt" for configuration ""
set_property(TARGET trajopt::trajopt_ifopt APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(trajopt::trajopt_ifopt PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtrajopt_ifopt.so"
  IMPORTED_SONAME_NOCONFIG "libtrajopt_ifopt.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS trajopt::trajopt_ifopt )
list(APPEND _IMPORT_CHECK_FILES_FOR_trajopt::trajopt_ifopt "${_IMPORT_PREFIX}/lib/libtrajopt_ifopt.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
