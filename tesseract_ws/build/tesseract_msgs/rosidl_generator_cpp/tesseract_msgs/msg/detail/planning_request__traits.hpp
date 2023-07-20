// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/PlanningRequest.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__PLANNING_REQUEST__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__PLANNING_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/planning_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'environment_state'
#include "tesseract_msgs/msg/detail/environment_state__traits.hpp"
// Member 'commands'
#include "tesseract_msgs/msg/detail/environment_command__traits.hpp"
// Member 'move_profile_remapping'
// Member 'composite_profile_remapping'
#include "tesseract_msgs/msg/detail/planner_profile_remapping__traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: environment_state
  {
    out << "environment_state: ";
    to_flow_style_yaml(msg.environment_state, out);
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

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: executor
  {
    out << "executor: ";
    rosidl_generator_traits::value_to_yaml(msg.executor, out);
    out << ", ";
  }

  // member: instructions
  {
    out << "instructions: ";
    rosidl_generator_traits::value_to_yaml(msg.instructions, out);
    out << ", ";
  }

  // member: dotgraph
  {
    out << "dotgraph: ";
    rosidl_generator_traits::value_to_yaml(msg.dotgraph, out);
    out << ", ";
  }

  // member: debug
  {
    out << "debug: ";
    rosidl_generator_traits::value_to_yaml(msg.debug, out);
    out << ", ";
  }

  // member: save_io
  {
    out << "save_io: ";
    rosidl_generator_traits::value_to_yaml(msg.save_io, out);
    out << ", ";
  }

  // member: move_profile_remapping
  {
    out << "move_profile_remapping: ";
    to_flow_style_yaml(msg.move_profile_remapping, out);
    out << ", ";
  }

  // member: composite_profile_remapping
  {
    out << "composite_profile_remapping: ";
    to_flow_style_yaml(msg.composite_profile_remapping, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanningRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: environment_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "environment_state:\n";
    to_block_style_yaml(msg.environment_state, out, indentation + 2);
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

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: executor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "executor: ";
    rosidl_generator_traits::value_to_yaml(msg.executor, out);
    out << "\n";
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

  // member: dotgraph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dotgraph: ";
    rosidl_generator_traits::value_to_yaml(msg.dotgraph, out);
    out << "\n";
  }

  // member: debug
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug: ";
    rosidl_generator_traits::value_to_yaml(msg.debug, out);
    out << "\n";
  }

  // member: save_io
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "save_io: ";
    rosidl_generator_traits::value_to_yaml(msg.save_io, out);
    out << "\n";
  }

  // member: move_profile_remapping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_profile_remapping:\n";
    to_block_style_yaml(msg.move_profile_remapping, out, indentation + 2);
  }

  // member: composite_profile_remapping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "composite_profile_remapping:\n";
    to_block_style_yaml(msg.composite_profile_remapping, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanningRequest & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::PlanningRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::PlanningRequest & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::PlanningRequest>()
{
  return "tesseract_msgs::msg::PlanningRequest";
}

template<>
inline const char * name<tesseract_msgs::msg::PlanningRequest>()
{
  return "tesseract_msgs/msg/PlanningRequest";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::PlanningRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::PlanningRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::PlanningRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__PLANNING_REQUEST__TRAITS_HPP_
