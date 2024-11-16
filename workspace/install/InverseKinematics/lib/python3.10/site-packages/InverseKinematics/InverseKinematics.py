import rclpy
from rclpy.node import Node
from open_manipulator_msgs.srv import SetJointPosition
from open_manipulator_msgs.msg import KinematicsPose
import math

class InverseKinematics(Node):
    """Node for performing inverse kinematics and controlling the robot"""
    def __init__(self):
        super().__init__('inverse_kinematics')

        # Create a client to control the robot's joint positions
        self.joint_client = self.create_client(SetJointPosition, 'goal_joint_space_path')
        while not self.joint_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for joint control service...')

        # Subscriber to get the end-effector target pose
        self.subscription = self.create_subscription(
            KinematicsPose,
            'end_effector_target',
            self.end_effector_callback,
            10,
        )

        # Request message for joint control
        self.joint_request = SetJointPosition.Request()

    def end_effector_callback(self, msg):
        """Callback to handle the end-effector position and orientation"""
        # Extract position and quaternion from the message
        T04 = [
            [1, 0, 0, msg.pose.position.x],
            [0, 0, 1, msg.pose.position.y],
            [0, -1, 0, msg.pose.position.z],
            [0, 0, 0, 1]
        ]

        # Perform inverse kinematics to calculate joint angles
        joint_angles = self.calculate_inverse_kinematics(T04)
        
        # Send joint angles to the robot
        self.send_joint_request(joint_angles)

    def calculate_inverse_kinematics(self, T04):
        """Calculate the joint angles for a given end-effector pose"""
        # Define link lengths
        l1 = 0.096326
        l2 = 0.130231
        l3 = 0.124
        l4 = 0.1334
        theta0 = math.atan2(0.128, 0.024)

        # Extract end-effector position
        x = T04[0][3]
        y = T04[1][3]
        z = T04[2][3]

        # Calculate joint angles based on the provided inverse kinematics logic
        t1 = math.atan2(-T04[0][2], T04[1][2])
        pwx = x - l4 * T04[0][0]
        pwy = y - l4 * T04[1][0]
        pwr = math.sqrt(pwx**2 + pwy**2)
        pwz = z - l4 * T04[2][0]
        pwz2 = pwz - l1

        t3_1 = -(theta0 + math.acos((pwz2**2 + pwr**2 - l2**2 - l3**2) / (2 * l2 * l3)))
        t3_2 = -(theta0 - math.acos((pwz2**2 + pwr**2 - l2**2 - l3**2) / (2 * l2 * l3)))

        c2_1 = (l2 * pwx * math.cos(theta0) + l3 * pwx * math.cos(t3_1) - l1 * l2 * math.cos(t1) * math.sin(theta0) 
                + l1 * l3 * math.cos(t1) * math.sin(t3_1) + l2 * pwz * math.cos(t1) * math.sin(theta0)
                - l3 * pwz * math.cos(t1) * math.sin(t3_1)) / (math.cos(t1) * (l2**2 + 2 * math.cos(theta0 + t3_1) * l2 * l3 + l3**2))
        s2_1 = (l2 * pwx * math.sin(theta0) - l3 * pwx * math.sin(t3_1) + l1 * l2 * math.cos(theta0) * math.cos(t1)
                + l1 * l3 * math.cos(t1) * math.cos(t3_1) - l2 * pwz * math.cos(theta0) * math.cos(t1) 
                - l3 * pwz * math.cos(t1) * math.cos(t3_1)) / (math.cos(t1) * (l2**2 + 2 * math.cos(theta0 + t3_1) * l2 * l3 + l3**2))
        c2_2 = (l2 * pwx * math.cos(theta0) + l3 * pwx * math.cos(t3_2) - l1 * l2 * math.cos(t1) * math.sin(theta0)
                + l1 * l3 * math.cos(t1) * math.sin(t3_2) + l2 * pwz * math.cos(t1) * math.sin(theta0)
                - l3 * pwz * math.cos(t1) * math.sin(t3_2)) / (math.cos(t1) * (l2**2 + 2 * math.cos(theta0 + t3_2) * l2 * l3 + l3**2))
        s2_2 = (l2 * pwx * math.sin(theta0) - l3 * pwx * math.sin(t3_2) + l1 * l2 * math.cos(theta0) * math.cos(t1)
                + l1 * l3 * math.cos(t1) * math.cos(t3_2) - l2 * pwz * math.cos(theta0) * math.cos(t1)
                - l3 * pwz * math.cos(t1) * math.cos(t3_2)) / (math.cos(t1) * (l2**2 + 2 * math.cos(theta0 + t3_2) * l2 * l3 + l3**2))

        t2_1 = math.atan2(s2_1, c2_1)
        t2_2 = math.atan2(s2_2, c2_2)

        t4_1 = math.atan2(-T04[2][0], -T04[2][1]) - t2_1 - t3_1
        t4_2 = math.atan2(-T04[2][0], -T04[2][1]) - t2_2 - t3_2

        # Filter results based on joint limits
        solution_1_valid = self.validate_solution(t1, t2_1, t3_1, t4_1)
        solution_2_valid = self.validate_solution(t1, t2_2, t3_2, t4_2)

        # Choose a valid solution
        if solution_2_valid:
            return [t1, t2_2, t3_2, t4_2, 0.0]  # Gripper angle
        elif solution_1_valid:
            return [t1, t2_1, t3_1, t4_1, 0.0]
        else:
            self.get_logger().error("No valid joint solution found.")
            return [0.0] * 5  # Default values if no solution is found

    def validate_solution(self, t1, t2, t3, t4):
        """Validate joint limits for a solution"""
        j1_limits = (0, math.radians(360))
        j2_limits = (math.radians(-90), math.radians(90))
        j3_limits = (math.radians(-90), math.radians(90))
        j4_limits = (math.radians(-90), math.radians(90))

        return (j1_limits[0] <= t1 <= j1_limits[1] and
                j2_limits[0] <= t2 <= j2_limits[1] and
                j3_limits[0] <= t3 <= j3_limits[1] and
                j4_limits[0] <= t4 <= j4_limits[1])

    def send_joint_request(self, joint_angles):
        """Send joint angles to control the robot"""
        # Fill in the joint position request
        self.joint_request.planning_group = ''
        self.joint_request.joint_position.joint_name = ['joint1', 'joint2', 'joint3', 'joint4', 'gripper']
        self.joint_request.joint_position.position = [math.degrees(angle) for angle in joint_angles]
        self.joint_request.path_time = 5.0  # Duration for reaching the position

        # Call the service
        future = self.joint_client.call_async(self.joint_request)
        rclpy.spin_until_future_complete(self, future)
        
        if future.done():
            try:
                response = future.result()
                if response.is_planned:
                    self.get_logger().info("Successfully sent joint angles to the robot.")
                else:
                    self.get_logger().info("Failed to plan the joint motion.")
            except Exception as e:
                self.get_logger().error(f"Service call failed: {e}")

def main(args=None):
    """Main function to initialize the node"""
    rclpy.init(args=args)
    node = InverseKinematics()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
