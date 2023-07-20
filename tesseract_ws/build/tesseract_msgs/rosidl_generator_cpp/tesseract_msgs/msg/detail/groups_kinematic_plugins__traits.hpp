// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/GroupsKinematicPlugins.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__GROUPS_KINEMATIC_PLUGINS__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__GROUPS_KINEMATIC_PLUGINS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/groups_kinematic_plugins__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'plugin_container'
#include "tesseract_msgs/msg/detail/plugin_info_container__traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GroupsKinematicPlugins & msg,
  std::ostream & out)
{
  out << "{";
  // member: group
  {
    out << "group: ";
    rosidl_generator_traits::value_to_yaml(msg.group, out);
    out << ", ";
  }

  // member: plugin_container
  {
    out << "plugin_container: ";
    to_flow_style_yaml(msg.plugin_container, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GroupsKinematicPlugins & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group: ";
    rosidl_generator_traits::value_to_yaml(msg.group, out);
    out << "\n";
  }

  // member: plugin_container
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plugin_container:\n";
    to_block_style_yaml(msg.plugin_container, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GroupsKinematicPlugins & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::GroupsKinematicPlugins & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::GroupsKinematicPlugins & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::GroupsKinematicPlugins>()
{
  return "tesseract_msgs::msg::GroupsKinematicPlugins";
}

template<>
inline const char * name<tesseract_msgs::msg::GroupsKinematicPlugins>()
{
  return "tesseract_msgs/msg/GroupsKinematicPlugins";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::GroupsKinematicPlugins>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::GroupsKinematicPlugins>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::GroupsKinematicPlugins>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__GROUPS_KINEMATIC_PLUGINS__TRAITS_HPP_
