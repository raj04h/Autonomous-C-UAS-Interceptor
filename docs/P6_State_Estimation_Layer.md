# P6 – State Estimation Layer

## Overview

This phase transforms tracked targets into continuous motion estimates suitable for autonomous decision-making.

The state estimation pipeline filters noisy tracking measurements, estimates target velocity and acceleration, predicts future target motion, and publishes a standardized target state for downstream guidance and flight control.

---

# Objectives

- Filter noisy tracking measurements.
- Estimate target position and velocity.
- Compute target acceleration.
- Predict future target trajectory.
- Publish standardized target state messages.

---

# Pipeline Position

```text
P5 – Tracking Layer
        │
        ▼
P6 – State Estimation
        │
        ▼
P7 – Guidance Layer
```

---

# Architecture

```text
            /tracks
                │
                ▼
      estimating_pipeline.py
                │
      ┌─────────┼──────────┬──────────┐
      ▼         ▼          ▼          ▼
Subscriber   Kalman    Acceleration  Trajectory
 Manager     Filter     Estimator    Predictor
                │
                ▼
          Publisher Manager
                │
                ▼
          /target_state
                │
                ▼
         TargetState.msg
```

---

# Core Components

| Component | Responsibility |
|-----------|----------------|
| estimating_pipeline.py | State estimation pipeline entry point |
| estimator_subscriber_manager.py | Subscribe to tracking messages |
| kalman_estimator.py | Position and velocity estimation |
| acceleration_estimator.py | Motion acceleration estimation |
| trajectory_estimator.py | Future trajectory prediction |
| estimator_publisher_manager.py | Publish target state |
| estimating_benchmark.py | Runtime performance measurement |
| TargetState.msg | Standardized target state message |

---

# Data Flow

```text
Track Messages
       │
       ▼
Kalman Filter
       │
       ▼
Velocity Estimation
       │
       ▼
Acceleration Estimation
       │
       ▼
Trajectory Prediction
       │
       ▼
Target State Publisher
       │
       ▼
/target_state
```

---

# ROS2 Interfaces

## Subscribed Topics

| Topic | Message |
|--------|---------|
| `/tracks` | Track.msg |

---

## Published Topics

| Topic | Message |
|--------|---------|
| `/target_state` | TargetState.msg |

---

## Custom Message

### TargetState.msg

| Field | Description |
|--------|-------------|
| track_id | Target identifier |
| x, y | Estimated position |
| vx, vy | Estimated velocity |
| ax, ay | Estimated acceleration |
| pred_x, pred_y | Predicted future position |
| valid | State validity flag |

---

# Implementation Summary

The state estimation layer receives confirmed target tracks and converts them into a continuous motion model.

A Kalman filter smooths noisy measurements while estimating the target's position and velocity. Consecutive velocity estimates are used to calculate acceleration, and a constant-acceleration motion model predicts the target's future position.

The resulting motion state is published as a standardized ROS2 message, providing downstream guidance and control modules with stable, predictive information rather than raw tracking measurements.

---

# Motion Model

## Kalman State Vector

```text
[x, y, vx, vy]
```

---

## Measurement Vector

```text
[center_x, center_y]
```

---

## Acceleration Estimation

```text
ax = (vxₙ − vxₙ₋₁) / Δt

ay = (vyₙ − vyₙ₋₁) / Δt
```

---

## Trajectory Prediction

```text
x' = x + vx·t + ½ax·t²

y' = y + vy·t + ½ay·t²
```

---

# Performance

The estimation pipeline benchmarks:

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

colcon build --packages-select estimation_node

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

## Run Estimation Pipeline

```bash
ros2 run estimation_node estimator_pipeline
```

---

# Verification

## Verify Target State Topic

```bash
ros2 topic list | grep target_state
```

Expected

```text
/target_state
```

---

## Verify Published Target State

```bash
ros2 topic echo /target_state
```

---

## Verify Interface

```bash
ros2 interface show interfaces/msg/TargetState
```

---

# Results

- Implemented Kalman filter-based state estimation.
- Estimated target position, velocity, and acceleration.
- Predicted future target trajectory.
- Published standardized target state messages.
- Provided smooth, predictive target information for autonomous guidance.

---

# Next Phase

The next phase generates guidance commands from the estimated target state by converting target motion into desired yaw and pitch commands for autonomous target interception.