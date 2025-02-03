import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/jackson/Final_simulation_full/gazebo_yolo_simulation/yolo_sim/install/yolo_ros'
