"""

# what data? Image
# topic? /world/default/model/x500_0/link/base_link/sensor/front_camera/image
# msg type? sensor_msgs/msg/Image
# action logic? Print Frame Count, Width, Height, Encoding


MicroXRCEAgent udp4 -p 8888
make px4_sitl gz_x500
./QGCS.AppImage

"""
"""
ROS2 Launch

1. ros2 run perception_node detector_pipeline

2. ros2 run tracking_node tracker_pipeline
3. ros2 run estimation_node estimator_pipeline

4. ros2 run guidance_node guidance_pipeline
5. ros2 run control_node control_pipeline

6. ros2 run visualization_node visualization_pipeline

ros2 topic echo /tracks --once

source install/setup.bash
ros2 launch uas_launch uas.launch.py


"""

"""
BACKEND

source /opt/ros/humble/setup.bash
source ros2_WS/install/setup.bash

1. python3 -m backend.main
2. python3 -m backend.ros2_bridge.bridge_pipeline

3. python3 -m backend.test_connection
"""


"""
step 0- config backend and db.py

P9.2- database infrastructure (Engine + Session).

Step 1 — connection.py
Create one SQLAlchemy Engine for the entire backend.

Step 2 — session.py
Create a reusable SQLAlchemy Session Factory.

Step 3 — Test Database Connection


P9.3 = ORM Model Layer

connect python class with Metadata
Convert every robotics message into a persistent database model.

orm_ models
Step 1 —   base.py

Step 2 —  orm_ models.py

Each msg tables are made here with columns details


Step 3 — orm_schema.py
table create class and tableresponse class with column's content datatype.
Generate Json format


Step 4 — orm_service.py
Business logic
.create(...)
.get_latest(_)
.get_history(_)

Step 5 — orm_api.py
start fastapi server and release in json output

1. prefix and tag
2. router.get(/latest, /history)


P9.4 ROS2 Connection

step 6- ROS2 Subscriber

Step 7 — ros2_mapper.py
ros2 topic connection  with db schema

Step 8 — bridge_pipline.py
start Ros2_node and start all services to subscribe msgs.



P9.5 — WebSocket

Step 1: Client opens a WebSocket connection
FastAPI accepts it and connection stays open until one side disconnects.

Step 2: websocket manager
It stores every connected WebSocket.


Step 3: WebSocket Endpoint
/ws/telemetry

Step 4: ws broadcaster.py
ConnectionManager.broadcast()- Send this new telemetry to everyone connected.

step5-  Broadcast
JSON data received simultaneously





                     ROS2
                       │
             SubscriberManager
                       │
          ┌────────────┴────────────┐
          │                         │
          ▼                         ▼
   MapperManager             WebSocketManager
          │                         │
          ▼                         ▼
    Pydantic Schema          WSConnection.broadcast()
          │                         │
          ▼                         ▼
TelemetryService.create()   TelemetryResponse
          │                         │
          ▼                         ▼
      PostgreSQL               WebSocket
                                    │
                                    ▼
                              Streamlit dash



                    Main Process
                         │
        ┌────────────────┴────────────────┐
        │                                 │
        ▼                                 ▼
   FastAPI Event Loop                ROS2 Thread
        │                                 │
        ▼                                 ▼
  WebSocket Clients                 BridgePipeline
                                          │
                                          ▼
                                   WSBroadcaster

                                   

                            
                                   
BridgePipeline
────────────────────────────────

Receive ROS2 Messages
        │
        ▼
SubscriberManager
        │
        ▼
MapperManager
        │
        ├──────────────┐
        ▼              ▼
TelemetrySchema   TargetStateSchema
        │              │
        ▼              ▼
TelemetryService  TargetStateService
        │              │
        ▼              ▼
PostgreSQL


P9.1  Sensor Backend Integration          ✅ (Start here)

P9.2  Detection Backend Integration

P9.3  Tracking Backend Integration

P9.4  Estimation Backend Integration

P9.5  Guidance Backend Integration

P9.6  Control Backend Integration

P9.7  Backend Health & Metrics

P9.8  WebSocket Aggregation

P9.9  Dashboard Integration

P9.10 Dashboard Visualization

P9.11 Logging

P9.12 Production Optimization


missions- Represents one complete autonomous mission.
────────────
mission_id
start_time
end_time
duration

telemetry- Stores the interceptor UAV's own state throughout the mission.
────────────
mission_id
position
velocity
attitude
battery
flight_mode
created_at

target_state- It stores what your perception pipeline believes about the enemy drone.
────────────
mission_id
track_id
position
velocity
acceleration
prediction
confidence
created_at


eg- 
Mission ID = 7
Drone Position
Target Position
Target State
End Time
Status = Success

backend/websocket/

ws_connection.py        ← connection manager

ws_broadcaster.py       ← broadcaster API

ws_telemetry.py         ← /ws/telemetry

ws_target_state.py      ← /ws/target_state

ws_detection.py         ← /ws/detection

ws_track.py             ← /ws/track

ws_guidance.py          ← /ws/guidance

ws_control.py           ← /ws/control

"""
