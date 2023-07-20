// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/TaskComposerNodeInfo.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__TASK_COMPOSER_NODE_INFO__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__TASK_COMPOSER_NODE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/task_composer_node_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TaskComposerNodeInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: uuid
  {
    out << "uuid: ";
    rosidl_generator_traits::value_to_yaml(msg.uuid, out);
    out << ", ";
  }

  // member: inbound_edges
  {
    if (msg.inbound_edges.size() == 0) {
      out << "inbound_edges: []";
    } else {
      out << "inbound_edges: [";
      size_t pending_items = msg.inbound_edges.size();
      for (auto item : msg.inbound_edges) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: outbound_edges
  {
    if (msg.outbound_edges.size() == 0) {
      out << "outbound_edges: []";
    } else {
      out << "outbound_edges: [";
      size_t pending_items = msg.outbound_edges.size();
      for (auto item : msg.outbound_edges) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: input_keys
  {
    if (msg.input_keys.size() == 0) {
      out << "input_keys: []";
    } else {
      out << "input_keys: [";
      size_t pending_items = msg.input_keys.size();
      for (auto item : msg.input_keys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: output_keys
  {
    if (msg.output_keys.size() == 0) {
      out << "output_keys: []";
    } else {
      out << "output_keys: [";
      size_t pending_items = msg.output_keys.size();
      for (auto item : msg.output_keys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: return_value
  {
    out << "return_value: ";
    rosidl_generator_traits::value_to_yaml(msg.return_value, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: elapsed_time
  {
    out << "elapsed_time: ";
    rosidl_generator_traits::value_to_yaml(msg.elapsed_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskComposerNodeInfo & msg,
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

  // member: uuid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uuid: ";
    rosidl_generator_traits::value_to_yaml(msg.uuid, out);
    out << "\n";
  }

  // member: inbound_edges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.inbound_edges.size() == 0) {
      out << "inbound_edges: []\n";
    } else {
      out << "inbound_edges:\n";
      for (auto item : msg.inbound_edges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: outbound_edges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.outbound_edges.size() == 0) {
      out << "outbound_edges: []\n";
    } else {
      out << "outbound_edges:\n";
      for (auto item : msg.outbound_edges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: input_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.input_keys.size() == 0) {
      out << "input_keys: []\n";
    } else {
      out << "input_keys:\n";
      for (auto item : msg.input_keys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: output_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.output_keys.size() == 0) {
      out << "output_keys: []\n";
    } else {
      out << "output_keys:\n";
      for (auto item : msg.output_keys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: return_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "return_value: ";
    rosidl_generator_traits::value_to_yaml(msg.return_value, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: elapsed_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elapsed_time: ";
    rosidl_generator_traits::value_to_yaml(msg.elapsed_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskComposerNodeInfo & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::TaskComposerNodeInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::TaskComposerNodeInfo & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::TaskComposerNodeInfo>()
{
  return "tesseract_msgs::msg::TaskComposerNodeInfo";
}

template<>
inline const char * name<tesseract_msgs::msg::TaskComposerNodeInfo>()
{
  return "tesseract_msgs/msg/TaskComposerNodeInfo";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::TaskComposerNodeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::TaskComposerNodeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::TaskComposerNodeInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__TASK_COMPOSER_NODE_INFO__TRAITS_HPP_
