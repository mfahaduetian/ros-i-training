// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/EnvironmentState.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT_STATE__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/environment_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EnvironmentState & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: revision
  {
    out << "revision: ";
    rosidl_generator_traits::value_to_yaml(msg.revision, out);
    out << ", ";
  }

  // member: joint_state
  {
    out << "joint_state: ";
    to_flow_style_yaml(msg.joint_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EnvironmentState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "revision: ";
    rosidl_generator_traits::value_to_yaml(msg.revision, out);
    out << "\n";
  }

  // member: joint_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_state:\n";
    to_block_style_yaml(msg.joint_state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnvironmentState & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::EnvironmentState & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::EnvironmentState & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::EnvironmentState>()
{
  return "tesseract_msgs::msg::EnvironmentState";
}

template<>
inline const char * name<tesseract_msgs::msg::EnvironmentState>()
{
  return "tesseract_msgs/msg/EnvironmentState";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::EnvironmentState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::EnvironmentState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::EnvironmentState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT_STATE__TRAITS_HPP_
