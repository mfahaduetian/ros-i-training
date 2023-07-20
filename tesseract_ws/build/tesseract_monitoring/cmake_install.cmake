# Install script for directory: /home/ubuntu/tesseract_ws/src/tesseract_ros2/tesseract_monitoring

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ubuntu/tesseract_ws/install/tesseract_monitoring")
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
  include("/home/ubuntu/tesseract_ws/build/tesseract_monitoring/ament_cmake_symlink_install/ament_cmake_symlink_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_monitoring_environment.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_monitoring_environment.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_monitoring_environment.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ubuntu/tesseract_ws/build/tesseract_monitoring/libtesseract_monitoring_environment.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_monitoring_environment.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_monitoring_environment.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_monitoring_environment.so"
         OLD_RPATH "/home/ubuntu/tesseract_ws/install/tesseract_rosutils/lib:/opt/ros/humble/lib:/home/ubuntu/tesseract_ws/install/tesseract_task_composer/lib:/home/ubuntu/tesseract_ws/install/tesseract_visualization/lib:/home/ubuntu/tesseract_ws/install/tesseract_motion_planners/lib:/home/ubuntu/tesseract_ws/install/tesseract_environment/lib:/home/ubuntu/tesseract_ws/install/tesseract_state_solver/lib:/home/ubuntu/tesseract_ws/install/tesseract_srdf/lib:/home/ubuntu/tesseract_ws/install/tesseract_urdf/lib:/home/ubuntu/tesseract_ws/install/tesseract_collision/lib:/home/ubuntu/tesseract_ws/install/tesseract_kinematics/lib:/home/ubuntu/tesseract_ws/install/tesseract_scene_graph/lib:/home/ubuntu/tesseract_ws/install/tesseract_geometry/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/ubuntu/tesseract_ws/install/tesseract_command_language/lib:/home/ubuntu/tesseract_ws/install/tesseract_common/lib:/home/ubuntu/tesseract_ws/install/tesseract_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_monitoring_environment.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_monitoring_environment_interface.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_monitoring_environment_interface.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_monitoring_environment_interface.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ubuntu/tesseract_ws/build/tesseract_monitoring/libtesseract_monitoring_environment_interface.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_monitoring_environment_interface.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_monitoring_environment_interface.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_monitoring_environment_interface.so"
         OLD_RPATH "/home/ubuntu/tesseract_ws/install/tesseract_rosutils/lib:/home/ubuntu/tesseract_ws/install/tesseract_task_composer/lib:/home/ubuntu/tesseract_ws/install/tesseract_visualization/lib:/home/ubuntu/tesseract_ws/install/tesseract_motion_planners/lib:/home/ubuntu/tesseract_ws/install/tesseract_environment/lib:/home/ubuntu/tesseract_ws/install/tesseract_state_solver/lib:/home/ubuntu/tesseract_ws/install/tesseract_srdf/lib:/home/ubuntu/tesseract_ws/install/tesseract_urdf/lib:/home/ubuntu/tesseract_ws/install/tesseract_collision/lib:/home/ubuntu/tesseract_ws/install/tesseract_kinematics/lib:/home/ubuntu/tesseract_ws/install/tesseract_scene_graph/lib:/home/ubuntu/tesseract_ws/install/tesseract_geometry/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/ubuntu/tesseract_ws/install/tesseract_command_language/lib:/home/ubuntu/tesseract_ws/install/tesseract_common/lib:/opt/ros/humble/lib:/home/ubuntu/tesseract_ws/install/tesseract_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_monitoring_environment_interface.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_monitoring_contacts.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_monitoring_contacts.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_monitoring_contacts.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ubuntu/tesseract_ws/build/tesseract_monitoring/libtesseract_monitoring_contacts.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_monitoring_contacts.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_monitoring_contacts.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_monitoring_contacts.so"
         OLD_RPATH "/home/ubuntu/tesseract_ws/build/tesseract_monitoring:/opt/ros/humble/lib:/home/ubuntu/tesseract_ws/install/tesseract_rosutils/lib:/home/ubuntu/tesseract_ws/install/tesseract_msgs/lib:/home/ubuntu/tesseract_ws/install/tesseract_task_composer/lib:/home/ubuntu/tesseract_ws/install/tesseract_visualization/lib:/home/ubuntu/tesseract_ws/install/tesseract_motion_planners/lib:/home/ubuntu/tesseract_ws/install/tesseract_environment/lib:/home/ubuntu/tesseract_ws/install/tesseract_state_solver/lib:/home/ubuntu/tesseract_ws/install/tesseract_srdf/lib:/home/ubuntu/tesseract_ws/install/tesseract_urdf/lib:/home/ubuntu/tesseract_ws/install/tesseract_collision/lib:/home/ubuntu/tesseract_ws/install/tesseract_kinematics/lib:/home/ubuntu/tesseract_ws/install/tesseract_scene_graph/lib:/home/ubuntu/tesseract_ws/install/tesseract_geometry/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/ubuntu/tesseract_ws/install/tesseract_command_language/lib:/home/ubuntu/tesseract_ws/install/tesseract_common/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_monitoring_contacts.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/tesseract_monitoring/cmake/tesseract_monitoring-targetsExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/tesseract_monitoring/cmake/tesseract_monitoring-targetsExport.cmake"
         "/home/ubuntu/tesseract_ws/build/tesseract_monitoring/CMakeFiles/Export/share/tesseract_monitoring/cmake/tesseract_monitoring-targetsExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/tesseract_monitoring/cmake/tesseract_monitoring-targetsExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/tesseract_monitoring/cmake/tesseract_monitoring-targetsExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tesseract_monitoring/cmake" TYPE FILE FILES "/home/ubuntu/tesseract_ws/build/tesseract_monitoring/CMakeFiles/Export/share/tesseract_monitoring/cmake/tesseract_monitoring-targetsExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tesseract_monitoring/cmake" TYPE FILE FILES "/home/ubuntu/tesseract_ws/build/tesseract_monitoring/CMakeFiles/Export/share/tesseract_monitoring/cmake/tesseract_monitoring-targetsExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/ubuntu/tesseract_ws/build/tesseract_monitoring/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
