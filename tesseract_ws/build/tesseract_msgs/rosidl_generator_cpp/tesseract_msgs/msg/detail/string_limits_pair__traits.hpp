// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/StringLimitsPair.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__STRING_LIMITS_PAIR__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__STRING_LIMITS_PAIR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/string_limits_pair__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StringLimitsPair & msg,
  std::ostream & out)
{
  out << "{";
  // member: first
  {
    out << "first: ";
    rosidl_generator_traits::value_to_yaml(msg.first, out);
    out << ", ";
  }

  // member: second
  {
    if (msg.second.size() == 0) {
      out << "second: []";
    } else {
      out << "second: [";
      size_t pending_items = msg.second.size();
      for (auto item : msg.second) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StringLimitsPair & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: first
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first: ";
    rosidl_generator_traits::value_to_yaml(msg.first, out);
    out << "\n";
  }

  // member: second
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.second.size() == 0) {
      out << "second: []\n";
    } else {
      out << "second:\n";
      for (auto item : msg.second) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StringLimitsPair & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::StringLimitsPair & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::StringLimitsPair & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::StringLimitsPair>()
{
  return "tesseract_msgs::msg::StringLimitsPair";
}

template<>
inline const char * name<tesseract_msgs::msg::StringLimitsPair>()
{
  return "tesseract_msgs/msg/StringLimitsPair";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::StringLimitsPair>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::StringLimitsPair>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::StringLimitsPair>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__STRING_LIMITS_PAIR__TRAITS_HPP_
