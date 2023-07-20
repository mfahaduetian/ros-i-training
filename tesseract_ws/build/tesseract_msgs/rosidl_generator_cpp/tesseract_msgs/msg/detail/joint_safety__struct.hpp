// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/JointSafety.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT_SAFETY__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT_SAFETY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__JointSafety __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__JointSafety __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointSafety_
{
  using Type = JointSafety_<ContainerAllocator>;

  explicit JointSafety_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->soft_upper_limit = 0.0;
      this->soft_lower_limit = 0.0;
      this->k_position = 0.0;
      this->k_velocity = 0.0;
      this->empty = false;
    }
  }

  explicit JointSafety_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->soft_upper_limit = 0.0;
      this->soft_lower_limit = 0.0;
      this->k_position = 0.0;
      this->k_velocity = 0.0;
      this->empty = false;
    }
  }

  // field types and members
  using _soft_upper_limit_type =
    double;
  _soft_upper_limit_type soft_upper_limit;
  using _soft_lower_limit_type =
    double;
  _soft_lower_limit_type soft_lower_limit;
  using _k_position_type =
    double;
  _k_position_type k_position;
  using _k_velocity_type =
    double;
  _k_velocity_type k_velocity;
  using _empty_type =
    bool;
  _empty_type empty;

  // setters for named parameter idiom
  Type & set__soft_upper_limit(
    const double & _arg)
  {
    this->soft_upper_limit = _arg;
    return *this;
  }
  Type & set__soft_lower_limit(
    const double & _arg)
  {
    this->soft_lower_limit = _arg;
    return *this;
  }
  Type & set__k_position(
    const double & _arg)
  {
    this->k_position = _arg;
    return *this;
  }
  Type & set__k_velocity(
    const double & _arg)
  {
    this->k_velocity = _arg;
    return *this;
  }
  Type & set__empty(
    const bool & _arg)
  {
    this->empty = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::JointSafety_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::JointSafety_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::JointSafety_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::JointSafety_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::JointSafety_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::JointSafety_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::JointSafety_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::JointSafety_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::JointSafety_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::JointSafety_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__JointSafety
    std::shared_ptr<tesseract_msgs::msg::JointSafety_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__JointSafety
    std::shared_ptr<tesseract_msgs::msg::JointSafety_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointSafety_ & other) const
  {
    if (this->soft_upper_limit != other.soft_upper_limit) {
      return false;
    }
    if (this->soft_lower_limit != other.soft_lower_limit) {
      return false;
    }
    if (this->k_position != other.k_position) {
      return false;
    }
    if (this->k_velocity != other.k_velocity) {
      return false;
    }
    if (this->empty != other.empty) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointSafety_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointSafety_

// alias to use template instance with default allocator
using JointSafety =
  tesseract_msgs::msg::JointSafety_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT_SAFETY__STRUCT_HPP_
