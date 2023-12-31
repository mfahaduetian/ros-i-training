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
CMAKE_SOURCE_DIR = /home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/qpoases

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/tesseract_ws/build/qpoases

# Utility rule file for qpoases.

# Include any custom commands dependencies for this target.
include CMakeFiles/qpoases.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/qpoases.dir/progress.make

CMakeFiles/qpoases: CMakeFiles/qpoases-complete

CMakeFiles/qpoases-complete: qpoases-prefix/src/qpoases-stamp/qpoases-install
CMakeFiles/qpoases-complete: qpoases-prefix/src/qpoases-stamp/qpoases-mkdir
CMakeFiles/qpoases-complete: qpoases-prefix/src/qpoases-stamp/qpoases-download
CMakeFiles/qpoases-complete: qpoases-prefix/src/qpoases-stamp/qpoases-update
CMakeFiles/qpoases-complete: qpoases-prefix/src/qpoases-stamp/qpoases-patch
CMakeFiles/qpoases-complete: qpoases-prefix/src/qpoases-stamp/qpoases-configure
CMakeFiles/qpoases-complete: qpoases-prefix/src/qpoases-stamp/qpoases-build
CMakeFiles/qpoases-complete: qpoases-prefix/src/qpoases-stamp/qpoases-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/tesseract_ws/build/qpoases/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'qpoases'"
	/usr/bin/cmake -E make_directory /home/ubuntu/tesseract_ws/build/qpoases/CMakeFiles
	/usr/bin/cmake -E touch /home/ubuntu/tesseract_ws/build/qpoases/CMakeFiles/qpoases-complete
	/usr/bin/cmake -E touch /home/ubuntu/tesseract_ws/build/qpoases/qpoases-prefix/src/qpoases-stamp/qpoases-done

qpoases-prefix/src/qpoases-stamp/qpoases-build: qpoases-prefix/src/qpoases-stamp/qpoases-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/tesseract_ws/build/qpoases/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Performing build step for 'qpoases'"
	cd /home/ubuntu/tesseract_ws/build/qpoases-build && $(MAKE)
	cd /home/ubuntu/tesseract_ws/build/qpoases-build && /usr/bin/cmake -E touch /home/ubuntu/tesseract_ws/build/qpoases/qpoases-prefix/src/qpoases-stamp/qpoases-build

qpoases-prefix/src/qpoases-stamp/qpoases-configure: qpoases-prefix/tmp/qpoases-cfgcmd.txt
qpoases-prefix/src/qpoases-stamp/qpoases-configure: qpoases-prefix/tmp/qpoases-cache-.cmake
qpoases-prefix/src/qpoases-stamp/qpoases-configure: qpoases-prefix/src/qpoases-stamp/qpoases-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/tesseract_ws/build/qpoases/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Performing configure step for 'qpoases'"
	cd /home/ubuntu/tesseract_ws/build/qpoases-build && /usr/bin/cmake "-GUnix Makefiles" -C/home/ubuntu/tesseract_ws/build/qpoases/qpoases-prefix/tmp/qpoases-cache-.cmake /home/ubuntu/tesseract_ws/build/qpoases-src
	cd /home/ubuntu/tesseract_ws/build/qpoases-build && /usr/bin/cmake -E touch /home/ubuntu/tesseract_ws/build/qpoases/qpoases-prefix/src/qpoases-stamp/qpoases-configure

qpoases-prefix/src/qpoases-stamp/qpoases-download: qpoases-prefix/src/qpoases-stamp/qpoases-gitinfo.txt
qpoases-prefix/src/qpoases-stamp/qpoases-download: qpoases-prefix/src/qpoases-stamp/qpoases-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/tesseract_ws/build/qpoases/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'qpoases'"
	cd /home/ubuntu/tesseract_ws/build && /usr/bin/cmake -P /home/ubuntu/tesseract_ws/build/qpoases/qpoases-prefix/tmp/qpoases-gitclone.cmake
	cd /home/ubuntu/tesseract_ws/build && /usr/bin/cmake -E touch /home/ubuntu/tesseract_ws/build/qpoases/qpoases-prefix/src/qpoases-stamp/qpoases-download

