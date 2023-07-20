// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tesseract_msgs:msg/EnvironmentCommand.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/environment_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tesseract_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tesseract_msgs/msg/detail/environment_command__struct.h"
#include "tesseract_msgs/msg/detail/environment_command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/pose__functions.h"  // change_joint_origin_pose, change_link_origin_pose
#include "rosidl_runtime_c/string.h"  // add_trajectory_link_name, add_trajectory_link_parent_name, change_joint_origin_name, change_link_collision_enabled_name, change_link_origin_name, change_link_visibility_name, move_joint_name, move_joint_parent_link, remove_allowed_collision_link, remove_joint, remove_link, scene_graph_prefix, set_active_continuous_contact_manager, set_active_discrete_contact_manager
#include "rosidl_runtime_c/string_functions.h"  // add_trajectory_link_name, add_trajectory_link_parent_name, change_joint_origin_name, change_link_collision_enabled_name, change_link_origin_name, change_link_visibility_name, move_joint_name, move_joint_parent_link, remove_allowed_collision_link, remove_joint, remove_link, scene_graph_prefix, set_active_continuous_contact_manager, set_active_discrete_contact_manager
#include "sensor_msgs/msg/detail/joint_state__functions.h"  // joint_state
#include "tesseract_msgs/msg/detail/allowed_collision_entry__functions.h"  // modify_allowed_collisions
#include "tesseract_msgs/msg/detail/collision_margin_data__functions.h"  // collision_margin_data
#include "tesseract_msgs/msg/detail/collision_margin_override_type__functions.h"  // collision_margin_override_type
#include "tesseract_msgs/msg/detail/contact_managers_plugin_info__functions.h"  // add_contact_managers_plugin_info
#include "tesseract_msgs/msg/detail/joint__functions.h"  // add_joint, move_link_joint, replace_joint, scene_graph_joint
#include "tesseract_msgs/msg/detail/joint_trajectory__functions.h"  // add_trajectory_link_traj
#include "tesseract_msgs/msg/detail/kinematics_information__functions.h"  // add_kinematics_information
#include "tesseract_msgs/msg/detail/link__functions.h"  // add_link
#include "tesseract_msgs/msg/detail/scene_graph__functions.h"  // scene_graph
#include "tesseract_msgs/msg/detail/string_double_pair__functions.h"  // change_joint_acceleration_limits, change_joint_velocity_limits
#include "tesseract_msgs/msg/detail/string_limits_pair__functions.h"  // change_joint_position_limits

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tesseract_msgs
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tesseract_msgs
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tesseract_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tesseract_msgs
size_t get_serialized_size_sensor_msgs__msg__JointState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tesseract_msgs
size_t max_serialized_size_sensor_msgs__msg__JointState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tesseract_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, JointState)();
size_t get_serialized_size_tesseract_msgs__msg__AllowedCollisionEntry(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__AllowedCollisionEntry(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, AllowedCollisionEntry)();
size_t get_serialized_size_tesseract_msgs__msg__CollisionMarginData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__CollisionMarginData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, CollisionMarginData)();
size_t get_serialized_size_tesseract_msgs__msg__CollisionMarginOverrideType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__CollisionMarginOverrideType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, CollisionMarginOverrideType)();
size_t get_serialized_size_tesseract_msgs__msg__ContactManagersPluginInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__ContactManagersPluginInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, ContactManagersPluginInfo)();
size_t get_serialized_size_tesseract_msgs__msg__Joint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__Joint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, Joint)();
size_t get_serialized_size_tesseract_msgs__msg__JointTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__JointTrajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointTrajectory)();
size_t get_serialized_size_tesseract_msgs__msg__KinematicsInformation(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__KinematicsInformation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, KinematicsInformation)();
size_t get_serialized_size_tesseract_msgs__msg__Link(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__Link(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, Link)();
size_t get_serialized_size_tesseract_msgs__msg__SceneGraph(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__SceneGraph(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, SceneGraph)();
size_t get_serialized_size_tesseract_msgs__msg__StringDoublePair(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__StringDoublePair(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, StringDoublePair)();
size_t get_serialized_size_tesseract_msgs__msg__StringLimitsPair(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__StringLimitsPair(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, StringLimitsPair)();


using _EnvironmentCommand__ros_msg_type = tesseract_msgs__msg__EnvironmentCommand;

static bool _EnvironmentCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EnvironmentCommand__ros_msg_type * ros_message = static_cast<const _EnvironmentCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: command
  {
    cdr << ros_message->command;
  }

  // Field name: add_link
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, Link
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->add_link, cdr))
    {
      return false;
    }
  }

  // Field name: add_joint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, Joint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->add_joint, cdr))
    {
      return false;
    }
  }

  // Field name: add_replace_allowed
  {
    cdr << (ros_message->add_replace_allowed ? true : false);
  }

  // Field name: move_link_joint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, Joint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->move_link_joint, cdr))
    {
      return false;
    }
  }

  // Field name: move_joint_name
  {
    const rosidl_runtime_c__String * str = &ros_message->move_joint_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: move_joint_parent_link
  {
    const rosidl_runtime_c__String * str = &ros_message->move_joint_parent_link;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: remove_link
  {
    const rosidl_runtime_c__String * str = &ros_message->remove_link;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: remove_joint
  {
    const rosidl_runtime_c__String * str = &ros_message->remove_joint;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: replace_joint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, Joint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->replace_joint, cdr))
    {
      return false;
    }
  }

  // Field name: change_link_origin_name
  {
    const rosidl_runtime_c__String * str = &ros_message->change_link_origin_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: change_link_origin_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->change_link_origin_pose, cdr))
    {
      return false;
    }
  }

  // Field name: change_joint_origin_name
  {
    const rosidl_runtime_c__String * str = &ros_message->change_joint_origin_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: change_joint_origin_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->change_joint_origin_pose, cdr))
    {
      return false;
    }
  }

  // Field name: change_link_collision_enabled_name
  {
    const rosidl_runtime_c__String * str = &ros_message->change_link_collision_enabled_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: change_link_collision_enabled_value
  {
    cdr << (ros_message->change_link_collision_enabled_value ? true : false);
  }

  // Field name: change_link_visibility_name
  {
    const rosidl_runtime_c__String * str = &ros_message->change_link_visibility_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: change_link_visibility_value
  {
    cdr << (ros_message->change_link_visibility_value ? true : false);
  }

  // Field name: modify_allowed_collisions_type
  {
    cdr << ros_message->modify_allowed_collisions_type;
  }

  // Field name: modify_allowed_collisions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, AllowedCollisionEntry
      )()->data);
    size_t size = ros_message->modify_allowed_collisions.size;
    auto array_ptr = ros_message->modify_allowed_collisions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: remove_allowed_collision_link
  {
    const rosidl_runtime_c__String * str = &ros_message->remove_allowed_collision_link;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: joint_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, JointState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->joint_state, cdr))
    {
      return false;
    }
  }

  // Field name: scene_graph
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, SceneGraph
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->scene_graph, cdr))
    {
      return false;
    }
  }

  // Field name: scene_graph_joint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, Joint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->scene_graph_joint, cdr))
    {
      return false;
    }
  }

  // Field name: scene_graph_prefix
  {
    const rosidl_runtime_c__String * str = &ros_message->scene_graph_prefix;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: change_joint_position_limits
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, StringLimitsPair
      )()->data);
    size_t size = ros_message->change_joint_position_limits.size;
    auto array_ptr = ros_message->change_joint_position_limits.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: change_joint_velocity_limits
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, StringDoublePair
      )()->data);
    size_t size = ros_message->change_joint_velocity_limits.size;
    auto array_ptr = ros_message->change_joint_velocity_limits.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: change_joint_acceleration_limits
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, StringDoublePair
      )()->data);
    size_t size = ros_message->change_joint_acceleration_limits.size;
    auto array_ptr = ros_message->change_joint_acceleration_limits.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: add_kinematics_information
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, KinematicsInformation
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->add_kinematics_information, cdr))
    {
      return false;
    }
  }

  // Field name: collision_margin_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, CollisionMarginData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->collision_margin_data, cdr))
    {
      return false;
    }
  }

  // Field name: collision_margin_override_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, CollisionMarginOverrideType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->collision_margin_override_type, cdr))
    {
      return false;
    }
  }

  // Field name: add_contact_managers_plugin_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, ContactManagersPluginInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->add_contact_managers_plugin_info, cdr))
    {
      return false;
    }
  }

  // Field name: set_active_discrete_contact_manager
  {
    const rosidl_runtime_c__String * str = &ros_message->set_active_discrete_contact_manager;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: set_active_continuous_contact_manager
  {
    const rosidl_runtime_c__String * str = &ros_message->set_active_continuous_contact_manager;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: add_trajectory_link_name
  {
    const rosidl_runtime_c__String * str = &ros_message->add_trajectory_link_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: add_trajectory_link_parent_name
  {
    const rosidl_runtime_c__String * str = &ros_message->add_trajectory_link_parent_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: add_trajectory_link_traj
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointTrajectory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->add_trajectory_link_traj, cdr))
    {
      return false;
    }
  }

  // Field name: add_trajectory_link_replace_allowed
  {
    cdr << (ros_message->add_trajectory_link_replace_allowed ? true : false);
  }

  return true;
}

