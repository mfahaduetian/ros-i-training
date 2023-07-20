// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/PluginInfoContainer.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__PLUGIN_INFO_CONTAINER__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__PLUGIN_INFO_CONTAINER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'plugins'
#include "tesseract_msgs/msg/detail/string_plugin_info_pair__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__PluginInfoContainer __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__PluginInfoContainer __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PluginInfoContainer_
{
  using Type = PluginInfoContainer_<ContainerAllocator>;

  explicit PluginInfoContainer_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->default_plugin = "";
    }
  }

  explicit PluginInfoContainer_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : default_plugin(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->default_plugin = "";
    }
  }

  // field types and members
  using _default_plugin_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _default_plugin_type default_plugin;
  using _plugins_type =
    std::vector<tesseract_msgs::msg::StringPluginInfoPair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::StringPluginInfoPair_<ContainerAllocator>>>;
  _plugins_type plugins;

  // setters for named parameter idiom
  Type & set__default_plugin(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->default_plugin = _arg;
    return *this;
  }
  Type & set__plugins(
    const std::vector<tesseract_msgs::msg::StringPluginInfoPair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::StringPluginInfoPair_<ContainerAllocator>>> & _arg)
  {
    this->plugins = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::PluginInfoContainer_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::PluginInfoContainer_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::PluginInfoContainer_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::PluginInfoContainer_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::PluginInfoContainer_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::PluginInfoContainer_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::PluginInfoContainer_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::PluginInfoContainer_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::PluginInfoContainer_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::PluginInfoContainer_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__PluginInfoContainer
    std::shared_ptr<tesseract_msgs::msg::PluginInfoContainer_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__PluginInfoContainer
    std::shared_ptr<tesseract_msgs::msg::PluginInfoContainer_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PluginInfoContainer_ & other) const
  {
    if (this->default_plugin != other.default_plugin) {
      return false;
    }
    if (this->plugins != other.plugins) {
      return false;
    }
    return true;
  }
  bool operator!=(const PluginInfoContainer_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PluginInfoContainer_

// alias to use template instance with default allocator
using PluginInfoContainer =
  tesseract_msgs::msg::PluginInfoContainer_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__PLUGIN_INFO_CONTAINER__STRUCT_HPP_
