// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/ContactMarginPair.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__CONTACT_MARGIN_PAIR__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__CONTACT_MARGIN_PAIR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/contact_margin_pair__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'first'
#include "tesseract_msgs/msg/detail/string_pair__traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ContactMarginPair & msg,
  std::ostream & out)
{
  out << "{";
  // member: first
  {
    out << "first: ";
    to_flow_style_yaml(msg.first, out);
    out << ", ";
  }

  // member: second
  {
    out << "second: ";
    rosidl_generator_traits::value_to_yaml(msg.second, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ContactMarginPair & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: first
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first:\n";
    to_block_style_yaml(msg.first, out, indentation + 2);
  }

  // member: second
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "second: ";
    rosidl_generator_traits::value_to_yaml(msg.second, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ContactMarginPair & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::ContactMarginPair & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::ContactMarginPair & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::ContactMarginPair>()
{
  return "tesseract_msgs::msg::ContactMarginPair";
}

template<>
inline const char * name<tesseract_msgs::msg::ContactMarginPair>()
{
  return "tesseract_msgs/msg/ContactMarginPair";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::ContactMarginPair>
  : std::integral_constant<bool, has_fixed_size<tesseract_msgs::msg::StringPair>::value> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::ContactMarginPair>
  : std::integral_constant<bool, has_bounded_size<tesseract_msgs::msg::StringPair>::value> {};

template<>
struct is_message<tesseract_msgs::msg::ContactMarginPair>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__CONTACT_MARGIN_PAIR__TRAITS_HPP_
