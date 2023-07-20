// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'environment'
#include "tesseract_msgs/msg/detail/environment__traits.hpp"
// Member 'commands'
#include "tesseract_msgs/msg/detail/environment_command__traits.hpp"
// Member 'initial_state'
#include "tesseract_msgs/msg/detail/string_double_pair__traits.hpp"
// Member 'joint_trajectories'
#include "tesseract_msgs/msg/detail/joint_trajectory__traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Trajectory & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ns
  {
    out << "ns: ";
    rosidl_generator_traits::value_to_yaml(msg.ns, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << ", ";
  }

  // member: environment
  {
    out << "environment: ";
    to_flow_style_yaml(msg.environment, out);
    out << ", ";
  }

  // member: commands
  {
    if (msg.commands.size() == 0) {
      out << "commands: []";
    } else {
      out << "commands: [";
      size_t pending_items = msg.commands.size();
      for (auto item : msg.commands) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: initial_state
  {
    if (msg.initial_state.size() == 0) {
      out << "initial_state: []";
    } else {
      out << "initial_state: [";
      size_t pending_items = msg.initial_state.size();
      for (auto item : msg.initial_state) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: instructions
  {
    out << "instructions: ";
    rosidl_generator_traits::value_to_yaml(msg.instructions, out);
    out << ", ";
  }

  // member: joint_trajectories
  {
    if (msg.joint_trajectories.size() == 0) {
      out << "joint_trajectories: []";
    } else {
      out << "joint_trajectories: [";
      size_t pending_items = msg.joint_trajectories.size();
      for (auto item : msg.joint_trajectories) {
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
  const Trajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: ns
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ns: ";
    rosidl_generator_traits::value_to_yaml(msg.ns, out);
    out << "\n";
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << "\n";
  }

  // member: environment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "environment:\n";
    to_block_style_yaml(msg.environment, out, indentation + 2);
  }

  // member: commands
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.commands.size() == 0) {
      out << "commands: []\n";
    } else {
      out << "commands:\n";
      for (auto item : msg.commands) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: initial_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.initial_state.size() == 0) {
      out << "initial_state: []\n";
    } else {
      out << "initial_state:\n";
      for (auto item : msg.initial_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: instructions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "instructions: ";
    rosidl_generator_traits::value_to_yaml(msg.instructions, out);
    out << "\n";
  }

  // member: joint_trajectories
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_trajectories.size() == 0) {
      out << "joint_trajectories: []\n";
    } else {
      out << "joint_trajectories:\n";
      for (auto item : msg.joint_trajectories) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Trajectory & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::Trajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::Trajectory & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::Trajectory>()
{
  return "tesseract_msgs::msg::Trajectory";
}

template<>
inline const char * name<tesseract_msgs::msg::Trajectory>()
{
  return "tesseract_msgs/msg/Trajectory";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::Trajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::Trajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::Trajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_
