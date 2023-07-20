// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/Inertial.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__INERTIAL__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__INERTIAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/inertial__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'origin'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Inertial & msg,
  std::ostream & out)
{
  out << "{";
  // member: origin
  {
    out << "origin: ";
    to_flow_style_yaml(msg.origin, out);
    out << ", ";
  }

  // member: mass
  {
    out << "mass: ";
    rosidl_generator_traits::value_to_yaml(msg.mass, out);
    out << ", ";
  }

  // member: ixx
  {
    out << "ixx: ";
    rosidl_generator_traits::value_to_yaml(msg.ixx, out);
    out << ", ";
  }

  // member: ixy
  {
    out << "ixy: ";
    rosidl_generator_traits::value_to_yaml(msg.ixy, out);
    out << ", ";
  }

  // member: ixz
  {
    out << "ixz: ";
    rosidl_generator_traits::value_to_yaml(msg.ixz, out);
    out << ", ";
  }

  // member: iyy
  {
    out << "iyy: ";
    rosidl_generator_traits::value_to_yaml(msg.iyy, out);
    out << ", ";
  }

  // member: iyz
  {
    out << "iyz: ";
    rosidl_generator_traits::value_to_yaml(msg.iyz, out);
    out << ", ";
  }

  // member: izz
  {
    out << "izz: ";
    rosidl_generator_traits::value_to_yaml(msg.izz, out);
    out << ", ";
  }

  // member: empty
  {
    out << "empty: ";
    rosidl_generator_traits::value_to_yaml(msg.empty, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Inertial & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: origin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin:\n";
    to_block_style_yaml(msg.origin, out, indentation + 2);
  }

  // member: mass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass: ";
    rosidl_generator_traits::value_to_yaml(msg.mass, out);
    out << "\n";
  }

  // member: ixx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ixx: ";
    rosidl_generator_traits::value_to_yaml(msg.ixx, out);
    out << "\n";
  }

  // member: ixy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ixy: ";
    rosidl_generator_traits::value_to_yaml(msg.ixy, out);
    out << "\n";
  }

  // member: ixz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ixz: ";
    rosidl_generator_traits::value_to_yaml(msg.ixz, out);
    out << "\n";
  }

  // member: iyy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iyy: ";
    rosidl_generator_traits::value_to_yaml(msg.iyy, out);
    out << "\n";
  }

  // member: iyz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iyz: ";
    rosidl_generator_traits::value_to_yaml(msg.iyz, out);
    out << "\n";
  }

  // member: izz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "izz: ";
    rosidl_generator_traits::value_to_yaml(msg.izz, out);
    out << "\n";
  }

  // member: empty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "empty: ";
    rosidl_generator_traits::value_to_yaml(msg.empty, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Inertial & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::Inertial & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::Inertial & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::Inertial>()
{
  return "tesseract_msgs::msg::Inertial";
}

template<>
inline const char * name<tesseract_msgs::msg::Inertial>()
{
  return "tesseract_msgs/msg/Inertial";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::Inertial>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::Inertial>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<tesseract_msgs::msg::Inertial>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__INERTIAL__TRAITS_HPP_
