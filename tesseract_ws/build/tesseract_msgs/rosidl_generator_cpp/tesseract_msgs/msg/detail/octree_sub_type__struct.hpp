// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/OctreeSubType.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__OCTREE_SUB_TYPE__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__OCTREE_SUB_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__OctreeSubType __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__OctreeSubType __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OctreeSubType_
{
  using Type = OctreeSubType_<ContainerAllocator>;

  explicit OctreeSubType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  explicit OctreeSubType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BOX =
    0u;
  static constexpr uint8_t SPHERE_INSIDE =
    1u;
  static constexpr uint8_t SPHERE_OUTSIDE =
    2u;

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::OctreeSubType_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::OctreeSubType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::OctreeSubType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::OctreeSubType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::OctreeSubType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::OctreeSubType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::OctreeSubType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::OctreeSubType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::OctreeSubType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::OctreeSubType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__OctreeSubType
    std::shared_ptr<tesseract_msgs::msg::OctreeSubType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__OctreeSubType
    std::shared_ptr<tesseract_msgs::msg::OctreeSubType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OctreeSubType_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const OctreeSubType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OctreeSubType_

// alias to use template instance with default allocator
using OctreeSubType =
  tesseract_msgs::msg::OctreeSubType_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t OctreeSubType_<ContainerAllocator>::BOX;
template<typename ContainerAllocator>
constexpr uint8_t OctreeSubType_<ContainerAllocator>::SPHERE_INSIDE;
template<typename ContainerAllocator>
constexpr uint8_t OctreeSubType_<ContainerAllocator>::SPHERE_OUTSIDE;

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__OCTREE_SUB_TYPE__STRUCT_HPP_
