# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_snp_scanning_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED snp_scanning_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(snp_scanning_FOUND FALSE)
  elseif(NOT snp_scanning_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(snp_scanning_FOUND FALSE)
  endif()
  return()
endif()
set(_snp_scanning_CONFIG_INCLUDED TRUE)

# output package information
if(NOT snp_scanning_FIND_QUIETLY)
  message(STATUS "Found snp_scanning: 0.1.0 (${snp_scanning_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'snp_scanning' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${snp_scanning_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(snp_scanning_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${snp_scanning_DIR}/${_extra}")
endforeach()
