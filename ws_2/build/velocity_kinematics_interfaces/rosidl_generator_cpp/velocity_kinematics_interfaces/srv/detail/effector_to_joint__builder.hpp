// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from velocity_kinematics_interfaces:srv/EffectorToJoint.idl
// generated code does not contain a copyright notice

#ifndef VELOCITY_KINEMATICS_INTERFACES__SRV__DETAIL__EFFECTOR_TO_JOINT__BUILDER_HPP_
#define VELOCITY_KINEMATICS_INTERFACES__SRV__DETAIL__EFFECTOR_TO_JOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "velocity_kinematics_interfaces/srv/detail/effector_to_joint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace velocity_kinematics_interfaces
{

namespace srv
{

namespace builder
{

class Init_EffectorToJoint_Request_wz
{
public:
  explicit Init_EffectorToJoint_Request_wz(::velocity_kinematics_interfaces::srv::EffectorToJoint_Request & msg)
  : msg_(msg)
  {}
  ::velocity_kinematics_interfaces::srv::EffectorToJoint_Request wz(::velocity_kinematics_interfaces::srv::EffectorToJoint_Request::_wz_type arg)
  {
    msg_.wz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::velocity_kinematics_interfaces::srv::EffectorToJoint_Request msg_;
};

class Init_EffectorToJoint_Request_wy
{
public:
  explicit Init_EffectorToJoint_Request_wy(::velocity_kinematics_interfaces::srv::EffectorToJoint_Request & msg)
  : msg_(msg)
  {}
  Init_EffectorToJoint_Request_wz wy(::velocity_kinematics_interfaces::srv::EffectorToJoint_Request::_wy_type arg)
  {
    msg_.wy = std::move(arg);
    return Init_EffectorToJoint_Request_wz(msg_);
  }

private:
  ::velocity_kinematics_interfaces::srv::EffectorToJoint_Request msg_;
};

class Init_EffectorToJoint_Request_wx
{
public:
  explicit Init_EffectorToJoint_Request_wx(::velocity_kinematics_interfaces::srv::EffectorToJoint_Request & msg)
  : msg_(msg)
  {}
  Init_EffectorToJoint_Request_wy wx(::velocity_kinematics_interfaces::srv::EffectorToJoint_Request::_wx_type arg)
  {
    msg_.wx = std::move(arg);
    return Init_EffectorToJoint_Request_wy(msg_);
  }

private:
  ::velocity_kinematics_interfaces::srv::EffectorToJoint_Request msg_;
};

class Init_EffectorToJoint_Request_vz
{
public:
  explicit Init_EffectorToJoint_Request_vz(::velocity_kinematics_interfaces::srv::EffectorToJoint_Request & msg)
  : msg_(msg)
  {}
  Init_EffectorToJoint_Request_wx vz(::velocity_kinematics_interfaces::srv::EffectorToJoint_Request::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return Init_EffectorToJoint_Request_wx(msg_);
  }

private:
  ::velocity_kinematics_interfaces::srv::EffectorToJoint_Request msg_;
};

class Init_EffectorToJoint_Request_vy
{
public:
  explicit Init_EffectorToJoint_Request_vy(::velocity_kinematics_interfaces::srv::EffectorToJoint_Request & msg)
  : msg_(msg)
  {}
  Init_EffectorToJoint_Request_vz vy(::velocity_kinematics_interfaces::srv::EffectorToJoint_Request::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_EffectorToJoint_Request_vz(msg_);
  }

private:
  ::velocity_kinematics_interfaces::srv::EffectorToJoint_Request msg_;
};

class Init_EffectorToJoint_Request_vx
{
public:
  Init_EffectorToJoint_Request_vx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EffectorToJoint_Request_vy vx(::velocity_kinematics_interfaces::srv::EffectorToJoint_Request::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_EffectorToJoint_Request_vy(msg_);
  }

private:
  ::velocity_kinematics_interfaces::srv::EffectorToJoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::velocity_kinematics_interfaces::srv::EffectorToJoint_Request>()
{
  return velocity_kinematics_interfaces::srv::builder::Init_EffectorToJoint_Request_vx();
}

}  // namespace velocity_kinematics_interfaces


namespace velocity_kinematics_interfaces
{

namespace srv
{

namespace builder
{

class Init_EffectorToJoint_Response_joint_vel4
{
public:
  explicit Init_EffectorToJoint_Response_joint_vel4(::velocity_kinematics_interfaces::srv::EffectorToJoint_Response & msg)
  : msg_(msg)
  {}
  ::velocity_kinematics_interfaces::srv::EffectorToJoint_Response joint_vel4(::velocity_kinematics_interfaces::srv::EffectorToJoint_Response::_joint_vel4_type arg)
  {
    msg_.joint_vel4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::velocity_kinematics_interfaces::srv::EffectorToJoint_Response msg_;
};

class Init_EffectorToJoint_Response_joint_vel3
{
public:
  explicit Init_EffectorToJoint_Response_joint_vel3(::velocity_kinematics_interfaces::srv::EffectorToJoint_Response & msg)
  : msg_(msg)
  {}
  Init_EffectorToJoint_Response_joint_vel4 joint_vel3(::velocity_kinematics_interfaces::srv::EffectorToJoint_Response::_joint_vel3_type arg)
  {
    msg_.joint_vel3 = std::move(arg);
    return Init_EffectorToJoint_Response_joint_vel4(msg_);
  }

private:
  ::velocity_kinematics_interfaces::srv::EffectorToJoint_Response msg_;
};

class Init_EffectorToJoint_Response_joint_vel2
{
public:
  explicit Init_EffectorToJoint_Response_joint_vel2(::velocity_kinematics_interfaces::srv::EffectorToJoint_Response & msg)
  : msg_(msg)
  {}
  Init_EffectorToJoint_Response_joint_vel3 joint_vel2(::velocity_kinematics_interfaces::srv::EffectorToJoint_Response::_joint_vel2_type arg)
  {
    msg_.joint_vel2 = std::move(arg);
    return Init_EffectorToJoint_Response_joint_vel3(msg_);
  }

private:
  ::velocity_kinematics_interfaces::srv::EffectorToJoint_Response msg_;
};

class Init_EffectorToJoint_Response_joint_vel1
{
public:
  Init_EffectorToJoint_Response_joint_vel1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EffectorToJoint_Response_joint_vel2 joint_vel1(::velocity_kinematics_interfaces::srv::EffectorToJoint_Response::_joint_vel1_type arg)
  {
    msg_.joint_vel1 = std::move(arg);
    return Init_EffectorToJoint_Response_joint_vel2(msg_);
  }

private:
  ::velocity_kinematics_interfaces::srv::EffectorToJoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::velocity_kinematics_interfaces::srv::EffectorToJoint_Response>()
{
  return velocity_kinematics_interfaces::srv::builder::Init_EffectorToJoint_Response_joint_vel1();
}

}  // namespace velocity_kinematics_interfaces

#endif  // VELOCITY_KINEMATICS_INTERFACES__SRV__DETAIL__EFFECTOR_TO_JOINT__BUILDER_HPP_
