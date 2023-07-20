// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/EnvironmentCommand.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT_COMMAND__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/msg/detail/environment_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'add_link'
#include "tesseract_msgs/msg/detail/link__traits.hpp"
// Member 'add_joint'
// Member 'move_link_joint'
// Member 'replace_joint'
// Member 'scene_graph_joint'
#include "tesseract_msgs/msg/detail/joint__traits.hpp"
// Member 'change_link_origin_pose'
// Member 'change_joint_origin_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'modify_allowed_collisions'
#include "tesseract_msgs/msg/detail/allowed_collision_entry__traits.hpp"
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"
// Member 'scene_graph'
#include "tesseract_msgs/msg/detail/scene_graph__traits.hpp"
// Member 'change_joint_position_limits'
#include "tesseract_msgs/msg/detail/string_limits_pair__traits.hpp"
// Member 'change_joint_velocity_limits'
// Member 'change_joint_acceleration_limits'
#include "tesseract_msgs/msg/detail/string_double_pair__traits.hpp"
// Member 'add_kinematics_information'
#include "tesseract_msgs/msg/detail/kinematics_information__traits.hpp"
// Member 'collision_margin_data'
#include "tesseract_msgs/msg/detail/collision_margin_data__traits.hpp"
// Member 'collision_margin_override_type'
#include "tesseract_msgs/msg/detail/collision_margin_override_type__traits.hpp"
// Member 'add_contact_managers_plugin_info'
#include "tesseract_msgs/msg/detail/contact_managers_plugin_info__traits.hpp"
// Member 'add_trajectory_link_traj'
#include "tesseract_msgs/msg/detail/joint_trajectory__traits.hpp"

