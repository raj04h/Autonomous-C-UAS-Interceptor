# P4 – Detection Layer

## Overview

This phase introduces the first intelligent component of the autonomy pipeline by implementing real-time aerial target detection.

A modular perception pipeline was developed using YOLO to process video frames, detect aerial objects, visualize inference results, and publish standardized detection messages for downstream tracking and state estimation.

---

# Objectives

- Build a modular object detection pipeline.
- Integrate YOLO for real-time inference.
- Visualize detection results.
- Publish detection messages to ROS2.
- Benchmark perception performance.

---

# Pipeline Position

```text
P3 – Camera Integration
        │
        ▼
P4 – Detection Layer
        │
        ▼
P5 – Tracking Layer
```

---

# Architecture

```text
        Video Input
             │
             ▼
     detector_pipeline.py
             │
      ┌──────┼──────┐
      ▼      ▼      ▼
 Camera   YOLO   Detection
 Viewer Detector Publisher
                    │
                    ▼
              /detections
                    │
                    ▼
             Detection.msg
```

---

# Core Components

| Component | Responsibility |
|-----------|----------------|
| detector_pipeline.py | Detection pipeline entry point |
| camera_viewer.py | Video visualization and rendering |
| yolo_detector.py | YOLO inference engine |
| detection_publisher.py | Publish detections to ROS2 |
| Detection.msg | Standardized detection message |

---

# Data Flow

```text
Video Frame
      │
      ▼
YOLO Detection
      │
      ▼
Detection Object
      │
      ▼
Detection Publisher
      │
      ▼
/detections
```

---

# ROS2 Interfaces

## Published Topics

| Topic | Message |
|--------|---------|
| `/detections` | Detection.msg |
| `/frame` | Processed visualization frame |

---

## Custom Message

### Detection.msg

| Field | Description |
|--------|-------------|
| class_name | Detected object class |
| confidence | Detection confidence |
| x1, y1 | Bounding box (top-left) |
| x2, y2 | Bounding box (bottom-right) |

---

# Implementation Summary

The detection layer consists of four independent modules.

The **camera viewer** handles video acquisition and visualization, while the **YOLO detector** performs object detection on each frame. Detection results are converted into a standardized ROS2 message by the **detection publisher**, allowing downstream modules to consume perception data independently of the detection algorithm.

A dedicated pipeline coordinates these components, enabling modular development and future replacement of the detection model without affecting the rest of the autonomy stack.

---

# Performance

| Metric | Observation |
|--------|-------------|
| Resolution | 1280 × 720 |
| Detection FPS | ~16 FPS |
| Inference Time | ~53 ms |
| Detection Count | Dynamic |

---

# Execution

## Build Package

```bash
cd ros2_WS

colcon build --packages-select perception_node

source install/setup.bash
```

---

## Run Detection Pipeline

```bash
ros2 run perception_node detector_pipeline
```

---

# Verification

## Verify Detection Topic

```bash
ros2 topic list | grep detections
```

Expected

```text
/detections
/frame
```

---

## Verify Detection Messages

```bash
ros2 topic echo /detections
```

---

## Verify Interface

```bash
ros2 interface show interfaces/msg/Detection
```

---

# Results

- Developed a modular ROS2 perception package.
- Integrated YOLO for real-time aerial target detection.
- Implemented visualization with runtime performance overlays.
- Published standardized detection messages to ROS2.
- Established the perception output required for persistent target tracking.

---

# Next Phase

The next phase introduces persistent target tracking using DeepSORT to associate detections across consecutive frames and maintain unique target identities.