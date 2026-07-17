# P8 – Flight Control Layer

## Overview

This phase bridges the autonomy stack with the PX4 flight controller by converting high-level guidance commands into PX4 Offboard attitude commands.

The control layer implements a closed-loop controller that generates smooth aircraft attitude setpoints, converts them into PX4-compatible messages, and manages the Offboard state machine required for autonomous flight.

---

# Objectives

- Convert guidance commands into flight control commands.
- Generate smooth attitude setpoints.
- Convert generic commands into PX4 Offboard messages.
- Manage PX4 Offboard state transitions.
- Benchmark the complete control cycle.

---

# Pipeline Position

```text
P7 – Guidance Layer
        │
        ▼
P8 – Flight Control
        │
        ▼
PX4 Offboard Flight
```

---

# Architecture

```text
        /guidance_command
                 │
                 ▼
        control_pipeline.py
                 │
      ┌──────────┼──────────┐
      ▼          ▼          ▼
 Subscriber  Flight      PX4
  Manager   Controller  Adapter
                 │          │
                 ▼          ▼
         ControlCommand   PX4 Messages
                 │          │
                 └────┬─────┘
                      ▼
         Offboard State Machine
                      │
                      ▼
                 PX4 SITL
```

---

# Core Components

| Component | Responsibility |
|-----------|----------------|
| control_pipeline.py | Control pipeline entry point |
| cmd_controller.py | Closed-loop flight controller |
| control_subscriber_manager.py | Subscribe to guidance commands |
| control_publisher_manager.py | Publish PX4 messages |
| px4_adapter.py | Convert generic commands to PX4 messages |
| offboard_state_machine.py | Manage Offboard activation |
| control_benchmark.py | Measure control performance |
| controller_graph.py | Controller visualization |
| ControlCommand.msg | Standardized control message |

---

# Data Flow

```text
Guidance Command
        │
        ▼
Flight Controller
        │
        ▼
Control Command
        │
        ▼
PX4 Adapter
        │
        ▼
PX4 Offboard Messages
        │
        ▼
PX4 Flight Controller
```

---

# ROS2 Interfaces

## Subscribed Topics

| Topic | Message |
|--------|---------|
| `/guidance_command` | GuidanceCommand.msg |
| `/fmu/out/vehicle_status` | VehicleStatus |

---

## Published Topics

| Topic | Message |
|--------|---------|
| `/control_command` | ControlCommand.msg |
| `/fmu/in/offboard_control_mode` | OffboardControlMode |
| `/fmu/in/vehicle_attitude_setpoint` | VehicleAttitudeSetpoint |
| `/fmu/in/vehicle_command` | VehicleCommand |

---

## Custom Message

### ControlCommand.msg

| Field | Description |
|--------|-------------|
| track_id | Target identifier |
| roll_setpoint | Desired roll angle |
| pitch_setpoint | Desired pitch angle |
| yaw_setpoint | Desired yaw angle |
| collective_thrust | Desired thrust |
| offboard_enabled | Offboard status |

---

# Implementation Summary

The control layer receives high-level guidance commands and converts them into stable aircraft attitude commands.

A closed-loop controller incrementally updates the desired aircraft attitude using controller gains, elapsed time, rate limiting, and attitude constraints. These generic control commands are then translated into PX4-specific Offboard messages through a dedicated adapter while preserving the ROS2 ENU coordinate convention throughout the autonomy stack.

An Offboard state machine manages the required heartbeat sequence, mode switching, and vehicle arming before autonomous flight begins.

---

# Flight Controller

The controller maintains a persistent desired attitude rather than directly applying guidance outputs.

Control updates are computed using:

- Controller gain
- Elapsed time (Δt)
- Rate limiting
- Attitude saturation
- Safe command validation

This produces smooth vehicle motion suitable for autonomous flight.

---

# PX4 Adapter

The autonomy stack operates entirely in the ROS2 ENU frame.

Coordinate conversion occurs only inside the PX4 adapter.

```text
Euler Angles
      │
      ▼
Quaternion
      │
      ▼
PX4 Attitude Message
      │
      ▼
Timestamp Assignment
      │
      ▼
PX4 Offboard Topics
```

The adapter generates:

- OffboardControlMode
- VehicleAttitudeSetpoint
- VehicleCommand
- PX4 timestamps

---

# Offboard State Machine

The state machine ensures deterministic transition into autonomous flight.

```text
INIT
 │
 ▼
WAIT_OFFBOARD
 │
 ▼
WAIT_ARM
 │
 ▼
ACTIVE
 │
 ▼
FAILSAFE
```

State transitions include:

- Heartbeat publication
- Offboard mode request
- Vehicle arm request
- Autonomous flight activation

---

# Performance

The control benchmark measures one complete control cycle:

```text
Guidance
      │
      ▼
Flight Controller
      │
      ▼
PX4 Adapter
      │
      ▼
Message Publishing
```

Measured metrics include:

- Processing FPS
- Average latency
- Minimum latency
- Maximum latency
- Complete control cycle time

---

# Design Decisions

### Guidance vs Control

The guidance layer determines **where the interceptor should point**.

The control layer determines **how the aircraft should move** by generating PX4-compatible attitude commands.

---

### Coordinate Frames

The AI pipeline operates entirely in the ROS2 ENU coordinate frame.

Conversion to PX4 quaternion and NED-compatible messages is isolated within the PX4 adapter.

---

### Intercept Optimization

Trajectory optimization is intentionally outside the scope of this phase.

The current implementation performs image-based pursuit using 2D image coordinates.

Full interception planning requires:

- 3D target localization
- Interceptor localization
- Relative geometry
- World-frame trajectory optimization

These capabilities are reserved for future work after validating autonomous PX4 Offboard flight.

---

# Execution

## Build Package

```bash
cd ros2_WS

colcon build --packages-select control_node

source install/setup.bash
```

---

## Run Control Pipeline

```bash
ros2 run control_node control_pipeline
```

---

# Verification

## Verify Control Topics

```bash
ros2 topic list
```

Expected

```text
/control_command

/fmu/in/offboard_control_mode

/fmu/in/vehicle_attitude_setpoint

/fmu/in/vehicle_command
```

---

## Verify PX4 Messages

```bash
ros2 topic echo /fmu/in/offboard_control_mode

ros2 topic echo /fmu/in/vehicle_attitude_setpoint

ros2 topic echo /fmu/in/vehicle_command
```

---

## Verify Offboard Flight

- PX4 enters **Offboard Mode**.
- Vehicle arms successfully.
- Attitude setpoints are received continuously.
- Vehicle responds to guidance commands.

---

# Results

- Implemented a modular closed-loop flight controller.
- Generated smooth attitude setpoints from guidance commands.
- Converted generic control commands into PX4 Offboard messages.
- Integrated a deterministic Offboard state machine.
- Established the complete bridge between the AI autonomy stack and the PX4 flight controller.

---

# Next Phase

The next phase extends the system beyond autonomous flight by integrating the backend, telemetry services, persistent data storage, REST APIs, WebSocket communication, and the real-time monitoring dashboard.