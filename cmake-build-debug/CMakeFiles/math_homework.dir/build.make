# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /private/var/folders/7x/jzw2njfj53gfqqp4yxqw6z0h0000gn/T/AppTranslocation/B17011C6-1FC5-43A8-8470-78F5D4057CCA/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/7x/jzw2njfj53gfqqp4yxqw6z0h0000gn/T/AppTranslocation/B17011C6-1FC5-43A8-8470-78F5D4057CCA/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/y09/CLionProjects/math-homework

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/y09/CLionProjects/math-homework/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/math_homework.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/math_homework.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/math_homework.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/math_homework.dir/flags.make

CMakeFiles/math_homework.dir/factoring_quadratics.cpp.o: CMakeFiles/math_homework.dir/flags.make
CMakeFiles/math_homework.dir/factoring_quadratics.cpp.o: ../factoring_quadratics.cpp
CMakeFiles/math_homework.dir/factoring_quadratics.cpp.o: CMakeFiles/math_homework.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/y09/CLionProjects/math-homework/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/math_homework.dir/factoring_quadratics.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/math_homework.dir/factoring_quadratics.cpp.o -MF CMakeFiles/math_homework.dir/factoring_quadratics.cpp.o.d -o CMakeFiles/math_homework.dir/factoring_quadratics.cpp.o -c /Users/y09/CLionProjects/math-homework/factoring_quadratics.cpp

CMakeFiles/math_homework.dir/factoring_quadratics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/math_homework.dir/factoring_quadratics.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/y09/CLionProjects/math-homework/factoring_quadratics.cpp > CMakeFiles/math_homework.dir/factoring_quadratics.cpp.i

CMakeFiles/math_homework.dir/factoring_quadratics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/math_homework.dir/factoring_quadratics.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/y09/CLionProjects/math-homework/factoring_quadratics.cpp -o CMakeFiles/math_homework.dir/factoring_quadratics.cpp.s

# Object files for target math_homework
math_homework_OBJECTS = \
"CMakeFiles/math_homework.dir/factoring_quadratics.cpp.o"

# External object files for target math_homework
math_homework_EXTERNAL_OBJECTS =

math_homework: CMakeFiles/math_homework.dir/factoring_quadratics.cpp.o
math_homework: CMakeFiles/math_homework.dir/build.make
math_homework: CMakeFiles/math_homework.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/y09/CLionProjects/math-homework/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable math_homework"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/math_homework.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/math_homework.dir/build: math_homework
.PHONY : CMakeFiles/math_homework.dir/build

CMakeFiles/math_homework.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/math_homework.dir/cmake_clean.cmake
.PHONY : CMakeFiles/math_homework.dir/clean

CMakeFiles/math_homework.dir/depend:
	cd /Users/y09/CLionProjects/math-homework/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/y09/CLionProjects/math-homework /Users/y09/CLionProjects/math-homework /Users/y09/CLionProjects/math-homework/cmake-build-debug /Users/y09/CLionProjects/math-homework/cmake-build-debug /Users/y09/CLionProjects/math-homework/cmake-build-debug/CMakeFiles/math_homework.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/math_homework.dir/depend

