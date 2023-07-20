// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'environment'
#include "tesseract_msgs/msg/detail/environment__struct.hpp"
// Member 'commands'
#include "tesseract_msgs/msg/detail/environment_command__struct.hpp"
// Member 'initial_state'
#include "tesseract_msgs/msg/detail/string_double_pair__struct.hpp"
// Member 'joint_trajectories'
#include "tesseract_msgs/msg/detail/joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__Trajectory __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__Trajectory __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Trajectory_
{
  using Type = Trajectory_<ContainerAllocator>;

  explicit Trajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    environment(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ns = "";
      this->description = "";
      this->instructions = "";
    }
  }

  explicit Trajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ns(_alloc),
    description(_alloc),
    environment(_alloc, _init),
    instructions(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ns = "";
      this->description = "";
      this->instructions = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ns_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ns_type ns;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _environment_type =
    tesseract_msgs::msg::Environment_<ContainerAllocator>;
  _environment_type environment;
  using _commands_type =
    std::vector<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>>;
  _commands_type commands;
  using _initial_state_type =
    std::vector<tesseract_msgs::msg::StringDoublePair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::StringDoublePair_<ContainerAllocator>>>;
  _initial_state_type initial_state;
  using _instructions_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _instructions_type instructions;
  using _joint_trajectories_type =
    std::vector<tesseract_msgs::msg::JointTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::JointTrajectory_<ContainerAllocator>>>;
  _joint_trajectories_type joint_trajectories;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ns(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ns = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__environment(
    const tesseract_msgs::msg::Environment_<ContainerAllocator> & _arg)
  {
    this->environment = _arg;
    return *this;
  }
  Type & set__commands(
    const std::vector<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>> & _arg)
  {
    this->commands = _arg;
    return *this;
  }
  Type & set__initial_state(
    const std::vector<tesseract_msgs::msg::StringDoublePair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::StringDoublePair_<ContainerAllocator>>> & _arg)
  {
    this->initial_state = _arg;
    return *this;
  }
  Type & set__instructions(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->instructions = _arg;
    return *this;
  }
  Type & set__joint_trajectories(
    const std::vector<tesseract_msgs::msg::JointTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::JointTrajectory_<ContainerAllocator>>> & _arg)
  {
    this->joint_trajectories = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::Trajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::Trajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::Trajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::Trajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::Trajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::Trajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::Trajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::Trajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::Trajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::Trajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__Trajectory
    std::shared_ptr<tesseract_msgs::msg::Trajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__Trajectory
    std::shared_ptr<tesseract_msgs::msg::Trajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trajectory_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ns != other.ns) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->environment != other.environment) {
      return false;
    }
    if (this->commands != other.commands) {
      return false;
    }
    if (this->initial_state != other.initial_state) {
      return false;
    }
    if (this->instructions != other.instructions) {
      return false;
    }
    if (this->joint_trajectories != other.joint_trajectories) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trajectory_

// alias to use template instance with default allocator
using Trajectory =
  tesseract_msgs::msg::Trajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_HPP_
