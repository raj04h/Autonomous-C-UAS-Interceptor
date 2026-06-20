import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/mnt/5252B43652B420A1/Deep_Project/Counter_UAS/ros2_WS/install/perception_node'
