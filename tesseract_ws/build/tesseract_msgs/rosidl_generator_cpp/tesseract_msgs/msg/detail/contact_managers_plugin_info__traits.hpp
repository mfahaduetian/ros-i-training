// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/ContactManagersPluginInfo.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__CONTACT_MANAGERS_PLUGIN_INFO__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__CONTACT_MANAGERS_PLUGIN_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/contact_managers_plugin_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'discrete_plugin_container'
// Member 'continuous_plugin_container'
#include "tesseract_msgs/msg/detail/plugin_info_container__traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ContactManagersPluginInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: search_paths
  {
    if (msg.search_paths.size() == 0) {
      out << "search_paths: []";
    } else {
      out << "search_paths: [";
      size_t pending_items = msg.search_paths.size();
      for (auto item : msg.search_paths) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: search_libraries
  {
    if (msg.search_libraries.size() == 0) {
      out << "search_libraries: []";
    } else {
      out << "search_libraries: [";
      size_t pending_items = msg.search_libraries.size();
      for (auto item : msg.search_libraries) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: discrete_plugin_container
  {
    out << "discrete_plugin_container: ";
    to_flow_style_yaml(msg.discrete_plugin_container, out);
    out << ", ";
  }

  // member: continuous_plugin_container
  {
    out << "continuous_plugin_container: ";
    to_flow_style_yaml(msg.continuous_plugin_container, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ContactManagersPluginInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: search_paths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.search_paths.size() == 0) {
      out << "search_paths: []\n";
    } else {
      out << "search_paths:\n";
      for (auto item : msg.search_paths) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: search_libraries
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.search_libraries.size() == 0) {
      out << "search_libraries: []\n";
    } else {
      out << "search_libraries:\n";
      for (auto item : msg.search_libraries) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: discrete_plugin_container
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "discrete_plugin_container:\n";
    to_block_style_yaml(msg.discrete_plugin_container, out, indentation + 2);
  }

  // member: continuous_plugin_container
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "continuous_plugin_container:\n";
    to_block_style_yaml(msg.continuous_plugin_container, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ContactManagersPluginInfo & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::ContactManagersPluginInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::ContactManagersPluginInfo & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::ContactManagersPluginInfo>()
{
  return "tesseract_msgs::msg::ContactManagersPluginInfo";
}

template<>
inline const char * name<tesseract_msgs::msg::ContactManagersPluginInfo>()
{
  return "tesseract_msgs/msg/ContactManagersPluginInfo";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::ContactManagersPluginInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::ContactManagersPluginInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::ContactManagersPluginInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__CONTACT_MANAGERS_PLUGIN_INFO__TRAITS_HPP_
