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
| P5 | Tracking Layer | ✅ Completed |
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

ROS2 Image Frames   

Gazebo Sim ↔ ROS-GZ Bridge layer      ✗
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

Establish a modular perception pipeline capable of detecting aerial targets, visualizing detections, and publishing standardized detection messages into ROS2 for downstream tracking and state estimation.

Goal:

```text
Video Input
      │
      ▼
Target Detection
      │
      ▼
Detection Visualization
      │
      ▼
ROS2 Detection Publishing
      │
      ▼
Perception Output
```

---

## Architecture

```text
Video File
     │
     ▼

Detector Pipeline
     │
     ├── Camera Viewer
     │
     ├── YOLO Detector
     │
     └── Detection Publisher
              │
              ▼

         /detections
              │
              ▼

       Detection.msg
```

---

## ROS2 Package

```text
perception_node
```

---

## Core Components

```text
detector_pipeline.py

camera_viewer.py

yolo_detector.py

detection_publisher.py
```

---

## Interface Package

```text
interfaces/msg/Detection.msg
```

---

## P4.1 – Camera Viewer

### Goal

Create a reusable video visualization component independent of detection and ROS communication.

### Implementation

Created:

```text
camera_viewer.py
```

### Responsibilities

```text
Video Input

Frame Retrieval

FPS Calculation

Detection Rendering

Performance Overlay

OpenCV Visualization
```

### Visualization Features

```text
Target Brackets

Center Crosshair

Target Label

Track-Lock Indicator

FPS Display

Inference Time Display

Resolution Display

Frame Counter
```

---

## P4.2 – YOLO Detector

### Goal

Create a reusable detection component responsible only for inference.

### Implementation

Created:

```text
yolo_detector.py
```

### Responsibilities

```text
Model Loading

YOLO Inference

Detection Filtering

Detection Formatting
```

### Standard Detection Object

```python
{
    "class_name": str,

    "confidence": float,

    "x1": int,
    "y1": int,

    "x2": int,
    "y2": int,

    "center_x": int,
    "center_y": int
}
```

---

## P4.3 – Detection Publisher

### Goal

Create a dedicated ROS2 communication component.

### Implementation

Created:

```text
detection_publisher.py
```

### Responsibilities

```text
Detection Object Conversion

Detection.msg Creation

/detections Publishing
```

---

## P4.4 – Detection Interface

### Goal

Standardize perception outputs for downstream modules.

### Implementation

Created:

```text
interfaces/msg/Detection.msg
```

### Message Definition

```text
string class_name

float32 confidence

int32 x1
int32 y1

int32 x2
int32 y2
```

### Build Interface

```bash
colcon build --packages-select interfaces
```

### Verify Interface

```bash
ros2 interface show interfaces/msg/Detection
```

---

## P4.5 – Detector Pipeline

### Goal

Create a single executable entry point for the perception layer.

### Implementation

Created:

```text
detector_pipeline.py
```

### Responsibilities

```text
Initialize ROS2

Initialize Components

Run Detection Loop

Publish Detections

Render Visualization

Handle Cleanup
```

### Execution Flow

```text
Frame ------------------------------------ 
   │                                     │
   ▼                                     ▼
YOLO Detection                          /frame
  │
  ▼

Detection Object
  │
  ▼

Detection Publisher
  │
  ▼

/detections
  │
  ▼

Visualization
```

---

## P4.6 – Performance Benchmarking

### Goal

Measure runtime performance of the perception pipeline.

### Metrics

```text
FPS

Inference Time

Detection Count

Resolution
```

### Current Observation

```text
Resolution      : 1280 x 720

FPS             : ~16 FPS

Inference Time  : ~53 ms

Detection Count : Dynamic
```

---

## Verification

### Build Package

```bash
cd ros2_WS

colcon build --packages-select perception_node

source install/setup.bash
```

---

### Run Detection Pipeline

```bash
ros2 run perception_node detector_pipeline
```

---

### Verify Detection Topic

```bash
ros2 topic list | grep detections
```

Expected:

```text
/detections
/frame
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
ros2 interface show interfaces/msg/Detection
```

---

## Final Detection Architecture

