// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from industrial_reconstruction_msgs:msg/NormalFilterParams.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__NORMAL_FILTER_PARAMS__BUILDER_HPP_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__NORMAL_FILTER_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "industrial_reconstruction_msgs/msg/detail/normal_filter_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace industrial_reconstruction_msgs
{

namespace msg
{

namespace builder
{

class Init_NormalFilterParams_angle
{
public:
  explicit Init_NormalFilterParams_angle(::industrial_reconstruction_msgs::msg::NormalFilterParams & msg)
  : msg_(msg)
  {}
  ::industrial_reconstruction_msgs::msg::NormalFilterParams angle(::industrial_reconstruction_msgs::msg::NormalFilterParams::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::industrial_reconstruction_msgs::msg::NormalFilterParams msg_;
};

class Init_NormalFilterParams_normal_direction
{
public:
  Init_NormalFilterParams_normal_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NormalFilterParams_angle normal_direction(::industrial_reconstruction_msgs::msg::NormalFilterParams::_normal_direction_type arg)
  {
    msg_.normal_direction = std::move(arg);
    return Init_NormalFilterParams_angle(msg_);
  }

private:
  ::industrial_reconstruction_msgs::msg::NormalFilterParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::industrial_reconstruction_msgs::msg::NormalFilterParams>()
{
  return industrial_reconstruction_msgs::msg::builder::Init_NormalFilterParams_normal_direction();
}

}  // namespace industrial_reconstruction_msgs

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__NORMAL_FILTER_PARAMS__BUILDER_HPP_
