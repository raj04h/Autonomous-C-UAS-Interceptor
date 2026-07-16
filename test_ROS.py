"""

# what data? Image
# topic? /world/default/model/x500_0/link/base_link/sensor/front_camera/image
# msg type? sensor_msgs/msg/Image
# action logic? Print Frame Count, Width, Height, Encoding


MicroXRCEAgent udp4 -p 8888
make px4_sitl gz_x500
./QGCS.AppImage

"""
"""
ROS2 Launch

1. ros2 run perception_node detector_pipeline

2. ros2 run tracking_node tracker_pipeline
3. ros2 run estimation_node estimator_pipeline

4. ros2 run guidance_node guidance_pipeline
5. ros2 run control_node control_pipeline

6. ros2 run visualization_node visualization_pipeline

ros2 topic echo /tracks --once


source install/setup.bash
ros2 launch uas_launch uas.launch.py


"""

"""
BACKEND & Frontend

source /opt/ros/humble/setup.bash
source ros2_WS/install/setup.bash

1. python3 -m backend.main
2. python3 -m backend.ros2_bridge.bridge_pipeline
3. python3 -m backend.test_connection

4. python3 -m frontend.app
"""

"""
DEVOPS

docker build -f docker/Dockerfile.ros2 -t counter-uas-ros:latest .

docker build -f docker/Dockerfile.backend -t counter-uas-backend:latest .

docker build -f docker/Dockerfile.frontend -t counter-uas-frontend:latest .
"""
