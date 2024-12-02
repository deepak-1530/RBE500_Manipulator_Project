// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from velocity_kinematics_interfaces:msg/EndEffectorVelocity.idl
// generated code does not contain a copyright notice

#ifndef VELOCITY_KINEMATICS_INTERFACES__MSG__DETAIL__END_EFFECTOR_VELOCITY__FUNCTIONS_H_
#define VELOCITY_KINEMATICS_INTERFACES__MSG__DETAIL__END_EFFECTOR_VELOCITY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "velocity_kinematics_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "velocity_kinematics_interfaces/msg/detail/end_effector_velocity__struct.h"

/// Initialize msg/EndEffectorVelocity message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * velocity_kinematics_interfaces__msg__EndEffectorVelocity
 * )) before or use
 * velocity_kinematics_interfaces__msg__EndEffectorVelocity__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_velocity_kinematics_interfaces
bool
velocity_kinematics_interfaces__msg__EndEffectorVelocity__init(velocity_kinematics_interfaces__msg__EndEffectorVelocity * msg);

/// Finalize msg/EndEffectorVelocity message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_velocity_kinematics_interfaces
void
velocity_kinematics_interfaces__msg__EndEffectorVelocity__fini(velocity_kinematics_interfaces__msg__EndEffectorVelocity * msg);

/// Create msg/EndEffectorVelocity message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * velocity_kinematics_interfaces__msg__EndEffectorVelocity__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_velocity_kinematics_interfaces
velocity_kinematics_interfaces__msg__EndEffectorVelocity *
velocity_kinematics_interfaces__msg__EndEffectorVelocity__create();

/// Destroy msg/EndEffectorVelocity message.
/**
 * It calls
 * velocity_kinematics_interfaces__msg__EndEffectorVelocity__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_velocity_kinematics_interfaces
void
velocity_kinematics_interfaces__msg__EndEffectorVelocity__destroy(velocity_kinematics_interfaces__msg__EndEffectorVelocity * msg);

/// Check for msg/EndEffectorVelocity message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_velocity_kinematics_interfaces
bool
velocity_kinematics_interfaces__msg__EndEffectorVelocity__are_equal(const velocity_kinematics_interfaces__msg__EndEffectorVelocity * lhs, const velocity_kinematics_interfaces__msg__EndEffectorVelocity * rhs);

/// Copy a msg/EndEffectorVelocity message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_velocity_kinematics_interfaces
bool
velocity_kinematics_interfaces__msg__EndEffectorVelocity__copy(
  const velocity_kinematics_interfaces__msg__EndEffectorVelocity * input,
  velocity_kinematics_interfaces__msg__EndEffectorVelocity * output);

/// Initialize array of msg/EndEffectorVelocity messages.
/**
 * It allocates the memory for the number of elements and calls
 * velocity_kinematics_interfaces__msg__EndEffectorVelocity__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_velocity_kinematics_interfaces
bool
velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence__init(velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence * array, size_t size);

/// Finalize array of msg/EndEffectorVelocity messages.
/**
 * It calls
 * velocity_kinematics_interfaces__msg__EndEffectorVelocity__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_velocity_kinematics_interfaces
void
velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence__fini(velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence * array);

/// Create array of msg/EndEffectorVelocity messages.
/**
 * It allocates the memory for the array and calls
 * velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_velocity_kinematics_interfaces
velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence *
velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence__create(size_t size);

/// Destroy array of msg/EndEffectorVelocity messages.
/**
 * It calls
 * velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_velocity_kinematics_interfaces
void
velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence__destroy(velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence * array);

/// Check for msg/EndEffectorVelocity message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_velocity_kinematics_interfaces
bool
velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence__are_equal(const velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence * lhs, const velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence * rhs);

/// Copy an array of msg/EndEffectorVelocity messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_velocity_kinematics_interfaces
bool
velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence__copy(
  const velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence * input,
  velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VELOCITY_KINEMATICS_INTERFACES__MSG__DETAIL__END_EFFECTOR_VELOCITY__FUNCTIONS_H_
