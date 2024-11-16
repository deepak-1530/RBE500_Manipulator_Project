// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from inversekinematics_interfaces:srv/InverseKinematicsPose.idl
// generated code does not contain a copyright notice

#ifndef INVERSEKINEMATICS_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS_POSE__BUILDER_HPP_
#define INVERSEKINEMATICS_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "inversekinematics_interfaces/srv/detail/inverse_kinematics_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace inversekinematics_interfaces
{

namespace srv
{

namespace builder
{

class Init_InverseKinematicsPose_Request_qw
{
public:
  explicit Init_InverseKinematicsPose_Request_qw(::inversekinematics_interfaces::srv::InverseKinematicsPose_Request & msg)
  : msg_(msg)
  {}
  ::inversekinematics_interfaces::srv::InverseKinematicsPose_Request qw(::inversekinematics_interfaces::srv::InverseKinematicsPose_Request::_qw_type arg)
  {
    msg_.qw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::inversekinematics_interfaces::srv::InverseKinematicsPose_Request msg_;
};

class Init_InverseKinematicsPose_Request_qz
{
public:
  explicit Init_InverseKinematicsPose_Request_qz(::inversekinematics_interfaces::srv::InverseKinematicsPose_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsPose_Request_qw qz(::inversekinematics_interfaces::srv::InverseKinematicsPose_Request::_qz_type arg)
  {
    msg_.qz = std::move(arg);
    return Init_InverseKinematicsPose_Request_qw(msg_);
  }

private:
  ::inversekinematics_interfaces::srv::InverseKinematicsPose_Request msg_;
};

class Init_InverseKinematicsPose_Request_qy
{
public:
  explicit Init_InverseKinematicsPose_Request_qy(::inversekinematics_interfaces::srv::InverseKinematicsPose_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsPose_Request_qz qy(::inversekinematics_interfaces::srv::InverseKinematicsPose_Request::_qy_type arg)
  {
    msg_.qy = std::move(arg);
    return Init_InverseKinematicsPose_Request_qz(msg_);
  }

private:
  ::inversekinematics_interfaces::srv::InverseKinematicsPose_Request msg_;
};

class Init_InverseKinematicsPose_Request_qx
{
public:
  explicit Init_InverseKinematicsPose_Request_qx(::inversekinematics_interfaces::srv::InverseKinematicsPose_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsPose_Request_qy qx(::inversekinematics_interfaces::srv::InverseKinematicsPose_Request::_qx_type arg)
  {
    msg_.qx = std::move(arg);
    return Init_InverseKinematicsPose_Request_qy(msg_);
  }

private:
  ::inversekinematics_interfaces::srv::InverseKinematicsPose_Request msg_;
};

class Init_InverseKinematicsPose_Request_z
{
public:
  explicit Init_InverseKinematicsPose_Request_z(::inversekinematics_interfaces::srv::InverseKinematicsPose_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsPose_Request_qx z(::inversekinematics_interfaces::srv::InverseKinematicsPose_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_InverseKinematicsPose_Request_qx(msg_);
  }

private:
  ::inversekinematics_interfaces::srv::InverseKinematicsPose_Request msg_;
};

class Init_InverseKinematicsPose_Request_y
{
public:
  explicit Init_InverseKinematicsPose_Request_y(::inversekinematics_interfaces::srv::InverseKinematicsPose_Request & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsPose_Request_z y(::inversekinematics_interfaces::srv::InverseKinematicsPose_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_InverseKinematicsPose_Request_z(msg_);
  }

private:
  ::inversekinematics_interfaces::srv::InverseKinematicsPose_Request msg_;
};

class Init_InverseKinematicsPose_Request_x
{
public:
  Init_InverseKinematicsPose_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematicsPose_Request_y x(::inversekinematics_interfaces::srv::InverseKinematicsPose_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_InverseKinematicsPose_Request_y(msg_);
  }

private:
  ::inversekinematics_interfaces::srv::InverseKinematicsPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::inversekinematics_interfaces::srv::InverseKinematicsPose_Request>()
{
  return inversekinematics_interfaces::srv::builder::Init_InverseKinematicsPose_Request_x();
}

}  // namespace inversekinematics_interfaces


namespace inversekinematics_interfaces
{

namespace srv
{

namespace builder
{

class Init_InverseKinematicsPose_Response_gripper
{
public:
  explicit Init_InverseKinematicsPose_Response_gripper(::inversekinematics_interfaces::srv::InverseKinematicsPose_Response & msg)
  : msg_(msg)
  {}
  ::inversekinematics_interfaces::srv::InverseKinematicsPose_Response gripper(::inversekinematics_interfaces::srv::InverseKinematicsPose_Response::_gripper_type arg)
  {
    msg_.gripper = std::move(arg);
    return std::move(msg_);
  }

private:
  ::inversekinematics_interfaces::srv::InverseKinematicsPose_Response msg_;
};

class Init_InverseKinematicsPose_Response_joint4
{
public:
  explicit Init_InverseKinematicsPose_Response_joint4(::inversekinematics_interfaces::srv::InverseKinematicsPose_Response & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsPose_Response_gripper joint4(::inversekinematics_interfaces::srv::InverseKinematicsPose_Response::_joint4_type arg)
  {
    msg_.joint4 = std::move(arg);
    return Init_InverseKinematicsPose_Response_gripper(msg_);
  }

private:
  ::inversekinematics_interfaces::srv::InverseKinematicsPose_Response msg_;
};

class Init_InverseKinematicsPose_Response_joint3
{
public:
  explicit Init_InverseKinematicsPose_Response_joint3(::inversekinematics_interfaces::srv::InverseKinematicsPose_Response & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsPose_Response_joint4 joint3(::inversekinematics_interfaces::srv::InverseKinematicsPose_Response::_joint3_type arg)
  {
    msg_.joint3 = std::move(arg);
    return Init_InverseKinematicsPose_Response_joint4(msg_);
  }

private:
  ::inversekinematics_interfaces::srv::InverseKinematicsPose_Response msg_;
};

class Init_InverseKinematicsPose_Response_joint2
{
public:
  explicit Init_InverseKinematicsPose_Response_joint2(::inversekinematics_interfaces::srv::InverseKinematicsPose_Response & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsPose_Response_joint3 joint2(::inversekinematics_interfaces::srv::InverseKinematicsPose_Response::_joint2_type arg)
  {
    msg_.joint2 = std::move(arg);
    return Init_InverseKinematicsPose_Response_joint3(msg_);
  }

private:
  ::inversekinematics_interfaces::srv::InverseKinematicsPose_Response msg_;
};

class Init_InverseKinematicsPose_Response_joint1
{
public:
  Init_InverseKinematicsPose_Response_joint1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematicsPose_Response_joint2 joint1(::inversekinematics_interfaces::srv::InverseKinematicsPose_Response::_joint1_type arg)
  {
    msg_.joint1 = std::move(arg);
    return Init_InverseKinematicsPose_Response_joint2(msg_);
  }

private:
  ::inversekinematics_interfaces::srv::InverseKinematicsPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::inversekinematics_interfaces::srv::InverseKinematicsPose_Response>()
{
  return inversekinematics_interfaces::srv::builder::Init_InverseKinematicsPose_Response_joint1();
}

}  // namespace inversekinematics_interfaces

#endif  // INVERSEKINEMATICS_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS_POSE__BUILDER_HPP_
