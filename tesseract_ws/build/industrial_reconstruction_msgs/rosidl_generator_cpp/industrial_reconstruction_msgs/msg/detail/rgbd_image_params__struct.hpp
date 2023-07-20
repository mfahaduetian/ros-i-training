// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from industrial_reconstruction_msgs:msg/RGBDImageParams.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__RGBD_IMAGE_PARAMS__STRUCT_HPP_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__RGBD_IMAGE_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__industrial_reconstruction_msgs__msg__RGBDImageParams __attribute__((deprecated))
#else
# define DEPRECATED__industrial_reconstruction_msgs__msg__RGBDImageParams __declspec(deprecated)
#endif

namespace industrial_reconstruction_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RGBDImageParams_
{
  using Type = RGBDImageParams_<ContainerAllocator>;

  explicit RGBDImageParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->depth_scale = 0.0f;
      this->depth_trunc = 0.0f;
      this->convert_rgb_to_intensity = false;
    }
  }

  explicit RGBDImageParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->depth_scale = 0.0f;
      this->depth_trunc = 0.0f;
      this->convert_rgb_to_intensity = false;
    }
  }

  // field types and members
  using _depth_scale_type =
    float;
  _depth_scale_type depth_scale;
  using _depth_trunc_type =
    float;
  _depth_trunc_type depth_trunc;
  using _convert_rgb_to_intensity_type =
    bool;
  _convert_rgb_to_intensity_type convert_rgb_to_intensity;

  // setters for named parameter idiom
  Type & set__depth_scale(
    const float & _arg)
  {
    this->depth_scale = _arg;
    return *this;
  }
  Type & set__depth_trunc(
    const float & _arg)
  {
    this->depth_trunc = _arg;
    return *this;
  }
  Type & set__convert_rgb_to_intensity(
    const bool & _arg)
  {
    this->convert_rgb_to_intensity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    industrial_reconstruction_msgs::msg::RGBDImageParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const industrial_reconstruction_msgs::msg::RGBDImageParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<industrial_reconstruction_msgs::msg::RGBDImageParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<industrial_reconstruction_msgs::msg::RGBDImageParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      industrial_reconstruction_msgs::msg::RGBDImageParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<industrial_reconstruction_msgs::msg::RGBDImageParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      industrial_reconstruction_msgs::msg::RGBDImageParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<industrial_reconstruction_msgs::msg::RGBDImageParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<industrial_reconstruction_msgs::msg::RGBDImageParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<industrial_reconstruction_msgs::msg::RGBDImageParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__industrial_reconstruction_msgs__msg__RGBDImageParams
    std::shared_ptr<industrial_reconstruction_msgs::msg::RGBDImageParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__industrial_reconstruction_msgs__msg__RGBDImageParams
    std::shared_ptr<industrial_reconstruction_msgs::msg::RGBDImageParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RGBDImageParams_ & other) const
  {
    if (this->depth_scale != other.depth_scale) {
      return false;
    }
    if (this->depth_trunc != other.depth_trunc) {
      return false;
    }
    if (this->convert_rgb_to_intensity != other.convert_rgb_to_intensity) {
      return false;
    }
    return true;
  }
  bool operator!=(const RGBDImageParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RGBDImageParams_

// alias to use template instance with default allocator
using RGBDImageParams =
  industrial_reconstruction_msgs::msg::RGBDImageParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace industrial_reconstruction_msgs

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__RGBD_IMAGE_PARAMS__STRUCT_HPP_
