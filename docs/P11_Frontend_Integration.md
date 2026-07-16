# P11 – Frontend Dashboard

## Objective

Develop a real-time Ground Control Station (GCS) dashboard that visualizes the autonomous Counter-UAS mission through live WebSocket streams.

The frontend acts as the operator interface for monitoring the complete interception pipeline, providing real-time visualization of guidance commands, controller outputs, image tracking performance, target lock status, and overall mission state.

---

# Frontend Execution

```bash
python3 -m frontend.app
```

Open Dashboard

```text
http://localhost:8050
```

---

# Frontend Architecture

```text
                     FastAPI Backend
                             │
                   WebSocket Streaming
                             │
                             ▼
                  DashboardWebSocket
                             │
                Latest Message Cache
                             │
        ┌────────────┬────────────┬────────────┐
        ▼            ▼            ▼            ▼
 Image Callback  Controller   Target      Status
                  Callback    Callback    Callback
        │            │            │            │
        └────────────┴────────────┴────────────┘
                             │
                             ▼
                     Dash UI Components
                             │
                             ▼
                 Counter-UAS Dashboard
```

---

# P11.1 — Dashboard Foundation

## Goal

Create the dashboard application framework and responsive layout.

---

## Files

```text
frontend/

app.py

layout/
    dashboard_layout.py

assets/
    style.css
```

---

## Responsibilities

```text
Dash Application

Dashboard Layout

Responsive Grid

Panel Management

Theme Configuration
```

---

# P11.2 — WebSocket Client

## Goal

Implement a multi-channel WebSocket client for receiving live backend data.

---

## Files

```text
frontend/services/

websocket_client.py
```

---

## Responsibilities

```text
WebSocket Connections

Background Threads

Latest Message Cache

Connection Management

Live Data Reception
```

---

## Connected Channels

```text
Telemetry

Guidance

Control

Tracking

Target State
```

---

# P11.3 — Dashboard Callbacks

## Goal

Implement callback-driven real-time dashboard updates.

---

## Files

```text
frontend/callbacks/

controller_callback.py

image_callback.py

target_callback.py

trajectory_callback.py

status_callback.py
```

---

## Responsibilities

```text
Read Latest Messages

Maintain History Buffers

Generate Plotly Figures

Update Dashboard Components
```

---

# P11.4 — UI Components

## Goal

Create reusable dashboard UI components.

---

## Files

```text
frontend/components/

controller_graph.py

image_error_graph.py

target_graph.py

trajectory_graph.py

status_panel.py
```

---

## Responsibilities

```text
Reusable Graph Components

Status Panel

Graph Configuration

UI Separation
```

---

# P11.5 — 3D Trajectory Graph

## Goal

Provide the dashboard structure for future 3D mission visualization.

---

## Current Status

```text
Placeholder
```

---

## Future Visualization

```text
UAV Position

Target Position

Predicted Target

Estimated Target

Flight Path

Interception Path
```

---

# P11.6 — Image Error Graph

## Goal

Visualize image-space tracking performance.

---

## Data Source

```text
Guidance Message
```

---

## Displays

```text
Image Error X

Image Error Y

Positive Lock Threshold

Negative Lock Threshold
```

---

## Purpose

```text
Monitor camera alignment with the detected target.
```

---

# P11.7 — Guidance vs Controller Graph

## Goal

Compare guidance commands with controller outputs.

---

## Data Sources

```text
Guidance Message

Control Message
```

---

## Displays

```text
Guidance Pitch

Guidance Yaw

Control Pitch

Control Yaw

Pitch Limits

Yaw Limits
```

---

## Purpose

```text
Evaluate controller tracking performance and command following.
```

---

# P11.8 — Controller Increment Graph

## Goal

Visualize controller outputs.

---

## Status

Merged into the Guidance vs Controller graph.

---

## Reason

```text
Controller outputs already represent the commands sent to PX4.

Maintaining a separate graph duplicated information.

The merged visualization provides direct comparison between guidance commands and controller outputs.
```

---

# P11.9 — Target Lock Graph

## Goal

Monitor target acquisition together with thrust response.

---

## Data Sources

```text
Guidance Message

Control Message
```

---

## Displays

```text
Target Lock State

Collective Thrust
```

---

## Purpose

```text
Correlate target acquisition with thrust commands during autonomous interception.
```

---

# P11.10 — Status Panel

## Goal

Provide a concise real-time mission summary.

---

## Displays

```text
Flight Mode

Track ID

Target Class

Detection Confidence

Target Status

Pitch / Yaw Commands

Collective Thrust
```

---

## Purpose

```text
Allow operators to quickly assess mission state without inspecting graphs.
```

---

# P11.11 — Final Integration & Verification

## Goal

Integrate all dashboard modules into a single monitoring application.

---

## Integration

```text
Dashboard Layout

WebSocket Client

Callbacks

UI Components

Graphs

Status Panel
```

---

## Verification

```text
Image Error Stream

Guidance Stream

Control Stream

Tracking Stream

Target State Stream

Status Updates

Responsive Layout

Real-Time Graph Updates
```

---

# Dashboard Layout

```text
┌─────────────────────────────────────────────────────────────┐
│               Counter-UAS Monitoring Panel                  │
├───────────────────────────────┬─────────────────────────────┤
│                               │                             │
│ Guidance vs Controller Graph  │ Image Error                │
│                               │                             │
├───────────────────────────────┼─────────────────────────────┤
│                               │                             │
│ Target Lock vs Thrust         │ System Status              │
│                               │                             │
└───────────────────────────────┴─────────────────────────────┘
```

---

# Dashboard Data Flow

```text
FastAPI Backend

↓

WebSocket Channels

↓

DashboardWebSocket

↓

Latest Message Cache

↓

Dash Callbacks

↓

Plotly Graphs

↓

Dashboard
```

---

# Verification

## Start Dashboard

```bash
python3 -m frontend.app
```

---

## Verify WebSocket Connections

```text
Telemetry

Guidance

Control

Tracking

Target State
```

---

## Verify Dashboard

```text
Image Error Graph

Guidance vs Controller Graph

Target Lock vs Thrust Graph

System Status Panel

Responsive Dashboard Layout
```

---
---

# Result

P11 delivers the first operational Ground Control Station (GCS) monitoring dashboard for the Counter-UAS Autonomous Interceptor.

The dashboard receives live telemetry through multiple backend WebSocket streams and provides operators with real-time visualization of image tracking error, guidance commands, controller outputs, target lock status, and mission state through a modular, responsive interface.

The implemented architecture serves as the foundation for future enhancements including 3D trajectory visualization, mission replay, telemetry analytics, and advanced operator tools.