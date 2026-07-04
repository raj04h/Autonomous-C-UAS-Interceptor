## P8- control layer

control.py
GuidanceCommand
        │
        ▼
guidance.valid ?

        │
   ┌────┴────┐
   │         │
 False      True
   │         │
   ▼         ▼

Safe Cmd    Guidance → Control Mapping
                │
                ▼
         Saturation (Optional)
                │
                ▼
        Return ControlCommand




# Intercept Trajectory Optimization

Intercept trajectory optimization is intentionally **not implemented** in P7.

The current system operates entirely in **image space (pixel coordinates)**.

True trajectory optimization requires estimating the target in **3D world coordinates**, including:

- Target position (X, Y, Z)
- Target velocity
- Interceptor position
- Interceptor velocity
- Relative geometry

These capabilities will be introduced in future phases after the interceptor is capable of autonomous flight under PX4 Offboard control.

The interceptor position and target world position become necessary only when you move from image-based pursuit to full 3D interception using localization, depth estimation, or state fusion.

computation should occur in one predictable execution loop
your benchmark should measure one complete control cycle

Your architecture already uses a timer-driven pipeline, which is the better design.

Controller = Euler
PX4 Adapter = Quaternion Conversion
Keep the entire AI stack in ENU/ROS convention.
generate timestamps in px4_adapter.py

adapter.py--
Euler

↓

Quaternion

↓

NED

↓

PX4 Messages

↓

Timestamp


ControlCommand
        │
        ▼
convert_to_px4()
        │
        ├──────────────┬─────────────────────┐
        ▼              ▼                     ▼
_create_offboard() _create_attitude() _create_vehicle_command()
        │              │                     │
        └──────────────┴─────────────────────┘
                       │
                       ▼
              PX4 Message Bundle

---
                     Guidance Node
                           │
                           ▼
                 /guidance_command
                           │
                           ▼
             ControlSubscriberManager
                           │
                           ▼
                FlightControllerCmd
                           │
                           ▼
                 ControlCommand.msg
                           │
          ┌────────────────┴────────────────┐
          ▼                                 ▼
ControlPublisherManager              PX4Adapter
 (/control_command)                      │
                                         ▼
                              OffboardControlMode
                              VehicleAttitudeSetpoint
                              VehicleCommand (Mode)
                              VehicleCommand (Arm)
                              desired_pitch
                              desired_yaw
                              dt (elapsed time)
                              controller gains
                              rate limiter
                              saturation
                              safe command handling
                                         │
                                         ▼
                              Timestamp Assignment
                                         │
                                         ▼
                      /fmu/in/offboard_control_mode
                      /fmu/in/vehicle_attitude_setpoint
                      /fmu/in/vehicle_command
                                         │
                                         ▼
                                      PX4 SITL
p8.7.1
Euler
↓

Quaternion
        W=cos_roll*cos_pitch*cos_yaw + sin_roll*sin_pitch*sin_yaw
        X=sin_roll*cos_pitch*cos_yaw - cos_roll*sin_pitch*sin_yaw
        Y=cos_roll*sin_pitch*cos_yaw + sin_roll*cos_pitch*sin_yaw
        Z=cos_roll*cos_pitch*sin_yaw - sin_roll*sin_pitch*cos_yaw


p8.7.2
VehicleAttitudeSetpoint, msg.thrust_body = [0.0, 0.0, -control_cmd.collective_thrust]

PX4 uses NED.

p8.7.3
OffboardControlMode

p8.7.4
VehicleCommand
ControlCommand
        │
        ▼
PX4 Adapter
        │
        ├───────────────┐
        ▼               ▼
OffboardControlMode   VehicleAttitudeSetpoint
        │               │
        ├───────────────┴──────────────┐
        ▼                              ▼
Offboard Mode Command            Arm Command\


0 Manual

1 Altitude

2 Position

3 Auto

4 Acro

5 Stabilized

6 Offboard # so we use


p8.7.5
Add timestamps.

p8.7.6
Verify against PX4 SITL



High-Level Guidance (P7) → decides where to go.
Low-Level Control (P8) → decides how to move the drone.

"How do I convert these desired guidance commands into PX4 Offboard setpoints so the interceptor physically flies toward the target?"

Intercept optimization answers a different question:

"What is the optimal path to intercept the target?"

That requires reasoning in 3D space, not image space.


# P8 – Control Layer

## Objective

Develop a modular closed-loop flight control layer that converts high-level guidance commands into safe PX4 Offboard attitude commands.

