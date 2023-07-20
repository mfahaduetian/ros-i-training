// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/GroupsKinematicPlugins.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__GROUPS_KINEMATIC_PLUGINS__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__GROUPS_KINEMATIC_PLUGINS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'plugin_container'
#include "tesseract_msgs/msg/detail/plugin_info_container__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__GroupsKinematicPlugins __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__GroupsKinematicPlugins __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GroupsKinematicPlugins_
{
  using Type = GroupsKinematicPlugins_<ContainerAllocator>;

  explicit GroupsKinematicPlugins_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : plugin_container(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group = "";
    }
  }

  explicit GroupsKinematicPlugins_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : group(_alloc),
    plugin_container(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group = "";
    }
  }

  // field types and members
  using _group_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _group_type group;
  using _plugin_container_type =
    tesseract_msgs::msg::PluginInfoContainer_<ContainerAllocator>;
  _plugin_container_type plugin_container;

  // setters for named parameter idiom
  Type & set__group(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->group = _arg;
    return *this;
  }
  Type & set__plugin_container(
    const tesseract_msgs::msg::PluginInfoContainer_<ContainerAllocator> & _arg)
  {
    this->plugin_container = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::GroupsKinematicPlugins_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::GroupsKinematicPlugins_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::GroupsKinematicPlugins_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::GroupsKinematicPlugins_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::GroupsKinematicPlugins_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::GroupsKinematicPlugins_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::GroupsKinematicPlugins_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::GroupsKinematicPlugins_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::GroupsKinematicPlugins_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::GroupsKinematicPlugins_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__GroupsKinematicPlugins
    std::shared_ptr<tesseract_msgs::msg::GroupsKinematicPlugins_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__GroupsKinematicPlugins
    std::shared_ptr<tesseract_msgs::msg::GroupsKinematicPlugins_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GroupsKinematicPlugins_ & other) const
  {
    if (this->group != other.group) {
      return false;
    }
    if (this->plugin_container != other.plugin_container) {
      return false;
    }
    return true;
  }
  bool operator!=(const GroupsKinematicPlugins_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GroupsKinematicPlugins_

// alias to use template instance with default allocator
using GroupsKinematicPlugins =
  tesseract_msgs::msg::GroupsKinematicPlugins_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__GROUPS_KINEMATIC_PLUGINS__STRUCT_HPP_
