// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/JointLimits.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT_LIMITS__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT_LIMITS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/joint_limits__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_JointLimits_empty
{
public:
  explicit Init_JointLimits_empty(::tesseract_msgs::msg::JointLimits & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::JointLimits empty(::tesseract_msgs::msg::JointLimits::_empty_type arg)
  {
    msg_.empty = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::JointLimits msg_;
};

class Init_JointLimits_acceleration
{
public:
  explicit Init_JointLimits_acceleration(::tesseract_msgs::msg::JointLimits & msg)
  : msg_(msg)
  {}
  Init_JointLimits_empty acceleration(::tesseract_msgs::msg::JointLimits::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_JointLimits_empty(msg_);
  }

private:
  ::tesseract_msgs::msg::JointLimits msg_;
};

class Init_JointLimits_velocity
{
public:
  explicit Init_JointLimits_velocity(::tesseract_msgs::msg::JointLimits & msg)
  : msg_(msg)
  {}
  Init_JointLimits_acceleration velocity(::tesseract_msgs::msg::JointLimits::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_JointLimits_acceleration(msg_);
  }

private:
  ::tesseract_msgs::msg::JointLimits msg_;
};

class Init_JointLimits_effort
{
public:
  explicit Init_JointLimits_effort(::tesseract_msgs::msg::JointLimits & msg)
  : msg_(msg)
  {}
  Init_JointLimits_velocity effort(::tesseract_msgs::msg::JointLimits::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return Init_JointLimits_velocity(msg_);
  }

private:
  ::tesseract_msgs::msg::JointLimits msg_;
};

class Init_JointLimits_upper
{
public:
  explicit Init_JointLimits_upper(::tesseract_msgs::msg::JointLimits & msg)
  : msg_(msg)
  {}
  Init_JointLimits_effort upper(::tesseract_msgs::msg::JointLimits::_upper_type arg)
  {
    msg_.upper = std::move(arg);
    return Init_JointLimits_effort(msg_);
  }

private:
  ::tesseract_msgs::msg::JointLimits msg_;
};

class Init_JointLimits_lower
{
public:
  Init_JointLimits_lower()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointLimits_upper lower(::tesseract_msgs::msg::JointLimits::_lower_type arg)
  {
    msg_.lower = std::move(arg);
    return Init_JointLimits_upper(msg_);
  }

private:
  ::tesseract_msgs::msg::JointLimits msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::JointLimits>()
{
  return tesseract_msgs::msg::builder::Init_JointLimits_lower();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT_LIMITS__BUILDER_HPP_
