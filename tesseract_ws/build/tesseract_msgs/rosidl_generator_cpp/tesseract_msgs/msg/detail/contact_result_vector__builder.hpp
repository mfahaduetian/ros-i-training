// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/ContactResultVector.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__CONTACT_RESULT_VECTOR__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__CONTACT_RESULT_VECTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/contact_result_vector__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_ContactResultVector_contacts
{
public:
  Init_ContactResultVector_contacts()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tesseract_msgs::msg::ContactResultVector contacts(::tesseract_msgs::msg::ContactResultVector::_contacts_type arg)
  {
    msg_.contacts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::ContactResultVector msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::ContactResultVector>()
{
  return tesseract_msgs::msg::builder::Init_ContactResultVector_contacts();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__CONTACT_RESULT_VECTOR__BUILDER_HPP_
