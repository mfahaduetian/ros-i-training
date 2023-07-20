// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/KinematicsInformation.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__KINEMATICS_INFORMATION__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__KINEMATICS_INFORMATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'group_joint_states'
#include "tesseract_msgs/msg/detail/groups_joint_states__struct.hpp"
// Member 'group_tcps'
#include "tesseract_msgs/msg/detail/groups_tc_ps__struct.hpp"
// Member 'chain_groups'
#include "tesseract_msgs/msg/detail/chain_group__struct.hpp"
// Member 'joint_groups'
#include "tesseract_msgs/msg/detail/joint_group__struct.hpp"
// Member 'link_groups'
#include "tesseract_msgs/msg/detail/link_group__struct.hpp"
// Member 'kinematics_plugin_info'
#include "tesseract_msgs/msg/detail/kinematics_plugin_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__KinematicsInformation __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__KinematicsInformation __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KinematicsInformation_
{
  using Type = KinematicsInformation_<ContainerAllocator>;

  explicit KinematicsInformation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : kinematics_plugin_info(_init)
  {
    (void)_init;
  }

  explicit KinematicsInformation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : kinematics_plugin_info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _group_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _group_names_type group_names;
  using _group_joint_states_type =
    std::vector<tesseract_msgs::msg::GroupsJointStates_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::GroupsJointStates_<ContainerAllocator>>>;
  _group_joint_states_type group_joint_states;
  using _group_tcps_type =
    std::vector<tesseract_msgs::msg::GroupsTCPs_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::GroupsTCPs_<ContainerAllocator>>>;
  _group_tcps_type group_tcps;
  using _chain_groups_type =
    std::vector<tesseract_msgs::msg::ChainGroup_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::ChainGroup_<ContainerAllocator>>>;
  _chain_groups_type chain_groups;
  using _joint_groups_type =
    std::vector<tesseract_msgs::msg::JointGroup_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::JointGroup_<ContainerAllocator>>>;
  _joint_groups_type joint_groups;
  using _link_groups_type =
    std::vector<tesseract_msgs::msg::LinkGroup_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::LinkGroup_<ContainerAllocator>>>;
  _link_groups_type link_groups;
  using _kinematics_plugin_info_type =
    tesseract_msgs::msg::KinematicsPluginInfo_<ContainerAllocator>;
  _kinematics_plugin_info_type kinematics_plugin_info;

  // setters for named parameter idiom
  Type & set__group_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->group_names = _arg;
    return *this;
  }
  Type & set__group_joint_states(
    const std::vector<tesseract_msgs::msg::GroupsJointStates_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::GroupsJointStates_<ContainerAllocator>>> & _arg)
  {
    this->group_joint_states = _arg;
    return *this;
  }
  Type & set__group_tcps(
    const std::vector<tesseract_msgs::msg::GroupsTCPs_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::GroupsTCPs_<ContainerAllocator>>> & _arg)
  {
    this->group_tcps = _arg;
    return *this;
  }
  Type & set__chain_groups(
    const std::vector<tesseract_msgs::msg::ChainGroup_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::ChainGroup_<ContainerAllocator>>> & _arg)
  {
    this->chain_groups = _arg;
    return *this;
  }
  Type & set__joint_groups(
    const std::vector<tesseract_msgs::msg::JointGroup_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::JointGroup_<ContainerAllocator>>> & _arg)
  {
    this->joint_groups = _arg;
    return *this;
  }
  Type & set__link_groups(
    const std::vector<tesseract_msgs::msg::LinkGroup_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::LinkGroup_<ContainerAllocator>>> & _arg)
  {
    this->link_groups = _arg;
    return *this;
  }
  Type & set__kinematics_plugin_info(
    const tesseract_msgs::msg::KinematicsPluginInfo_<ContainerAllocator> & _arg)
  {
    this->kinematics_plugin_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::KinematicsInformation_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::KinematicsInformation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::KinematicsInformation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::KinematicsInformation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::KinematicsInformation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::KinematicsInformation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::KinematicsInformation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::KinematicsInformation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::KinematicsInformation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::KinematicsInformation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__KinematicsInformation
    std::shared_ptr<tesseract_msgs::msg::KinematicsInformation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__KinematicsInformation
    std::shared_ptr<tesseract_msgs::msg::KinematicsInformation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KinematicsInformation_ & other) const
  {
    if (this->group_names != other.group_names) {
      return false;
    }
    if (this->group_joint_states != other.group_joint_states) {
      return false;
    }
    if (this->group_tcps != other.group_tcps) {
      return false;
    }
    if (this->chain_groups != other.chain_groups) {
      return false;
    }
    if (this->joint_groups != other.joint_groups) {
      return false;
    }
    if (this->link_groups != other.link_groups) {
      return false;
    }
    if (this->kinematics_plugin_info != other.kinematics_plugin_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const KinematicsInformation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KinematicsInformation_

// alias to use template instance with default allocator
using KinematicsInformation =
  tesseract_msgs::msg::KinematicsInformation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__KINEMATICS_INFORMATION__STRUCT_HPP_
