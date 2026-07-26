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

Master Launching cmd-
source install/setup.bash
ros2 launch uas_launch uas.launch.py

"""

"""
BACKEND & Frontend

source /opt/ros/humble/setup.bash
source ros2_WS/install/setup.bash

1. python3 -m backend.main
2. python3 -m frontend.app
"""

"""
DEVOPS

1. docker build -f docker/Dockerfile.ros2 -t counter-uas-ros:latest .

2. docker build -f docker/Dockerfile.backend -t counter-uas-backend:latest .

3. docker build -f docker/Dockerfile.frontend -t counter-uas-frontend:latest .
"""

"""
Gazebo Virtual World Launch

| Final time      | Content                                                       | Duration |
| --------------- | ------------------------------------------------------------- | -------: |
| `0:00–0:05`     | Title + one-line system objective                             |      5 s |
| `0:05–0:13`     | Architecture diagram                                          |      8 s |
| `0:13–0:21`     | Gazebo air-to-air simulation + target trajectory              |      8 s |
| `0:21–0:29`     | Code montage: perception/tracking/estimation/guidance/control |      8 s |
| `0:29–0:39`     | Dashboard / telemetry                                         |     10 s |
| **`0:39–1:09`** | **Main autonomous visualization demo**                        | **30 s** |
| `1:09–1:16`     | Stack / system summary                                        |      7 s |
| `1:16–1:20`     | Closing project title                                         |      4 s |



| Phase                  | Duration |   Airspeed | Turn Radius | Climb / Descent |  Roll |     Pitch | Heading Change | Purpose                          |
| ---------------------- | -------: | ---------: | ----------: | --------------: | ----: | --------: | -------------: | -------------------------------- |
| **1. Patrol**          |    0–6 s | **18 m/s** |    Straight |        +0.2 m/s |   ±3° |       +2° |            +5° | Initialize YOLO & DeepSORT       |
| **2. Threat Reaction** |   6–14 s | **22 m/s** |        50 m |        +1.2 m/s |   20° |       +6° |           +55° | Rapid lateral motion             |
| **3. Defensive Weave** |  14–24 s | **24 m/s** |        35 m |        ±0.8 m/s |  ±22° | +3° / −2° |           ±40° | Stress tracking and Kalman       |
| **4. Terrain Mask**    |  24–32 s | **26 m/s** |        60 m |        −2.0 m/s |  −15° |       −8° |           +20° | Fly low along river              |
| **5. Convergence**     |  32–38 s | **20 m/s** |        80 m |               0 |   →0° |       →0° |            →0° | Bring target toward image center |
| **6. LOCK**            |  38–44 s | **19 m/s** |    Straight |               0 |   ±1° |     ±0.5° |            ±1° | Hold target near (640,360)       |
| **7. Missile Break**   |  44–52 s | **28 m/s** |        25 m |        +2.0 m/s |   30° |       +7° |           +80° | Force LOCK → SEARCH transition   |
| **8. Reacquisition**   |  52–57 s | **22 m/s** |        40 m |        −0.8 m/s |  −20° |       −3° |           −55° | Recover track                    |
| **9. Final LOCK**      |  57–60 s | **18 m/s** |    Straight |               0 | ±0.5° |     ±0.3° |          ±0.5° | End video with stable lock       |


"""
