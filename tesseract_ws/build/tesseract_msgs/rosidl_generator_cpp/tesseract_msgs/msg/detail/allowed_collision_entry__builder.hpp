// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/AllowedCollisionEntry.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/allowed_collision_entry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_AllowedCollisionEntry_reason
{
public:
  explicit Init_AllowedCollisionEntry_reason(::tesseract_msgs::msg::AllowedCollisionEntry & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::AllowedCollisionEntry reason(::tesseract_msgs::msg::AllowedCollisionEntry::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::AllowedCollisionEntry msg_;
};

class Init_AllowedCollisionEntry_link_2
{
public:
  explicit Init_AllowedCollisionEntry_link_2(::tesseract_msgs::msg::AllowedCollisionEntry & msg)
  : msg_(msg)
  {}
  Init_AllowedCollisionEntry_reason link_2(::tesseract_msgs::msg::AllowedCollisionEntry::_link_2_type arg)
  {
    msg_.link_2 = std::move(arg);
    return Init_AllowedCollisionEntry_reason(msg_);
  }

private:
  ::tesseract_msgs::msg::AllowedCollisionEntry msg_;
};

class Init_AllowedCollisionEntry_link_1
{
public:
  Init_AllowedCollisionEntry_link_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AllowedCollisionEntry_link_2 link_1(::tesseract_msgs::msg::AllowedCollisionEntry::_link_1_type arg)
  {
    msg_.link_1 = std::move(arg);
    return Init_AllowedCollisionEntry_link_2(msg_);
  }

private:
  ::tesseract_msgs::msg::AllowedCollisionEntry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::AllowedCollisionEntry>()
{
  return tesseract_msgs::msg::builder::Init_AllowedCollisionEntry_link_1();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__BUILDER_HPP_
