// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from velocity_kinematics_interfaces:srv/JointToEndEffector.idl
// generated code does not contain a copyright notice
#include "velocity_kinematics_interfaces/srv/detail/joint_to_end_effector__rosidl_typesupport_fastrtps_cpp.hpp"
#include "velocity_kinematics_interfaces/srv/detail/joint_to_end_effector__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace velocity_kinematics_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_velocity_kinematics_interfaces
cdr_serialize(
  const velocity_kinematics_interfaces::srv::JointToEndEffector_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joint_vel1
  cdr << ros_message.joint_vel1;
  // Member: joint_vel2
  cdr << ros_message.joint_vel2;
  // Member: joint_vel3
  cdr << ros_message.joint_vel3;
  // Member: joint_vel4
  cdr << ros_message.joint_vel4;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_velocity_kinematics_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  velocity_kinematics_interfaces::srv::JointToEndEffector_Request & ros_message)
{
  // Member: joint_vel1
  cdr >> ros_message.joint_vel1;

  // Member: joint_vel2
  cdr >> ros_message.joint_vel2;

  // Member: joint_vel3
  cdr >> ros_message.joint_vel3;

  // Member: joint_vel4
  cdr >> ros_message.joint_vel4;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_velocity_kinematics_interfaces
get_serialized_size(
  const velocity_kinematics_interfaces::srv::JointToEndEffector_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joint_vel1
  {
    size_t item_size = sizeof(ros_message.joint_vel1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_vel2
  {
    size_t item_size = sizeof(ros_message.joint_vel2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_vel3
  {
    size_t item_size = sizeof(ros_message.joint_vel3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_vel4
  {
    size_t item_size = sizeof(ros_message.joint_vel4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_velocity_kinematics_interfaces
max_serialized_size_JointToEndEffector_Request(
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


  // Member: joint_vel1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: joint_vel2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: joint_vel3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: joint_vel4
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
    using DataType = velocity_kinematics_interfaces::srv::JointToEndEffector_Request;
    is_plain =
      (
      offsetof(DataType, joint_vel4) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _JointToEndEffector_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const velocity_kinematics_interfaces::srv::JointToEndEffector_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JointToEndEffector_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<velocity_kinematics_interfaces::srv::JointToEndEffector_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JointToEndEffector_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const velocity_kinematics_interfaces::srv::JointToEndEffector_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JointToEndEffector_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_JointToEndEffector_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _JointToEndEffector_Request__callbacks = {
  "velocity_kinematics_interfaces::srv",
  "JointToEndEffector_Request",
  _JointToEndEffector_Request__cdr_serialize,
  _JointToEndEffector_Request__cdr_deserialize,
  _JointToEndEffector_Request__get_serialized_size,
  _JointToEndEffector_Request__max_serialized_size
};

static rosidl_message_type_support_t _JointToEndEffector_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_JointToEndEffector_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace velocity_kinematics_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_velocity_kinematics_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<velocity_kinematics_interfaces::srv::JointToEndEffector_Request>()
{
  return &velocity_kinematics_interfaces::srv::typesupport_fastrtps_cpp::_JointToEndEffector_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, velocity_kinematics_interfaces, srv, JointToEndEffector_Request)() {
  return &velocity_kinematics_interfaces::srv::typesupport_fastrtps_cpp::_JointToEndEffector_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace velocity_kinematics_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_velocity_kinematics_interfaces
cdr_serialize(
  const velocity_kinematics_interfaces::srv::JointToEndEffector_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: vx
  cdr << ros_message.vx;
  // Member: vy
  cdr << ros_message.vy;
  // Member: vz
  cdr << ros_message.vz;
  // Member: wx
  cdr << ros_message.wx;
  // Member: wy
  cdr << ros_message.wy;
  // Member: wz
  cdr << ros_message.wz;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_velocity_kinematics_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  velocity_kinematics_interfaces::srv::JointToEndEffector_Response & ros_message)
{
  // Member: vx
  cdr >> ros_message.vx;

  // Member: vy
  cdr >> ros_message.vy;

  // Member: vz
  cdr >> ros_message.vz;

  // Member: wx
  cdr >> ros_message.wx;

  // Member: wy
  cdr >> ros_message.wy;

  // Member: wz
  cdr >> ros_message.wz;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_velocity_kinematics_interfaces
get_serialized_size(
  const velocity_kinematics_interfaces::srv::JointToEndEffector_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: vx
  {
    size_t item_size = sizeof(ros_message.vx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vy
  {
    size_t item_size = sizeof(ros_message.vy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vz
  {
    size_t item_size = sizeof(ros_message.vz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wx
  {
    size_t item_size = sizeof(ros_message.wx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wy
  {
    size_t item_size = sizeof(ros_message.wy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wz
  {
    size_t item_size = sizeof(ros_message.wz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_velocity_kinematics_interfaces
max_serialized_size_JointToEndEffector_Response(
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


  // Member: vx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wz
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
    using DataType = velocity_kinematics_interfaces::srv::JointToEndEffector_Response;
    is_plain =
      (
      offsetof(DataType, wz) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _JointToEndEffector_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const velocity_kinematics_interfaces::srv::JointToEndEffector_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JointToEndEffector_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<velocity_kinematics_interfaces::srv::JointToEndEffector_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JointToEndEffector_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const velocity_kinematics_interfaces::srv::JointToEndEffector_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JointToEndEffector_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_JointToEndEffector_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _JointToEndEffector_Response__callbacks = {
  "velocity_kinematics_interfaces::srv",
  "JointToEndEffector_Response",
  _JointToEndEffector_Response__cdr_serialize,
  _JointToEndEffector_Response__cdr_deserialize,
  _JointToEndEffector_Response__get_serialized_size,
  _JointToEndEffector_Response__max_serialized_size
};

static rosidl_message_type_support_t _JointToEndEffector_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_JointToEndEffector_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace velocity_kinematics_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_velocity_kinematics_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<velocity_kinematics_interfaces::srv::JointToEndEffector_Response>()
{
  return &velocity_kinematics_interfaces::srv::typesupport_fastrtps_cpp::_JointToEndEffector_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, velocity_kinematics_interfaces, srv, JointToEndEffector_Response)() {
  return &velocity_kinematics_interfaces::srv::typesupport_fastrtps_cpp::_JointToEndEffector_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace velocity_kinematics_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _JointToEndEffector__callbacks = {
  "velocity_kinematics_interfaces::srv",
  "JointToEndEffector",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, velocity_kinematics_interfaces, srv, JointToEndEffector_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, velocity_kinematics_interfaces, srv, JointToEndEffector_Response)(),
};

static rosidl_service_type_support_t _JointToEndEffector__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_JointToEndEffector__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace velocity_kinematics_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_velocity_kinematics_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<velocity_kinematics_interfaces::srv::JointToEndEffector>()
{
  return &velocity_kinematics_interfaces::srv::typesupport_fastrtps_cpp::_JointToEndEffector__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, velocity_kinematics_interfaces, srv, JointToEndEffector)() {
  return &velocity_kinematics_interfaces::srv::typesupport_fastrtps_cpp::_JointToEndEffector__handle;
}

#ifdef __cplusplus
}
#endif
