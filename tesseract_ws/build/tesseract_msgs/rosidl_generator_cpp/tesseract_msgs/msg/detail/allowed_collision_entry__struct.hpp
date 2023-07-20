// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/AllowedCollisionEntry.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__AllowedCollisionEntry __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__AllowedCollisionEntry __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AllowedCollisionEntry_
{
  using Type = AllowedCollisionEntry_<ContainerAllocator>;

  explicit AllowedCollisionEntry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_1 = "";
      this->link_2 = "";
      this->reason = "";
    }
  }

  explicit AllowedCollisionEntry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : link_1(_alloc),
    link_2(_alloc),
    reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_1 = "";
      this->link_2 = "";
      this->reason = "";
    }
  }

  // field types and members
  using _link_1_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link_1_type link_1;
  using _link_2_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link_2_type link_2;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reason_type reason;

  // setters for named parameter idiom
  Type & set__link_1(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link_1 = _arg;
    return *this;
  }
  Type & set__link_2(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link_2 = _arg;
    return *this;
  }
  Type & set__reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__AllowedCollisionEntry
    std::shared_ptr<tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__AllowedCollisionEntry
    std::shared_ptr<tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AllowedCollisionEntry_ & other) const
  {
    if (this->link_1 != other.link_1) {
      return false;
    }
    if (this->link_2 != other.link_2) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const AllowedCollisionEntry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AllowedCollisionEntry_

// alias to use template instance with default allocator
using AllowedCollisionEntry =
  tesseract_msgs::msg::AllowedCollisionEntry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__STRUCT_HPP_
