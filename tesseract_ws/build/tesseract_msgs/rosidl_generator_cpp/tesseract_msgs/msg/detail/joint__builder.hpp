// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/Joint.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/joint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_Joint_mimic
{
public:
  explicit Init_Joint_mimic(::tesseract_msgs::msg::Joint & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::Joint mimic(::tesseract_msgs::msg::Joint::_mimic_type arg)
  {
    msg_.mimic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::Joint msg_;
};

class Init_Joint_calibration
{
public:
  explicit Init_Joint_calibration(::tesseract_msgs::msg::Joint & msg)
  : msg_(msg)
  {}
  Init_Joint_mimic calibration(::tesseract_msgs::msg::Joint::_calibration_type arg)
  {
    msg_.calibration = std::move(arg);
    return Init_Joint_mimic(msg_);
  }

private:
  ::tesseract_msgs::msg::Joint msg_;
};

class Init_Joint_safety
{
public:
  explicit Init_Joint_safety(::tesseract_msgs::msg::Joint & msg)
  : msg_(msg)
  {}
  Init_Joint_calibration safety(::tesseract_msgs::msg::Joint::_safety_type arg)
  {
    msg_.safety = std::move(arg);
    return Init_Joint_calibration(msg_);
  }

private:
  ::tesseract_msgs::msg::Joint msg_;
};

class Init_Joint_dynamics
{
public:
  explicit Init_Joint_dynamics(::tesseract_msgs::msg::Joint & msg)
  : msg_(msg)
  {}
  Init_Joint_safety dynamics(::tesseract_msgs::msg::Joint::_dynamics_type arg)
  {
    msg_.dynamics = std::move(arg);
    return Init_Joint_safety(msg_);
  }

private:
  ::tesseract_msgs::msg::Joint msg_;
};

class Init_Joint_limits
{
public:
  explicit Init_Joint_limits(::tesseract_msgs::msg::Joint & msg)
  : msg_(msg)
  {}
  Init_Joint_dynamics limits(::tesseract_msgs::msg::Joint::_limits_type arg)
  {
    msg_.limits = std::move(arg);
    return Init_Joint_dynamics(msg_);
  }

private:
  ::tesseract_msgs::msg::Joint msg_;
};

class Init_Joint_parent_to_joint_origin_transform
{
public:
  explicit Init_Joint_parent_to_joint_origin_transform(::tesseract_msgs::msg::Joint & msg)
  : msg_(msg)
  {}
  Init_Joint_limits parent_to_joint_origin_transform(::tesseract_msgs::msg::Joint::_parent_to_joint_origin_transform_type arg)
  {
    msg_.parent_to_joint_origin_transform = std::move(arg);
    return Init_Joint_limits(msg_);
  }

private:
  ::tesseract_msgs::msg::Joint msg_;
};

class Init_Joint_parent_link_name
{
public:
  explicit Init_Joint_parent_link_name(::tesseract_msgs::msg::Joint & msg)
  : msg_(msg)
  {}
  Init_Joint_parent_to_joint_origin_transform parent_link_name(::tesseract_msgs::msg::Joint::_parent_link_name_type arg)
  {
    msg_.parent_link_name = std::move(arg);
    return Init_Joint_parent_to_joint_origin_transform(msg_);
  }

private:
  ::tesseract_msgs::msg::Joint msg_;
};

class Init_Joint_child_link_name
{
public:
  explicit Init_Joint_child_link_name(::tesseract_msgs::msg::Joint & msg)
  : msg_(msg)
  {}
  Init_Joint_parent_link_name child_link_name(::tesseract_msgs::msg::Joint::_child_link_name_type arg)
  {
    msg_.child_link_name = std::move(arg);
    return Init_Joint_parent_link_name(msg_);
  }

private:
  ::tesseract_msgs::msg::Joint msg_;
};

class Init_Joint_axis
{
public:
  explicit Init_Joint_axis(::tesseract_msgs::msg::Joint & msg)
  : msg_(msg)
  {}
  Init_Joint_child_link_name axis(::tesseract_msgs::msg::Joint::_axis_type arg)
  {
    msg_.axis = std::move(arg);
    return Init_Joint_child_link_name(msg_);
  }

private:
  ::tesseract_msgs::msg::Joint msg_;
};

class Init_Joint_type
{
public:
  explicit Init_Joint_type(::tesseract_msgs::msg::Joint & msg)
  : msg_(msg)
  {}
  Init_Joint_axis type(::tesseract_msgs::msg::Joint::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Joint_axis(msg_);
  }

private:
  ::tesseract_msgs::msg::Joint msg_;
};

class Init_Joint_name
{
public:
  Init_Joint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Joint_type name(::tesseract_msgs::msg::Joint::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Joint_type(msg_);
  }

private:
  ::tesseract_msgs::msg::Joint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::Joint>()
{
  return tesseract_msgs::msg::builder::Init_Joint_name();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT__BUILDER_HPP_
