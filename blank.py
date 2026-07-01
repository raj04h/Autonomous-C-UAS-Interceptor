"""

# what data? Image

# topic? /world/default/model/x500_0/link/base_link/sensor/front_camera/image

# msg type? sensor_msgs/msg/Image

# action logic? Print Frame Count, Width, Height, Encoding





ros2 pkg executables perception_node


MicroXRCEAgent udp4 -p 8888
make px4_sitl gz_x500
./QGCS.AppImage


ros2 run perception_node detector_pipeline

ros2 run tracking_node tracker_pipeline
ros2 run estimation_node estimator_pipeline

ros2 run guidance_node guidance_pipeline
ros2 run control_node control_pipeline




source install/setup.bash

ros2 topic echo /detections --once

ros2 topic echo /tracks --once

"""

"""
Guidance Publisher Manager
"""


"""
Guidance Benchmark
"""
