# Imports
from rclpy.node import Node

from rclpy.qos import (
    QoSProfile,
    ReliabilityPolicy,
    HistoryPolicy,
)

from px4_msgs.msg import (
    VehicleLocalPosition,
    VehicleAttitude,
    BatteryStatus,
    VehicleStatus
)

from interfaces.msg import (
    Detection,
    Track,
    TargetState,
    GuidanceCommand,
    ControlCommand
)

from backend.orm_database.db_session import SessionLocal

from backend.services.telemetry_service import TelemetryService

from backend.config.ros2_topics import ROS2Topic

from backend.ros2_bridge.subscriber_manager import SubscriberManager

from backend.ros2_bridge.mapper_manager import MapperManager

from backend.services.mission_service import MissionService

from backend.services.target_state_service import TargetStateService

from backend.websocket.ws_broadcaster import WSBroadcaster

from backend.config.backend_config import BackendConfig


class BridgePipeline(Node):
    def __init__(self):
        super().__init__("Backend_Bridge")

        qos= QoSProfile(
            reliability= ReliabilityPolicy.BEST_EFFORT,
            history=HistoryPolicy.KEEP_LAST,
            depth=10
        )

        self.db= SessionLocal()
        mission = MissionService.create (self.db)

        self.mission_id = mission.mission_id

        self.subscriber_manager=SubscriberManager()

        # Subscribers
        self.create_subscription(
            VehicleLocalPosition,
            ROS2Topic.VEHICLE_LOCAL_POSITION,
            self.subscriber_manager.vehicle_position_callback,
            qos
        )
        self.create_subscription(
            VehicleAttitude,
            ROS2Topic.VEHICLE_ATTITUDE,
            self.subscriber_manager.vehicle_attitude_callback,
            qos,
        )

        self.create_subscription(
            BatteryStatus,
            ROS2Topic.BATTERY_STATUS,
            self.subscriber_manager.battery_callback,
            qos
        )
        self.create_subscription(
            VehicleStatus,
            ROS2Topic.VEHICLE_STATUS,
            self.subscriber_manager.vehicle_status_callback,
            qos
        )
        self.create_subscription(
            Detection,
            ROS2Topic.DETECTION,
            self.subscriber_manager.detection_callback,
            qos
        )
        self.create_subscription(
            Track,
            ROS2Topic.TRACK,
            self.subscriber_manager.tracking_callback,
            qos
        )

        self.create_subscription(
            TargetState,
            ROS2Topic.TARGET_STATE,
            self.subscriber_manager.target_state_callback,
            qos
        )
        self.create_subscription(
            GuidanceCommand,
            ROS2Topic.GUIDANCE_COMMAND,
            self.subscriber_manager.guidance_callback,
            qos
        )
        self.create_subscription(
            ControlCommand,
            ROS2Topic.CONTROL_COMMAND,
            self.subscriber_manager.control_callback,
            qos
        )       

        # Main Pipeline Timer
        self.create_timer(
            BackendConfig.PIPELINE_PERIOD, 
            self.run_pipeline
        )

        self.get_logger().info("Bridge Node Started..")

    def run_pipeline(self):

        try:
            # Get Latest Messages
            position = self.subscriber_manager.get_vehicle_position()

            attitude = self.subscriber_manager.get_vehicle_attitude()

            status = self.subscriber_manager.get_vehicle_status()

            battery = self.subscriber_manager.get_battery_status()

            target_state = self.subscriber_manager.get_target_state()

            detection = self.subscriber_manager.get_detection()

            track = self.subscriber_manager.get_tracking()

            guidance = self.subscriber_manager.get_guidance()

            control = self.subscriber_manager.get_control()

            if position is None:
                return
            # Mapper
            telemetry = MapperManager.telemetry_to_schema(
                mission_id=self.mission_id,
                position=position,
                attitude=attitude,
                status=status,
                battery=battery,
            )
            # Database
            telemetry_response = TelemetryService.create(
                self.db,
                telemetry,
            )

            # WebSocket
            WSBroadcaster.telemetry(
                telemetry_response
            )

            # Target State
            if target_state is not None:

                target_state_schema = MapperManager.target_state_to_schema(
                    mission_id=self.mission_id,
                    target_state=target_state,
                )

                target_state_response = TargetStateService.create(
                    self.db,
                    target_state_schema,
                )

                WSBroadcaster.target_state(
                    target_state_response
                )

            # Detection Stream
            if detection is not None:

                detection_data = MapperManager.detection_to_dict(
                    detection,
                )

                WSBroadcaster.detection(
                    detection_data,
                )

            # Track Stream
            if track is not None:

                track_data = MapperManager.track_to_dict(
                    track,
                )

                WSBroadcaster.track(
                    track_data,
                )

            # Guidance Stream
            if guidance is not None:

                guidance_data = MapperManager.guidance_to_dict(
                    guidance,
                )

                WSBroadcaster.guidance(
                    guidance_data,
                )

            # Control Stream
            if control is not None:

                control_data = MapperManager.control_to_dict(
                    control,
                )

                WSBroadcaster.control(
                    control_data,
                )

        except Exception as e:

            self.get_logger().error(
                f"Pipeline Error: {e}"
            )

            import traceback

            traceback.print_exc()

    def destroy_node(self):

        MissionService.finish(
            self.db,
            self.mission_id,
        )

        self.db.close()

        super().destroy_node()
