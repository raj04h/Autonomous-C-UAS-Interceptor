# Air-to-Air Gazebo Simulation

## Overview

This module provides the Gazebo-based air-to-air simulation environment used by the Counter-UAS Autonomous Interceptor project.

The simulation creates a controlled visual tracking scenario in which an FPV-style camera observes a fixed-wing target UAV performing scripted flight maneuvers inside a custom Gazebo world.

The environment is designed to generate deterministic and repeatable target motion for validating the complete vision-based autonomy pipeline.

The Gazebo camera stream is used to generate prerecorded air-to-air footage, which is then processed by the existing ROS2 perception and autonomy stack.

---

# Objectives

- Create a dedicated air-to-air UAV simulation environment.
- Simulate a fixed-wing target UAV.
- Provide an FPV-style tracking camera.
- Generate deterministic target trajectories.
- Simulate realistic target maneuvers.
- Exercise detection, tracking, estimation, and guidance behavior.
- Generate repeatable air-to-air video for the autonomy pipeline.
- Remove dependency on external UAV tracking footage.

---

# Pipeline Position

```text
Gazebo Air-to-Air World
        │
        ▼
Fixed-Wing Target UAV
        │
        ▼
FPV Camera
        │
        ▼
Air-to-Air Video
        │
        ▼
ROS2 Autonomy Pipeline
```

The generated video is consumed by:

```text
Video
   │
   ▼
Detection
   │
   ▼
Tracking
   │
   ▼
State Estimation
   │
   ▼
Guidance
   │
   ▼
Flight Control
```

---

# Architecture

```text
                  Gazebo Sim
                      │
          ┌───────────┼───────────┐
          ▼           ▼           ▼
     Environment   FPV Camera   Target UAV
                                  │
                                  ▼
                         Trajectory Generator
                                  │
                                  ▼
                         Gazebo Pose Service
                                  │
                                  ▼
                         Fixed-Wing Motion
                                  │
                                  ▼
                            Camera View
                                  │
                                  ▼
                         Gazebo Image Stream
                                  │
                                  ▼
                           Recorded Video
```

---

# Core Components

| Component | Responsibility |
|-----------|----------------|
| `air_to_air.sdf` | Define the complete Gazebo air-to-air world |
| `target_fixedwing` | Visual fixed-wing target UAV |
| FPV Camera | Generate interceptor-style target imagery |
| `testing_trajectory.cpp` | Generate scripted target UAV trajectory |
| `setup_env.sh` | Configure Gazebo resource paths |
| Gazebo Pose Service | Apply target position and attitude |
| Gazebo Transport | Publish FPV camera image stream |
| Environment Models | Provide terrain and visual background |

---

# Data Flow

```text
Trajectory Generator
        │
        ▼
Target Pose
        │
        ▼
Gazebo World
        │
        ▼
Fixed-Wing Target
        │
        ▼
FPV Camera
        │
        ▼
Gazebo Image Topic
        │
        ▼
Air-to-Air Video
        │
        ▼
Autonomy Pipeline
```

---

# Gazebo World

The simulation uses a dedicated custom world:

```text
air_to_air.sdf
```

The world provides the complete visual environment required for air-to-air target tracking.

The environment includes:

- Fixed-wing target UAV
- FPV tracking camera
- Ground terrain
- Trees
- River
- Mountains
- Sky and environmental elements

These elements provide visual variation and background complexity for evaluating the perception pipeline.

---

# Target UAV

The simulation uses a fixed-wing aircraft as the target UAV.

The target is controlled through scripted Gazebo pose updates.

The trajectory generator controls:

```text
Position

X
Y
Z

Attitude

Roll
Pitch
Yaw
```

The target therefore follows a deterministic trajectory through the simulated environment.

---

# Target Motion Model

The target UAV currently uses scripted kinematic motion.

```text
Trajectory Generator
        │
        ▼
Position + Attitude
        │
        ▼
Gazebo Pose Service
        │
        ▼
Target Fixed-Wing UAV
```

The target is not controlled through PX4.

