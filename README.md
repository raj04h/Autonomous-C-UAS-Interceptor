# Counter-UAS Autonomous Interceptor

## Overview

Counter-UAS Autonomous Interceptor is a vision-based autonomous aerial interception system designed to detect, track, predict, and pursue hostile UAVs using only onboard sensors.

The system combines PX4, Gazebo, ROS2, Computer Vision, State Estimation, Guidance, and Autonomous Flight Control into a unified autonomy stack capable of operating without receiving GPS coordinates from the target vehicle.

The project is being developed incrementally through simulation-first validation, beginning with perception and progressing toward fully autonomous interception.

---

## Objective

Develop a complete vision-based autonomous interceptor capable of:

- Detecting aerial targets
- Tracking moving targets
- Estimating target state
- Predicting future trajectory
- Generating interception commands
- Executing autonomous pursuit

---

## System Capability

Given only:

- Camera feed
- Vehicle telemetry
- Vehicle attitude
- Vehicle position

the interceptor drone autonomously:

- Detects a target
- Maintains persistent tracking
- Estimates target motion
- Predicts future position
- Generates pursuit commands
- Attempts autonomous interception

without receiving GPS coordinates from the target.

---

## System Architecture

```text
                     Target Drone
                           │
                           ▼
                    Camera Sensor
                           │
                           ▼
                    Perception Layer
                           │
                           ▼
                     Tracking Layer
                           │
                           ▼
                 State Estimation Layer
                           │
                           ▼
                    Guidance Layer
                           │
                           ▼
                     Control Layer
                           │
                           ▼
                      PX4 Offboard
                           │
                           ▼
                  Interceptor Vehicle
```

---

## Product Evolution

| Version | Product |
|----------|----------|
| V1 | Vision-Based Autonomous Interceptor |
| V2 | Vision-Based 3D Target Localization Platform |
| V3 | GPS-Denied Visual Navigation Platform |
| V4 | Vision-Based Autonomy Stack for GPS-Denied Robotics |

---

## Development Roadmap

| Phase | Layer | Status |
|---------|---------|---------|
| P1 | Simulation Foundation & PX4-ROS2 Integration | ✅ Completed |
| P2 | ROS2 Application Layer | ✅ Completed |
| P3 | Camera & Perception Foundation | ✅ Completed |
| P4 | Detection Layer | ✅ Completed |
| P5 | Tracking Layer | ⏳ In Progress |
| P6 | State Estimation Layer | ⏳ Planned |
| P7 | Guidance Layer | ⏳ Planned |
| P8 | Control Layer | ⏳ Planned |

---

---

## Long-Term Vision

Transform the interceptor stack into a reusable autonomy platform for:

- Counter-UAS Systems
- Autonomous Surveillance Systems
- GPS-Denied Robotics
- Autonomous Inspection Platforms
- Vision-Based Navigation Systems
- Defense and Aerospace Applications


# P1 – Simulation Foundation & PX4-ROS2 Integration

## Objective

Establish a stable simulation and communication stack for the Counter-UAS Autonomous Interceptor project.

Goal:

```text
PX4 SITL + Gazebo + QGroundControl + ROS2
working together with real-time telemetry communication.
```

---

## Architecture

```text
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
```

---

## Components

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

### P1.1 – Start DDS Bridge

#### Goal

Establish DDS communication between PX4 and ROS2.

#### Command

```bash
MicroXRCEAgent udp4 -p 8888
```

---

### P1.2 – Launch PX4 SITL + Gazebo

#### Goal

Start PX4 simulator and Gazebo environment.

#### Command

```bash
make px4_sitl gz_x500
```

---

### P1.3 – Launch QGroundControl

#### Goal

Connect Ground Control Station to PX4.

#### Command

```bash
./QGC.AppImage
```

---

### P1.4 – Install PX4 ROS2 Message Definitions

#### Goal

Install PX4 ROS2 interface package.

#### Commands

```bash
cd ros2_WS/src

git clone https://github.com/PX4/px4_msgs.git
```

---

### P1.5 – Create ROS2 Workspace

#### Goal

Prepare ROS2 development workspace.

#### Commands

```bash
mkdir -p ros2_WS/src

cd ros2_WS
```

---

### P1.6 – Build ROS2 Workspace

#### Goal

Generate ROS2 interfaces and package metadata.

#### Commands

```bash
cd ros2_WS

colcon build

source install/setup.bash
```

---

### P1.7 – Verify PX4 Topics

#### Goal

Verify DDS bridge communication.

#### Commands

```bash
ros2 topic list | grep fmu
```

Expected Topics:

