# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.22

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Doge\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\221.5080.224\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Doge\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\221.5080.224\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Doge\CLionProjects\math-homework

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Doge\CLionProjects\math-homework\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/math_homework.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/math_homework.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/math_homework.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/math_homework.dir/flags.make

CMakeFiles/math_homework.dir/matrix_multiplication.cpp.obj: CMakeFiles/math_homework.dir/flags.make
CMakeFiles/math_homework.dir/matrix_multiplication.cpp.obj: ../matrix_multiplication.cpp
CMakeFiles/math_homework.dir/matrix_multiplication.cpp.obj: CMakeFiles/math_homework.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Doge\CLionProjects\math-homework\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/math_homework.dir/matrix_multiplication.cpp.obj"
	C:\Users\Doge\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\221.5080.224\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/math_homework.dir/matrix_multiplication.cpp.obj -MF CMakeFiles\math_homework.dir\matrix_multiplication.cpp.obj.d -o CMakeFiles\math_homework.dir\matrix_multiplication.cpp.obj -c C:\Users\Doge\CLionProjects\math-homework\matrix_multiplication.cpp

CMakeFiles/math_homework.dir/matrix_multiplication.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/math_homework.dir/matrix_multiplication.cpp.i"
	C:\Users\Doge\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\221.5080.224\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Doge\CLionProjects\math-homework\matrix_multiplication.cpp > CMakeFiles\math_homework.dir\matrix_multiplication.cpp.i

CMakeFiles/math_homework.dir/matrix_multiplication.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/math_homework.dir/matrix_multiplication.cpp.s"
	C:\Users\Doge\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\221.5080.224\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Doge\CLionProjects\math-homework\matrix_multiplication.cpp -o CMakeFiles\math_homework.dir\matrix_multiplication.cpp.s

# Object files for target math_homework
math_homework_OBJECTS = \
"CMakeFiles/math_homework.dir/matrix_multiplication.cpp.obj"

# External object files for target math_homework
math_homework_EXTERNAL_OBJECTS =

math_homework.exe: CMakeFiles/math_homework.dir/matrix_multiplication.cpp.obj
math_homework.exe: CMakeFiles/math_homework.dir/build.make
math_homework.exe: CMakeFiles/math_homework.dir/linklibs.rsp
math_homework.exe: CMakeFiles/math_homework.dir/objects1.rsp
math_homework.exe: CMakeFiles/math_homework.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Doge\CLionProjects\math-homework\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable math_homework.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\math_homework.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/math_homework.dir/build: math_homework.exe
.PHONY : CMakeFiles/math_homework.dir/build

CMakeFiles/math_homework.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\math_homework.dir\cmake_clean.cmake
.PHONY : CMakeFiles/math_homework.dir/clean

CMakeFiles/math_homework.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Doge\CLionProjects\math-homework C:\Users\Doge\CLionProjects\math-homework C:\Users\Doge\CLionProjects\math-homework\cmake-build-debug C:\Users\Doge\CLionProjects\math-homework\cmake-build-debug C:\Users\Doge\CLionProjects\math-homework\cmake-build-debug\CMakeFiles\math_homework.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/math_homework.dir/depend

