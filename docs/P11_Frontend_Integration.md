# P11 – Ground Control Station Dashboard

## Overview

This phase introduces a real-time Ground Control Station (GCS) dashboard for monitoring the autonomous Counter-UAS mission.

The dashboard consumes live WebSocket streams from the backend and provides operators with real-time visualization of target tracking, guidance, flight control, and mission status through an interactive web interface.

---

# Objectives

- Build a real-time monitoring dashboard.
- Receive live robotics data through WebSockets.
- Visualize the autonomy pipeline.
- Display controller and guidance performance.
- Provide an operator-friendly mission interface.

---

# Pipeline Position

```text
ROS2 Autonomy Stack
        │
        ▼
P10 – Backend Infrastructure
        │
        ▼
P11 – Ground Control Station
```

---

# Architecture

```text
                  FastAPI Backend
                         │
                  WebSocket Streams
                         │
                         ▼
                Dashboard WebSocket
                         │
                 Latest Message Cache
                         │
        ┌────────┬────────┬────────┬────────┐
        ▼        ▼        ▼        ▼
     Image   Controller  Target  Status
    Callback   Callback Callback Callback
        │        │        │        │
        └────────┴────────┴────────┘
                  │
                  ▼
           Dash UI Components
                  │
                  ▼
      Counter-UAS GCS Dashboard
```

---

# Core Components

| Component | Responsibility |
|-----------|----------------|
| app.py | Dashboard entry point |
| websocket_client.py | Backend communication |
| dashboard_layout.py | Dashboard layout |
| callbacks | Live dashboard updates |
| components | Reusable Plotly visualizations |
| style.css | Dashboard styling |

---

# Data Flow

```text
Backend WebSockets
        │
        ▼
Dashboard WebSocket Client
        │
        ▼
Latest Message Cache
        │
        ▼
Dash Callbacks
        │
        ▼
Plotly Components
        │
        ▼
Operator Dashboard
```

---

# Dashboard Components

| Component | Purpose |
|-----------|---------|
| Guidance vs Controller | Compare desired and applied commands |
| Image Error | Monitor image-space tracking error |
| Target Lock | Display target acquisition status |
| System Status | Display mission information |
| 3D Trajectory | Future trajectory visualization |

---

# Runtime Architecture

```text
        Dash Application
               │
       Background Threads
               │
               ▼
      WebSocket Client
               │
               ▼
      Latest Message Cache
               │
               ▼
       Dash Callbacks
               │
               ▼
       Plotly Graphs
```

The dashboard maintains persistent WebSocket connections while Dash callbacks periodically update the user interface using the latest cached robotics data.

---

# Visualization

## Guidance vs Controller

Displays:

- Guidance yaw
- Guidance pitch
- Controller yaw
- Controller pitch
- Command limits

Purpose:

Evaluate controller tracking performance.

---

## Image Error

Displays:

- Horizontal image error
- Vertical image error
- Target lock thresholds

Purpose:

Monitor visual alignment between the interceptor and target.

---

## Target Lock

Displays:

- Target lock status
- Collective thrust

Purpose:

Correlate target acquisition with controller response.

---

## System Status

Displays:

- Flight mode
- Track ID
- Target class
- Detection confidence
- Guidance commands
- Controller outputs

Purpose:

Provide a concise overview of the mission state.

---

## 3D Trajectory

Current status:

```text
Placeholder
```

Future visualization includes:

- UAV trajectory
- Target trajectory
- Predicted target position
- Interception path

---

# Execution

## Start Dashboard

```bash
python3 -m frontend.app
```

---

## Open Dashboard

```text
http://localhost:8050
```

---

# Verification

## Verify Backend Connection

Confirm successful WebSocket connections for:

- Telemetry
- Target State
- Tracking
- Guidance
- Control

---

## Verify Dashboard

Ensure the following components update in real time:

- Guidance vs Controller graph
- Image Error graph
- Target Lock graph
- System Status panel

---

# Results

- Developed a real-time Ground Control Station dashboard.
- Integrated live WebSocket communication with the backend.
- Visualized guidance, tracking, and control performance.
- Implemented a modular Plotly Dash interface.
- Established the operator interface for monitoring autonomous missions.

---

# Next Phase

Future enhancements will extend the dashboard with 3D mission visualization, mission replay, telemetry analytics, multi-vehicle support, and advanced operator tools.