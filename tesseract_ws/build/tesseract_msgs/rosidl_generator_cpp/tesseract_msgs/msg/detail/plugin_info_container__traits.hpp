// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/PluginInfoContainer.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__PLUGIN_INFO_CONTAINER__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__PLUGIN_INFO_CONTAINER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/plugin_info_container__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'plugins'
#include "tesseract_msgs/msg/detail/string_plugin_info_pair__traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PluginInfoContainer & msg,
  std::ostream & out)
{
  out << "{";
  // member: default_plugin
  {
    out << "default_plugin: ";
    rosidl_generator_traits::value_to_yaml(msg.default_plugin, out);
    out << ", ";
  }

  // member: plugins
  {
    if (msg.plugins.size() == 0) {
      out << "plugins: []";
    } else {
      out << "plugins: [";
      size_t pending_items = msg.plugins.size();
      for (auto item : msg.plugins) {
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
  const PluginInfoContainer & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: default_plugin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "default_plugin: ";
    rosidl_generator_traits::value_to_yaml(msg.default_plugin, out);
    out << "\n";
  }

  // member: plugins
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.plugins.size() == 0) {
      out << "plugins: []\n";
    } else {
      out << "plugins:\n";
      for (auto item : msg.plugins) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PluginInfoContainer & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::PluginInfoContainer & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::PluginInfoContainer & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::PluginInfoContainer>()
{
  return "tesseract_msgs::msg::PluginInfoContainer";
}

template<>
inline const char * name<tesseract_msgs::msg::PluginInfoContainer>()
{
  return "tesseract_msgs/msg/PluginInfoContainer";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::PluginInfoContainer>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::PluginInfoContainer>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::PluginInfoContainer>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__PLUGIN_INFO_CONTAINER__TRAITS_HPP_
