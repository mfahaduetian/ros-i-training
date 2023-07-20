// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/JointMimic.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT_MIMIC__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT_MIMIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/joint_mimic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_JointMimic_empty
{
public:
  explicit Init_JointMimic_empty(::tesseract_msgs::msg::JointMimic & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::JointMimic empty(::tesseract_msgs::msg::JointMimic::_empty_type arg)
  {
    msg_.empty = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::JointMimic msg_;
};

class Init_JointMimic_joint_name
{
public:
  explicit Init_JointMimic_joint_name(::tesseract_msgs::msg::JointMimic & msg)
  : msg_(msg)
  {}
  Init_JointMimic_empty joint_name(::tesseract_msgs::msg::JointMimic::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_JointMimic_empty(msg_);
  }

private:
  ::tesseract_msgs::msg::JointMimic msg_;
};

class Init_JointMimic_multiplier
{
public:
  explicit Init_JointMimic_multiplier(::tesseract_msgs::msg::JointMimic & msg)
  : msg_(msg)
  {}
  Init_JointMimic_joint_name multiplier(::tesseract_msgs::msg::JointMimic::_multiplier_type arg)
  {
    msg_.multiplier = std::move(arg);
    return Init_JointMimic_joint_name(msg_);
  }

private:
  ::tesseract_msgs::msg::JointMimic msg_;
};

class Init_JointMimic_offset
{
public:
  Init_JointMimic_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointMimic_multiplier offset(::tesseract_msgs::msg::JointMimic::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_JointMimic_multiplier(msg_);
  }

private:
  ::tesseract_msgs::msg::JointMimic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::JointMimic>()
{
  return tesseract_msgs::msg::builder::Init_JointMimic_offset();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT_MIMIC__BUILDER_HPP_
