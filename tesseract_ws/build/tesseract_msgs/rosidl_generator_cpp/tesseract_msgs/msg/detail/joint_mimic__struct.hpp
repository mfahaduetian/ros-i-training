// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/JointMimic.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT_MIMIC__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT_MIMIC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__JointMimic __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__JointMimic __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointMimic_
{
  using Type = JointMimic_<ContainerAllocator>;

  explicit JointMimic_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0.0;
      this->multiplier = 0.0;
      this->joint_name = "";
      this->empty = false;
    }
  }

  explicit JointMimic_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0.0;
      this->multiplier = 0.0;
      this->joint_name = "";
      this->empty = false;
    }
  }

  // field types and members
  using _offset_type =
    double;
  _offset_type offset;
  using _multiplier_type =
    double;
  _multiplier_type multiplier;
  using _joint_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _joint_name_type joint_name;
  using _empty_type =
    bool;
  _empty_type empty;

  // setters for named parameter idiom
  Type & set__offset(
    const double & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__multiplier(
    const double & _arg)
  {
    this->multiplier = _arg;
    return *this;
  }
  Type & set__joint_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->joint_name = _arg;
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
    tesseract_msgs::msg::JointMimic_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::JointMimic_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::JointMimic_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::JointMimic_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::JointMimic_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::JointMimic_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::JointMimic_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::JointMimic_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::JointMimic_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::JointMimic_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__JointMimic
    std::shared_ptr<tesseract_msgs::msg::JointMimic_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__JointMimic
    std::shared_ptr<tesseract_msgs::msg::JointMimic_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointMimic_ & other) const
  {
    if (this->offset != other.offset) {
      return false;
    }
    if (this->multiplier != other.multiplier) {
      return false;
    }
    if (this->joint_name != other.joint_name) {
      return false;
    }
    if (this->empty != other.empty) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointMimic_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointMimic_

// alias to use template instance with default allocator
using JointMimic =
  tesseract_msgs::msg::JointMimic_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT_MIMIC__STRUCT_HPP_
