// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from industrial_reconstruction_msgs:msg/NormalFilterParams.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__NORMAL_FILTER_PARAMS__STRUCT_HPP_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__NORMAL_FILTER_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'normal_direction'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__industrial_reconstruction_msgs__msg__NormalFilterParams __attribute__((deprecated))
#else
# define DEPRECATED__industrial_reconstruction_msgs__msg__NormalFilterParams __declspec(deprecated)
#endif

namespace industrial_reconstruction_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NormalFilterParams_
{
  using Type = NormalFilterParams_<ContainerAllocator>;

  explicit NormalFilterParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : normal_direction(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0f;
    }
  }

  explicit NormalFilterParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : normal_direction(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0f;
    }
  }

  // field types and members
  using _normal_direction_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _normal_direction_type normal_direction;
  using _angle_type =
    float;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__normal_direction(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->normal_direction = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    industrial_reconstruction_msgs::msg::NormalFilterParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const industrial_reconstruction_msgs::msg::NormalFilterParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<industrial_reconstruction_msgs::msg::NormalFilterParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<industrial_reconstruction_msgs::msg::NormalFilterParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      industrial_reconstruction_msgs::msg::NormalFilterParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<industrial_reconstruction_msgs::msg::NormalFilterParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      industrial_reconstruction_msgs::msg::NormalFilterParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<industrial_reconstruction_msgs::msg::NormalFilterParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<industrial_reconstruction_msgs::msg::NormalFilterParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<industrial_reconstruction_msgs::msg::NormalFilterParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__industrial_reconstruction_msgs__msg__NormalFilterParams
    std::shared_ptr<industrial_reconstruction_msgs::msg::NormalFilterParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__industrial_reconstruction_msgs__msg__NormalFilterParams
    std::shared_ptr<industrial_reconstruction_msgs::msg::NormalFilterParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NormalFilterParams_ & other) const
  {
    if (this->normal_direction != other.normal_direction) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const NormalFilterParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NormalFilterParams_

// alias to use template instance with default allocator
using NormalFilterParams =
  industrial_reconstruction_msgs::msg::NormalFilterParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace industrial_reconstruction_msgs

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__NORMAL_FILTER_PARAMS__STRUCT_HPP_
