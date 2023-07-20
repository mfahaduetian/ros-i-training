// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/EnvironmentState.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT_STATE__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/environment_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_EnvironmentState_joint_state
{
public:
  explicit Init_EnvironmentState_joint_state(::tesseract_msgs::msg::EnvironmentState & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::EnvironmentState joint_state(::tesseract_msgs::msg::EnvironmentState::_joint_state_type arg)
  {
    msg_.joint_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentState msg_;
};

class Init_EnvironmentState_revision
{
public:
  explicit Init_EnvironmentState_revision(::tesseract_msgs::msg::EnvironmentState & msg)
  : msg_(msg)
  {}
  Init_EnvironmentState_joint_state revision(::tesseract_msgs::msg::EnvironmentState::_revision_type arg)
  {
    msg_.revision = std::move(arg);
    return Init_EnvironmentState_joint_state(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentState msg_;
};

class Init_EnvironmentState_id
{
public:
  Init_EnvironmentState_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnvironmentState_revision id(::tesseract_msgs::msg::EnvironmentState::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_EnvironmentState_revision(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::EnvironmentState>()
{
  return tesseract_msgs::msg::builder::Init_EnvironmentState_id();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT_STATE__BUILDER_HPP_
