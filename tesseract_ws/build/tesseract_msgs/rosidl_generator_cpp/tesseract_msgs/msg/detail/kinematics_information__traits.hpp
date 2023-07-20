// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/KinematicsInformation.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__KINEMATICS_INFORMATION__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__KINEMATICS_INFORMATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/kinematics_information__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'group_joint_states'
#include "tesseract_msgs/msg/detail/groups_joint_states__traits.hpp"
// Member 'group_tcps'
#include "tesseract_msgs/msg/detail/groups_tc_ps__traits.hpp"
// Member 'chain_groups'
#include "tesseract_msgs/msg/detail/chain_group__traits.hpp"
// Member 'joint_groups'
#include "tesseract_msgs/msg/detail/joint_group__traits.hpp"
// Member 'link_groups'
#include "tesseract_msgs/msg/detail/link_group__traits.hpp"
// Member 'kinematics_plugin_info'
#include "tesseract_msgs/msg/detail/kinematics_plugin_info__traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const KinematicsInformation & msg,
  std::ostream & out)
{
  out << "{";
  // member: group_names
  {
    if (msg.group_names.size() == 0) {
      out << "group_names: []";
    } else {
      out << "group_names: [";
      size_t pending_items = msg.group_names.size();
      for (auto item : msg.group_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: group_joint_states
  {
    if (msg.group_joint_states.size() == 0) {
      out << "group_joint_states: []";
    } else {
      out << "group_joint_states: [";
      size_t pending_items = msg.group_joint_states.size();
      for (auto item : msg.group_joint_states) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: group_tcps
  {
    if (msg.group_tcps.size() == 0) {
      out << "group_tcps: []";
    } else {
      out << "group_tcps: [";
      size_t pending_items = msg.group_tcps.size();
      for (auto item : msg.group_tcps) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: chain_groups
  {
    if (msg.chain_groups.size() == 0) {
      out << "chain_groups: []";
    } else {
      out << "chain_groups: [";
      size_t pending_items = msg.chain_groups.size();
      for (auto item : msg.chain_groups) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_groups
  {
    if (msg.joint_groups.size() == 0) {
      out << "joint_groups: []";
    } else {
      out << "joint_groups: [";
      size_t pending_items = msg.joint_groups.size();
      for (auto item : msg.joint_groups) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: link_groups
  {
    if (msg.link_groups.size() == 0) {
      out << "link_groups: []";
    } else {
      out << "link_groups: [";
      size_t pending_items = msg.link_groups.size();
      for (auto item : msg.link_groups) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: kinematics_plugin_info
  {
    out << "kinematics_plugin_info: ";
    to_flow_style_yaml(msg.kinematics_plugin_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KinematicsInformation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: group_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.group_names.size() == 0) {
      out << "group_names: []\n";
    } else {
      out << "group_names:\n";
      for (auto item : msg.group_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: group_joint_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.group_joint_states.size() == 0) {
      out << "group_joint_states: []\n";
    } else {
      out << "group_joint_states:\n";
      for (auto item : msg.group_joint_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: group_tcps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.group_tcps.size() == 0) {
      out << "group_tcps: []\n";
    } else {
      out << "group_tcps:\n";
      for (auto item : msg.group_tcps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: chain_groups
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.chain_groups.size() == 0) {
      out << "chain_groups: []\n";
    } else {
      out << "chain_groups:\n";
      for (auto item : msg.chain_groups) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: joint_groups
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_groups.size() == 0) {
      out << "joint_groups: []\n";
    } else {
      out << "joint_groups:\n";
      for (auto item : msg.joint_groups) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: link_groups
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_groups.size() == 0) {
      out << "link_groups: []\n";
    } else {
      out << "link_groups:\n";
      for (auto item : msg.link_groups) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: kinematics_plugin_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kinematics_plugin_info:\n";
    to_block_style_yaml(msg.kinematics_plugin_info, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KinematicsInformation & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::KinematicsInformation & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::KinematicsInformation & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::KinematicsInformation>()
{
  return "tesseract_msgs::msg::KinematicsInformation";
}

template<>
inline const char * name<tesseract_msgs::msg::KinematicsInformation>()
{
  return "tesseract_msgs/msg/KinematicsInformation";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::KinematicsInformation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::KinematicsInformation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::KinematicsInformation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__KINEMATICS_INFORMATION__TRAITS_HPP_
