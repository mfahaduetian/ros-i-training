# Install script for directory: /home/ubuntu/tesseract_ws/src/tesseract_planning/tesseract_time_parameterization

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ubuntu/tesseract_ws/install/tesseract_time_parameterization")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tesseract_time_parameterization" TYPE FILE FILES "/home/ubuntu/tesseract_ws/src/tesseract_planning/tesseract_time_parameterization/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/tesseract_time_parameterization/tesseract_time_parameterization-targets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/tesseract_time_parameterization/tesseract_time_parameterization-targets.cmake"
         "/home/ubuntu/tesseract_ws/build/tesseract_time_parameterization/CMakeFiles/Export/lib/cmake/tesseract_time_parameterization/tesseract_time_parameterization-targets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/tesseract_time_parameterization/tesseract_time_parameterization-targets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/tesseract_time_parameterization/tesseract_time_parameterization-targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/tesseract_time_parameterization" TYPE FILE FILES "/home/ubuntu/tesseract_ws/build/tesseract_time_parameterization/CMakeFiles/Export/lib/cmake/tesseract_time_parameterization/tesseract_time_parameterization-targets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/tesseract_time_parameterization" TYPE FILE FILES "/home/ubuntu/tesseract_ws/build/tesseract_time_parameterization/CMakeFiles/Export/lib/cmake/tesseract_time_parameterization/tesseract_time_parameterization-targets-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/tesseract_time_parameterization" TYPE FILE FILES
    "/home/ubuntu/tesseract_ws/build/tesseract_time_parameterization/tesseract_time_parameterization-config.cmake"
    "/home/ubuntu/tesseract_ws/build/tesseract_time_parameterization/tesseract_time_parameterization-config-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/ubuntu/tesseract_ws/build/tesseract_time_parameterization/share/ament_index/resource_index/packages/tesseract_time_parameterization")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tesseract_time_parameterization/hook" TYPE FILE FILES "/home/ubuntu/tesseract_ws/build/tesseract_time_parameterization/share/tesseract_time_parameterization/hook/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tesseract_time_parameterization/hook" TYPE FILE FILES "/home/ubuntu/tesseract_ws/build/tesseract_time_parameterization/share/tesseract_time_parameterization/hook/ros_package_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tesseract_time_parameterization/hook" TYPE FILE FILES "/home/ubuntu/tesseract_ws/build/tesseract_time_parameterization/share/tesseract_time_parameterization/hook/python_path.dsv")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/ubuntu/tesseract_ws/build/tesseract_time_parameterization/core/cmake_install.cmake")
  include("/home/ubuntu/tesseract_ws/build/tesseract_time_parameterization/isp/cmake_install.cmake")
  include("/home/ubuntu/tesseract_ws/build/tesseract_time_parameterization/totg/cmake_install.cmake")
  include("/home/ubuntu/tesseract_ws/build/tesseract_time_parameterization/ruckig/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/ubuntu/tesseract_ws/build/tesseract_time_parameterization/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
