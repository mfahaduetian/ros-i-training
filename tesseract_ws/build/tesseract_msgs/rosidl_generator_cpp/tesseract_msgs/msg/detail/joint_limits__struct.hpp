// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/JointLimits.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT_LIMITS__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT_LIMITS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__JointLimits __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__JointLimits __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointLimits_
{
  using Type = JointLimits_<ContainerAllocator>;

  explicit JointLimits_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lower = 0.0;
      this->upper = 0.0;
      this->effort = 0.0;
      this->velocity = 0.0;
      this->acceleration = 0.0;
      this->empty = false;
    }
  }

  explicit JointLimits_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lower = 0.0;
      this->upper = 0.0;
      this->effort = 0.0;
      this->velocity = 0.0;
      this->acceleration = 0.0;
      this->empty = false;
    }
  }

  // field types and members
  using _lower_type =
    double;
  _lower_type lower;
  using _upper_type =
    double;
  _upper_type upper;
  using _effort_type =
    double;
  _effort_type effort;
  using _velocity_type =
    double;
  _velocity_type velocity;
  using _acceleration_type =
    double;
  _acceleration_type acceleration;
  using _empty_type =
    bool;
  _empty_type empty;

  // setters for named parameter idiom
  Type & set__lower(
    const double & _arg)
  {
    this->lower = _arg;
    return *this;
  }
  Type & set__upper(
    const double & _arg)
  {
    this->upper = _arg;
    return *this;
  }
  Type & set__effort(
    const double & _arg)
  {
    this->effort = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const double & _arg)
  {
    this->acceleration = _arg;
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
    tesseract_msgs::msg::JointLimits_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::JointLimits_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::JointLimits_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::JointLimits_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::JointLimits_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::JointLimits_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::JointLimits_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::JointLimits_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::JointLimits_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::JointLimits_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__JointLimits
    std::shared_ptr<tesseract_msgs::msg::JointLimits_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__JointLimits
    std::shared_ptr<tesseract_msgs::msg::JointLimits_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointLimits_ & other) const
  {
    if (this->lower != other.lower) {
      return false;
    }
    if (this->upper != other.upper) {
      return false;
    }
    if (this->effort != other.effort) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->empty != other.empty) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointLimits_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointLimits_

// alias to use template instance with default allocator
using JointLimits =
  tesseract_msgs::msg::JointLimits_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT_LIMITS__STRUCT_HPP_
