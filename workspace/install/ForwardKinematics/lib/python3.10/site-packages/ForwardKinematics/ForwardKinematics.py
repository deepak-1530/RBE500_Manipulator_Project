import rclpy
from rclpy.node import Node
from open_manipulator_msgs.msg import KinematicsPose
from sensor_msgs.msg import JointState
from open_manipulator_msgs.srv import SetJointPosition
import numpy as np
import math
import transforms3d as t3d
import sys

class ForwardKinematics(Node):
    """Node for both moving the robot and calculating the forward kinematics"""
    def __init__(self):
        super().__init__('forward_kinematics')

        # Create subscriber to receive joint angle commands
        self.subscription = self.create_subscription(
            JointState,
            'joint_commands',
            self.listener_callback,
            10,
        )
        self.subscription  # prevent unused variable warning

        # Create publisher for the calculated end-effector position
        self.publisher_ = self.create_publisher(
            KinematicsPose,
            'forward_kinematics',
            10,
        )

        # Create client for the service to set joint positions
        self.client = self.create_client(SetJointPosition, 'goal_joint_space_path')
        while not self.client.wait_for_service(timeout_sec=1.0):
            if not rclpy.ok():
                self.get_logger().error('Interrupted while waiting for the service. Exiting.')
                sys.exit(0)
            self.get_logger().info('Service not available, waiting again...')

    def transformation_matrix(self, d, theta, a, alpha):
        """Calculate transformation matrix based on DH parameters"""
        T = np.array([
            [np.cos(theta), -np.sin(theta) * np.cos(alpha), np.sin(theta) * np.sin(alpha), a * np.cos(theta)],
            [np.sin(theta), np.cos(theta) * np.cos(alpha), -np.cos(theta) * np.sin(alpha), a * np.sin(theta)],
            [0, np.sin(alpha), np.cos(alpha), d],
            [0, 0, 0, 1],
        ])
        return T

    def listener_callback(self, msg):
        """Handle joint angle commands, move the robot, and publish forward kinematics"""
        joint_angles = list(msg.position)
        self.get_logger().info(f'Received joint command: {joint_angles}')
        
        # Move the robot based on received joint angles
        self.send_joint_position(joint_angles)

        # Calculate and publish forward kinematics based on the joint angles
        self.calculate_and_publish_fk(joint_angles)

    def send_joint_position(self, joint_angles):
        """Send joint positions to the robot using the SetJointPosition service"""
        request = SetJointPosition.Request()
        request.planning_group = ''
        request.joint_position.joint_name = ['joint1', 'joint2', 'joint3', 'joint4', 'gripper']
        
        # Ensure we have exactly 5 joint angles, padding with zeros if necessary
        if len(joint_angles) >= 5:
            request.joint_position.position = joint_angles[:5]
        else:
            request.joint_position.position = joint_angles + [0.0] * (5 - len(joint_angles))

        request.path_time = 5.0  # Duration to reach the target position
        self.future = self.client.call_async(request)

    def calculate_and_publish_fk(self, joint_angles):
        """Calculate the forward kinematics and publish the end-effector pose"""
        # Define DH parameters and calculate transformation matrices for each joint
        T1 = self.transformation_matrix(96.32, joint_angles[0], 0.0, np.deg2rad(-90))
        T2 = self.transformation_matrix(0.0, np.deg2rad(-79.38) + joint_angles[1], 130.23, 0.0)
        T3 = self.transformation_matrix(0.0, np.deg2rad(79.38) + joint_angles[2], 124.0, 0.0)
        T4 = self.transformation_matrix(0.0, joint_angles[3], 133.4, 0.0)
        
        # Compute the end-effector transformation matrix
        T = T1 @ T2 @ T3 @ T4
        position = T[:3, 3]  # Extract position
        orientation = T[:3, :3]  # Extract orientation matrix

        # Convert orientation matrix to quaternion
        w, x, y, z = t3d.quaternions.mat2quat(orientation)

        # Prepare the KinematicsPose message
        pose_msg = KinematicsPose()
        pose_msg.pose.position.x = position[0]
        pose_msg.pose.position.y = position[1]
        pose_msg.pose.position.z = position[2]
        pose_msg.pose.orientation.w = w
        pose_msg.pose.orientation.x = x
        pose_msg.pose.orientation.y = y
        pose_msg.pose.orientation.z = z

        # Publish the calculated pose
        self.publisher_.publish(pose_msg)
        self.get_logger().info(f'Published end-effector position: ({position[0]:.2f}, {position[1]:.2f}, {position[2]:.2f}), '
                               f'Orientation (quaternion): w={w:.2f}, x={x:.2f}, y={y:.2f}, z={z:.2f}')

def main():
    """Main function"""
    rclpy.init()
    node = ForwardKinematics()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
