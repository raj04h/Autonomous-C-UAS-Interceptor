# P7 – Guidance Layer

## Objective

Transform estimated target states into high-level pursuit commands capable of steering the interceptor toward the predicted target position.

Goal:

```text
Target State
      │
      ▼

Image Error Computation
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

Guidance Command Publishing
```

---

## Architecture

```text
/target_state
      │
      ▼

guidance_pipeline.py
      │
      ├── Guidance Subscriber Manager
      │
      ├── Guidance Controller
      │
      ├── Guidance Benchmark
      │
      └── Guidance Publisher Manager
                  │
                  ▼

         /guidance_command
                  │
                  ▼

        GuidanceCommand.msg
```

---

## ROS2 Package

```text
guidance_node
```

---

## Interface Package

```text
interfaces/msg/GuidanceCommand.msg
```

---

# P7.1 – Create Guidance Package

## Goal

Create a dedicated ROS2 package responsible for converting estimated target states into guidance commands.

## Implementation

Created:

```text
guidance_node
```

## Responsibilities

```text
Target State Subscription

Image Error Computation

Proportional Guidance

Target Lock Detection

Guidance Command Publishing
```

---

# P7.2 – Guidance Command Interface

## Goal

Standardize guidance commands for downstream control modules.

## Implementation

Created:

```text
interfaces/msg/GuidanceCommand.msg
```

## Message Definition

```text
int32 track_id

float32 error_x
float32 error_y

float32 yaw_command
float32 pitch_command

bool target_locked
```

## Build Interface

```bash
colcon build --packages-select interfaces
```

## Verify Interface

```bash
ros2 interface show interfaces/msg/GuidanceCommand
```

---

# P7.3 – Guidance Controller

## Goal

Generate pursuit commands using the predicted target position.

## Implementation

Created:

```text
guidance_controller.py
```

## Responsibilities

```text
Validate Target State

Compute Image Error

Apply Proportional Guidance

Clamp Guidance Commands

Detect Target Lock

Generate Guidance Commands
```

---

## Guidance Flow

```text
TargetState

        │

        ▼

Validate Target

        │

 ┌──────┴───────┐

 │              │

Invalid        Valid

 │              │

 ▼              ▼

Return      Compute Image Error
Defaults            │
                    ▼

        Proportional Controller
              Output = KP × Error
                    │
                    ▼

        Command Saturation
                    │
                    ▼

      Target Lock Detection
                    │
                    ▼

      Return GuidanceCommand
```

---

## Image Error

```text
error_x = pred_x - FRAME_CENTER_X

error_y = pred_y - FRAME_CENTER_Y
```

---

## Proportional Controller

```text
yaw_command = KP_YAW × error_x

pitch_command = KP_PITCH × error_y
```

Where

```text
Output = KP × Error
```

- Small KP → Slow response
- Large KP → Aggressive response
- Too large KP → Oscillation / Instability

---

## Target Lock

```text
abs(error_x) ≤ LOCK_THRESHOLD_X

abs(error_y) ≤ LOCK_THRESHOLD_Y
```

If both conditions are satisfied

```text
target_locked = True
```

---

# P7.4 – Guidance Pipeline

## Goal

Create a centralized guidance pipeline responsible for all guidance operations.

## Implementation

Created:

```text
guidance_pipeline.py
```

## Responsibilities

```text
Initialize ROS2

Manage Subscribers

Manage Publishers

Compute Guidance

Publish Guidance Commands

Run Benchmarking
```

## Execution Flow

```text
/target_state
      │
      ▼

Guidance Subscriber Manager
      │
      ▼

Guidance Controller
      │
      ▼

Guidance Publisher Manager
      │
      ▼

/guidance_command
```

---

# P7.5 – Guidance Publisher

## Goal

Publish standardized guidance commands into ROS2.

## Implementation

Created:

```text
guidance_publisher_manager.py
```

## Responsibilities

```text
Guidance Result Conversion

GuidanceCommand.msg Creation

/guidance_command Publishing
```

## Published Topic

```text
/guidance_command
```

---

# P7.6 – Guidance Benchmarking

## Goal

Measure guidance performance and processing latency.

## Implementation

Created:

```text
guidance_benchmark.py
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

# P7.7 – Guidance Philosophy

## High-Level Guidance (P7)

Determines **where the interceptor should point**.

Outputs

```text
yaw_command

pitch_command
```

---

## Low-Level Control (P8)

Determines **how the interceptor physically moves**.

Responsibilities

```text
Generate PX4 Offboard Commands

Vehicle Attitude Control

Vehicle Motion Control

Flight Stabilization
```

Pipeline

```text
GuidanceCommand

      │

      ▼

Control Layer

      │

      ▼

PX4 Offboard

      │

      ▼

Interceptor Motion
```

---

# Future Work

The current implementation performs **image-based proportional pursuit**.

Future guidance algorithms may replace or extend the Guidance Controller, including:

- Lead Pursuit
- Pure Pursuit
- Proportional Navigation (PN)
- Vision-Based Interception
- Adaptive Guidance