```text
Scripted Kinematic Motion      ✓

Deterministic Trajectory       ✓

Controlled Target Maneuvers    ✓

PX4 Target Flight Control      ✗

Aerodynamic Flight Validation  ✗
```

This is intentional because the primary purpose of the simulation is repeatable visual target generation rather than target flight-controller validation.

---

# FPV Camera

The FPV camera represents the visual viewpoint of the interceptor.

The camera observes the target UAV throughout the simulated mission.

Camera configuration:

```text
Resolution

1280 × 720

Pixel Format

RGB_INT8
```

The image stream is published through Gazebo Transport.

Example topic:

```text
/air_to_air/fpv_camera/image
```

Message type:

```text
gz.msgs.Image
```

---

# Target Trajectory

The target trajectory is generated by:

```text
testing_trajectory.cpp
```

The trajectory generator continuously updates the target UAV position and attitude.

```text
testing_trajectory.cpp
        │
        ▼
Target Position
        │
        ▼
Target Attitude
        │
        ▼
/world/air_to_air/set_pose
        │
        ▼
Gazebo
        │
        ▼
target_fixedwing
```

The trajectory is deterministic, allowing the same tracking scenario to be reproduced across multiple experiments.

---

# Flight Scenario

The target trajectory is designed around the states required to validate the autonomy pipeline.

```text
PATROL
   │
   ▼
DETECTION
   │
   ▼
TRACKING
   │
   ▼
CONVERGENCE
   │
   ▼
LOCK
   │
   ▼
EVASIVE BREAK
   │
   ▼
SEARCH
   │
   ▼
REACQUISITION
   │
   ▼
FINAL LOCK
```

---

# Mission Profile

The simulated target performs multiple flight phases.

| Phase | Purpose |
|-------|---------|
| Patrol | Initialize detection and tracking |
| Threat Reaction | Introduce lateral target movement |
| Defensive Weave | Stress tracking and estimation |
| Terrain Mask | Introduce vertical and environmental motion |
| Convergence | Move target toward camera center |
| Target Lock | Hold target inside guidance lock region |
| Evasive Break | Force target away from lock |
| Reacquisition | Return target into tracking region |
| Final Lock | Finish with stable target lock |

The trajectory continuously varies:

- Position
- Altitude
- Heading
- Roll
- Pitch
- Relative image position

This produces a more representative fixed-wing tracking sequence than simple linear waypoint motion.

---

# Target Lock Scenario

The FPV camera operates at:

```text
1280 × 720
```

Therefore the image center is:

```text
X = 640

Y = 360
```

The trajectory intentionally brings the target toward this region.

```text
Target Outside Center
        │
        ▼
SEARCH
        │
        ▼
Target Detected
        │
        ▼
TRACK
        │
        ▼
Target Converges
        │
        ▼
LOCK
```

The target then performs an evasive maneuver:

```text
LOCK
  │
  ▼
TRACK
  │
  ▼
SEARCH
```

followed by reacquisition:

```text
SEARCH
  │
  ▼
TRACK
  │
  ▼
LOCK
```

This provides a repeatable test for the complete target tracking pipeline.

---

# Gazebo Resource Configuration

Gazebo requires access to both the custom simulation assets and PX4 Gazebo resources.

Environment configuration is handled through:

```text
setup_env.sh
```

The script configures:

```text
GZ_SIM_RESOURCE_PATH
```

with paths for:

```text
Air-to-Air Models

Air-to-Air Worlds

PX4 Gazebo Models

PX4 Gazebo Worlds
```

---

# Execution

## Configure Gazebo Environment

From the project root:

```bash
source gazebo_simulation/air_to_air_tracking/setup_env.sh
```

---

## Verify Resource Path

```bash
echo $GZ_SIM_RESOURCE_PATH
```

The output should contain both the custom air-to-air resources and PX4 Gazebo resources.

---

## Launch Air-to-Air Simulation

```bash
gz sim gazebo_simulation/air_to_air_tracking/worlds/air_to_air.sdf
```

The simulation should load:

```text
Air-to-Air Environment

Fixed-Wing Target

FPV Camera

Terrain

Trees

River

Mountains
```