```text
detector_pipeline.py
        │
        ▼

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


# P5 – Tracking Layer

## Objective

Transform raw detections into persistent target tracks capable of maintaining target identity across frames and providing stable target information for downstream state estimation, guidance, and control modules.

Goal:

```text
Detection Stream
       │
       ▼

Target Association
       │
       ▼

Track Generation
       │
       ▼

Persistent Target IDs
       │
       ▼

Track Publishing
```

---

## Architecture

```text
/detections
      │

/camera/frame
      │
      ▼

tracking_pipeline.py
      │
      ├── Tracker Subscriber Manager
      │
      ├── Detection Converter
      │
      ├── DeepSORT Tracker
      │
      ├── Tracking Benchmark
      │
      └── Tracker Publisher Manager
                 │
                 ▼

              /tracks
                 │
                 ▼

             Track.msg
```

---

## ROS2 Package

```text
tracking_node
```

---

## Core Components

```text
tracking_pipeline.py

tracker_subscriber_manager.py

tracker_publisher_manager.py

detection_converter.py

deepsort_tracker.py

tracking_benchmark.py
```

---

## Interface Package

```text
interfaces/msg/Track.msg
```

---

# P5.1 – Create Tracking Package

## Goal

Create a dedicated ROS2 package responsible for target tracking and identity management.

## Implementation

Created:

```text
tracking_node
```

## Responsibilities

```text
Detection Subscription

Frame Subscription

Target Association

Track Generation

Track Publishing
```

---

# P5.2 – Track Interface

## Goal

Standardize tracking outputs for downstream estimation and guidance modules.

## Implementation

Created:

```text
interfaces/msg/Track.msg
```

## Message Definition

```text
int32 track_id

string class_name

float32 confidence

int32 x1
int32 y1

int32 x2
int32 y2

int32 center_x
int32 center_y

bool confirmed
```

## Build Interface

```bash
colcon build --packages-select interfaces
```

## Verify Interface

```bash
ros2 interface show interfaces/msg/Track
```

---

# P5.3 – DeepSORT Integration

## Goal

Integrate DeepSORT for target association and persistent identity tracking.

## Implementation

Created:

```text
deepsort_tracker.py
```

## Responsibilities

```text
Initialize DeepSORT

Convert Detection Format

Track Association

Track Management

Return Active Tracks
```

## DeepSORT Configuration

```python
MAX_AGE = 30

N_INIT = 3

MAX_IOU_DISTANCE = 0.7

MAX_COSINE_DISTANCE = 0.3

EMBEDDER = "mobilenet"

HALF_PRECISION = True

BGR = True

MIN_CONFIDENCE = 0.20

TARGET_CLASSES = [
    "airplane"
]
```

---

# P5.4 – Tracking Pipeline

## Goal

Create a centralized tracking pipeline responsible for managing all tracking operations.

## Implementation

Created:

```text
tracking_pipeline.py
```

## Responsibilities

```text
Initialize ROS2

Manage Subscribers

Manage Publishers

Run Tracking Pipeline

Manage DeepSORT

Publish Tracks

Run Benchmarking
```

## Execution Flow

```text
/camera/frame
       │

/detections
       │
       ▼

Tracker Subscriber Manager
       │
       ▼

Detection Converter
       │
       ▼

DeepSORT Tracker
       │
       ▼

Track Generation
       │
       ▼

Track Publisher
       │
       ▼

/tracks
```

---

# P5.5 – Track Publisher

## Goal

Publish standardized tracking outputs into ROS2.

## Implementation

Created:

```text
tracker_publisher_manager.py
```

## Responsibilities

```text
Track Data Conversion

Track.msg Creation

/tracks Publishing
```

## Published Topic

```text
/ tracks
```

---


# P5.7 – Tracking Benchmarking

## Goal

Measure tracking performance and track quality metrics.

## Implementation

Created:

```text
tracking_benchmark.py
```

### Run Detection Pipeline

Terminal 1

```bash
ros2 run perception_node detector_pipeline
```

---

### Run Tracking Pipeline

Terminal 2

```bash
ros2 run tracking_node tracker_pipeline
```

---

### Verify Interface

```bash
ros2 interface show interfaces/msg/Track
```

---

## Final Tracking Architecture

```text
/camera/frame
       │

/detections
       │
       ▼

tracker_subscriber_manager.py
       │
       ▼

