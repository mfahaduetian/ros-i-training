// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/CollisionMarginData.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__COLLISION_MARGIN_DATA__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__COLLISION_MARGIN_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/collision_margin_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_CollisionMarginData_margin_pairs
{
public:
  explicit Init_CollisionMarginData_margin_pairs(::tesseract_msgs::msg::CollisionMarginData & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::CollisionMarginData margin_pairs(::tesseract_msgs::msg::CollisionMarginData::_margin_pairs_type arg)
  {
    msg_.margin_pairs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::CollisionMarginData msg_;
};

class Init_CollisionMarginData_default_margin
{
public:
  Init_CollisionMarginData_default_margin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CollisionMarginData_margin_pairs default_margin(::tesseract_msgs::msg::CollisionMarginData::_default_margin_type arg)
  {
    msg_.default_margin = std::move(arg);
    return Init_CollisionMarginData_margin_pairs(msg_);
  }

private:
  ::tesseract_msgs::msg::CollisionMarginData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::CollisionMarginData>()
{
  return tesseract_msgs::msg::builder::Init_CollisionMarginData_default_margin();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__COLLISION_MARGIN_DATA__BUILDER_HPP_
