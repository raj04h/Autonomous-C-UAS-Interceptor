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