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
CMAKE_SOURCE_DIR = /home/ubuntu/tesseract_ws/src/Qt-Advanced-Docking-System

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/tesseract_ws/build/qt_advanced_docking

# Include any dependencies generated for this target.
include examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/compiler_depend.make

# Include the progress variables for this target.
include examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/progress.make

# Include the compile flags for this target's objects.
include examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/flags.make

examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/CentralWidgetExample_autogen/mocs_compilation.cpp.o: examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/flags.make
examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/CentralWidgetExample_autogen/mocs_compilation.cpp.o: examples/centralwidget/CentralWidgetExample_autogen/mocs_compilation.cpp
examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/CentralWidgetExample_autogen/mocs_compilation.cpp.o: examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/tesseract_ws/build/qt_advanced_docking/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/CentralWidgetExample_autogen/mocs_compilation.cpp.o"
	cd /home/ubuntu/tesseract_ws/build/qt_advanced_docking/examples/centralwidget && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/CentralWidgetExample_autogen/mocs_compilation.cpp.o -MF CMakeFiles/CentralWidgetExample.dir/CentralWidgetExample_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/CentralWidgetExample.dir/CentralWidgetExample_autogen/mocs_compilation.cpp.o -c /home/ubuntu/tesseract_ws/build/qt_advanced_docking/examples/centralwidget/CentralWidgetExample_autogen/mocs_compilation.cpp

examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/CentralWidgetExample_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CentralWidgetExample.dir/CentralWidgetExample_autogen/mocs_compilation.cpp.i"
	cd /home/ubuntu/tesseract_ws/build/qt_advanced_docking/examples/centralwidget && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/tesseract_ws/build/qt_advanced_docking/examples/centralwidget/CentralWidgetExample_autogen/mocs_compilation.cpp > CMakeFiles/CentralWidgetExample.dir/CentralWidgetExample_autogen/mocs_compilation.cpp.i

examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/CentralWidgetExample_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CentralWidgetExample.dir/CentralWidgetExample_autogen/mocs_compilation.cpp.s"
	cd /home/ubuntu/tesseract_ws/build/qt_advanced_docking/examples/centralwidget && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/tesseract_ws/build/qt_advanced_docking/examples/centralwidget/CentralWidgetExample_autogen/mocs_compilation.cpp -o CMakeFiles/CentralWidgetExample.dir/CentralWidgetExample_autogen/mocs_compilation.cpp.s

examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/main.cpp.o: examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/flags.make
examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/main.cpp.o: /home/ubuntu/tesseract_ws/src/Qt-Advanced-Docking-System/examples/centralwidget/main.cpp
examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/main.cpp.o: examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/tesseract_ws/build/qt_advanced_docking/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/main.cpp.o"
	cd /home/ubuntu/tesseract_ws/build/qt_advanced_docking/examples/centralwidget && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/main.cpp.o -MF CMakeFiles/CentralWidgetExample.dir/main.cpp.o.d -o CMakeFiles/CentralWidgetExample.dir/main.cpp.o -c /home/ubuntu/tesseract_ws/src/Qt-Advanced-Docking-System/examples/centralwidget/main.cpp

examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CentralWidgetExample.dir/main.cpp.i"
	cd /home/ubuntu/tesseract_ws/build/qt_advanced_docking/examples/centralwidget && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/tesseract_ws/src/Qt-Advanced-Docking-System/examples/centralwidget/main.cpp > CMakeFiles/CentralWidgetExample.dir/main.cpp.i

examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CentralWidgetExample.dir/main.cpp.s"
	cd /home/ubuntu/tesseract_ws/build/qt_advanced_docking/examples/centralwidget && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/tesseract_ws/src/Qt-Advanced-Docking-System/examples/centralwidget/main.cpp -o CMakeFiles/CentralWidgetExample.dir/main.cpp.s

examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/mainwindow.cpp.o: examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/flags.make
examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/mainwindow.cpp.o: /home/ubuntu/tesseract_ws/src/Qt-Advanced-Docking-System/examples/centralwidget/mainwindow.cpp
examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/mainwindow.cpp.o: examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/tesseract_ws/build/qt_advanced_docking/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/mainwindow.cpp.o"
	cd /home/ubuntu/tesseract_ws/build/qt_advanced_docking/examples/centralwidget && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/mainwindow.cpp.o -MF CMakeFiles/CentralWidgetExample.dir/mainwindow.cpp.o.d -o CMakeFiles/CentralWidgetExample.dir/mainwindow.cpp.o -c /home/ubuntu/tesseract_ws/src/Qt-Advanced-Docking-System/examples/centralwidget/mainwindow.cpp

examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CentralWidgetExample.dir/mainwindow.cpp.i"
	cd /home/ubuntu/tesseract_ws/build/qt_advanced_docking/examples/centralwidget && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/tesseract_ws/src/Qt-Advanced-Docking-System/examples/centralwidget/mainwindow.cpp > CMakeFiles/CentralWidgetExample.dir/mainwindow.cpp.i

examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CentralWidgetExample.dir/mainwindow.cpp.s"
	cd /home/ubuntu/tesseract_ws/build/qt_advanced_docking/examples/centralwidget && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/tesseract_ws/src/Qt-Advanced-Docking-System/examples/centralwidget/mainwindow.cpp -o CMakeFiles/CentralWidgetExample.dir/mainwindow.cpp.s

# Object files for target CentralWidgetExample
CentralWidgetExample_OBJECTS = \
"CMakeFiles/CentralWidgetExample.dir/CentralWidgetExample_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/CentralWidgetExample.dir/main.cpp.o" \
"CMakeFiles/CentralWidgetExample.dir/mainwindow.cpp.o"

# External object files for target CentralWidgetExample
CentralWidgetExample_EXTERNAL_OBJECTS =

x64/bin/CentralWidgetExample-3.8.2: examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/CentralWidgetExample_autogen/mocs_compilation.cpp.o
x64/bin/CentralWidgetExample-3.8.2: examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/main.cpp.o
x64/bin/CentralWidgetExample-3.8.2: examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/mainwindow.cpp.o
x64/bin/CentralWidgetExample-3.8.2: examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/build.make
x64/bin/CentralWidgetExample-3.8.2: x64/lib/libqtadvanceddocking.so.3.8.2
x64/bin/CentralWidgetExample-3.8.2: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.3
x64/bin/CentralWidgetExample-3.8.2: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.3
x64/bin/CentralWidgetExample-3.8.2: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.3
x64/bin/CentralWidgetExample-3.8.2: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.3
x64/bin/CentralWidgetExample-3.8.2: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.3
x64/bin/CentralWidgetExample-3.8.2: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.3
x64/bin/CentralWidgetExample-3.8.2: examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/tesseract_ws/build/qt_advanced_docking/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../../x64/bin/CentralWidgetExample"
	cd /home/ubuntu/tesseract_ws/build/qt_advanced_docking/examples/centralwidget && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CentralWidgetExample.dir/link.txt --verbose=$(VERBOSE)
	cd /home/ubuntu/tesseract_ws/build/qt_advanced_docking/examples/centralwidget && $(CMAKE_COMMAND) -E cmake_symlink_executable ../../x64/bin/CentralWidgetExample-3.8.2 ../../x64/bin/CentralWidgetExample

x64/bin/CentralWidgetExample: x64/bin/CentralWidgetExample-3.8.2

# Rule to build all files generated by this target.
examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/build: x64/bin/CentralWidgetExample
.PHONY : examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/build

examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/clean:
	cd /home/ubuntu/tesseract_ws/build/qt_advanced_docking/examples/centralwidget && $(CMAKE_COMMAND) -P CMakeFiles/CentralWidgetExample.dir/cmake_clean.cmake
.PHONY : examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/clean

examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/depend:
	cd /home/ubuntu/tesseract_ws/build/qt_advanced_docking && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/tesseract_ws/src/Qt-Advanced-Docking-System /home/ubuntu/tesseract_ws/src/Qt-Advanced-Docking-System/examples/centralwidget /home/ubuntu/tesseract_ws/build/qt_advanced_docking /home/ubuntu/tesseract_ws/build/qt_advanced_docking/examples/centralwidget /home/ubuntu/tesseract_ws/build/qt_advanced_docking/examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/centralwidget/CMakeFiles/CentralWidgetExample.dir/depend

