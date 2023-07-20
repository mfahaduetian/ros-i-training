// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from snp_msgs:srv/GenerateToolPaths.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__SRV__DETAIL__GENERATE_TOOL_PATHS__BUILDER_HPP_
#define SNP_MSGS__SRV__DETAIL__GENERATE_TOOL_PATHS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "snp_msgs/srv/detail/generate_tool_paths__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace snp_msgs
{

namespace srv
{

namespace builder
{

class Init_GenerateToolPaths_Request_mesh_frame
{
public:
  explicit Init_GenerateToolPaths_Request_mesh_frame(::snp_msgs::srv::GenerateToolPaths_Request & msg)
  : msg_(msg)
  {}
  ::snp_msgs::srv::GenerateToolPaths_Request mesh_frame(::snp_msgs::srv::GenerateToolPaths_Request::_mesh_frame_type arg)
  {
    msg_.mesh_frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snp_msgs::srv::GenerateToolPaths_Request msg_;
};

class Init_GenerateToolPaths_Request_mesh_filename
{
public:
  Init_GenerateToolPaths_Request_mesh_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateToolPaths_Request_mesh_frame mesh_filename(::snp_msgs::srv::GenerateToolPaths_Request::_mesh_filename_type arg)
  {
    msg_.mesh_filename = std::move(arg);
    return Init_GenerateToolPaths_Request_mesh_frame(msg_);
  }

private:
  ::snp_msgs::srv::GenerateToolPaths_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::snp_msgs::srv::GenerateToolPaths_Request>()
{
  return snp_msgs::srv::builder::Init_GenerateToolPaths_Request_mesh_filename();
}

}  // namespace snp_msgs


namespace snp_msgs
{

namespace srv
{

namespace builder
{

class Init_GenerateToolPaths_Response_message
{
public:
  explicit Init_GenerateToolPaths_Response_message(::snp_msgs::srv::GenerateToolPaths_Response & msg)
  : msg_(msg)
  {}
  ::snp_msgs::srv::GenerateToolPaths_Response message(::snp_msgs::srv::GenerateToolPaths_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snp_msgs::srv::GenerateToolPaths_Response msg_;
};

class Init_GenerateToolPaths_Response_tool_paths
{
public:
  explicit Init_GenerateToolPaths_Response_tool_paths(::snp_msgs::srv::GenerateToolPaths_Response & msg)
  : msg_(msg)
  {}
  Init_GenerateToolPaths_Response_message tool_paths(::snp_msgs::srv::GenerateToolPaths_Response::_tool_paths_type arg)
  {
    msg_.tool_paths = std::move(arg);
    return Init_GenerateToolPaths_Response_message(msg_);
  }

private:
  ::snp_msgs::srv::GenerateToolPaths_Response msg_;
};

class Init_GenerateToolPaths_Response_success
{
public:
  Init_GenerateToolPaths_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateToolPaths_Response_tool_paths success(::snp_msgs::srv::GenerateToolPaths_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GenerateToolPaths_Response_tool_paths(msg_);
  }

private:
  ::snp_msgs::srv::GenerateToolPaths_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::snp_msgs::srv::GenerateToolPaths_Response>()
{
  return snp_msgs::srv::builder::Init_GenerateToolPaths_Response_success();
}

}  // namespace snp_msgs

#endif  // SNP_MSGS__SRV__DETAIL__GENERATE_TOOL_PATHS__BUILDER_HPP_