detection_converter.py
       │
       ▼

deepsort_tracker.py
       │
       ▼

tracking_benchmark.py
       │
       ▼

tracker_publisher_manager.py
       │
       ▼

/tracks
       │
       ▼

Track.msg
```

---


# P6 – State Estimation Layer

## Objective

Transform persistent target tracks into smooth and reliable target state estimates capable of providing target position, velocity, acceleration, and future trajectory prediction for downstream guidance and control modules.

Goal:

```text
Track Stream
      │
      ▼

Kalman Filtering
      │
      ▼

State Estimation
      │
      ▼

Trajectory Prediction
      │
      ▼

Target State Publishing
```

---

## Architecture

```text
/tracks
      │
      ▼

estimating_pipeline.py
      │
      ├── Estimator Subscriber Manager
      │
      ├── Kalman Estimator
      │
      ├── Acceleration Estimator
      │
      ├── Trajectory Estimator
      │
      ├── Estimation Benchmark
      │
      └── Estimator Publisher Manager
                  │
                  ▼

            /target_state
                  │
                  ▼

           TargetState.msg
```

---

## ROS2 Package

```text
estimation_node
```

---



## Interface Package

```text
interfaces/msg/TargetState.msg
```

---

# P6.1 – Create State Estimation Package

## Goal

Create a dedicated ROS2 package responsible for estimating the target state from persistent tracks.

## Implementation

Created:

```text
estimation_node
```

## Responsibilities

```text
Track Subscription

State Estimation

Velocity Estimation

Acceleration Estimation

Trajectory Prediction

Target State Publishing
```

---

# P6.2 – Target State Interface

## Goal

Standardize estimated target states for downstream guidance and control modules.

## Implementation

Created:

```text
interfaces/msg/TargetState.msg
```

## Message Definition

```text
int32 track_id

float32 x
float32 y

float32 vx
float32 vy

float32 ax
float32 ay

float32 pred_x
float32 pred_y

bool valid
```

## Build Interface

```bash
colcon build --packages-select interfaces
```

## Verify Interface

```bash
ros2 interface show interfaces/msg/TargetState
```

---

# P6.3 – Kalman State Estimation

## Goal

Estimate a smooth target state by filtering noisy tracking measurements.

## Implementation

Created:

```text
kalman_estimator.py
```

## State Vector

```text
[x

 y

 vx

 vy]
```

## Measurement Vector

```text
[center_x

 center_y]
```

## Responsibilities

```text
Prediction Step

Measurement Update

Position Estimation

Velocity Estimation
```

---

# P6.4 – Acceleration Estimation

## Goal

Estimate target acceleration using consecutive velocity estimates.

## Implementation

Created:

```text
acceleration_estimator.py
```

## Formula

```text
ax = (vx_now - vx_previous) / dt

ay = (vy_now - vy_previous) / dt
```

## Responsibilities

```text
Velocity Differentiation

Acceleration Estimation

Provide Motion Dynamics
```

---

# P6.5 – Trajectory Prediction

## Goal

Predict the future target position using the estimated motion state.

## Implementation

Created:

```text
trajectory_estimator.py
```

## Motion Model

```text
x_new = x + vx·t + 0.5·ax·t²

y_new = y + vy·t + 0.5·ay·t²
```

## Responsibilities

```text
Future Position Prediction

Motion Forecasting

Target Trajectory Estimation
```

---

# P6.6 – State Estimation Pipeline

## Goal

Create a centralized estimation pipeline responsible for managing all state estimation operations.

## Implementation

Created:

```text
estimating_pipeline.py
```

## Responsibilities

```text
Initialize ROS2

Manage Subscribers

Manage Publishers

Run Kalman Filter

Estimate Velocity

Estimate Acceleration

Predict Future Position

Publish Target State

Run Benchmarking
```

## Execution Flow

```text
/tracks
      │
      ▼

Estimator Subscriber Manager
      │
      ▼

Kalman Estimator
      │
      ▼

Acceleration Estimator
      │
      ▼

Trajectory Estimator
      │
      ▼

Estimator Publisher Manager
      │
      ▼

/target_state
```

---

# P6.7 – Target State Publisher

## Goal

Publish standardized target state information into ROS2.

## Implementation

Created:

```text
estimator_publisher_manager.py
```

## Responsibilities

```text
Target State Conversion

