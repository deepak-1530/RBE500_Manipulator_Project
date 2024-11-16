// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from inversekinematics_interfaces:srv/InverseKinematicsPose.idl
// generated code does not contain a copyright notice
#include "inversekinematics_interfaces/srv/detail/inverse_kinematics_pose__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "inversekinematics_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "inversekinematics_interfaces/srv/detail/inverse_kinematics_pose__struct.h"
#include "inversekinematics_interfaces/srv/detail/inverse_kinematics_pose__functions.h"
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


using _InverseKinematicsPose_Request__ros_msg_type = inversekinematics_interfaces__srv__InverseKinematicsPose_Request;

static bool _InverseKinematicsPose_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _InverseKinematicsPose_Request__ros_msg_type * ros_message = static_cast<const _InverseKinematicsPose_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: z
  {
    cdr << ros_message->z;
  }

  // Field name: qx
  {
    cdr << ros_message->qx;
  }

  // Field name: qy
  {
    cdr << ros_message->qy;
  }

  // Field name: qz
  {
    cdr << ros_message->qz;
  }

  // Field name: qw
  {
    cdr << ros_message->qw;
  }

  return true;
}

static bool _InverseKinematicsPose_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _InverseKinematicsPose_Request__ros_msg_type * ros_message = static_cast<_InverseKinematicsPose_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  // Field name: z
  {
    cdr >> ros_message->z;
  }

  // Field name: qx
  {
    cdr >> ros_message->qx;
  }

  // Field name: qy
  {
    cdr >> ros_message->qy;
  }

  // Field name: qz
  {
    cdr >> ros_message->qz;
  }

  // Field name: qw
  {
    cdr >> ros_message->qw;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_inversekinematics_interfaces
size_t get_serialized_size_inversekinematics_interfaces__srv__InverseKinematicsPose_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InverseKinematicsPose_Request__ros_msg_type * ros_message = static_cast<const _InverseKinematicsPose_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z
  {
    size_t item_size = sizeof(ros_message->z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name qx
  {
    size_t item_size = sizeof(ros_message->qx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name qy
  {
    size_t item_size = sizeof(ros_message->qy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name qz
  {
    size_t item_size = sizeof(ros_message->qz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name qw
  {
    size_t item_size = sizeof(ros_message->qw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _InverseKinematicsPose_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_inversekinematics_interfaces__srv__InverseKinematicsPose_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_inversekinematics_interfaces
size_t max_serialized_size_inversekinematics_interfaces__srv__InverseKinematicsPose_Request(
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

  // member: x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: qx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: qy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: qz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: qw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = inversekinematics_interfaces__srv__InverseKinematicsPose_Request;
    is_plain =
      (
      offsetof(DataType, qw) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _InverseKinematicsPose_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_inversekinematics_interfaces__srv__InverseKinematicsPose_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_InverseKinematicsPose_Request = {
  "inversekinematics_interfaces::srv",
  "InverseKinematicsPose_Request",
  _InverseKinematicsPose_Request__cdr_serialize,
  _InverseKinematicsPose_Request__cdr_deserialize,
  _InverseKinematicsPose_Request__get_serialized_size,
  _InverseKinematicsPose_Request__max_serialized_size
};

static rosidl_message_type_support_t _InverseKinematicsPose_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InverseKinematicsPose_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, inversekinematics_interfaces, srv, InverseKinematicsPose_Request)() {
  return &_InverseKinematicsPose_Request__type_support;
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
// #include "inversekinematics_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "inversekinematics_interfaces/srv/detail/inverse_kinematics_pose__struct.h"
// already included above
// #include "inversekinematics_interfaces/srv/detail/inverse_kinematics_pose__functions.h"
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


using _InverseKinematicsPose_Response__ros_msg_type = inversekinematics_interfaces__srv__InverseKinematicsPose_Response;

static bool _InverseKinematicsPose_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _InverseKinematicsPose_Response__ros_msg_type * ros_message = static_cast<const _InverseKinematicsPose_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: joint1
  {
    cdr << ros_message->joint1;
  }

  // Field name: joint2
  {
    cdr << ros_message->joint2;
  }

  // Field name: joint3
  {
    cdr << ros_message->joint3;
  }

  // Field name: joint4
  {
    cdr << ros_message->joint4;
  }

  // Field name: gripper
  {
    cdr << ros_message->gripper;
  }

  return true;
}

static bool _InverseKinematicsPose_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _InverseKinematicsPose_Response__ros_msg_type * ros_message = static_cast<_InverseKinematicsPose_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: joint1
  {
    cdr >> ros_message->joint1;
  }

  // Field name: joint2
  {
    cdr >> ros_message->joint2;
  }

  // Field name: joint3
  {
    cdr >> ros_message->joint3;
  }

  // Field name: joint4
  {
    cdr >> ros_message->joint4;
  }

  // Field name: gripper
  {
    cdr >> ros_message->gripper;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_inversekinematics_interfaces
size_t get_serialized_size_inversekinematics_interfaces__srv__InverseKinematicsPose_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InverseKinematicsPose_Response__ros_msg_type * ros_message = static_cast<const _InverseKinematicsPose_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint1
  {
    size_t item_size = sizeof(ros_message->joint1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint2
  {
    size_t item_size = sizeof(ros_message->joint2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint3
  {
    size_t item_size = sizeof(ros_message->joint3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint4
  {
    size_t item_size = sizeof(ros_message->joint4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gripper
  {
    size_t item_size = sizeof(ros_message->gripper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _InverseKinematicsPose_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_inversekinematics_interfaces__srv__InverseKinematicsPose_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_inversekinematics_interfaces
size_t max_serialized_size_inversekinematics_interfaces__srv__InverseKinematicsPose_Response(
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

  // member: joint1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gripper
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = inversekinematics_interfaces__srv__InverseKinematicsPose_Response;
    is_plain =
      (
      offsetof(DataType, gripper) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _InverseKinematicsPose_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_inversekinematics_interfaces__srv__InverseKinematicsPose_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_InverseKinematicsPose_Response = {
  "inversekinematics_interfaces::srv",
  "InverseKinematicsPose_Response",
  _InverseKinematicsPose_Response__cdr_serialize,
  _InverseKinematicsPose_Response__cdr_deserialize,
  _InverseKinematicsPose_Response__get_serialized_size,
  _InverseKinematicsPose_Response__max_serialized_size
};

static rosidl_message_type_support_t _InverseKinematicsPose_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InverseKinematicsPose_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, inversekinematics_interfaces, srv, InverseKinematicsPose_Response)() {
  return &_InverseKinematicsPose_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "inversekinematics_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "inversekinematics_interfaces/srv/inverse_kinematics_pose.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t InverseKinematicsPose__callbacks = {
  "inversekinematics_interfaces::srv",
  "InverseKinematicsPose",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, inversekinematics_interfaces, srv, InverseKinematicsPose_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, inversekinematics_interfaces, srv, InverseKinematicsPose_Response)(),
};

static rosidl_service_type_support_t InverseKinematicsPose__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &InverseKinematicsPose__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, inversekinematics_interfaces, srv, InverseKinematicsPose)() {
  return &InverseKinematicsPose__handle;
}

#if defined(__cplusplus)
}
#endif
