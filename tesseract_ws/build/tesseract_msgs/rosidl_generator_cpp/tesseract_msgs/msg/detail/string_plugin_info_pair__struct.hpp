// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/StringPluginInfoPair.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__STRING_PLUGIN_INFO_PAIR__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__STRING_PLUGIN_INFO_PAIR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'second'
#include "tesseract_msgs/msg/detail/plugin_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__StringPluginInfoPair __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__StringPluginInfoPair __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StringPluginInfoPair_
{
  using Type = StringPluginInfoPair_<ContainerAllocator>;

  explicit StringPluginInfoPair_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : second(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first = "";
    }
  }

  explicit StringPluginInfoPair_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : first(_alloc),
    second(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first = "";
    }
  }

  // field types and members
  using _first_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _first_type first;
  using _second_type =
    tesseract_msgs::msg::PluginInfo_<ContainerAllocator>;
  _second_type second;

  // setters for named parameter idiom
  Type & set__first(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->first = _arg;
    return *this;
  }
  Type & set__second(
    const tesseract_msgs::msg::PluginInfo_<ContainerAllocator> & _arg)
  {
    this->second = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::StringPluginInfoPair_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::StringPluginInfoPair_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::StringPluginInfoPair_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::StringPluginInfoPair_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::StringPluginInfoPair_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::StringPluginInfoPair_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::StringPluginInfoPair_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::StringPluginInfoPair_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::StringPluginInfoPair_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::StringPluginInfoPair_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__StringPluginInfoPair
    std::shared_ptr<tesseract_msgs::msg::StringPluginInfoPair_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__StringPluginInfoPair
    std::shared_ptr<tesseract_msgs::msg::StringPluginInfoPair_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StringPluginInfoPair_ & other) const
  {
    if (this->first != other.first) {
      return false;
    }
    if (this->second != other.second) {
      return false;
    }
    return true;
  }
  bool operator!=(const StringPluginInfoPair_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StringPluginInfoPair_

// alias to use template instance with default allocator
using StringPluginInfoPair =
  tesseract_msgs::msg::StringPluginInfoPair_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__STRING_PLUGIN_INFO_PAIR__STRUCT_HPP_
