// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/GroupsTCPs.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__GROUPS_TC_PS__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__GROUPS_TC_PS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/groups_tc_ps__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_GroupsTCPs_tcps
{
public:
  explicit Init_GroupsTCPs_tcps(::tesseract_msgs::msg::GroupsTCPs & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::GroupsTCPs tcps(::tesseract_msgs::msg::GroupsTCPs::_tcps_type arg)
  {
    msg_.tcps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::GroupsTCPs msg_;
};

class Init_GroupsTCPs_name
{
public:
  Init_GroupsTCPs_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GroupsTCPs_tcps name(::tesseract_msgs::msg::GroupsTCPs::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_GroupsTCPs_tcps(msg_);
  }

private:
  ::tesseract_msgs::msg::GroupsTCPs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::GroupsTCPs>()
{
  return tesseract_msgs::msg::builder::Init_GroupsTCPs_name();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__GROUPS_TC_PS__BUILDER_HPP_
