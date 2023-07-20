// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from industrial_reconstruction_msgs:msg/NormalFilterParams.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__NORMAL_FILTER_PARAMS__TRAITS_HPP_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__NORMAL_FILTER_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "industrial_reconstruction_msgs/msg/detail/normal_filter_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'normal_direction'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace industrial_reconstruction_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NormalFilterParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: normal_direction
  {
    out << "normal_direction: ";
    to_flow_style_yaml(msg.normal_direction, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NormalFilterParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: normal_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "normal_direction:\n";
    to_block_style_yaml(msg.normal_direction, out, indentation + 2);
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NormalFilterParams & msg, bool use_flow_style = false)
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

}  // namespace industrial_reconstruction_msgs

namespace rosidl_generator_traits
{

[[deprecated("use industrial_reconstruction_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const industrial_reconstruction_msgs::msg::NormalFilterParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  industrial_reconstruction_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use industrial_reconstruction_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const industrial_reconstruction_msgs::msg::NormalFilterParams & msg)
{
  return industrial_reconstruction_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<industrial_reconstruction_msgs::msg::NormalFilterParams>()
{
  return "industrial_reconstruction_msgs::msg::NormalFilterParams";
}

template<>
inline const char * name<industrial_reconstruction_msgs::msg::NormalFilterParams>()
{
  return "industrial_reconstruction_msgs/msg/NormalFilterParams";
}

template<>
struct has_fixed_size<industrial_reconstruction_msgs::msg::NormalFilterParams>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<industrial_reconstruction_msgs::msg::NormalFilterParams>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<industrial_reconstruction_msgs::msg::NormalFilterParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__NORMAL_FILTER_PARAMS__TRAITS_HPP_
