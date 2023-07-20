// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/JointSafety.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT_SAFETY__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT_SAFETY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/joint_safety__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointSafety & msg,
  std::ostream & out)
{
  out << "{";
  // member: soft_upper_limit
  {
    out << "soft_upper_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.soft_upper_limit, out);
    out << ", ";
  }

  // member: soft_lower_limit
  {
    out << "soft_lower_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.soft_lower_limit, out);
    out << ", ";
  }

  // member: k_position
  {
    out << "k_position: ";
    rosidl_generator_traits::value_to_yaml(msg.k_position, out);
    out << ", ";
  }

  // member: k_velocity
  {
    out << "k_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.k_velocity, out);
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
  const JointSafety & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: soft_upper_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "soft_upper_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.soft_upper_limit, out);
    out << "\n";
  }

  // member: soft_lower_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "soft_lower_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.soft_lower_limit, out);
    out << "\n";
  }

  // member: k_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "k_position: ";
    rosidl_generator_traits::value_to_yaml(msg.k_position, out);
    out << "\n";
  }

  // member: k_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "k_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.k_velocity, out);
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

inline std::string to_yaml(const JointSafety & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::JointSafety & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::JointSafety & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::JointSafety>()
{
  return "tesseract_msgs::msg::JointSafety";
}

template<>
inline const char * name<tesseract_msgs::msg::JointSafety>()
{
  return "tesseract_msgs/msg/JointSafety";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::JointSafety>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::JointSafety>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tesseract_msgs::msg::JointSafety>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT_SAFETY__TRAITS_HPP_
