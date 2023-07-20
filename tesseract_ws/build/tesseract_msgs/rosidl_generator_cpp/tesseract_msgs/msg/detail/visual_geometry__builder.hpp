// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/VisualGeometry.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__VISUAL_GEOMETRY__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__VISUAL_GEOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/visual_geometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_VisualGeometry_material
{
public:
  explicit Init_VisualGeometry_material(::tesseract_msgs::msg::VisualGeometry & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::VisualGeometry material(::tesseract_msgs::msg::VisualGeometry::_material_type arg)
  {
    msg_.material = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::VisualGeometry msg_;
};

class Init_VisualGeometry_geometry
{
public:
  explicit Init_VisualGeometry_geometry(::tesseract_msgs::msg::VisualGeometry & msg)
  : msg_(msg)
  {}
  Init_VisualGeometry_material geometry(::tesseract_msgs::msg::VisualGeometry::_geometry_type arg)
  {
    msg_.geometry = std::move(arg);
    return Init_VisualGeometry_material(msg_);
  }

private:
  ::tesseract_msgs::msg::VisualGeometry msg_;
};

class Init_VisualGeometry_origin
{
public:
  explicit Init_VisualGeometry_origin(::tesseract_msgs::msg::VisualGeometry & msg)
  : msg_(msg)
  {}
  Init_VisualGeometry_geometry origin(::tesseract_msgs::msg::VisualGeometry::_origin_type arg)
  {
    msg_.origin = std::move(arg);
    return Init_VisualGeometry_geometry(msg_);
  }

private:
  ::tesseract_msgs::msg::VisualGeometry msg_;
};

class Init_VisualGeometry_name
{
public:
  Init_VisualGeometry_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VisualGeometry_origin name(::tesseract_msgs::msg::VisualGeometry::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_VisualGeometry_origin(msg_);
  }

private:
  ::tesseract_msgs::msg::VisualGeometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::VisualGeometry>()
{
  return tesseract_msgs::msg::builder::Init_VisualGeometry_name();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__VISUAL_GEOMETRY__BUILDER_HPP_
