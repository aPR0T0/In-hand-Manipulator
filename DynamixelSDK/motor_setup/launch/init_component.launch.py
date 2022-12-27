import launch
import os
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    """Generate launch description with multiple components."""

    config = os.path.join(
        get_package_share_directory('motor_setup'),
        'config',
        'params.yaml'
        )

    container = ComposableNodeContainer(
            name='my_container',
            namespace='',
            package='rclcpp_components',
            executable='component_container',
            composable_node_descriptions=[
                ComposableNode(
                    package='motor_setup',
                    plugin='motor_setup::SetupDynamixel',
                    name='init_component'),
            ],
            parameters = [config],
            output='screen'
    )

    return launch.LaunchDescription([container])