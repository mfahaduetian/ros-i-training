// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/EnvironmentCommand.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT_COMMAND__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ADD_LINK'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__ADD_LINK = 0
};

/// Constant 'MOVE_LINK'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__MOVE_LINK = 1
};

/// Constant 'MOVE_JOINT'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__MOVE_JOINT = 2
};

/// Constant 'REMOVE_LINK'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__REMOVE_LINK = 3
};

/// Constant 'REMOVE_JOINT'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__REMOVE_JOINT = 4
};

/// Constant 'CHANGE_LINK_ORIGIN'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__CHANGE_LINK_ORIGIN = 5
};

/// Constant 'CHANGE_JOINT_ORIGIN'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__CHANGE_JOINT_ORIGIN = 6
};

/// Constant 'CHANGE_LINK_COLLISION_ENABLED'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__CHANGE_LINK_COLLISION_ENABLED = 7
};

/// Constant 'CHANGE_LINK_VISIBILITY'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__CHANGE_LINK_VISIBILITY = 8
};

/// Constant 'MODIFY_ALLOWED_COLLISIONS'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__MODIFY_ALLOWED_COLLISIONS = 9
};

/// Constant 'REMOVE_ALLOWED_COLLISION_LINK'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__REMOVE_ALLOWED_COLLISION_LINK = 10
};

/// Constant 'UPDATE_JOINT_STATE'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__UPDATE_JOINT_STATE = 11
};

/// Constant 'ADD_SCENE_GRAPH'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__ADD_SCENE_GRAPH = 12
};

/// Constant 'CHANGE_JOINT_POSITION_LIMITS'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__CHANGE_JOINT_POSITION_LIMITS = 13
};

/// Constant 'CHANGE_JOINT_VELOCITY_LIMITS'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__CHANGE_JOINT_VELOCITY_LIMITS = 14
};

/// Constant 'CHANGE_JOINT_ACCELERATION_LIMITS'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__CHANGE_JOINT_ACCELERATION_LIMITS = 15
};

/// Constant 'ADD_KINEMATICS_INFORMATION'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__ADD_KINEMATICS_INFORMATION = 16
};

/// Constant 'REPLACE_JOINT'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__REPLACE_JOINT = 17
};

/// Constant 'CHANGE_COLLISION_MARGINS'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__CHANGE_COLLISION_MARGINS = 18
};

/// Constant 'ADD_CONTACT_MANAGERS_PLUGIN_INFO'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__ADD_CONTACT_MANAGERS_PLUGIN_INFO = 19
};

/// Constant 'SET_ACTIVE_DISCRETE_CONTACT_MANAGER'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__SET_ACTIVE_DISCRETE_CONTACT_MANAGER = 20
};

/// Constant 'SET_ACTIVE_CONTINUOUS_CONTACT_MANAGER'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__SET_ACTIVE_CONTINUOUS_CONTACT_MANAGER = 21
};

/// Constant 'ADD_TRAJECTORY_LINK'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__ADD_TRAJECTORY_LINK = 22
};

// Include directives for member types
// Member 'add_link'
#include "tesseract_msgs/msg/detail/link__struct.h"
// Member 'add_joint'
// Member 'move_link_joint'
// Member 'replace_joint'
// Member 'scene_graph_joint'
#include "tesseract_msgs/msg/detail/joint__struct.h"
// Member 'move_joint_name'
// Member 'move_joint_parent_link'
// Member 'remove_link'
// Member 'remove_joint'
// Member 'change_link_origin_name'
// Member 'change_joint_origin_name'
// Member 'change_link_collision_enabled_name'
// Member 'change_link_visibility_name'
// Member 'remove_allowed_collision_link'
// Member 'scene_graph_prefix'
// Member 'set_active_discrete_contact_manager'
// Member 'set_active_continuous_contact_manager'
// Member 'add_trajectory_link_name'
// Member 'add_trajectory_link_parent_name'
#include "rosidl_runtime_c/string.h"
// Member 'change_link_origin_pose'
// Member 'change_joint_origin_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'modify_allowed_collisions'
#include "tesseract_msgs/msg/detail/allowed_collision_entry__struct.h"
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__struct.h"
// Member 'scene_graph'
#include "tesseract_msgs/msg/detail/scene_graph__struct.h"
// Member 'change_joint_position_limits'
#include "tesseract_msgs/msg/detail/string_limits_pair__struct.h"
// Member 'change_joint_velocity_limits'
// Member 'change_joint_acceleration_limits'
#include "tesseract_msgs/msg/detail/string_double_pair__struct.h"
// Member 'add_kinematics_information'
#include "tesseract_msgs/msg/detail/kinematics_information__struct.h"
// Member 'collision_margin_data'
#include "tesseract_msgs/msg/detail/collision_margin_data__struct.h"
// Member 'collision_margin_override_type'
#include "tesseract_msgs/msg/detail/collision_margin_override_type__struct.h"
// Member 'add_contact_managers_plugin_info'
#include "tesseract_msgs/msg/detail/contact_managers_plugin_info__struct.h"
// Member 'add_trajectory_link_traj'
#include "tesseract_msgs/msg/detail/joint_trajectory__struct.h"

