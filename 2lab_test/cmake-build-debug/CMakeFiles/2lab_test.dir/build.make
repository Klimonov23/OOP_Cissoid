# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/User/AppData/Local/JetBrains/CLion2020.3/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/User/AppData/Local/JetBrains/CLion2020.3/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/User/Desktop/3semestry/C++/2lab/2lab_test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/User/Desktop/3semestry/C++/2lab/2lab_test/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/2lab_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/2lab_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/2lab_test.dir/flags.make

CMakeFiles/2lab_test.dir/test.cpp.o: CMakeFiles/2lab_test.dir/flags.make
CMakeFiles/2lab_test.dir/test.cpp.o: ../test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/User/Desktop/3semestry/C++/2lab/2lab_test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/2lab_test.dir/test.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/2lab_test.dir/test.cpp.o -c /cygdrive/c/Users/User/Desktop/3semestry/C++/2lab/2lab_test/test.cpp

CMakeFiles/2lab_test.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2lab_test.dir/test.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/User/Desktop/3semestry/C++/2lab/2lab_test/test.cpp > CMakeFiles/2lab_test.dir/test.cpp.i

CMakeFiles/2lab_test.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2lab_test.dir/test.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/User/Desktop/3semestry/C++/2lab/2lab_test/test.cpp -o CMakeFiles/2lab_test.dir/test.cpp.s

# Object files for target 2lab_test
2lab_test_OBJECTS = \
"CMakeFiles/2lab_test.dir/test.cpp.o"

# External object files for target 2lab_test
2lab_test_EXTERNAL_OBJECTS =

2lab_test.exe: CMakeFiles/2lab_test.dir/test.cpp.o
2lab_test.exe: CMakeFiles/2lab_test.dir/build.make
2lab_test.exe: lib/libgtest_maind.a
2lab_test.exe: lib/libgtestd.a
2lab_test.exe: CMakeFiles/2lab_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/User/Desktop/3semestry/C++/2lab/2lab_test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 2lab_test.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/2lab_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/2lab_test.dir/build: 2lab_test.exe

.PHONY : CMakeFiles/2lab_test.dir/build

CMakeFiles/2lab_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/2lab_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/2lab_test.dir/clean

CMakeFiles/2lab_test.dir/depend:
	cd /cygdrive/c/Users/User/Desktop/3semestry/C++/2lab/2lab_test/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/User/Desktop/3semestry/C++/2lab/2lab_test /cygdrive/c/Users/User/Desktop/3semestry/C++/2lab/2lab_test /cygdrive/c/Users/User/Desktop/3semestry/C++/2lab/2lab_test/cmake-build-debug /cygdrive/c/Users/User/Desktop/3semestry/C++/2lab/2lab_test/cmake-build-debug /cygdrive/c/Users/User/Desktop/3semestry/C++/2lab/2lab_test/cmake-build-debug/CMakeFiles/2lab_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/2lab_test.dir/depend

