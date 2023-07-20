// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/CollisionMarginOverrideType.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__COLLISION_MARGIN_OVERRIDE_TYPE__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__COLLISION_MARGIN_OVERRIDE_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/collision_margin_override_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_CollisionMarginOverrideType_type
{
public:
  Init_CollisionMarginOverrideType_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tesseract_msgs::msg::CollisionMarginOverrideType type(::tesseract_msgs::msg::CollisionMarginOverrideType::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::CollisionMarginOverrideType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::CollisionMarginOverrideType>()
{
  return tesseract_msgs::msg::builder::Init_CollisionMarginOverrideType_type();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__COLLISION_MARGIN_OVERRIDE_TYPE__BUILDER_HPP_
