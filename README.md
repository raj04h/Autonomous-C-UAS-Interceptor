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

# Upcoming Development

## P9 — Backend

- ROS2 Backend Bridge
- FastAPI
- PostgreSQL
- WebSocket
- Telemetry Storage

---

## P10 — Dashboard

- Live Video
- Detection Visualization
- Tracking Visualization
- Vehicle Telemetry
- Guidance Status
- Control Status
- Mission Monitoring

---

# Long-Term Vision

Build a reusable autonomy platform for:

- Counter-UAS Systems
- Defense Robotics
- Autonomous Surveillance
- UAV Inspection
- GPS-Denied Navigation
- Vision-Based Robotics
- Aerospace Research

---

# Development Timeline

| Timeline | Focus |
|-----------|-------|
| **Days 1–3** | Infrastructure & Simulation |
| **Days 4–7** | Perception & State Estimation |
| **Days 8–11** | Guidance & PX4 Integration |
| **Days 12–14** | Backend & Dashboard |
| **Day 15** | End-to-End System Validation |

---

# Design Principles

- Modular Architecture
- Layered Software Design
- Simulation-First Development
- ROS2 Native Communication
- Separation of Concerns
- Hardware Agnostic
- Production-Oriented Engineering

---

## License

This project is released under the **Counter-UAS Research & Demonstration License v1.0**.

The source code is available for:

- Research
- Education
- Personal learning
- Experimentation
- Academic use
- Portfolio evaluation

Commercial use, production deployment, and incorporation into commercial products or services are prohibited without prior written permission from the author.


## P9 – Robotics Backend & Dashboard

Develop a robotics backend that collects ROS2 telemetry, persists system data, and streams live information to a Streamlit dashboard without participating in the real-time flight control loop.

# Architecture-
ROS2 Topic
      │
      ▼
ROS2 Bridge
      │
      ▼
TelemetryService
      │
      ├──────────────┐
      ▼              ▼
TelemetryORM   TelemetryResponse
      │              │
      ▼              ▼
 PostgreSQL      REST API
                     │
                     ▼
                WebSocket
                     │
                     ▼
            Streamlit Dashboard



backend/
├── app/
│
├── bridge/ ros2_bridge.py
│
├── database/  connection.py & session.py
│
├── websocket/  telemetry_ws.py
│
├── api/ fastapi get, post
│
├── models/  PostgreSQL tables for detection, tracking, telemetry, etc ros messages
│
├── schemas/ json validation  TelemetryResponse, ControlResponse
│
├── services/  business layer- TelemetryService, etc logic of storing db sqlalchemy
│
├── config/ setting.py
│
├── utils/ time_utility, logger, etc
│
└── main.py

serializers.py

ROS2 Message
        │
        ▼
Python Dictionary
        │
        ▼
JSON
        │
        ▼
WebSocket / REST API

ros2_bridge.py
ROS2

↓

Subscribe

↓

Convert to Python Object

↓

Store

↓

Broadcast


GET /health

GET /telemetry/latest

GET /detections

GET /tracks

GET /target_state

GET /guidance

GET /control

GET /history




P9.1 – Backend Project Initialization
P9.2 – Configuration Layer
Centralize all backend configuration in one place so every module reads settings from a single source.
Server IP
Server Port
Database URL
ROS2 topic names
WebSocket settings
Logging level


P9.3  PostgreSQL Foundation
PostgreSQL is your robot's memory/db.

1. vehicle_telemetry- pos, vel, acc, att, flight mode, timestamp
2. detections, Track ID, Class_name, Confidence, Bounding Box, Timestamp
3. tracks

Track ID

Center X

Center Y

Velocity

Age

Timestamp

4. target_states

Track ID

Position

Velocity

Acceleration

Predicted Position

Timestamp

5. guidance_commands

Yaw

Pitch

Image Error

Target Lock

Timestamp

7. control_commands

Desired Pitch

Desired Yaw

Thrust

Offboard Mode

Timestamp

Backend Data flow-


P9.4  Database Connection
connection.py

↓

Engine  URL

--------------------

session.py

↓

Session


P9.5  Database Models
Python Object
      │
      ▼
SQLAlchemy Model
      │
      ▼
PostgreSQL Table


Read Base
      │
      ▼
Find all inherited ORM Models
      │
      ▼
TelemetryORM
      │
      ▼
Generate SQL
      │
      ▼
CREATE TABLE telemetry (...)
      │
      ▼
Execute on PostgreSQL




P9.6  Pydantic Schemas

P9.7  Service Layer
Move all business logic out of the REST API and ROS2 Bridge.

Neither the API nor the ROS2 subscriber should know how to use SQLAlchemy directly.

TelemetryService.create(...)

TelemetryService

↓

create()

↓

get_latest()

↓

get_history()

↓

delete()

↓

clear()


                    TelemetryService

      create()      get_latest()      get_history()

           │              │                 │
           └──────────────┼─────────────────┘
                          │
                          ▼
                    TelemetryORM
                          │
                          ▼
                     PostgreSQL



P9.8  REST API
Browser

↓

GET /telemetry/latest

↓

FastAPI Router

↓

TelemetryService

↓

PostgreSQL

↓

JSON


P9.9  ROS2 Bridge
bridge/
|
├── config/
│   └── ros2_topics.py
│
├── subscriber/-- Receive ROS message call mapper & service
│   ├── telemetry_subscriber.py-- 
│   ├── detection_subscriber.py
│   └── tracking_subscriber.py
│
├── mapper/
│   └── telemetry_mapper.py-- ros msg to py_schema
|
├── services/
│   └── ros_executor.py-- initialize rclpy-create node- spin-shutdown
|
|
└── bridge_pipeline.py -- input--obj create- execute

P9.10 WebSocket

P9.11 Logging & Metrics

P9.12 Streamlit Dashboard




visualization_node/

├── visualization_node/
│
│   ├── __init__.py
│
│   ├── config_visualization.py
│
│   ├── viewer_service.py  calculate fps
│
│   ├── overlay_service.py  only for drawing boxes, guidance, etc
│
│   ├── subscriber_manager.py  subscribe nodes
│
│   ├── benchmark.py
│
│   └── visualization_pipeline.py
│
├── package.xml
├── setup.py
└── resource/



VideoCapture
get_frame()