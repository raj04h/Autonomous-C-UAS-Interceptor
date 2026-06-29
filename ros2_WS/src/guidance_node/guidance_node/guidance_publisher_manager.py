from interfaces.msg import GuidanceCommand

class GuidancePublisherManager:
    def __init__(self, guidance_publisher):
        self.guidance_publisher = guidance_publisher

    def publish_guidance_command(self, guidance_result):
        message= GuidanceCommand()

        message.track_id= guidance_result["track_id"]
        message.error_x= guidance_result["error_x"]
        message.error_y= guidance_result["error_y"]

        message.yaw_command= guidance_result["yaw_command"]
        message.pitch_command= guidance_result["pitch_command"]
        message.valid = guidance_result["valid"]
        message.target_locked = guidance_result["target_locked"]

        self.guidance_publisher.publish(message)
