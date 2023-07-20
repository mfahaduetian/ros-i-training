// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/ContactResult.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__CONTACT_RESULT__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__CONTACT_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/contact_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'nearest_points'
// Member 'nearest_points_local'
// Member 'normal'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'transform'
// Member 'cc_transform'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ContactResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: type_id
  {
    if (msg.type_id.size() == 0) {
      out << "type_id: []";
    } else {
      out << "type_id: [";
      size_t pending_items = msg.type_id.size();
      for (auto item : msg.type_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: link_names
  {
    if (msg.link_names.size() == 0) {
      out << "link_names: []";
    } else {
      out << "link_names: [";
      size_t pending_items = msg.link_names.size();
      for (auto item : msg.link_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: shape_id
  {
    if (msg.shape_id.size() == 0) {
      out << "shape_id: []";
    } else {
      out << "shape_id: [";
      size_t pending_items = msg.shape_id.size();
      for (auto item : msg.shape_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: subshape_id
  {
    if (msg.subshape_id.size() == 0) {
      out << "subshape_id: []";
    } else {
      out << "subshape_id: [";
      size_t pending_items = msg.subshape_id.size();
      for (auto item : msg.subshape_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: nearest_points
  {
    if (msg.nearest_points.size() == 0) {
      out << "nearest_points: []";
    } else {
      out << "nearest_points: [";
      size_t pending_items = msg.nearest_points.size();
      for (auto item : msg.nearest_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: nearest_points_local
  {
    if (msg.nearest_points_local.size() == 0) {
      out << "nearest_points_local: []";
    } else {
      out << "nearest_points_local: [";
      size_t pending_items = msg.nearest_points_local.size();
      for (auto item : msg.nearest_points_local) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: transform
  {
    if (msg.transform.size() == 0) {
      out << "transform: []";
    } else {
      out << "transform: [";
      size_t pending_items = msg.transform.size();
      for (auto item : msg.transform) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: normal
  {
    out << "normal: ";
    to_flow_style_yaml(msg.normal, out);
    out << ", ";
  }

  // member: cc_time
  {
    if (msg.cc_time.size() == 0) {
      out << "cc_time: []";
    } else {
      out << "cc_time: [";
      size_t pending_items = msg.cc_time.size();
      for (auto item : msg.cc_time) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cc_type
  {
    if (msg.cc_type.size() == 0) {
      out << "cc_type: []";
    } else {
      out << "cc_type: [";
      size_t pending_items = msg.cc_type.size();
      for (auto item : msg.cc_type) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cc_transform
  {
    if (msg.cc_transform.size() == 0) {
      out << "cc_transform: []";
    } else {
      out << "cc_transform: [";
      size_t pending_items = msg.cc_transform.size();
      for (auto item : msg.cc_transform) {
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
  const ContactResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: type_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.type_id.size() == 0) {
      out << "type_id: []\n";
    } else {
      out << "type_id:\n";
      for (auto item : msg.type_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: link_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_names.size() == 0) {
      out << "link_names: []\n";
    } else {
      out << "link_names:\n";
      for (auto item : msg.link_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: shape_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.shape_id.size() == 0) {
      out << "shape_id: []\n";
    } else {
      out << "shape_id:\n";
      for (auto item : msg.shape_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: subshape_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.subshape_id.size() == 0) {
      out << "subshape_id: []\n";
    } else {
      out << "subshape_id:\n";
      for (auto item : msg.subshape_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: nearest_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nearest_points.size() == 0) {
      out << "nearest_points: []\n";
    } else {
      out << "nearest_points:\n";
      for (auto item : msg.nearest_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: nearest_points_local
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nearest_points_local.size() == 0) {
      out << "nearest_points_local: []\n";
    } else {
      out << "nearest_points_local:\n";
      for (auto item : msg.nearest_points_local) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.transform.size() == 0) {
      out << "transform: []\n";
    } else {
      out << "transform:\n";
      for (auto item : msg.transform) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: normal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "normal:\n";
    to_block_style_yaml(msg.normal, out, indentation + 2);
  }

  // member: cc_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cc_time.size() == 0) {
      out << "cc_time: []\n";
    } else {
      out << "cc_time:\n";
      for (auto item : msg.cc_time) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cc_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cc_type.size() == 0) {
      out << "cc_type: []\n";
    } else {
      out << "cc_type:\n";
      for (auto item : msg.cc_type) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cc_transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cc_transform.size() == 0) {
      out << "cc_transform: []\n";
    } else {
      out << "cc_transform:\n";
      for (auto item : msg.cc_transform) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ContactResult & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::ContactResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::ContactResult & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::ContactResult>()
{
  return "tesseract_msgs::msg::ContactResult";
}

template<>
inline const char * name<tesseract_msgs::msg::ContactResult>()
{
  return "tesseract_msgs/msg/ContactResult";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::ContactResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::ContactResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::ContactResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__CONTACT_RESULT__TRAITS_HPP_
