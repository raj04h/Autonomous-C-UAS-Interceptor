# P10 – Backend Infrastructure

## Overview

This phase introduces the backend infrastructure that connects the ROS2 autonomy stack with persistent storage, REST APIs, and real-time WebSocket communication.

The backend acts as the middleware between the autonomous interceptor system and external applications, enabling telemetry storage, mission logging, live monitoring, and future cloud integration.

---

# Objectives

- Integrate ROS2 with PostgreSQL.
- Persist telemetry and mission data.
- Expose REST APIs.
- Stream live robotics data through WebSockets.
- Build a scalable backend architecture.

---

# Pipeline Position

```text
ROS2 Autonomy Stack
        │
        ▼
P10 – Backend Infrastructure
        │
        ▼
P11 – Monitoring Dashboard
```

---

# Architecture

```text
                        ROS2 Topics
                             │
                             ▼
                   Subscriber Manager
                             │
                             ▼
                     Mapper Manager
                  ┌──────────┴──────────┐
                  ▼                     ▼
          Database Schemas      Stream Dictionaries
                  │                     │
                  ▼                     ▼
            Service Layer      WebSocket Broadcaster
                  │                     │
                  ▼                     ▼
             PostgreSQL          WebSocket Server
                  └──────────┬──────────┘
                             ▼
                       FastAPI Backend
                             │
                REST API + WebSocket API
```

---

# Core Components

| Component | Responsibility |
|-----------|----------------|
| config | Backend configuration |
| orm_database | Database connection and session management |
| orm_models | SQLAlchemy models |
| orm_schemas | API schemas |
| services | Business logic |
| ros2_bridge | ROS2 integration |
| websocket | Real-time streaming |
| api | REST API endpoints |
| main.py | Backend entry point |

---

# Data Flow

```text
ROS2 Topics
      │
      ▼
Subscriber Manager
      │
      ▼
Mapper Manager
      │
      ▼
Service Layer
      │
      ▼
PostgreSQL
      │
      ▼
REST API / WebSocket
```

---

# Backend Layers

## Configuration

Centralizes:

- Application configuration
- Database configuration
- ROS2 topic definitions
- Server configuration
- WebSocket configuration

---

## Database Layer

Provides:

- SQLAlchemy engine
- Database sessions
- Connection management
- Table creation

---

## ORM Models

Persistent entities include:

| Model | Purpose |
|--------|---------|
| Mission | Mission lifecycle |
| Telemetry | UAV telemetry history |
| TargetState | Estimated target motion |

---

## Service Layer

Implements backend business logic:

- Mission management
- Telemetry storage
- Target state storage
- History retrieval
- Latest state retrieval

---

## ROS2 Bridge

The bridge connects the autonomy stack to the backend.

Responsibilities include:

- ROS2 subscriptions
- Message caching
- Message mapping
- Database persistence
- WebSocket broadcasting

---

## WebSocket Layer

Provides real-time streaming for external applications.

Available channels:

```text
/ws/telemetry

/ws/target_state

/ws/detection

/ws/track

/ws/guidance

/ws/control
```

---

# Runtime Architecture

```text
                  Main Process
                        │
         ┌──────────────┴──────────────┐
         ▼                             ▼
 FastAPI Event Loop              ROS2 Thread
         │                             │
         ▼                             ▼
REST APIs / WebSockets        Bridge Pipeline
                                      │
                                      ▼
                              Subscriber Manager
```

The backend runs FastAPI and the ROS2 bridge concurrently, allowing synchronous database operations while continuously processing robotics data.

---

# REST APIs

| Endpoint | Purpose |
|-----------|----------|
| `GET /health` | Backend health check |
| `GET /telemetry/latest` | Latest telemetry |
| `GET /telemetry/history` | Telemetry history |
| `GET /mission` | Mission information |
| `GET /target_state` | Latest estimated target state |

---

# Execution

## Environment

```bash
source /opt/ros/humble/setup.bash
source ros2_WS/install/setup.bash
```

---

## Start Backend

```bash
python3 -m backend.main
```

---

## Test Database

```bash
python3 -m backend.test_connection
```

---

# Verification

## Verify Database

```bash
python3 -m backend.test_connection
```

---

## Verify REST APIs

```text
GET /health

GET /telemetry/latest

GET /telemetry/history

GET /mission

GET /target_state
```

---

## Verify WebSocket Channels

```text
ws://localhost:8000/ws/telemetry

ws://localhost:8000/ws/target_state

ws://localhost:8000/ws/detection

ws://localhost:8000/ws/track

ws://localhost:8000/ws/guidance

ws://localhost:8000/ws/control
```

Recommended tools:

- Postman
- Insomnia
- wscat

---

# Results

- Built a modular FastAPI backend.
- Integrated ROS2 with PostgreSQL.
- Implemented persistent mission and telemetry storage.
- Exposed robotics data through REST APIs.
- Enabled real-time streaming via WebSockets.
- Established the middleware layer between the autonomy stack and external applications.

---

# Next Phase

The next phase develops a real-time monitoring dashboard that consumes the backend's REST and WebSocket interfaces to visualize vehicle telemetry, target tracking, guidance, and flight control data.