// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/JointGroup.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT_GROUP__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT_GROUP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/joint_group__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_JointGroup_joints
{
public:
  explicit Init_JointGroup_joints(::tesseract_msgs::msg::JointGroup & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::JointGroup joints(::tesseract_msgs::msg::JointGroup::_joints_type arg)
  {
    msg_.joints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::JointGroup msg_;
};

class Init_JointGroup_name
{
public:
  Init_JointGroup_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointGroup_joints name(::tesseract_msgs::msg::JointGroup::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_JointGroup_joints(msg_);
  }

private:
  ::tesseract_msgs::msg::JointGroup msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::JointGroup>()
{
  return tesseract_msgs::msg::builder::Init_JointGroup_name();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT_GROUP__BUILDER_HPP_
