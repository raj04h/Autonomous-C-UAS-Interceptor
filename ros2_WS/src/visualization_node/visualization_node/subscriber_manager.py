import rclpy

from rclpy.node import Node

from rclpy.qos import (
    QoSProfile,
    ReliabilityPolicy,
    HistoryPolicy,
)

from interfaces.msg import Detection
from interfaces.msg import Track
from interfaces.msg import TargetState
from interfaces.msg import GuidanceCommand
from interfaces.msg import ControlCommand

from sensor_msgs.msg import Image
from cv_bridge import CvBridge

class SubscriberManager(Node):

    def __init__(self):

        super().__init__("visualization_subscriber")

        qos = QoSProfile(
            reliability=ReliabilityPolicy.RELIABLE,
            history=HistoryPolicy.KEEP_LAST,
            depth=10,
        )

        self.latest_detection = None
        self.latest_track = None
        self.latest_target_state = None
        self.latest_guidance = None
        self.latest_control = None

        self.bridge = CvBridge()

        self.latest_frame = None

        # Visualization Runtime
        self.fps = 0.0

        # Frame Reading
        self.create_subscription(
            Image,
            "/camera/frame",
            self.frame_callback,
            qos,
        )

        # Detection
        self.create_subscription(
            Detection,
            "/detections",
            self.detection_callback,
            qos,
        )

        # Tracking
        self.create_subscription(
            Track,
            "/tracks",
            self.track_callback,
            qos,
        )

        # State Estimation
        self.create_subscription(
            TargetState,
            "/target_state",
            self.target_state_callback,
            qos,
        )

        # Guidance
        self.create_subscription(
            GuidanceCommand,
            "/guidance_command",
            self.guidance_callback,
            qos,
        )

        # Control Cmd
        self.create_subscription(
            ControlCommand,
            "/control_command",
            self.control_callback,
            qos,
        )

    # Nodes Callback
    def frame_callback(self, msg):

        self.latest_frame = self.bridge.imgmsg_to_cv2(msg,desired_encoding="bgr8")

    def detection_callback(self,msg):

        # Update Perception FPS
        self.fps = msg.fps

        # No valid detection in current frame
        if not msg.valid:

            self.latest_detection = None

            return

        # Store latest valid detection
        self.latest_detection = msg

    def track_callback(
        self,
        msg,
    ):

        if not msg.valid:
            return

        self.latest_track = msg

    def target_state_callback(
        self,
        msg,
    ):

        if not msg.valid:
            return

        self.latest_target_state = msg

    def guidance_callback(
        self,
        msg,
    ):

        if not msg.valid:
            return

        self.latest_guidance = msg

    def control_callback(
        self,
        msg,
    ):

        if not msg.valid:
            return

        self.latest_control = msg