TargetState.msg Creation

/target_state Publishing
```

## Published Topic

```text
/target_state
```

---

# P6.8 – State Estimation Benchmarking

## Goal

Measure estimation performance and processing latency.

## Implementation

Created:

```text
estimating_benchmark.py
```

## Measured Metrics

```text
FPS

Average Processing Time

Minimum Processing Time

Maximum Processing Time

Processed Frames
```

---

# P7 – Guidance Layer

## Objective

Transform estimated target states into high-level pursuit commands capable of steering the interceptor toward the predicted target position.

Goal:

```text
Target State
      │
      ▼

Image Error Computation
      │
      ▼

Proportional Guidance
      │
      ▼

Command Saturation
      │
      ▼

Target Lock Detection
      │
      ▼

Guidance Command Publishing
```

---

## Architecture

```text
/target_state
      │
      ▼

guidance_pipeline.py
      │
      ├── Guidance Subscriber Manager
      │
      ├── Guidance Controller
      │
      ├── Guidance Benchmark
      │
      └── Guidance Publisher Manager
                  │
                  ▼

         /guidance_command
                  │
                  ▼

        GuidanceCommand.msg
```

---

## ROS2 Package

```text
guidance_node
```

---

## Interface Package

```text
interfaces/msg/GuidanceCommand.msg
```

---

# P7.1 – Create Guidance Package

## Goal

Create a dedicated ROS2 package responsible for converting estimated target states into guidance commands.

## Implementation

Created:

```text
guidance_node
```

## Responsibilities

```text
Target State Subscription

Image Error Computation

Proportional Guidance

Target Lock Detection

Guidance Command Publishing
```

---

# P7.2 – Guidance Command Interface

## Goal

Standardize guidance commands for downstream control modules.

## Implementation

Created:

```text
interfaces/msg/GuidanceCommand.msg
```

## Message Definition

```text
int32 track_id

float32 error_x
float32 error_y

float32 yaw_command
float32 pitch_command

bool target_locked
```

## Build Interface

```bash
colcon build --packages-select interfaces
```

## Verify Interface

```bash
ros2 interface show interfaces/msg/GuidanceCommand
```

---

# P7.3 – Guidance Controller

## Goal

Generate pursuit commands using the predicted target position.

## Implementation

Created:

```text
guidance_controller.py
```

## Responsibilities

```text
Validate Target State

Compute Image Error

Apply Proportional Guidance

Clamp Guidance Commands

Detect Target Lock

Generate Guidance Commands
```

---

## Guidance Flow

```text
TargetState

        │

        ▼

Validate Target

        │

 ┌──────┴───────┐

 │              │

Invalid        Valid

 │              │

 ▼              ▼

Return      Compute Image Error
Defaults            │
                    ▼

        Proportional Controller
              Output = KP × Error
                    │
                    ▼

        Command Saturation
                    │
                    ▼

      Target Lock Detection
                    │
                    ▼

      Return GuidanceCommand
```

---

## Image Error

```text
error_x = pred_x - FRAME_CENTER_X

error_y = pred_y - FRAME_CENTER_Y
```

---

## Proportional Controller

```text
yaw_command = KP_YAW × error_x

pitch_command = KP_PITCH × error_y
```

Where

```text
Output = KP × Error
```

- Small KP → Slow response
- Large KP → Aggressive response
- Too large KP → Oscillation / Instability

---

## Target Lock

```text
abs(error_x) ≤ LOCK_THRESHOLD_X

abs(error_y) ≤ LOCK_THRESHOLD_Y
```

If both conditions are satisfied

```text
target_locked = True
```

---

# P7.4 – Guidance Pipeline

## Goal

Create a centralized guidance pipeline responsible for all guidance operations.

## Implementation

Created:

```text
guidance_pipeline.py
```

## Responsibilities

```text
Initialize ROS2

Manage Subscribers

Manage Publishers

Compute Guidance

Publish Guidance Commands

Run Benchmarking
```

## Execution Flow

```text
/target_state
      │
      ▼

Guidance Subscriber Manager
      │
      ▼

Guidance Controller
      │
      ▼

