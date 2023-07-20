// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from industrial_reconstruction_msgs:msg/TSDFVolumeParams.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__TSDF_VOLUME_PARAMS__STRUCT_HPP_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__TSDF_VOLUME_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'min_box_values'
// Member 'max_box_values'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__industrial_reconstruction_msgs__msg__TSDFVolumeParams __attribute__((deprecated))
#else
# define DEPRECATED__industrial_reconstruction_msgs__msg__TSDFVolumeParams __declspec(deprecated)
#endif

namespace industrial_reconstruction_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TSDFVolumeParams_
{
  using Type = TSDFVolumeParams_<ContainerAllocator>;

  explicit TSDFVolumeParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : min_box_values(_init),
    max_box_values(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->voxel_length = 0.0f;
      this->sdf_trunc = 0.0f;
    }
  }

  explicit TSDFVolumeParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : min_box_values(_alloc, _init),
    max_box_values(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->voxel_length = 0.0f;
      this->sdf_trunc = 0.0f;
    }
  }

  // field types and members
  using _voxel_length_type =
    float;
  _voxel_length_type voxel_length;
  using _sdf_trunc_type =
    float;
  _sdf_trunc_type sdf_trunc;
  using _min_box_values_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _min_box_values_type min_box_values;
  using _max_box_values_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _max_box_values_type max_box_values;

  // setters for named parameter idiom
  Type & set__voxel_length(
    const float & _arg)
  {
    this->voxel_length = _arg;
    return *this;
  }
  Type & set__sdf_trunc(
    const float & _arg)
  {
    this->sdf_trunc = _arg;
    return *this;
  }
  Type & set__min_box_values(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->min_box_values = _arg;
    return *this;
  }
  Type & set__max_box_values(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->max_box_values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    industrial_reconstruction_msgs::msg::TSDFVolumeParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const industrial_reconstruction_msgs::msg::TSDFVolumeParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<industrial_reconstruction_msgs::msg::TSDFVolumeParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<industrial_reconstruction_msgs::msg::TSDFVolumeParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      industrial_reconstruction_msgs::msg::TSDFVolumeParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<industrial_reconstruction_msgs::msg::TSDFVolumeParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      industrial_reconstruction_msgs::msg::TSDFVolumeParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<industrial_reconstruction_msgs::msg::TSDFVolumeParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<industrial_reconstruction_msgs::msg::TSDFVolumeParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<industrial_reconstruction_msgs::msg::TSDFVolumeParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__industrial_reconstruction_msgs__msg__TSDFVolumeParams
    std::shared_ptr<industrial_reconstruction_msgs::msg::TSDFVolumeParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__industrial_reconstruction_msgs__msg__TSDFVolumeParams
    std::shared_ptr<industrial_reconstruction_msgs::msg::TSDFVolumeParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TSDFVolumeParams_ & other) const
  {
    if (this->voxel_length != other.voxel_length) {
      return false;
    }
    if (this->sdf_trunc != other.sdf_trunc) {
      return false;
    }
    if (this->min_box_values != other.min_box_values) {
      return false;
    }
    if (this->max_box_values != other.max_box_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const TSDFVolumeParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TSDFVolumeParams_

// alias to use template instance with default allocator
using TSDFVolumeParams =
  industrial_reconstruction_msgs::msg::TSDFVolumeParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace industrial_reconstruction_msgs

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__TSDF_VOLUME_PARAMS__STRUCT_HPP_
