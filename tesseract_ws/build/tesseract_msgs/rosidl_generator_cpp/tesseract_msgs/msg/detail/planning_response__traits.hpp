// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/PlanningResponse.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__PLANNING_RESPONSE__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__PLANNING_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/planning_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'initial_state'
#include "tesseract_msgs/msg/detail/string_double_pair__traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: results
  {
    out << "results: ";
    rosidl_generator_traits::value_to_yaml(msg.results, out);
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

  // member: dotgraph
  {
    out << "dotgraph: ";
    rosidl_generator_traits::value_to_yaml(msg.dotgraph, out);
    out << ", ";
  }

  // member: successful
  {
    out << "successful: ";
    rosidl_generator_traits::value_to_yaml(msg.successful, out);
    out << ", ";
  }

  // member: status_string
  {
    out << "status_string: ";
    rosidl_generator_traits::value_to_yaml(msg.status_string, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanningResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: results
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "results: ";
    rosidl_generator_traits::value_to_yaml(msg.results, out);
    out << "\n";
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

  // member: dotgraph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dotgraph: ";
    rosidl_generator_traits::value_to_yaml(msg.dotgraph, out);
    out << "\n";
  }

  // member: successful
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "successful: ";
    rosidl_generator_traits::value_to_yaml(msg.successful, out);
    out << "\n";
  }

  // member: status_string
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_string: ";
    rosidl_generator_traits::value_to_yaml(msg.status_string, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanningResponse & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::PlanningResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::PlanningResponse & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::PlanningResponse>()
{
  return "tesseract_msgs::msg::PlanningResponse";
}

template<>
inline const char * name<tesseract_msgs::msg::PlanningResponse>()
{
  return "tesseract_msgs/msg/PlanningResponse";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::PlanningResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::PlanningResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::PlanningResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__PLANNING_RESPONSE__TRAITS_HPP_
