import time

import rclpy

from visualization_node.viewer_service import ViewerService
from visualization_node.overlay_service import OverlayService
from visualization_node.subscriber_manager import SubscriberManager


def main():

    rclpy.init()

    # -----------------------------
    # Create Objects
    # -----------------------------

    viewer = ViewerService()

    overlay = OverlayService()

    subscriber = SubscriberManager()

    try:

        while rclpy.ok():

            rclpy.spin_once(
                subscriber,
                timeout_sec=0.001,
            )

            frame = subscriber.latest_frame

            if frame is None:
                continue

            frame = frame.copy()

            # Draw overlay
            frame = overlay.draw(
                frame,
                subscriber,
            )

            # Show frame
            viewer.render(frame)

            if viewer.should_exit():
                break

    finally:

        subscriber.destroy_node()

        viewer.cleanup()

        rclpy.shutdown()


if __name__ == "__main__":
    main()
