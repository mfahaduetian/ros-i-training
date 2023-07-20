// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/PlanningRequest.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__PLANNING_REQUEST__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__PLANNING_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'environment_state'
#include "tesseract_msgs/msg/detail/environment_state__struct.hpp"
// Member 'commands'
#include "tesseract_msgs/msg/detail/environment_command__struct.hpp"
// Member 'move_profile_remapping'
// Member 'composite_profile_remapping'
#include "tesseract_msgs/msg/detail/planner_profile_remapping__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__PlanningRequest __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__PlanningRequest __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningRequest_
{
  using Type = PlanningRequest_<ContainerAllocator>;

  explicit PlanningRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : environment_state(_init),
    move_profile_remapping(_init),
    composite_profile_remapping(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->executor = "";
      this->instructions = "";
      this->dotgraph = false;
      this->debug = false;
      this->save_io = false;
    }
  }

  explicit PlanningRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : environment_state(_alloc, _init),
    name(_alloc),
    executor(_alloc),
    instructions(_alloc),
    move_profile_remapping(_alloc, _init),
    composite_profile_remapping(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->executor = "";
      this->instructions = "";
      this->dotgraph = false;
      this->debug = false;
      this->save_io = false;
    }
  }

  // field types and members
  using _environment_state_type =
    tesseract_msgs::msg::EnvironmentState_<ContainerAllocator>;
  _environment_state_type environment_state;
  using _commands_type =
    std::vector<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>>;
  _commands_type commands;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _executor_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _executor_type executor;
  using _instructions_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _instructions_type instructions;
  using _dotgraph_type =
    bool;
  _dotgraph_type dotgraph;
  using _debug_type =
    bool;
  _debug_type debug;
  using _save_io_type =
    bool;
  _save_io_type save_io;
  using _move_profile_remapping_type =
    tesseract_msgs::msg::PlannerProfileRemapping_<ContainerAllocator>;
  _move_profile_remapping_type move_profile_remapping;
  using _composite_profile_remapping_type =
    tesseract_msgs::msg::PlannerProfileRemapping_<ContainerAllocator>;
  _composite_profile_remapping_type composite_profile_remapping;

  // setters for named parameter idiom
  Type & set__environment_state(
    const tesseract_msgs::msg::EnvironmentState_<ContainerAllocator> & _arg)
  {
    this->environment_state = _arg;
    return *this;
  }
  Type & set__commands(
    const std::vector<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>> & _arg)
  {
    this->commands = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__executor(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->executor = _arg;
    return *this;
  }
  Type & set__instructions(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->instructions = _arg;
    return *this;
  }
  Type & set__dotgraph(
    const bool & _arg)
  {
    this->dotgraph = _arg;
    return *this;
  }
  Type & set__debug(
    const bool & _arg)
  {
    this->debug = _arg;
    return *this;
  }
  Type & set__save_io(
    const bool & _arg)
  {
    this->save_io = _arg;
    return *this;
  }
  Type & set__move_profile_remapping(
    const tesseract_msgs::msg::PlannerProfileRemapping_<ContainerAllocator> & _arg)
  {
    this->move_profile_remapping = _arg;
    return *this;
  }
  Type & set__composite_profile_remapping(
    const tesseract_msgs::msg::PlannerProfileRemapping_<ContainerAllocator> & _arg)
  {
    this->composite_profile_remapping = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::PlanningRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::PlanningRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::PlanningRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::PlanningRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::PlanningRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::PlanningRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::PlanningRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::PlanningRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::PlanningRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::PlanningRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__PlanningRequest
    std::shared_ptr<tesseract_msgs::msg::PlanningRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__PlanningRequest
    std::shared_ptr<tesseract_msgs::msg::PlanningRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningRequest_ & other) const
  {
    if (this->environment_state != other.environment_state) {
      return false;
    }
    if (this->commands != other.commands) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->executor != other.executor) {
      return false;
    }
    if (this->instructions != other.instructions) {
      return false;
    }
    if (this->dotgraph != other.dotgraph) {
      return false;
    }
    if (this->debug != other.debug) {
      return false;
    }
    if (this->save_io != other.save_io) {
      return false;
    }
    if (this->move_profile_remapping != other.move_profile_remapping) {
      return false;
    }
    if (this->composite_profile_remapping != other.composite_profile_remapping) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningRequest_

// alias to use template instance with default allocator
using PlanningRequest =
  tesseract_msgs::msg::PlanningRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__PLANNING_REQUEST__STRUCT_HPP_
