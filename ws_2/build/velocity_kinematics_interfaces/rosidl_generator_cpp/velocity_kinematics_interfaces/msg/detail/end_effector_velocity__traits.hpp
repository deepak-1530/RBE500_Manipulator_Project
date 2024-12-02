// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from velocity_kinematics_interfaces:msg/EndEffectorVelocity.idl
// generated code does not contain a copyright notice

#ifndef VELOCITY_KINEMATICS_INTERFACES__MSG__DETAIL__END_EFFECTOR_VELOCITY__TRAITS_HPP_
#define VELOCITY_KINEMATICS_INTERFACES__MSG__DETAIL__END_EFFECTOR_VELOCITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "velocity_kinematics_interfaces/msg/detail/end_effector_velocity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace velocity_kinematics_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const EndEffectorVelocity & msg,
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
  const EndEffectorVelocity & msg,
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

inline std::string to_yaml(const EndEffectorVelocity & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace velocity_kinematics_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use velocity_kinematics_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const velocity_kinematics_interfaces::msg::EndEffectorVelocity & msg,
  std::ostream & out, size_t indentation = 0)
{
  velocity_kinematics_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use velocity_kinematics_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const velocity_kinematics_interfaces::msg::EndEffectorVelocity & msg)
{
  return velocity_kinematics_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<velocity_kinematics_interfaces::msg::EndEffectorVelocity>()
{
  return "velocity_kinematics_interfaces::msg::EndEffectorVelocity";
}

template<>
inline const char * name<velocity_kinematics_interfaces::msg::EndEffectorVelocity>()
{
  return "velocity_kinematics_interfaces/msg/EndEffectorVelocity";
}

template<>
struct has_fixed_size<velocity_kinematics_interfaces::msg::EndEffectorVelocity>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<velocity_kinematics_interfaces::msg::EndEffectorVelocity>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<velocity_kinematics_interfaces::msg::EndEffectorVelocity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VELOCITY_KINEMATICS_INTERFACES__MSG__DETAIL__END_EFFECTOR_VELOCITY__TRAITS_HPP_
