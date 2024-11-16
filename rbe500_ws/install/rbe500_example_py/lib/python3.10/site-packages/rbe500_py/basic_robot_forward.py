
import rclpy
from rclpy.node import Node
from array import array
from open_manipulator_msgs.srv import SetJointPosition
from std_msgs.msg import Float32MultiArray  # Assuming "FWD" publishes a Float32MultiArray
import sys
import numpy as np
import math


class BasicRobotControl(Node):
    def __init__(self):
        super().__init__('basic_robot_control')
        self.client = self.create_client(SetJointPosition, 'goal_joint_space_path')

        # Create subscriber to "FWD" topic
        self.subscription = self.create_subscription(
            Float32MultiArray,
            'FWD',
            self.listener_callback,
            10
        )
      
        # Wait for service to be available
        while not self.client.wait_for_service(timeout_sec=1.0):
            if not rclpy.ok():
                self.get_logger().error('Interrupted while waiting for the service. Exiting.')
                sys.exit(0)
            self.get_logger().info('Service not available, waiting again...')
        
        self.future = None


    def calc_pose(self,msg):

        thetaList = msg
        print("hello")

        # DEFINE CONSTANTS
        # Define joint angles
        q1 = thetaList[0]
        q2 = thetaList[1]
        q3 = thetaList[2]
        q4 = thetaList[3]

        # Link lengths
        l1 = 0.096326
        l2 = 0.130231
        l3 = 0.124
        l4 = 0.1334

        # Define offset angle (used to make home position with elbow bent)
        theta0 = math.atan2(0.128,0.024)

        # DH parameters: Calculated according to the manipulator
        a = [0, l2, l3, l4]
        d = [l1, 0, 0, 0]
        theta = [q1, q2-theta0, q3+theta0, q4]
        alpha = [-math.pi / 2, 0, 0, 0]

        # CALCULATE FORWARD KINEMATICS
        # Function for calculating individual transformations
        def matrix_dh(a, d, theta, alpha):
            return np.array([[math.cos(theta), -math.sin(theta) * math.cos(alpha),  math.sin(theta) * math.sin(alpha), a * math.cos(theta)],
                    [math.sin(theta),  math.cos(theta) * math.cos(alpha), -math.cos(theta) * math.sin(alpha), a * math.sin(theta)],
                    [0,             math.sin(alpha),                 math.cos(alpha),                d],
                    [0,             0,                             0,                            1]])

        # Individual transformation matrices
        T01 = np.around(matrix_dh(a[0], d[0], theta[0], alpha[0]),6)
        T12 = np.around(matrix_dh(a[1], d[1], theta[1], alpha[1]),6)
        T23 = np.around(matrix_dh(a[2], d[2], theta[2], alpha[2]),6)
        T34 = np.around(matrix_dh(a[3], d[3], theta[3], alpha[3]),6)

        # End effector transformation matrix T04 = T01 * T12 * T23 * T34
        T02 = np.dot(T01, T12)
        T03 = np.dot(T02, T23)
        T04 = np.dot(T03, T34)

        # Print Result
        T04 = np.around(np.array(T04),3)
        print("T04:\n" + str(T04))





    def listener_callback(self, msg):
    # Convert msg.data to a double array for compatibility
     if len(msg.data) >= 5:  # Ensure we have enough values
        request = SetJointPosition.Request()
        request.planning_group = ''
        request.joint_position.joint_name = ['joint1', 'joint2', 'joint3', 'joint4', 'gripper']
        
        # Convert to an array of 'double' (type code 'd') and assign to position
        request.joint_position.position = array('d', msg.data[:5])  # Take the first five values
        request.path_time = 5.0
    
        # Send the request asynchronously
        self.future = self.client.call_async(request)
        self.calc_pose(request.joint_position.position)

    def check_response(self):
        if self.future and self.future.done():
            try:
                response = self.future.result()
                if response:
                    self.get_logger().info('Service call succeeded.')
            except Exception as e:
                self.get_logger().error('Service call failed %r' % (e,))
            self.future = None  # Reset the future for the next call


def main(args=None):
    rclpy.init(args=args)

    basic_robot_control = BasicRobotControl()

    while rclpy.ok():
        rclpy.spin_once(basic_robot_control)
        basic_robot_control.check_response()

    basic_robot_control.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
