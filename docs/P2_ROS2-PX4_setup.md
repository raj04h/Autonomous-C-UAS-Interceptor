# P2 – ROS2 Application Layer & Package Foundation

## Overview

After establishing communication between PX4 and ROS2 in P1, this phase builds the software foundation for the autonomous robotics stack.

A modular ROS2 workspace is created by organizing the project into independent packages responsible for sensing, perception, tracking, estimation, guidance, and control. Initial subscriber nodes are implemented to verify telemetry reception and vehicle status monitoring from PX4.

---

# Objectives

- Create a modular ROS2 package structure.
- Organize the project into independent functional modules.
- Implement telemetry subscriber nodes.
- Monitor vehicle state information from PX4.
- Validate ROS2 package registration and execution.

---

# Pipeline Position

```text
P1 – PX4 & ROS2 Integration
        │
        ▼
P2 – ROS2 Application Layer
        │
        ▼
P3 – Camera & Perception Foundation
```

---

# Architecture

```text
                  PX4 SITL
                      │
                      ▼
               MicroXRCEAgent
                      │
                      ▼
                     ROS2
                      │
        ┌─────────────┴─────────────┐
        ▼                           ▼
Telemetry Subscriber      Vehicle Status Subscriber
        │                           │
        └─────────────┬─────────────┘
                      ▼
              Vehicle Monitoring
```

---

# Core Components

## ROS2 Packages

| Package | Responsibility |
|----------|----------------|
| interfaces | Custom ROS2 messages |
| sensor_node | Sensor and telemetry interfaces |
| perception_node | Object detection |
| tracking_node | Target tracking |
| estimation_node | State estimation |
| guidance_node | Guidance generation |
| control_node | Flight control |

---

## Sensor Node

| Component | Responsibility |
|-----------|----------------|
| telemetry_listener.py | Vehicle telemetry subscriber |
| vehicle_status_listener.py | Vehicle status subscriber |
| camera_listener.py | Camera subscriber (used in next phase) |

---

# Data Flow

```text
PX4 Telemetry
        │
        ▼
ROS2 Subscribers
        │
        ▼
Sensor Node
        │
        ▼
Vehicle Monitoring
```

---

# ROS2 Interfaces

## Subscribed Topics

| Topic | Message |
|--------|---------|
| `/fmu/out/vehicle_local_position` | VehicleLocalPosition |
| `/fmu/out/vehicle_status` | VehicleStatus |

---

## Extracted Telemetry

- Position (X, Y, Z)
- Velocity (X, Y, Z)

---

## Vehicle Status

- Arming State
- Navigation State
- Vehicle Status

---

# Implementation Summary

This phase establishes the software architecture used throughout the project by separating each subsystem into an independent ROS2 package.

Telemetry subscriber nodes were implemented to receive vehicle position, velocity, and status information from PX4. These nodes verify that the ROS2 application layer can successfully consume telemetry data published through the DDS bridge.

The resulting package structure provides a scalable foundation for implementing the perception, tracking, estimation, guidance, and control pipelines in subsequent phases.

---

# Execution

## Create ROS2 Packages

```bash
cd ros2_WS/src

ros2 pkg create --build-type ament_python sensor_node
ros2 pkg create --build-type ament_python perception_node
ros2 pkg create --build-type ament_python tracking_node
ros2 pkg create --build-type ament_python estimation_node
ros2 pkg create --build-type ament_python guidance_node
ros2 pkg create --build-type ament_python control_node

ros2 pkg create --build-type ament_cmake interfaces
```

---

## Run Telemetry Listener

```bash
ros2 run sensor_node telemetry_listener
```

---

## Run Vehicle Status Listener

```bash
ros2 run sensor_node vehicle_status_listener
```

---

# Verification

## Verify Telemetry

```bash
ros2 topic echo /fmu/out/vehicle_local_position
```

---

## Verify Vehicle Status

```bash
ros2 topic echo /fmu/out/vehicle_status
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

## Verify Package Registration

```bash
ros2 pkg executables sensor_node
```

Expected:

```text
telemetry_listener

vehicle_status_listener
```

---

# Results

- Created a modular ROS2 package architecture.
- Established the project structure for the autonomy pipeline.
- Implemented telemetry and vehicle status subscribers.
- Successfully received real-time PX4 telemetry through ROS2.
- Validated package registration and executable discovery.

---

# Next Phase

The next phase integrates the onboard camera into the simulation environment and establishes the perception foundation required for computer vision processing.