namespace tesseract_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EnvironmentCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: add_link
  {
    out << "add_link: ";
    to_flow_style_yaml(msg.add_link, out);
    out << ", ";
  }

  // member: add_joint
  {
    out << "add_joint: ";
    to_flow_style_yaml(msg.add_joint, out);
    out << ", ";
  }

  // member: add_replace_allowed
  {
    out << "add_replace_allowed: ";
    rosidl_generator_traits::value_to_yaml(msg.add_replace_allowed, out);
    out << ", ";
  }

  // member: move_link_joint
  {
    out << "move_link_joint: ";
    to_flow_style_yaml(msg.move_link_joint, out);
    out << ", ";
  }

  // member: move_joint_name
  {
    out << "move_joint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.move_joint_name, out);
    out << ", ";
  }

  // member: move_joint_parent_link
  {
    out << "move_joint_parent_link: ";
    rosidl_generator_traits::value_to_yaml(msg.move_joint_parent_link, out);
    out << ", ";
  }

  // member: remove_link
  {
    out << "remove_link: ";
    rosidl_generator_traits::value_to_yaml(msg.remove_link, out);
    out << ", ";
  }

  // member: remove_joint
  {
    out << "remove_joint: ";
    rosidl_generator_traits::value_to_yaml(msg.remove_joint, out);
    out << ", ";
  }

  // member: replace_joint
  {
    out << "replace_joint: ";
    to_flow_style_yaml(msg.replace_joint, out);
    out << ", ";
  }

  // member: change_link_origin_name
  {
    out << "change_link_origin_name: ";
    rosidl_generator_traits::value_to_yaml(msg.change_link_origin_name, out);
    out << ", ";
  }

  // member: change_link_origin_pose
  {
    out << "change_link_origin_pose: ";
    to_flow_style_yaml(msg.change_link_origin_pose, out);
    out << ", ";
  }

  // member: change_joint_origin_name
  {
    out << "change_joint_origin_name: ";
    rosidl_generator_traits::value_to_yaml(msg.change_joint_origin_name, out);
    out << ", ";
  }

  // member: change_joint_origin_pose
  {
    out << "change_joint_origin_pose: ";
    to_flow_style_yaml(msg.change_joint_origin_pose, out);
    out << ", ";
  }

  // member: change_link_collision_enabled_name
  {
    out << "change_link_collision_enabled_name: ";
    rosidl_generator_traits::value_to_yaml(msg.change_link_collision_enabled_name, out);
    out << ", ";
  }

  // member: change_link_collision_enabled_value
  {
    out << "change_link_collision_enabled_value: ";
    rosidl_generator_traits::value_to_yaml(msg.change_link_collision_enabled_value, out);
    out << ", ";
  }

  // member: change_link_visibility_name
  {
    out << "change_link_visibility_name: ";
    rosidl_generator_traits::value_to_yaml(msg.change_link_visibility_name, out);
    out << ", ";
  }

  // member: change_link_visibility_value
  {
    out << "change_link_visibility_value: ";
    rosidl_generator_traits::value_to_yaml(msg.change_link_visibility_value, out);
    out << ", ";
  }

  // member: modify_allowed_collisions_type
  {
    out << "modify_allowed_collisions_type: ";
    rosidl_generator_traits::value_to_yaml(msg.modify_allowed_collisions_type, out);
    out << ", ";
  }

  // member: modify_allowed_collisions
  {
    if (msg.modify_allowed_collisions.size() == 0) {
      out << "modify_allowed_collisions: []";
    } else {
      out << "modify_allowed_collisions: [";
      size_t pending_items = msg.modify_allowed_collisions.size();
      for (auto item : msg.modify_allowed_collisions) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: remove_allowed_collision_link
  {
    out << "remove_allowed_collision_link: ";
    rosidl_generator_traits::value_to_yaml(msg.remove_allowed_collision_link, out);
    out << ", ";
  }

  // member: joint_state
  {
    out << "joint_state: ";
    to_flow_style_yaml(msg.joint_state, out);
    out << ", ";
  }

  // member: scene_graph
  {
    out << "scene_graph: ";
    to_flow_style_yaml(msg.scene_graph, out);
    out << ", ";
  }

  // member: scene_graph_joint
  {
    out << "scene_graph_joint: ";
    to_flow_style_yaml(msg.scene_graph_joint, out);
    out << ", ";
  }

  // member: scene_graph_prefix
  {
    out << "scene_graph_prefix: ";
    rosidl_generator_traits::value_to_yaml(msg.scene_graph_prefix, out);
    out << ", ";
  }

  // member: change_joint_position_limits
  {
    if (msg.change_joint_position_limits.size() == 0) {
      out << "change_joint_position_limits: []";
    } else {
      out << "change_joint_position_limits: [";
      size_t pending_items = msg.change_joint_position_limits.size();
      for (auto item : msg.change_joint_position_limits) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: change_joint_velocity_limits
  {
    if (msg.change_joint_velocity_limits.size() == 0) {
      out << "change_joint_velocity_limits: []";
    } else {
      out << "change_joint_velocity_limits: [";
      size_t pending_items = msg.change_joint_velocity_limits.size();
      for (auto item : msg.change_joint_velocity_limits) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: change_joint_acceleration_limits
  {
    if (msg.change_joint_acceleration_limits.size() == 0) {
      out << "change_joint_acceleration_limits: []";
    } else {
      out << "change_joint_acceleration_limits: [";
      size_t pending_items = msg.change_joint_acceleration_limits.size();
      for (auto item : msg.change_joint_acceleration_limits) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: add_kinematics_information
  {
    out << "add_kinematics_information: ";
    to_flow_style_yaml(msg.add_kinematics_information, out);
    out << ", ";
  }

  // member: collision_margin_data
  {
    out << "collision_margin_data: ";
    to_flow_style_yaml(msg.collision_margin_data, out);
    out << ", ";
  }

  // member: collision_margin_override_type
  {
    out << "collision_margin_override_type: ";
    to_flow_style_yaml(msg.collision_margin_override_type, out);
    out << ", ";
  }

  // member: add_contact_managers_plugin_info
  {
    out << "add_contact_managers_plugin_info: ";
    to_flow_style_yaml(msg.add_contact_managers_plugin_info, out);
    out << ", ";
  }

  // member: set_active_discrete_contact_manager
  {
    out << "set_active_discrete_contact_manager: ";
    rosidl_generator_traits::value_to_yaml(msg.set_active_discrete_contact_manager, out);
    out << ", ";
  }

  // member: set_active_continuous_contact_manager
  {
    out << "set_active_continuous_contact_manager: ";
    rosidl_generator_traits::value_to_yaml(msg.set_active_continuous_contact_manager, out);
    out << ", ";
  }

  // member: add_trajectory_link_name
  {
    out << "add_trajectory_link_name: ";
    rosidl_generator_traits::value_to_yaml(msg.add_trajectory_link_name, out);
    out << ", ";
  }

  // member: add_trajectory_link_parent_name
  {
    out << "add_trajectory_link_parent_name: ";
    rosidl_generator_traits::value_to_yaml(msg.add_trajectory_link_parent_name, out);
    out << ", ";
  }

  // member: add_trajectory_link_traj
  {
    out << "add_trajectory_link_traj: ";
    to_flow_style_yaml(msg.add_trajectory_link_traj, out);
    out << ", ";
  }

  // member: add_trajectory_link_replace_allowed
  {
    out << "add_trajectory_link_replace_allowed: ";
    rosidl_generator_traits::value_to_yaml(msg.add_trajectory_link_replace_allowed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EnvironmentCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: add_link
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "add_link:\n";
    to_block_style_yaml(msg.add_link, out, indentation + 2);
  }

  // member: add_joint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "add_joint:\n";
    to_block_style_yaml(msg.add_joint, out, indentation + 2);
  }

  // member: add_replace_allowed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "add_replace_allowed: ";
    rosidl_generator_traits::value_to_yaml(msg.add_replace_allowed, out);
    out << "\n";
  }

  // member: move_link_joint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_link_joint:\n";
    to_block_style_yaml(msg.move_link_joint, out, indentation + 2);
  }

  // member: move_joint_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_joint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.move_joint_name, out);
    out << "\n";
  }

  // member: move_joint_parent_link
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_joint_parent_link: ";
    rosidl_generator_traits::value_to_yaml(msg.move_joint_parent_link, out);
    out << "\n";
  }

  // member: remove_link
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remove_link: ";
    rosidl_generator_traits::value_to_yaml(msg.remove_link, out);
    out << "\n";
  }

  // member: remove_joint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remove_joint: ";
    rosidl_generator_traits::value_to_yaml(msg.remove_joint, out);
    out << "\n";
  }

  // member: replace_joint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "replace_joint:\n";
    to_block_style_yaml(msg.replace_joint, out, indentation + 2);
  }

  // member: change_link_origin_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "change_link_origin_name: ";
    rosidl_generator_traits::value_to_yaml(msg.change_link_origin_name, out);
    out << "\n";
  }

  // member: change_link_origin_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "change_link_origin_pose:\n";
    to_block_style_yaml(msg.change_link_origin_pose, out, indentation + 2);
  }

  // member: change_joint_origin_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "change_joint_origin_name: ";
    rosidl_generator_traits::value_to_yaml(msg.change_joint_origin_name, out);
    out << "\n";
  }

  // member: change_joint_origin_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "change_joint_origin_pose:\n";
    to_block_style_yaml(msg.change_joint_origin_pose, out, indentation + 2);
  }

  // member: change_link_collision_enabled_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "change_link_collision_enabled_name: ";
    rosidl_generator_traits::value_to_yaml(msg.change_link_collision_enabled_name, out);
    out << "\n";
  }

  // member: change_link_collision_enabled_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "change_link_collision_enabled_value: ";
    rosidl_generator_traits::value_to_yaml(msg.change_link_collision_enabled_value, out);
    out << "\n";
  }

  // member: change_link_visibility_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "change_link_visibility_name: ";
    rosidl_generator_traits::value_to_yaml(msg.change_link_visibility_name, out);
    out << "\n";
  }

  // member: change_link_visibility_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "change_link_visibility_value: ";
    rosidl_generator_traits::value_to_yaml(msg.change_link_visibility_value, out);
    out << "\n";
  }

  // member: modify_allowed_collisions_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "modify_allowed_collisions_type: ";
    rosidl_generator_traits::value_to_yaml(msg.modify_allowed_collisions_type, out);
    out << "\n";
  }

  // member: modify_allowed_collisions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.modify_allowed_collisions.size() == 0) {
      out << "modify_allowed_collisions: []\n";
    } else {
      out << "modify_allowed_collisions:\n";
      for (auto item : msg.modify_allowed_collisions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: remove_allowed_collision_link
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remove_allowed_collision_link: ";
    rosidl_generator_traits::value_to_yaml(msg.remove_allowed_collision_link, out);
    out << "\n";
  }

  // member: joint_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_state:\n";
    to_block_style_yaml(msg.joint_state, out, indentation + 2);
  }

  // member: scene_graph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scene_graph:\n";
    to_block_style_yaml(msg.scene_graph, out, indentation + 2);
  }

  // member: scene_graph_joint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scene_graph_joint:\n";
    to_block_style_yaml(msg.scene_graph_joint, out, indentation + 2);
  }

  // member: scene_graph_prefix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scene_graph_prefix: ";
    rosidl_generator_traits::value_to_yaml(msg.scene_graph_prefix, out);
    out << "\n";
  }

  // member: change_joint_position_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.change_joint_position_limits.size() == 0) {
      out << "change_joint_position_limits: []\n";
    } else {
      out << "change_joint_position_limits:\n";
      for (auto item : msg.change_joint_position_limits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: change_joint_velocity_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.change_joint_velocity_limits.size() == 0) {
      out << "change_joint_velocity_limits: []\n";
    } else {
      out << "change_joint_velocity_limits:\n";
      for (auto item : msg.change_joint_velocity_limits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: change_joint_acceleration_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.change_joint_acceleration_limits.size() == 0) {
      out << "change_joint_acceleration_limits: []\n";
    } else {
      out << "change_joint_acceleration_limits:\n";
      for (auto item : msg.change_joint_acceleration_limits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: add_kinematics_information
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "add_kinematics_information:\n";
    to_block_style_yaml(msg.add_kinematics_information, out, indentation + 2);
  }

  // member: collision_margin_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_margin_data:\n";
    to_block_style_yaml(msg.collision_margin_data, out, indentation + 2);
  }

  // member: collision_margin_override_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_margin_override_type:\n";
    to_block_style_yaml(msg.collision_margin_override_type, out, indentation + 2);
  }

  // member: add_contact_managers_plugin_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "add_contact_managers_plugin_info:\n";
    to_block_style_yaml(msg.add_contact_managers_plugin_info, out, indentation + 2);
  }

  // member: set_active_discrete_contact_manager
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_active_discrete_contact_manager: ";
    rosidl_generator_traits::value_to_yaml(msg.set_active_discrete_contact_manager, out);
    out << "\n";
  }

  // member: set_active_continuous_contact_manager
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_active_continuous_contact_manager: ";
    rosidl_generator_traits::value_to_yaml(msg.set_active_continuous_contact_manager, out);
    out << "\n";
  }

  // member: add_trajectory_link_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "add_trajectory_link_name: ";
    rosidl_generator_traits::value_to_yaml(msg.add_trajectory_link_name, out);
    out << "\n";
  }

  // member: add_trajectory_link_parent_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "add_trajectory_link_parent_name: ";
    rosidl_generator_traits::value_to_yaml(msg.add_trajectory_link_parent_name, out);
    out << "\n";
  }

  // member: add_trajectory_link_traj
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "add_trajectory_link_traj:\n";
    to_block_style_yaml(msg.add_trajectory_link_traj, out, indentation + 2);
  }

  // member: add_trajectory_link_replace_allowed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "add_trajectory_link_replace_allowed: ";
    rosidl_generator_traits::value_to_yaml(msg.add_trajectory_link_replace_allowed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnvironmentCommand & msg, bool use_flow_style = false)
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
  const tesseract_msgs::msg::EnvironmentCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::msg::EnvironmentCommand & msg)
{
  return tesseract_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::msg::EnvironmentCommand>()
{
  return "tesseract_msgs::msg::EnvironmentCommand";
}

template<>
inline const char * name<tesseract_msgs::msg::EnvironmentCommand>()
{
  return "tesseract_msgs/msg/EnvironmentCommand";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::EnvironmentCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::EnvironmentCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::EnvironmentCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT_COMMAND__TRAITS_HPP_
