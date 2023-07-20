// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/GroupsJointStates.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__GROUPS_JOINT_STATES__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__GROUPS_JOINT_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/groups_joint_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'joint_states'
#include "tesseract_msgs/msg/detail/groups_joint_state__traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GroupsJointStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: joint_states
  {
    if (msg.joint_states.size() == 0) {
      out << "joint_states: []";
    } else {
      out << "joint_states: [";
      size_t pending_items = msg.joint_states.size();
      for (auto item : msg.joint_states) {
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
  const GroupsJointStates & msg,
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

  // member: joint_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_states.size() == 0) {
      out << "joint_states: []\n";
    } else {
      out << "joint_states:\n";
      for (auto item : msg.joint_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GroupsJointStates & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::GroupsJointStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::GroupsJointStates & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::GroupsJointStates>()
{
  return "tesseract_msgs::msg::GroupsJointStates";
}

template<>
inline const char * name<tesseract_msgs::msg::GroupsJointStates>()
{
  return "tesseract_msgs/msg/GroupsJointStates";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::GroupsJointStates>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::GroupsJointStates>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::GroupsJointStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__GROUPS_JOINT_STATES__TRAITS_HPP_
