// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/GroupsTCPs.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__GROUPS_TC_PS__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__GROUPS_TC_PS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/groups_tc_ps__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tcps'
#include "tesseract_msgs/msg/detail/groups_tcp__traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GroupsTCPs & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: tcps
  {
    if (msg.tcps.size() == 0) {
      out << "tcps: []";
    } else {
      out << "tcps: [";
      size_t pending_items = msg.tcps.size();
      for (auto item : msg.tcps) {
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
  const GroupsTCPs & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: tcps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tcps.size() == 0) {
      out << "tcps: []\n";
    } else {
      out << "tcps:\n";
      for (auto item : msg.tcps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GroupsTCPs & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::GroupsTCPs & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::GroupsTCPs & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::GroupsTCPs>()
{
  return "tesseract_msgs::msg::GroupsTCPs";
}

template<>
inline const char * name<tesseract_msgs::msg::GroupsTCPs>()
{
  return "tesseract_msgs/msg/GroupsTCPs";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::GroupsTCPs>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::GroupsTCPs>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::GroupsTCPs>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__GROUPS_TC_PS__TRAITS_HPP_
