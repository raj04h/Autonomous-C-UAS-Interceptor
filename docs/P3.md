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