Guidance Publisher Manager
      │
      ▼

/guidance_command
```

---

# P7.5 – Guidance Publisher

## Goal

Publish standardized guidance commands into ROS2.

## Implementation

Created:

```text
guidance_publisher_manager.py
```

## Responsibilities

```text
Guidance Result Conversion

GuidanceCommand.msg Creation

/guidance_command Publishing
```

## Published Topic

```text
/guidance_command
```

---

# P7.6 – Guidance Benchmarking

## Goal

Measure guidance performance and processing latency.

## Implementation

Created:

```text
guidance_benchmark.py
```

## Measured Metrics

```text
FPS

Average Processing Time

Minimum Processing Time

Maximum Processing Time

Processed Frames
```

---

# P7.7 – Guidance Philosophy

## High-Level Guidance (P7)

Determines **where the interceptor should point**.

Outputs

```text
yaw_command

pitch_command
```

---

## Low-Level Control (P8)

Determines **how the interceptor physically moves**.

Responsibilities

```text
Generate PX4 Offboard Commands

Vehicle Attitude Control

Vehicle Motion Control

Flight Stabilization
```

Pipeline

```text
GuidanceCommand

      │

      ▼

Control Layer

      │

      ▼

PX4 Offboard

      │

      ▼

Interceptor Motion
```

---



# Intercept Trajectory Optimization

Not implemented in P7.

Reason

Current guidance operates entirely in **image space (pixel coordinates)**.

True interception optimization requires reasoning in **3D world coordinates**, including

```text
Target Position (X,Y,Z)

Target Velocity

Interceptor Position

Interceptor Velocity

Relative Geometry
```

These capabilities will be implemented in future phases after PX4 Offboard autonomous control is completed.

---

# Relationship with P8 – Control Layer

The Guidance layer and Control layer have different responsibilities.

**P7 – High-Level Guidance**

Determines **where the interceptor should go** by generating desired steering commands.

Outputs:

- yaw_command
- pitch_command


# Future Work

The current implementation performs **image-based proportional pursuit**.

Future guidance algorithms may replace or extend the Guidance Controller, including:

- Lead Pursuit
- Pure Pursuit
- Proportional Navigation (PN)
- Vision-Based Interception
- Adaptive Guidance

---

## P8- control layer

control.py
GuidanceCommand
        │
        ▼
guidance.valid ?

        │
   ┌────┴────┐
   │         │
 False      True
   │         │
   ▼         ▼

Safe Cmd    Guidance → Control Mapping
                │
                ▼
         Saturation (Optional)
                │
                ▼
        Return ControlCommand




# Intercept Trajectory Optimization

Intercept trajectory optimization is intentionally **not implemented** in P7.

The current system operates entirely in **image space (pixel coordinates)**.

True trajectory optimization requires estimating the target in **3D world coordinates**, including:

- Target position (X, Y, Z)
- Target velocity
- Interceptor position
- Interceptor velocity
- Relative geometry

These capabilities will be introduced in future phases after the interceptor is capable of autonomous flight under PX4 Offboard control.

The interceptor position and target world position become necessary only when you move from image-based pursuit to full 3D interception using localization, depth estimation, or state fusion.

computation should occur in one predictable execution loop
your benchmark should measure one complete control cycle

Your architecture already uses a timer-driven pipeline, which is the better design.

Controller = Euler
PX4 Adapter = Quaternion Conversion
Keep the entire AI stack in ENU/ROS convention.
generate timestamps in px4_adapter.py

adapter.py--
Euler

↓

Quaternion

↓

NED

↓

PX4 Messages

↓

Timestamp


ControlCommand
        │
        ▼
convert_to_px4()
        │
        ├──────────────┬─────────────────────┐
        ▼              ▼                     ▼
_create_offboard() _create_attitude() _create_vehicle_command()
        │              │                     │
        └──────────────┴─────────────────────┘
                       │
                       ▼
              PX4 Message Bundle

---
                     Guidance Node
                           │
                           ▼
                 /guidance_command
                           │
                           ▼
             ControlSubscriberManager
                           │
                           ▼
                FlightControllerCmd
                           │
                           ▼
                 ControlCommand.msg
                           │
          ┌────────────────┴────────────────┐
          ▼                                 ▼
ControlPublisherManager              PX4Adapter
 (/control_command)                      │
                                         ▼
                              OffboardControlMode
                              VehicleAttitudeSetpoint
                              VehicleCommand (Mode)
                              VehicleCommand (Arm)
                              desired_pitch
                              desired_yaw
                              dt (elapsed time)
                              controller gains
                              rate limiter
                              saturation
                              safe command handling
                                         │
                                         ▼
                              Timestamp Assignment
                                         │
                                         ▼
                      /fmu/in/offboard_control_mode
                      /fmu/in/vehicle_attitude_setpoint
                      /fmu/in/vehicle_command
                                         │
                                         ▼
                                      PX4 SITL
p8.7.1
Euler
↓

Quaternion
        W=cos_roll*cos_pitch*cos_yaw + sin_roll*sin_pitch*sin_yaw
        X=sin_roll*cos_pitch*cos_yaw - cos_roll*sin_pitch*sin_yaw
        Y=cos_roll*sin_pitch*cos_yaw + sin_roll*cos_pitch*sin_yaw
        Z=cos_roll*cos_pitch*sin_yaw - sin_roll*sin_pitch*cos_yaw


p8.7.2
VehicleAttitudeSetpoint, msg.thrust_body = [0.0, 0.0, -control_cmd.collective_thrust]

PX4 uses NED.

p8.7.3
OffboardControlMode

p8.7.4
VehicleCommand
ControlCommand
        │
        ▼
PX4 Adapter
        │
        ├───────────────┐
        ▼               ▼
OffboardControlMode   VehicleAttitudeSetpoint
        │               │
        ├───────────────┴──────────────┐
        ▼                              ▼
Offboard Mode Command            Arm Command\


0 Manual

1 Altitude

2 Position

3 Auto

4 Acro

5 Stabilized

6 Offboard # so we use


p8.7.5
Add timestamps.

p8.7.6
Verify against PX4 SITL



High-Level Guidance (P7) → decides where to go.
Low-Level Control (P8) → decides how to move the drone.

"How do I convert these desired guidance commands into PX4 Offboard setpoints so the interceptor physically flies toward the target?"

Intercept optimization answers a different question:

"What is the optimal path to intercept the target?"

That requires reasoning in 3D space, not image space.


# P8 – Control Layer

## Objective

Develop a modular closed-loop flight control layer that converts high-level guidance commands into safe PX4 Offboard attitude commands.

The control layer acts as the bridge between the AI perception/guidance pipeline and the PX4 flight controller.

Goal:

```text
Guidance Command
        │
        ▼
