# Written by Brighton Lee 12/1/24



# OVERALL TODO LIST, FIND SPECIFIC TODO's IN CODE
###################################################################################################
# TODO 4 Test on hardware
#
# TODO 5 Update question 1 code to take joint positions
###################################################################################################







import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from open_manipulator_msgs.srv import SetJointPosition
from velocity_kinematics_interfaces.srv import EndEffectorJoint
from velocity_kinematics_interfaces.msg import EndEffectorVelocity
import numpy as np
import math
import time

##################################################################################################
# TODO 4.1 Figure out terminal commands required to use code, then put them here
##################################################################################################
# Example code to run cd into ws_2 folder, build, source, then:     ros2 run velocity_kinematics velocity_controller
# Example terminal client call:     ros2 topic pub /endeffector_velocity velocity_kinematics_interfaces/msg/EndEffectorJoint "{vx: 0.2, vy: 0.1, vz:0.3, wx: 0.05, wy:0.02, wz: 0.01}" --once



# VELOCITY CONTROLLER (MAIN LOOP)
def velocity_controller(vx, vy, vz, wx, wy, wz, node):

    # DEFINE CONSTANTS
    end_effector_velocity = [vx, vy, vz, wx, wy, wz]  # In form [vx, vy, vz, wx, wy, wz]
    path_time = 100  # How long each movement is in milliseconds
    runtime = 10  # How many loops the program makes

    # MAIN LOOP
    for i in range(runtime):
        # Gets the current robot joint positions
        q1, q2, q3, q4, gripper_pos = node.get_joint_positions()
        thetaList = [q1, q2, q3, q4]

        # Makes a client call to get required joint velocities
        joint_velocities = node.request_joint_velocities(end_effector_velocity, thetaList)
        dq1 = joint_velocities[0]
        dq2 = joint_velocities[1]
        dq3 = joint_velocities[2]
        dq4 = joint_velocities[3]
        
        # Calculate new position for each joint
        q1_new = q1 + (dq1 * path_time)
        q2_new = q2 + (dq2 * path_time)
        q3_new = q3 + (dq3 * path_time)
        q4_new = q4 + (dq4 * path_time)
        
        # Move robot
        new_joint_positions = [q1_new, q2_new, q3_new, q4_new, gripper_pos]
        ROSNode.move_robot(new_joint_positions, path_time)

        ###################################################
        # TODO: 4.2 Determine if we actually need to wait or if move is blocking
        ###################################################
        # # Wait
        # time.sleep(path_time/1000)





# NODE FOR HANDLING ROS
class ROSNode(Node):
    # INITILAIZE
    def __init__(self):
        super().__init__('incremental_position_reference')

        # Create a client for controlling the robot
        self.moverobot_client = self.create_client(SetJointPosition, 'goal_joint_space_path')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = SetJointPosition.Request()

        # Create a client for converting end effector velocity to joint velocity of the robot
        self.jointvelocity_client = self.create_client(EndEffectorJoint, 'endeffector_to_joint')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = EndEffectorJoint.Request()

        # Create a subscriber that starts this program when it recieves end effector velocity
        self.subscription = self.create_subscription(
            EndEffectorVelocity,
            'endeffector_velocity',
            self.end_effector_velocity_callback,
            10)
        self.subscription
        
        # Subscriber that listens to the current position of the robot
        self.subscription = self.create_subscription(
            JointState,
            'joint_state',
            self.joint_state_callback,
            10)
        self.subscription


        # DEFINE VARIABLES
        self.joint_position = [] # Stores live reading of joint positions

        
    # START THE PROGRAM
    def end_effector_velocity_callback(self, msg):
        # Extracts desired end effector velocity
        vx = msg.vx
        vy = msg.vy
        vz = msg.vz
        wx = msg.wx
        wy = msg.wy
        wz = msg.wz

        # Starts the velocity controller
        self.velocity_controller.run(vx, vy, vz, wx, wy, wz, self)


    # READ CURRENT JOINT POSITIONS
    def joint_state_callback(self, msg):
        self.joint_positions = msg.position


    ######################################################################
    # TODO 5.1 Update as necessary
    ######################################################################

    # CLIENT REQUEST FOR JOINT VELOCITIES
    def request_joint_velocities(self, end_effector_velocity, thetaList):
        # Construct request of end effector velocity componenets
        self.jointvelocity_client_req.vx = end_effector_velocity[0]
        self.jointvelocity_client_req.vy = end_effector_velocity[1]
        self.jointvelocity_client_req.vz = end_effector_velocity[2]
        self.jointvelocity_client_req.wx = end_effector_velocity[3]
        self.jointvelocity_client_req.wy = end_effector_velocity[4]
        self.jointvelocity_client_req.wz = end_effector_velocity[5]
        self.jointvelocity_client_req.q1 = thetaList[0]
        self.jointvelocity_client_req.q1 = thetaList[1]
        self.jointvelocity_client_req.q1 = thetaList[2]
        self.jointvelocity_client_req.q1 = thetaList[3]

        # Send request and return joint velocities
        self.future = self.jointvelocity_client.call_async(self.jointvelocity_client_req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()
    

    def move_robot(self, joint_positions, path_time):
        request = SetJointPosition.Request()
        request.planning_group = ''
        request.joint_position.joint_name = ['joint1', 'joint2', 'joint3', 'joint4', 'gripper']
        request.joint_position.position = joint_positions
        request.path_time = path_time 

        # Send request to move robot
        self.future = self.moverobot_client.call_async(self.request)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()
        
    
    # RETURNS STORED JOINT POSITIONS
    def get_joint_positions(self):
        return self.joint_position
        
  
 



# MAIN PROGRAM
def main(args=None):
    rclpy.init(args=args)

    # Initialize ROS Node
    node = ROSNode()

    # Run
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()