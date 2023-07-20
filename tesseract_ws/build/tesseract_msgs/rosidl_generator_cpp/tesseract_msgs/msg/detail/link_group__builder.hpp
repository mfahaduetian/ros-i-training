// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/LinkGroup.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__LINK_GROUP__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__LINK_GROUP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/link_group__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_LinkGroup_links
{
public:
  explicit Init_LinkGroup_links(::tesseract_msgs::msg::LinkGroup & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::LinkGroup links(::tesseract_msgs::msg::LinkGroup::_links_type arg)
  {
    msg_.links = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::LinkGroup msg_;
};

class Init_LinkGroup_name
{
public:
  Init_LinkGroup_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinkGroup_links name(::tesseract_msgs::msg::LinkGroup::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_LinkGroup_links(msg_);
  }

private:
  ::tesseract_msgs::msg::LinkGroup msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::LinkGroup>()
{
  return tesseract_msgs::msg::builder::Init_LinkGroup_name();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__LINK_GROUP__BUILDER_HPP_