---

# Camera Verification

## List Gazebo Topics

```bash
gz topic -l
```

Verify that the FPV camera topic exists:

```text
/air_to_air/fpv_camera/image
```

---

## Inspect Camera Topic

```bash
gz topic -i -t /air_to_air/fpv_camera/image
```

Expected message type:

```text
gz.msgs.Image
```

Expected pixel format:

```text
RGB_INT8
```

---

# Trajectory Verification

Verify the following during simulation:

- Target fixed-wing UAV appears correctly.
- Target begins scripted motion.
- Position changes continuously.
- Roll, pitch, and heading change with the trajectory.
- Target remains visible during tracking phases.
- Target approaches the camera center during convergence.
- Target remains near the center during the lock phase.
- Evasive maneuver moves the target away from lock.
- Target returns during reacquisition.
- Final target lock is achieved.

---

# Integration with Autonomy Pipeline

The Gazebo camera stream is used to generate the prerecorded video consumed by the autonomy stack.

```text
Gazebo
   │
   ▼
FPV Camera
   │
   ▼
Air-to-Air Video
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
Trajectory Prediction
   │
   ▼
Guidance
   │
   ▼
Flight Control
```

The autonomy pipeline therefore remains independent of the Gazebo image bridge.

No perception-node modifications are required when replacing the previous tracking footage with the Gazebo-generated video.

---

# Design Decisions

### Scripted Target Motion

The target UAV uses deterministic scripted motion rather than an independent PX4 flight controller.

This provides:

- Repeatable experiments
- Predictable target trajectories
- Controlled image-space motion
- Controlled target lock
- Controlled tracking loss
- Controlled reacquisition
- Easier perception benchmarking

---

### Gazebo Camera Transport

The FPV camera publishes directly through Gazebo Transport.

The simulation does not depend on the Gazebo-to-ROS2 image bridge for the current autonomy demonstration.

Instead:

```text
Gazebo Camera
      │
      ▼
Gazebo Image Stream
      │
      ▼
Recorded Video
      │
      ▼
ROS2 Perception Pipeline
```

This keeps simulation video generation independent from ROS image transport.

---

### Separation from PX4 Interceptor Simulation

The scripted trajectory controls only the target fixed-wing UAV.

```text
testing_trajectory.cpp
        │
        ▼
target_fixedwing
```

It does not control the interceptor aircraft.

The interceptor flight-control architecture remains independently handled by:

```text
Guidance
   │
   ▼
Control
   │
   ▼
PX4 Offboard
```

---

# Results

- Developed a dedicated Gazebo air-to-air tracking environment.
- Integrated a fixed-wing target UAV and FPV-style observer camera.
- Implemented deterministic scripted target motion.
- Created patrol, tracking, convergence, lock, evasive, and reacquisition scenarios.
- Verified the Gazebo camera image stream.
- Integrated terrain and environmental assets for realistic visual backgrounds.
- Generated a repeatable visual scenario for perception testing.
- Removed dependency on external UAV footage for the project demonstration.
- Preserved the existing ROS2 perception pipeline without requiring Gazebo image-bridge integration.

---

# Final Simulation Pipeline

```text
              Air-to-Air Gazebo World
                        │
          ┌─────────────┼─────────────┐
          ▼             ▼             ▼
     Environment    FPV Camera    Target UAV
                                      │
                                      ▼
                              Trajectory Generator
                                      │
                                      ▼
                               Scripted Motion
                                      │
                                      ▼
                                Camera Stream
                                      │
                                      ▼
                               Recorded Video
                                      │
                                      ▼
                              ROS2 Autonomy Stack
                                      │
                                      ▼
                Detection → Tracking → Estimation
                                      │
                                      ▼
                           Guidance → Control
```

---


# Outcome

The Gazebo air-to-air simulation provides a deterministic visual test environment for the Counter-UAS Autonomous Interceptor.

The subsystem now generates repeatable fixed-wing target scenarios that exercise the complete perception chain from detection through target lock while remaining isolated from the ROS2 camera bridge and the interceptor's PX4 flight-control implementation.