```text
/fmu/out/vehicle_local_position
/fmu/out/vehicle_status
/fmu/out/vehicle_attitude
/fmu/out/vehicle_odometry
```

---

### P1.8 – Verify Telemetry Streaming

#### Goal

Confirm PX4 telemetry reaches ROS2.

#### Commands

```bash
ros2 topic echo \
/fmu/out/vehicle_local_position
```

---

### P1.9 – Verify Telemetry Frequency

#### Goal

Validate streaming performance.

#### Commands

```bash
ros2 topic hz \
/fmu/out/vehicle_local_position
```

Expected:

```text
~100 Hz
```

---

## Verification

### PX4 Topics Available

```bash
ros2 topic list | grep fmu
```

### PX4 Messages Available

```bash
ros2 interface list | grep px4
```

### Telemetry Streaming

```bash
ros2 topic echo \
/fmu/out/vehicle_local_position
```

### Telemetry Frequency

```bash
ros2 topic hz \
/fmu/out/vehicle_local_position
```

Observed:

```text
~100 Hz
```

---


# P2 – ROS2 Application Layer

## Objective

Establish PX4 ↔ ROS2 communication at the application layer and create custom ROS2 nodes for telemetry monitoring and vehicle state awareness.

Goal:

```text
PX4 Telemetry
        │
        ▼
ROS2 Subscribers
        │
        ▼
Application Layer Nodes
        │
        ▼
Vehicle Monitoring
```

---

## Architecture

```text
PX4 SITL
    │
    ▼
DDS Bridge
    │
    ▼
ROS2
    │
    ├──────────────► telemetry_listener.py
    │
    └──────────────► vehicle_status_listener.py
                                │
                                ▼
                      Vehicle Monitoring
```

---

## Components

### ROS2 Packages

```text
interfaces
sensor_node
perception_node
tracking_node
estimation_node
guidance_node
control_node
```

---

### Sensor Node

```text
telemetry_listener.py

vehicle_status_listener.py

camera_listener.py
```

---

### PX4 Topics

```text
/fmu/out/vehicle_local_position

/fmu/out/vehicle_status
```

---

## Execution Steps

### P2.1 – Create ROS2 Package Structure

#### Goal

Create project package architecture for future autonomy stack development.

#### Commands

```bash
cd ros2_WS/src

ros2 pkg create \
--build-type ament_python \
sensor_node

ros2 pkg create \
--build-type ament_python \
perception_node

ros2 pkg create \
--build-type ament_python \
tracking_node

ros2 pkg create \
--build-type ament_python \
estimation_node

ros2 pkg create \
--build-type ament_python \
guidance_node

ros2 pkg create \
--build-type ament_python \
control_node

ros2 pkg create \
--build-type ament_cmake \
interfaces
```

---

### P2.2 – Telemetry Subscriber

#### Goal

Receive vehicle position and velocity data from PX4.

#### Topic

```text
/fmu/out/vehicle_local_position
```

#### Extracted Data

```text
Position X

Position Y

Position Z

Velocity X

Velocity Y

Velocity Z
```

---

### P2.3 – Vehicle Status Subscriber

#### Goal

Monitor vehicle state information.

#### Topic

```text
/fmu/out/vehicle_status
```

#### Extracted Data

```text
Arming State

Navigation State

Vehicle State
```

---

### P2.4 – Telemetry Monitoring

#### Goal

Verify telemetry data is continuously received from PX4.

#### Command

```bash
ros2 run sensor_node telemetry_listener
```

---

### P2.5 – Vehicle Status Monitoring

#### Goal

Verify vehicle state information is continuously received.

#### Command

```bash
ros2 run sensor_node vehicle_status_listener
```

---

## Verification

### Verify Telemetry Topic

```bash
ros2 topic echo \
/fmu/out/vehicle_local_position
```

---

### Verify Vehicle Status Topic

```bash
ros2 topic echo \
/fmu/out/vehicle_status
```

---

### Verify Telemetry Frequency

```bash
ros2 topic hz \
/fmu/out/vehicle_local_position
```

Observed:

```text
~100 Hz
```

---

### Verify Package Registration

```bash
ros2 pkg executables sensor_node
```

Expected:

```text
telemetry_listener

vehicle_status_listener
```

---


# P3 – Camera & Perception Foundation

## Objective

Establish the perception foundation by integrating camera sensing into the simulation environment and investigating image transport between Gazebo and ROS2.

Goal:

```text
Gazebo Camera
        │
        ▼
Image Stream
        │
        ▼
ROS2 Camera Pipeline
        │
        ▼
OpenCV Processing
```

---

## Architecture

