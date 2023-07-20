// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/EnvironmentCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/detail/environment_command__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/detail/environment_command__functions.h"
#include "tesseract_msgs/msg/detail/environment_command__struct.h"


// Include directives for member types
// Member `add_link`
#include "tesseract_msgs/msg/link.h"
// Member `add_link`
#include "tesseract_msgs/msg/detail/link__rosidl_typesupport_introspection_c.h"
// Member `add_joint`
// Member `move_link_joint`
// Member `replace_joint`
// Member `scene_graph_joint`
#include "tesseract_msgs/msg/joint.h"
// Member `add_joint`
// Member `move_link_joint`
// Member `replace_joint`
// Member `scene_graph_joint`
#include "tesseract_msgs/msg/detail/joint__rosidl_typesupport_introspection_c.h"
// Member `move_joint_name`
// Member `move_joint_parent_link`
// Member `remove_link`
// Member `remove_joint`
// Member `change_link_origin_name`
// Member `change_joint_origin_name`
// Member `change_link_collision_enabled_name`
// Member `change_link_visibility_name`
// Member `remove_allowed_collision_link`
// Member `scene_graph_prefix`
// Member `set_active_discrete_contact_manager`
// Member `set_active_continuous_contact_manager`
// Member `add_trajectory_link_name`
// Member `add_trajectory_link_parent_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `change_link_origin_pose`
// Member `change_joint_origin_pose`
#include "geometry_msgs/msg/pose.h"
// Member `change_link_origin_pose`
// Member `change_joint_origin_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `modify_allowed_collisions`
#include "tesseract_msgs/msg/allowed_collision_entry.h"
// Member `modify_allowed_collisions`
#include "tesseract_msgs/msg/detail/allowed_collision_entry__rosidl_typesupport_introspection_c.h"
// Member `joint_state`
#include "sensor_msgs/msg/joint_state.h"
// Member `joint_state`
#include "sensor_msgs/msg/detail/joint_state__rosidl_typesupport_introspection_c.h"
// Member `scene_graph`
#include "tesseract_msgs/msg/scene_graph.h"
// Member `scene_graph`
#include "tesseract_msgs/msg/detail/scene_graph__rosidl_typesupport_introspection_c.h"
// Member `change_joint_position_limits`
#include "tesseract_msgs/msg/string_limits_pair.h"
// Member `change_joint_position_limits`
#include "tesseract_msgs/msg/detail/string_limits_pair__rosidl_typesupport_introspection_c.h"
// Member `change_joint_velocity_limits`
// Member `change_joint_acceleration_limits`
#include "tesseract_msgs/msg/string_double_pair.h"
// Member `change_joint_velocity_limits`
// Member `change_joint_acceleration_limits`
#include "tesseract_msgs/msg/detail/string_double_pair__rosidl_typesupport_introspection_c.h"
// Member `add_kinematics_information`
#include "tesseract_msgs/msg/kinematics_information.h"
// Member `add_kinematics_information`
#include "tesseract_msgs/msg/detail/kinematics_information__rosidl_typesupport_introspection_c.h"
// Member `collision_margin_data`
#include "tesseract_msgs/msg/collision_margin_data.h"
// Member `collision_margin_data`
#include "tesseract_msgs/msg/detail/collision_margin_data__rosidl_typesupport_introspection_c.h"
// Member `collision_margin_override_type`
#include "tesseract_msgs/msg/collision_margin_override_type.h"
// Member `collision_margin_override_type`
#include "tesseract_msgs/msg/detail/collision_margin_override_type__rosidl_typesupport_introspection_c.h"
// Member `add_contact_managers_plugin_info`
#include "tesseract_msgs/msg/contact_managers_plugin_info.h"
// Member `add_contact_managers_plugin_info`
#include "tesseract_msgs/msg/detail/contact_managers_plugin_info__rosidl_typesupport_introspection_c.h"
// Member `add_trajectory_link_traj`
#include "tesseract_msgs/msg/joint_trajectory.h"
// Member `add_trajectory_link_traj`
#include "tesseract_msgs/msg/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__EnvironmentCommand__init(message_memory);
}

void tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_fini_function(void * message_memory)
{
  tesseract_msgs__msg__EnvironmentCommand__fini(message_memory);
}

size_t tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__size_function__EnvironmentCommand__modify_allowed_collisions(
  const void * untyped_member)
{
  const tesseract_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (const tesseract_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_const_function__EnvironmentCommand__modify_allowed_collisions(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (const tesseract_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_function__EnvironmentCommand__modify_allowed_collisions(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (tesseract_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__fetch_function__EnvironmentCommand__modify_allowed_collisions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__AllowedCollisionEntry * item =
    ((const tesseract_msgs__msg__AllowedCollisionEntry *)
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_const_function__EnvironmentCommand__modify_allowed_collisions(untyped_member, index));
  tesseract_msgs__msg__AllowedCollisionEntry * value =
    (tesseract_msgs__msg__AllowedCollisionEntry *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__assign_function__EnvironmentCommand__modify_allowed_collisions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__AllowedCollisionEntry * item =
    ((tesseract_msgs__msg__AllowedCollisionEntry *)
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_function__EnvironmentCommand__modify_allowed_collisions(untyped_member, index));
  const tesseract_msgs__msg__AllowedCollisionEntry * value =
    (const tesseract_msgs__msg__AllowedCollisionEntry *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__resize_function__EnvironmentCommand__modify_allowed_collisions(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (tesseract_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence__fini(member);
  return tesseract_msgs__msg__AllowedCollisionEntry__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__size_function__EnvironmentCommand__change_joint_position_limits(
  const void * untyped_member)
{
  const tesseract_msgs__msg__StringLimitsPair__Sequence * member =
    (const tesseract_msgs__msg__StringLimitsPair__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_const_function__EnvironmentCommand__change_joint_position_limits(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__StringLimitsPair__Sequence * member =
    (const tesseract_msgs__msg__StringLimitsPair__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_function__EnvironmentCommand__change_joint_position_limits(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__StringLimitsPair__Sequence * member =
    (tesseract_msgs__msg__StringLimitsPair__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__fetch_function__EnvironmentCommand__change_joint_position_limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__StringLimitsPair * item =
    ((const tesseract_msgs__msg__StringLimitsPair *)
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_const_function__EnvironmentCommand__change_joint_position_limits(untyped_member, index));
  tesseract_msgs__msg__StringLimitsPair * value =
    (tesseract_msgs__msg__StringLimitsPair *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__assign_function__EnvironmentCommand__change_joint_position_limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__StringLimitsPair * item =
    ((tesseract_msgs__msg__StringLimitsPair *)
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_function__EnvironmentCommand__change_joint_position_limits(untyped_member, index));
  const tesseract_msgs__msg__StringLimitsPair * value =
    (const tesseract_msgs__msg__StringLimitsPair *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__resize_function__EnvironmentCommand__change_joint_position_limits(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__StringLimitsPair__Sequence * member =
    (tesseract_msgs__msg__StringLimitsPair__Sequence *)(untyped_member);
  tesseract_msgs__msg__StringLimitsPair__Sequence__fini(member);
  return tesseract_msgs__msg__StringLimitsPair__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__size_function__EnvironmentCommand__change_joint_velocity_limits(
  const void * untyped_member)
{
  const tesseract_msgs__msg__StringDoublePair__Sequence * member =
    (const tesseract_msgs__msg__StringDoublePair__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_const_function__EnvironmentCommand__change_joint_velocity_limits(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__StringDoublePair__Sequence * member =
    (const tesseract_msgs__msg__StringDoublePair__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_function__EnvironmentCommand__change_joint_velocity_limits(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__StringDoublePair__Sequence * member =
    (tesseract_msgs__msg__StringDoublePair__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__fetch_function__EnvironmentCommand__change_joint_velocity_limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__StringDoublePair * item =
    ((const tesseract_msgs__msg__StringDoublePair *)
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_const_function__EnvironmentCommand__change_joint_velocity_limits(untyped_member, index));
  tesseract_msgs__msg__StringDoublePair * value =
    (tesseract_msgs__msg__StringDoublePair *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__assign_function__EnvironmentCommand__change_joint_velocity_limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__StringDoublePair * item =
    ((tesseract_msgs__msg__StringDoublePair *)
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_function__EnvironmentCommand__change_joint_velocity_limits(untyped_member, index));
  const tesseract_msgs__msg__StringDoublePair * value =
    (const tesseract_msgs__msg__StringDoublePair *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__resize_function__EnvironmentCommand__change_joint_velocity_limits(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__StringDoublePair__Sequence * member =
    (tesseract_msgs__msg__StringDoublePair__Sequence *)(untyped_member);
  tesseract_msgs__msg__StringDoublePair__Sequence__fini(member);
  return tesseract_msgs__msg__StringDoublePair__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__size_function__EnvironmentCommand__change_joint_acceleration_limits(
  const void * untyped_member)
{
  const tesseract_msgs__msg__StringDoublePair__Sequence * member =
    (const tesseract_msgs__msg__StringDoublePair__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_const_function__EnvironmentCommand__change_joint_acceleration_limits(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__StringDoublePair__Sequence * member =
    (const tesseract_msgs__msg__StringDoublePair__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_function__EnvironmentCommand__change_joint_acceleration_limits(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__StringDoublePair__Sequence * member =
    (tesseract_msgs__msg__StringDoublePair__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__fetch_function__EnvironmentCommand__change_joint_acceleration_limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__StringDoublePair * item =
    ((const tesseract_msgs__msg__StringDoublePair *)
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_const_function__EnvironmentCommand__change_joint_acceleration_limits(untyped_member, index));
  tesseract_msgs__msg__StringDoublePair * value =
    (tesseract_msgs__msg__StringDoublePair *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__assign_function__EnvironmentCommand__change_joint_acceleration_limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__StringDoublePair * item =
    ((tesseract_msgs__msg__StringDoublePair *)
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_function__EnvironmentCommand__change_joint_acceleration_limits(untyped_member, index));
  const tesseract_msgs__msg__StringDoublePair * value =
    (const tesseract_msgs__msg__StringDoublePair *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__resize_function__EnvironmentCommand__change_joint_acceleration_limits(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__StringDoublePair__Sequence * member =
    (tesseract_msgs__msg__StringDoublePair__Sequence *)(untyped_member);
  tesseract_msgs__msg__StringDoublePair__Sequence__fini(member);
  return tesseract_msgs__msg__StringDoublePair__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_member_array[38] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "add_link",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, add_link),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "add_joint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, add_joint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "add_replace_allowed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, add_replace_allowed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "move_link_joint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, move_link_joint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "move_joint_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, move_joint_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "move_joint_parent_link",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, move_joint_parent_link),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "remove_link",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, remove_link),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "remove_joint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, remove_joint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "replace_joint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, replace_joint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "change_link_origin_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, change_link_origin_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "change_link_origin_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, change_link_origin_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "change_joint_origin_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, change_joint_origin_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "change_joint_origin_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, change_joint_origin_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "change_link_collision_enabled_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, change_link_collision_enabled_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "change_link_collision_enabled_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, change_link_collision_enabled_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "change_link_visibility_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, change_link_visibility_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "change_link_visibility_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, change_link_visibility_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "modify_allowed_collisions_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, modify_allowed_collisions_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "modify_allowed_collisions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, modify_allowed_collisions),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__size_function__EnvironmentCommand__modify_allowed_collisions,  // size() function pointer
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_const_function__EnvironmentCommand__modify_allowed_collisions,  // get_const(index) function pointer
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_function__EnvironmentCommand__modify_allowed_collisions,  // get(index) function pointer
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__fetch_function__EnvironmentCommand__modify_allowed_collisions,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__assign_function__EnvironmentCommand__modify_allowed_collisions,  // assign(index, value) function pointer
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__resize_function__EnvironmentCommand__modify_allowed_collisions  // resize(index) function pointer
  },
  {
    "remove_allowed_collision_link",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, remove_allowed_collision_link),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, joint_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scene_graph",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, scene_graph),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scene_graph_joint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, scene_graph_joint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scene_graph_prefix",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, scene_graph_prefix),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "change_joint_position_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, change_joint_position_limits),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__size_function__EnvironmentCommand__change_joint_position_limits,  // size() function pointer
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_const_function__EnvironmentCommand__change_joint_position_limits,  // get_const(index) function pointer
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_function__EnvironmentCommand__change_joint_position_limits,  // get(index) function pointer
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__fetch_function__EnvironmentCommand__change_joint_position_limits,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__assign_function__EnvironmentCommand__change_joint_position_limits,  // assign(index, value) function pointer
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__resize_function__EnvironmentCommand__change_joint_position_limits  // resize(index) function pointer
  },
  {
    "change_joint_velocity_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, change_joint_velocity_limits),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__size_function__EnvironmentCommand__change_joint_velocity_limits,  // size() function pointer
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_const_function__EnvironmentCommand__change_joint_velocity_limits,  // get_const(index) function pointer
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_function__EnvironmentCommand__change_joint_velocity_limits,  // get(index) function pointer
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__fetch_function__EnvironmentCommand__change_joint_velocity_limits,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__assign_function__EnvironmentCommand__change_joint_velocity_limits,  // assign(index, value) function pointer
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__resize_function__EnvironmentCommand__change_joint_velocity_limits  // resize(index) function pointer
  },
  {
    "change_joint_acceleration_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, change_joint_acceleration_limits),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__size_function__EnvironmentCommand__change_joint_acceleration_limits,  // size() function pointer
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_const_function__EnvironmentCommand__change_joint_acceleration_limits,  // get_const(index) function pointer
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__get_function__EnvironmentCommand__change_joint_acceleration_limits,  // get(index) function pointer
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__fetch_function__EnvironmentCommand__change_joint_acceleration_limits,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__assign_function__EnvironmentCommand__change_joint_acceleration_limits,  // assign(index, value) function pointer
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__resize_function__EnvironmentCommand__change_joint_acceleration_limits  // resize(index) function pointer
  },
  {
    "add_kinematics_information",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, add_kinematics_information),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "collision_margin_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, collision_margin_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "collision_margin_override_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, collision_margin_override_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "add_contact_managers_plugin_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, add_contact_managers_plugin_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "set_active_discrete_contact_manager",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, set_active_discrete_contact_manager),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "set_active_continuous_contact_manager",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, set_active_continuous_contact_manager),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "add_trajectory_link_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, add_trajectory_link_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "add_trajectory_link_parent_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, add_trajectory_link_parent_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "add_trajectory_link_traj",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, add_trajectory_link_traj),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "add_trajectory_link_replace_allowed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__EnvironmentCommand, add_trajectory_link_replace_allowed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "EnvironmentCommand",  // message name
  38,  // number of fields
  sizeof(tesseract_msgs__msg__EnvironmentCommand),
  tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_member_array,  // message members
  tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_type_support_handle = {
  0,
  &tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, EnvironmentCommand)() {
  tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Link)();
  tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Joint)();
  tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Joint)();
  tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Joint)();
  tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_member_array[19].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, AllowedCollisionEntry)();
  tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_member_array[21].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_member_array[22].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, SceneGraph)();
  tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_member_array[23].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Joint)();
  tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_member_array[25].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, StringLimitsPair)();
  tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_member_array[26].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, StringDoublePair)();
  tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_member_array[27].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, StringDoublePair)();
  tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_member_array[28].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, KinematicsInformation)();
  tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_member_array[29].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, CollisionMarginData)();
  tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_member_array[30].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, CollisionMarginOverrideType)();
  tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_member_array[31].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, ContactManagersPluginInfo)();
  tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_member_array[36].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, JointTrajectory)();
  if (!tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__msg__EnvironmentCommand__rosidl_typesupport_introspection_c__EnvironmentCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
