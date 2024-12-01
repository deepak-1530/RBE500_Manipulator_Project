// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from velocity_kinematics_interfaces:srv/JointToEffector.idl
// generated code does not contain a copyright notice

#ifndef VELOCITY_KINEMATICS_INTERFACES__SRV__DETAIL__JOINT_TO_EFFECTOR__STRUCT_HPP_
#define VELOCITY_KINEMATICS_INTERFACES__SRV__DETAIL__JOINT_TO_EFFECTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__velocity_kinematics_interfaces__srv__JointToEffector_Request __attribute__((deprecated))
#else
# define DEPRECATED__velocity_kinematics_interfaces__srv__JointToEffector_Request __declspec(deprecated)
#endif

namespace velocity_kinematics_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct JointToEffector_Request_
{
  using Type = JointToEffector_Request_<ContainerAllocator>;

  explicit JointToEffector_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_vel1 = 0.0f;
      this->joint_vel2 = 0.0f;
      this->joint_vel3 = 0.0f;
      this->joint_vel4 = 0.0f;
    }
  }

  explicit JointToEffector_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_vel1 = 0.0f;
      this->joint_vel2 = 0.0f;
      this->joint_vel3 = 0.0f;
      this->joint_vel4 = 0.0f;
    }
  }

  // field types and members
  using _joint_vel1_type =
    float;
  _joint_vel1_type joint_vel1;
  using _joint_vel2_type =
    float;
  _joint_vel2_type joint_vel2;
  using _joint_vel3_type =
    float;
  _joint_vel3_type joint_vel3;
  using _joint_vel4_type =
    float;
  _joint_vel4_type joint_vel4;

  // setters for named parameter idiom
  Type & set__joint_vel1(
    const float & _arg)
  {
    this->joint_vel1 = _arg;
    return *this;
  }
  Type & set__joint_vel2(
    const float & _arg)
  {
    this->joint_vel2 = _arg;
    return *this;
  }
  Type & set__joint_vel3(
    const float & _arg)
  {
    this->joint_vel3 = _arg;
    return *this;
  }
  Type & set__joint_vel4(
    const float & _arg)
  {
    this->joint_vel4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    velocity_kinematics_interfaces::srv::JointToEffector_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const velocity_kinematics_interfaces::srv::JointToEffector_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<velocity_kinematics_interfaces::srv::JointToEffector_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<velocity_kinematics_interfaces::srv::JointToEffector_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      velocity_kinematics_interfaces::srv::JointToEffector_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<velocity_kinematics_interfaces::srv::JointToEffector_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      velocity_kinematics_interfaces::srv::JointToEffector_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<velocity_kinematics_interfaces::srv::JointToEffector_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<velocity_kinematics_interfaces::srv::JointToEffector_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<velocity_kinematics_interfaces::srv::JointToEffector_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__velocity_kinematics_interfaces__srv__JointToEffector_Request
    std::shared_ptr<velocity_kinematics_interfaces::srv::JointToEffector_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__velocity_kinematics_interfaces__srv__JointToEffector_Request
    std::shared_ptr<velocity_kinematics_interfaces::srv::JointToEffector_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointToEffector_Request_ & other) const
  {
    if (this->joint_vel1 != other.joint_vel1) {
      return false;
    }
    if (this->joint_vel2 != other.joint_vel2) {
      return false;
    }
    if (this->joint_vel3 != other.joint_vel3) {
      return false;
    }
    if (this->joint_vel4 != other.joint_vel4) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointToEffector_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointToEffector_Request_

// alias to use template instance with default allocator
using JointToEffector_Request =
  velocity_kinematics_interfaces::srv::JointToEffector_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace velocity_kinematics_interfaces


#ifndef _WIN32
# define DEPRECATED__velocity_kinematics_interfaces__srv__JointToEffector_Response __attribute__((deprecated))
#else
# define DEPRECATED__velocity_kinematics_interfaces__srv__JointToEffector_Response __declspec(deprecated)
#endif

namespace velocity_kinematics_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct JointToEffector_Response_
{
  using Type = JointToEffector_Response_<ContainerAllocator>;

  explicit JointToEffector_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->vz = 0.0f;
      this->wx = 0.0f;
      this->wy = 0.0f;
      this->wz = 0.0f;
    }
  }

  explicit JointToEffector_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->vz = 0.0f;
      this->wx = 0.0f;
      this->wy = 0.0f;
      this->wz = 0.0f;
    }
  }

  // field types and members
  using _vx_type =
    float;
  _vx_type vx;
  using _vy_type =
    float;
  _vy_type vy;
  using _vz_type =
    float;
  _vz_type vz;
  using _wx_type =
    float;
  _wx_type wx;
  using _wy_type =
    float;
  _wy_type wy;
  using _wz_type =
    float;
  _wz_type wz;

  // setters for named parameter idiom
  Type & set__vx(
    const float & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const float & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__vz(
    const float & _arg)
  {
    this->vz = _arg;
    return *this;
  }
  Type & set__wx(
    const float & _arg)
  {
    this->wx = _arg;
    return *this;
  }
  Type & set__wy(
    const float & _arg)
  {
    this->wy = _arg;
    return *this;
  }
  Type & set__wz(
    const float & _arg)
  {
    this->wz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    velocity_kinematics_interfaces::srv::JointToEffector_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const velocity_kinematics_interfaces::srv::JointToEffector_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<velocity_kinematics_interfaces::srv::JointToEffector_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<velocity_kinematics_interfaces::srv::JointToEffector_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      velocity_kinematics_interfaces::srv::JointToEffector_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<velocity_kinematics_interfaces::srv::JointToEffector_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      velocity_kinematics_interfaces::srv::JointToEffector_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<velocity_kinematics_interfaces::srv::JointToEffector_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<velocity_kinematics_interfaces::srv::JointToEffector_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<velocity_kinematics_interfaces::srv::JointToEffector_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__velocity_kinematics_interfaces__srv__JointToEffector_Response
    std::shared_ptr<velocity_kinematics_interfaces::srv::JointToEffector_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__velocity_kinematics_interfaces__srv__JointToEffector_Response
    std::shared_ptr<velocity_kinematics_interfaces::srv::JointToEffector_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointToEffector_Response_ & other) const
  {
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->vz != other.vz) {
      return false;
    }
    if (this->wx != other.wx) {
      return false;
    }
    if (this->wy != other.wy) {
      return false;
    }
    if (this->wz != other.wz) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointToEffector_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointToEffector_Response_

// alias to use template instance with default allocator
using JointToEffector_Response =
  velocity_kinematics_interfaces::srv::JointToEffector_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace velocity_kinematics_interfaces

namespace velocity_kinematics_interfaces
{

namespace srv
{

struct JointToEffector
{
  using Request = velocity_kinematics_interfaces::srv::JointToEffector_Request;
  using Response = velocity_kinematics_interfaces::srv::JointToEffector_Response;
};

}  // namespace srv

}  // namespace velocity_kinematics_interfaces

#endif  // VELOCITY_KINEMATICS_INTERFACES__SRV__DETAIL__JOINT_TO_EFFECTOR__STRUCT_HPP_
