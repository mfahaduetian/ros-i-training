// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/Link.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__LINK__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__LINK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/link__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'inertial'
#include "tesseract_msgs/msg/detail/inertial__traits.hpp"
// Member 'visual'
#include "tesseract_msgs/msg/detail/visual_geometry__traits.hpp"
// Member 'collision'
#include "tesseract_msgs/msg/detail/collision_geometry__traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Link & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: inertial
  {
    out << "inertial: ";
    to_flow_style_yaml(msg.inertial, out);
    out << ", ";
  }

  // member: visual
  {
    if (msg.visual.size() == 0) {
      out << "visual: []";
    } else {
      out << "visual: [";
      size_t pending_items = msg.visual.size();
      for (auto item : msg.visual) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: collision
  {
    if (msg.collision.size() == 0) {
      out << "collision: []";
    } else {
      out << "collision: [";
      size_t pending_items = msg.collision.size();
      for (auto item : msg.collision) {
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
  const Link & msg,
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

  // member: inertial
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inertial:\n";
    to_block_style_yaml(msg.inertial, out, indentation + 2);
  }

  // member: visual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.visual.size() == 0) {
      out << "visual: []\n";
    } else {
      out << "visual:\n";
      for (auto item : msg.visual) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: collision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.collision.size() == 0) {
      out << "collision: []\n";
    } else {
      out << "collision:\n";
      for (auto item : msg.collision) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Link & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::Link & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::Link & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::Link>()
{
  return "tesseract_msgs::msg::Link";
}

template<>
inline const char * name<tesseract_msgs::msg::Link>()
{
  return "tesseract_msgs/msg/Link";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::Link>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::Link>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::Link>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__LINK__TRAITS_HPP_
