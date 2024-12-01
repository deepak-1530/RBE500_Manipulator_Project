// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from velocity_kinematics_interfaces:srv/EffectorToJoint.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "velocity_kinematics_interfaces/srv/detail/effector_to_joint__struct.h"
#include "velocity_kinematics_interfaces/srv/detail/effector_to_joint__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace velocity_kinematics_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _EffectorToJoint_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EffectorToJoint_Request_type_support_ids_t;

static const _EffectorToJoint_Request_type_support_ids_t _EffectorToJoint_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _EffectorToJoint_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EffectorToJoint_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EffectorToJoint_Request_type_support_symbol_names_t _EffectorToJoint_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, velocity_kinematics_interfaces, srv, EffectorToJoint_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, velocity_kinematics_interfaces, srv, EffectorToJoint_Request)),
  }
};

typedef struct _EffectorToJoint_Request_type_support_data_t
{
  void * data[2];
} _EffectorToJoint_Request_type_support_data_t;

static _EffectorToJoint_Request_type_support_data_t _EffectorToJoint_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EffectorToJoint_Request_message_typesupport_map = {
  2,
  "velocity_kinematics_interfaces",
  &_EffectorToJoint_Request_message_typesupport_ids.typesupport_identifier[0],
  &_EffectorToJoint_Request_message_typesupport_symbol_names.symbol_name[0],
  &_EffectorToJoint_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t EffectorToJoint_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EffectorToJoint_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace velocity_kinematics_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, velocity_kinematics_interfaces, srv, EffectorToJoint_Request)() {
  return &::velocity_kinematics_interfaces::srv::rosidl_typesupport_c::EffectorToJoint_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "velocity_kinematics_interfaces/srv/detail/effector_to_joint__struct.h"
// already included above
// #include "velocity_kinematics_interfaces/srv/detail/effector_to_joint__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace velocity_kinematics_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _EffectorToJoint_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EffectorToJoint_Response_type_support_ids_t;

static const _EffectorToJoint_Response_type_support_ids_t _EffectorToJoint_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _EffectorToJoint_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EffectorToJoint_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EffectorToJoint_Response_type_support_symbol_names_t _EffectorToJoint_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, velocity_kinematics_interfaces, srv, EffectorToJoint_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, velocity_kinematics_interfaces, srv, EffectorToJoint_Response)),
  }
};

typedef struct _EffectorToJoint_Response_type_support_data_t
{
  void * data[2];
} _EffectorToJoint_Response_type_support_data_t;

static _EffectorToJoint_Response_type_support_data_t _EffectorToJoint_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EffectorToJoint_Response_message_typesupport_map = {
  2,
  "velocity_kinematics_interfaces",
  &_EffectorToJoint_Response_message_typesupport_ids.typesupport_identifier[0],
  &_EffectorToJoint_Response_message_typesupport_symbol_names.symbol_name[0],
  &_EffectorToJoint_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t EffectorToJoint_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EffectorToJoint_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace velocity_kinematics_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, velocity_kinematics_interfaces, srv, EffectorToJoint_Response)() {
  return &::velocity_kinematics_interfaces::srv::rosidl_typesupport_c::EffectorToJoint_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "velocity_kinematics_interfaces/srv/detail/effector_to_joint__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace velocity_kinematics_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _EffectorToJoint_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EffectorToJoint_type_support_ids_t;

static const _EffectorToJoint_type_support_ids_t _EffectorToJoint_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _EffectorToJoint_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EffectorToJoint_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EffectorToJoint_type_support_symbol_names_t _EffectorToJoint_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, velocity_kinematics_interfaces, srv, EffectorToJoint)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, velocity_kinematics_interfaces, srv, EffectorToJoint)),
  }
};

typedef struct _EffectorToJoint_type_support_data_t
{
  void * data[2];
} _EffectorToJoint_type_support_data_t;

static _EffectorToJoint_type_support_data_t _EffectorToJoint_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EffectorToJoint_service_typesupport_map = {
  2,
  "velocity_kinematics_interfaces",
  &_EffectorToJoint_service_typesupport_ids.typesupport_identifier[0],
  &_EffectorToJoint_service_typesupport_symbol_names.symbol_name[0],
  &_EffectorToJoint_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t EffectorToJoint_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EffectorToJoint_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace velocity_kinematics_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, velocity_kinematics_interfaces, srv, EffectorToJoint)() {
  return &::velocity_kinematics_interfaces::srv::rosidl_typesupport_c::EffectorToJoint_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