```text
PX4 SITL
    │
    ▼
Gazebo Camera
    │
    ▼
Gazebo Transport
    │
    ▼
ROS-Gazebo Bridge
    │
    ▼
ROS2 Camera Node
    │
    ▼
OpenCV Frame
```

---

## Components

### Camera System

```text
Front Camera Sensor

Camera Info Stream

Image Stream
```

---

### Gazebo Topics

```text
/world/default/model/x500_0/link/base_link/sensor/front_camera/image

/world/default/model/x500_0/link/base_link/sensor/front_camera/camera_info
```

---

### ROS2 Node

```text
camera_listener.py
```

---

## Execution Steps

### P3.1 – Camera Sensor Integration

#### Goal

Attach a front-facing camera sensor to the PX4 X500 vehicle.

#### Result

```text
Camera Sensor Added

Camera Stream Available

Camera Calibration Data Available
```

---

### P3.2 – Camera Topic Discovery

#### Goal

Verify camera topics inside Gazebo Transport.

#### Commands

```bash
gz topic -l | grep front_camera
```

---

#### Inspect Image Stream

```bash
gz topic -e -t \
/world/default/model/x500_0/link/base_link/sensor/front_camera/image
```

---

#### Inspect Camera Information

```bash
gz topic -e -t \
/world/default/model/x500_0/link/base_link/sensor/front_camera/camera_info
```

---

### P3.3 – Camera Subscriber Node

#### Goal

Create ROS2 node for camera image subscription.

#### Node

```text
camera_listener.py
```

#### Implementation

```text
ROS2 Subscriber

sensor_msgs/Image

QoS Configuration
```

---

### P3.4 – ROS-Gazebo Image Bridge

#### Goal

Forward Gazebo camera stream into ROS2.

#### Camera Info Bridge

```bash
ros2 run ros_gz_bridge parameter_bridge \
/world/default/model/x500_0/link/base_link/sensor/front_camera/camera_info@sensor_msgs/msg/CameraInfo@gz.msgs.CameraInfo
```

---

#### Image Bridge

```bash
ros2 run ros_gz_image image_bridge \
/world/default/model/x500_0/link/base_link/sensor/front_camera/image
```

---

## Verification

### Verify Camera Topics

```bash
gz topic -l | grep front_camera
```

Expected:

```text
Image Topic

Camera Info Topic
```

---

### Verify Camera Stream

```bash
gz topic -e -t \
/world/default/model/x500_0/link/base_link/sensor/front_camera/image
```

Observed:

```text
Image Frames Streaming
```

---

### Verify Camera Information

```bash
gz topic -e -t \
/world/default/model/x500_0/link/base_link/sensor/front_camera/camera_info
```

Observed:

```text
Camera Intrinsics Available

Camera Calibration Available

Resolution Available
```

---

### Verify ROS2 Camera Topic

```bash
ros2 topic list
```

Observed:

```text
Camera Topic Visible
```

---

## Limitations

ROS2 Image Frames         ✗
```

---

### Missing Components

```text
sensor_msgs/Image

cv_bridge

image_transport

compressed image transport

camera_info synchronization
```

---

### Root Cause

```text
ros_gz_image

ROS Image Transport

Gazebo → ROS2 Image Forwarding
```

Issue isolated to image bridge layer.

---

## Future Improvements

```text
Fix ROS-Gazebo Image Bridge

Enable sensor_msgs/Image Pipeline

Integrate cv_bridge

Integrate image_transport

Direct ROS2 OpenCV Processing
```

---

## Decision

To avoid blocking project development:

```text
Skip ROS-Gazebo image bridge debugging.

Continue perception development using:

Video File Input

OpenCV

YOLO
```

Bridge issue will be revisited later as an infrastructure task.

---


# P4 – Detection Layer

## Objective

Establish the first vision perception pipeline capable of detecting aerial targets and publishing detections into ROS2.

Goal:

```text
Video Input
      │
      ▼
Object Detection
      │
      ▼
ROS2 Detection Publishing
      │
      ▼
Perception Layer Output
```

---

## Architecture

```text
Video File / Webcam
        │
        ▼
Camera Viewer
        │
        ▼
YOLO Detector
        │
        ▼
Detection Publisher
        │
        ▼
ROS2 Topic
        │
        ▼
Detection Message
```

---

## Components

### ROS2 Package

```text
perception_node
```

### Core Nodes

```text
camera_viewer.py

yolo_detector.py

detection_publisher.py
```

### Interface Package

```text
ros2 pkg create \
--build-type ament_cmake \ interfaces

