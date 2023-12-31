// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/StringPair.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__STRING_PAIR__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__STRING_PAIR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/string_pair__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_StringPair_second
{
public:
  explicit Init_StringPair_second(::tesseract_msgs::msg::StringPair & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::StringPair second(::tesseract_msgs::msg::StringPair::_second_type arg)
  {
    msg_.second = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::StringPair msg_;
};

class Init_StringPair_first
{
public:
  Init_StringPair_first()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StringPair_second first(::tesseract_msgs::msg::StringPair::_first_type arg)
  {
    msg_.first = std::move(arg);
    return Init_StringPair_second(msg_);
  }

private:
  ::tesseract_msgs::msg::StringPair msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::StringPair>()
{
  return tesseract_msgs::msg::builder::Init_StringPair_first();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__STRING_PAIR__BUILDER_HPP_
