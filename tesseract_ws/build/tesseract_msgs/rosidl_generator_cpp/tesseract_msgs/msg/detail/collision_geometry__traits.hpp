// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/CollisionGeometry.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__COLLISION_GEOMETRY__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__COLLISION_GEOMETRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/collision_geometry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'origin'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'geometry'
#include "tesseract_msgs/msg/detail/geometry__traits.hpp"
// Member 'material'
#include "tesseract_msgs/msg/detail/material__traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CollisionGeometry & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: origin
  {
    out << "origin: ";
    to_flow_style_yaml(msg.origin, out);
    out << ", ";
  }

  // member: geometry
  {
    out << "geometry: ";
    to_flow_style_yaml(msg.geometry, out);
    out << ", ";
  }

  // member: material
  {
    out << "material: ";
    to_flow_style_yaml(msg.material, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CollisionGeometry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: origin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin:\n";
    to_block_style_yaml(msg.origin, out, indentation + 2);
  }

  // member: geometry
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geometry:\n";
    to_block_style_yaml(msg.geometry, out, indentation + 2);
  }

  // member: material
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "material:\n";
    to_block_style_yaml(msg.material, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CollisionGeometry & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tesseract_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tesseract_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tesseract_msgs::msg::CollisionGeometry & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::CollisionGeometry & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::CollisionGeometry>()
{
  return "tesseract_msgs::msg::CollisionGeometry";
}

template<>
inline const char * name<tesseract_msgs::msg::CollisionGeometry>()
{
  return "tesseract_msgs/msg/CollisionGeometry";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::CollisionGeometry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::CollisionGeometry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::CollisionGeometry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__COLLISION_GEOMETRY__TRAITS_HPP_
