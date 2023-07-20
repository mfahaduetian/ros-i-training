// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/TransformMap.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__TRANSFORM_MAP__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__TRANSFORM_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/transform_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_TransformMap_transforms
{
public:
  explicit Init_TransformMap_transforms(::tesseract_msgs::msg::TransformMap & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::TransformMap transforms(::tesseract_msgs::msg::TransformMap::_transforms_type arg)
  {
    msg_.transforms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::TransformMap msg_;
};

class Init_TransformMap_names
{
public:
  Init_TransformMap_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TransformMap_transforms names(::tesseract_msgs::msg::TransformMap::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_TransformMap_transforms(msg_);
  }

private:
  ::tesseract_msgs::msg::TransformMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::TransformMap>()
{
  return tesseract_msgs::msg::builder::Init_TransformMap_names();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__TRANSFORM_MAP__BUILDER_HPP_
