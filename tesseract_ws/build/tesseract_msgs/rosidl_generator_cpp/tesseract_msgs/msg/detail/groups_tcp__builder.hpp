// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/GroupsTCP.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__GROUPS_TCP__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__GROUPS_TCP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/groups_tcp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_GroupsTCP_tcp
{
public:
  explicit Init_GroupsTCP_tcp(::tesseract_msgs::msg::GroupsTCP & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::GroupsTCP tcp(::tesseract_msgs::msg::GroupsTCP::_tcp_type arg)
  {
    msg_.tcp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::GroupsTCP msg_;
};

class Init_GroupsTCP_name
{
public:
  Init_GroupsTCP_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GroupsTCP_tcp name(::tesseract_msgs::msg::GroupsTCP::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_GroupsTCP_tcp(msg_);
  }

private:
  ::tesseract_msgs::msg::GroupsTCP msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::GroupsTCP>()
{
  return tesseract_msgs::msg::builder::Init_GroupsTCP_name();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__GROUPS_TCP__BUILDER_HPP_
