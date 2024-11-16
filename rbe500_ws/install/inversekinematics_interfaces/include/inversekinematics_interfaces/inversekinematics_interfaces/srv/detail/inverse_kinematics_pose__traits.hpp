// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from inversekinematics_interfaces:srv/InverseKinematicsPose.idl
// generated code does not contain a copyright notice

#ifndef INVERSEKINEMATICS_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS_POSE__TRAITS_HPP_
#define INVERSEKINEMATICS_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "inversekinematics_interfaces/srv/detail/inverse_kinematics_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace inversekinematics_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const InverseKinematicsPose_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: qx
  {
    out << "qx: ";
    rosidl_generator_traits::value_to_yaml(msg.qx, out);
    out << ", ";
  }

  // member: qy
  {
    out << "qy: ";
    rosidl_generator_traits::value_to_yaml(msg.qy, out);
    out << ", ";
  }

  // member: qz
  {
    out << "qz: ";
    rosidl_generator_traits::value_to_yaml(msg.qz, out);
    out << ", ";
  }

  // member: qw
  {
    out << "qw: ";
    rosidl_generator_traits::value_to_yaml(msg.qw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InverseKinematicsPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: qx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qx: ";
    rosidl_generator_traits::value_to_yaml(msg.qx, out);
    out << "\n";
  }

  // member: qy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qy: ";
    rosidl_generator_traits::value_to_yaml(msg.qy, out);
    out << "\n";
  }

  // member: qz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qz: ";
    rosidl_generator_traits::value_to_yaml(msg.qz, out);
    out << "\n";
  }

  // member: qw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qw: ";
    rosidl_generator_traits::value_to_yaml(msg.qw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InverseKinematicsPose_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace inversekinematics_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use inversekinematics_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const inversekinematics_interfaces::srv::InverseKinematicsPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  inversekinematics_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use inversekinematics_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const inversekinematics_interfaces::srv::InverseKinematicsPose_Request & msg)
{
  return inversekinematics_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<inversekinematics_interfaces::srv::InverseKinematicsPose_Request>()
{
  return "inversekinematics_interfaces::srv::InverseKinematicsPose_Request";
}

template<>
inline const char * name<inversekinematics_interfaces::srv::InverseKinematicsPose_Request>()
{
  return "inversekinematics_interfaces/srv/InverseKinematicsPose_Request";
}

template<>
struct has_fixed_size<inversekinematics_interfaces::srv::InverseKinematicsPose_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<inversekinematics_interfaces::srv::InverseKinematicsPose_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<inversekinematics_interfaces::srv::InverseKinematicsPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace inversekinematics_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const InverseKinematicsPose_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint1
  {
    out << "joint1: ";
    rosidl_generator_traits::value_to_yaml(msg.joint1, out);
    out << ", ";
  }

  // member: joint2
  {
    out << "joint2: ";
    rosidl_generator_traits::value_to_yaml(msg.joint2, out);
    out << ", ";
  }

  // member: joint3
  {
    out << "joint3: ";
    rosidl_generator_traits::value_to_yaml(msg.joint3, out);
    out << ", ";
  }

  // member: joint4
  {
    out << "joint4: ";
    rosidl_generator_traits::value_to_yaml(msg.joint4, out);
    out << ", ";
  }

  // member: gripper
  {
    out << "gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InverseKinematicsPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint1: ";
    rosidl_generator_traits::value_to_yaml(msg.joint1, out);
    out << "\n";
  }

  // member: joint2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint2: ";
    rosidl_generator_traits::value_to_yaml(msg.joint2, out);
    out << "\n";
  }

  // member: joint3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint3: ";
    rosidl_generator_traits::value_to_yaml(msg.joint3, out);
    out << "\n";
  }

  // member: joint4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint4: ";
    rosidl_generator_traits::value_to_yaml(msg.joint4, out);
    out << "\n";
  }

  // member: gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InverseKinematicsPose_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace inversekinematics_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use inversekinematics_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const inversekinematics_interfaces::srv::InverseKinematicsPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  inversekinematics_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use inversekinematics_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const inversekinematics_interfaces::srv::InverseKinematicsPose_Response & msg)
{
  return inversekinematics_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<inversekinematics_interfaces::srv::InverseKinematicsPose_Response>()
{
  return "inversekinematics_interfaces::srv::InverseKinematicsPose_Response";
}

template<>
inline const char * name<inversekinematics_interfaces::srv::InverseKinematicsPose_Response>()
{
  return "inversekinematics_interfaces/srv/InverseKinematicsPose_Response";
}

template<>
struct has_fixed_size<inversekinematics_interfaces::srv::InverseKinematicsPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<inversekinematics_interfaces::srv::InverseKinematicsPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<inversekinematics_interfaces::srv::InverseKinematicsPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<inversekinematics_interfaces::srv::InverseKinematicsPose>()
{
  return "inversekinematics_interfaces::srv::InverseKinematicsPose";
}

template<>
inline const char * name<inversekinematics_interfaces::srv::InverseKinematicsPose>()
{
  return "inversekinematics_interfaces/srv/InverseKinematicsPose";
}

template<>
struct has_fixed_size<inversekinematics_interfaces::srv::InverseKinematicsPose>
  : std::integral_constant<
    bool,
    has_fixed_size<inversekinematics_interfaces::srv::InverseKinematicsPose_Request>::value &&
    has_fixed_size<inversekinematics_interfaces::srv::InverseKinematicsPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<inversekinematics_interfaces::srv::InverseKinematicsPose>
  : std::integral_constant<
    bool,
    has_bounded_size<inversekinematics_interfaces::srv::InverseKinematicsPose_Request>::value &&
    has_bounded_size<inversekinematics_interfaces::srv::InverseKinematicsPose_Response>::value
  >
{
};

template<>
struct is_service<inversekinematics_interfaces::srv::InverseKinematicsPose>
  : std::true_type
{
};

template<>
struct is_service_request<inversekinematics_interfaces::srv::InverseKinematicsPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<inversekinematics_interfaces::srv::InverseKinematicsPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INVERSEKINEMATICS_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS_POSE__TRAITS_HPP_
