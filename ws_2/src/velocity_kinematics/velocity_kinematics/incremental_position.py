
import rclpy
from rclpy.node import Node
from open_manipulator_msgs.srv import SetJointPosition
from velocity_kinematics_interfaces.srv import EndEffectorJoint
from sensor_msgs.msg import JointState
import transforms3d as t3d
import numpy as np
import math
import time

class IncrementalPositionReference(Node):
    """Node for performing incremental position equation, returning incremental postion reference, and sending them to the robot"""

    def __init__(self,end_effector_vel):
        super().__init__('incremental_position_reference')
    
        # Create a client for converting end effector velocity to joint velocity of the robot
        self.jointvelocity_client = self.create_client(EndEffectorJoint, 'endeffector_to_joint') #getting from question 1        
        while not self.jointvelocity_client.wait_for_service(timeout_sec=1.0): 
            self.get_logger().info('Waiting for endeffector_to_joint service...')
        self.jointvelocity_client_req = EndEffectorJoint.Request()    
        
        self.subscription = self.create_subscription(
            JointState,
            'joint_state',
            self.joint_state_callback,
            10)
        self.joint_position = [0,0,0,0]
        self.subscription
        condition=True
        
        response=self.send_request(0,5,0,0,0,0)
        start=True
        tempjoint_angles = []
        
        count = 0
        while count < 50:
            if self.proximity_checker(tempjoint_angles) or start:
                start=False
                response=self.send_request(0,5,0,0,0)
                joint_angles=self.calc_qref(response)
                self.joint_move_request(joint_angles)
                tempjoint_angles=self.newjoint_angles
                count += 1

        self.joint_client = self.create_client(SetJointPosition, 'goal_joint_space_path')        
        while not self.joint_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for joint control service...')
    
    def proximity_checker(self, tempangles):
        for temp_angle, joint_position in zip(tempangles, self.joint_positions):
            if joint_position < temp_angle - 0.05 or joint_position > temp_angle + 0.05:
                return False
            return True

    def joint_state_callback(self, msg):
        self.joint_position = msg.position

    def calc_qref(self,response):
        joint1, joint2, joint3, joint4, gripper = self.joint_position
        _sampling_time = 2

        #for i in range(50):
        joint1 += response.joint1_vel* _sampling_time
        joint2 += response.joint2_vel * _sampling_time
        joint3 += response.joint3_vel * _sampling_time
        joint4 += response.joint4_vel * _sampling_time
        joint_angles=joint1,joint2,joint3,joint4
        return joint_angles

    def joint_move_request(self,joint_angles):
        
        _sampling_time=2
        request = SetJointPosition.Request()
        request.planning_group = ''
        request.joint_position.joint_name = ['joint1', 'joint2', 'joint3', 'joint4', 'gripper']
        request.joint_position.position = joint_angles
        request.path_time = _sampling_time  # Duration for reaching the position

        if not self.joint_client.wait_for_service(timeout_sec=2.0):
            self.get_logger().error("Joint control service not available!")
            return

        future = self.joint_client.call_async(request)

        print(future, type(future))
        
        # Define a timeout duration (e.g., 10 seconds)
        timeout_duration = 10.0
        start_time = time.time()
        
        # Check for future completion with a timeout
        while rclpy.ok() and not future.done():
            rclpy.spin_once(self, timeout_sec=0.1)
            if time.time() - start_time > timeout_duration:
                self.get_logger().warning("Joint request timed out without completion.")
                return

        # Check if the future was completed successfully
        if future.done():
            response = future.result()
            if response and response.is_planned:
                self.get_logger().info("Successfully sent joint angles to the robot.")
            else:
                self.get_logger().info("Failed to plan the joint motion.")
        else:
            self.get_logger().warning("Joint request did not complete.")

    ########inverse calculation



    def send_request(self, vx, vy, vz, wx, wy, wz):
        self.jointvelocity_client_req.vx = vx
        self.jointvelocity_client_req.vy = vy
        self.jointvelocity_client_req.vz = vz
        self.jointvelocity_client_req.wx = wx
        self.jointvelocity_client_req.wz = wz
        self.jointvelocity_client_req.wy = wy
        self.jointvelocity_client_req.q1 = self.joint_position[0]
        self.jointvelocity_client_req.q2 = self.joint_position[1]
        self.jointvelocity_client_req.q3 = self.joint_position[2]
        self.jointvelocity_client_req.q4 = self.joint_position[3]
                
      
        self.future = self.jointvelocity_client.call_async(self.jointvelocity_client_req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()
  
 

def main(args=None):
    rclpy.init(args=args)

    node = IncrementalPositionReference()
    response = node.send_request(0.0, 5.0, 0.0, 0.0, 0.0, 0.0)

    joint1, joint2, joint3, joint4, gripper = node.joint_position
    _sampling_time = 2

    for i in range(50):
        joint1 += response.joint1_vel * _sampling_time
        joint2 += response.joint2_vel * _sampling_time
        joint3 += response.joint3_vel * _sampling_time
        joint4 += response.joint4_vel * _sampling_time


    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()