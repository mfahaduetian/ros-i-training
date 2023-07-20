// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/OctreeSubType.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__OCTREE_SUB_TYPE__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__OCTREE_SUB_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/octree_sub_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_OctreeSubType_type
{
public:
  Init_OctreeSubType_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tesseract_msgs::msg::OctreeSubType type(::tesseract_msgs::msg::OctreeSubType::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::OctreeSubType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::OctreeSubType>()
{
  return tesseract_msgs::msg::builder::Init_OctreeSubType_type();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__OCTREE_SUB_TYPE__BUILDER_HPP_
