// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/AllowedCollisionEntry.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/allowed_collision_entry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AllowedCollisionEntry & msg,
  std::ostream & out)
{
  out << "{";
  // member: link_1
  {
    out << "link_1: ";
    rosidl_generator_traits::value_to_yaml(msg.link_1, out);
    out << ", ";
  }

  // member: link_2
  {
    out << "link_2: ";
    rosidl_generator_traits::value_to_yaml(msg.link_2, out);
    out << ", ";
  }

  // member: reason
  {
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AllowedCollisionEntry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: link_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_1: ";
    rosidl_generator_traits::value_to_yaml(msg.link_1, out);
    out << "\n";
  }

  // member: link_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_2: ";
    rosidl_generator_traits::value_to_yaml(msg.link_2, out);
    out << "\n";
  }

  // member: reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AllowedCollisionEntry & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::AllowedCollisionEntry & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::AllowedCollisionEntry & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::AllowedCollisionEntry>()
{
  return "tesseract_msgs::msg::AllowedCollisionEntry";
}

template<>
inline const char * name<tesseract_msgs::msg::AllowedCollisionEntry>()
{
  return "tesseract_msgs/msg/AllowedCollisionEntry";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::AllowedCollisionEntry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::AllowedCollisionEntry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::AllowedCollisionEntry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__TRAITS_HPP_
