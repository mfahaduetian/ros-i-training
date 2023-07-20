// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/ContactManagersPluginInfo.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__CONTACT_MANAGERS_PLUGIN_INFO__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__CONTACT_MANAGERS_PLUGIN_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'discrete_plugin_container'
// Member 'continuous_plugin_container'
#include "tesseract_msgs/msg/detail/plugin_info_container__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__ContactManagersPluginInfo __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__ContactManagersPluginInfo __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ContactManagersPluginInfo_
{
  using Type = ContactManagersPluginInfo_<ContainerAllocator>;

  explicit ContactManagersPluginInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : discrete_plugin_container(_init),
    continuous_plugin_container(_init)
  {
    (void)_init;
  }

  explicit ContactManagersPluginInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : discrete_plugin_container(_alloc, _init),
    continuous_plugin_container(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _search_paths_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _search_paths_type search_paths;
  using _search_libraries_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _search_libraries_type search_libraries;
  using _discrete_plugin_container_type =
    tesseract_msgs::msg::PluginInfoContainer_<ContainerAllocator>;
  _discrete_plugin_container_type discrete_plugin_container;
  using _continuous_plugin_container_type =
    tesseract_msgs::msg::PluginInfoContainer_<ContainerAllocator>;
  _continuous_plugin_container_type continuous_plugin_container;

  // setters for named parameter idiom
  Type & set__search_paths(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->search_paths = _arg;
    return *this;
  }
  Type & set__search_libraries(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->search_libraries = _arg;
    return *this;
  }
  Type & set__discrete_plugin_container(
    const tesseract_msgs::msg::PluginInfoContainer_<ContainerAllocator> & _arg)
  {
    this->discrete_plugin_container = _arg;
    return *this;
  }
  Type & set__continuous_plugin_container(
    const tesseract_msgs::msg::PluginInfoContainer_<ContainerAllocator> & _arg)
  {
    this->continuous_plugin_container = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::ContactManagersPluginInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::ContactManagersPluginInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::ContactManagersPluginInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::ContactManagersPluginInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::ContactManagersPluginInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::ContactManagersPluginInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::ContactManagersPluginInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::ContactManagersPluginInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::ContactManagersPluginInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::ContactManagersPluginInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__ContactManagersPluginInfo
    std::shared_ptr<tesseract_msgs::msg::ContactManagersPluginInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__ContactManagersPluginInfo
    std::shared_ptr<tesseract_msgs::msg::ContactManagersPluginInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ContactManagersPluginInfo_ & other) const
  {
    if (this->search_paths != other.search_paths) {
      return false;
    }
    if (this->search_libraries != other.search_libraries) {
      return false;
    }
    if (this->discrete_plugin_container != other.discrete_plugin_container) {
      return false;
    }
    if (this->continuous_plugin_container != other.continuous_plugin_container) {
      return false;
    }
    return true;
  }
  bool operator!=(const ContactManagersPluginInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ContactManagersPluginInfo_

// alias to use template instance with default allocator
using ContactManagersPluginInfo =
  tesseract_msgs::msg::ContactManagersPluginInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__CONTACT_MANAGERS_PLUGIN_INFO__STRUCT_HPP_
