// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/CollisionGeometry.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__COLLISION_GEOMETRY__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__COLLISION_GEOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/collision_geometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_CollisionGeometry_material
{
public:
  explicit Init_CollisionGeometry_material(::tesseract_msgs::msg::CollisionGeometry & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::CollisionGeometry material(::tesseract_msgs::msg::CollisionGeometry::_material_type arg)
  {
    msg_.material = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::CollisionGeometry msg_;
};

class Init_CollisionGeometry_geometry
{
public:
  explicit Init_CollisionGeometry_geometry(::tesseract_msgs::msg::CollisionGeometry & msg)
  : msg_(msg)
  {}
  Init_CollisionGeometry_material geometry(::tesseract_msgs::msg::CollisionGeometry::_geometry_type arg)
  {
    msg_.geometry = std::move(arg);
    return Init_CollisionGeometry_material(msg_);
  }

private:
  ::tesseract_msgs::msg::CollisionGeometry msg_;
};

class Init_CollisionGeometry_origin
{
public:
  explicit Init_CollisionGeometry_origin(::tesseract_msgs::msg::CollisionGeometry & msg)
  : msg_(msg)
  {}
  Init_CollisionGeometry_geometry origin(::tesseract_msgs::msg::CollisionGeometry::_origin_type arg)
  {
    msg_.origin = std::move(arg);
    return Init_CollisionGeometry_geometry(msg_);
  }

private:
  ::tesseract_msgs::msg::CollisionGeometry msg_;
};

class Init_CollisionGeometry_name
{
public:
  Init_CollisionGeometry_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CollisionGeometry_origin name(::tesseract_msgs::msg::CollisionGeometry::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_CollisionGeometry_origin(msg_);
  }

private:
  ::tesseract_msgs::msg::CollisionGeometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::CollisionGeometry>()
{
  return tesseract_msgs::msg::builder::Init_CollisionGeometry_name();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__COLLISION_GEOMETRY__BUILDER_HPP_
