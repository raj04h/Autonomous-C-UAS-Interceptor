# Counter-UAS Autonomous Interceptor

## Objective

Vision-based autonomous interceptor drone capable of:

- Detecting aerial targets
- Tracking targets
- Predicting trajectory
- Autonomous interception


## Versions
| Version | Product                                             |
| ------- | --------------------------------------------------- |
| V1      | Vision-Based Autonomous Interceptor                 |
| V2      | Vision-Based 3D Target Localization Platform        |
| V3      | GPS-Denied Visual Navigation Platform               |
| V4      | Vision-Based Autonomy Stack for GPS-Denied Robotics |


## Current Phase
Phase 1:
PX4 + Gazebo + ROS2 Foundation

## Status
[ ] PX4 SITL,
[ ] Gazebo,
[ ] ROS2,
[ ] Camera Stream,
[ ] Telemetry


# Phase P1: Simulation Foundation & PX4-ROS2 Integration

## Objective

Establish a stable simulation and communication stack for the Counter-UAS Autonomous Interceptor project.

Goal:

PX4 SITL + Gazebo + QGroundControl + ROS2 working together with real-time telemetry communication.

---

## Architecture

                                QGroundControl
                                        ▲
                                        │ MAVLink
                                        │
                    Gazebo World ───► PX4 SITL
                                        │
                                        │ uXRCE DDS
                                        ▼
                                MicroXRCEAgent
                                        │
                                        ▼
                                        ROS2
                                        │
                                        ▼
                                Future Autonomy Stack

---

## Components Installed & Verified

### Simulation

- PX4 SITL v1.15.4
- Gazebo
- QGroundControl

### Middleware

- ROS2 Humble
- MicroXRCEAgent
- px4_msgs

### Communication

- MAVLink (PX4 ↔ QGroundControl)
- DDS (PX4 ↔ ROS2)

---

## Execution Steps

### Step 1: Start DDS Bridge

```bash
MicroXRCEAgent udp4 -p 8888

make px4_sitl gz_x500

source /opt/ros/humble/setup.bash

ros2 topic list | grep fmu

git clone https://github.com/PX4/px4_msgs.git


cd ros2_WS

colcon build

source install/setup.bash









Final Repo-

counter_uas/

├── docs/
├── configs/
├── simulation/
│
├── ros2_ws/
│   └── src/
│
│       ├── interfaces/
│
│       ├── sensor_node/
│       ├── perception_node/
│       ├── tracking_node/
│       ├── estimation_node/
│       ├── guidance_node/
│       ├── control_node/
│       ├── telemetry_node/
│       ├── mission_manager/
│
│       ├── stereo_node/
│       ├── depth_estimation_node/
│
│       ├── vio_node/
│       ├── imu_fusion_node/
│
│       ├── slam_node/
│       ├── mapping_node/
│       ├── localization_node/
│       └── path_planner_node/
│
├── backend/
│
├── dashboard/
│
├── models/
│   ├── yolo/
│   ├── reid/
│   ├── stereo/
│   ├── vio/
│   └── slam/
│
├── datasets/
│   ├── detection/
│   ├── stereo/
│   ├── vio/
│   └── slam/
│
├── logs/
├── tests/
└── scripts/


┌─────────────────────────────────────────────────────────────────────────────┐
│                           15-DAY DEVELOPMENT TIMELINE                       │
├──────────────┬──────────────────────────────────────────────────────────────┤
│ Days 1 - 3   │ Infrastructure & Simulation Lock                             │
│              │ - Docker multi-stage environment build (`04_Infrastructure`) │
│              │ - Gazebo World & dual-drone configuration setup (`03_Gazebo`)│
├──────────────┼──────────────────────────────────────────────────────────────┤
│ Days 4 - 7   │ Perception, Geometry, and State Estimation                  │
│              │ - Custom ROS2 Node image pipelines (`03_ROSDesign`)          │
│              │ - YOLO / DeepSORT implementation + PnP transformation        │
│              │ - Kalman Filter state matrix definition (`02_Algorithms`)    │
├──────────────┼──────────────────────────────────────────────────────────────┤
│ Days 8 - 11  │ Guidance Autonomy & PX4 Offboard Integration                 │
│              │ - PX4 flight state transitions config via DDS/MAVLink        │
│              │ - Implementation of 3D Proportional Navigation loop         │
├──────────────┼──────────────────────────────────────────────────────────────┤
│ Days 12 - 14 │ C2 Gateway, Database & Streaming Interface                   │
│              │ - FastAPI application, database schemas & model connections  │
│              │ - Non-blocking WebSocket node data forwarders                │
├──────────────┼──────────────────────────────────────────────────────────────┤
│ Day 15       │ Complete Integrated Loop Testing & Metric Log Validation     │
└──────────────┴──────────────────────────────────────────────────────────────┘