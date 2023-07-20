// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from myworkcell_core:srv/LocalizePart.idl
// generated code does not contain a copyright notice

#ifndef MYWORKCELL_CORE__SRV__DETAIL__LOCALIZE_PART__BUILDER_HPP_
#define MYWORKCELL_CORE__SRV__DETAIL__LOCALIZE_PART__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "myworkcell_core/srv/detail/localize_part__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace myworkcell_core
{

namespace srv
{

namespace builder
{

class Init_LocalizePart_Request_base_frame
{
public:
  Init_LocalizePart_Request_base_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::myworkcell_core::srv::LocalizePart_Request base_frame(::myworkcell_core::srv::LocalizePart_Request::_base_frame_type arg)
  {
    msg_.base_frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myworkcell_core::srv::LocalizePart_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::myworkcell_core::srv::LocalizePart_Request>()
{
  return myworkcell_core::srv::builder::Init_LocalizePart_Request_base_frame();
}

}  // namespace myworkcell_core


namespace myworkcell_core
{

namespace srv
{

namespace builder
{

class Init_LocalizePart_Response_success
{
public:
  explicit Init_LocalizePart_Response_success(::myworkcell_core::srv::LocalizePart_Response & msg)
  : msg_(msg)
  {}
  ::myworkcell_core::srv::LocalizePart_Response success(::myworkcell_core::srv::LocalizePart_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myworkcell_core::srv::LocalizePart_Response msg_;
};

class Init_LocalizePart_Response_pose
{
public:
  Init_LocalizePart_Response_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalizePart_Response_success pose(::myworkcell_core::srv::LocalizePart_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_LocalizePart_Response_success(msg_);
  }

private:
  ::myworkcell_core::srv::LocalizePart_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::myworkcell_core::srv::LocalizePart_Response>()
{
  return myworkcell_core::srv::builder::Init_LocalizePart_Response_pose();
}

}  // namespace myworkcell_core

#endif  // MYWORKCELL_CORE__SRV__DETAIL__LOCALIZE_PART__BUILDER_HPP_
