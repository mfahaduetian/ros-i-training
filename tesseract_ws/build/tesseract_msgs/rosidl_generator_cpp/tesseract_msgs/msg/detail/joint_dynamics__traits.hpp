// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/JointDynamics.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT_DYNAMICS__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT_DYNAMICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/joint_dynamics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointDynamics & msg,
  std::ostream & out)
{
  out << "{";
  // member: damping
  {
    out << "damping: ";
    rosidl_generator_traits::value_to_yaml(msg.damping, out);
    out << ", ";
  }

  // member: friction
  {
    out << "friction: ";
    rosidl_generator_traits::value_to_yaml(msg.friction, out);
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
  const JointDynamics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: damping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "damping: ";
    rosidl_generator_traits::value_to_yaml(msg.damping, out);
    out << "\n";
  }

  // member: friction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "friction: ";
    rosidl_generator_traits::value_to_yaml(msg.friction, out);
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

inline std::string to_yaml(const JointDynamics & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::JointDynamics & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::JointDynamics & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::JointDynamics>()
{
  return "tesseract_msgs::msg::JointDynamics";
}

template<>
inline const char * name<tesseract_msgs::msg::JointDynamics>()
{
  return "tesseract_msgs/msg/JointDynamics";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::JointDynamics>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::JointDynamics>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tesseract_msgs::msg::JointDynamics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT_DYNAMICS__TRAITS_HPP_
