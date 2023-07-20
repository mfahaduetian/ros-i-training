// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/Link.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__LINK__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__LINK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/link__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_Link_collision
{
public:
  explicit Init_Link_collision(::tesseract_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::Link collision(::tesseract_msgs::msg::Link::_collision_type arg)
  {
    msg_.collision = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::Link msg_;
};

class Init_Link_visual
{
public:
  explicit Init_Link_visual(::tesseract_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_collision visual(::tesseract_msgs::msg::Link::_visual_type arg)
  {
    msg_.visual = std::move(arg);
    return Init_Link_collision(msg_);
  }

private:
  ::tesseract_msgs::msg::Link msg_;
};

class Init_Link_inertial
{
public:
  explicit Init_Link_inertial(::tesseract_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_visual inertial(::tesseract_msgs::msg::Link::_inertial_type arg)
  {
    msg_.inertial = std::move(arg);
    return Init_Link_visual(msg_);
  }

private:
  ::tesseract_msgs::msg::Link msg_;
};

class Init_Link_name
{
public:
  Init_Link_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Link_inertial name(::tesseract_msgs::msg::Link::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Link_inertial(msg_);
  }

private:
  ::tesseract_msgs::msg::Link msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::Link>()
{
  return tesseract_msgs::msg::builder::Init_Link_name();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__LINK__BUILDER_HPP_