interfaces/msg/Detection.msg
```

---

## Execution Steps

### P4.1 – OpenCV Visualization

#### Goal

Create a video visualization pipeline for perception development.

#### Implementation

Created:

```text
camera_viewer.py
```

#### Features

```text
Video Input

FPS Display

Resolution Display

OpenCV Visualization
```

---

### P4.2 – YOLO Integration

#### Goal

Integrate YOLO detector into the perception pipeline.

#### Implementation

Created:

```text
yolo_detector.py
```

#### Features

```text
Object Detection

Bounding Boxes

Class Labels

Confidence Score

Detection Filtering
```

#### Detection Output

```text
Class

Confidence

Bounding Box
```

---

### P4.3 – Detection Publisher

#### Goal

Publish detections into ROS2.

#### Implementation

Created:

```text
perception_node/detection_publisher.py
```

#### Published Topic

```text
/detections
```

---

### P4.4 – Bounding Box Messages

#### Goal

Create custom ROS2 interface for detection exchange.

#### Implementation

Created:

```text
interfaces/msg/Detection.msg
```

#### Message Structure

```text
string class_name

float32 confidence

int32 x1
int32 y1

int32 x2
int32 y2
```

#### Build Interface

```bash
colcon build \
--packages-select interfaces
```

#### Verify Interface

```bash
ros2 interface show \
interfaces/msg/Detection
```

---

### P4.5 – Detection Visualization

#### Goal

Visualize detection outputs directly on video frames.

#### Features

```text
Bounding Boxes

Class Labels

Confidence Display

Detection Count
```

#### Visualization Pipeline

```text
Frame
  │
  ▼
YOLO Detection
  │
  ▼
Bounding Boxes
  │
  ▼
OpenCV Display
```

---

### P4.6 – Performance Benchmarking

#### Goal

Measure runtime performance of the perception pipeline.

#### Metrics

```text
FPS

Inference Time

Detection Count

Resolution
```

#### Current Observation

```text
Resolution      : 1280x720

FPS             : ~13 FPS

Inference Time  : ~65 ms

Detection Count : Dynamic
```

---

## Verification

### Run Detection Pipeline

```bash
ros2 run perception_node camera_viewer
```

---

### Verify Detection Topic

```bash
ros2 topic list | grep detections
```

Expected:

```text
/detections
```

---

### Verify Detection Messages

```bash
ros2 topic echo /detections
```

Expected:

```text
class_name

confidence

x1
y1

x2
y2
```

---

### Verify Interface

```bash
ros2 interface show \
interfaces/msg/Detection
```

---

## Detection Pipeline

```text
camera_viewer.py
        │
        ▼
yolo_detector.py
        │
        ▼
detection_publisher.py
        │
        ▼
/detections
        │
        ▼
Detection.msg
```

---

## Limitations

```text
Current YOLO model is a general-purpose detector.

Targets may occasionally be classified as:

- Airplane
- Boat
- Truck

instead of Drone.

Small distant targets are difficult to detect.

No target persistence.

No target ID assignment.

No target velocity estimation.
```

---

## Future Improvements

```text
VisDrone Dataset

Anti-UAV Dataset

Custom Drone Detector

YOLO Fine-Tuning

DeepSORT Integration

Track ID Assignment

Multi-Object Tracking
```
---



P5 Tracking
P5.1 Create Tracking Package

P5.2 Create Track Message

P5.3 Build DeepSORT Wrapper

P5.4 Build Tracker Node

P5.5 Publish /tracks

P5.6 Visualize Track IDs

P5.7 Benchmark Tracking



P6 Guidance
P7 Control

Then Dashboard, backend







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
│ Days 4 - 7   │ Perception, Geometry, and State Estimation                   │
│              │ - Custom ROS2 Node image pipelines (`03_ROSDesign`)          │
│              │ - YOLO / DeepSORT implementation + PnP transformation        │
│              │ - Kalman Filter state matrix definition (`02_Algorithms`)    │
├──────────────┼──────────────────────────────────────────────────────────────┤
│ Days 8 - 11  │ Guidance Autonomy & PX4 Offboard Integration                 │
│              │ - PX4 flight state transitions config via DDS/MAVLink        │
│              │ - Implementation of 3D Proportional Navigation loop          │
├──────────────┼──────────────────────────────────────────────────────────────┤
│ Days 12 - 14 │ C2 Gateway, Database & Streaming Interface                   │
│              │ - FastAPI application, database schemas & model connections  │
│              │ - Non-blocking WebSocket node data forwarders                │
├──────────────┼──────────────────────────────────────────────────────────────┤
│ Day 15       │ Complete Integrated Loop Testing & Metric Log Validation     │
└──────────────┴──────────────────────────────────────────────────────────────┘