static bool _EnvironmentCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EnvironmentCommand__ros_msg_type * ros_message = static_cast<_EnvironmentCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: command
  {
    cdr >> ros_message->command;
  }

  // Field name: add_link
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, Link
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->add_link))
    {
      return false;
    }
  }

  // Field name: add_joint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, Joint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->add_joint))
    {
      return false;
    }
  }

  // Field name: add_replace_allowed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->add_replace_allowed = tmp ? true : false;
  }

  // Field name: move_link_joint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, Joint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->move_link_joint))
    {
      return false;
    }
  }

  // Field name: move_joint_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->move_joint_name.data) {
      rosidl_runtime_c__String__init(&ros_message->move_joint_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->move_joint_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'move_joint_name'\n");
      return false;
    }
  }

  // Field name: move_joint_parent_link
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->move_joint_parent_link.data) {
      rosidl_runtime_c__String__init(&ros_message->move_joint_parent_link);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->move_joint_parent_link,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'move_joint_parent_link'\n");
      return false;
    }
  }

  // Field name: remove_link
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->remove_link.data) {
      rosidl_runtime_c__String__init(&ros_message->remove_link);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->remove_link,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'remove_link'\n");
      return false;
    }
  }

  // Field name: remove_joint
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->remove_joint.data) {
      rosidl_runtime_c__String__init(&ros_message->remove_joint);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->remove_joint,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'remove_joint'\n");
      return false;
    }
  }

  // Field name: replace_joint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, Joint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->replace_joint))
    {
      return false;
    }
  }

  // Field name: change_link_origin_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->change_link_origin_name.data) {
      rosidl_runtime_c__String__init(&ros_message->change_link_origin_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->change_link_origin_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'change_link_origin_name'\n");
      return false;
    }
  }

  // Field name: change_link_origin_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->change_link_origin_pose))
    {
      return false;
    }
  }

  // Field name: change_joint_origin_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->change_joint_origin_name.data) {
      rosidl_runtime_c__String__init(&ros_message->change_joint_origin_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->change_joint_origin_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'change_joint_origin_name'\n");
      return false;
    }
  }

  // Field name: change_joint_origin_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->change_joint_origin_pose))
    {
      return false;
    }
  }

  // Field name: change_link_collision_enabled_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->change_link_collision_enabled_name.data) {
      rosidl_runtime_c__String__init(&ros_message->change_link_collision_enabled_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->change_link_collision_enabled_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'change_link_collision_enabled_name'\n");
      return false;
    }
  }

  // Field name: change_link_collision_enabled_value
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->change_link_collision_enabled_value = tmp ? true : false;
  }

  // Field name: change_link_visibility_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->change_link_visibility_name.data) {
      rosidl_runtime_c__String__init(&ros_message->change_link_visibility_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->change_link_visibility_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'change_link_visibility_name'\n");
      return false;
    }
  }

  // Field name: change_link_visibility_value
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->change_link_visibility_value = tmp ? true : false;
  }

  // Field name: modify_allowed_collisions_type
  {
    cdr >> ros_message->modify_allowed_collisions_type;
  }

  // Field name: modify_allowed_collisions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, AllowedCollisionEntry
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->modify_allowed_collisions.data) {
      tesseract_msgs__msg__AllowedCollisionEntry__Sequence__fini(&ros_message->modify_allowed_collisions);
    }
    if (!tesseract_msgs__msg__AllowedCollisionEntry__Sequence__init(&ros_message->modify_allowed_collisions, size)) {
      fprintf(stderr, "failed to create array for field 'modify_allowed_collisions'");
      return false;
    }
    auto array_ptr = ros_message->modify_allowed_collisions.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: remove_allowed_collision_link
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->remove_allowed_collision_link.data) {
      rosidl_runtime_c__String__init(&ros_message->remove_allowed_collision_link);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->remove_allowed_collision_link,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'remove_allowed_collision_link'\n");
      return false;
    }
  }

  // Field name: joint_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, JointState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->joint_state))
    {
      return false;
    }
  }

  // Field name: scene_graph
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, SceneGraph
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->scene_graph))
    {
      return false;
    }
  }

  // Field name: scene_graph_joint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, Joint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->scene_graph_joint))
    {
      return false;
    }
  }

  // Field name: scene_graph_prefix
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->scene_graph_prefix.data) {
      rosidl_runtime_c__String__init(&ros_message->scene_graph_prefix);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->scene_graph_prefix,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'scene_graph_prefix'\n");
      return false;
    }
  }

  // Field name: change_joint_position_limits
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, StringLimitsPair
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->change_joint_position_limits.data) {
      tesseract_msgs__msg__StringLimitsPair__Sequence__fini(&ros_message->change_joint_position_limits);
    }
    if (!tesseract_msgs__msg__StringLimitsPair__Sequence__init(&ros_message->change_joint_position_limits, size)) {
      fprintf(stderr, "failed to create array for field 'change_joint_position_limits'");
      return false;
    }
    auto array_ptr = ros_message->change_joint_position_limits.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: change_joint_velocity_limits
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, StringDoublePair
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->change_joint_velocity_limits.data) {
      tesseract_msgs__msg__StringDoublePair__Sequence__fini(&ros_message->change_joint_velocity_limits);
    }
    if (!tesseract_msgs__msg__StringDoublePair__Sequence__init(&ros_message->change_joint_velocity_limits, size)) {
      fprintf(stderr, "failed to create array for field 'change_joint_velocity_limits'");
      return false;
    }
    auto array_ptr = ros_message->change_joint_velocity_limits.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: change_joint_acceleration_limits
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, StringDoublePair
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->change_joint_acceleration_limits.data) {
      tesseract_msgs__msg__StringDoublePair__Sequence__fini(&ros_message->change_joint_acceleration_limits);
    }
    if (!tesseract_msgs__msg__StringDoublePair__Sequence__init(&ros_message->change_joint_acceleration_limits, size)) {
      fprintf(stderr, "failed to create array for field 'change_joint_acceleration_limits'");
      return false;
    }
    auto array_ptr = ros_message->change_joint_acceleration_limits.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: add_kinematics_information
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, KinematicsInformation
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->add_kinematics_information))
    {
      return false;
    }
  }

  // Field name: collision_margin_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, CollisionMarginData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->collision_margin_data))
    {
      return false;
    }
  }

  // Field name: collision_margin_override_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, CollisionMarginOverrideType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->collision_margin_override_type))
    {
      return false;
    }
  }

  // Field name: add_contact_managers_plugin_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, ContactManagersPluginInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->add_contact_managers_plugin_info))
    {
      return false;
    }
  }

  // Field name: set_active_discrete_contact_manager
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->set_active_discrete_contact_manager.data) {
      rosidl_runtime_c__String__init(&ros_message->set_active_discrete_contact_manager);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->set_active_discrete_contact_manager,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'set_active_discrete_contact_manager'\n");
      return false;
    }
  }

  // Field name: set_active_continuous_contact_manager
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->set_active_continuous_contact_manager.data) {
      rosidl_runtime_c__String__init(&ros_message->set_active_continuous_contact_manager);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->set_active_continuous_contact_manager,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'set_active_continuous_contact_manager'\n");
      return false;
    }
  }

  // Field name: add_trajectory_link_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->add_trajectory_link_name.data) {
      rosidl_runtime_c__String__init(&ros_message->add_trajectory_link_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->add_trajectory_link_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'add_trajectory_link_name'\n");
      return false;
    }
  }

  // Field name: add_trajectory_link_parent_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->add_trajectory_link_parent_name.data) {
      rosidl_runtime_c__String__init(&ros_message->add_trajectory_link_parent_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->add_trajectory_link_parent_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'add_trajectory_link_parent_name'\n");
      return false;
    }
  }

  // Field name: add_trajectory_link_traj
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointTrajectory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->add_trajectory_link_traj))
    {
      return false;
    }
  }

  // Field name: add_trajectory_link_replace_allowed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->add_trajectory_link_replace_allowed = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tesseract_msgs
