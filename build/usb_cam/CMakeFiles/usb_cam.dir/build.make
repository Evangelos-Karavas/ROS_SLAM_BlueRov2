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

# Include any dependencies generated for this target.
include usb_cam/CMakeFiles/usb_cam.dir/depend.make

# Include the progress variables for this target.
include usb_cam/CMakeFiles/usb_cam.dir/progress.make

# Include the compile flags for this target's objects.
include usb_cam/CMakeFiles/usb_cam.dir/flags.make

usb_cam/CMakeFiles/usb_cam.dir/src/usb_cam.cpp.o: usb_cam/CMakeFiles/usb_cam.dir/flags.make
usb_cam/CMakeFiles/usb_cam.dir/src/usb_cam.cpp.o: /home/user/catkin_ws/src/usb_cam/src/usb_cam.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object usb_cam/CMakeFiles/usb_cam.dir/src/usb_cam.cpp.o"
	cd /home/user/catkin_ws/build/usb_cam && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/usb_cam.dir/src/usb_cam.cpp.o -c /home/user/catkin_ws/src/usb_cam/src/usb_cam.cpp

usb_cam/CMakeFiles/usb_cam.dir/src/usb_cam.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/usb_cam.dir/src/usb_cam.cpp.i"
	cd /home/user/catkin_ws/build/usb_cam && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/catkin_ws/src/usb_cam/src/usb_cam.cpp > CMakeFiles/usb_cam.dir/src/usb_cam.cpp.i

usb_cam/CMakeFiles/usb_cam.dir/src/usb_cam.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/usb_cam.dir/src/usb_cam.cpp.s"
	cd /home/user/catkin_ws/build/usb_cam && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/catkin_ws/src/usb_cam/src/usb_cam.cpp -o CMakeFiles/usb_cam.dir/src/usb_cam.cpp.s

usb_cam/CMakeFiles/usb_cam.dir/src/usb_cam.cpp.o.requires:

.PHONY : usb_cam/CMakeFiles/usb_cam.dir/src/usb_cam.cpp.o.requires

usb_cam/CMakeFiles/usb_cam.dir/src/usb_cam.cpp.o.provides: usb_cam/CMakeFiles/usb_cam.dir/src/usb_cam.cpp.o.requires
	$(MAKE) -f usb_cam/CMakeFiles/usb_cam.dir/build.make usb_cam/CMakeFiles/usb_cam.dir/src/usb_cam.cpp.o.provides.build
.PHONY : usb_cam/CMakeFiles/usb_cam.dir/src/usb_cam.cpp.o.provides

usb_cam/CMakeFiles/usb_cam.dir/src/usb_cam.cpp.o.provides.build: usb_cam/CMakeFiles/usb_cam.dir/src/usb_cam.cpp.o


# Object files for target usb_cam
usb_cam_OBJECTS = \
"CMakeFiles/usb_cam.dir/src/usb_cam.cpp.o"

# External object files for target usb_cam
usb_cam_EXTERNAL_OBJECTS =

/home/user/catkin_ws/devel/lib/libusb_cam.so: usb_cam/CMakeFiles/usb_cam.dir/src/usb_cam.cpp.o
/home/user/catkin_ws/devel/lib/libusb_cam.so: usb_cam/CMakeFiles/usb_cam.dir/build.make
/home/user/catkin_ws/devel/lib/libusb_cam.so: /opt/ros/melodic/lib/libcv_bridge.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_core.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_imgcodecs.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /opt/ros/melodic/lib/libimage_transport.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /opt/ros/melodic/lib/libmessage_filters.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /opt/ros/melodic/lib/libclass_loader.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/libPocoFoundation.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libdl.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /opt/ros/melodic/lib/libroslib.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /opt/ros/melodic/lib/librospack.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libpython2.7.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /opt/ros/melodic/lib/libcamera_info_manager.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /opt/ros/melodic/lib/libcamera_calibration_parsers.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /opt/ros/melodic/lib/libroscpp.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /opt/ros/melodic/lib/librosconsole.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /opt/ros/melodic/lib/librostime.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /opt/ros/melodic/lib/libcpp_common.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_shape.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_aruco.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_bgsegm.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_bioinspired.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_ccalib.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_datasets.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_dpm.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_face.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_freetype.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_fuzzy.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_hdf.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_line_descriptor.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_optflow.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_plot.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_reg.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_saliency.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_stereo.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_structured_light.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_surface_matching.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_text.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_ximgproc.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_xobjdetect.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_xphoto.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_video.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_viz.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_phase_unwrapping.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_rgbd.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_videoio.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_imgcodecs.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: /usr/lib/x86_64-linux-gnu/libopencv_core.so.3.2.0
/home/user/catkin_ws/devel/lib/libusb_cam.so: usb_cam/CMakeFiles/usb_cam.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library /home/user/catkin_ws/devel/lib/libusb_cam.so"
	cd /home/user/catkin_ws/build/usb_cam && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/usb_cam.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
usb_cam/CMakeFiles/usb_cam.dir/build: /home/user/catkin_ws/devel/lib/libusb_cam.so

.PHONY : usb_cam/CMakeFiles/usb_cam.dir/build

usb_cam/CMakeFiles/usb_cam.dir/requires: usb_cam/CMakeFiles/usb_cam.dir/src/usb_cam.cpp.o.requires

.PHONY : usb_cam/CMakeFiles/usb_cam.dir/requires

usb_cam/CMakeFiles/usb_cam.dir/clean:
	cd /home/user/catkin_ws/build/usb_cam && $(CMAKE_COMMAND) -P CMakeFiles/usb_cam.dir/cmake_clean.cmake
.PHONY : usb_cam/CMakeFiles/usb_cam.dir/clean

usb_cam/CMakeFiles/usb_cam.dir/depend:
	cd /home/user/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/catkin_ws/src /home/user/catkin_ws/src/usb_cam /home/user/catkin_ws/build /home/user/catkin_ws/build/usb_cam /home/user/catkin_ws/build/usb_cam/CMakeFiles/usb_cam.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : usb_cam/CMakeFiles/usb_cam.dir/depend

