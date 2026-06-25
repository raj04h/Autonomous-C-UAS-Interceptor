from interfaces.msg import TargetState


class EstimatorPublisherManager:

    def __init__(self,target_state_publisher):

        self.target_state_publisher = target_state_publisher

    def publish_target_state(self,target_state):

        msg = TargetState()

        msg.track_id = int(
            target_state["track_id"]
        )

        msg.x = float(
            target_state["x"]
        )

        msg.y = float(
            target_state["y"]
        )

        msg.vx = float(      
            target_state["vx"]
        )

        msg.vy = float(
            target_state["vy"]
        )

        msg.ax = float(
            target_state["ax"]
        )

        msg.ay = float(
            target_state["ay"]
        )

        msg.pred_x = float(
            target_state["predicted_x"]
        )

        msg.pred_y = float(
            target_state["predicted_y"]
        )

        msg.valid = True

        self.target_state_publisher.publish(
            msg
        )