The control layer acts as the bridge between the AI perception/guidance pipeline and the PX4 flight controller.

Goal:

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

# Architecture

```text
                     Guidance Node
                           │
                           ▼
                 /guidance_command
                           │
                           ▼
             ControlSubscriberManager
                           │
                           ▼
                FlightControllerCmd
                           │
                           ▼
                 ControlCommand.msg
                           │
          ┌────────────────┴────────────────┐
          ▼                                 ▼
ControlPublisherManager              PX4Adapter
 (/control_command)                      │
                                         ▼
                              OffboardControlMode
                              VehicleAttitudeSetpoint
                              VehicleCommand (Mode)
                              VehicleCommand (Arm)
                                         │
                                         ▼
                             Offboard State Machine
                                         │
                                         ▼
                              PX4 Offboard Interface
                                         │
                                         ▼
                                      PX4 SITL
```

---

# ROS2 Package

```text
control_node
```

---

# Core Components

```text
control_pipeline.py

cmd_controller.py

controller_graph.py

Addapter_PX4.py

offboard_state_machine.py

control_subscriber_manager.py

control_publisher_manager.py

control_benchmark.py
```

---

# Interface Package

```text
interfaces/msg/ControlCommand.msg
```

---

# P8.1 – Flight Controller

## Goal

Create a reusable controller responsible for converting Guidance outputs into smooth aircraft attitude commands.

---

## Implementation

Created

```text
cmd_controller.py
```

---

## Responsibilities

```text
Receive GuidanceCommand

Validate Guidance

Generate Safe Command

Incrementally Update Desired Attitude

Apply Rate Limiting

Apply Attitude Saturation

Generate Collective Thrust

Return ControlCommand
```

---

## Flight Controller Logic

```text
GuidanceCommand
        │
        ▼
guidance.valid ?
        │
   ┌────┴────┐
   │         │
 False      True
   │         │
   ▼         ▼

Safe Cmd    Guidance → Control Mapping
                │
                ▼
         Rate Limiting
                │
                ▼
        Saturation (Optional)
                │
                ▼
        Return ControlCommand
```

---

## Closed Loop Controller

The controller maintains a persistent aircraft attitude.

Instead of immediately applying Guidance outputs, the controller gradually updates:

```text
desired_pitch

desired_yaw
```

using

```text
Controller Gain

Elapsed Time (dt)

Rate Limiter

Attitude Saturation
```

This produces smooth aircraft motion suitable for autonomous flight.

---

# P8.2 – Controller Visualization

## Goal

Visualize the controller's internal behavior in real time.

---

## Implementation

Created

```text
controller_graph.py
```

---

## Responsibilities

```text
Image Error

Pitch Controller

Yaw Controller

Controller Increment

Desired Attitude

Target Lock

Controller Status

Performance Overlay
```

---

## Controller Dashboard

The visualization provides

```text
Image-space Error

Guidance Commands

Desired Attitude

Rate-Limited Controller Output

Pitch/Yaw Limits

Target Lock State

Controller Configuration

Current Controller Status
```

---

## Visualization

```text
Image Error

Pitch Controller

Yaw Controller

Controller Increment

Desired Attitude

Target Lock
```

---

# P8.3 – Control Subscriber

## Goal

Receive all required information for the controller.

---

## Implementation

Created

```text
control_subscriber_manager.py
```

---

## Responsibilities

```text
Receive GuidanceCommand

Receive VehicleStatus

Store Latest Messages

Provide Latest Data
```

---

# P8.4 – Control Publisher

## Goal

Separate ROS communication from controller logic.

---

## Implementation

Created

```text
control_publisher_manager.py
```

---

## Responsibilities

```text
Publish OffboardControlMode

Publish VehicleAttitudeSetpoint

Publish VehicleCommand
```

---

# P8.5 – Performance Benchmark

## Goal

Measure the complete execution time of one control cycle.

---

## Responsibilities

```text
FPS

Average Latency

Minimum Latency

Maximum Latency

Control Cycle Timing
```

---

## Execution Model

Benchmark measures

```text
Guidance

↓

Controller

↓

PX4 Conversion

↓

Publishing

↓

Benchmark End
```

The measured latency represents one complete controller execution cycle.

---

# P8.6 – Control Interface

## Goal

Standardize communication between Guidance and Control.

---

## Implementation

Created

```text
interfaces/msg/ControlCommand.msg
```

---

## Message Definition

```text
int32 track_id

float32 roll_setpoint

float32 pitch_setpoint

float32 yaw_setpoint

float32 collective_thrust

bool offboard_enabled
```

