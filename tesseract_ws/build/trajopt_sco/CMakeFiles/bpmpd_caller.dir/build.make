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
CMAKE_SOURCE_DIR = /home/ubuntu/tesseract_ws/src/trajopt/trajopt_sco

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/tesseract_ws/build/trajopt_sco

# Include any dependencies generated for this target.
include CMakeFiles/bpmpd_caller.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/bpmpd_caller.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/bpmpd_caller.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bpmpd_caller.dir/flags.make

CMakeFiles/bpmpd_caller.dir/src/bpmpd_caller.cpp.o: CMakeFiles/bpmpd_caller.dir/flags.make
CMakeFiles/bpmpd_caller.dir/src/bpmpd_caller.cpp.o: /home/ubuntu/tesseract_ws/src/trajopt/trajopt_sco/src/bpmpd_caller.cpp
CMakeFiles/bpmpd_caller.dir/src/bpmpd_caller.cpp.o: CMakeFiles/bpmpd_caller.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/tesseract_ws/build/trajopt_sco/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bpmpd_caller.dir/src/bpmpd_caller.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/bpmpd_caller.dir/src/bpmpd_caller.cpp.o -MF CMakeFiles/bpmpd_caller.dir/src/bpmpd_caller.cpp.o.d -o CMakeFiles/bpmpd_caller.dir/src/bpmpd_caller.cpp.o -c /home/ubuntu/tesseract_ws/src/trajopt/trajopt_sco/src/bpmpd_caller.cpp

CMakeFiles/bpmpd_caller.dir/src/bpmpd_caller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bpmpd_caller.dir/src/bpmpd_caller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/tesseract_ws/src/trajopt/trajopt_sco/src/bpmpd_caller.cpp > CMakeFiles/bpmpd_caller.dir/src/bpmpd_caller.cpp.i

CMakeFiles/bpmpd_caller.dir/src/bpmpd_caller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bpmpd_caller.dir/src/bpmpd_caller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/tesseract_ws/src/trajopt/trajopt_sco/src/bpmpd_caller.cpp -o CMakeFiles/bpmpd_caller.dir/src/bpmpd_caller.cpp.s

# Object files for target bpmpd_caller
bpmpd_caller_OBJECTS = \
"CMakeFiles/bpmpd_caller.dir/src/bpmpd_caller.cpp.o"

# External object files for target bpmpd_caller
bpmpd_caller_EXTERNAL_OBJECTS =

bpmpd_caller: CMakeFiles/bpmpd_caller.dir/src/bpmpd_caller.cpp.o
bpmpd_caller: CMakeFiles/bpmpd_caller.dir/build.make
bpmpd_caller: /home/ubuntu/tesseract_ws/src/trajopt/trajopt_sco/3rdpartylib/bpmpd_linux64.a
bpmpd_caller: CMakeFiles/bpmpd_caller.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/tesseract_ws/build/trajopt_sco/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bpmpd_caller"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bpmpd_caller.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bpmpd_caller.dir/build: bpmpd_caller
.PHONY : CMakeFiles/bpmpd_caller.dir/build

CMakeFiles/bpmpd_caller.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bpmpd_caller.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bpmpd_caller.dir/clean

CMakeFiles/bpmpd_caller.dir/depend:
	cd /home/ubuntu/tesseract_ws/build/trajopt_sco && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/tesseract_ws/src/trajopt/trajopt_sco /home/ubuntu/tesseract_ws/src/trajopt/trajopt_sco /home/ubuntu/tesseract_ws/build/trajopt_sco /home/ubuntu/tesseract_ws/build/trajopt_sco /home/ubuntu/tesseract_ws/build/trajopt_sco/CMakeFiles/bpmpd_caller.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bpmpd_caller.dir/depend

