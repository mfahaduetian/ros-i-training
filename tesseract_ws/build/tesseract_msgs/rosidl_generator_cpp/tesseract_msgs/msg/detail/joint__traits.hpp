// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/Joint.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/joint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'parent_to_joint_origin_transform'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'limits'
#include "tesseract_msgs/msg/detail/joint_limits__traits.hpp"
// Member 'dynamics'
#include "tesseract_msgs/msg/detail/joint_dynamics__traits.hpp"
// Member 'safety'
#include "tesseract_msgs/msg/detail/joint_safety__traits.hpp"
// Member 'calibration'
#include "tesseract_msgs/msg/detail/joint_calibration__traits.hpp"
// Member 'mimic'
#include "tesseract_msgs/msg/detail/joint_mimic__traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Joint & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: axis
  {
    if (msg.axis.size() == 0) {
      out << "axis: []";
    } else {
      out << "axis: [";
      size_t pending_items = msg.axis.size();
      for (auto item : msg.axis) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: child_link_name
  {
    out << "child_link_name: ";
    rosidl_generator_traits::value_to_yaml(msg.child_link_name, out);
    out << ", ";
  }

  // member: parent_link_name
  {
    out << "parent_link_name: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_link_name, out);
    out << ", ";
  }

  // member: parent_to_joint_origin_transform
  {
    out << "parent_to_joint_origin_transform: ";
    to_flow_style_yaml(msg.parent_to_joint_origin_transform, out);
    out << ", ";
  }

  // member: limits
  {
    out << "limits: ";
    to_flow_style_yaml(msg.limits, out);
    out << ", ";
  }

  // member: dynamics
  {
    out << "dynamics: ";
    to_flow_style_yaml(msg.dynamics, out);
    out << ", ";
  }

  // member: safety
  {
    out << "safety: ";
    to_flow_style_yaml(msg.safety, out);
    out << ", ";
  }

  // member: calibration
  {
    out << "calibration: ";
    to_flow_style_yaml(msg.calibration, out);
    out << ", ";
  }

  // member: mimic
  {
    out << "mimic: ";
    to_flow_style_yaml(msg.mimic, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Joint & msg,
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

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.axis.size() == 0) {
      out << "axis: []\n";
    } else {
      out << "axis:\n";
      for (auto item : msg.axis) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: child_link_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child_link_name: ";
    rosidl_generator_traits::value_to_yaml(msg.child_link_name, out);
    out << "\n";
  }

  // member: parent_link_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parent_link_name: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_link_name, out);
    out << "\n";
  }

  // member: parent_to_joint_origin_transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parent_to_joint_origin_transform:\n";
    to_block_style_yaml(msg.parent_to_joint_origin_transform, out, indentation + 2);
  }

  // member: limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "limits:\n";
    to_block_style_yaml(msg.limits, out, indentation + 2);
  }

  // member: dynamics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dynamics:\n";
    to_block_style_yaml(msg.dynamics, out, indentation + 2);
  }

  // member: safety
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety:\n";
    to_block_style_yaml(msg.safety, out, indentation + 2);
  }

  // member: calibration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration:\n";
    to_block_style_yaml(msg.calibration, out, indentation + 2);
  }

  // member: mimic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mimic:\n";
    to_block_style_yaml(msg.mimic, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Joint & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::Joint & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::Joint & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::Joint>()
{
  return "tesseract_msgs::msg::Joint";
}

template<>
inline const char * name<tesseract_msgs::msg::Joint>()
{
  return "tesseract_msgs/msg/Joint";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::Joint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::Joint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::Joint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT__TRAITS_HPP_
