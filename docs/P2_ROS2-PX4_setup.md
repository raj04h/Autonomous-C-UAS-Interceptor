# P2 – ROS2 Application Layer

## Objective

Establish PX4 ↔ ROS2 communication at the application layer and create custom ROS2 nodes for telemetry monitoring and vehicle state awareness.

Goal:

```text
PX4 Telemetry
        │
        ▼
ROS2 Subscribers
        │
        ▼
Application Layer Nodes
        │
        ▼
Vehicle Monitoring
```

---

## Architecture

```text
PX4 SITL
    │
    ▼
DDS Bridge
    │
    ▼
ROS2
    │
    ├──────────────► telemetry_listener.py
    │
    └──────────────► vehicle_status_listener.py
                                │
                                ▼
                      Vehicle Monitoring
```

---

## Components

### ROS2 Packages

```text
interfaces
sensor_node
perception_node
tracking_node
estimation_node
guidance_node
control_node
```

---

### Sensor Node

```text
telemetry_listener.py

vehicle_status_listener.py

camera_listener.py
```

---

### PX4 Topics

```text
/fmu/out/vehicle_local_position

/fmu/out/vehicle_status
```

---

## Execution Steps

### P2.1 – Create ROS2 Package Structure

#### Goal

Create project package architecture for future autonomy stack development.

#### Commands

```bash
cd ros2_WS/src

ros2 pkg create \
--build-type ament_python \
sensor_node

ros2 pkg create \
--build-type ament_python \
perception_node

ros2 pkg create \
--build-type ament_python \
tracking_node

ros2 pkg create \
--build-type ament_python \
estimation_node

ros2 pkg create \
--build-type ament_python \
guidance_node

ros2 pkg create \
--build-type ament_python \
control_node

ros2 pkg create \
--build-type ament_cmake \
interfaces
```

---

### P2.2 – Telemetry Subscriber

#### Goal

Receive vehicle position and velocity data from PX4.

#### Topic

```text
/fmu/out/vehicle_local_position
```

#### Extracted Data

```text
Position X

Position Y

Position Z

Velocity X

Velocity Y

Velocity Z
```

---

### P2.3 – Vehicle Status Subscriber

#### Goal

Monitor vehicle state information.

#### Topic

```text
/fmu/out/vehicle_status
```

#### Extracted Data

```text
Arming State

Navigation State

Vehicle State
```

---

### P2.4 – Telemetry Monitoring

#### Goal

Verify telemetry data is continuously received from PX4.

#### Command

```bash
ros2 run sensor_node telemetry_listener
```

---

### P2.5 – Vehicle Status Monitoring

#### Goal

Verify vehicle state information is continuously received.

#### Command

```bash
ros2 run sensor_node vehicle_status_listener
```

---

## Verification

### Verify Telemetry Topic

```bash
ros2 topic echo \
/fmu/out/vehicle_local_position
```

---

### Verify Vehicle Status Topic

```bash
ros2 topic echo \
/fmu/out/vehicle_status
```

---

### Verify Telemetry Frequency

```bash
ros2 topic hz \
/fmu/out/vehicle_local_position
```

Observed:

```text
~100 Hz
```

---

### Verify Package Registration

```bash
ros2 pkg executables sensor_node
```

Expected:

```text
telemetry_listener

vehicle_status_listener
```

---