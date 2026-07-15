<div align="center">

# Counter-UAS Autonomous Interceptor

### Vision-Based Autonomous Drone Interception System

**Computer Vision • ROS2 • PX4 • Gazebo • Autonomous Flight Control**

---

![Status](https://img.shields.io/badge/Status-Active-success)
![ROS2](https://img.shields.io/badge/ROS2-Humble-blue)
![PX4](https://img.shields.io/badge/PX4-SITL-orange)
![Gazebo](https://img.shields.io/badge/Gazebo-Garden-purple)
![Python](https://img.shields.io/badge/Python-3.10+-yellow)

</div>

---

# Overview

Counter-UAS Autonomous Interceptor is a modular vision-based autonomous aerial interception system capable of detecting, tracking, estimating, and pursuing hostile UAVs using only onboard sensing.

Unlike conventional systems that rely on GPS coordinates from the target, this project performs autonomous interception using computer vision, target motion estimation, and PX4 Offboard control.

The project follows a simulation-first development methodology, where each subsystem is independently designed, verified, and integrated before progressing to the next layer.

---

# Project Objectives

Develop a complete perception-to-control autonomy stack capable of:

- Detecting aerial targets
- Multi-object tracking
- State estimation
- Future trajectory prediction
- Guidance generation
- PX4 Offboard flight control
- Autonomous target pursuit

---

# System Pipeline

```text
                     Camera Sensor
                           │
                           ▼
                    Detection Layer
                           │
                           ▼
                     Tracking Layer
                           │
                           ▼
               State Estimation Layer
                           │
                           ▼
                    Guidance Layer
                           │
                           ▼
                     Control Layer
                           │
                           ▼
                  PX4 Offboard Interface
                           │
                           ▼
                  Interceptor UAV Motion
```

---

# Software Architecture

```text
                 PERCEPTION

Camera
    │
    ▼
Detection
    │
    ▼
Tracking
    │
    ▼
State Estimation


                 EXECUTION

Guidance
    │
    ▼
Control
    │
    ▼
PX4 Offboard
    │
    ▼
Flight Controller
    │
    ▼
Motors
```

---

# Technology Stack

## Robotics

- ROS2 Humble
- PX4 SITL
- Gazebo Garden
- Micro XRCE-DDS
- MAVLink

---

## Computer Vision

- OpenCV
- YOLO
- DeepSORT
- Kalman Filter

---

## Backend

- FastAPI
- PostgreSQL
- SQLAlchemy
- WebSocket

---

## Dashboard

- Streamlit

---

## Development

- Python
- Docker
- Git
- Linux

---

# Repository Structure

```text
Counter_UAS/

├── assets/
├── backend/
├── configs/
├── datasets/
├── docs/
├── frontend/
├── models/
├── ros2_WS/
│   └── src/
├── simulation/
├── README.md
└── requirements.txt
```

---

# ROS2 Package Architecture

Each ROS2 package follows the same modular design.

```text
package_name/

├── config_service.py
├── service_logic.py
├── subscriber_manager.py
├── publisher_manager.py
├── benchmark.py
└── node_pipeline.py
```

---

# Internal Software Design

Every node follows the same layered architecture.

```text
Import Layer
    │
    ▼
Configuration Layer
    │
    ▼
Business Logic Layer
    │
    ▼
Execution Layer
```

---

## Import Layer

- Python libraries
- ROS2 libraries
- Interface messages

---

## Configuration Layer

Stores

- Constants
- Parameters
- Limits
- Configuration values

---

## Business Logic Layer

Contains

- Initialization
- Core algorithms
- Decision logic

---

## Execution Layer

Responsible for

- Input
- Object creation
- Output publishing

---

# Development Roadmap

| Phase | Module | Status |
|---------|-------------------------------|:------:|
| P1 | Simulation Foundation | ✅ |
| P2 | ROS2 Application Layer | ✅ |
| P3 | Camera Integration | ✅ |
| P4 | Detection | ✅ |
| P5 | Tracking | ✅ |
| P6 | State Estimation | ✅ |
| P7 | Guidance | ✅ |
| P8 | Flight Control Interface | ✅ |
| P9 | Backend Bridge | ⏳ |
| P10 | Dashboard | ⏳ |

---

# Current Capability

Current autonomous pipeline

```text
Video
    │
    ▼
YOLO Detection
    │
    ▼
DeepSORT Tracking
    │
    ▼
Kalman State Estimation
    │
    ▼
Guidance Generation
    │
    ▼
Flight Control
    │
    ▼
PX4 Offboard
```

The interceptor is capable of:

- Vision-only target detection
- Persistent object tracking
- Target state estimation
- Future position prediction
- Guidance command generation
- PX4 Offboard command generation

---

# Product Evolution

| Version | Description |
|-----------|--------------------------------------------|
| **V1** | Vision-Based Autonomous Interceptor |
| **V2** | Mission Planning & 3D Target Localization |
| **V3** | GPS-Denied Visual Navigation Platform |
| **V4** | General Vision-Based Autonomy Platform |

---

