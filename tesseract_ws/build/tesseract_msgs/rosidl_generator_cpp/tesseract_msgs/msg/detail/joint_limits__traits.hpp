// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/JointLimits.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT_LIMITS__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT_LIMITS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/joint_limits__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointLimits & msg,
  std::ostream & out)
{
  out << "{";
  // member: lower
  {
    out << "lower: ";
    rosidl_generator_traits::value_to_yaml(msg.lower, out);
    out << ", ";
  }

  // member: upper
  {
    out << "upper: ";
    rosidl_generator_traits::value_to_yaml(msg.upper, out);
    out << ", ";
  }

  // member: effort
  {
    out << "effort: ";
    rosidl_generator_traits::value_to_yaml(msg.effort, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
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
  const JointLimits & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lower
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lower: ";
    rosidl_generator_traits::value_to_yaml(msg.lower, out);
    out << "\n";
  }

  // member: upper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "upper: ";
    rosidl_generator_traits::value_to_yaml(msg.upper, out);
    out << "\n";
  }

  // member: effort
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "effort: ";
    rosidl_generator_traits::value_to_yaml(msg.effort, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
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

inline std::string to_yaml(const JointLimits & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::JointLimits & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::JointLimits & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::JointLimits>()
{
  return "tesseract_msgs::msg::JointLimits";
}

template<>
inline const char * name<tesseract_msgs::msg::JointLimits>()
{
  return "tesseract_msgs/msg/JointLimits";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::JointLimits>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::JointLimits>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tesseract_msgs::msg::JointLimits>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT_LIMITS__TRAITS_HPP_
