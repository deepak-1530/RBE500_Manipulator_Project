// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from velocity_kinematics_interfaces:srv/EndEffectorJoint.idl
// generated code does not contain a copyright notice
#include "velocity_kinematics_interfaces/srv/detail/end_effector_joint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__init(velocity_kinematics_interfaces__srv__EndEffectorJoint_Request * msg)
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
velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__fini(velocity_kinematics_interfaces__srv__EndEffectorJoint_Request * msg)
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
velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__are_equal(const velocity_kinematics_interfaces__srv__EndEffectorJoint_Request * lhs, const velocity_kinematics_interfaces__srv__EndEffectorJoint_Request * rhs)
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
velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__copy(
  const velocity_kinematics_interfaces__srv__EndEffectorJoint_Request * input,
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Request * output)
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

velocity_kinematics_interfaces__srv__EndEffectorJoint_Request *
velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Request * msg = (velocity_kinematics_interfaces__srv__EndEffectorJoint_Request *)allocator.allocate(sizeof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Request));
  bool success = velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__destroy(velocity_kinematics_interfaces__srv__EndEffectorJoint_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__Sequence__init(velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Request * data = NULL;

  if (size) {
    data = (velocity_kinematics_interfaces__srv__EndEffectorJoint_Request *)allocator.zero_allocate(size, sizeof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__fini(&data[i - 1]);
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
velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__Sequence__fini(velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__Sequence * array)
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
      velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__fini(&array->data[i]);
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

velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__Sequence *
velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__Sequence * array = (velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__Sequence *)allocator.allocate(sizeof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__Sequence__destroy(velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__Sequence__are_equal(const velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__Sequence * lhs, const velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__Sequence__copy(
  const velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__Sequence * input,
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    velocity_kinematics_interfaces__srv__EndEffectorJoint_Request * data =
      (velocity_kinematics_interfaces__srv__EndEffectorJoint_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__init(velocity_kinematics_interfaces__srv__EndEffectorJoint_Response * msg)
{
  if (!msg) {
    return false;
  }
  // joint_vel1
  // joint_vel2
  // joint_vel3
  // joint_vel4
  return true;
}

void
velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__fini(velocity_kinematics_interfaces__srv__EndEffectorJoint_Response * msg)
{
  if (!msg) {
    return;
  }
  // joint_vel1
  // joint_vel2
  // joint_vel3
  // joint_vel4
}

bool
velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__are_equal(const velocity_kinematics_interfaces__srv__EndEffectorJoint_Response * lhs, const velocity_kinematics_interfaces__srv__EndEffectorJoint_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_vel1
  if (lhs->joint_vel1 != rhs->joint_vel1) {
    return false;
  }
  // joint_vel2
  if (lhs->joint_vel2 != rhs->joint_vel2) {
    return false;
  }
  // joint_vel3
  if (lhs->joint_vel3 != rhs->joint_vel3) {
    return false;
  }
  // joint_vel4
  if (lhs->joint_vel4 != rhs->joint_vel4) {
    return false;
  }
  return true;
}

bool
velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__copy(
  const velocity_kinematics_interfaces__srv__EndEffectorJoint_Response * input,
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_vel1
  output->joint_vel1 = input->joint_vel1;
  // joint_vel2
  output->joint_vel2 = input->joint_vel2;
  // joint_vel3
  output->joint_vel3 = input->joint_vel3;
  // joint_vel4
  output->joint_vel4 = input->joint_vel4;
  return true;
}

velocity_kinematics_interfaces__srv__EndEffectorJoint_Response *
velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Response * msg = (velocity_kinematics_interfaces__srv__EndEffectorJoint_Response *)allocator.allocate(sizeof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Response));
  bool success = velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__destroy(velocity_kinematics_interfaces__srv__EndEffectorJoint_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__Sequence__init(velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Response * data = NULL;

  if (size) {
    data = (velocity_kinematics_interfaces__srv__EndEffectorJoint_Response *)allocator.zero_allocate(size, sizeof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__fini(&data[i - 1]);
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
velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__Sequence__fini(velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__Sequence * array)
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
      velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__fini(&array->data[i]);
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

velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__Sequence *
velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__Sequence * array = (velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__Sequence *)allocator.allocate(sizeof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__Sequence__destroy(velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__Sequence__are_equal(const velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__Sequence * lhs, const velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__Sequence__copy(
  const velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__Sequence * input,
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    velocity_kinematics_interfaces__srv__EndEffectorJoint_Response * data =
      (velocity_kinematics_interfaces__srv__EndEffectorJoint_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
