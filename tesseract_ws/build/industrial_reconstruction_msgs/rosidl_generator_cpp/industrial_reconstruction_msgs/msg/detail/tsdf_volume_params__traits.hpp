// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from industrial_reconstruction_msgs:msg/TSDFVolumeParams.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__TSDF_VOLUME_PARAMS__TRAITS_HPP_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__TSDF_VOLUME_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "industrial_reconstruction_msgs/msg/detail/tsdf_volume_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'min_box_values'
// Member 'max_box_values'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace industrial_reconstruction_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TSDFVolumeParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: voxel_length
  {
    out << "voxel_length: ";
    rosidl_generator_traits::value_to_yaml(msg.voxel_length, out);
    out << ", ";
  }

  // member: sdf_trunc
  {
    out << "sdf_trunc: ";
    rosidl_generator_traits::value_to_yaml(msg.sdf_trunc, out);
    out << ", ";
  }

  // member: min_box_values
  {
    out << "min_box_values: ";
    to_flow_style_yaml(msg.min_box_values, out);
    out << ", ";
  }

  // member: max_box_values
  {
    out << "max_box_values: ";
    to_flow_style_yaml(msg.max_box_values, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TSDFVolumeParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: voxel_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voxel_length: ";
    rosidl_generator_traits::value_to_yaml(msg.voxel_length, out);
    out << "\n";
  }

  // member: sdf_trunc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sdf_trunc: ";
    rosidl_generator_traits::value_to_yaml(msg.sdf_trunc, out);
    out << "\n";
  }

  // member: min_box_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_box_values:\n";
    to_block_style_yaml(msg.min_box_values, out, indentation + 2);
  }

  // member: max_box_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_box_values:\n";
    to_block_style_yaml(msg.max_box_values, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TSDFVolumeParams & msg, bool use_flow_style = false)
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
  const industrial_reconstruction_msgs::msg::TSDFVolumeParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  industrial_reconstruction_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use industrial_reconstruction_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const industrial_reconstruction_msgs::msg::TSDFVolumeParams & msg)
{
  return industrial_reconstruction_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<industrial_reconstruction_msgs::msg::TSDFVolumeParams>()
{
  return "industrial_reconstruction_msgs::msg::TSDFVolumeParams";
}

template<>
inline const char * name<industrial_reconstruction_msgs::msg::TSDFVolumeParams>()
{
  return "industrial_reconstruction_msgs/msg/TSDFVolumeParams";
}

template<>
struct has_fixed_size<industrial_reconstruction_msgs::msg::TSDFVolumeParams>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<industrial_reconstruction_msgs::msg::TSDFVolumeParams>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<industrial_reconstruction_msgs::msg::TSDFVolumeParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__TSDF_VOLUME_PARAMS__TRAITS_HPP_
