// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from velocity_kinematics_interfaces:srv/JointToEffector.idl
// generated code does not contain a copyright notice

#ifndef VELOCITY_KINEMATICS_INTERFACES__SRV__DETAIL__JOINT_TO_EFFECTOR__TRAITS_HPP_
#define VELOCITY_KINEMATICS_INTERFACES__SRV__DETAIL__JOINT_TO_EFFECTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "velocity_kinematics_interfaces/srv/detail/joint_to_effector__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace velocity_kinematics_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const JointToEffector_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_vel1
  {
    out << "joint_vel1: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_vel1, out);
    out << ", ";
  }

  // member: joint_vel2
  {
    out << "joint_vel2: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_vel2, out);
    out << ", ";
  }

  // member: joint_vel3
  {
    out << "joint_vel3: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_vel3, out);
    out << ", ";
  }

  // member: joint_vel4
  {
    out << "joint_vel4: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_vel4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointToEffector_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_vel1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_vel1: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_vel1, out);
    out << "\n";
  }

  // member: joint_vel2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_vel2: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_vel2, out);
    out << "\n";
  }

  // member: joint_vel3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_vel3: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_vel3, out);
    out << "\n";
  }

  // member: joint_vel4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_vel4: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_vel4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointToEffector_Request & msg, bool use_flow_style = false)
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

}  // namespace velocity_kinematics_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use velocity_kinematics_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const velocity_kinematics_interfaces::srv::JointToEffector_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  velocity_kinematics_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use velocity_kinematics_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const velocity_kinematics_interfaces::srv::JointToEffector_Request & msg)
{
  return velocity_kinematics_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<velocity_kinematics_interfaces::srv::JointToEffector_Request>()
{
  return "velocity_kinematics_interfaces::srv::JointToEffector_Request";
}

template<>
inline const char * name<velocity_kinematics_interfaces::srv::JointToEffector_Request>()
{
  return "velocity_kinematics_interfaces/srv/JointToEffector_Request";
}

template<>
struct has_fixed_size<velocity_kinematics_interfaces::srv::JointToEffector_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<velocity_kinematics_interfaces::srv::JointToEffector_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<velocity_kinematics_interfaces::srv::JointToEffector_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace velocity_kinematics_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const JointToEffector_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: vx
  {
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << ", ";
  }

  // member: vy
  {
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << ", ";
  }

  // member: vz
  {
    out << "vz: ";
    rosidl_generator_traits::value_to_yaml(msg.vz, out);
    out << ", ";
  }

  // member: wx
  {
    out << "wx: ";
    rosidl_generator_traits::value_to_yaml(msg.wx, out);
    out << ", ";
  }

  // member: wy
  {
    out << "wy: ";
    rosidl_generator_traits::value_to_yaml(msg.wy, out);
    out << ", ";
  }

  // member: wz
  {
    out << "wz: ";
    rosidl_generator_traits::value_to_yaml(msg.wz, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointToEffector_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << "\n";
  }

  // member: vy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << "\n";
  }

  // member: vz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vz: ";
    rosidl_generator_traits::value_to_yaml(msg.vz, out);
    out << "\n";
  }

  // member: wx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wx: ";
    rosidl_generator_traits::value_to_yaml(msg.wx, out);
    out << "\n";
  }

  // member: wy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wy: ";
    rosidl_generator_traits::value_to_yaml(msg.wy, out);
    out << "\n";
  }

  // member: wz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wz: ";
    rosidl_generator_traits::value_to_yaml(msg.wz, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointToEffector_Response & msg, bool use_flow_style = false)
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

}  // namespace velocity_kinematics_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use velocity_kinematics_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const velocity_kinematics_interfaces::srv::JointToEffector_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  velocity_kinematics_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use velocity_kinematics_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const velocity_kinematics_interfaces::srv::JointToEffector_Response & msg)
{
  return velocity_kinematics_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<velocity_kinematics_interfaces::srv::JointToEffector_Response>()
{
  return "velocity_kinematics_interfaces::srv::JointToEffector_Response";
}

template<>
inline const char * name<velocity_kinematics_interfaces::srv::JointToEffector_Response>()
{
  return "velocity_kinematics_interfaces/srv/JointToEffector_Response";
}

template<>
struct has_fixed_size<velocity_kinematics_interfaces::srv::JointToEffector_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<velocity_kinematics_interfaces::srv::JointToEffector_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<velocity_kinematics_interfaces::srv::JointToEffector_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<velocity_kinematics_interfaces::srv::JointToEffector>()
{
  return "velocity_kinematics_interfaces::srv::JointToEffector";
}

template<>
inline const char * name<velocity_kinematics_interfaces::srv::JointToEffector>()
{
  return "velocity_kinematics_interfaces/srv/JointToEffector";
}

template<>
struct has_fixed_size<velocity_kinematics_interfaces::srv::JointToEffector>
  : std::integral_constant<
    bool,
    has_fixed_size<velocity_kinematics_interfaces::srv::JointToEffector_Request>::value &&
    has_fixed_size<velocity_kinematics_interfaces::srv::JointToEffector_Response>::value
  >
{
};

template<>
struct has_bounded_size<velocity_kinematics_interfaces::srv::JointToEffector>
  : std::integral_constant<
    bool,
    has_bounded_size<velocity_kinematics_interfaces::srv::JointToEffector_Request>::value &&
    has_bounded_size<velocity_kinematics_interfaces::srv::JointToEffector_Response>::value
  >
{
};

template<>
struct is_service<velocity_kinematics_interfaces::srv::JointToEffector>
  : std::true_type
{
};

template<>
struct is_service_request<velocity_kinematics_interfaces::srv::JointToEffector_Request>
  : std::true_type
{
};

template<>
struct is_service_response<velocity_kinematics_interfaces::srv::JointToEffector_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VELOCITY_KINEMATICS_INTERFACES__SRV__DETAIL__JOINT_TO_EFFECTOR__TRAITS_HPP_
