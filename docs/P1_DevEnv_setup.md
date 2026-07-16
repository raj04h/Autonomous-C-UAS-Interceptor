# P1 – Simulation Foundation & PX4-ROS2 Integration

## Objective

Establish a stable simulation and communication stack for the Counter-UAS Autonomous Interceptor project.

Goal:

```text
PX4 SITL + Gazebo + QGroundControl + ROS2
working together with real-time telemetry communication.
```

---

## Architecture

```text
                            QGroundControl
                                    ▲
                                    │ MAVLink
                                    │
                Gazebo World ───► PX4 SITL
                                    │
                                    │ uXRCE DDS
                                    ▼
                            MicroXRCEAgent
                                    │
                                    ▼
                                    ROS2
                                    │
                                    ▼
                            Future Autonomy Stack
```

---

## Components

### Simulation

- PX4 SITL v1.15.4
- Gazebo
- QGroundControl

### Middleware

- ROS2 Humble
- MicroXRCEAgent
- px4_msgs

### Communication

- MAVLink (PX4 ↔ QGroundControl)
- DDS (PX4 ↔ ROS2)

---

## Execution Steps

### P1.1 – Start DDS Bridge

#### Goal

Establish DDS communication between PX4 and ROS2.

#### Command

```bash
MicroXRCEAgent udp4 -p 8888
```

---

### P1.2 – Launch PX4 SITL + Gazebo

#### Goal

Start PX4 simulator and Gazebo environment.

#### Command

```bash
make px4_sitl gz_x500
```

---

### P1.3 – Launch QGroundControl

#### Goal

Connect Ground Control Station to PX4.

#### Command

```bash
./QGC.AppImage
```

---

### P1.4 – Install PX4 ROS2 Message Definitions

#### Goal

Install PX4 ROS2 interface package.

#### Commands

```bash
cd ros2_WS/src

git clone https://github.com/PX4/px4_msgs.git
```

---

### P1.5 – Create ROS2 Workspace

#### Goal

Prepare ROS2 development workspace.

#### Commands

```bash
mkdir -p ros2_WS/src

cd ros2_WS
```

---

### P1.6 – Build ROS2 Workspace

#### Goal

Generate ROS2 interfaces and package metadata.

#### Commands

```bash
cd ros2_WS

colcon build

source install/setup.bash
```

---

### P1.7 – Verify PX4 Topics

#### Goal

Verify DDS bridge communication.

#### Commands

```bash
ros2 topic list | grep fmu
```

Expected Topics:

```text
/fmu/out/vehicle_local_position
/fmu/out/vehicle_status
/fmu/out/vehicle_attitude
/fmu/out/vehicle_odometry
```

---

### P1.8 – Verify Telemetry Streaming

#### Goal

Confirm PX4 telemetry reaches ROS2.

#### Commands

```bash
ros2 topic echo \
/fmu/out/vehicle_local_position
```

---

### P1.9 – Verify Telemetry Frequency

#### Goal

Validate streaming performance.

#### Commands

```bash
ros2 topic hz \
/fmu/out/vehicle_local_position
```

Expected:

```text
~100 Hz
```

---

## Verification

### PX4 Topics Available

```bash
ros2 topic list | grep fmu
```

### PX4 Messages Available

```bash
ros2 interface list | grep px4
```

### Telemetry Streaming

```bash
ros2 topic echo \
/fmu/out/vehicle_local_position
```

### Telemetry Frequency

```bash
ros2 topic hz \
/fmu/out/vehicle_local_position
/fmu/out/vehicle_local_position
```

Observed:

```text
~100 Hz
```

---