# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ubuntu/tesseract_ws/src/tesseract_planning/tesseract_command_language

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/tesseract_ws/build/tesseract_command_language

# Utility rule file for ccov-all-capture.

# Include any custom commands dependencies for this target.
include CMakeFiles/ccov-all-capture.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ccov-all-capture.dir/progress.make

CMakeFiles/ccov-all-capture:
	/usr/bin/cmake -E remove /home/ubuntu/tesseract_ws/build/tesseract_command_language/ccov/all-merged.info
	/usr/bin/lcov --directory /home/ubuntu/tesseract_ws/build/tesseract_command_language --capture --output-file /home/ubuntu/tesseract_ws/build/tesseract_command_language/ccov/all-merged.info
	/usr/bin/lcov --remove /home/ubuntu/tesseract_ws/build/tesseract_command_language/ccov/all-merged.info '/usr/*' --remove /home/ubuntu/tesseract_ws/build/tesseract_command_language/ccov/all-merged.info '/opt/*' --remove /home/ubuntu/tesseract_ws/build/tesseract_command_language/ccov/all-merged.info '/home/ubuntu/tesseract_ws/src/tesseract_planning/tesseract_command_language/test/*' --remove /home/ubuntu/tesseract_ws/build/tesseract_command_language/ccov/all-merged.info '/*/gtest/*' --output-file /home/ubuntu/tesseract_ws/build/tesseract_command_language/ccov/all-merged.info

ccov-all-capture: CMakeFiles/ccov-all-capture
ccov-all-capture: CMakeFiles/ccov-all-capture.dir/build.make
.PHONY : ccov-all-capture

# Rule to build all files generated by this target.
CMakeFiles/ccov-all-capture.dir/build: ccov-all-capture
.PHONY : CMakeFiles/ccov-all-capture.dir/build

CMakeFiles/ccov-all-capture.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ccov-all-capture.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ccov-all-capture.dir/clean

CMakeFiles/ccov-all-capture.dir/depend:
	cd /home/ubuntu/tesseract_ws/build/tesseract_command_language && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/tesseract_ws/src/tesseract_planning/tesseract_command_language /home/ubuntu/tesseract_ws/src/tesseract_planning/tesseract_command_language /home/ubuntu/tesseract_ws/build/tesseract_command_language /home/ubuntu/tesseract_ws/build/tesseract_command_language /home/ubuntu/tesseract_ws/build/tesseract_command_language/CMakeFiles/ccov-all-capture.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ccov-all-capture.dir/depend
