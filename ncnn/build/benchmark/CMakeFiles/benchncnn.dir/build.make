# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build

# Include any dependencies generated for this target.
include benchmark/CMakeFiles/benchncnn.dir/depend.make

# Include the progress variables for this target.
include benchmark/CMakeFiles/benchncnn.dir/progress.make

# Include the compile flags for this target's objects.
include benchmark/CMakeFiles/benchncnn.dir/flags.make

benchmark/CMakeFiles/benchncnn.dir/benchncnn.cpp.o: benchmark/CMakeFiles/benchncnn.dir/flags.make
benchmark/CMakeFiles/benchncnn.dir/benchncnn.cpp.o: ../benchmark/benchncnn.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object benchmark/CMakeFiles/benchncnn.dir/benchncnn.cpp.o"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/benchmark && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/benchncnn.dir/benchncnn.cpp.o -c /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/benchmark/benchncnn.cpp

benchmark/CMakeFiles/benchncnn.dir/benchncnn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/benchncnn.dir/benchncnn.cpp.i"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/benchmark && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/benchmark/benchncnn.cpp > CMakeFiles/benchncnn.dir/benchncnn.cpp.i

benchmark/CMakeFiles/benchncnn.dir/benchncnn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/benchncnn.dir/benchncnn.cpp.s"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/benchmark && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/benchmark/benchncnn.cpp -o CMakeFiles/benchncnn.dir/benchncnn.cpp.s

benchmark/CMakeFiles/benchncnn.dir/benchncnn.cpp.o.requires:

.PHONY : benchmark/CMakeFiles/benchncnn.dir/benchncnn.cpp.o.requires

benchmark/CMakeFiles/benchncnn.dir/benchncnn.cpp.o.provides: benchmark/CMakeFiles/benchncnn.dir/benchncnn.cpp.o.requires
	$(MAKE) -f benchmark/CMakeFiles/benchncnn.dir/build.make benchmark/CMakeFiles/benchncnn.dir/benchncnn.cpp.o.provides.build
.PHONY : benchmark/CMakeFiles/benchncnn.dir/benchncnn.cpp.o.provides

benchmark/CMakeFiles/benchncnn.dir/benchncnn.cpp.o.provides.build: benchmark/CMakeFiles/benchncnn.dir/benchncnn.cpp.o


# Object files for target benchncnn
benchncnn_OBJECTS = \
"CMakeFiles/benchncnn.dir/benchncnn.cpp.o"

# External object files for target benchncnn
benchncnn_EXTERNAL_OBJECTS =

benchmark/benchncnn: benchmark/CMakeFiles/benchncnn.dir/benchncnn.cpp.o
benchmark/benchncnn: benchmark/CMakeFiles/benchncnn.dir/build.make
benchmark/benchncnn: src/libncnn.a
benchmark/benchncnn: /usr/lib/gcc/x86_64-linux-gnu/7/libgomp.so
benchmark/benchncnn: /usr/lib/x86_64-linux-gnu/libpthread.so
benchmark/benchncnn: benchmark/CMakeFiles/benchncnn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable benchncnn"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/benchmark && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/benchncnn.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
benchmark/CMakeFiles/benchncnn.dir/build: benchmark/benchncnn

.PHONY : benchmark/CMakeFiles/benchncnn.dir/build

benchmark/CMakeFiles/benchncnn.dir/requires: benchmark/CMakeFiles/benchncnn.dir/benchncnn.cpp.o.requires

.PHONY : benchmark/CMakeFiles/benchncnn.dir/requires

benchmark/CMakeFiles/benchncnn.dir/clean:
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/benchmark && $(CMAKE_COMMAND) -P CMakeFiles/benchncnn.dir/cmake_clean.cmake
.PHONY : benchmark/CMakeFiles/benchncnn.dir/clean

benchmark/CMakeFiles/benchncnn.dir/depend:
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/benchmark /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/benchmark /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/benchmark/CMakeFiles/benchncnn.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : benchmark/CMakeFiles/benchncnn.dir/depend

