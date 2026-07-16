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
