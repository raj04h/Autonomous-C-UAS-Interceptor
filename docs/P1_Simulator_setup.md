# P1 – Simulation Foundation & PX4-ROS2 Integration

## Overview

The first phase establishes the software foundation required for autonomous UAV development. It integrates the PX4 flight controller, Gazebo simulator, ROS2 middleware, and QGroundControl into a unified simulation environment.

This phase verifies reliable communication between all core components, enabling subsequent development of perception, state estimation, guidance, and flight control modules.

---

# Objectives

- Configure the PX4 SITL simulation environment.
- Integrate Gazebo Garden with PX4.
- Establish ROS2 communication using Micro XRCE-DDS.
- Verify telemetry exchange between PX4 and ROS2.
- Prepare the ROS2 workspace for future autonomy packages.

---

# Pipeline Position

```text
Simulation Environment
        │
        ▼
P1 – PX4 + ROS2 Integration
        │
        ▼
P2 – ROS2 Application Layer
```

---

# Architecture

```text
                 QGroundControl
                        ▲
                        │ MAVLink
                        │
                  PX4 SITL
                        │
                 uXRCE-DDS
                        │
                        ▼
             MicroXRCEAgent
                        │
                        ▼
                     ROS2
                        │
                        ▼
          Future Autonomy Pipeline
```

---

# Core Components

| Component | Responsibility |
|-----------|----------------|
| PX4 SITL | Flight controller simulation |
| Gazebo Garden | UAV simulation environment |
| QGroundControl | Ground control station |
| ROS2 Humble | Robotics middleware |
| MicroXRCEAgent | DDS communication bridge |
| px4_msgs | PX4 ROS2 message definitions |

---

# Data Flow

```text
Gazebo Simulation
        │
        ▼
     PX4 SITL
        │
        ▼
MicroXRCEAgent
        │
        ▼
      ROS2
        │
        ▼
Telemetry Subscribers
```

---

# Communication Interfaces

## Communication Protocols

| Protocol | Purpose |
|----------|---------|
| MAVLink | PX4 ↔ QGroundControl communication |
| DDS (uXRCE-DDS) | PX4 ↔ ROS2 communication |

---

## ROS2 Topics Verified

| Topic | Description |
|--------|-------------|
| `/fmu/out/vehicle_local_position` | Vehicle position and velocity |
| `/fmu/out/vehicle_attitude` | Vehicle attitude |
| `/fmu/out/vehicle_odometry` | Vehicle odometry |
| `/fmu/out/vehicle_status` | Vehicle status |

---

# Implementation Summary

During this phase, the complete robotics simulation environment was configured and validated.

The PX4 flight controller was connected to Gazebo Garden for simulation, while QGroundControl was used for monitoring and flight management through the MAVLink protocol. Communication between PX4 and ROS2 was established using MicroXRCEAgent, allowing ROS2 nodes to subscribe to real-time vehicle telemetry.

A ROS2 workspace was created and configured with the required `px4_msgs` package, providing the message interfaces used throughout the remainder of the project.

---

# Execution

## Start Micro XRCE-DDS Agent

```bash
MicroXRCEAgent udp4 -p 8888
```

---

## Start PX4 SITL

```bash
make px4_sitl gz_x500
```

---

## Launch QGroundControl

```bash
./QGroundControl.AppImage
```

---

## Build ROS2 Workspace

```bash
cd ros2_WS

colcon build

source install/setup.bash
```

---

# Verification

## Verify PX4 Topics

```bash
ros2 topic list | grep fmu
```

Expected output includes:

```text
/fmu/out/vehicle_local_position
/fmu/out/vehicle_attitude
/fmu/out/vehicle_odometry
/fmu/out/vehicle_status
```

---

## Verify Telemetry

```bash
ros2 topic echo /fmu/out/vehicle_local_position
```

---

## Verify Telemetry Frequency

```bash
ros2 topic hz /fmu/out/vehicle_local_position
```

Expected:

```text
~100 Hz
```

---

# Results

- Successfully integrated PX4 SITL with Gazebo Garden.
- Established MAVLink communication with QGroundControl.
- Configured ROS2 Humble development workspace.
- Connected PX4 and ROS2 through MicroXRCEAgent.
- Verified real-time telemetry streaming from PX4 to ROS2.
- Prepared the software foundation for higher-level autonomy modules.

---

# Next Phase

The next phase introduces the ROS2 application layer, where dedicated ROS2 packages and telemetry subscriber nodes are developed to receive and process PX4 data for the autonomous perception pipeline.