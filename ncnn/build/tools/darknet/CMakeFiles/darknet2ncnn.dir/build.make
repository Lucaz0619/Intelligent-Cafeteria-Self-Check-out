# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_SOURCE_DIR = /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build

# Include any dependencies generated for this target.
include tools/darknet/CMakeFiles/darknet2ncnn.dir/depend.make

# Include the progress variables for this target.
include tools/darknet/CMakeFiles/darknet2ncnn.dir/progress.make

# Include the compile flags for this target's objects.
include tools/darknet/CMakeFiles/darknet2ncnn.dir/flags.make

tools/darknet/CMakeFiles/darknet2ncnn.dir/darknet2ncnn.cpp.o: tools/darknet/CMakeFiles/darknet2ncnn.dir/flags.make
tools/darknet/CMakeFiles/darknet2ncnn.dir/darknet2ncnn.cpp.o: ../tools/darknet/darknet2ncnn.cpp
<<<<<<< HEAD
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/darknet/CMakeFiles/darknet2ncnn.dir/darknet2ncnn.cpp.o"
	cd /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/tools/darknet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/darknet2ncnn.dir/darknet2ncnn.cpp.o -c /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/tools/darknet/darknet2ncnn.cpp
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/darknet/CMakeFiles/darknet2ncnn.dir/darknet2ncnn.cpp.o"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/tools/darknet && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/darknet2ncnn.dir/darknet2ncnn.cpp.o -c /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/tools/darknet/darknet2ncnn.cpp
>>>>>>> 45ec0ff38778d74d9c0052c0da921043f25f5677

tools/darknet/CMakeFiles/darknet2ncnn.dir/darknet2ncnn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/darknet2ncnn.dir/darknet2ncnn.cpp.i"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/tools/darknet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/tools/darknet/darknet2ncnn.cpp > CMakeFiles/darknet2ncnn.dir/darknet2ncnn.cpp.i

tools/darknet/CMakeFiles/darknet2ncnn.dir/darknet2ncnn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/darknet2ncnn.dir/darknet2ncnn.cpp.s"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/tools/darknet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/tools/darknet/darknet2ncnn.cpp -o CMakeFiles/darknet2ncnn.dir/darknet2ncnn.cpp.s

# Object files for target darknet2ncnn
darknet2ncnn_OBJECTS = \
"CMakeFiles/darknet2ncnn.dir/darknet2ncnn.cpp.o"

# External object files for target darknet2ncnn
darknet2ncnn_EXTERNAL_OBJECTS =

tools/darknet/darknet2ncnn: tools/darknet/CMakeFiles/darknet2ncnn.dir/darknet2ncnn.cpp.o
tools/darknet/darknet2ncnn: tools/darknet/CMakeFiles/darknet2ncnn.dir/build.make
tools/darknet/darknet2ncnn: tools/darknet/CMakeFiles/darknet2ncnn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable darknet2ncnn"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/tools/darknet && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/darknet2ncnn.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/darknet/CMakeFiles/darknet2ncnn.dir/build: tools/darknet/darknet2ncnn

.PHONY : tools/darknet/CMakeFiles/darknet2ncnn.dir/build

tools/darknet/CMakeFiles/darknet2ncnn.dir/clean:
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/tools/darknet && $(CMAKE_COMMAND) -P CMakeFiles/darknet2ncnn.dir/cmake_clean.cmake
.PHONY : tools/darknet/CMakeFiles/darknet2ncnn.dir/clean

tools/darknet/CMakeFiles/darknet2ncnn.dir/depend:
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/tools/darknet /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/tools/darknet /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/tools/darknet/CMakeFiles/darknet2ncnn.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/darknet/CMakeFiles/darknet2ncnn.dir/depend

