// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/JointDynamics.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT_DYNAMICS__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT_DYNAMICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/joint_dynamics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_JointDynamics_empty
{
public:
  explicit Init_JointDynamics_empty(::tesseract_msgs::msg::JointDynamics & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::JointDynamics empty(::tesseract_msgs::msg::JointDynamics::_empty_type arg)
  {
    msg_.empty = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::JointDynamics msg_;
};

class Init_JointDynamics_friction
{
public:
  explicit Init_JointDynamics_friction(::tesseract_msgs::msg::JointDynamics & msg)
  : msg_(msg)
  {}
  Init_JointDynamics_empty friction(::tesseract_msgs::msg::JointDynamics::_friction_type arg)
  {
    msg_.friction = std::move(arg);
    return Init_JointDynamics_empty(msg_);
  }

private:
  ::tesseract_msgs::msg::JointDynamics msg_;
};

class Init_JointDynamics_damping
{
public:
  Init_JointDynamics_damping()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointDynamics_friction damping(::tesseract_msgs::msg::JointDynamics::_damping_type arg)
  {
    msg_.damping = std::move(arg);
    return Init_JointDynamics_friction(msg_);
  }

private:
  ::tesseract_msgs::msg::JointDynamics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::JointDynamics>()
{
  return tesseract_msgs::msg::builder::Init_JointDynamics_damping();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT_DYNAMICS__BUILDER_HPP_
