#!/bin/bash
cd
cd ~/ros2_ws/
source /opt/ros/humble/setup.bash
source install/local_setup.bash
ros2 launch yolo_bringup yolov8.launch.py
