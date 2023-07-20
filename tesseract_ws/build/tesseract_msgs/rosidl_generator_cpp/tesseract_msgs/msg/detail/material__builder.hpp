// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/Material.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__MATERIAL__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__MATERIAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/material__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_Material_empty
{
public:
  explicit Init_Material_empty(::tesseract_msgs::msg::Material & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::Material empty(::tesseract_msgs::msg::Material::_empty_type arg)
  {
    msg_.empty = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::Material msg_;
};

class Init_Material_color
{
public:
  explicit Init_Material_color(::tesseract_msgs::msg::Material & msg)
  : msg_(msg)
  {}
  Init_Material_empty color(::tesseract_msgs::msg::Material::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_Material_empty(msg_);
  }

private:
  ::tesseract_msgs::msg::Material msg_;
};

class Init_Material_texture_filename
{
public:
  explicit Init_Material_texture_filename(::tesseract_msgs::msg::Material & msg)
  : msg_(msg)
  {}
  Init_Material_color texture_filename(::tesseract_msgs::msg::Material::_texture_filename_type arg)
  {
    msg_.texture_filename = std::move(arg);
    return Init_Material_color(msg_);
  }

private:
  ::tesseract_msgs::msg::Material msg_;
};

class Init_Material_name
{
public:
  Init_Material_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Material_texture_filename name(::tesseract_msgs::msg::Material::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Material_texture_filename(msg_);
  }

private:
  ::tesseract_msgs::msg::Material msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::Material>()
{
  return tesseract_msgs::msg::builder::Init_Material_name();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__MATERIAL__BUILDER_HPP_
