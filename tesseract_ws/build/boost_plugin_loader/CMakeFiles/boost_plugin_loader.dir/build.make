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
CMAKE_SOURCE_DIR = /home/ubuntu/tesseract_ws/src/boost_plugin_loader

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/tesseract_ws/build/boost_plugin_loader

# Include any dependencies generated for this target.
include CMakeFiles/boost_plugin_loader.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/boost_plugin_loader.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/boost_plugin_loader.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/boost_plugin_loader.dir/flags.make

CMakeFiles/boost_plugin_loader.dir/src/utils.cpp.o: CMakeFiles/boost_plugin_loader.dir/flags.make
CMakeFiles/boost_plugin_loader.dir/src/utils.cpp.o: /home/ubuntu/tesseract_ws/src/boost_plugin_loader/src/utils.cpp
CMakeFiles/boost_plugin_loader.dir/src/utils.cpp.o: CMakeFiles/boost_plugin_loader.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/tesseract_ws/build/boost_plugin_loader/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/boost_plugin_loader.dir/src/utils.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/boost_plugin_loader.dir/src/utils.cpp.o -MF CMakeFiles/boost_plugin_loader.dir/src/utils.cpp.o.d -o CMakeFiles/boost_plugin_loader.dir/src/utils.cpp.o -c /home/ubuntu/tesseract_ws/src/boost_plugin_loader/src/utils.cpp

CMakeFiles/boost_plugin_loader.dir/src/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boost_plugin_loader.dir/src/utils.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/tesseract_ws/src/boost_plugin_loader/src/utils.cpp > CMakeFiles/boost_plugin_loader.dir/src/utils.cpp.i

CMakeFiles/boost_plugin_loader.dir/src/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boost_plugin_loader.dir/src/utils.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/tesseract_ws/src/boost_plugin_loader/src/utils.cpp -o CMakeFiles/boost_plugin_loader.dir/src/utils.cpp.s

# Object files for target boost_plugin_loader
boost_plugin_loader_OBJECTS = \
"CMakeFiles/boost_plugin_loader.dir/src/utils.cpp.o"

# External object files for target boost_plugin_loader
boost_plugin_loader_EXTERNAL_OBJECTS =

libboost_plugin_loader.so: CMakeFiles/boost_plugin_loader.dir/src/utils.cpp.o
libboost_plugin_loader.so: CMakeFiles/boost_plugin_loader.dir/build.make
libboost_plugin_loader.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.74.0
libboost_plugin_loader.so: CMakeFiles/boost_plugin_loader.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/tesseract_ws/build/boost_plugin_loader/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libboost_plugin_loader.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/boost_plugin_loader.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/boost_plugin_loader.dir/build: libboost_plugin_loader.so
.PHONY : CMakeFiles/boost_plugin_loader.dir/build

CMakeFiles/boost_plugin_loader.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/boost_plugin_loader.dir/cmake_clean.cmake
.PHONY : CMakeFiles/boost_plugin_loader.dir/clean

CMakeFiles/boost_plugin_loader.dir/depend:
	cd /home/ubuntu/tesseract_ws/build/boost_plugin_loader && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/tesseract_ws/src/boost_plugin_loader /home/ubuntu/tesseract_ws/src/boost_plugin_loader /home/ubuntu/tesseract_ws/build/boost_plugin_loader /home/ubuntu/tesseract_ws/build/boost_plugin_loader /home/ubuntu/tesseract_ws/build/boost_plugin_loader/CMakeFiles/boost_plugin_loader.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/boost_plugin_loader.dir/depend

