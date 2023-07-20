// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/ContactMarginPair.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__CONTACT_MARGIN_PAIR__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__CONTACT_MARGIN_PAIR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/contact_margin_pair__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_ContactMarginPair_second
{
public:
  explicit Init_ContactMarginPair_second(::tesseract_msgs::msg::ContactMarginPair & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::ContactMarginPair second(::tesseract_msgs::msg::ContactMarginPair::_second_type arg)
  {
    msg_.second = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::ContactMarginPair msg_;
};

class Init_ContactMarginPair_first
{
public:
  Init_ContactMarginPair_first()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ContactMarginPair_second first(::tesseract_msgs::msg::ContactMarginPair::_first_type arg)
  {
    msg_.first = std::move(arg);
    return Init_ContactMarginPair_second(msg_);
  }

private:
  ::tesseract_msgs::msg::ContactMarginPair msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::ContactMarginPair>()
{
  return tesseract_msgs::msg::builder::Init_ContactMarginPair_first();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__CONTACT_MARGIN_PAIR__BUILDER_HPP_
