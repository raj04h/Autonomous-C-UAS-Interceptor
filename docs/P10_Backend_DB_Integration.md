# P10 – Backend Infrastructure

## Objective

Develop a production-ready backend that connects the ROS2 autonomy stack with PostgreSQL, REST APIs, and WebSocket streaming.

The backend acts as the middleware between the autonomous interceptor system and external applications such as the Streamlit Dashboard, Ground Control Station (GCS), monitoring tools, and future cloud services.

---

# Backend Execution

```bash
source /opt/ros/humble/setup.bash
source ros2_WS/install/setup.bash
```

Run Backend

```bash
python3 -m backend.main
```

Test Database

```bash
python3 -m backend.test_connection
```

---

# Backend Architecture

```text
                           ROS2 Topics
                                │
                                ▼
                     SubscriberManager
                                │
                                ▼
                       MapperManager
               ┌────────────────┴────────────────┐
               ▼                                 ▼
        Database Schemas                  Stream Dictionaries
               │                                 │
               ▼                                 ▼
         Service Layer                    WSBroadcaster
               │                                 │
               ▼                                 ▼
          PostgreSQL                    WebSocket Server
               │                                 │
               └────────────────┬────────────────┘
                                ▼
                          FastAPI Backend
                                │
                     REST API + WebSocket API
```

---

# Backend Directory

```text
backend/

├── api/
│
├── config/
│
├── orm_database/
│
├── orm_models/
│
├── orm_schemas/
│
├── ros2_bridge/
│
├── services/
│
├── websocket/
│
├── main.py
│
└── test_connection.py
```

---

# P10.1 — Backend Configuration

## Goal

Centralize all backend configuration.

---

## Files

```text
backend/config/

backend_config.py

database_config.py

ros2_topics.py
```

---

## Responsibilities

```text
Application Configuration

Database Configuration

ROS2 Topic Names

Server Configuration

WebSocket Configuration
```

---

# P10.2 — Database Infrastructure

## Goal

Create reusable PostgreSQL infrastructure.

---

## Files

```text
backend/orm_database/

db_connection.py

db_session.py

create_table.py
```

---

## Responsibilities

```text
SQLAlchemy Engine

Session Factory

Database Connection

Table Creation
```

---

## Verification

```bash
python3 -m backend.test_connection
```

---

# P10.3 — ORM Layer

## Goal

Represent robotics data as persistent database models.

---

## Files

```text
backend/orm_models/

base.py

orm_mission.py

orm_telemetry.py

orm_target_state.py
```

---

# Database Tables

## Missions

Represents one complete autonomous mission.

```text
mission_id

start_time

end_time

duration
```

---

## Telemetry

Stores the interceptor UAV state.

```text
mission_id

position

velocity

attitude

battery

flight_mode

created_at
```

---

## Target State

Stores the estimated target state.

```text
mission_id

track_id

position

velocity

acceleration

prediction

created_at
```

---

# P10.4 — Schema Layer

## Goal

Convert ORM objects into JSON-compatible models.

---

## Files

```text
backend/orm_schemas/

schema_mission.py

schema_telemetry.py

schema_target_state.py
```

---

## Responsibilities

```text
Create Request Schema

Create Response Schema

JSON Serialization
```

---

# P10.5 — Service Layer

## Goal

Implement backend business logic.

---

## Files

```text
backend/services/

mission_service.py

telemetry_service.py

target_state_service.py
```

---

## Responsibilities

```text
Create()

Finish Mission()

Get Latest()

Get History()
```

---

# P10.6 — REST API

## Goal

Expose backend data through HTTP.

---

## Files

```text
backend/api/

api_health.py

api_mission.py

api_telemetry.py

api_target_state.py
```

---

## REST Endpoints

```text
GET /health

GET /telemetry/latest

GET /telemetry/history

GET /mission

GET /target_state
```

---

# P10.7 — ROS2 Bridge

## Goal

Bridge ROS2 topics with backend services.

---

## Files

```text
backend/ros2_bridge/

subscriber_manager.py

mapper_manager.py

bridge_pipeline.py
```

---

## Responsibilities

```text
Subscribe ROS2 Topics

Cache Latest Messages

Convert ROS Messages

Store Database Records

Trigger WebSocket Broadcasts
```

---

# Bridge Pipeline

```text
ROS2 Topics
      │
      ▼
SubscriberManager
      │
      ▼
MapperManager
      │
      ├──────────────────┐
      ▼                  ▼
Telemetry Schema   TargetState Schema
      │                  │
      ▼                  ▼
Telemetry Service  TargetState Service
      │                  │
      ▼                  ▼
PostgreSQL
```

---

# ROS2 → Backend Flow

```text
PX4

↓

ROS2 Topics

↓

SubscriberManager

↓

MapperManager

↓

Service Layer

↓

PostgreSQL
```

---

# P10.8 — WebSocket Streaming

## Goal

Provide real-time robotics streaming for external clients.

---

## Files

```text
backend/websocket/

ws_connection.py

ws_broadcaster.py

ws_telemetry.py

ws_target_state.py

ws_detection.py

ws_track.py

ws_guidance.py

ws_control.py
```

---

## Responsibilities

```text
Connection Management

Client Registration

Broadcast Live Data

Multiple Streaming Channels
```

---

# Streaming Channels

```text
/ws/telemetry

/ws/target_state

/ws/detection

/ws/track

/ws/guidance

/ws/control
```

---

# Streaming Flow

```text
ROS2 Messages

↓

BridgePipeline

↓

MapperManager

↓

WSBroadcaster

↓

WSConnection

↓

WebSocket Clients

↓

Dashboard
```

---

# P10.9 — Backend Runtime

## Goal

Execute FastAPI and ROS2 simultaneously.

---

## Runtime Architecture

```text
                     Main Process
                          │
          ┌───────────────┴───────────────┐
          ▼                               ▼
   FastAPI Event Loop                ROS2 Thread
          │                               │
          ▼                               ▼
 REST APIs / WebSockets             BridgePipeline
                                            │
                                            ▼
                                     SubscriberManager
```

---

# Backend Execution Flow

```text
Start FastAPI

↓

Initialize ROS2

↓

Create BridgePipeline

↓

Spin ROS2 Thread

↓

Accept REST Clients

↓

Accept WebSocket Clients
```

---

# Verification

## Start Backend

```bash
python3 -m backend.main
```

---

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

## Verify WebSockets

```text
ws://localhost:8000/ws/telemetry

ws://localhost:8000/ws/target_state

ws://localhost:8000/ws/detection

ws://localhost:8000/ws/track

ws://localhost:8000/ws/guidance

ws://localhost:8000/ws/control
```

Verify using:

- Postman WebSocket Client
- Insomnia
- wscat

---