/// Struct defined in msg/EnvironmentCommand in the package tesseract_msgs.
/**
  * Possible Commands
 */
typedef struct tesseract_msgs__msg__EnvironmentCommand
{
  /// Specifies the type of command. Dictates which of the fields below are used
  uint8_t command;
  /// ADD - Adds a link and the associated joint to the environment
  tesseract_msgs__msg__Link add_link;
  tesseract_msgs__msg__Joint add_joint;
  bool add_replace_allowed;
  /// MOVE_LINK - Changes the joint associated with the link
  tesseract_msgs__msg__Joint move_link_joint;
  /// MOVE_JOINT - Changes the parent link associated with the joint
  rosidl_runtime_c__String move_joint_name;
  rosidl_runtime_c__String move_joint_parent_link;
  /// REMOVE_LINK - Removes the link from the environment
  rosidl_runtime_c__String remove_link;
  /// REMOVE_JOINT - Removes the joint from the environment
  rosidl_runtime_c__String remove_joint;
  /// REPLACE_JOINT - Replace the joint in the environment
  tesseract_msgs__msg__Joint replace_joint;
  /// CHANGE_LINK_ORIGIN - Changes the origin of the link
  rosidl_runtime_c__String change_link_origin_name;
  geometry_msgs__msg__Pose change_link_origin_pose;
  /// CHANGE_JOINT_ORIGIN - Changes the origin of the joint
  rosidl_runtime_c__String change_joint_origin_name;
  geometry_msgs__msg__Pose change_joint_origin_pose;
  /// CHANGE_LINK_COLLISION_ENABLED - Enables/Disables collisions for the link
  rosidl_runtime_c__String change_link_collision_enabled_name;
  bool change_link_collision_enabled_value;
  /// CHANGE_LINK_VISIBILITY - Enables/Disables visibility for the link
  rosidl_runtime_c__String change_link_visibility_name;
  bool change_link_visibility_value;
  /// MODIFY_ALLOWED_COLLISIONS - Modify allowable collisions in the allowable collision matrix
  /// ADD, REMOVE, REPLACE
  uint8_t modify_allowed_collisions_type;
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence modify_allowed_collisions;
  /// REMOVE_ALLOWED_COLLISION_LINK
  rosidl_runtime_c__String remove_allowed_collision_link;
  /// UPDATE_JOINT_STATE
  sensor_msgs__msg__JointState joint_state;
  /// ADD_SCENE_GRAPH Command
  tesseract_msgs__msg__SceneGraph scene_graph;
  tesseract_msgs__msg__Joint scene_graph_joint;
  rosidl_runtime_c__String scene_graph_prefix;
  /// CHANGE_JOINT_POSITION_LIMITS Command
  tesseract_msgs__msg__StringLimitsPair__Sequence change_joint_position_limits;
  /// CHANGE_JOINT_VELOCITY_LIMITS Command
  tesseract_msgs__msg__StringDoublePair__Sequence change_joint_velocity_limits;
  /// CHANGE_JOINT_ACCELERATION_LIMITS Command
  tesseract_msgs__msg__StringDoublePair__Sequence change_joint_acceleration_limits;
  /// ADD_KINEMATICS_INFORMATION Command
  tesseract_msgs__msg__KinematicsInformation add_kinematics_information;
  /// CHANGE_COLLISION_MARGINS Command
  tesseract_msgs__msg__CollisionMarginData collision_margin_data;
  tesseract_msgs__msg__CollisionMarginOverrideType collision_margin_override_type;
  /// ADD_CONTACT_MANAGERS_PLUGIN_INFO Command
  tesseract_msgs__msg__ContactManagersPluginInfo add_contact_managers_plugin_info;
  /// SET_ACTIVE_DISCRETE_CONTACT_MANAGER Command
  rosidl_runtime_c__String set_active_discrete_contact_manager;
  /// SET_ACTIVE_CONTINUOUS_CONTACT_MANAGER Command
  rosidl_runtime_c__String set_active_continuous_contact_manager;
  /// ADD_TRAJECTORY_LINK Command
  rosidl_runtime_c__String add_trajectory_link_name;
  rosidl_runtime_c__String add_trajectory_link_parent_name;
  tesseract_msgs__msg__JointTrajectory add_trajectory_link_traj;
  bool add_trajectory_link_replace_allowed;
} tesseract_msgs__msg__EnvironmentCommand;

// Struct for a sequence of tesseract_msgs__msg__EnvironmentCommand.
typedef struct tesseract_msgs__msg__EnvironmentCommand__Sequence
{
  tesseract_msgs__msg__EnvironmentCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__EnvironmentCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT_COMMAND__STRUCT_H_