Flight Controller
        │
        ▼
Control Command
        │
        ▼
PX4 Adapter
        │
        ▼
PX4 Offboard Messages
        │
        ▼
PX4 Flight Controller
```

---

# Architecture

```text
                     Guidance Node
                           │
                           ▼
                 /guidance_command
                           │
                           ▼
             ControlSubscriberManager
                           │
                           ▼
                FlightControllerCmd
                           │
                           ▼
                 ControlCommand.msg
                           │
          ┌────────────────┴────────────────┐
          ▼                                 ▼
ControlPublisherManager              PX4Adapter
 (/control_command)                      │
                                         ▼
                              OffboardControlMode
                              VehicleAttitudeSetpoint
                              VehicleCommand (Mode)
                              VehicleCommand (Arm)
                                         │
                                         ▼
                             Offboard State Machine
                                         │
                                         ▼
                              PX4 Offboard Interface
                                         │
                                         ▼
                                      PX4 SITL
```

---

# ROS2 Package

```text
control_node
```

---

# Core Components

```text
control_pipeline.py

cmd_controller.py

controller_graph.py

Addapter_PX4.py

offboard_state_machine.py

control_subscriber_manager.py

control_publisher_manager.py

control_benchmark.py
```

---

# Interface Package

```text
interfaces/msg/ControlCommand.msg
```

---

# P8.1 – Flight Controller

## Goal

Create a reusable controller responsible for converting Guidance outputs into smooth aircraft attitude commands.

---

## Implementation

Created

```text
cmd_controller.py
```

---

## Responsibilities

```text
Receive GuidanceCommand

Validate Guidance

Generate Safe Command

Incrementally Update Desired Attitude

Apply Rate Limiting

