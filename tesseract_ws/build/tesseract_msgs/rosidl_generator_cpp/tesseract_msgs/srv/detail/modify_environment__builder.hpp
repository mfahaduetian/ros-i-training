// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:srv/ModifyEnvironment.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__DETAIL__MODIFY_ENVIRONMENT__BUILDER_HPP_
#define TESSERACT_MSGS__SRV__DETAIL__MODIFY_ENVIRONMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/srv/detail/modify_environment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace srv
{

namespace builder
{

class Init_ModifyEnvironment_Request_commands
{
public:
  explicit Init_ModifyEnvironment_Request_commands(::tesseract_msgs::srv::ModifyEnvironment_Request & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::srv::ModifyEnvironment_Request commands(::tesseract_msgs::srv::ModifyEnvironment_Request::_commands_type arg)
  {
    msg_.commands = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::srv::ModifyEnvironment_Request msg_;
};

class Init_ModifyEnvironment_Request_append
{
public:
  explicit Init_ModifyEnvironment_Request_append(::tesseract_msgs::srv::ModifyEnvironment_Request & msg)
  : msg_(msg)
  {}
  Init_ModifyEnvironment_Request_commands append(::tesseract_msgs::srv::ModifyEnvironment_Request::_append_type arg)
  {
    msg_.append = std::move(arg);
    return Init_ModifyEnvironment_Request_commands(msg_);
  }

private:
  ::tesseract_msgs::srv::ModifyEnvironment_Request msg_;
};

class Init_ModifyEnvironment_Request_revision
{
public:
  explicit Init_ModifyEnvironment_Request_revision(::tesseract_msgs::srv::ModifyEnvironment_Request & msg)
  : msg_(msg)
  {}
  Init_ModifyEnvironment_Request_append revision(::tesseract_msgs::srv::ModifyEnvironment_Request::_revision_type arg)
  {
    msg_.revision = std::move(arg);
    return Init_ModifyEnvironment_Request_append(msg_);
  }

private:
  ::tesseract_msgs::srv::ModifyEnvironment_Request msg_;
};

class Init_ModifyEnvironment_Request_id
{
public:
  Init_ModifyEnvironment_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModifyEnvironment_Request_revision id(::tesseract_msgs::srv::ModifyEnvironment_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ModifyEnvironment_Request_revision(msg_);
  }

private:
  ::tesseract_msgs::srv::ModifyEnvironment_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::srv::ModifyEnvironment_Request>()
{
  return tesseract_msgs::srv::builder::Init_ModifyEnvironment_Request_id();
}

}  // namespace tesseract_msgs


namespace tesseract_msgs
{

namespace srv
{

namespace builder
{

class Init_ModifyEnvironment_Response_revision
{
public:
  explicit Init_ModifyEnvironment_Response_revision(::tesseract_msgs::srv::ModifyEnvironment_Response & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::srv::ModifyEnvironment_Response revision(::tesseract_msgs::srv::ModifyEnvironment_Response::_revision_type arg)
  {
    msg_.revision = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::srv::ModifyEnvironment_Response msg_;
};

class Init_ModifyEnvironment_Response_success
{
public:
  Init_ModifyEnvironment_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModifyEnvironment_Response_revision success(::tesseract_msgs::srv::ModifyEnvironment_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ModifyEnvironment_Response_revision(msg_);
  }

private:
  ::tesseract_msgs::srv::ModifyEnvironment_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::srv::ModifyEnvironment_Response>()
{
  return tesseract_msgs::srv::builder::Init_ModifyEnvironment_Response_success();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__SRV__DETAIL__MODIFY_ENVIRONMENT__BUILDER_HPP_
