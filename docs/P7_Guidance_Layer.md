# P7 – Guidance Layer

## Overview

This phase converts the estimated target motion into high-level guidance commands for autonomous target pursuit.

Using the predicted target position, the guidance layer computes image-space tracking error, applies a proportional guidance law, determines whether the target is locked, and publishes steering commands for the flight control layer.

---

# Objectives

- Generate steering commands from the estimated target state.
- Compute image-space tracking error.
- Apply proportional guidance.
- Detect target lock conditions.
- Publish standardized guidance commands.

---

# Pipeline Position

```text
P6 – State Estimation
        │
        ▼
P7 – Guidance Layer
        │
        ▼
P8 – Flight Control
```

---

# Architecture

```text
          /target_state
                │
                ▼
      guidance_pipeline.py
                │
      ┌─────────┼─────────┐
      ▼         ▼         ▼
 Subscriber  Guidance  Publisher
  Manager   Controller  Manager
                │
                ▼
      /guidance_command
                │
                ▼
      GuidanceCommand.msg
```

---

# Core Components

| Component | Responsibility |
|-----------|----------------|
| guidance_pipeline.py | Guidance pipeline entry point |
| guidance_subscriber_manager.py | Subscribe to target state |
| guidance_controller.py | Generate pursuit commands |
| guidance_publisher_manager.py | Publish guidance commands |
| guidance_benchmark.py | Runtime performance measurement |
| GuidanceCommand.msg | Standardized guidance message |

---

# Data Flow

```text
Target State
      │
      ▼
Image Error
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
/guidance_command
```

---

# ROS2 Interfaces

## Subscribed Topics

| Topic | Message |
|--------|---------|
| `/target_state` | TargetState.msg |

---

## Published Topics

| Topic | Message |
|--------|---------|
| `/guidance_command` | GuidanceCommand.msg |

---

## Custom Message

### GuidanceCommand.msg

| Field | Description |
|--------|-------------|
| track_id | Target identifier |
| error_x, error_y | Image-space error |
| yaw_command | Desired yaw command |
| pitch_command | Desired pitch command |
| target_locked | Target lock status |

---

# Implementation Summary

The guidance layer receives the estimated target state and computes the target's displacement from the image center.

A proportional controller converts the image error into yaw and pitch commands, which are constrained within predefined limits before being published. The guidance layer also evaluates whether the target lies within configurable lock thresholds, indicating successful alignment with the interceptor's camera.

The generated guidance commands provide the desired steering direction without directly controlling the vehicle dynamics, maintaining a clear separation between guidance and flight control.

---

# Guidance Model

## Image Error

```text
error_x = pred_x − FRAME_CENTER_X

error_y = pred_y − FRAME_CENTER_Y
```

---

## Proportional Guidance

```text
yaw_command = KP_YAW × error_x

pitch_command = KP_PITCH × error_y
```

where

```text
Output = KP × Error
```

---

## Command Saturation

Guidance outputs are constrained within predefined yaw and pitch limits before publication to prevent excessive steering commands.

---

## Target Lock

```text
abs(error_x) ≤ LOCK_THRESHOLD_X

abs(error_y) ≤ LOCK_THRESHOLD_Y
```

If both conditions are satisfied:

```text
target_locked = True
```

---

# Guidance Philosophy

The guidance layer determines **where the interceptor should point** by generating desired steering commands based on the predicted target position.

The subsequent control layer is responsible for converting these commands into stable PX4 offboard control inputs that physically maneuver the vehicle.

---

# Performance

The guidance pipeline benchmarks:

- Processing FPS
- Average processing time
- Minimum processing time
- Maximum processing time
- Processed frame count

---

# Execution

## Build Package

```bash
cd ros2_WS

colcon build --packages-select guidance_node

source install/setup.bash
```

---

## Run Guidance Pipeline

```bash
ros2 run guidance_node guidance_pipeline
```

---

# Verification

## Verify Guidance Topic

```bash
ros2 topic list | grep guidance_command
```

Expected

```text
/guidance_command
```

---

## Verify Published Commands

```bash
ros2 topic echo /guidance_command
```

---

## Verify Interface

```bash
ros2 interface show interfaces/msg/GuidanceCommand
```

---

# Results

- Implemented proportional image-based guidance.
- Generated yaw and pitch steering commands.
- Computed image-space tracking error.
- Detected target lock conditions.
- Published standardized guidance commands for downstream flight control.

---

# Next Phase

The next phase implements the flight control layer, translating high-level guidance commands into PX4 Offboard attitude commands while ensuring stable and responsive vehicle motion.