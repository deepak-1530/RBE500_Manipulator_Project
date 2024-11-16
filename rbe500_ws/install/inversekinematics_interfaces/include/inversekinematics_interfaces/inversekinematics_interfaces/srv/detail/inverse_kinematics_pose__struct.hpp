// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from inversekinematics_interfaces:srv/InverseKinematicsPose.idl
// generated code does not contain a copyright notice

#ifndef INVERSEKINEMATICS_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS_POSE__STRUCT_HPP_
#define INVERSEKINEMATICS_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__inversekinematics_interfaces__srv__InverseKinematicsPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__inversekinematics_interfaces__srv__InverseKinematicsPose_Request __declspec(deprecated)
#endif

namespace inversekinematics_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InverseKinematicsPose_Request_
{
  using Type = InverseKinematicsPose_Request_<ContainerAllocator>;

  explicit InverseKinematicsPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->qx = 0.0;
      this->qy = 0.0;
      this->qz = 0.0;
      this->qw = 0.0;
    }
  }

  explicit InverseKinematicsPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->qx = 0.0;
      this->qy = 0.0;
      this->qz = 0.0;
      this->qw = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _qx_type =
    double;
  _qx_type qx;
  using _qy_type =
    double;
  _qy_type qy;
  using _qz_type =
    double;
  _qz_type qz;
  using _qw_type =
    double;
  _qw_type qw;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__qx(
    const double & _arg)
  {
    this->qx = _arg;
    return *this;
  }
  Type & set__qy(
    const double & _arg)
  {
    this->qy = _arg;
    return *this;
  }
  Type & set__qz(
    const double & _arg)
  {
    this->qz = _arg;
    return *this;
  }
  Type & set__qw(
    const double & _arg)
  {
    this->qw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    inversekinematics_interfaces::srv::InverseKinematicsPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const inversekinematics_interfaces::srv::InverseKinematicsPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<inversekinematics_interfaces::srv::InverseKinematicsPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<inversekinematics_interfaces::srv::InverseKinematicsPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      inversekinematics_interfaces::srv::InverseKinematicsPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<inversekinematics_interfaces::srv::InverseKinematicsPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      inversekinematics_interfaces::srv::InverseKinematicsPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<inversekinematics_interfaces::srv::InverseKinematicsPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<inversekinematics_interfaces::srv::InverseKinematicsPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<inversekinematics_interfaces::srv::InverseKinematicsPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__inversekinematics_interfaces__srv__InverseKinematicsPose_Request
    std::shared_ptr<inversekinematics_interfaces::srv::InverseKinematicsPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__inversekinematics_interfaces__srv__InverseKinematicsPose_Request
    std::shared_ptr<inversekinematics_interfaces::srv::InverseKinematicsPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InverseKinematicsPose_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->qx != other.qx) {
      return false;
    }
    if (this->qy != other.qy) {
      return false;
    }
    if (this->qz != other.qz) {
      return false;
    }
    if (this->qw != other.qw) {
      return false;
    }
    return true;
  }
  bool operator!=(const InverseKinematicsPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InverseKinematicsPose_Request_

// alias to use template instance with default allocator
using InverseKinematicsPose_Request =
  inversekinematics_interfaces::srv::InverseKinematicsPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace inversekinematics_interfaces


#ifndef _WIN32
# define DEPRECATED__inversekinematics_interfaces__srv__InverseKinematicsPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__inversekinematics_interfaces__srv__InverseKinematicsPose_Response __declspec(deprecated)
#endif

namespace inversekinematics_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InverseKinematicsPose_Response_
{
  using Type = InverseKinematicsPose_Response_<ContainerAllocator>;

  explicit InverseKinematicsPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint1 = 0.0;
      this->joint2 = 0.0;
      this->joint3 = 0.0;
      this->joint4 = 0.0;
      this->gripper = 0.0;
    }
  }

  explicit InverseKinematicsPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint1 = 0.0;
      this->joint2 = 0.0;
      this->joint3 = 0.0;
      this->joint4 = 0.0;
      this->gripper = 0.0;
    }
  }

  // field types and members
  using _joint1_type =
    double;
  _joint1_type joint1;
  using _joint2_type =
    double;
  _joint2_type joint2;
  using _joint3_type =
    double;
  _joint3_type joint3;
  using _joint4_type =
    double;
  _joint4_type joint4;
  using _gripper_type =
    double;
  _gripper_type gripper;

  // setters for named parameter idiom
  Type & set__joint1(
    const double & _arg)
  {
    this->joint1 = _arg;
    return *this;
  }
  Type & set__joint2(
    const double & _arg)
  {
    this->joint2 = _arg;
    return *this;
  }
  Type & set__joint3(
    const double & _arg)
  {
    this->joint3 = _arg;
    return *this;
  }
  Type & set__joint4(
    const double & _arg)
  {
    this->joint4 = _arg;
    return *this;
  }
  Type & set__gripper(
    const double & _arg)
  {
    this->gripper = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    inversekinematics_interfaces::srv::InverseKinematicsPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const inversekinematics_interfaces::srv::InverseKinematicsPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<inversekinematics_interfaces::srv::InverseKinematicsPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<inversekinematics_interfaces::srv::InverseKinematicsPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      inversekinematics_interfaces::srv::InverseKinematicsPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<inversekinematics_interfaces::srv::InverseKinematicsPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      inversekinematics_interfaces::srv::InverseKinematicsPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<inversekinematics_interfaces::srv::InverseKinematicsPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<inversekinematics_interfaces::srv::InverseKinematicsPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<inversekinematics_interfaces::srv::InverseKinematicsPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__inversekinematics_interfaces__srv__InverseKinematicsPose_Response
    std::shared_ptr<inversekinematics_interfaces::srv::InverseKinematicsPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__inversekinematics_interfaces__srv__InverseKinematicsPose_Response
    std::shared_ptr<inversekinematics_interfaces::srv::InverseKinematicsPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InverseKinematicsPose_Response_ & other) const
  {
    if (this->joint1 != other.joint1) {
      return false;
    }
    if (this->joint2 != other.joint2) {
      return false;
    }
    if (this->joint3 != other.joint3) {
      return false;
    }
    if (this->joint4 != other.joint4) {
      return false;
    }
    if (this->gripper != other.gripper) {
      return false;
    }
    return true;
  }
  bool operator!=(const InverseKinematicsPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InverseKinematicsPose_Response_

// alias to use template instance with default allocator
using InverseKinematicsPose_Response =
  inversekinematics_interfaces::srv::InverseKinematicsPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace inversekinematics_interfaces

namespace inversekinematics_interfaces
{

namespace srv
{

struct InverseKinematicsPose
{
  using Request = inversekinematics_interfaces::srv::InverseKinematicsPose_Request;
  using Response = inversekinematics_interfaces::srv::InverseKinematicsPose_Response;
};

}  // namespace srv

}  // namespace inversekinematics_interfaces

#endif  // INVERSEKINEMATICS_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS_POSE__STRUCT_HPP_
