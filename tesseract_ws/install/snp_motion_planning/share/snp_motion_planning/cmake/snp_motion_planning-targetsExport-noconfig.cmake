#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "snp_motion_planning::snp_motion_planning_plugins" for configuration ""
set_property(TARGET snp_motion_planning::snp_motion_planning_plugins APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(snp_motion_planning::snp_motion_planning_plugins PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libsnp_motion_planning_plugins.so"
  IMPORTED_SONAME_NOCONFIG "libsnp_motion_planning_plugins.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS snp_motion_planning::snp_motion_planning_plugins )
list(APPEND _IMPORT_CHECK_FILES_FOR_snp_motion_planning::snp_motion_planning_plugins "${_IMPORT_PREFIX}/lib/libsnp_motion_planning_plugins.so" )

# Import target "snp_motion_planning::snp_motion_planning_tasks" for configuration ""
set_property(TARGET snp_motion_planning::snp_motion_planning_tasks APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(snp_motion_planning::snp_motion_planning_tasks PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libsnp_motion_planning_tasks.so"
  IMPORTED_SONAME_NOCONFIG "libsnp_motion_planning_tasks.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS snp_motion_planning::snp_motion_planning_tasks )
list(APPEND _IMPORT_CHECK_FILES_FOR_snp_motion_planning::snp_motion_planning_tasks "${_IMPORT_PREFIX}/lib/libsnp_motion_planning_tasks.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
