// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from inversekinematics_interfaces:srv/InverseKinematicsPose.idl
// generated code does not contain a copyright notice
#include "inversekinematics_interfaces/srv/detail/inverse_kinematics_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
inversekinematics_interfaces__srv__InverseKinematicsPose_Request__init(inversekinematics_interfaces__srv__InverseKinematicsPose_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // qx
  // qy
  // qz
  // qw
  return true;
}

void
inversekinematics_interfaces__srv__InverseKinematicsPose_Request__fini(inversekinematics_interfaces__srv__InverseKinematicsPose_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // qx
  // qy
  // qz
  // qw
}

bool
inversekinematics_interfaces__srv__InverseKinematicsPose_Request__are_equal(const inversekinematics_interfaces__srv__InverseKinematicsPose_Request * lhs, const inversekinematics_interfaces__srv__InverseKinematicsPose_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // qx
  if (lhs->qx != rhs->qx) {
    return false;
  }
  // qy
  if (lhs->qy != rhs->qy) {
    return false;
  }
  // qz
  if (lhs->qz != rhs->qz) {
    return false;
  }
  // qw
  if (lhs->qw != rhs->qw) {
    return false;
  }
  return true;
}

bool
inversekinematics_interfaces__srv__InverseKinematicsPose_Request__copy(
  const inversekinematics_interfaces__srv__InverseKinematicsPose_Request * input,
  inversekinematics_interfaces__srv__InverseKinematicsPose_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // qx
  output->qx = input->qx;
  // qy
  output->qy = input->qy;
  // qz
  output->qz = input->qz;
  // qw
  output->qw = input->qw;
  return true;
}

