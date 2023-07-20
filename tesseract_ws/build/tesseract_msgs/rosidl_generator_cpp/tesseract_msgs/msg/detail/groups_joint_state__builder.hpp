// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/GroupsJointState.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__GROUPS_JOINT_STATE__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__GROUPS_JOINT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/groups_joint_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_GroupsJointState_joint_state
{
public:
  explicit Init_GroupsJointState_joint_state(::tesseract_msgs::msg::GroupsJointState & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::GroupsJointState joint_state(::tesseract_msgs::msg::GroupsJointState::_joint_state_type arg)
  {
    msg_.joint_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::GroupsJointState msg_;
};

class Init_GroupsJointState_name
{
public:
  Init_GroupsJointState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GroupsJointState_joint_state name(::tesseract_msgs::msg::GroupsJointState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_GroupsJointState_joint_state(msg_);
  }

private:
  ::tesseract_msgs::msg::GroupsJointState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::GroupsJointState>()
{
  return tesseract_msgs::msg::builder::Init_GroupsJointState_name();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__GROUPS_JOINT_STATE__BUILDER_HPP_
