// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from industrial_reconstruction_msgs:srv/StopReconstruction.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__STOP_RECONSTRUCTION__BUILDER_HPP_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__STOP_RECONSTRUCTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace industrial_reconstruction_msgs
{

namespace srv
{

namespace builder
{

class Init_StopReconstruction_Request_normal_filters
{
public:
  explicit Init_StopReconstruction_Request_normal_filters(::industrial_reconstruction_msgs::srv::StopReconstruction_Request & msg)
  : msg_(msg)
  {}
  ::industrial_reconstruction_msgs::srv::StopReconstruction_Request normal_filters(::industrial_reconstruction_msgs::srv::StopReconstruction_Request::_normal_filters_type arg)
  {
    msg_.normal_filters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::industrial_reconstruction_msgs::srv::StopReconstruction_Request msg_;
};

class Init_StopReconstruction_Request_min_num_faces
{
public:
  explicit Init_StopReconstruction_Request_min_num_faces(::industrial_reconstruction_msgs::srv::StopReconstruction_Request & msg)
  : msg_(msg)
  {}
  Init_StopReconstruction_Request_normal_filters min_num_faces(::industrial_reconstruction_msgs::srv::StopReconstruction_Request::_min_num_faces_type arg)
  {
    msg_.min_num_faces = std::move(arg);
    return Init_StopReconstruction_Request_normal_filters(msg_);
  }

private:
  ::industrial_reconstruction_msgs::srv::StopReconstruction_Request msg_;
};

class Init_StopReconstruction_Request_mesh_filepath
{
public:
  explicit Init_StopReconstruction_Request_mesh_filepath(::industrial_reconstruction_msgs::srv::StopReconstruction_Request & msg)
  : msg_(msg)
  {}
  Init_StopReconstruction_Request_min_num_faces mesh_filepath(::industrial_reconstruction_msgs::srv::StopReconstruction_Request::_mesh_filepath_type arg)
  {
    msg_.mesh_filepath = std::move(arg);
    return Init_StopReconstruction_Request_min_num_faces(msg_);
  }

private:
  ::industrial_reconstruction_msgs::srv::StopReconstruction_Request msg_;
};

class Init_StopReconstruction_Request_archive_directory
{
public:
  Init_StopReconstruction_Request_archive_directory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopReconstruction_Request_mesh_filepath archive_directory(::industrial_reconstruction_msgs::srv::StopReconstruction_Request::_archive_directory_type arg)
  {
    msg_.archive_directory = std::move(arg);
    return Init_StopReconstruction_Request_mesh_filepath(msg_);
  }

private:
  ::industrial_reconstruction_msgs::srv::StopReconstruction_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::industrial_reconstruction_msgs::srv::StopReconstruction_Request>()
{
  return industrial_reconstruction_msgs::srv::builder::Init_StopReconstruction_Request_archive_directory();
}

}  // namespace industrial_reconstruction_msgs


namespace industrial_reconstruction_msgs
{

namespace srv
{

namespace builder
{

class Init_StopReconstruction_Response_success
{
public:
  Init_StopReconstruction_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::industrial_reconstruction_msgs::srv::StopReconstruction_Response success(::industrial_reconstruction_msgs::srv::StopReconstruction_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::industrial_reconstruction_msgs::srv::StopReconstruction_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::industrial_reconstruction_msgs::srv::StopReconstruction_Response>()
{
  return industrial_reconstruction_msgs::srv::builder::Init_StopReconstruction_Response_success();
}

}  // namespace industrial_reconstruction_msgs

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__STOP_RECONSTRUCTION__BUILDER_HPP_
