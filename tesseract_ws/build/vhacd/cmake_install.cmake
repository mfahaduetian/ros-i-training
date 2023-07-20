# Install script for directory: /home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ubuntu/tesseract_ws/install/vhacd")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/vhacd" TYPE FILE FILES "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvhacd.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvhacd.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvhacd.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ubuntu/tesseract_ws/build/vhacd/libvhacd.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvhacd.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvhacd.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvhacd.so"
         OLD_RPATH "/home/ubuntu/tesseract_ws/install/trajopt_common/lib:/home/ubuntu/tesseract_ws/install/tesseract_common/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvhacd.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/vhacd/vhacd-targets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/vhacd/vhacd-targets.cmake"
         "/home/ubuntu/tesseract_ws/build/vhacd/CMakeFiles/Export/lib/cmake/vhacd/vhacd-targets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/vhacd/vhacd-targets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/vhacd/vhacd-targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vhacd" TYPE FILE FILES "/home/ubuntu/tesseract_ws/build/vhacd/CMakeFiles/Export/lib/cmake/vhacd/vhacd-targets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vhacd" TYPE FILE FILES "/home/ubuntu/tesseract_ws/build/vhacd/CMakeFiles/Export/lib/cmake/vhacd/vhacd-targets-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vhacd" TYPE FILE FILES
    "/home/ubuntu/tesseract_ws/build/vhacd/vhacd-config.cmake"
    "/home/ubuntu/tesseract_ws/build/vhacd/vhacd-config-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/ubuntu/tesseract_ws/build/vhacd/share/ament_index/resource_index/packages/vhacd")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/vhacd/hook" TYPE FILE FILES "/home/ubuntu/tesseract_ws/build/vhacd/share/vhacd/hook/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/vhacd/hook" TYPE FILE FILES "/home/ubuntu/tesseract_ws/build/vhacd/share/vhacd/hook/ros_package_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/vhacd/hook" TYPE FILE FILES "/home/ubuntu/tesseract_ws/build/vhacd/share/vhacd/hook/python_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vhacd" TYPE FILE FILES
    "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/include/vhacd/VHACD.h"
    "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/include/vhacd/inc/FloatMath.h"
    "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/include/vhacd/inc/btAlignedAllocator.h"
    "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/include/vhacd/inc/btAlignedObjectArray.h"
    "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/include/vhacd/inc/btConvexHullComputer.h"
    "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/include/vhacd/inc/btMinMax.h"
    "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/include/vhacd/inc/btScalar.h"
    "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/include/vhacd/inc/btVector3.h"
    "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/include/vhacd/inc/vhacdCircularList.h"
    "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/include/vhacd/inc/vhacdICHull.h"
    "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/include/vhacd/inc/vhacdManifoldMesh.h"
    "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/include/vhacd/inc/vhacdMesh.h"
    "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/include/vhacd/inc/vhacdMutex.h"
    "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/include/vhacd/inc/vhacdRaycastMesh.h"
    "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/include/vhacd/inc/vhacdSArray.h"
    "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/include/vhacd/inc/vhacdTimer.h"
    "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/include/vhacd/inc/vhacdVHACD.h"
    "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/include/vhacd/inc/vhacdVector.h"
    "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/include/vhacd/inc/vhacdVolume.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vhacd" TYPE FILE FILES
    "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/include/vhacd/inc/vhacdCircularList.inl"
    "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/vhacd/include/vhacd/inc/vhacdVector.inl"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/ubuntu/tesseract_ws/build/vhacd/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