Apply Attitude Saturation

Generate Collective Thrust

Return ControlCommand
```

---

## Flight Controller Logic

```text
GuidanceCommand
        │
        ▼
guidance.valid ?
        │
   ┌────┴────┐
   │         │
 False      True
   │         │
   ▼         ▼

Safe Cmd    Guidance → Control Mapping
                │
                ▼
         Rate Limiting
                │
                ▼
        Saturation (Optional)
                │
                ▼
        Return ControlCommand
```

---

## Closed Loop Controller

The controller maintains a persistent aircraft attitude.

Instead of immediately applying Guidance outputs, the controller gradually updates:

```text
desired_pitch

desired_yaw
```

using

```text
Controller Gain

Elapsed Time (dt)

Rate Limiter

Attitude Saturation
```

This produces smooth aircraft motion suitable for autonomous flight.

---

# P8.2 – Controller Visualization

## Goal

Visualize the controller's internal behavior in real time.

---

## Implementation

Created

```text
controller_graph.py
```

---

## Responsibilities

```text
Image Error

Pitch Controller

Yaw Controller

Controller Increment

Desired Attitude

Target Lock

Controller Status

Performance Overlay
```

---

## Controller Dashboard

The visualization provides

```text
Image-space Error

Guidance Commands

Desired Attitude

Rate-Limited Controller Output

Pitch/Yaw Limits

Target Lock State

Controller Configuration

Current Controller Status
```

---

## Visualization

```text
Image Error

Pitch Controller

Yaw Controller

Controller Increment

Desired Attitude

Target Lock
```

---

# P8.3 – Control Subscriber

## Goal

Receive all required information for the controller.

---

## Implementation

Created

```text
control_subscriber_manager.py
```

---

## Responsibilities

```text
Receive GuidanceCommand

Receive VehicleStatus

Store Latest Messages

Provide Latest Data
```

---

# P8.4 – Control Publisher

## Goal

Separate ROS communication from controller logic.

---

## Implementation

Created

```text
control_publisher_manager.py
```

---

## Responsibilities

```text
Publish OffboardControlMode

Publish VehicleAttitudeSetpoint

Publish VehicleCommand
```

---

# P8.5 – Performance Benchmark

## Goal

Measure the complete execution time of one control cycle.

---

## Responsibilities

```text
FPS

Average Latency

Minimum Latency

Maximum Latency

Control Cycle Timing
```

---

## Execution Model

Benchmark measures

```text
Guidance

↓

Controller

↓

PX4 Conversion

↓

Publishing

↓

Benchmark End
```

The measured latency represents one complete controller execution cycle.

---

# P8.6 – Control Interface

## Goal

Standardize communication between Guidance and Control.

---

## Implementation

Created

```text
interfaces/msg/ControlCommand.msg
```

---

## Message Definition

```text
int32 track_id

float32 roll_setpoint

float32 pitch_setpoint

float32 yaw_setpoint

float32 collective_thrust

bool offboard_enabled
```

---

## Build Interface

```bash
colcon build --packages-select interfaces
```

---

## Verify Interface

```bash
ros2 interface show interfaces/msg/ControlCommand
```

---

# P8.7 – PX4 Adapter

## Goal

Convert generic controller outputs into PX4 Offboard messages.

---

## Implementation

Created

```text
Addapter_PX4.py
```

---

## Responsibilities

```text
Euler → Quaternion

Quaternion → PX4 Attitude

Create OffboardControlMode

Create VehicleAttitudeSetpoint

Create VehicleCommand

Assign Timestamp

Generate PX4 Message Bundle
```

---

## Conversion Pipeline

```text
ControlCommand
        │
        ▼
convert_to_px4()
        │
        ├──────────────┬─────────────────────┐
        ▼              ▼                     ▼
_create_offboard() _create_attitude() _create_vehicle_command()
        │              │                     │
        └──────────────┴─────────────────────┘
                       │
                       ▼
              PX4 Message Bundle
```

---

## Euler → Quaternion

The controller operates completely in the ROS2 ENU frame.

Quaternion conversion occurs only inside the PX4 Adapter.

```text
Euler

↓

Quaternion

↓

