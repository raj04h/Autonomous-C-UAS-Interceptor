# P5 – Tracking Layer

## Overview

This phase extends the perception pipeline by converting independent object detections into persistent target tracks.

DeepSORT is integrated to associate detections across consecutive frames, maintain unique target identities, and provide stable tracking information for downstream state estimation, guidance, and flight control.

---

# Objectives

- Integrate DeepSORT for multi-object tracking.
- Maintain persistent target identities across frames.
- Publish standardized tracking messages.
- Benchmark tracking performance.
- Provide stable inputs for state estimation.

---

# Pipeline Position

```text
P4 – Detection Layer
        │
        ▼
P5 – Tracking Layer
        │
        ▼
P6 – State Estimation
```

---

# Architecture

```text
        /detections
             │
             ▼
     tracking_pipeline.py
             │
      ┌──────┼────────┐
      ▼      ▼        ▼
Subscriber DeepSORT Publisher
Manager    Tracker   Manager
                     │
                     ▼
                  /tracks
                     │
                     ▼
                 Track.msg
```

---

# Core Components

| Component | Responsibility |
|-----------|----------------|
| tracking_pipeline.py | Tracking pipeline entry point |
| tracker_subscriber_manager.py | Subscribe to detection messages |
| detection_converter.py | Convert detections to DeepSORT format |
| deepsort_tracker.py | Target association and identity tracking |
| tracker_publisher_manager.py | Publish tracking results |
| tracking_benchmark.py | Measure runtime performance |
| Track.msg | Standardized tracking message |

---

# Data Flow

```text
Detection Messages
        │
        ▼
Detection Conversion
        │
        ▼
DeepSORT Tracking
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

# ROS2 Interfaces

## Subscribed Topics

| Topic | Message |
|--------|---------|
| `/detections` | Detection.msg |
| `/frame` | Processed camera frame |

---

## Published Topics

| Topic | Message |
|--------|---------|
| `/tracks` | Track.msg |

---

## Custom Message

### Track.msg

| Field | Description |
|--------|-------------|
| track_id | Unique target identifier |
| class_name | Detected object class |
| confidence | Detection confidence |
| x1, y1 | Bounding box (top-left) |
| x2, y2 | Bounding box (bottom-right) |
| center_x, center_y | Target center coordinates |
| confirmed | Track confirmation status |

---

# Implementation Summary

The tracking layer receives object detections from the perception pipeline and converts them into the format required by DeepSORT.

DeepSORT performs target association using appearance and motion information, allowing each detected object to retain a persistent identity across consecutive frames. Confirmed tracks are converted into a standardized ROS2 message and published for downstream state estimation.

The modular architecture separates ROS2 communication, tracking logic, and message publishing, allowing the tracking algorithm to be replaced without affecting the rest of the autonomy pipeline.

---

# Tracking Configuration

The tracking pipeline was configured for aerial target tracking using DeepSORT with:

- Persistent track management
- Appearance-based association
- Motion prediction
- Confidence filtering
- Airplane target class

---

# Execution

## Build Package

```bash
cd ros2_WS

colcon build --packages-select tracking_node

source install/setup.bash
```

---

## Run Detection Pipeline

```bash
ros2 run perception_node detector_pipeline
```

---

## Run Tracking Pipeline

```bash
ros2 run tracking_node tracker_pipeline
```

---

# Verification

## Verify Tracking Topic

```bash
ros2 topic list | grep tracks
```

Expected

```text
/tracks
```

---

## Verify Tracking Messages

```bash
ros2 topic echo /tracks
```

---

## Verify Interface

```bash
ros2 interface show interfaces/msg/Track
```

---

# Results

- Integrated DeepSORT into the perception pipeline.
- Implemented persistent target identity management.
- Published standardized tracking messages to ROS2.
- Maintained stable tracks across consecutive frames.
- Prepared reliable target information for state estimation.

---

# Next Phase

The next phase estimates the target's motion state using Kalman filtering, providing position, velocity, acceleration, and trajectory prediction for autonomous guidance.