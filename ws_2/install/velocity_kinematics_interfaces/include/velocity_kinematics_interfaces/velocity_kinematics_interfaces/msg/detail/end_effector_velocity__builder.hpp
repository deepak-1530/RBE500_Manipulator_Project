// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from velocity_kinematics_interfaces:msg/EndEffectorVelocity.idl
// generated code does not contain a copyright notice

#ifndef VELOCITY_KINEMATICS_INTERFACES__MSG__DETAIL__END_EFFECTOR_VELOCITY__BUILDER_HPP_
#define VELOCITY_KINEMATICS_INTERFACES__MSG__DETAIL__END_EFFECTOR_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "velocity_kinematics_interfaces/msg/detail/end_effector_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace velocity_kinematics_interfaces
{

namespace msg
{

namespace builder
{

class Init_EndEffectorVelocity_wz
{
public:
  explicit Init_EndEffectorVelocity_wz(::velocity_kinematics_interfaces::msg::EndEffectorVelocity & msg)
  : msg_(msg)
  {}
  ::velocity_kinematics_interfaces::msg::EndEffectorVelocity wz(::velocity_kinematics_interfaces::msg::EndEffectorVelocity::_wz_type arg)
  {
    msg_.wz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::velocity_kinematics_interfaces::msg::EndEffectorVelocity msg_;
};

class Init_EndEffectorVelocity_wy
{
public:
  explicit Init_EndEffectorVelocity_wy(::velocity_kinematics_interfaces::msg::EndEffectorVelocity & msg)
  : msg_(msg)
  {}
  Init_EndEffectorVelocity_wz wy(::velocity_kinematics_interfaces::msg::EndEffectorVelocity::_wy_type arg)
  {
    msg_.wy = std::move(arg);
    return Init_EndEffectorVelocity_wz(msg_);
  }

private:
  ::velocity_kinematics_interfaces::msg::EndEffectorVelocity msg_;
};

class Init_EndEffectorVelocity_wx
{
public:
  explicit Init_EndEffectorVelocity_wx(::velocity_kinematics_interfaces::msg::EndEffectorVelocity & msg)
  : msg_(msg)
  {}
  Init_EndEffectorVelocity_wy wx(::velocity_kinematics_interfaces::msg::EndEffectorVelocity::_wx_type arg)
  {
    msg_.wx = std::move(arg);
    return Init_EndEffectorVelocity_wy(msg_);
  }

private:
  ::velocity_kinematics_interfaces::msg::EndEffectorVelocity msg_;
};

class Init_EndEffectorVelocity_vz
{
public:
  explicit Init_EndEffectorVelocity_vz(::velocity_kinematics_interfaces::msg::EndEffectorVelocity & msg)
  : msg_(msg)
  {}
  Init_EndEffectorVelocity_wx vz(::velocity_kinematics_interfaces::msg::EndEffectorVelocity::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return Init_EndEffectorVelocity_wx(msg_);
  }

private:
  ::velocity_kinematics_interfaces::msg::EndEffectorVelocity msg_;
};

class Init_EndEffectorVelocity_vy
{
public:
  explicit Init_EndEffectorVelocity_vy(::velocity_kinematics_interfaces::msg::EndEffectorVelocity & msg)
  : msg_(msg)
  {}
  Init_EndEffectorVelocity_vz vy(::velocity_kinematics_interfaces::msg::EndEffectorVelocity::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_EndEffectorVelocity_vz(msg_);
  }

private:
  ::velocity_kinematics_interfaces::msg::EndEffectorVelocity msg_;
};

class Init_EndEffectorVelocity_vx
{
public:
  Init_EndEffectorVelocity_vx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EndEffectorVelocity_vy vx(::velocity_kinematics_interfaces::msg::EndEffectorVelocity::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_EndEffectorVelocity_vy(msg_);
  }

private:
  ::velocity_kinematics_interfaces::msg::EndEffectorVelocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::velocity_kinematics_interfaces::msg::EndEffectorVelocity>()
{
  return velocity_kinematics_interfaces::msg::builder::Init_EndEffectorVelocity_vx();
}

}  // namespace velocity_kinematics_interfaces

#endif  // VELOCITY_KINEMATICS_INTERFACES__MSG__DETAIL__END_EFFECTOR_VELOCITY__BUILDER_HPP_
