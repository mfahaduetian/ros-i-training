// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/JointCalibration.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT_CALIBRATION__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT_CALIBRATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__JointCalibration __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__JointCalibration __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointCalibration_
{
  using Type = JointCalibration_<ContainerAllocator>;

  explicit JointCalibration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reference_position = 0.0;
      this->rising = 0.0;
      this->falling = 0.0;
      this->empty = false;
    }
  }

  explicit JointCalibration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reference_position = 0.0;
      this->rising = 0.0;
      this->falling = 0.0;
      this->empty = false;
    }
  }

  // field types and members
  using _reference_position_type =
    double;
  _reference_position_type reference_position;
  using _rising_type =
    double;
  _rising_type rising;
  using _falling_type =
    double;
  _falling_type falling;
  using _empty_type =
    bool;
  _empty_type empty;

  // setters for named parameter idiom
  Type & set__reference_position(
    const double & _arg)
  {
    this->reference_position = _arg;
    return *this;
  }
  Type & set__rising(
    const double & _arg)
  {
    this->rising = _arg;
    return *this;
  }
  Type & set__falling(
    const double & _arg)
  {
    this->falling = _arg;
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
    tesseract_msgs::msg::JointCalibration_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::JointCalibration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::JointCalibration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::JointCalibration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::JointCalibration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::JointCalibration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::JointCalibration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::JointCalibration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::JointCalibration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::JointCalibration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__JointCalibration
    std::shared_ptr<tesseract_msgs::msg::JointCalibration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__JointCalibration
    std::shared_ptr<tesseract_msgs::msg::JointCalibration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointCalibration_ & other) const
  {
    if (this->reference_position != other.reference_position) {
      return false;
    }
    if (this->rising != other.rising) {
      return false;
    }
    if (this->falling != other.falling) {
      return false;
    }
    if (this->empty != other.empty) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointCalibration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointCalibration_

// alias to use template instance with default allocator
using JointCalibration =
  tesseract_msgs::msg::JointCalibration_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT_CALIBRATION__STRUCT_HPP_
