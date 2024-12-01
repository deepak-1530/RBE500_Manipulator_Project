// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from velocity_kinematics_interfaces:srv/EndEffectorJoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "velocity_kinematics_interfaces/srv/detail/end_effector_joint__rosidl_typesupport_introspection_c.h"
#include "velocity_kinematics_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "velocity_kinematics_interfaces/srv/detail/end_effector_joint__functions.h"
#include "velocity_kinematics_interfaces/srv/detail/end_effector_joint__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__rosidl_typesupport_introspection_c__EndEffectorJoint_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__init(message_memory);
}

void velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__rosidl_typesupport_introspection_c__EndEffectorJoint_Request_fini_function(void * message_memory)
{
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__rosidl_typesupport_introspection_c__EndEffectorJoint_Request_message_member_array[6] = {
  {
    "vx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Request, vx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Request, vy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Request, vz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Request, wx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Request, wy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Request, wz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__rosidl_typesupport_introspection_c__EndEffectorJoint_Request_message_members = {
  "velocity_kinematics_interfaces__srv",  // message namespace
  "EndEffectorJoint_Request",  // message name
  6,  // number of fields
  sizeof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Request),
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__rosidl_typesupport_introspection_c__EndEffectorJoint_Request_message_member_array,  // message members
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__rosidl_typesupport_introspection_c__EndEffectorJoint_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__rosidl_typesupport_introspection_c__EndEffectorJoint_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__rosidl_typesupport_introspection_c__EndEffectorJoint_Request_message_type_support_handle = {
  0,
  &velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__rosidl_typesupport_introspection_c__EndEffectorJoint_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_velocity_kinematics_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, velocity_kinematics_interfaces, srv, EndEffectorJoint_Request)() {
  if (!velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__rosidl_typesupport_introspection_c__EndEffectorJoint_Request_message_type_support_handle.typesupport_identifier) {
    velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__rosidl_typesupport_introspection_c__EndEffectorJoint_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &velocity_kinematics_interfaces__srv__EndEffectorJoint_Request__rosidl_typesupport_introspection_c__EndEffectorJoint_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "velocity_kinematics_interfaces/srv/detail/end_effector_joint__rosidl_typesupport_introspection_c.h"
// already included above
// #include "velocity_kinematics_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "velocity_kinematics_interfaces/srv/detail/end_effector_joint__functions.h"
// already included above
// #include "velocity_kinematics_interfaces/srv/detail/end_effector_joint__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__rosidl_typesupport_introspection_c__EndEffectorJoint_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__init(message_memory);
}

void velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__rosidl_typesupport_introspection_c__EndEffectorJoint_Response_fini_function(void * message_memory)
{
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__rosidl_typesupport_introspection_c__EndEffectorJoint_Response_message_member_array[4] = {
  {
    "joint_vel1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Response, joint_vel1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_vel2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Response, joint_vel2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_vel3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Response, joint_vel3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_vel4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Response, joint_vel4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__rosidl_typesupport_introspection_c__EndEffectorJoint_Response_message_members = {
  "velocity_kinematics_interfaces__srv",  // message namespace
  "EndEffectorJoint_Response",  // message name
  4,  // number of fields
  sizeof(velocity_kinematics_interfaces__srv__EndEffectorJoint_Response),
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__rosidl_typesupport_introspection_c__EndEffectorJoint_Response_message_member_array,  // message members
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__rosidl_typesupport_introspection_c__EndEffectorJoint_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__rosidl_typesupport_introspection_c__EndEffectorJoint_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__rosidl_typesupport_introspection_c__EndEffectorJoint_Response_message_type_support_handle = {
  0,
  &velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__rosidl_typesupport_introspection_c__EndEffectorJoint_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_velocity_kinematics_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, velocity_kinematics_interfaces, srv, EndEffectorJoint_Response)() {
  if (!velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__rosidl_typesupport_introspection_c__EndEffectorJoint_Response_message_type_support_handle.typesupport_identifier) {
    velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__rosidl_typesupport_introspection_c__EndEffectorJoint_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &velocity_kinematics_interfaces__srv__EndEffectorJoint_Response__rosidl_typesupport_introspection_c__EndEffectorJoint_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "velocity_kinematics_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "velocity_kinematics_interfaces/srv/detail/end_effector_joint__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers velocity_kinematics_interfaces__srv__detail__end_effector_joint__rosidl_typesupport_introspection_c__EndEffectorJoint_service_members = {
  "velocity_kinematics_interfaces__srv",  // service namespace
  "EndEffectorJoint",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // velocity_kinematics_interfaces__srv__detail__end_effector_joint__rosidl_typesupport_introspection_c__EndEffectorJoint_Request_message_type_support_handle,
  NULL  // response message
  // velocity_kinematics_interfaces__srv__detail__end_effector_joint__rosidl_typesupport_introspection_c__EndEffectorJoint_Response_message_type_support_handle
};

static rosidl_service_type_support_t velocity_kinematics_interfaces__srv__detail__end_effector_joint__rosidl_typesupport_introspection_c__EndEffectorJoint_service_type_support_handle = {
  0,
  &velocity_kinematics_interfaces__srv__detail__end_effector_joint__rosidl_typesupport_introspection_c__EndEffectorJoint_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, velocity_kinematics_interfaces, srv, EndEffectorJoint_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, velocity_kinematics_interfaces, srv, EndEffectorJoint_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_velocity_kinematics_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, velocity_kinematics_interfaces, srv, EndEffectorJoint)() {
  if (!velocity_kinematics_interfaces__srv__detail__end_effector_joint__rosidl_typesupport_introspection_c__EndEffectorJoint_service_type_support_handle.typesupport_identifier) {
    velocity_kinematics_interfaces__srv__detail__end_effector_joint__rosidl_typesupport_introspection_c__EndEffectorJoint_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)velocity_kinematics_interfaces__srv__detail__end_effector_joint__rosidl_typesupport_introspection_c__EndEffectorJoint_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, velocity_kinematics_interfaces, srv, EndEffectorJoint_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, velocity_kinematics_interfaces, srv, EndEffectorJoint_Response)()->data;
  }

  return &velocity_kinematics_interfaces__srv__detail__end_effector_joint__rosidl_typesupport_introspection_c__EndEffectorJoint_service_type_support_handle;
}
