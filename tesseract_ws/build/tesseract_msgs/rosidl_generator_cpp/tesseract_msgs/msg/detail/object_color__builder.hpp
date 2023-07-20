// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/ObjectColor.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__OBJECT_COLOR__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__OBJECT_COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/object_color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectColor_collision
{
public:
  explicit Init_ObjectColor_collision(::tesseract_msgs::msg::ObjectColor & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::ObjectColor collision(::tesseract_msgs::msg::ObjectColor::_collision_type arg)
  {
    msg_.collision = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::ObjectColor msg_;
};

class Init_ObjectColor_visual
{
public:
  explicit Init_ObjectColor_visual(::tesseract_msgs::msg::ObjectColor & msg)
  : msg_(msg)
  {}
  Init_ObjectColor_collision visual(::tesseract_msgs::msg::ObjectColor::_visual_type arg)
  {
    msg_.visual = std::move(arg);
    return Init_ObjectColor_collision(msg_);
  }

private:
  ::tesseract_msgs::msg::ObjectColor msg_;
};

class Init_ObjectColor_name
{
public:
  Init_ObjectColor_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectColor_visual name(::tesseract_msgs::msg::ObjectColor::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ObjectColor_visual(msg_);
  }

private:
  ::tesseract_msgs::msg::ObjectColor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::ObjectColor>()
{
  return tesseract_msgs::msg::builder::Init_ObjectColor_name();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__OBJECT_COLOR__BUILDER_HPP_
