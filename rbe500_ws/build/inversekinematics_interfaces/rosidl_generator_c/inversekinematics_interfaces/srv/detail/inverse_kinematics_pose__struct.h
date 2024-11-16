// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from inversekinematics_interfaces:srv/InverseKinematicsPose.idl
// generated code does not contain a copyright notice

#ifndef INVERSEKINEMATICS_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS_POSE__STRUCT_H_
#define INVERSEKINEMATICS_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/InverseKinematicsPose in the package inversekinematics_interfaces.
typedef struct inversekinematics_interfaces__srv__InverseKinematicsPose_Request
{
  double x;
  double y;
  double z;
  double qx;
  double qy;
  double qz;
  double qw;
} inversekinematics_interfaces__srv__InverseKinematicsPose_Request;

// Struct for a sequence of inversekinematics_interfaces__srv__InverseKinematicsPose_Request.
typedef struct inversekinematics_interfaces__srv__InverseKinematicsPose_Request__Sequence
{
  inversekinematics_interfaces__srv__InverseKinematicsPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} inversekinematics_interfaces__srv__InverseKinematicsPose_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/InverseKinematicsPose in the package inversekinematics_interfaces.
typedef struct inversekinematics_interfaces__srv__InverseKinematicsPose_Response
{
  /// Response part (calculated joint positions)
  double joint1;
  double joint2;
  double joint3;
  double joint4;
  double gripper;
} inversekinematics_interfaces__srv__InverseKinematicsPose_Response;

// Struct for a sequence of inversekinematics_interfaces__srv__InverseKinematicsPose_Response.
typedef struct inversekinematics_interfaces__srv__InverseKinematicsPose_Response__Sequence
{
  inversekinematics_interfaces__srv__InverseKinematicsPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} inversekinematics_interfaces__srv__InverseKinematicsPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INVERSEKINEMATICS_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS_POSE__STRUCT_H_
