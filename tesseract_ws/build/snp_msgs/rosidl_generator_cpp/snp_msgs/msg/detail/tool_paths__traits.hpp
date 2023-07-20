// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from snp_msgs:msg/ToolPaths.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__MSG__DETAIL__TOOL_PATHS__TRAITS_HPP_
#define SNP_MSGS__MSG__DETAIL__TOOL_PATHS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "snp_msgs/msg/detail/tool_paths__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'paths'
#include "snp_msgs/msg/detail/tool_path__traits.hpp"

namespace snp_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ToolPaths & msg,
  std::ostream & out)
{
  out << "{";
  // member: paths
  {
    if (msg.paths.size() == 0) {
      out << "paths: []";
    } else {
      out << "paths: [";
      size_t pending_items = msg.paths.size();
      for (auto item : msg.paths) {
        to_flow_style_yaml(item, out);
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
  const ToolPaths & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: paths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.paths.size() == 0) {
      out << "paths: []\n";
    } else {
      out << "paths:\n";
      for (auto item : msg.paths) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ToolPaths & msg, bool use_flow_style = false)
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

}  // namespace snp_msgs

namespace rosidl_generator_traits
{

[[deprecated("use snp_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const snp_msgs::msg::ToolPaths & msg,
  std::ostream & out, size_t indentation = 0)
{
  snp_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use snp_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const snp_msgs::msg::ToolPaths & msg)
{
  return snp_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<snp_msgs::msg::ToolPaths>()
{
  return "snp_msgs::msg::ToolPaths";
}

template<>
inline const char * name<snp_msgs::msg::ToolPaths>()
{
  return "snp_msgs/msg/ToolPaths";
}

template<>
struct has_fixed_size<snp_msgs::msg::ToolPaths>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<snp_msgs::msg::ToolPaths>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<snp_msgs::msg::ToolPaths>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SNP_MSGS__MSG__DETAIL__TOOL_PATHS__TRAITS_HPP_
