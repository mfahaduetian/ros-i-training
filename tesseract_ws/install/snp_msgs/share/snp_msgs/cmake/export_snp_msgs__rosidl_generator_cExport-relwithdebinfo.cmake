#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "snp_msgs::snp_msgs__rosidl_generator_c" for configuration "RelWithDebInfo"
set_property(TARGET snp_msgs::snp_msgs__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(snp_msgs::snp_msgs__rosidl_generator_c PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libsnp_msgs__rosidl_generator_c.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libsnp_msgs__rosidl_generator_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS snp_msgs::snp_msgs__rosidl_generator_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_snp_msgs::snp_msgs__rosidl_generator_c "${_IMPORT_PREFIX}/lib/libsnp_msgs__rosidl_generator_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