inversekinematics_interfaces__srv__InverseKinematicsPose_Request *
inversekinematics_interfaces__srv__InverseKinematicsPose_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  inversekinematics_interfaces__srv__InverseKinematicsPose_Request * msg = (inversekinematics_interfaces__srv__InverseKinematicsPose_Request *)allocator.allocate(sizeof(inversekinematics_interfaces__srv__InverseKinematicsPose_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(inversekinematics_interfaces__srv__InverseKinematicsPose_Request));
  bool success = inversekinematics_interfaces__srv__InverseKinematicsPose_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
inversekinematics_interfaces__srv__InverseKinematicsPose_Request__destroy(inversekinematics_interfaces__srv__InverseKinematicsPose_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    inversekinematics_interfaces__srv__InverseKinematicsPose_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
inversekinematics_interfaces__srv__InverseKinematicsPose_Request__Sequence__init(inversekinematics_interfaces__srv__InverseKinematicsPose_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  inversekinematics_interfaces__srv__InverseKinematicsPose_Request * data = NULL;

  if (size) {
    data = (inversekinematics_interfaces__srv__InverseKinematicsPose_Request *)allocator.zero_allocate(size, sizeof(inversekinematics_interfaces__srv__InverseKinematicsPose_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = inversekinematics_interfaces__srv__InverseKinematicsPose_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        inversekinematics_interfaces__srv__InverseKinematicsPose_Request__fini(&data[i - 1]);
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
inversekinematics_interfaces__srv__InverseKinematicsPose_Request__Sequence__fini(inversekinematics_interfaces__srv__InverseKinematicsPose_Request__Sequence * array)
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
      inversekinematics_interfaces__srv__InverseKinematicsPose_Request__fini(&array->data[i]);
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

inversekinematics_interfaces__srv__InverseKinematicsPose_Request__Sequence *
inversekinematics_interfaces__srv__InverseKinematicsPose_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  inversekinematics_interfaces__srv__InverseKinematicsPose_Request__Sequence * array = (inversekinematics_interfaces__srv__InverseKinematicsPose_Request__Sequence *)allocator.allocate(sizeof(inversekinematics_interfaces__srv__InverseKinematicsPose_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = inversekinematics_interfaces__srv__InverseKinematicsPose_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
inversekinematics_interfaces__srv__InverseKinematicsPose_Request__Sequence__destroy(inversekinematics_interfaces__srv__InverseKinematicsPose_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    inversekinematics_interfaces__srv__InverseKinematicsPose_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
inversekinematics_interfaces__srv__InverseKinematicsPose_Request__Sequence__are_equal(const inversekinematics_interfaces__srv__InverseKinematicsPose_Request__Sequence * lhs, const inversekinematics_interfaces__srv__InverseKinematicsPose_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!inversekinematics_interfaces__srv__InverseKinematicsPose_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
inversekinematics_interfaces__srv__InverseKinematicsPose_Request__Sequence__copy(
  const inversekinematics_interfaces__srv__InverseKinematicsPose_Request__Sequence * input,
  inversekinematics_interfaces__srv__InverseKinematicsPose_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(inversekinematics_interfaces__srv__InverseKinematicsPose_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    inversekinematics_interfaces__srv__InverseKinematicsPose_Request * data =
      (inversekinematics_interfaces__srv__InverseKinematicsPose_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!inversekinematics_interfaces__srv__InverseKinematicsPose_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          inversekinematics_interfaces__srv__InverseKinematicsPose_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!inversekinematics_interfaces__srv__InverseKinematicsPose_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
inversekinematics_interfaces__srv__InverseKinematicsPose_Response__init(inversekinematics_interfaces__srv__InverseKinematicsPose_Response * msg)
{
  if (!msg) {
    return false;
  }
  // joint1
  // joint2
  // joint3
  // joint4
  // gripper
  return true;
}

void
inversekinematics_interfaces__srv__InverseKinematicsPose_Response__fini(inversekinematics_interfaces__srv__InverseKinematicsPose_Response * msg)
{
  if (!msg) {
    return;
  }
  // joint1
  // joint2
  // joint3
  // joint4
  // gripper
}

bool
inversekinematics_interfaces__srv__InverseKinematicsPose_Response__are_equal(const inversekinematics_interfaces__srv__InverseKinematicsPose_Response * lhs, const inversekinematics_interfaces__srv__InverseKinematicsPose_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint1
  if (lhs->joint1 != rhs->joint1) {
    return false;
  }
  // joint2
  if (lhs->joint2 != rhs->joint2) {
    return false;
  }
  // joint3
  if (lhs->joint3 != rhs->joint3) {
    return false;
  }
  // joint4
  if (lhs->joint4 != rhs->joint4) {
    return false;
  }
  // gripper
  if (lhs->gripper != rhs->gripper) {
    return false;
  }
  return true;
}

bool
inversekinematics_interfaces__srv__InverseKinematicsPose_Response__copy(
  const inversekinematics_interfaces__srv__InverseKinematicsPose_Response * input,
  inversekinematics_interfaces__srv__InverseKinematicsPose_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // joint1
  output->joint1 = input->joint1;
  // joint2
  output->joint2 = input->joint2;
  // joint3
  output->joint3 = input->joint3;
  // joint4
  output->joint4 = input->joint4;
  // gripper
  output->gripper = input->gripper;
  return true;
}

inversekinematics_interfaces__srv__InverseKinematicsPose_Response *
inversekinematics_interfaces__srv__InverseKinematicsPose_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  inversekinematics_interfaces__srv__InverseKinematicsPose_Response * msg = (inversekinematics_interfaces__srv__InverseKinematicsPose_Response *)allocator.allocate(sizeof(inversekinematics_interfaces__srv__InverseKinematicsPose_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(inversekinematics_interfaces__srv__InverseKinematicsPose_Response));
  bool success = inversekinematics_interfaces__srv__InverseKinematicsPose_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
inversekinematics_interfaces__srv__InverseKinematicsPose_Response__destroy(inversekinematics_interfaces__srv__InverseKinematicsPose_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    inversekinematics_interfaces__srv__InverseKinematicsPose_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
inversekinematics_interfaces__srv__InverseKinematicsPose_Response__Sequence__init(inversekinematics_interfaces__srv__InverseKinematicsPose_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  inversekinematics_interfaces__srv__InverseKinematicsPose_Response * data = NULL;

  if (size) {
    data = (inversekinematics_interfaces__srv__InverseKinematicsPose_Response *)allocator.zero_allocate(size, sizeof(inversekinematics_interfaces__srv__InverseKinematicsPose_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = inversekinematics_interfaces__srv__InverseKinematicsPose_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        inversekinematics_interfaces__srv__InverseKinematicsPose_Response__fini(&data[i - 1]);
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
inversekinematics_interfaces__srv__InverseKinematicsPose_Response__Sequence__fini(inversekinematics_interfaces__srv__InverseKinematicsPose_Response__Sequence * array)
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
      inversekinematics_interfaces__srv__InverseKinematicsPose_Response__fini(&array->data[i]);
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

inversekinematics_interfaces__srv__InverseKinematicsPose_Response__Sequence *
inversekinematics_interfaces__srv__InverseKinematicsPose_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  inversekinematics_interfaces__srv__InverseKinematicsPose_Response__Sequence * array = (inversekinematics_interfaces__srv__InverseKinematicsPose_Response__Sequence *)allocator.allocate(sizeof(inversekinematics_interfaces__srv__InverseKinematicsPose_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = inversekinematics_interfaces__srv__InverseKinematicsPose_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
inversekinematics_interfaces__srv__InverseKinematicsPose_Response__Sequence__destroy(inversekinematics_interfaces__srv__InverseKinematicsPose_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    inversekinematics_interfaces__srv__InverseKinematicsPose_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
inversekinematics_interfaces__srv__InverseKinematicsPose_Response__Sequence__are_equal(const inversekinematics_interfaces__srv__InverseKinematicsPose_Response__Sequence * lhs, const inversekinematics_interfaces__srv__InverseKinematicsPose_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!inversekinematics_interfaces__srv__InverseKinematicsPose_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
inversekinematics_interfaces__srv__InverseKinematicsPose_Response__Sequence__copy(
  const inversekinematics_interfaces__srv__InverseKinematicsPose_Response__Sequence * input,
  inversekinematics_interfaces__srv__InverseKinematicsPose_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(inversekinematics_interfaces__srv__InverseKinematicsPose_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    inversekinematics_interfaces__srv__InverseKinematicsPose_Response * data =
      (inversekinematics_interfaces__srv__InverseKinematicsPose_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!inversekinematics_interfaces__srv__InverseKinematicsPose_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          inversekinematics_interfaces__srv__InverseKinematicsPose_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!inversekinematics_interfaces__srv__InverseKinematicsPose_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
