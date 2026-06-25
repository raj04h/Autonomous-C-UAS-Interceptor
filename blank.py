"""

# what data? Image

# topic? /world/default/model/x500_0/link/base_link/sensor/front_camera/image

# msg type? sensor_msgs/msg/Image

# action logic? Print Frame Count, Width, Height, Encoding





ros2 pkg executables perception_node

ros2 pkg executables tracking_node




source /opt/ros/humble/setup.bash

source install/setup.bash

ros2 run perception_node detector_pipeline




source /opt/ros/humble/setup.bash

source install/setup.bash

ros2 run tracking_node tracker_pipeline




source install/setup.bash

ros2 topic echo /detections --once




source install/setup.bash

ros2 topic echo /tracks --once

"""