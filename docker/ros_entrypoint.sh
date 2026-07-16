#!/bin/bash
set -e

# Source ROS2
source /opt/ros/humble/setup.bash

# Source workspace
if [ -f "/Counter_UAS/ros2_WS/install/setup.bash" ]; then
    source /Counter_UAS/ros2_WS/install/setup.bash
fi

# Execute container command
exec "$@"