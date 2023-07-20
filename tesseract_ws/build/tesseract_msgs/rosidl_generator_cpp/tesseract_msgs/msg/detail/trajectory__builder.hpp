// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_Trajectory_joint_trajectories
{
public:
  explicit Init_Trajectory_joint_trajectories(::tesseract_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::Trajectory joint_trajectories(::tesseract_msgs::msg::Trajectory::_joint_trajectories_type arg)
  {
    msg_.joint_trajectories = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_instructions
{
public:
  explicit Init_Trajectory_instructions(::tesseract_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_joint_trajectories instructions(::tesseract_msgs::msg::Trajectory::_instructions_type arg)
  {
    msg_.instructions = std::move(arg);
    return Init_Trajectory_joint_trajectories(msg_);
  }

private:
  ::tesseract_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_initial_state
{
public:
  explicit Init_Trajectory_initial_state(::tesseract_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_instructions initial_state(::tesseract_msgs::msg::Trajectory::_initial_state_type arg)
  {
    msg_.initial_state = std::move(arg);
    return Init_Trajectory_instructions(msg_);
  }

private:
  ::tesseract_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_commands
{
public:
  explicit Init_Trajectory_commands(::tesseract_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_initial_state commands(::tesseract_msgs::msg::Trajectory::_commands_type arg)
  {
    msg_.commands = std::move(arg);
    return Init_Trajectory_initial_state(msg_);
  }

private:
  ::tesseract_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_environment
{
public:
  explicit Init_Trajectory_environment(::tesseract_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_commands environment(::tesseract_msgs::msg::Trajectory::_environment_type arg)
  {
    msg_.environment = std::move(arg);
    return Init_Trajectory_commands(msg_);
  }

private:
  ::tesseract_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_description
{
public:
  explicit Init_Trajectory_description(::tesseract_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_environment description(::tesseract_msgs::msg::Trajectory::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_Trajectory_environment(msg_);
  }

private:
  ::tesseract_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_ns
{
public:
  explicit Init_Trajectory_ns(::tesseract_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_description ns(::tesseract_msgs::msg::Trajectory::_ns_type arg)
  {
    msg_.ns = std::move(arg);
    return Init_Trajectory_description(msg_);
  }

private:
  ::tesseract_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_header
{
public:
  Init_Trajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trajectory_ns header(::tesseract_msgs::msg::Trajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Trajectory_ns(msg_);
  }

private:
  ::tesseract_msgs::msg::Trajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::Trajectory>()
{
  return tesseract_msgs::msg::builder::Init_Trajectory_header();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
