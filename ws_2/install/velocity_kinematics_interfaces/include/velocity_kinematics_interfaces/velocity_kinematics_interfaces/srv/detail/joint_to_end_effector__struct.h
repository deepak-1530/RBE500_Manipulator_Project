// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from velocity_kinematics_interfaces:srv/JointToEndEffector.idl
// generated code does not contain a copyright notice

#ifndef VELOCITY_KINEMATICS_INTERFACES__SRV__DETAIL__JOINT_TO_END_EFFECTOR__STRUCT_H_
#define VELOCITY_KINEMATICS_INTERFACES__SRV__DETAIL__JOINT_TO_END_EFFECTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/JointToEndEffector in the package velocity_kinematics_interfaces.
typedef struct velocity_kinematics_interfaces__srv__JointToEndEffector_Request
{
  float joint_vel1;
  float joint_vel2;
  float joint_vel3;
  float joint_vel4;
} velocity_kinematics_interfaces__srv__JointToEndEffector_Request;

// Struct for a sequence of velocity_kinematics_interfaces__srv__JointToEndEffector_Request.
typedef struct velocity_kinematics_interfaces__srv__JointToEndEffector_Request__Sequence
{
  velocity_kinematics_interfaces__srv__JointToEndEffector_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} velocity_kinematics_interfaces__srv__JointToEndEffector_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/JointToEndEffector in the package velocity_kinematics_interfaces.
typedef struct velocity_kinematics_interfaces__srv__JointToEndEffector_Response
{
  float vx;
  float vy;
  float vz;
  float wx;
  float wy;
  float wz;
} velocity_kinematics_interfaces__srv__JointToEndEffector_Response;

// Struct for a sequence of velocity_kinematics_interfaces__srv__JointToEndEffector_Response.
typedef struct velocity_kinematics_interfaces__srv__JointToEndEffector_Response__Sequence
{
  velocity_kinematics_interfaces__srv__JointToEndEffector_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} velocity_kinematics_interfaces__srv__JointToEndEffector_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VELOCITY_KINEMATICS_INTERFACES__SRV__DETAIL__JOINT_TO_END_EFFECTOR__STRUCT_H_