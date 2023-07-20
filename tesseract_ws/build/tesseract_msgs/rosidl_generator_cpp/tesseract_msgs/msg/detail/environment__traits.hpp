// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/Environment.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/environment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'command_history'
#include "tesseract_msgs/msg/detail/environment_command__traits.hpp"
// Member 'joint_states'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Environment & msg,
  std::ostream & out)
{
  out << "{";
  // member: command_history
  {
    if (msg.command_history.size() == 0) {
      out << "command_history: []";
    } else {
      out << "command_history: [";
      size_t pending_items = msg.command_history.size();
      for (auto item : msg.command_history) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_states
  {
    out << "joint_states: ";
    to_flow_style_yaml(msg.joint_states, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Environment & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command_history
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.command_history.size() == 0) {
      out << "command_history: []\n";
    } else {
      out << "command_history:\n";
      for (auto item : msg.command_history) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: joint_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_states:\n";
    to_block_style_yaml(msg.joint_states, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Environment & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::Environment & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::Environment & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::Environment>()
{
  return "tesseract_msgs::msg::Environment";
}

template<>
inline const char * name<tesseract_msgs::msg::Environment>()
{
  return "tesseract_msgs/msg/Environment";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::Environment>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::Environment>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::Environment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT__TRAITS_HPP_
