// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/Environment.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/environment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_Environment_joint_states
{
public:
  explicit Init_Environment_joint_states(::tesseract_msgs::msg::Environment & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::Environment joint_states(::tesseract_msgs::msg::Environment::_joint_states_type arg)
  {
    msg_.joint_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::Environment msg_;
};

class Init_Environment_command_history
{
public:
  Init_Environment_command_history()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Environment_joint_states command_history(::tesseract_msgs::msg::Environment::_command_history_type arg)
  {
    msg_.command_history = std::move(arg);
    return Init_Environment_joint_states(msg_);
  }

private:
  ::tesseract_msgs::msg::Environment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::Environment>()
{
  return tesseract_msgs::msg::builder::Init_Environment_command_history();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT__BUILDER_HPP_