size_t get_serialized_size_tesseract_msgs__msg__EnvironmentCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EnvironmentCommand__ros_msg_type * ros_message = static_cast<const _EnvironmentCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name command
  {
    size_t item_size = sizeof(ros_message->command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name add_link

  current_alignment += get_serialized_size_tesseract_msgs__msg__Link(
    &(ros_message->add_link), current_alignment);
  // field.name add_joint

  current_alignment += get_serialized_size_tesseract_msgs__msg__Joint(
    &(ros_message->add_joint), current_alignment);
  // field.name add_replace_allowed
  {
    size_t item_size = sizeof(ros_message->add_replace_allowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name move_link_joint

  current_alignment += get_serialized_size_tesseract_msgs__msg__Joint(
    &(ros_message->move_link_joint), current_alignment);
  // field.name move_joint_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->move_joint_name.size + 1);
  // field.name move_joint_parent_link
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->move_joint_parent_link.size + 1);
  // field.name remove_link
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->remove_link.size + 1);
  // field.name remove_joint
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->remove_joint.size + 1);
  // field.name replace_joint

  current_alignment += get_serialized_size_tesseract_msgs__msg__Joint(
    &(ros_message->replace_joint), current_alignment);
  // field.name change_link_origin_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->change_link_origin_name.size + 1);
  // field.name change_link_origin_pose

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->change_link_origin_pose), current_alignment);
  // field.name change_joint_origin_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->change_joint_origin_name.size + 1);
  // field.name change_joint_origin_pose

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->change_joint_origin_pose), current_alignment);
  // field.name change_link_collision_enabled_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->change_link_collision_enabled_name.size + 1);
  // field.name change_link_collision_enabled_value
  {
    size_t item_size = sizeof(ros_message->change_link_collision_enabled_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name change_link_visibility_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->change_link_visibility_name.size + 1);
  // field.name change_link_visibility_value
  {
    size_t item_size = sizeof(ros_message->change_link_visibility_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name modify_allowed_collisions_type
  {
    size_t item_size = sizeof(ros_message->modify_allowed_collisions_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name modify_allowed_collisions
  {
    size_t array_size = ros_message->modify_allowed_collisions.size;
    auto array_ptr = ros_message->modify_allowed_collisions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tesseract_msgs__msg__AllowedCollisionEntry(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name remove_allowed_collision_link
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->remove_allowed_collision_link.size + 1);
  // field.name joint_state

  current_alignment += get_serialized_size_sensor_msgs__msg__JointState(
    &(ros_message->joint_state), current_alignment);
  // field.name scene_graph

  current_alignment += get_serialized_size_tesseract_msgs__msg__SceneGraph(
    &(ros_message->scene_graph), current_alignment);
  // field.name scene_graph_joint

  current_alignment += get_serialized_size_tesseract_msgs__msg__Joint(
    &(ros_message->scene_graph_joint), current_alignment);
  // field.name scene_graph_prefix
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->scene_graph_prefix.size + 1);
  // field.name change_joint_position_limits
  {
    size_t array_size = ros_message->change_joint_position_limits.size;
    auto array_ptr = ros_message->change_joint_position_limits.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tesseract_msgs__msg__StringLimitsPair(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name change_joint_velocity_limits
  {
    size_t array_size = ros_message->change_joint_velocity_limits.size;
    auto array_ptr = ros_message->change_joint_velocity_limits.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tesseract_msgs__msg__StringDoublePair(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name change_joint_acceleration_limits
  {
    size_t array_size = ros_message->change_joint_acceleration_limits.size;
    auto array_ptr = ros_message->change_joint_acceleration_limits.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tesseract_msgs__msg__StringDoublePair(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name add_kinematics_information

  current_alignment += get_serialized_size_tesseract_msgs__msg__KinematicsInformation(
    &(ros_message->add_kinematics_information), current_alignment);
  // field.name collision_margin_data

  current_alignment += get_serialized_size_tesseract_msgs__msg__CollisionMarginData(
    &(ros_message->collision_margin_data), current_alignment);
  // field.name collision_margin_override_type

  current_alignment += get_serialized_size_tesseract_msgs__msg__CollisionMarginOverrideType(
    &(ros_message->collision_margin_override_type), current_alignment);
  // field.name add_contact_managers_plugin_info

  current_alignment += get_serialized_size_tesseract_msgs__msg__ContactManagersPluginInfo(
    &(ros_message->add_contact_managers_plugin_info), current_alignment);
  // field.name set_active_discrete_contact_manager
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->set_active_discrete_contact_manager.size + 1);
  // field.name set_active_continuous_contact_manager
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->set_active_continuous_contact_manager.size + 1);
  // field.name add_trajectory_link_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->add_trajectory_link_name.size + 1);
  // field.name add_trajectory_link_parent_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->add_trajectory_link_parent_name.size + 1);
  // field.name add_trajectory_link_traj

  current_alignment += get_serialized_size_tesseract_msgs__msg__JointTrajectory(
    &(ros_message->add_trajectory_link_traj), current_alignment);
  // field.name add_trajectory_link_replace_allowed
  {
    size_t item_size = sizeof(ros_message->add_trajectory_link_replace_allowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EnvironmentCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tesseract_msgs__msg__EnvironmentCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tesseract_msgs
size_t max_serialized_size_tesseract_msgs__msg__EnvironmentCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: command
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: add_link
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__Link(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: add_joint
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__Joint(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: add_replace_allowed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: move_link_joint
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__Joint(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: move_joint_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: move_joint_parent_link
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: remove_link
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: remove_joint
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: replace_joint
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__Joint(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: change_link_origin_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: change_link_origin_pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: change_joint_origin_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: change_joint_origin_pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: change_link_collision_enabled_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: change_link_collision_enabled_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: change_link_visibility_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: change_link_visibility_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: modify_allowed_collisions_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: modify_allowed_collisions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__AllowedCollisionEntry(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: remove_allowed_collision_link
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: joint_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__JointState(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: scene_graph
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__SceneGraph(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: scene_graph_joint
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__Joint(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: scene_graph_prefix
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: change_joint_position_limits
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__StringLimitsPair(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: change_joint_velocity_limits
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__StringDoublePair(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: change_joint_acceleration_limits
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__StringDoublePair(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: add_kinematics_information
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__KinematicsInformation(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: collision_margin_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__CollisionMarginData(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: collision_margin_override_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__CollisionMarginOverrideType(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: add_contact_managers_plugin_info
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__ContactManagersPluginInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: set_active_discrete_contact_manager
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: set_active_continuous_contact_manager
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: add_trajectory_link_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: add_trajectory_link_parent_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: add_trajectory_link_traj
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__JointTrajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: add_trajectory_link_replace_allowed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EnvironmentCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tesseract_msgs__msg__EnvironmentCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EnvironmentCommand = {
  "tesseract_msgs::msg",
  "EnvironmentCommand",
  _EnvironmentCommand__cdr_serialize,
  _EnvironmentCommand__cdr_deserialize,
  _EnvironmentCommand__get_serialized_size,
  _EnvironmentCommand__max_serialized_size
};

static rosidl_message_type_support_t _EnvironmentCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EnvironmentCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, EnvironmentCommand)() {
  return &_EnvironmentCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
