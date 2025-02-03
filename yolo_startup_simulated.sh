#!/bin/bash
cd
cd ~/Final_simulation_full/gazebo_yolo_simulation/yolo_sim
source /opt/ros/humble/setup.bash
source install/local_setup.bash
ros2 launch yolo_bringup yolov8.launch.py
