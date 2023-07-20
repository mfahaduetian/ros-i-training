// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/JointCalibration.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT_CALIBRATION__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT_CALIBRATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/joint_calibration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_JointCalibration_empty
{
public:
  explicit Init_JointCalibration_empty(::tesseract_msgs::msg::JointCalibration & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::JointCalibration empty(::tesseract_msgs::msg::JointCalibration::_empty_type arg)
  {
    msg_.empty = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::JointCalibration msg_;
};

class Init_JointCalibration_falling
{
public:
  explicit Init_JointCalibration_falling(::tesseract_msgs::msg::JointCalibration & msg)
  : msg_(msg)
  {}
  Init_JointCalibration_empty falling(::tesseract_msgs::msg::JointCalibration::_falling_type arg)
  {
    msg_.falling = std::move(arg);
    return Init_JointCalibration_empty(msg_);
  }

private:
  ::tesseract_msgs::msg::JointCalibration msg_;
};

class Init_JointCalibration_rising
{
public:
  explicit Init_JointCalibration_rising(::tesseract_msgs::msg::JointCalibration & msg)
  : msg_(msg)
  {}
  Init_JointCalibration_falling rising(::tesseract_msgs::msg::JointCalibration::_rising_type arg)
  {
    msg_.rising = std::move(arg);
    return Init_JointCalibration_falling(msg_);
  }

private:
  ::tesseract_msgs::msg::JointCalibration msg_;
};

class Init_JointCalibration_reference_position
{
public:
  Init_JointCalibration_reference_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointCalibration_rising reference_position(::tesseract_msgs::msg::JointCalibration::_reference_position_type arg)
  {
    msg_.reference_position = std::move(arg);
    return Init_JointCalibration_rising(msg_);
  }

private:
  ::tesseract_msgs::msg::JointCalibration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::JointCalibration>()
{
  return tesseract_msgs::msg::builder::Init_JointCalibration_reference_position();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT_CALIBRATION__BUILDER_HPP_
