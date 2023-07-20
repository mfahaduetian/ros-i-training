#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "snp_motion_planning::snp_motion_planning_plugins" for configuration "Release"
set_property(TARGET snp_motion_planning::snp_motion_planning_plugins APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(snp_motion_planning::snp_motion_planning_plugins PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libsnp_motion_planning_plugins.so"
  IMPORTED_SONAME_RELEASE "libsnp_motion_planning_plugins.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS snp_motion_planning::snp_motion_planning_plugins )
list(APPEND _IMPORT_CHECK_FILES_FOR_snp_motion_planning::snp_motion_planning_plugins "${_IMPORT_PREFIX}/lib/libsnp_motion_planning_plugins.so" )

# Import target "snp_motion_planning::snp_motion_planning_tasks" for configuration "Release"
set_property(TARGET snp_motion_planning::snp_motion_planning_tasks APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(snp_motion_planning::snp_motion_planning_tasks PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libsnp_motion_planning_tasks.so"
  IMPORTED_SONAME_RELEASE "libsnp_motion_planning_tasks.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS snp_motion_planning::snp_motion_planning_tasks )
list(APPEND _IMPORT_CHECK_FILES_FOR_snp_motion_planning::snp_motion_planning_tasks "${_IMPORT_PREFIX}/lib/libsnp_motion_planning_tasks.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
