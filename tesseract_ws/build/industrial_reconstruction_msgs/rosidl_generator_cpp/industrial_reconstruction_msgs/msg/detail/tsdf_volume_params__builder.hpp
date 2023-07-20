// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from industrial_reconstruction_msgs:msg/TSDFVolumeParams.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__TSDF_VOLUME_PARAMS__BUILDER_HPP_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__TSDF_VOLUME_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "industrial_reconstruction_msgs/msg/detail/tsdf_volume_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace industrial_reconstruction_msgs
{

namespace msg
{

namespace builder
{

class Init_TSDFVolumeParams_max_box_values
{
public:
  explicit Init_TSDFVolumeParams_max_box_values(::industrial_reconstruction_msgs::msg::TSDFVolumeParams & msg)
  : msg_(msg)
  {}
  ::industrial_reconstruction_msgs::msg::TSDFVolumeParams max_box_values(::industrial_reconstruction_msgs::msg::TSDFVolumeParams::_max_box_values_type arg)
  {
    msg_.max_box_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::industrial_reconstruction_msgs::msg::TSDFVolumeParams msg_;
};

class Init_TSDFVolumeParams_min_box_values
{
public:
  explicit Init_TSDFVolumeParams_min_box_values(::industrial_reconstruction_msgs::msg::TSDFVolumeParams & msg)
  : msg_(msg)
  {}
  Init_TSDFVolumeParams_max_box_values min_box_values(::industrial_reconstruction_msgs::msg::TSDFVolumeParams::_min_box_values_type arg)
  {
    msg_.min_box_values = std::move(arg);
    return Init_TSDFVolumeParams_max_box_values(msg_);
  }

private:
  ::industrial_reconstruction_msgs::msg::TSDFVolumeParams msg_;
};

class Init_TSDFVolumeParams_sdf_trunc
{
public:
  explicit Init_TSDFVolumeParams_sdf_trunc(::industrial_reconstruction_msgs::msg::TSDFVolumeParams & msg)
  : msg_(msg)
  {}
  Init_TSDFVolumeParams_min_box_values sdf_trunc(::industrial_reconstruction_msgs::msg::TSDFVolumeParams::_sdf_trunc_type arg)
  {
    msg_.sdf_trunc = std::move(arg);
    return Init_TSDFVolumeParams_min_box_values(msg_);
  }

private:
  ::industrial_reconstruction_msgs::msg::TSDFVolumeParams msg_;
};

class Init_TSDFVolumeParams_voxel_length
{
public:
  Init_TSDFVolumeParams_voxel_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TSDFVolumeParams_sdf_trunc voxel_length(::industrial_reconstruction_msgs::msg::TSDFVolumeParams::_voxel_length_type arg)
  {
    msg_.voxel_length = std::move(arg);
    return Init_TSDFVolumeParams_sdf_trunc(msg_);
  }

private:
  ::industrial_reconstruction_msgs::msg::TSDFVolumeParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::industrial_reconstruction_msgs::msg::TSDFVolumeParams>()
{
  return industrial_reconstruction_msgs::msg::builder::Init_TSDFVolumeParams_voxel_length();
}

}  // namespace industrial_reconstruction_msgs

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__TSDF_VOLUME_PARAMS__BUILDER_HPP_
