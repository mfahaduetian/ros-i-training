// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/GroupsJointStates.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__GROUPS_JOINT_STATES__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__GROUPS_JOINT_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'joint_states'
#include "tesseract_msgs/msg/detail/groups_joint_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__GroupsJointStates __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__GroupsJointStates __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GroupsJointStates_
{
  using Type = GroupsJointStates_<ContainerAllocator>;

  explicit GroupsJointStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit GroupsJointStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _joint_states_type =
    std::vector<tesseract_msgs::msg::GroupsJointState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::GroupsJointState_<ContainerAllocator>>>;
  _joint_states_type joint_states;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__joint_states(
    const std::vector<tesseract_msgs::msg::GroupsJointState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::GroupsJointState_<ContainerAllocator>>> & _arg)
  {
    this->joint_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::GroupsJointStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::GroupsJointStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::GroupsJointStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::GroupsJointStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::GroupsJointStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::GroupsJointStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::GroupsJointStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::GroupsJointStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::GroupsJointStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::GroupsJointStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__GroupsJointStates
    std::shared_ptr<tesseract_msgs::msg::GroupsJointStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__GroupsJointStates
    std::shared_ptr<tesseract_msgs::msg::GroupsJointStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GroupsJointStates_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->joint_states != other.joint_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const GroupsJointStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GroupsJointStates_

// alias to use template instance with default allocator
using GroupsJointStates =
  tesseract_msgs::msg::GroupsJointStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__GROUPS_JOINT_STATES__STRUCT_HPP_
