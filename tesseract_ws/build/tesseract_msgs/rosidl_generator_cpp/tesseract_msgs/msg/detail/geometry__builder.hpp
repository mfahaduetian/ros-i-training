// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/Geometry.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__GEOMETRY__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__GEOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/geometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_Geometry_octomap_sub_type
{
public:
  explicit Init_Geometry_octomap_sub_type(::tesseract_msgs::msg::Geometry & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::Geometry octomap_sub_type(::tesseract_msgs::msg::Geometry::_octomap_sub_type_type arg)
  {
    msg_.octomap_sub_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::Geometry msg_;
};

class Init_Geometry_octomap
{
public:
  explicit Init_Geometry_octomap(::tesseract_msgs::msg::Geometry & msg)
  : msg_(msg)
  {}
  Init_Geometry_octomap_sub_type octomap(::tesseract_msgs::msg::Geometry::_octomap_type arg)
  {
    msg_.octomap = std::move(arg);
    return Init_Geometry_octomap_sub_type(msg_);
  }

private:
  ::tesseract_msgs::msg::Geometry msg_;
};

class Init_Geometry_mesh
{
public:
  explicit Init_Geometry_mesh(::tesseract_msgs::msg::Geometry & msg)
  : msg_(msg)
  {}
  Init_Geometry_octomap mesh(::tesseract_msgs::msg::Geometry::_mesh_type arg)
  {
    msg_.mesh = std::move(arg);
    return Init_Geometry_octomap(msg_);
  }

private:
  ::tesseract_msgs::msg::Geometry msg_;
};

class Init_Geometry_plane_coeff
{
public:
  explicit Init_Geometry_plane_coeff(::tesseract_msgs::msg::Geometry & msg)
  : msg_(msg)
  {}
  Init_Geometry_mesh plane_coeff(::tesseract_msgs::msg::Geometry::_plane_coeff_type arg)
  {
    msg_.plane_coeff = std::move(arg);
    return Init_Geometry_mesh(msg_);
  }

private:
  ::tesseract_msgs::msg::Geometry msg_;
};

class Init_Geometry_box_dimensions
{
public:
  explicit Init_Geometry_box_dimensions(::tesseract_msgs::msg::Geometry & msg)
  : msg_(msg)
  {}
  Init_Geometry_plane_coeff box_dimensions(::tesseract_msgs::msg::Geometry::_box_dimensions_type arg)
  {
    msg_.box_dimensions = std::move(arg);
    return Init_Geometry_plane_coeff(msg_);
  }

private:
  ::tesseract_msgs::msg::Geometry msg_;
};

class Init_Geometry_cone_dimensions
{
public:
  explicit Init_Geometry_cone_dimensions(::tesseract_msgs::msg::Geometry & msg)
  : msg_(msg)
  {}
  Init_Geometry_box_dimensions cone_dimensions(::tesseract_msgs::msg::Geometry::_cone_dimensions_type arg)
  {
    msg_.cone_dimensions = std::move(arg);
    return Init_Geometry_box_dimensions(msg_);
  }

private:
  ::tesseract_msgs::msg::Geometry msg_;
};

class Init_Geometry_capsule_dimensions
{
public:
  explicit Init_Geometry_capsule_dimensions(::tesseract_msgs::msg::Geometry & msg)
  : msg_(msg)
  {}
  Init_Geometry_cone_dimensions capsule_dimensions(::tesseract_msgs::msg::Geometry::_capsule_dimensions_type arg)
  {
    msg_.capsule_dimensions = std::move(arg);
    return Init_Geometry_cone_dimensions(msg_);
  }

private:
  ::tesseract_msgs::msg::Geometry msg_;
};

class Init_Geometry_cylinder_dimensions
{
public:
  explicit Init_Geometry_cylinder_dimensions(::tesseract_msgs::msg::Geometry & msg)
  : msg_(msg)
  {}
  Init_Geometry_capsule_dimensions cylinder_dimensions(::tesseract_msgs::msg::Geometry::_cylinder_dimensions_type arg)
  {
    msg_.cylinder_dimensions = std::move(arg);
    return Init_Geometry_capsule_dimensions(msg_);
  }

private:
  ::tesseract_msgs::msg::Geometry msg_;
};

class Init_Geometry_sphere_radius
{
public:
  explicit Init_Geometry_sphere_radius(::tesseract_msgs::msg::Geometry & msg)
  : msg_(msg)
  {}
  Init_Geometry_cylinder_dimensions sphere_radius(::tesseract_msgs::msg::Geometry::_sphere_radius_type arg)
  {
    msg_.sphere_radius = std::move(arg);
    return Init_Geometry_cylinder_dimensions(msg_);
  }

private:
  ::tesseract_msgs::msg::Geometry msg_;
};

class Init_Geometry_type
{
public:
  Init_Geometry_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Geometry_sphere_radius type(::tesseract_msgs::msg::Geometry::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Geometry_sphere_radius(msg_);
  }

private:
  ::tesseract_msgs::msg::Geometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::Geometry>()
{
  return tesseract_msgs::msg::builder::Init_Geometry_type();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__GEOMETRY__BUILDER_HPP_
