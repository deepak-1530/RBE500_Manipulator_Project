// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from velocity_kinematics_interfaces:msg/EndEffectorVelocity.idl
// generated code does not contain a copyright notice
#include "velocity_kinematics_interfaces/msg/detail/end_effector_velocity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
velocity_kinematics_interfaces__msg__EndEffectorVelocity__init(velocity_kinematics_interfaces__msg__EndEffectorVelocity * msg)
{
  if (!msg) {
    return false;
  }
  // vx
  // vy
  // vz
  // wx
  // wy
  // wz
  return true;
}

void
velocity_kinematics_interfaces__msg__EndEffectorVelocity__fini(velocity_kinematics_interfaces__msg__EndEffectorVelocity * msg)
{
  if (!msg) {
    return;
  }
  // vx
  // vy
  // vz
  // wx
  // wy
  // wz
}

bool
velocity_kinematics_interfaces__msg__EndEffectorVelocity__are_equal(const velocity_kinematics_interfaces__msg__EndEffectorVelocity * lhs, const velocity_kinematics_interfaces__msg__EndEffectorVelocity * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vx
  if (lhs->vx != rhs->vx) {
    return false;
  }
  // vy
  if (lhs->vy != rhs->vy) {
    return false;
  }
  // vz
  if (lhs->vz != rhs->vz) {
    return false;
  }
  // wx
  if (lhs->wx != rhs->wx) {
    return false;
  }
  // wy
  if (lhs->wy != rhs->wy) {
    return false;
  }
  // wz
  if (lhs->wz != rhs->wz) {
    return false;
  }
  return true;
}

bool
velocity_kinematics_interfaces__msg__EndEffectorVelocity__copy(
  const velocity_kinematics_interfaces__msg__EndEffectorVelocity * input,
  velocity_kinematics_interfaces__msg__EndEffectorVelocity * output)
{
  if (!input || !output) {
    return false;
  }
  // vx
  output->vx = input->vx;
  // vy
  output->vy = input->vy;
  // vz
  output->vz = input->vz;
  // wx
  output->wx = input->wx;
  // wy
  output->wy = input->wy;
  // wz
  output->wz = input->wz;
  return true;
}

velocity_kinematics_interfaces__msg__EndEffectorVelocity *
velocity_kinematics_interfaces__msg__EndEffectorVelocity__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  velocity_kinematics_interfaces__msg__EndEffectorVelocity * msg = (velocity_kinematics_interfaces__msg__EndEffectorVelocity *)allocator.allocate(sizeof(velocity_kinematics_interfaces__msg__EndEffectorVelocity), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(velocity_kinematics_interfaces__msg__EndEffectorVelocity));
  bool success = velocity_kinematics_interfaces__msg__EndEffectorVelocity__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
velocity_kinematics_interfaces__msg__EndEffectorVelocity__destroy(velocity_kinematics_interfaces__msg__EndEffectorVelocity * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    velocity_kinematics_interfaces__msg__EndEffectorVelocity__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence__init(velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  velocity_kinematics_interfaces__msg__EndEffectorVelocity * data = NULL;

  if (size) {
    data = (velocity_kinematics_interfaces__msg__EndEffectorVelocity *)allocator.zero_allocate(size, sizeof(velocity_kinematics_interfaces__msg__EndEffectorVelocity), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = velocity_kinematics_interfaces__msg__EndEffectorVelocity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        velocity_kinematics_interfaces__msg__EndEffectorVelocity__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence__fini(velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      velocity_kinematics_interfaces__msg__EndEffectorVelocity__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence *
velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence * array = (velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence *)allocator.allocate(sizeof(velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence__destroy(velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence__are_equal(const velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence * lhs, const velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!velocity_kinematics_interfaces__msg__EndEffectorVelocity__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence__copy(
  const velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence * input,
  velocity_kinematics_interfaces__msg__EndEffectorVelocity__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(velocity_kinematics_interfaces__msg__EndEffectorVelocity);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    velocity_kinematics_interfaces__msg__EndEffectorVelocity * data =
      (velocity_kinematics_interfaces__msg__EndEffectorVelocity *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!velocity_kinematics_interfaces__msg__EndEffectorVelocity__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          velocity_kinematics_interfaces__msg__EndEffectorVelocity__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!velocity_kinematics_interfaces__msg__EndEffectorVelocity__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
