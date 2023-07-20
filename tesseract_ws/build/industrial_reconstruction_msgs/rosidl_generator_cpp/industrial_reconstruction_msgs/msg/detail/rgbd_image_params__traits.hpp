// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from industrial_reconstruction_msgs:msg/RGBDImageParams.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__RGBD_IMAGE_PARAMS__TRAITS_HPP_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__RGBD_IMAGE_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "industrial_reconstruction_msgs/msg/detail/rgbd_image_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace industrial_reconstruction_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RGBDImageParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: depth_scale
  {
    out << "depth_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.depth_scale, out);
    out << ", ";
  }

  // member: depth_trunc
  {
    out << "depth_trunc: ";
    rosidl_generator_traits::value_to_yaml(msg.depth_trunc, out);
    out << ", ";
  }

  // member: convert_rgb_to_intensity
  {
    out << "convert_rgb_to_intensity: ";
    rosidl_generator_traits::value_to_yaml(msg.convert_rgb_to_intensity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RGBDImageParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: depth_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.depth_scale, out);
    out << "\n";
  }

  // member: depth_trunc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth_trunc: ";
    rosidl_generator_traits::value_to_yaml(msg.depth_trunc, out);
    out << "\n";
  }

  // member: convert_rgb_to_intensity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "convert_rgb_to_intensity: ";
    rosidl_generator_traits::value_to_yaml(msg.convert_rgb_to_intensity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RGBDImageParams & msg, bool use_flow_style = false)
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
  const industrial_reconstruction_msgs::msg::RGBDImageParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  industrial_reconstruction_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use industrial_reconstruction_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const industrial_reconstruction_msgs::msg::RGBDImageParams & msg)
{
  return industrial_reconstruction_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<industrial_reconstruction_msgs::msg::RGBDImageParams>()
{
  return "industrial_reconstruction_msgs::msg::RGBDImageParams";
}

template<>
inline const char * name<industrial_reconstruction_msgs::msg::RGBDImageParams>()
{
  return "industrial_reconstruction_msgs/msg/RGBDImageParams";
}

template<>
struct has_fixed_size<industrial_reconstruction_msgs::msg::RGBDImageParams>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<industrial_reconstruction_msgs::msg::RGBDImageParams>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<industrial_reconstruction_msgs::msg::RGBDImageParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__RGBD_IMAGE_PARAMS__TRAITS_HPP_
