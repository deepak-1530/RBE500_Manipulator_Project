// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from velocity_kinematics_interfaces:srv/JointToEffector.idl
// generated code does not contain a copyright notice
#include "velocity_kinematics_interfaces/srv/detail/joint_to_effector__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "velocity_kinematics_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "velocity_kinematics_interfaces/srv/detail/joint_to_effector__struct.h"
#include "velocity_kinematics_interfaces/srv/detail/joint_to_effector__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _JointToEffector_Request__ros_msg_type = velocity_kinematics_interfaces__srv__JointToEffector_Request;

static bool _JointToEffector_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointToEffector_Request__ros_msg_type * ros_message = static_cast<const _JointToEffector_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_vel1
  {
    cdr << ros_message->joint_vel1;
  }

  // Field name: joint_vel2
  {
    cdr << ros_message->joint_vel2;
  }

  // Field name: joint_vel3
  {
    cdr << ros_message->joint_vel3;
  }

  // Field name: joint_vel4
  {
    cdr << ros_message->joint_vel4;
  }

  return true;
}

static bool _JointToEffector_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointToEffector_Request__ros_msg_type * ros_message = static_cast<_JointToEffector_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_vel1
  {
    cdr >> ros_message->joint_vel1;
  }

  // Field name: joint_vel2
  {
    cdr >> ros_message->joint_vel2;
  }

  // Field name: joint_vel3
  {
    cdr >> ros_message->joint_vel3;
  }

  // Field name: joint_vel4
  {
    cdr >> ros_message->joint_vel4;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_velocity_kinematics_interfaces
size_t get_serialized_size_velocity_kinematics_interfaces__srv__JointToEffector_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointToEffector_Request__ros_msg_type * ros_message = static_cast<const _JointToEffector_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint_vel1
  {
    size_t item_size = sizeof(ros_message->joint_vel1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_vel2
  {
    size_t item_size = sizeof(ros_message->joint_vel2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_vel3
  {
    size_t item_size = sizeof(ros_message->joint_vel3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_vel4
  {
    size_t item_size = sizeof(ros_message->joint_vel4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JointToEffector_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_velocity_kinematics_interfaces__srv__JointToEffector_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_velocity_kinematics_interfaces
size_t max_serialized_size_velocity_kinematics_interfaces__srv__JointToEffector_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: joint_vel1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_vel2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_vel3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_vel4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = velocity_kinematics_interfaces__srv__JointToEffector_Request;
    is_plain =
      (
      offsetof(DataType, joint_vel4) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _JointToEffector_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_velocity_kinematics_interfaces__srv__JointToEffector_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JointToEffector_Request = {
  "velocity_kinematics_interfaces::srv",
  "JointToEffector_Request",
  _JointToEffector_Request__cdr_serialize,
  _JointToEffector_Request__cdr_deserialize,
  _JointToEffector_Request__get_serialized_size,
  _JointToEffector_Request__max_serialized_size
};

static rosidl_message_type_support_t _JointToEffector_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointToEffector_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, velocity_kinematics_interfaces, srv, JointToEffector_Request)() {
  return &_JointToEffector_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "velocity_kinematics_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "velocity_kinematics_interfaces/srv/detail/joint_to_effector__struct.h"
// already included above
// #include "velocity_kinematics_interfaces/srv/detail/joint_to_effector__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _JointToEffector_Response__ros_msg_type = velocity_kinematics_interfaces__srv__JointToEffector_Response;

static bool _JointToEffector_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointToEffector_Response__ros_msg_type * ros_message = static_cast<const _JointToEffector_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: vx
  {
    cdr << ros_message->vx;
  }

  // Field name: vy
  {
    cdr << ros_message->vy;
  }

  // Field name: vz
  {
    cdr << ros_message->vz;
  }

  // Field name: wx
  {
    cdr << ros_message->wx;
  }

  // Field name: wy
  {
    cdr << ros_message->wy;
  }

  // Field name: wz
  {
    cdr << ros_message->wz;
  }

  return true;
}

static bool _JointToEffector_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointToEffector_Response__ros_msg_type * ros_message = static_cast<_JointToEffector_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: vx
  {
    cdr >> ros_message->vx;
  }

  // Field name: vy
  {
    cdr >> ros_message->vy;
  }

  // Field name: vz
  {
    cdr >> ros_message->vz;
  }

  // Field name: wx
  {
    cdr >> ros_message->wx;
  }

  // Field name: wy
  {
    cdr >> ros_message->wy;
  }

  // Field name: wz
  {
    cdr >> ros_message->wz;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_velocity_kinematics_interfaces
size_t get_serialized_size_velocity_kinematics_interfaces__srv__JointToEffector_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointToEffector_Response__ros_msg_type * ros_message = static_cast<const _JointToEffector_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name vx
  {
    size_t item_size = sizeof(ros_message->vx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vy
  {
    size_t item_size = sizeof(ros_message->vy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vz
  {
    size_t item_size = sizeof(ros_message->vz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wx
  {
    size_t item_size = sizeof(ros_message->wx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wy
  {
    size_t item_size = sizeof(ros_message->wy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wz
  {
    size_t item_size = sizeof(ros_message->wz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JointToEffector_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_velocity_kinematics_interfaces__srv__JointToEffector_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_velocity_kinematics_interfaces
size_t max_serialized_size_velocity_kinematics_interfaces__srv__JointToEffector_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: vx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = velocity_kinematics_interfaces__srv__JointToEffector_Response;
    is_plain =
      (
      offsetof(DataType, wz) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _JointToEffector_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_velocity_kinematics_interfaces__srv__JointToEffector_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JointToEffector_Response = {
  "velocity_kinematics_interfaces::srv",
  "JointToEffector_Response",
  _JointToEffector_Response__cdr_serialize,
  _JointToEffector_Response__cdr_deserialize,
  _JointToEffector_Response__get_serialized_size,
  _JointToEffector_Response__max_serialized_size
};

static rosidl_message_type_support_t _JointToEffector_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointToEffector_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, velocity_kinematics_interfaces, srv, JointToEffector_Response)() {
  return &_JointToEffector_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "velocity_kinematics_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "velocity_kinematics_interfaces/srv/joint_to_effector.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t JointToEffector__callbacks = {
  "velocity_kinematics_interfaces::srv",
  "JointToEffector",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, velocity_kinematics_interfaces, srv, JointToEffector_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, velocity_kinematics_interfaces, srv, JointToEffector_Response)(),
};

static rosidl_service_type_support_t JointToEffector__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &JointToEffector__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, velocity_kinematics_interfaces, srv, JointToEffector)() {
  return &JointToEffector__handle;
}

#if defined(__cplusplus)
}
#endif
