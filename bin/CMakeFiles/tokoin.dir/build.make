# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_SOURCE_DIR = /home/leonard/Desktop/coding/tokoin

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/leonard/Desktop/coding/tokoin/bin

# Include any dependencies generated for this target.
include CMakeFiles/tokoin.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tokoin.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tokoin.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tokoin.dir/flags.make

CMakeFiles/tokoin.dir/src/main.cpp.o: CMakeFiles/tokoin.dir/flags.make
CMakeFiles/tokoin.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/tokoin.dir/src/main.cpp.o: CMakeFiles/tokoin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/leonard/Desktop/coding/tokoin/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tokoin.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tokoin.dir/src/main.cpp.o -MF CMakeFiles/tokoin.dir/src/main.cpp.o.d -o CMakeFiles/tokoin.dir/src/main.cpp.o -c /home/leonard/Desktop/coding/tokoin/src/main.cpp

CMakeFiles/tokoin.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tokoin.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/leonard/Desktop/coding/tokoin/src/main.cpp > CMakeFiles/tokoin.dir/src/main.cpp.i

CMakeFiles/tokoin.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tokoin.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/leonard/Desktop/coding/tokoin/src/main.cpp -o CMakeFiles/tokoin.dir/src/main.cpp.s

# Object files for target tokoin
tokoin_OBJECTS = \
"CMakeFiles/tokoin.dir/src/main.cpp.o"

# External object files for target tokoin
tokoin_EXTERNAL_OBJECTS =

tokoin: CMakeFiles/tokoin.dir/src/main.cpp.o
tokoin: CMakeFiles/tokoin.dir/build.make
tokoin: CMakeFiles/tokoin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/leonard/Desktop/coding/tokoin/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tokoin"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tokoin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tokoin.dir/build: tokoin
.PHONY : CMakeFiles/tokoin.dir/build

CMakeFiles/tokoin.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tokoin.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tokoin.dir/clean

CMakeFiles/tokoin.dir/depend:
	cd /home/leonard/Desktop/coding/tokoin/bin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/leonard/Desktop/coding/tokoin /home/leonard/Desktop/coding/tokoin /home/leonard/Desktop/coding/tokoin/bin /home/leonard/Desktop/coding/tokoin/bin /home/leonard/Desktop/coding/tokoin/bin/CMakeFiles/tokoin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tokoin.dir/depend
