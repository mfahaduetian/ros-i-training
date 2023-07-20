// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/JointState.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/joint_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_JointState_time_from_start
{
public:
  explicit Init_JointState_time_from_start(::tesseract_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::JointState time_from_start(::tesseract_msgs::msg::JointState::_time_from_start_type arg)
  {
    msg_.time_from_start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::JointState msg_;
};

class Init_JointState_effort
{
public:
  explicit Init_JointState_effort(::tesseract_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_time_from_start effort(::tesseract_msgs::msg::JointState::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return Init_JointState_time_from_start(msg_);
  }

private:
  ::tesseract_msgs::msg::JointState msg_;
};

class Init_JointState_acceleration
{
public:
  explicit Init_JointState_acceleration(::tesseract_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_effort acceleration(::tesseract_msgs::msg::JointState::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_JointState_effort(msg_);
  }

private:
  ::tesseract_msgs::msg::JointState msg_;
};

class Init_JointState_velocity
{
public:
  explicit Init_JointState_velocity(::tesseract_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_acceleration velocity(::tesseract_msgs::msg::JointState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_JointState_acceleration(msg_);
  }

private:
  ::tesseract_msgs::msg::JointState msg_;
};

class Init_JointState_position
{
public:
  explicit Init_JointState_position(::tesseract_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_velocity position(::tesseract_msgs::msg::JointState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_JointState_velocity(msg_);
  }

private:
  ::tesseract_msgs::msg::JointState msg_;
};

class Init_JointState_joint_names
{
public:
  Init_JointState_joint_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointState_position joint_names(::tesseract_msgs::msg::JointState::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_JointState_position(msg_);
  }

private:
  ::tesseract_msgs::msg::JointState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::JointState>()
{
  return tesseract_msgs::msg::builder::Init_JointState_joint_names();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_
