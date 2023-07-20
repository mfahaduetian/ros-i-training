// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from industrial_reconstruction_msgs:srv/StartReconstruction.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__START_RECONSTRUCTION__BUILDER_HPP_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__START_RECONSTRUCTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "industrial_reconstruction_msgs/srv/detail/start_reconstruction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace industrial_reconstruction_msgs
{

namespace srv
{

namespace builder
{

class Init_StartReconstruction_Request_rgbd_params
{
public:
  explicit Init_StartReconstruction_Request_rgbd_params(::industrial_reconstruction_msgs::srv::StartReconstruction_Request & msg)
  : msg_(msg)
  {}
  ::industrial_reconstruction_msgs::srv::StartReconstruction_Request rgbd_params(::industrial_reconstruction_msgs::srv::StartReconstruction_Request::_rgbd_params_type arg)
  {
    msg_.rgbd_params = std::move(arg);
    return std::move(msg_);
  }

private:
  ::industrial_reconstruction_msgs::srv::StartReconstruction_Request msg_;
};

class Init_StartReconstruction_Request_tsdf_params
{
public:
  explicit Init_StartReconstruction_Request_tsdf_params(::industrial_reconstruction_msgs::srv::StartReconstruction_Request & msg)
  : msg_(msg)
  {}
  Init_StartReconstruction_Request_rgbd_params tsdf_params(::industrial_reconstruction_msgs::srv::StartReconstruction_Request::_tsdf_params_type arg)
  {
    msg_.tsdf_params = std::move(arg);
    return Init_StartReconstruction_Request_rgbd_params(msg_);
  }

private:
  ::industrial_reconstruction_msgs::srv::StartReconstruction_Request msg_;
};

class Init_StartReconstruction_Request_live
{
public:
  explicit Init_StartReconstruction_Request_live(::industrial_reconstruction_msgs::srv::StartReconstruction_Request & msg)
  : msg_(msg)
  {}
  Init_StartReconstruction_Request_tsdf_params live(::industrial_reconstruction_msgs::srv::StartReconstruction_Request::_live_type arg)
  {
    msg_.live = std::move(arg);
    return Init_StartReconstruction_Request_tsdf_params(msg_);
  }

private:
  ::industrial_reconstruction_msgs::srv::StartReconstruction_Request msg_;
};

class Init_StartReconstruction_Request_rotational_distance
{
public:
  explicit Init_StartReconstruction_Request_rotational_distance(::industrial_reconstruction_msgs::srv::StartReconstruction_Request & msg)
  : msg_(msg)
  {}
  Init_StartReconstruction_Request_live rotational_distance(::industrial_reconstruction_msgs::srv::StartReconstruction_Request::_rotational_distance_type arg)
  {
    msg_.rotational_distance = std::move(arg);
    return Init_StartReconstruction_Request_live(msg_);
  }

private:
  ::industrial_reconstruction_msgs::srv::StartReconstruction_Request msg_;
};

class Init_StartReconstruction_Request_translation_distance
{
public:
  explicit Init_StartReconstruction_Request_translation_distance(::industrial_reconstruction_msgs::srv::StartReconstruction_Request & msg)
  : msg_(msg)
  {}
  Init_StartReconstruction_Request_rotational_distance translation_distance(::industrial_reconstruction_msgs::srv::StartReconstruction_Request::_translation_distance_type arg)
  {
    msg_.translation_distance = std::move(arg);
    return Init_StartReconstruction_Request_rotational_distance(msg_);
  }

private:
  ::industrial_reconstruction_msgs::srv::StartReconstruction_Request msg_;
};

class Init_StartReconstruction_Request_relative_frame
{
public:
  explicit Init_StartReconstruction_Request_relative_frame(::industrial_reconstruction_msgs::srv::StartReconstruction_Request & msg)
  : msg_(msg)
  {}
  Init_StartReconstruction_Request_translation_distance relative_frame(::industrial_reconstruction_msgs::srv::StartReconstruction_Request::_relative_frame_type arg)
  {
    msg_.relative_frame = std::move(arg);
    return Init_StartReconstruction_Request_translation_distance(msg_);
  }

private:
  ::industrial_reconstruction_msgs::srv::StartReconstruction_Request msg_;
};

class Init_StartReconstruction_Request_tracking_frame
{
public:
  Init_StartReconstruction_Request_tracking_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartReconstruction_Request_relative_frame tracking_frame(::industrial_reconstruction_msgs::srv::StartReconstruction_Request::_tracking_frame_type arg)
  {
    msg_.tracking_frame = std::move(arg);
    return Init_StartReconstruction_Request_relative_frame(msg_);
  }

private:
  ::industrial_reconstruction_msgs::srv::StartReconstruction_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::industrial_reconstruction_msgs::srv::StartReconstruction_Request>()
{
  return industrial_reconstruction_msgs::srv::builder::Init_StartReconstruction_Request_tracking_frame();
}

}  // namespace industrial_reconstruction_msgs


namespace industrial_reconstruction_msgs
{

namespace srv
{

namespace builder
{

class Init_StartReconstruction_Response_success
{
public:
  Init_StartReconstruction_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::industrial_reconstruction_msgs::srv::StartReconstruction_Response success(::industrial_reconstruction_msgs::srv::StartReconstruction_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::industrial_reconstruction_msgs::srv::StartReconstruction_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::industrial_reconstruction_msgs::srv::StartReconstruction_Response>()
{
  return industrial_reconstruction_msgs::srv::builder::Init_StartReconstruction_Response_success();
}

}  // namespace industrial_reconstruction_msgs

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__START_RECONSTRUCTION__BUILDER_HPP_
