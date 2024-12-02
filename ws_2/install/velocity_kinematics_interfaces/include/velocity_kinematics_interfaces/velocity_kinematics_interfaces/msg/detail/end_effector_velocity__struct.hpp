// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from velocity_kinematics_interfaces:msg/EndEffectorVelocity.idl
// generated code does not contain a copyright notice

#ifndef VELOCITY_KINEMATICS_INTERFACES__MSG__DETAIL__END_EFFECTOR_VELOCITY__STRUCT_HPP_
#define VELOCITY_KINEMATICS_INTERFACES__MSG__DETAIL__END_EFFECTOR_VELOCITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__velocity_kinematics_interfaces__msg__EndEffectorVelocity __attribute__((deprecated))
#else
# define DEPRECATED__velocity_kinematics_interfaces__msg__EndEffectorVelocity __declspec(deprecated)
#endif

namespace velocity_kinematics_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EndEffectorVelocity_
{
  using Type = EndEffectorVelocity_<ContainerAllocator>;

  explicit EndEffectorVelocity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  explicit EndEffectorVelocity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    velocity_kinematics_interfaces::msg::EndEffectorVelocity_<ContainerAllocator> *;
  using ConstRawPtr =
    const velocity_kinematics_interfaces::msg::EndEffectorVelocity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<velocity_kinematics_interfaces::msg::EndEffectorVelocity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<velocity_kinematics_interfaces::msg::EndEffectorVelocity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      velocity_kinematics_interfaces::msg::EndEffectorVelocity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<velocity_kinematics_interfaces::msg::EndEffectorVelocity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      velocity_kinematics_interfaces::msg::EndEffectorVelocity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<velocity_kinematics_interfaces::msg::EndEffectorVelocity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<velocity_kinematics_interfaces::msg::EndEffectorVelocity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<velocity_kinematics_interfaces::msg::EndEffectorVelocity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__velocity_kinematics_interfaces__msg__EndEffectorVelocity
    std::shared_ptr<velocity_kinematics_interfaces::msg::EndEffectorVelocity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__velocity_kinematics_interfaces__msg__EndEffectorVelocity
    std::shared_ptr<velocity_kinematics_interfaces::msg::EndEffectorVelocity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EndEffectorVelocity_ & other) const
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
  bool operator!=(const EndEffectorVelocity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EndEffectorVelocity_

// alias to use template instance with default allocator
using EndEffectorVelocity =
  velocity_kinematics_interfaces::msg::EndEffectorVelocity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace velocity_kinematics_interfaces

#endif  // VELOCITY_KINEMATICS_INTERFACES__MSG__DETAIL__END_EFFECTOR_VELOCITY__STRUCT_HPP_
