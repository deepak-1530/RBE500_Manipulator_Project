// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from velocity_kinematics_interfaces:msg/EndEffectorVelocity.idl
// generated code does not contain a copyright notice

#ifndef VELOCITY_KINEMATICS_INTERFACES__MSG__DETAIL__END_EFFECTOR_VELOCITY__STRUCT_H_
#define VELOCITY_KINEMATICS_INTERFACES__MSG__DETAIL__END_EFFECTOR_VELOCITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EndEffectorVelocity in the package velocity_kinematics_interfaces.
typedef struct velocity_kinematics_interfaces__msg__EndEffectorVelocity
{
  float vx;
  float vy;
  float vz;
  float wx;
  float wy;
  float wz;
} velocity_kinematics_interfaces__msg__EndEffectorVelocity;

// Struct for a sequence of velocity_kinematics_interfaces__msg__EndEffectorVelocity.
typedef struct velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence
{
  velocity_kinematics_interfaces__msg__EndEffectorVelocity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VELOCITY_KINEMATICS_INTERFACES__MSG__DETAIL__END_EFFECTOR_VELOCITY__STRUCT_H_
