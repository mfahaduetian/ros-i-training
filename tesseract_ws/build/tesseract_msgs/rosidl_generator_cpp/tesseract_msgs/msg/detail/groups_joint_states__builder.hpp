// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/GroupsJointStates.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__GROUPS_JOINT_STATES__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__GROUPS_JOINT_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/groups_joint_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_GroupsJointStates_joint_states
{
public:
  explicit Init_GroupsJointStates_joint_states(::tesseract_msgs::msg::GroupsJointStates & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::GroupsJointStates joint_states(::tesseract_msgs::msg::GroupsJointStates::_joint_states_type arg)
  {
    msg_.joint_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::GroupsJointStates msg_;
};

class Init_GroupsJointStates_name
{
public:
  Init_GroupsJointStates_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GroupsJointStates_joint_states name(::tesseract_msgs::msg::GroupsJointStates::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_GroupsJointStates_joint_states(msg_);
  }

private:
  ::tesseract_msgs::msg::GroupsJointStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::GroupsJointStates>()
{
  return tesseract_msgs::msg::builder::Init_GroupsJointStates_name();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__GROUPS_JOINT_STATES__BUILDER_HPP_
