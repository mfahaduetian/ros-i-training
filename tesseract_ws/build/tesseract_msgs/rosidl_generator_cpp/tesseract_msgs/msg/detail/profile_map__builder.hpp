// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/ProfileMap.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__PROFILE_MAP__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__PROFILE_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/profile_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_ProfileMap_pairs
{
public:
  Init_ProfileMap_pairs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tesseract_msgs::msg::ProfileMap pairs(::tesseract_msgs::msg::ProfileMap::_pairs_type arg)
  {
    msg_.pairs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::ProfileMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::ProfileMap>()
{
  return tesseract_msgs::msg::builder::Init_ProfileMap_pairs();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__PROFILE_MAP__BUILDER_HPP_