PX4 Messages
```

Quaternion equations

```text
W = cos(r/2)cos(p/2)cos(y/2)
  + sin(r/2)sin(p/2)sin(y/2)

X = sin(r/2)cos(p/2)cos(y/2)
  - cos(r/2)sin(p/2)sin(y/2)

Y = cos(r/2)sin(p/2)cos(y/2)
  + sin(r/2)cos(p/2)sin(y/2)

Z = cos(r/2)cos(p/2)sin(y/2)
  - sin(r/2)sin(p/2)cos(y/2)
```

---

## VehicleAttitudeSetpoint

Generated fields

```text
Quaternion Attitude

Yaw Rate

Body Thrust
```

```python
msg.thrust_body = [
    0.0,
    0.0,
    -control_cmd.collective_thrust,
]
```

PX4 expects body thrust in the NED frame.

---

## OffboardControlMode

The controller operates in

```text
Attitude Control Mode
```

Configuration

```text
Position       False

Velocity       False

Acceleration   False

Attitude       True

Body Rate      False
```

---

## VehicleCommand

The adapter creates

```text
Offboard Mode Command

Arm Command
```

PX4 Flight Modes

```text
0 Manual

1 Altitude

2 Position

3 Auto

4 Acro

5 Stabilized

6 Offboard
```

The controller requests

```text
Mode 6 (Offboard)
```

---

# P8.8 – PX4 Offboard State Machine

## Goal

Provide deterministic sequencing before autonomous flight.

---

## Implementation

Created

```text
offboard_state_machine.py
```

---

## Responsibilities

```text
Heartbeat Counting

Offboard Request

Arm Request

State Management

Safe State Transition
```

---

## State Diagram

```text
INIT
 │
 ▼
WAIT_OFFBOARD
 │
 ▼
WAIT_ARM
 │
 ▼
ACTIVE
 │
 ▼
FAILSAFE
```

---

## State Flow

```text
Publish Heartbeats
        │
        ▼

Heartbeat Counter

        │
        ▼

Request Offboard Mode

        │
        ▼

Request Arm

        │
        ▼

Autonomous Flight
```

---

# Intercept Trajectory Optimization

Intercept trajectory optimization is intentionally **not implemented** in P8.

The current controller operates entirely in **image space (pixel coordinates)**.

True interception requires estimating

- Target Position (X, Y, Z)
- Target Velocity
- Interceptor Position
- Interceptor Velocity
- Relative Geometry

These capabilities will be introduced after validating autonomous flight using PX4 Offboard control.

---

# Verification

## Build Package

```bash
cd ros2_WS

colcon build --packages-select control_node

source install/setup.bash
```

---

## Run Control Pipeline

```bash
ros2 run control_node control_pipeline
```

---

## Verify Topics

```bash
ros2 topic list
```

Expected

```text
/guidance_command

/fmu/in/offboard_control_mode

/fmu/in/vehicle_attitude_setpoint

/fmu/in/vehicle_command
```

---

## Verify PX4 Messages

```bash
ros2 topic echo /fmu/in/offboard_control_mode

ros2 topic echo /fmu/in/vehicle_attitude_setpoint

ros2 topic echo /fmu/in/vehicle_command
```

---

## Final Control Architecture

```text
Guidance Node
        │
        ▼
/guidance_command
        │
        ▼
ControlSubscriberManager
        │
        ▼
FlightControllerCmd
        │
        ▼
ControlCommand.msg
        │
        ▼
PX4Adapter
        │
        ├───────────────┐
        ▼               ▼
OffboardControlMode   VehicleAttitudeSetpoint
        │               │
        ├───────────────┴──────────────┐
        ▼                              ▼
VehicleCommand (Mode)        VehicleCommand (Arm)
                │
                ▼
      Offboard State Machine
                │
                ▼
ControlPublisherManager
                │
                ▼
/fmu/in/offboard_control_mode

/fmu/in/vehicle_attitude_setpoint

/fmu/in/vehicle_command
                │
                ▼
             PX4 SITL
```

---


# Code Architecture

Format-
# import
    # lib

# config class
    # constant

# logic class
    # initilize the val

    # business logic

# execution layer

    # input

    # object creation

    # output



# file structure:
        # config_Service

        # service_logic

        # subscriber_manager

        # publisher_manager

        #  node_pipeline






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