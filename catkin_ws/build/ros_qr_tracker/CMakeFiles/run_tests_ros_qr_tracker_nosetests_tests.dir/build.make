# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /ros/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /ros/catkin_ws/build

# Utility rule file for run_tests_ros_qr_tracker_nosetests_tests.

# Include the progress variables for this target.
include ros_qr_tracker/CMakeFiles/run_tests_ros_qr_tracker_nosetests_tests.dir/progress.make

ros_qr_tracker/CMakeFiles/run_tests_ros_qr_tracker_nosetests_tests:
	cd /ros/catkin_ws/build/ros_qr_tracker && ../catkin_generated/env_cached.sh /usr/bin/python /opt/ros/kinetic/share/catkin/cmake/test/run_tests.py /ros/catkin_ws/build/test_results/ros_qr_tracker/nosetests-tests.xml "/usr/bin/cmake -E make_directory /ros/catkin_ws/build/test_results/ros_qr_tracker" "/usr/bin/nosetests-2.7 -P --process-timeout=60 --where=/ros/catkin_ws/src/ros_qr_tracker/tests --with-xunit --xunit-file=/ros/catkin_ws/build/test_results/ros_qr_tracker/nosetests-tests.xml"

run_tests_ros_qr_tracker_nosetests_tests: ros_qr_tracker/CMakeFiles/run_tests_ros_qr_tracker_nosetests_tests
run_tests_ros_qr_tracker_nosetests_tests: ros_qr_tracker/CMakeFiles/run_tests_ros_qr_tracker_nosetests_tests.dir/build.make

.PHONY : run_tests_ros_qr_tracker_nosetests_tests

# Rule to build all files generated by this target.
ros_qr_tracker/CMakeFiles/run_tests_ros_qr_tracker_nosetests_tests.dir/build: run_tests_ros_qr_tracker_nosetests_tests

.PHONY : ros_qr_tracker/CMakeFiles/run_tests_ros_qr_tracker_nosetests_tests.dir/build

ros_qr_tracker/CMakeFiles/run_tests_ros_qr_tracker_nosetests_tests.dir/clean:
	cd /ros/catkin_ws/build/ros_qr_tracker && $(CMAKE_COMMAND) -P CMakeFiles/run_tests_ros_qr_tracker_nosetests_tests.dir/cmake_clean.cmake
.PHONY : ros_qr_tracker/CMakeFiles/run_tests_ros_qr_tracker_nosetests_tests.dir/clean

ros_qr_tracker/CMakeFiles/run_tests_ros_qr_tracker_nosetests_tests.dir/depend:
	cd /ros/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /ros/catkin_ws/src /ros/catkin_ws/src/ros_qr_tracker /ros/catkin_ws/build /ros/catkin_ws/build/ros_qr_tracker /ros/catkin_ws/build/ros_qr_tracker/CMakeFiles/run_tests_ros_qr_tracker_nosetests_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ros_qr_tracker/CMakeFiles/run_tests_ros_qr_tracker_nosetests_tests.dir/depend
