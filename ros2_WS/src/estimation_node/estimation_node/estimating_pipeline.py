import rclpy

from rclpy.node import Node

from interfaces.msg import (
    Track,
    TargetState
)

from rclpy.qos import (
    QoSProfile,
    ReliabilityPolicy,
    HistoryPolicy
)

from estimation_node.config_estimation import (
    EstimationConfig
)

from estimation_node.estimator_subscriber_manager import (
    EstimatorSubscriberManager
)

from estimation_node.estimator_publisher_manager import (
    EstimatorPublisherManager
)

from estimation_node.kalman_estimator import (
    KalmanEstimator
)

from estimation_node.acceleration_estimator import (
    AccelerationEstimator
)

from estimation_node.trajectory_estimator import (
    TrajectoryEstimator
)

from estimation_node.estimating_benchmark import (
    EstimatingBenchmark
)


class EstimatingPipeline(Node):

    def __init__(self):

        super().__init__(
            "estimating_pipeline"
        )

        qos = QoSProfile(
            reliability=ReliabilityPolicy.RELIABLE,
            history=HistoryPolicy.KEEP_LAST,
            depth=10
        )

        # --------------------------------------------------
        # Managers
        # --------------------------------------------------

        self.subscriber_manager = (
            EstimatorSubscriberManager()
        )

        target_state_publisher = (
            self.create_publisher(
                TargetState,
                "/target_state",
                qos
            )
        )

        self.publisher_manager = (
            EstimatorPublisherManager(
                target_state_publisher
            )
        )

        # --------------------------------------------------
        # Estimation Modules
        # --------------------------------------------------

        # One estimator per track_id
        self.kalman_estimators = {}

        # One acceleration estimator per track_id
        self.acceleration_estimators = {}

        self.trajectory_estimator = (
            TrajectoryEstimator()
        )

        # --------------------------------------------------
        # Benchmark
        # --------------------------------------------------

        self.benchmark = (
            EstimatingBenchmark()
        )

        # --------------------------------------------------
        # Subscriber
        # --------------------------------------------------

        self.create_subscription(
            Track,
            "/tracks",
            self.subscriber_manager.track_callback,
            qos
        )

        # --------------------------------------------------
        # Main Timer
        # --------------------------------------------------

        self.create_timer(
            EstimationConfig.DT,
            self.run_estimation
        )

    # ======================================================
    # Main Estimation Pipeline
    # ======================================================

    def run_estimation(self):

        self.benchmark.start_frame()

        track = (
            self.subscriber_manager.get_track()
        )

        if track is None:
            return

        track_id = track.track_id

        if track_id not in self.kalman_estimators:
            self.kalman_estimators[track_id] = KalmanEstimator()

        if track_id not in self.acceleration_estimators:
            self.acceleration_estimators[track_id] = (
                AccelerationEstimator()
            )

        kalman_estimator = (
            self.kalman_estimators[track_id]
        )

        acceleration_estimator = (
            self.acceleration_estimators[track_id]
        )

        # ----------------------------------------------
        # Prediction
        # ----------------------------------------------

        kalman_estimator.predict()

        # ----------------------------------------------
        # Measurement Update
        # ----------------------------------------------

        kalman_estimator.update(
            track.center_x,
            track.center_y
        )

        # ----------------------------------------------
        # Estimated State
        # ----------------------------------------------

        state = kalman_estimator.get_state()

        # ----------------------------------------------
        # Acceleration
        # ----------------------------------------------

        acceleration = acceleration_estimator.estimate(
            state["vx"], 
            state["vy"], 
            EstimationConfig.DT
        )

        # ----------------------------------------------
        # Future Prediction
        # ----------------------------------------------

        prediction = (
            self.trajectory_estimator.predict(
                state["x"],
                state["y"],
                state["vx"],
                state["vy"],
                acceleration["ax"],
                acceleration["ay"]
            )
        )

        # ----------------------------------------------
        # Target State
        # ----------------------------------------------

        target_state = {

            "track_id": track.track_id,

            "x": state["x"],
            "y": state["y"],

            "vx": state["vx"],
            "vy": state["vy"],

            "ax": acceleration["ax"],
            "ay": acceleration["ay"],

            "predicted_x": prediction["predicted_x"],
            "predicted_y": prediction["predicted_y"]
        }

        # ----------------------------------------------
        # Publish
        # ----------------------------------------------

        self.publisher_manager.publish_target_state(
            target_state
        )

        self.benchmark.end_frame()

        # ----------------------------------------------
        # Benchmark
        # ----------------------------------------------

        if self.benchmark.frame_count % 30 == 0:

            stats = (
                self.benchmark.get_statistics()
            )

            self.get_logger().info(

                f"[BENCHMARK] "

                f"FPS={stats['fps']:.2f} | "

                f"AVG={stats['avg_ms']:.2f}ms | "

                f"MIN={stats['min_ms']:.2f}ms | "

                f"MAX={stats['max_ms']:.2f}ms"

            )

            self.get_logger().info(

                f"Track={track.track_id} | "

                f"Raw=({track.center_x}, {track.center_y}) | "

                f"Est=({state['x']:.1f}, {state['y']:.1f}) | "

                f"Vel=({state['vx']:.2f}, {state['vy']:.2f}) | "

                f"Acc=({acceleration['ax']:.2f}, {acceleration['ay']:.2f}) | "

                f"Pred=({prediction['predicted_x']:.1f}, {prediction['predicted_y']:.1f})"

            )


def main():

    rclpy.init()

    node = (
        EstimatingPipeline()
    )

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == "__main__":

    main()
