// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/JointSafety.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT_SAFETY__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT_SAFETY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/joint_safety__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_JointSafety_empty
{
public:
  explicit Init_JointSafety_empty(::tesseract_msgs::msg::JointSafety & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::JointSafety empty(::tesseract_msgs::msg::JointSafety::_empty_type arg)
  {
    msg_.empty = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::JointSafety msg_;
};

class Init_JointSafety_k_velocity
{
public:
  explicit Init_JointSafety_k_velocity(::tesseract_msgs::msg::JointSafety & msg)
  : msg_(msg)
  {}
  Init_JointSafety_empty k_velocity(::tesseract_msgs::msg::JointSafety::_k_velocity_type arg)
  {
    msg_.k_velocity = std::move(arg);
    return Init_JointSafety_empty(msg_);
  }

private:
  ::tesseract_msgs::msg::JointSafety msg_;
};

class Init_JointSafety_k_position
{
public:
  explicit Init_JointSafety_k_position(::tesseract_msgs::msg::JointSafety & msg)
  : msg_(msg)
  {}
  Init_JointSafety_k_velocity k_position(::tesseract_msgs::msg::JointSafety::_k_position_type arg)
  {
    msg_.k_position = std::move(arg);
    return Init_JointSafety_k_velocity(msg_);
  }

private:
  ::tesseract_msgs::msg::JointSafety msg_;
};

class Init_JointSafety_soft_lower_limit
{
public:
  explicit Init_JointSafety_soft_lower_limit(::tesseract_msgs::msg::JointSafety & msg)
  : msg_(msg)
  {}
  Init_JointSafety_k_position soft_lower_limit(::tesseract_msgs::msg::JointSafety::_soft_lower_limit_type arg)
  {
    msg_.soft_lower_limit = std::move(arg);
    return Init_JointSafety_k_position(msg_);
  }

private:
  ::tesseract_msgs::msg::JointSafety msg_;
};

class Init_JointSafety_soft_upper_limit
{
public:
  Init_JointSafety_soft_upper_limit()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointSafety_soft_lower_limit soft_upper_limit(::tesseract_msgs::msg::JointSafety::_soft_upper_limit_type arg)
  {
    msg_.soft_upper_limit = std::move(arg);
    return Init_JointSafety_soft_lower_limit(msg_);
  }

private:
  ::tesseract_msgs::msg::JointSafety msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::JointSafety>()
{
  return tesseract_msgs::msg::builder::Init_JointSafety_soft_upper_limit();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT_SAFETY__BUILDER_HPP_
