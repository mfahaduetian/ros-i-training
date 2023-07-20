// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:srv/GetEnvironmentChanges.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__DETAIL__GET_ENVIRONMENT_CHANGES__BUILDER_HPP_
#define TESSERACT_MSGS__SRV__DETAIL__GET_ENVIRONMENT_CHANGES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/srv/detail/get_environment_changes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace srv
{

namespace builder
{

class Init_GetEnvironmentChanges_Request_revision
{
public:
  Init_GetEnvironmentChanges_Request_revision()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tesseract_msgs::srv::GetEnvironmentChanges_Request revision(::tesseract_msgs::srv::GetEnvironmentChanges_Request::_revision_type arg)
  {
    msg_.revision = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::srv::GetEnvironmentChanges_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::srv::GetEnvironmentChanges_Request>()
{
  return tesseract_msgs::srv::builder::Init_GetEnvironmentChanges_Request_revision();
}

}  // namespace tesseract_msgs


namespace tesseract_msgs
{

namespace srv
{

namespace builder
{

class Init_GetEnvironmentChanges_Response_commands
{
public:
  explicit Init_GetEnvironmentChanges_Response_commands(::tesseract_msgs::srv::GetEnvironmentChanges_Response & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::srv::GetEnvironmentChanges_Response commands(::tesseract_msgs::srv::GetEnvironmentChanges_Response::_commands_type arg)
  {
    msg_.commands = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::srv::GetEnvironmentChanges_Response msg_;
};

class Init_GetEnvironmentChanges_Response_revision
{
public:
  explicit Init_GetEnvironmentChanges_Response_revision(::tesseract_msgs::srv::GetEnvironmentChanges_Response & msg)
  : msg_(msg)
  {}
  Init_GetEnvironmentChanges_Response_commands revision(::tesseract_msgs::srv::GetEnvironmentChanges_Response::_revision_type arg)
  {
    msg_.revision = std::move(arg);
    return Init_GetEnvironmentChanges_Response_commands(msg_);
  }

private:
  ::tesseract_msgs::srv::GetEnvironmentChanges_Response msg_;
};

class Init_GetEnvironmentChanges_Response_id
{
public:
  explicit Init_GetEnvironmentChanges_Response_id(::tesseract_msgs::srv::GetEnvironmentChanges_Response & msg)
  : msg_(msg)
  {}
  Init_GetEnvironmentChanges_Response_revision id(::tesseract_msgs::srv::GetEnvironmentChanges_Response::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_GetEnvironmentChanges_Response_revision(msg_);
  }

private:
  ::tesseract_msgs::srv::GetEnvironmentChanges_Response msg_;
};

class Init_GetEnvironmentChanges_Response_success
{
public:
  Init_GetEnvironmentChanges_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetEnvironmentChanges_Response_id success(::tesseract_msgs::srv::GetEnvironmentChanges_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetEnvironmentChanges_Response_id(msg_);
  }

private:
  ::tesseract_msgs::srv::GetEnvironmentChanges_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::srv::GetEnvironmentChanges_Response>()
{
  return tesseract_msgs::srv::builder::Init_GetEnvironmentChanges_Response_success();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__SRV__DETAIL__GET_ENVIRONMENT_CHANGES__BUILDER_HPP_
