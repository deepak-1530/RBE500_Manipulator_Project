// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from velocity_kinematics_interfaces:srv/EndEffectorJoint.idl
// generated code does not contain a copyright notice

#ifndef VELOCITY_KINEMATICS_INTERFACES__SRV__DETAIL__END_EFFECTOR_JOINT__STRUCT_H_
#define VELOCITY_KINEMATICS_INTERFACES__SRV__DETAIL__END_EFFECTOR_JOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/EndEffectorJoint in the package velocity_kinematics_interfaces.
typedef struct velocity_kinematics_interfaces__srv__EndEffectorJoint_Request
{
  float vx;
  float vy;
  float vz;
  float wx;
  float wy;
  float wz;
  float q1;
  float q2;
  float q3;
  float q4;
} velocity_kinematics_interfaces__srv__EndEffectorJoint_Request;

// Struct for a sequence of velocity_kinematics_interfaces__srv__EndEffectorJoint_Request.
typedef struct velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__Sequence
{
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/EndEffectorJoint in the package velocity_kinematics_interfaces.
typedef struct velocity_kinematics_interfaces__srv__EndEffectorJoint_Response
{
  float joint_vel1;
  float joint_vel2;
  float joint_vel3;
  float joint_vel4;
} velocity_kinematics_interfaces__srv__EndEffectorJoint_Response;

// Struct for a sequence of velocity_kinematics_interfaces__srv__EndEffectorJoint_Response.
typedef struct velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__Sequence
{
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VELOCITY_KINEMATICS_INTERFACES__SRV__DETAIL__END_EFFECTOR_JOINT__STRUCT_H_
