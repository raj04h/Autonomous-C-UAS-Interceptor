# P9 – System Visualization & Launch Infrastructure

## Overview

The final phase integrates the complete Counter-UAS autonomy pipeline into an operator-facing visualization system and a unified ROS2 launch interface.

The visualization node subscribes to every major robotics module and overlays mission information onto the live camera feed, providing a real-time tactical view of the autonomous interception process.

The launch package provides a single entry point for executing the complete autonomy stack, simplifying development, testing, and demonstration.

---

# Objectives

- Visualize the complete autonomy pipeline.
- Display live mission overlays.
- Provide a centralized ROS2 launch system.
- Support end-to-end system verification.

---

# Pipeline Position

```text
Camera
   │
   ▼
Perception
   │
   ▼
Tracking
   │
   ▼
State Estimation
   │
   ▼
Guidance
   │
   ▼
Flight Control
   │
   ▼
Visualization
```

---

# Architecture

```text
                 ROS2 Topics
                      │
                      ▼
             Subscriber Manager
                      │
      ┌───────────────┼────────────────┐
      ▼               ▼                ▼
 Camera Frame    Mission Data      Flight Data
                      │
                      ▼
              Overlay Service
                      │
                      ▼
              Viewer Service
                      │
                      ▼
          Tactical Visualization
```

---

# Core Components

| Component | Responsibility |
|-----------|----------------|
| visualization_pipeline.py | Visualization pipeline entry point |
| subscriber_manager.py | Receive ROS2 messages |
| overlay_service.py | Render tactical HUD |
| viewer_service.py | Display visualization window |
| config_visualization.py | Visualization configuration |
| uas.launch.py | Launch complete autonomy stack |

---

# Data Flow

```text
Camera Frame
      │
      ▼
ROS2 Subscribers
      │
      ▼
Mission Overlay
      │
      ▼
Visualization Window
```

---

# ROS2 Interfaces

## Subscribed Topics

| Topic | Purpose |
|--------|---------|
| `/camera/frame` | Camera image |
| `/detections` | Object detection |
| `/tracks` | Object tracking |
| `/target_state` | State estimation |
| `/guidance_command` | Guidance commands |
| `/control_command` | Flight control commands |

---

# Visualization Features

The visualization layer combines information from every autonomy module into a single tactical display.

Displayed information includes:

- Detection bounding boxes
- Target tracking reticle
- Estimated target position
- Predicted target position
- Guidance vector
- Camera crosshair
- Guidance information
- Controller information
- Detection statistics
- Tracking information
- Estimation data
- Target lock state
- Offboard flight status
- Processing FPS

---

# Tactical HUD

The visualization window consists of four primary regions.

### Header

Displays:

- System title
- Processing FPS
- PX4 Offboard status
- Target lock state

---

### Left Information Panel

Displays:

- Detection information
- Tracking information
- State estimation

---

### Camera Overlay

Displays:

- Detection bounding boxes
- Target reticle
- Estimated position
- Predicted position
- Guidance vector
- Camera crosshair

---

### Right Information Panel

Displays:

- Guidance outputs
- Flight controller outputs
- Thrust
- Offboard status

---

# Launch System

The launch package provides a single entry point for executing the complete ROS2 autonomy stack.

```text
uas.launch.py
        │
        ▼
Perception Node
        │
        ▼
Tracking Node
        │
        ▼
Estimation Node
        │
        ▼
Guidance Node
        │
        ▼
Control Node
        │
        ▼
Visualization Node
```

---

# Execution

## Build Workspace

```bash
cd ros2_WS

colcon build

source install/setup.bash
```

---

## Launch Complete System

```bash
ros2 launch uas_launch uas.launch.py
```

---

## Run Visualization Only

```bash
ros2 run visualization_node visualization_pipeline
```

---

# Verification

Verify the following:

- Camera stream displayed.
- Detection overlay rendered.
- Tracking reticle updated.
- Estimated target position displayed.
- Guidance vector updated.
- Control information displayed.
- Target lock status updated.
- PX4 Offboard status displayed.
- Complete autonomy pipeline launches successfully.

---

# Results

- Developed a real-time tactical visualization system.
- Integrated outputs from every autonomy module.
- Created a unified mission display for debugging and demonstration.
- Implemented a centralized ROS2 launch package.
- Enabled one-command execution of the complete Counter-UAS autonomy stack.

---