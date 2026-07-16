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
