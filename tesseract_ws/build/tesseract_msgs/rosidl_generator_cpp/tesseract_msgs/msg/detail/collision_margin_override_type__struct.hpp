// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/CollisionMarginOverrideType.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__COLLISION_MARGIN_OVERRIDE_TYPE__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__COLLISION_MARGIN_OVERRIDE_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__CollisionMarginOverrideType __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__CollisionMarginOverrideType __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CollisionMarginOverrideType_
{
  using Type = CollisionMarginOverrideType_<ContainerAllocator>;

  explicit CollisionMarginOverrideType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  explicit CollisionMarginOverrideType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t REPLACE =
    1u;
  static constexpr uint8_t MODIFY =
    2u;
  static constexpr uint8_t OVERRIDE_DEFAULT_MARGIN =
    3u;
  static constexpr uint8_t OVERRIDE_PAIR_MARGIN =
    4u;
  static constexpr uint8_t MODIFY_PAIR_MARGIN =
    5u;

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::CollisionMarginOverrideType_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::CollisionMarginOverrideType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::CollisionMarginOverrideType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::CollisionMarginOverrideType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::CollisionMarginOverrideType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::CollisionMarginOverrideType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::CollisionMarginOverrideType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::CollisionMarginOverrideType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::CollisionMarginOverrideType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::CollisionMarginOverrideType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__CollisionMarginOverrideType
    std::shared_ptr<tesseract_msgs::msg::CollisionMarginOverrideType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__CollisionMarginOverrideType
    std::shared_ptr<tesseract_msgs::msg::CollisionMarginOverrideType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollisionMarginOverrideType_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollisionMarginOverrideType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollisionMarginOverrideType_

// alias to use template instance with default allocator
using CollisionMarginOverrideType =
  tesseract_msgs::msg::CollisionMarginOverrideType_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t CollisionMarginOverrideType_<ContainerAllocator>::NONE;
template<typename ContainerAllocator>
constexpr uint8_t CollisionMarginOverrideType_<ContainerAllocator>::REPLACE;
template<typename ContainerAllocator>
constexpr uint8_t CollisionMarginOverrideType_<ContainerAllocator>::MODIFY;
template<typename ContainerAllocator>
constexpr uint8_t CollisionMarginOverrideType_<ContainerAllocator>::OVERRIDE_DEFAULT_MARGIN;
template<typename ContainerAllocator>
constexpr uint8_t CollisionMarginOverrideType_<ContainerAllocator>::OVERRIDE_PAIR_MARGIN;
template<typename ContainerAllocator>
constexpr uint8_t CollisionMarginOverrideType_<ContainerAllocator>::MODIFY_PAIR_MARGIN;

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__COLLISION_MARGIN_OVERRIDE_TYPE__STRUCT_HPP_
