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
CMAKE_COMMAND = /private/var/folders/t4/4nxgcw393xj1tjdsd63f32vm0000gp/T/AppTranslocation/83F39F43-B0AC-41E9-A31F-A5E06C784BC4/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/t4/4nxgcw393xj1tjdsd63f32vm0000gp/T/AppTranslocation/83F39F43-B0AC-41E9-A31F-A5E06C784BC4/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/admin/Desktop/c++_intro/ueb/2_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/admin/Desktop/c++_intro/ueb/2_1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/2_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/2_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/2_1.dir/flags.make

CMakeFiles/2_1.dir/main.cpp.o: CMakeFiles/2_1.dir/flags.make
CMakeFiles/2_1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/admin/Desktop/c++_intro/ueb/2_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/2_1.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/2_1.dir/main.cpp.o -c /Users/admin/Desktop/c++_intro/ueb/2_1/main.cpp

CMakeFiles/2_1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2_1.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/Desktop/c++_intro/ueb/2_1/main.cpp > CMakeFiles/2_1.dir/main.cpp.i

CMakeFiles/2_1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2_1.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/Desktop/c++_intro/ueb/2_1/main.cpp -o CMakeFiles/2_1.dir/main.cpp.s

# Object files for target 2_1
2_1_OBJECTS = \
"CMakeFiles/2_1.dir/main.cpp.o"

# External object files for target 2_1
2_1_EXTERNAL_OBJECTS =

2_1: CMakeFiles/2_1.dir/main.cpp.o
2_1: CMakeFiles/2_1.dir/build.make
2_1: CMakeFiles/2_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/admin/Desktop/c++_intro/ueb/2_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 2_1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/2_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/2_1.dir/build: 2_1

.PHONY : CMakeFiles/2_1.dir/build

CMakeFiles/2_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/2_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/2_1.dir/clean

CMakeFiles/2_1.dir/depend:
	cd /Users/admin/Desktop/c++_intro/ueb/2_1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/admin/Desktop/c++_intro/ueb/2_1 /Users/admin/Desktop/c++_intro/ueb/2_1 /Users/admin/Desktop/c++_intro/ueb/2_1/cmake-build-debug /Users/admin/Desktop/c++_intro/ueb/2_1/cmake-build-debug /Users/admin/Desktop/c++_intro/ueb/2_1/cmake-build-debug/CMakeFiles/2_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/2_1.dir/depend

