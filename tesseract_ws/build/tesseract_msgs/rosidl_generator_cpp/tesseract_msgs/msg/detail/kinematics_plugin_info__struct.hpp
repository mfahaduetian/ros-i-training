// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/KinematicsPluginInfo.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__KINEMATICS_PLUGIN_INFO__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__KINEMATICS_PLUGIN_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'group_fwd_plugins'
// Member 'group_inv_plugins'
#include "tesseract_msgs/msg/detail/groups_kinematic_plugins__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__KinematicsPluginInfo __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__KinematicsPluginInfo __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KinematicsPluginInfo_
{
  using Type = KinematicsPluginInfo_<ContainerAllocator>;

  explicit KinematicsPluginInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit KinematicsPluginInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _search_paths_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _search_paths_type search_paths;
  using _search_libraries_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _search_libraries_type search_libraries;
  using _group_fwd_plugins_type =
    std::vector<tesseract_msgs::msg::GroupsKinematicPlugins_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::GroupsKinematicPlugins_<ContainerAllocator>>>;
  _group_fwd_plugins_type group_fwd_plugins;
  using _group_inv_plugins_type =
    std::vector<tesseract_msgs::msg::GroupsKinematicPlugins_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::GroupsKinematicPlugins_<ContainerAllocator>>>;
  _group_inv_plugins_type group_inv_plugins;

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
  Type & set__group_fwd_plugins(
    const std::vector<tesseract_msgs::msg::GroupsKinematicPlugins_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::GroupsKinematicPlugins_<ContainerAllocator>>> & _arg)
  {
    this->group_fwd_plugins = _arg;
    return *this;
  }
  Type & set__group_inv_plugins(
    const std::vector<tesseract_msgs::msg::GroupsKinematicPlugins_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::GroupsKinematicPlugins_<ContainerAllocator>>> & _arg)
  {
    this->group_inv_plugins = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::KinematicsPluginInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::KinematicsPluginInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::KinematicsPluginInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::KinematicsPluginInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::KinematicsPluginInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::KinematicsPluginInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::KinematicsPluginInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::KinematicsPluginInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::KinematicsPluginInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::KinematicsPluginInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__KinematicsPluginInfo
    std::shared_ptr<tesseract_msgs::msg::KinematicsPluginInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__KinematicsPluginInfo
    std::shared_ptr<tesseract_msgs::msg::KinematicsPluginInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KinematicsPluginInfo_ & other) const
  {
    if (this->search_paths != other.search_paths) {
      return false;
    }
    if (this->search_libraries != other.search_libraries) {
      return false;
    }
    if (this->group_fwd_plugins != other.group_fwd_plugins) {
      return false;
    }
    if (this->group_inv_plugins != other.group_inv_plugins) {
      return false;
    }
    return true;
  }
  bool operator!=(const KinematicsPluginInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KinematicsPluginInfo_

// alias to use template instance with default allocator
using KinematicsPluginInfo =
  tesseract_msgs::msg::KinematicsPluginInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__KINEMATICS_PLUGIN_INFO__STRUCT_HPP_
