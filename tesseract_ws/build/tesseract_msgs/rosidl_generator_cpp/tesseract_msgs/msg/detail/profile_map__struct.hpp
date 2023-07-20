// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/ProfileMap.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__PROFILE_MAP__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__PROFILE_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pairs'
#include "tesseract_msgs/msg/detail/string_pair__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__ProfileMap __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__ProfileMap __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProfileMap_
{
  using Type = ProfileMap_<ContainerAllocator>;

  explicit ProfileMap_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ProfileMap_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _pairs_type =
    std::vector<tesseract_msgs::msg::StringPair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::StringPair_<ContainerAllocator>>>;
  _pairs_type pairs;

  // setters for named parameter idiom
  Type & set__pairs(
    const std::vector<tesseract_msgs::msg::StringPair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::StringPair_<ContainerAllocator>>> & _arg)
  {
    this->pairs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::ProfileMap_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::ProfileMap_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::ProfileMap_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::ProfileMap_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::ProfileMap_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::ProfileMap_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::ProfileMap_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::ProfileMap_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::ProfileMap_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::ProfileMap_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__ProfileMap
    std::shared_ptr<tesseract_msgs::msg::ProfileMap_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__ProfileMap
    std::shared_ptr<tesseract_msgs::msg::ProfileMap_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProfileMap_ & other) const
  {
    if (this->pairs != other.pairs) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProfileMap_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProfileMap_

// alias to use template instance with default allocator
using ProfileMap =
  tesseract_msgs::msg::ProfileMap_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__PROFILE_MAP__STRUCT_HPP_
