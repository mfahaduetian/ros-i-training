// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/Geometry.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__GEOMETRY__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__GEOMETRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/geometry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'mesh'
#include "tesseract_msgs/msg/detail/mesh__traits.hpp"
// Member 'octomap'
#include "octomap_msgs/msg/detail/octomap__traits.hpp"
// Member 'octomap_sub_type'
#include "tesseract_msgs/msg/detail/octree_sub_type__traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Geometry & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: sphere_radius
  {
    out << "sphere_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.sphere_radius, out);
    out << ", ";
  }

  // member: cylinder_dimensions
  {
    if (msg.cylinder_dimensions.size() == 0) {
      out << "cylinder_dimensions: []";
    } else {
      out << "cylinder_dimensions: [";
      size_t pending_items = msg.cylinder_dimensions.size();
      for (auto item : msg.cylinder_dimensions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: capsule_dimensions
  {
    if (msg.capsule_dimensions.size() == 0) {
      out << "capsule_dimensions: []";
    } else {
      out << "capsule_dimensions: [";
      size_t pending_items = msg.capsule_dimensions.size();
      for (auto item : msg.capsule_dimensions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cone_dimensions
  {
    if (msg.cone_dimensions.size() == 0) {
      out << "cone_dimensions: []";
    } else {
      out << "cone_dimensions: [";
      size_t pending_items = msg.cone_dimensions.size();
      for (auto item : msg.cone_dimensions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: box_dimensions
  {
    if (msg.box_dimensions.size() == 0) {
      out << "box_dimensions: []";
    } else {
      out << "box_dimensions: [";
      size_t pending_items = msg.box_dimensions.size();
      for (auto item : msg.box_dimensions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: plane_coeff
  {
    if (msg.plane_coeff.size() == 0) {
      out << "plane_coeff: []";
    } else {
      out << "plane_coeff: [";
      size_t pending_items = msg.plane_coeff.size();
      for (auto item : msg.plane_coeff) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mesh
  {
    out << "mesh: ";
    to_flow_style_yaml(msg.mesh, out);
    out << ", ";
  }

  // member: octomap
  {
    out << "octomap: ";
    to_flow_style_yaml(msg.octomap, out);
    out << ", ";
  }

  // member: octomap_sub_type
  {
    out << "octomap_sub_type: ";
    to_flow_style_yaml(msg.octomap_sub_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Geometry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: sphere_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sphere_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.sphere_radius, out);
    out << "\n";
  }

  // member: cylinder_dimensions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cylinder_dimensions.size() == 0) {
      out << "cylinder_dimensions: []\n";
    } else {
      out << "cylinder_dimensions:\n";
      for (auto item : msg.cylinder_dimensions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: capsule_dimensions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.capsule_dimensions.size() == 0) {
      out << "capsule_dimensions: []\n";
    } else {
      out << "capsule_dimensions:\n";
      for (auto item : msg.capsule_dimensions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cone_dimensions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cone_dimensions.size() == 0) {
      out << "cone_dimensions: []\n";
    } else {
      out << "cone_dimensions:\n";
      for (auto item : msg.cone_dimensions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: box_dimensions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.box_dimensions.size() == 0) {
      out << "box_dimensions: []\n";
    } else {
      out << "box_dimensions:\n";
      for (auto item : msg.box_dimensions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: plane_coeff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.plane_coeff.size() == 0) {
      out << "plane_coeff: []\n";
    } else {
      out << "plane_coeff:\n";
      for (auto item : msg.plane_coeff) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mesh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mesh:\n";
    to_block_style_yaml(msg.mesh, out, indentation + 2);
  }

  // member: octomap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "octomap:\n";
    to_block_style_yaml(msg.octomap, out, indentation + 2);
  }

  // member: octomap_sub_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "octomap_sub_type:\n";
    to_block_style_yaml(msg.octomap_sub_type, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Geometry & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::Geometry & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::Geometry & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::Geometry>()
{
  return "tesseract_msgs::msg::Geometry";
}

template<>
inline const char * name<tesseract_msgs::msg::Geometry>()
{
  return "tesseract_msgs/msg/Geometry";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::Geometry>
  : std::integral_constant<bool, has_fixed_size<octomap_msgs::msg::Octomap>::value && has_fixed_size<tesseract_msgs::msg::Mesh>::value && has_fixed_size<tesseract_msgs::msg::OctreeSubType>::value> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::Geometry>
  : std::integral_constant<bool, has_bounded_size<octomap_msgs::msg::Octomap>::value && has_bounded_size<tesseract_msgs::msg::Mesh>::value && has_bounded_size<tesseract_msgs::msg::OctreeSubType>::value> {};

template<>
struct is_message<tesseract_msgs::msg::Geometry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__GEOMETRY__TRAITS_HPP_
