
import rclpy
from rclpy.node import Node
import numpy as np
from velocity_kinematics_interfaces.srv import EndEffectorJoint
import math


class EndEffectorToJoint(Node):
    def __init__(self):
        super().__init__('endeffector_to_joint')
        self.service = self.create_service(
            EndEffectorJoint,
            'endeffector_to_joint',
            self.endeffector_to_joint_callback
        )
        self.measured_joint_values = [30,0,30,45]

    def calculate_jacobian(self, thetaList):
        l1, l2, l3, l4 = 0.096326, 0.130231, 0.124, 0.1334
        theta0 = math.atan2(0.128, 0.024)
        theta1, theta2, theta3, theta4 = thetaList

        Jv11 = -math.sin(theta1) * (l3 * math.cos(theta2 + theta3) + l4 * math.cos(theta2 + theta3 + theta4) + l2 * math.cos(theta0 - theta2))
        Jv21 = math.cos(theta1) * (l3 * math.cos(theta2 + theta3) + l4 * math.cos(theta2 + theta3 + theta4) + l2 * math.cos(theta0 - theta2))
        Jv31 = 0
        Jv12 = -math.cos(theta1) * (l3 * math.sin(theta2 + theta3) - l2 * math.sin(theta0 - theta2) + l4 * math.sin(theta2 + theta3 + theta4))
        Jv22 = -math.sin(theta1) * (l3 * math.sin(theta2 + theta3) - l2 * math.sin(theta0 - theta2) + l4 * math.sin(theta2 + theta3 + theta4))
        Jv32 = -l3 * math.cos(theta2 + theta3) - l2 * math.cos(theta0 - theta2) - l4 * math.cos(theta2 + theta3 + theta4)
        Jv13 = -math.cos(theta1) * (l3 * math.sin(theta2 + theta3) + l4 * math.sin(theta2 + theta3 + theta4))
        Jv23 = -math.sin(theta1) * (l3 * math.sin(theta2 + theta3) + l4 * math.sin(theta2 + theta3 + theta4))
        Jv33 = -l3 * math.cos(theta2 + theta3) - l4 * math.cos(theta2 + theta3 + theta4)
        Jv14 = -l4 * math.sin(theta2 + theta3 + theta4) * math.cos(theta1)
        Jv24 = -l4 * math.sin(theta2 + theta3 + theta4) * math.sin(theta1)
        Jv34 = -l4 * math.cos(theta2 + theta3 + theta4)

        Jw11, Jw21, Jw31 = 0, 0, 1
        Jw12, Jw22, Jw32 = -math.sin(theta1), math.cos(theta1), 0
        Jw13, Jw23, Jw33 = Jw12, Jw22, Jw32
        Jw14, Jw24, Jw34 = Jw12, Jw22, Jw32

        return np.array([
            [Jv11, Jv12, Jv13, Jv14],
            [Jv21, Jv22, Jv23, Jv24],
            [Jv31, Jv32, Jv33, Jv34],
            [Jw11, Jw12, Jw13, Jw14],
            [Jw21, Jw22, Jw23, Jw24],
            [Jw31, Jw32, Jw33, Jw34],
        ])

    def endeffector_to_joint_callback(self, request, response):
        endeffector_vel = np.array([[request.vx], [request.vy], [request.vz], [request.wx], [request.wy], [request.wz]])
        thetaList = self.measured_joint_values
        Jacobian_mat = self.calculate_jacobian(thetaList)
        joint_vel = np.linalg.pinv(Jacobian_mat) @ endeffector_vel
        response.joint_vel1, response.joint_vel2, response.joint_vel3, response.joint_vel4 = joint_vel.flatten()
        return response


def main(args=None):
    rclpy.init(args=args)
    joint_velocity = EndEffectorToJoint()
    rclpy.spin(joint_velocity)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