---

## Build Interface

```bash
colcon build --packages-select interfaces
```

---

## Verify Interface

```bash
ros2 interface show interfaces/msg/ControlCommand
```

---

# P8.7 – PX4 Adapter

## Goal

Convert generic controller outputs into PX4 Offboard messages.

---

## Implementation

Created

```text
Addapter_PX4.py
```

---

## Responsibilities

```text
Euler → Quaternion

Quaternion → PX4 Attitude

Create OffboardControlMode

Create VehicleAttitudeSetpoint

Create VehicleCommand

Assign Timestamp

Generate PX4 Message Bundle
```

---

## Conversion Pipeline

```text
ControlCommand
        │
        ▼
convert_to_px4()
        │
        ├──────────────┬─────────────────────┐
        ▼              ▼                     ▼
_create_offboard() _create_attitude() _create_vehicle_command()
        │              │                     │
        └──────────────┴─────────────────────┘
                       │
                       ▼
              PX4 Message Bundle
```

---

## Euler → Quaternion

The controller operates completely in the ROS2 ENU frame.

Quaternion conversion occurs only inside the PX4 Adapter.

```text
Euler

↓

Quaternion

↓

PX4 Messages
```

Quaternion equations

```text
W = cos(r/2)cos(p/2)cos(y/2)
  + sin(r/2)sin(p/2)sin(y/2)

X = sin(r/2)cos(p/2)cos(y/2)
  - cos(r/2)sin(p/2)sin(y/2)

Y = cos(r/2)sin(p/2)cos(y/2)
  + sin(r/2)cos(p/2)sin(y/2)

Z = cos(r/2)cos(p/2)sin(y/2)
  - sin(r/2)sin(p/2)cos(y/2)
```

---

## VehicleAttitudeSetpoint

Generated fields

```text
Quaternion Attitude

Yaw Rate

Body Thrust
```

```python
msg.thrust_body = [
    0.0,
    0.0,
    -control_cmd.collective_thrust,
]
```

PX4 expects body thrust in the NED frame.

---

## OffboardControlMode

The controller operates in

```text
Attitude Control Mode
```

Configuration

```text
Position       False

Velocity       False

Acceleration   False

Attitude       True

Body Rate      False
```

---

## VehicleCommand

The adapter creates

```text
Offboard Mode Command

Arm Command
```

PX4 Flight Modes

```text
0 Manual

1 Altitude

2 Position

3 Auto

4 Acro

5 Stabilized

6 Offboard
```

The controller requests

```text
Mode 6 (Offboard)
```

---

# P8.8 – PX4 Offboard State Machine

## Goal

Provide deterministic sequencing before autonomous flight.

---

## Implementation

Created

```text
offboard_state_machine.py
```

---

## Responsibilities

```text
Heartbeat Counting

Offboard Request

Arm Request

State Management

Safe State Transition
```

---

## State Diagram

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

---

## State Flow

```text
Publish Heartbeats
        │
        ▼

Heartbeat Counter

        │
        ▼

Request Offboard Mode

        │
        ▼

Request Arm

        │
        ▼

Autonomous Flight
```

---

# Intercept Trajectory Optimization

Intercept trajectory optimization is intentionally **not implemented** in P8.

The current controller operates entirely in **image space (pixel coordinates)**.

True interception requires estimating

- Target Position (X, Y, Z)
- Target Velocity
- Interceptor Position
- Interceptor Velocity
- Relative Geometry

These capabilities will be introduced after validating autonomous flight using PX4 Offboard control.

---

# Verification

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

## Verify Topics

```bash
ros2 topic list
```

Expected

```text
/guidance_command

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

## Final Control Architecture

```text
Guidance Node
        │
        ▼
/guidance_command
        │
        ▼
ControlSubscriberManager
        │
        ▼
FlightControllerCmd
        │
        ▼
ControlCommand.msg
        │
        ▼
PX4Adapter
        │
        ├───────────────┐
        ▼               ▼
OffboardControlMode   VehicleAttitudeSetpoint
        │               │
        ├───────────────┴──────────────┐
        ▼                              ▼
VehicleCommand (Mode)        VehicleCommand (Arm)
                │
                ▼
      Offboard State Machine
                │
                ▼
ControlPublisherManager
                │
                ▼
/fmu/in/offboard_control_mode

/fmu/in/vehicle_attitude_setpoint

/fmu/in/vehicle_command
                │
                ▼
             PX4 SITL
```

---