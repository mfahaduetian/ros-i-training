// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/SceneGraph.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__SCENE_GRAPH__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__SCENE_GRAPH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/scene_graph__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'links'
#include "tesseract_msgs/msg/detail/link__traits.hpp"
// Member 'joints'
#include "tesseract_msgs/msg/detail/joint__traits.hpp"
// Member 'acm'
#include "tesseract_msgs/msg/detail/allowed_collision_entry__traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SceneGraph & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: root
  {
    out << "root: ";
    rosidl_generator_traits::value_to_yaml(msg.root, out);
    out << ", ";
  }

  // member: links
  {
    if (msg.links.size() == 0) {
      out << "links: []";
    } else {
      out << "links: [";
      size_t pending_items = msg.links.size();
      for (auto item : msg.links) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joints
  {
    if (msg.joints.size() == 0) {
      out << "joints: []";
    } else {
      out << "joints: [";
      size_t pending_items = msg.joints.size();
      for (auto item : msg.joints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: invisible_links
  {
    if (msg.invisible_links.size() == 0) {
      out << "invisible_links: []";
    } else {
      out << "invisible_links: [";
      size_t pending_items = msg.invisible_links.size();
      for (auto item : msg.invisible_links) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: disabled_collision_links
  {
    if (msg.disabled_collision_links.size() == 0) {
      out << "disabled_collision_links: []";
    } else {
      out << "disabled_collision_links: [";
      size_t pending_items = msg.disabled_collision_links.size();
      for (auto item : msg.disabled_collision_links) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acm
  {
    if (msg.acm.size() == 0) {
      out << "acm: []";
    } else {
      out << "acm: [";
      size_t pending_items = msg.acm.size();
      for (auto item : msg.acm) {
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
  const SceneGraph & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: root
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root: ";
    rosidl_generator_traits::value_to_yaml(msg.root, out);
    out << "\n";
  }

  // member: links
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.links.size() == 0) {
      out << "links: []\n";
    } else {
      out << "links:\n";
      for (auto item : msg.links) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joints.size() == 0) {
      out << "joints: []\n";
    } else {
      out << "joints:\n";
      for (auto item : msg.joints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: invisible_links
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.invisible_links.size() == 0) {
      out << "invisible_links: []\n";
    } else {
      out << "invisible_links:\n";
      for (auto item : msg.invisible_links) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: disabled_collision_links
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.disabled_collision_links.size() == 0) {
      out << "disabled_collision_links: []\n";
    } else {
      out << "disabled_collision_links:\n";
      for (auto item : msg.disabled_collision_links) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acm.size() == 0) {
      out << "acm: []\n";
    } else {
      out << "acm:\n";
      for (auto item : msg.acm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SceneGraph & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::SceneGraph & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::SceneGraph & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::SceneGraph>()
{
  return "tesseract_msgs::msg::SceneGraph";
}

template<>
inline const char * name<tesseract_msgs::msg::SceneGraph>()
{
  return "tesseract_msgs/msg/SceneGraph";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::SceneGraph>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::SceneGraph>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::SceneGraph>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__SCENE_GRAPH__TRAITS_HPP_
