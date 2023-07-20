// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from industrial_reconstruction_msgs:msg/RGBDImageParams.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__RGBD_IMAGE_PARAMS__BUILDER_HPP_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__RGBD_IMAGE_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "industrial_reconstruction_msgs/msg/detail/rgbd_image_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace industrial_reconstruction_msgs
{

namespace msg
{

namespace builder
{

class Init_RGBDImageParams_convert_rgb_to_intensity
{
public:
  explicit Init_RGBDImageParams_convert_rgb_to_intensity(::industrial_reconstruction_msgs::msg::RGBDImageParams & msg)
  : msg_(msg)
  {}
  ::industrial_reconstruction_msgs::msg::RGBDImageParams convert_rgb_to_intensity(::industrial_reconstruction_msgs::msg::RGBDImageParams::_convert_rgb_to_intensity_type arg)
  {
    msg_.convert_rgb_to_intensity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::industrial_reconstruction_msgs::msg::RGBDImageParams msg_;
};

class Init_RGBDImageParams_depth_trunc
{
public:
  explicit Init_RGBDImageParams_depth_trunc(::industrial_reconstruction_msgs::msg::RGBDImageParams & msg)
  : msg_(msg)
  {}
  Init_RGBDImageParams_convert_rgb_to_intensity depth_trunc(::industrial_reconstruction_msgs::msg::RGBDImageParams::_depth_trunc_type arg)
  {
    msg_.depth_trunc = std::move(arg);
    return Init_RGBDImageParams_convert_rgb_to_intensity(msg_);
  }

private:
  ::industrial_reconstruction_msgs::msg::RGBDImageParams msg_;
};

class Init_RGBDImageParams_depth_scale
{
public:
  Init_RGBDImageParams_depth_scale()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RGBDImageParams_depth_trunc depth_scale(::industrial_reconstruction_msgs::msg::RGBDImageParams::_depth_scale_type arg)
  {
    msg_.depth_scale = std::move(arg);
    return Init_RGBDImageParams_depth_trunc(msg_);
  }

private:
  ::industrial_reconstruction_msgs::msg::RGBDImageParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::industrial_reconstruction_msgs::msg::RGBDImageParams>()
{
  return industrial_reconstruction_msgs::msg::builder::Init_RGBDImageParams_depth_scale();
}

}  // namespace industrial_reconstruction_msgs

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__RGBD_IMAGE_PARAMS__BUILDER_HPP_
