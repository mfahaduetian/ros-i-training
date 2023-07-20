// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/Environment.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'command_history'
#include "tesseract_msgs/msg/detail/environment_command__struct.hpp"
// Member 'joint_states'
#include "sensor_msgs/msg/detail/joint_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__Environment __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__Environment __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Environment_
{
  using Type = Environment_<ContainerAllocator>;

  explicit Environment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_states(_init)
  {
    (void)_init;
  }

  explicit Environment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_states(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _command_history_type =
    std::vector<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>>;
  _command_history_type command_history;
  using _joint_states_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _joint_states_type joint_states;

  // setters for named parameter idiom
  Type & set__command_history(
    const std::vector<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>> & _arg)
  {
    this->command_history = _arg;
    return *this;
  }
  Type & set__joint_states(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->joint_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::Environment_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::Environment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::Environment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::Environment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::Environment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::Environment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::Environment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::Environment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::Environment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::Environment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__Environment
    std::shared_ptr<tesseract_msgs::msg::Environment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__Environment
    std::shared_ptr<tesseract_msgs::msg::Environment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Environment_ & other) const
  {
    if (this->command_history != other.command_history) {
      return false;
    }
    if (this->joint_states != other.joint_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const Environment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Environment_

// alias to use template instance with default allocator
using Environment =
  tesseract_msgs::msg::Environment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT__STRUCT_HPP_
