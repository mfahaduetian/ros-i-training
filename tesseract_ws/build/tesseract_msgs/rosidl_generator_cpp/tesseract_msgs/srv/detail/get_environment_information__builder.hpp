// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:srv/GetEnvironmentInformation.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__DETAIL__GET_ENVIRONMENT_INFORMATION__BUILDER_HPP_
#define TESSERACT_MSGS__SRV__DETAIL__GET_ENVIRONMENT_INFORMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/srv/detail/get_environment_information__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace srv
{

namespace builder
{

class Init_GetEnvironmentInformation_Request_flags
{
public:
  Init_GetEnvironmentInformation_Request_flags()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tesseract_msgs::srv::GetEnvironmentInformation_Request flags(::tesseract_msgs::srv::GetEnvironmentInformation_Request::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::srv::GetEnvironmentInformation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::srv::GetEnvironmentInformation_Request>()
{
  return tesseract_msgs::srv::builder::Init_GetEnvironmentInformation_Request_flags();
}

}  // namespace tesseract_msgs


namespace tesseract_msgs
{

namespace srv
{

namespace builder
{

class Init_GetEnvironmentInformation_Response_joint_states
{
public:
  explicit Init_GetEnvironmentInformation_Response_joint_states(::tesseract_msgs::srv::GetEnvironmentInformation_Response & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::srv::GetEnvironmentInformation_Response joint_states(::tesseract_msgs::srv::GetEnvironmentInformation_Response::_joint_states_type arg)
  {
    msg_.joint_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::srv::GetEnvironmentInformation_Response msg_;
};

class Init_GetEnvironmentInformation_Response_kinematics_information
{
public:
  explicit Init_GetEnvironmentInformation_Response_kinematics_information(::tesseract_msgs::srv::GetEnvironmentInformation_Response & msg)
  : msg_(msg)
  {}
  Init_GetEnvironmentInformation_Response_joint_states kinematics_information(::tesseract_msgs::srv::GetEnvironmentInformation_Response::_kinematics_information_type arg)
  {
    msg_.kinematics_information = std::move(arg);
    return Init_GetEnvironmentInformation_Response_joint_states(msg_);
  }

private:
  ::tesseract_msgs::srv::GetEnvironmentInformation_Response msg_;
};

class Init_GetEnvironmentInformation_Response_allowed_collision_matrix
{
public:
  explicit Init_GetEnvironmentInformation_Response_allowed_collision_matrix(::tesseract_msgs::srv::GetEnvironmentInformation_Response & msg)
  : msg_(msg)
  {}
  Init_GetEnvironmentInformation_Response_kinematics_information allowed_collision_matrix(::tesseract_msgs::srv::GetEnvironmentInformation_Response::_allowed_collision_matrix_type arg)
  {
    msg_.allowed_collision_matrix = std::move(arg);
    return Init_GetEnvironmentInformation_Response_kinematics_information(msg_);
  }

private:
  ::tesseract_msgs::srv::GetEnvironmentInformation_Response msg_;
};

class Init_GetEnvironmentInformation_Response_joint_transforms
{
public:
  explicit Init_GetEnvironmentInformation_Response_joint_transforms(::tesseract_msgs::srv::GetEnvironmentInformation_Response & msg)
  : msg_(msg)
  {}
  Init_GetEnvironmentInformation_Response_allowed_collision_matrix joint_transforms(::tesseract_msgs::srv::GetEnvironmentInformation_Response::_joint_transforms_type arg)
  {
    msg_.joint_transforms = std::move(arg);
    return Init_GetEnvironmentInformation_Response_allowed_collision_matrix(msg_);
  }

private:
  ::tesseract_msgs::srv::GetEnvironmentInformation_Response msg_;
};

class Init_GetEnvironmentInformation_Response_link_transforms
{
public:
  explicit Init_GetEnvironmentInformation_Response_link_transforms(::tesseract_msgs::srv::GetEnvironmentInformation_Response & msg)
  : msg_(msg)
  {}
  Init_GetEnvironmentInformation_Response_joint_transforms link_transforms(::tesseract_msgs::srv::GetEnvironmentInformation_Response::_link_transforms_type arg)
  {
    msg_.link_transforms = std::move(arg);
    return Init_GetEnvironmentInformation_Response_joint_transforms(msg_);
  }

private:
  ::tesseract_msgs::srv::GetEnvironmentInformation_Response msg_;
};

class Init_GetEnvironmentInformation_Response_active_joint_names
{
public:
  explicit Init_GetEnvironmentInformation_Response_active_joint_names(::tesseract_msgs::srv::GetEnvironmentInformation_Response & msg)
  : msg_(msg)
  {}
  Init_GetEnvironmentInformation_Response_link_transforms active_joint_names(::tesseract_msgs::srv::GetEnvironmentInformation_Response::_active_joint_names_type arg)
  {
    msg_.active_joint_names = std::move(arg);
    return Init_GetEnvironmentInformation_Response_link_transforms(msg_);
  }

private:
  ::tesseract_msgs::srv::GetEnvironmentInformation_Response msg_;
};

class Init_GetEnvironmentInformation_Response_active_link_names
{
public:
  explicit Init_GetEnvironmentInformation_Response_active_link_names(::tesseract_msgs::srv::GetEnvironmentInformation_Response & msg)
  : msg_(msg)
  {}
  Init_GetEnvironmentInformation_Response_active_joint_names active_link_names(::tesseract_msgs::srv::GetEnvironmentInformation_Response::_active_link_names_type arg)
  {
    msg_.active_link_names = std::move(arg);
    return Init_GetEnvironmentInformation_Response_active_joint_names(msg_);
  }

private:
  ::tesseract_msgs::srv::GetEnvironmentInformation_Response msg_;
};

class Init_GetEnvironmentInformation_Response_joint_names
{
public:
  explicit Init_GetEnvironmentInformation_Response_joint_names(::tesseract_msgs::srv::GetEnvironmentInformation_Response & msg)
  : msg_(msg)
  {}
  Init_GetEnvironmentInformation_Response_active_link_names joint_names(::tesseract_msgs::srv::GetEnvironmentInformation_Response::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_GetEnvironmentInformation_Response_active_link_names(msg_);
  }

private:
  ::tesseract_msgs::srv::GetEnvironmentInformation_Response msg_;
};

class Init_GetEnvironmentInformation_Response_link_names
{
public:
  explicit Init_GetEnvironmentInformation_Response_link_names(::tesseract_msgs::srv::GetEnvironmentInformation_Response & msg)
  : msg_(msg)
  {}
  Init_GetEnvironmentInformation_Response_joint_names link_names(::tesseract_msgs::srv::GetEnvironmentInformation_Response::_link_names_type arg)
  {
    msg_.link_names = std::move(arg);
    return Init_GetEnvironmentInformation_Response_joint_names(msg_);
  }

private:
  ::tesseract_msgs::srv::GetEnvironmentInformation_Response msg_;
};

class Init_GetEnvironmentInformation_Response_joints
{
public:
  explicit Init_GetEnvironmentInformation_Response_joints(::tesseract_msgs::srv::GetEnvironmentInformation_Response & msg)
  : msg_(msg)
  {}
  Init_GetEnvironmentInformation_Response_link_names joints(::tesseract_msgs::srv::GetEnvironmentInformation_Response::_joints_type arg)
  {
    msg_.joints = std::move(arg);
    return Init_GetEnvironmentInformation_Response_link_names(msg_);
  }

private:
  ::tesseract_msgs::srv::GetEnvironmentInformation_Response msg_;
};

class Init_GetEnvironmentInformation_Response_links
{
public:
  explicit Init_GetEnvironmentInformation_Response_links(::tesseract_msgs::srv::GetEnvironmentInformation_Response & msg)
  : msg_(msg)
  {}
  Init_GetEnvironmentInformation_Response_joints links(::tesseract_msgs::srv::GetEnvironmentInformation_Response::_links_type arg)
  {
    msg_.links = std::move(arg);
    return Init_GetEnvironmentInformation_Response_joints(msg_);
  }

private:
  ::tesseract_msgs::srv::GetEnvironmentInformation_Response msg_;
};

class Init_GetEnvironmentInformation_Response_command_history
{
public:
  explicit Init_GetEnvironmentInformation_Response_command_history(::tesseract_msgs::srv::GetEnvironmentInformation_Response & msg)
  : msg_(msg)
  {}
  Init_GetEnvironmentInformation_Response_links command_history(::tesseract_msgs::srv::GetEnvironmentInformation_Response::_command_history_type arg)
  {
    msg_.command_history = std::move(arg);
    return Init_GetEnvironmentInformation_Response_links(msg_);
  }

private:
  ::tesseract_msgs::srv::GetEnvironmentInformation_Response msg_;
};

class Init_GetEnvironmentInformation_Response_revision
{
public:
  explicit Init_GetEnvironmentInformation_Response_revision(::tesseract_msgs::srv::GetEnvironmentInformation_Response & msg)
  : msg_(msg)
  {}
  Init_GetEnvironmentInformation_Response_command_history revision(::tesseract_msgs::srv::GetEnvironmentInformation_Response::_revision_type arg)
  {
    msg_.revision = std::move(arg);
    return Init_GetEnvironmentInformation_Response_command_history(msg_);
  }

private:
  ::tesseract_msgs::srv::GetEnvironmentInformation_Response msg_;
};

class Init_GetEnvironmentInformation_Response_id
{
public:
  explicit Init_GetEnvironmentInformation_Response_id(::tesseract_msgs::srv::GetEnvironmentInformation_Response & msg)
  : msg_(msg)
  {}
  Init_GetEnvironmentInformation_Response_revision id(::tesseract_msgs::srv::GetEnvironmentInformation_Response::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_GetEnvironmentInformation_Response_revision(msg_);
  }

private:
  ::tesseract_msgs::srv::GetEnvironmentInformation_Response msg_;
};

class Init_GetEnvironmentInformation_Response_success
{
public:
  Init_GetEnvironmentInformation_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetEnvironmentInformation_Response_id success(::tesseract_msgs::srv::GetEnvironmentInformation_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetEnvironmentInformation_Response_id(msg_);
  }

private:
  ::tesseract_msgs::srv::GetEnvironmentInformation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::srv::GetEnvironmentInformation_Response>()
{
  return tesseract_msgs::srv::builder::Init_GetEnvironmentInformation_Response_success();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__SRV__DETAIL__GET_ENVIRONMENT_INFORMATION__BUILDER_HPP_
