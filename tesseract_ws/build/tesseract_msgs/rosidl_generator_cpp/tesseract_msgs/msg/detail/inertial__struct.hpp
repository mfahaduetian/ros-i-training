// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/Inertial.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__INERTIAL__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__INERTIAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'origin'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__Inertial __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__Inertial __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Inertial_
{
  using Type = Inertial_<ContainerAllocator>;

  explicit Inertial_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : origin(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mass = 0.0;
      this->ixx = 0.0;
      this->ixy = 0.0;
      this->ixz = 0.0;
      this->iyy = 0.0;
      this->iyz = 0.0;
      this->izz = 0.0;
      this->empty = false;
    }
  }

  explicit Inertial_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : origin(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mass = 0.0;
      this->ixx = 0.0;
      this->ixy = 0.0;
      this->ixz = 0.0;
      this->iyy = 0.0;
      this->iyz = 0.0;
      this->izz = 0.0;
      this->empty = false;
    }
  }

  // field types and members
  using _origin_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _origin_type origin;
  using _mass_type =
    double;
  _mass_type mass;
  using _ixx_type =
    double;
  _ixx_type ixx;
  using _ixy_type =
    double;
  _ixy_type ixy;
  using _ixz_type =
    double;
  _ixz_type ixz;
  using _iyy_type =
    double;
  _iyy_type iyy;
  using _iyz_type =
    double;
  _iyz_type iyz;
  using _izz_type =
    double;
  _izz_type izz;
  using _empty_type =
    bool;
  _empty_type empty;

  // setters for named parameter idiom
  Type & set__origin(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->origin = _arg;
    return *this;
  }
  Type & set__mass(
    const double & _arg)
  {
    this->mass = _arg;
    return *this;
  }
  Type & set__ixx(
    const double & _arg)
  {
    this->ixx = _arg;
    return *this;
  }
  Type & set__ixy(
    const double & _arg)
  {
    this->ixy = _arg;
    return *this;
  }
  Type & set__ixz(
    const double & _arg)
  {
    this->ixz = _arg;
    return *this;
  }
  Type & set__iyy(
    const double & _arg)
  {
    this->iyy = _arg;
    return *this;
  }
  Type & set__iyz(
    const double & _arg)
  {
    this->iyz = _arg;
    return *this;
  }
  Type & set__izz(
    const double & _arg)
  {
    this->izz = _arg;
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
    tesseract_msgs::msg::Inertial_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::Inertial_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::Inertial_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::Inertial_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::Inertial_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::Inertial_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::Inertial_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::Inertial_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::Inertial_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::Inertial_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__Inertial
    std::shared_ptr<tesseract_msgs::msg::Inertial_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__Inertial
    std::shared_ptr<tesseract_msgs::msg::Inertial_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Inertial_ & other) const
  {
    if (this->origin != other.origin) {
      return false;
    }
    if (this->mass != other.mass) {
      return false;
    }
    if (this->ixx != other.ixx) {
      return false;
    }
    if (this->ixy != other.ixy) {
      return false;
    }
    if (this->ixz != other.ixz) {
      return false;
    }
    if (this->iyy != other.iyy) {
      return false;
    }
    if (this->iyz != other.iyz) {
      return false;
    }
    if (this->izz != other.izz) {
      return false;
    }
    if (this->empty != other.empty) {
      return false;
    }
    return true;
  }
  bool operator!=(const Inertial_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Inertial_

// alias to use template instance with default allocator
using Inertial =
  tesseract_msgs::msg::Inertial_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__INERTIAL__STRUCT_HPP_
