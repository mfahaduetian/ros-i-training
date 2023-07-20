// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/JointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/joint_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_JointTrajectory_description
{
public:
  explicit Init_JointTrajectory_description(::tesseract_msgs::msg::JointTrajectory & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::JointTrajectory description(::tesseract_msgs::msg::JointTrajectory::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::JointTrajectory msg_;
};

class Init_JointTrajectory_states
{
public:
  Init_JointTrajectory_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectory_description states(::tesseract_msgs::msg::JointTrajectory::_states_type arg)
  {
    msg_.states = std::move(arg);
    return Init_JointTrajectory_description(msg_);
  }

private:
  ::tesseract_msgs::msg::JointTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::JointTrajectory>()
{
  return tesseract_msgs::msg::builder::Init_JointTrajectory_states();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__BUILDER_HPP_
