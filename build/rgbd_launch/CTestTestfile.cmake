# CMake generated Testfile for 
# Source directory: /home/heshamgamal/catkin_ws_1/src/rgbd_launch
# Build directory: /home/heshamgamal/catkin_ws_1/build/rgbd_launch
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_rgbd_launch_roslaunch-check_launch "/home/heshamgamal/catkin_ws_1/build/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/heshamgamal/catkin_ws_1/build/test_results/rgbd_launch/roslaunch-check_launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/heshamgamal/catkin_ws_1/build/test_results/rgbd_launch" "/opt/ros/noetic/share/roslaunch/cmake/../scripts/roslaunch-check -o \"/home/heshamgamal/catkin_ws_1/build/test_results/rgbd_launch/roslaunch-check_launch.xml\" \"/home/heshamgamal/catkin_ws_1/src/rgbd_launch/launch\" ")
set_tests_properties(_ctest_rgbd_launch_roslaunch-check_launch PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/roslaunch/cmake/roslaunch-extras.cmake;66;catkin_run_tests_target;/home/heshamgamal/catkin_ws_1/src/rgbd_launch/CMakeLists.txt;19;roslaunch_add_file_check;/home/heshamgamal/catkin_ws_1/src/rgbd_launch/CMakeLists.txt;0;")
add_test(_ctest_rgbd_launch_roslaunch-check_test "/home/heshamgamal/catkin_ws_1/build/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/heshamgamal/catkin_ws_1/build/test_results/rgbd_launch/roslaunch-check_test.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/heshamgamal/catkin_ws_1/build/test_results/rgbd_launch" "/opt/ros/noetic/share/roslaunch/cmake/../scripts/roslaunch-check -o \"/home/heshamgamal/catkin_ws_1/build/test_results/rgbd_launch/roslaunch-check_test.xml\" \"/home/heshamgamal/catkin_ws_1/src/rgbd_launch/test\" ")
set_tests_properties(_ctest_rgbd_launch_roslaunch-check_test PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/roslaunch/cmake/roslaunch-extras.cmake;66;catkin_run_tests_target;/home/heshamgamal/catkin_ws_1/src/rgbd_launch/CMakeLists.txt;20;roslaunch_add_file_check;/home/heshamgamal/catkin_ws_1/src/rgbd_launch/CMakeLists.txt;0;")
add_test(_ctest_rgbd_launch_rostest_test_camera.test "/home/heshamgamal/catkin_ws_1/build/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/heshamgamal/catkin_ws_1/build/test_results/rgbd_launch/rostest-test_camera.xml" "--return-code" "/usr/bin/python3 /opt/ros/noetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/heshamgamal/catkin_ws_1/src/rgbd_launch --package=rgbd_launch --results-filename test_camera.xml --results-base-dir \"/home/heshamgamal/catkin_ws_1/build/test_results\" /home/heshamgamal/catkin_ws_1/src/rgbd_launch/test/camera.test ")
set_tests_properties(_ctest_rgbd_launch_rostest_test_camera.test PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/heshamgamal/catkin_ws_1/src/rgbd_launch/CMakeLists.txt;21;add_rostest;/home/heshamgamal/catkin_ws_1/src/rgbd_launch/CMakeLists.txt;0;")
