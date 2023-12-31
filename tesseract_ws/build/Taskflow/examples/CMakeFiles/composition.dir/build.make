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

# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_SOURCE_DIR = /home/ubuntu/tesseract_ws/src/taskflow

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/tesseract_ws/build/Taskflow

# Include any dependencies generated for this target.
include examples/CMakeFiles/composition.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include examples/CMakeFiles/composition.dir/compiler_depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/composition.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/composition.dir/flags.make

examples/CMakeFiles/composition.dir/composition.cpp.o: examples/CMakeFiles/composition.dir/flags.make
examples/CMakeFiles/composition.dir/composition.cpp.o: /home/ubuntu/tesseract_ws/src/taskflow/examples/composition.cpp
examples/CMakeFiles/composition.dir/composition.cpp.o: examples/CMakeFiles/composition.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/tesseract_ws/build/Taskflow/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/composition.dir/composition.cpp.o"
	cd /home/ubuntu/tesseract_ws/build/Taskflow/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/CMakeFiles/composition.dir/composition.cpp.o -MF CMakeFiles/composition.dir/composition.cpp.o.d -o CMakeFiles/composition.dir/composition.cpp.o -c /home/ubuntu/tesseract_ws/src/taskflow/examples/composition.cpp

examples/CMakeFiles/composition.dir/composition.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/composition.dir/composition.cpp.i"
	cd /home/ubuntu/tesseract_ws/build/Taskflow/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/tesseract_ws/src/taskflow/examples/composition.cpp > CMakeFiles/composition.dir/composition.cpp.i

examples/CMakeFiles/composition.dir/composition.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/composition.dir/composition.cpp.s"
	cd /home/ubuntu/tesseract_ws/build/Taskflow/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/tesseract_ws/src/taskflow/examples/composition.cpp -o CMakeFiles/composition.dir/composition.cpp.s

# Object files for target composition
composition_OBJECTS = \
"CMakeFiles/composition.dir/composition.cpp.o"

# External object files for target composition
composition_EXTERNAL_OBJECTS =

examples/composition: examples/CMakeFiles/composition.dir/composition.cpp.o
examples/composition: examples/CMakeFiles/composition.dir/build.make
examples/composition: examples/CMakeFiles/composition.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/tesseract_ws/build/Taskflow/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable composition"
	cd /home/ubuntu/tesseract_ws/build/Taskflow/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/composition.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/composition.dir/build: examples/composition
.PHONY : examples/CMakeFiles/composition.dir/build

examples/CMakeFiles/composition.dir/clean:
	cd /home/ubuntu/tesseract_ws/build/Taskflow/examples && $(CMAKE_COMMAND) -P CMakeFiles/composition.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/composition.dir/clean

examples/CMakeFiles/composition.dir/depend:
	cd /home/ubuntu/tesseract_ws/build/Taskflow && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/tesseract_ws/src/taskflow /home/ubuntu/tesseract_ws/src/taskflow/examples /home/ubuntu/tesseract_ws/build/Taskflow /home/ubuntu/tesseract_ws/build/Taskflow/examples /home/ubuntu/tesseract_ws/build/Taskflow/examples/CMakeFiles/composition.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/composition.dir/depend

