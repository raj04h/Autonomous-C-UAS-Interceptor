# P3 – Camera Integration & Perception Foundation

## Overview

This phase establishes the visual sensing foundation for the autonomous perception pipeline by integrating a forward-facing camera into the PX4 simulation environment.

The objective was to stream camera images from Gazebo into ROS2 for real-time OpenCV processing. During implementation, the Gazebo camera and image transport pipeline were thoroughly investigated, revealing a limitation in the ROS-Gazebo image bridge. To maintain project progress, perception development continued using prerecorded video input while leaving the middleware issue isolated for future infrastructure work.

---

# Objectives

- Integrate a forward-facing camera with the PX4 X500 model.
- Verify camera image and calibration streams in Gazebo.
- Develop a ROS2 camera subscriber.
- Evaluate Gazebo-to-ROS2 image transport.
- Establish the perception input pipeline.

---

# Pipeline Position

```text
P2 – ROS2 Application Layer
        │
        ▼
P3 – Camera Integration
        │
        ▼
P4 – Detection Layer
```

---

# Architecture

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
           OpenCV Processing
```

---

# Core Components

| Component | Responsibility |
|-----------|----------------|
| Front Camera | Simulated onboard vision sensor |
| Gazebo Transport | Camera image streaming |
| ROS-Gazebo Bridge | Gazebo → ROS2 image forwarding |
| camera_listener.py | ROS2 camera subscriber |

---

# Data Flow

```text
Gazebo Camera
        │
        ▼
Image Stream
        │
        ▼
ROS2 Camera Node
        │
        ▼
OpenCV Processing
```

---

# Communication Interfaces

## Gazebo Topics

| Topic | Description |
|--------|-------------|
| `/world/default/model/x500_0/link/base_link/sensor/front_camera/image` | Camera image stream |
| `/world/default/model/x500_0/link/base_link/sensor/front_camera/camera_info` | Camera calibration data |

---

## ROS2 Node

| Component | Responsibility |
|-----------|----------------|
| camera_listener.py | Subscribe to camera images |

---

# Implementation Summary

A forward-facing camera sensor was successfully integrated into the PX4 X500 simulation model.

The camera image stream and calibration information were verified within Gazebo Transport. A ROS2 camera subscriber was also prepared to receive image data through the ROS-Gazebo bridge.

Although camera metadata was successfully bridged, image frames could not be forwarded reliably into ROS2 due to limitations within the image transport layer. After isolating the issue, the project adopted prerecorded video input as the perception source, allowing development of the computer vision pipeline to continue without blocking subsequent phases.

---

# Execution

## Discover Camera Topics

```bash
gz topic -l | grep front_camera
```

---

## Inspect Camera Image Stream

```bash
gz topic -e -t \
/world/default/model/x500_0/link/base_link/sensor/front_camera/image
```

---

## Inspect Camera Information

```bash
gz topic -e -t \
/world/default/model/x500_0/link/base_link/sensor/front_camera/camera_info
```

---

## Camera Info Bridge

```bash
ros2 run ros_gz_bridge parameter_bridge \
/world/default/model/x500_0/link/base_link/sensor/front_camera/camera_info@sensor_msgs/msg/CameraInfo@gz.msgs.CameraInfo
```

---

## Image Bridge

```bash
ros2 run ros_gz_image image_bridge \
/world/default/model/x500_0/link/base_link/sensor/front_camera/image
```

---

# Verification

## Verify Camera Topics

```bash
gz topic -l | grep front_camera
```

---

## Verify Image Stream

```bash
gz topic -e -t \
/world/default/model/x500_0/link/base_link/sensor/front_camera/image
```

Expected:

```text
Image frames streaming
```

---

## Verify Camera Information

```bash
gz topic -e -t \
/world/default/model/x500_0/link/base_link/sensor/front_camera/camera_info
```

Expected:

```text
Camera calibration

Camera intrinsics

Image resolution
```

---

## Verify ROS2 Camera Topics

```bash
ros2 topic list
```

---

# Engineering Decision

During testing, the camera sensor operated correctly within Gazebo, but image frames could not be reliably forwarded to ROS2 through the ROS-Gazebo image bridge.

Since this issue was isolated to the middleware layer rather than the perception algorithms, the project intentionally switched to prerecorded video as the image source. This decision allowed development of the detection, tracking, estimation, guidance, and control pipeline to continue without delaying the overall project.

The bridge issue is documented as future infrastructure work rather than an application-layer limitation.

---

# Results

- Successfully integrated a forward-facing camera into PX4 SITL.
- Verified camera image and calibration streams in Gazebo.
- Implemented a ROS2 camera subscriber.
- Isolated the ROS-Gazebo image transport limitation.
- Established prerecorded video as the perception input for subsequent development.

---

# Next Phase

The next phase builds the object detection pipeline using YOLO to identify aerial targets from the video stream and publish standardized detection messages for downstream tracking.