qpoases-prefix/src/qpoases-stamp/qpoases-install: qpoases-prefix/src/qpoases-stamp/qpoases-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/tesseract_ws/build/qpoases/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Performing install step for 'qpoases'"
	cd /home/ubuntu/tesseract_ws/build/qpoases-build && $(MAKE) install
	cd /home/ubuntu/tesseract_ws/build/qpoases-build && /usr/bin/cmake -E touch /home/ubuntu/tesseract_ws/build/qpoases/qpoases-prefix/src/qpoases-stamp/qpoases-install

qpoases-prefix/src/qpoases-stamp/qpoases-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/tesseract_ws/build/qpoases/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'qpoases'"
	/usr/bin/cmake -E make_directory /home/ubuntu/tesseract_ws/build/qpoases-src
	/usr/bin/cmake -E make_directory /home/ubuntu/tesseract_ws/build/qpoases-build
	/usr/bin/cmake -E make_directory /home/ubuntu/tesseract_ws/build/qpoases/qpoases-prefix
	/usr/bin/cmake -E make_directory /home/ubuntu/tesseract_ws/build/qpoases/qpoases-prefix/tmp
	/usr/bin/cmake -E make_directory /home/ubuntu/tesseract_ws/build/qpoases/qpoases-prefix/src/qpoases-stamp
	/usr/bin/cmake -E make_directory /home/ubuntu/tesseract_ws/build/qpoases/qpoases-prefix/src
	/usr/bin/cmake -E make_directory /home/ubuntu/tesseract_ws/build/qpoases/qpoases-prefix/src/qpoases-stamp
	/usr/bin/cmake -E touch /home/ubuntu/tesseract_ws/build/qpoases/qpoases-prefix/src/qpoases-stamp/qpoases-mkdir

qpoases-prefix/src/qpoases-stamp/qpoases-patch: qpoases-prefix/src/qpoases-stamp/qpoases-update
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/tesseract_ws/build/qpoases/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Performing patch step for 'qpoases'"
	cd /home/ubuntu/tesseract_ws/build/qpoases-src && /usr/bin/cmake -P /home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/qpoases/patch_qpoases.cmake
	cd /home/ubuntu/tesseract_ws/build/qpoases-src && /usr/bin/cmake -E touch /home/ubuntu/tesseract_ws/build/qpoases/qpoases-prefix/src/qpoases-stamp/qpoases-patch

qpoases-prefix/src/qpoases-stamp/qpoases-update: qpoases-prefix/src/qpoases-stamp/qpoases-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/tesseract_ws/build/qpoases/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Performing update step for 'qpoases'"
	cd /home/ubuntu/tesseract_ws/build/qpoases-src && /usr/bin/cmake -P /home/ubuntu/tesseract_ws/build/qpoases/qpoases-prefix/tmp/qpoases-gitupdate.cmake

qpoases: CMakeFiles/qpoases
qpoases: CMakeFiles/qpoases-complete
qpoases: qpoases-prefix/src/qpoases-stamp/qpoases-build
qpoases: qpoases-prefix/src/qpoases-stamp/qpoases-configure
qpoases: qpoases-prefix/src/qpoases-stamp/qpoases-download
qpoases: qpoases-prefix/src/qpoases-stamp/qpoases-install
qpoases: qpoases-prefix/src/qpoases-stamp/qpoases-mkdir
qpoases: qpoases-prefix/src/qpoases-stamp/qpoases-patch
qpoases: qpoases-prefix/src/qpoases-stamp/qpoases-update
qpoases: CMakeFiles/qpoases.dir/build.make
.PHONY : qpoases

# Rule to build all files generated by this target.
CMakeFiles/qpoases.dir/build: qpoases
.PHONY : CMakeFiles/qpoases.dir/build

CMakeFiles/qpoases.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/qpoases.dir/cmake_clean.cmake
.PHONY : CMakeFiles/qpoases.dir/clean

CMakeFiles/qpoases.dir/depend:
	cd /home/ubuntu/tesseract_ws/build/qpoases && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/qpoases /home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/qpoases /home/ubuntu/tesseract_ws/build/qpoases /home/ubuntu/tesseract_ws/build/qpoases /home/ubuntu/tesseract_ws/build/qpoases/CMakeFiles/qpoases.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/qpoases.dir/depend

