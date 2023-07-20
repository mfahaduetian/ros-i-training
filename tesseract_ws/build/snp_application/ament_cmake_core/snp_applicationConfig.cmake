# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_snp_application_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED snp_application_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(snp_application_FOUND FALSE)
  elseif(NOT snp_application_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(snp_application_FOUND FALSE)
  endif()
  return()
endif()
set(_snp_application_CONFIG_INCLUDED TRUE)

# output package information
if(NOT snp_application_FIND_QUIETLY)
  message(STATUS "Found snp_application: 0.0.0 (${snp_application_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'snp_application' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${snp_application_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(snp_application_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_targets-extras.cmake")
foreach(_extra ${_extras})
  include("${snp_application_DIR}/${_extra}")
endforeach()
