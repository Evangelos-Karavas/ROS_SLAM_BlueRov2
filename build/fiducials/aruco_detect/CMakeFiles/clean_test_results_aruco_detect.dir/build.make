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
CMAKE_SOURCE_DIR = /home/user/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/catkin_ws/build

# Utility rule file for clean_test_results_aruco_detect.

# Include the progress variables for this target.
include fiducials/aruco_detect/CMakeFiles/clean_test_results_aruco_detect.dir/progress.make

fiducials/aruco_detect/CMakeFiles/clean_test_results_aruco_detect:
	cd /home/user/catkin_ws/build/fiducials/aruco_detect && /usr/bin/python2 /opt/ros/melodic/share/catkin/cmake/test/remove_test_results.py /home/user/catkin_ws/build/test_results/aruco_detect

clean_test_results_aruco_detect: fiducials/aruco_detect/CMakeFiles/clean_test_results_aruco_detect
clean_test_results_aruco_detect: fiducials/aruco_detect/CMakeFiles/clean_test_results_aruco_detect.dir/build.make

.PHONY : clean_test_results_aruco_detect

# Rule to build all files generated by this target.
fiducials/aruco_detect/CMakeFiles/clean_test_results_aruco_detect.dir/build: clean_test_results_aruco_detect

.PHONY : fiducials/aruco_detect/CMakeFiles/clean_test_results_aruco_detect.dir/build

fiducials/aruco_detect/CMakeFiles/clean_test_results_aruco_detect.dir/clean:
	cd /home/user/catkin_ws/build/fiducials/aruco_detect && $(CMAKE_COMMAND) -P CMakeFiles/clean_test_results_aruco_detect.dir/cmake_clean.cmake
.PHONY : fiducials/aruco_detect/CMakeFiles/clean_test_results_aruco_detect.dir/clean

fiducials/aruco_detect/CMakeFiles/clean_test_results_aruco_detect.dir/depend:
	cd /home/user/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/catkin_ws/src /home/user/catkin_ws/src/fiducials/aruco_detect /home/user/catkin_ws/build /home/user/catkin_ws/build/fiducials/aruco_detect /home/user/catkin_ws/build/fiducials/aruco_detect/CMakeFiles/clean_test_results_aruco_detect.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : fiducials/aruco_detect/CMakeFiles/clean_test_results_aruco_detect.dir/depend

