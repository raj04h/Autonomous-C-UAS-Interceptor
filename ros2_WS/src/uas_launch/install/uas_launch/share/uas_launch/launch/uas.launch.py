from launch import LaunchDescription

from launch_ros.actions import Node


def generate_launch_description():

    return LaunchDescription(
        [
            Node(
                package="perception_node",
                executable="detector_pipeline",
                name="perception_node",
                output="screen",
            ),
            Node(
                package="tracking_node",
                executable="tracker_pipeline",
                name="tracking_node",
                output="screen",
            ),
            Node(
                package="estimation_node",
                executable="estimator_pipeline",
                name="estimation_node",
                output="screen",
            ),
            Node(
                package="guidance_node",
                executable="guidance_pipeline",
                name="guidance_node",
                output="screen",
            ),
            Node(
                package="control_node",
                executable="control_pipeline",
                name="control_node",
                output="screen",
            ),
        ]
    )
