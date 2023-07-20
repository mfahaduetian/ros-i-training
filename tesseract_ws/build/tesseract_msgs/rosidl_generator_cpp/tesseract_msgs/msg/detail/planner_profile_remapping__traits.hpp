// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/PlannerProfileRemapping.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__PLANNER_PROFILE_REMAPPING__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__PLANNER_PROFILE_REMAPPING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/planner_profile_remapping__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'mapping'
#include "tesseract_msgs/msg/detail/profile_map__traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlannerProfileRemapping & msg,
  std::ostream & out)
{
  out << "{";
  // member: planner
  {
    if (msg.planner.size() == 0) {
      out << "planner: []";
    } else {
      out << "planner: [";
      size_t pending_items = msg.planner.size();
      for (auto item : msg.planner) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mapping
  {
    if (msg.mapping.size() == 0) {
      out << "mapping: []";
    } else {
      out << "mapping: [";
      size_t pending_items = msg.mapping.size();
      for (auto item : msg.mapping) {
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
  const PlannerProfileRemapping & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: planner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.planner.size() == 0) {
      out << "planner: []\n";
    } else {
      out << "planner:\n";
      for (auto item : msg.planner) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mapping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mapping.size() == 0) {
      out << "mapping: []\n";
    } else {
      out << "mapping:\n";
      for (auto item : msg.mapping) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlannerProfileRemapping & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::PlannerProfileRemapping & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::PlannerProfileRemapping & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::PlannerProfileRemapping>()
{
  return "tesseract_msgs::msg::PlannerProfileRemapping";
}

template<>
inline const char * name<tesseract_msgs::msg::PlannerProfileRemapping>()
{
  return "tesseract_msgs/msg/PlannerProfileRemapping";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::PlannerProfileRemapping>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::PlannerProfileRemapping>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::PlannerProfileRemapping>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__PLANNER_PROFILE_REMAPPING__TRAITS_HPP_
