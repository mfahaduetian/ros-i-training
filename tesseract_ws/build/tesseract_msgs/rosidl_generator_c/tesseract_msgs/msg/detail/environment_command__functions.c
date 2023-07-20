// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/EnvironmentCommand.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/environment_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `add_link`
#include "tesseract_msgs/msg/detail/link__functions.h"
// Member `add_joint`
// Member `move_link_joint`
// Member `replace_joint`
// Member `scene_graph_joint`
#include "tesseract_msgs/msg/detail/joint__functions.h"
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
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `modify_allowed_collisions`
#include "tesseract_msgs/msg/detail/allowed_collision_entry__functions.h"
// Member `joint_state`
#include "sensor_msgs/msg/detail/joint_state__functions.h"
// Member `scene_graph`
#include "tesseract_msgs/msg/detail/scene_graph__functions.h"
// Member `change_joint_position_limits`
#include "tesseract_msgs/msg/detail/string_limits_pair__functions.h"
// Member `change_joint_velocity_limits`
// Member `change_joint_acceleration_limits`
#include "tesseract_msgs/msg/detail/string_double_pair__functions.h"
// Member `add_kinematics_information`
#include "tesseract_msgs/msg/detail/kinematics_information__functions.h"
// Member `collision_margin_data`
#include "tesseract_msgs/msg/detail/collision_margin_data__functions.h"
// Member `collision_margin_override_type`
#include "tesseract_msgs/msg/detail/collision_margin_override_type__functions.h"
// Member `add_contact_managers_plugin_info`
#include "tesseract_msgs/msg/detail/contact_managers_plugin_info__functions.h"
// Member `add_trajectory_link_traj`
#include "tesseract_msgs/msg/detail/joint_trajectory__functions.h"

bool
tesseract_msgs__msg__EnvironmentCommand__init(tesseract_msgs__msg__EnvironmentCommand * msg)
{
  if (!msg) {
    return false;
  }
  // command
  // add_link
  if (!tesseract_msgs__msg__Link__init(&msg->add_link)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // add_joint
  if (!tesseract_msgs__msg__Joint__init(&msg->add_joint)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // add_replace_allowed
  // move_link_joint
  if (!tesseract_msgs__msg__Joint__init(&msg->move_link_joint)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // move_joint_name
  if (!rosidl_runtime_c__String__init(&msg->move_joint_name)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // move_joint_parent_link
  if (!rosidl_runtime_c__String__init(&msg->move_joint_parent_link)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // remove_link
  if (!rosidl_runtime_c__String__init(&msg->remove_link)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // remove_joint
  if (!rosidl_runtime_c__String__init(&msg->remove_joint)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // replace_joint
  if (!tesseract_msgs__msg__Joint__init(&msg->replace_joint)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // change_link_origin_name
  if (!rosidl_runtime_c__String__init(&msg->change_link_origin_name)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // change_link_origin_pose
  if (!geometry_msgs__msg__Pose__init(&msg->change_link_origin_pose)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // change_joint_origin_name
  if (!rosidl_runtime_c__String__init(&msg->change_joint_origin_name)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // change_joint_origin_pose
  if (!geometry_msgs__msg__Pose__init(&msg->change_joint_origin_pose)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // change_link_collision_enabled_name
  if (!rosidl_runtime_c__String__init(&msg->change_link_collision_enabled_name)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // change_link_collision_enabled_value
  // change_link_visibility_name
  if (!rosidl_runtime_c__String__init(&msg->change_link_visibility_name)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // change_link_visibility_value
  // modify_allowed_collisions_type
  // modify_allowed_collisions
  if (!tesseract_msgs__msg__AllowedCollisionEntry__Sequence__init(&msg->modify_allowed_collisions, 0)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // remove_allowed_collision_link
  if (!rosidl_runtime_c__String__init(&msg->remove_allowed_collision_link)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // joint_state
  if (!sensor_msgs__msg__JointState__init(&msg->joint_state)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // scene_graph
  if (!tesseract_msgs__msg__SceneGraph__init(&msg->scene_graph)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // scene_graph_joint
  if (!tesseract_msgs__msg__Joint__init(&msg->scene_graph_joint)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // scene_graph_prefix
  if (!rosidl_runtime_c__String__init(&msg->scene_graph_prefix)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // change_joint_position_limits
  if (!tesseract_msgs__msg__StringLimitsPair__Sequence__init(&msg->change_joint_position_limits, 0)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // change_joint_velocity_limits
  if (!tesseract_msgs__msg__StringDoublePair__Sequence__init(&msg->change_joint_velocity_limits, 0)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // change_joint_acceleration_limits
  if (!tesseract_msgs__msg__StringDoublePair__Sequence__init(&msg->change_joint_acceleration_limits, 0)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // add_kinematics_information
  if (!tesseract_msgs__msg__KinematicsInformation__init(&msg->add_kinematics_information)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // collision_margin_data
  if (!tesseract_msgs__msg__CollisionMarginData__init(&msg->collision_margin_data)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // collision_margin_override_type
  if (!tesseract_msgs__msg__CollisionMarginOverrideType__init(&msg->collision_margin_override_type)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // add_contact_managers_plugin_info
  if (!tesseract_msgs__msg__ContactManagersPluginInfo__init(&msg->add_contact_managers_plugin_info)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // set_active_discrete_contact_manager
  if (!rosidl_runtime_c__String__init(&msg->set_active_discrete_contact_manager)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // set_active_continuous_contact_manager
  if (!rosidl_runtime_c__String__init(&msg->set_active_continuous_contact_manager)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // add_trajectory_link_name
  if (!rosidl_runtime_c__String__init(&msg->add_trajectory_link_name)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // add_trajectory_link_parent_name
  if (!rosidl_runtime_c__String__init(&msg->add_trajectory_link_parent_name)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // add_trajectory_link_traj
  if (!tesseract_msgs__msg__JointTrajectory__init(&msg->add_trajectory_link_traj)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // add_trajectory_link_replace_allowed
  return true;
}

void
tesseract_msgs__msg__EnvironmentCommand__fini(tesseract_msgs__msg__EnvironmentCommand * msg)
{
  if (!msg) {
    return;
  }
  // command
  // add_link
  tesseract_msgs__msg__Link__fini(&msg->add_link);
  // add_joint
  tesseract_msgs__msg__Joint__fini(&msg->add_joint);
  // add_replace_allowed
  // move_link_joint
  tesseract_msgs__msg__Joint__fini(&msg->move_link_joint);
  // move_joint_name
  rosidl_runtime_c__String__fini(&msg->move_joint_name);
  // move_joint_parent_link
  rosidl_runtime_c__String__fini(&msg->move_joint_parent_link);
  // remove_link
  rosidl_runtime_c__String__fini(&msg->remove_link);
  // remove_joint
  rosidl_runtime_c__String__fini(&msg->remove_joint);
  // replace_joint
  tesseract_msgs__msg__Joint__fini(&msg->replace_joint);
  // change_link_origin_name
  rosidl_runtime_c__String__fini(&msg->change_link_origin_name);
  // change_link_origin_pose
  geometry_msgs__msg__Pose__fini(&msg->change_link_origin_pose);
  // change_joint_origin_name
  rosidl_runtime_c__String__fini(&msg->change_joint_origin_name);
  // change_joint_origin_pose
  geometry_msgs__msg__Pose__fini(&msg->change_joint_origin_pose);
  // change_link_collision_enabled_name
  rosidl_runtime_c__String__fini(&msg->change_link_collision_enabled_name);
  // change_link_collision_enabled_value
  // change_link_visibility_name
  rosidl_runtime_c__String__fini(&msg->change_link_visibility_name);
  // change_link_visibility_value
  // modify_allowed_collisions_type
  // modify_allowed_collisions
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence__fini(&msg->modify_allowed_collisions);
  // remove_allowed_collision_link
  rosidl_runtime_c__String__fini(&msg->remove_allowed_collision_link);
  // joint_state
  sensor_msgs__msg__JointState__fini(&msg->joint_state);
  // scene_graph
  tesseract_msgs__msg__SceneGraph__fini(&msg->scene_graph);
  // scene_graph_joint
  tesseract_msgs__msg__Joint__fini(&msg->scene_graph_joint);
  // scene_graph_prefix
  rosidl_runtime_c__String__fini(&msg->scene_graph_prefix);
  // change_joint_position_limits
  tesseract_msgs__msg__StringLimitsPair__Sequence__fini(&msg->change_joint_position_limits);
  // change_joint_velocity_limits
  tesseract_msgs__msg__StringDoublePair__Sequence__fini(&msg->change_joint_velocity_limits);
  // change_joint_acceleration_limits
  tesseract_msgs__msg__StringDoublePair__Sequence__fini(&msg->change_joint_acceleration_limits);
  // add_kinematics_information
  tesseract_msgs__msg__KinematicsInformation__fini(&msg->add_kinematics_information);
  // collision_margin_data
  tesseract_msgs__msg__CollisionMarginData__fini(&msg->collision_margin_data);
  // collision_margin_override_type
  tesseract_msgs__msg__CollisionMarginOverrideType__fini(&msg->collision_margin_override_type);
  // add_contact_managers_plugin_info
  tesseract_msgs__msg__ContactManagersPluginInfo__fini(&msg->add_contact_managers_plugin_info);
  // set_active_discrete_contact_manager
  rosidl_runtime_c__String__fini(&msg->set_active_discrete_contact_manager);
  // set_active_continuous_contact_manager
  rosidl_runtime_c__String__fini(&msg->set_active_continuous_contact_manager);
  // add_trajectory_link_name
  rosidl_runtime_c__String__fini(&msg->add_trajectory_link_name);
  // add_trajectory_link_parent_name
  rosidl_runtime_c__String__fini(&msg->add_trajectory_link_parent_name);
  // add_trajectory_link_traj
  tesseract_msgs__msg__JointTrajectory__fini(&msg->add_trajectory_link_traj);
  // add_trajectory_link_replace_allowed
}

bool
tesseract_msgs__msg__EnvironmentCommand__are_equal(const tesseract_msgs__msg__EnvironmentCommand * lhs, const tesseract_msgs__msg__EnvironmentCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (lhs->command != rhs->command) {
    return false;
  }
  // add_link
  if (!tesseract_msgs__msg__Link__are_equal(
      &(lhs->add_link), &(rhs->add_link)))
  {
    return false;
  }
  // add_joint
  if (!tesseract_msgs__msg__Joint__are_equal(
      &(lhs->add_joint), &(rhs->add_joint)))
  {
    return false;
  }
  // add_replace_allowed
  if (lhs->add_replace_allowed != rhs->add_replace_allowed) {
    return false;
  }
  // move_link_joint
  if (!tesseract_msgs__msg__Joint__are_equal(
      &(lhs->move_link_joint), &(rhs->move_link_joint)))
  {
    return false;
  }
  // move_joint_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->move_joint_name), &(rhs->move_joint_name)))
  {
    return false;
  }
  // move_joint_parent_link
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->move_joint_parent_link), &(rhs->move_joint_parent_link)))
  {
    return false;
  }
  // remove_link
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->remove_link), &(rhs->remove_link)))
  {
    return false;
  }
  // remove_joint
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->remove_joint), &(rhs->remove_joint)))
  {
    return false;
  }
  // replace_joint
  if (!tesseract_msgs__msg__Joint__are_equal(
      &(lhs->replace_joint), &(rhs->replace_joint)))
  {
    return false;
  }
  // change_link_origin_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->change_link_origin_name), &(rhs->change_link_origin_name)))
  {
    return false;
  }
  // change_link_origin_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->change_link_origin_pose), &(rhs->change_link_origin_pose)))
  {
    return false;
  }
  // change_joint_origin_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->change_joint_origin_name), &(rhs->change_joint_origin_name)))
  {
    return false;
  }
  // change_joint_origin_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->change_joint_origin_pose), &(rhs->change_joint_origin_pose)))
  {
    return false;
  }
  // change_link_collision_enabled_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->change_link_collision_enabled_name), &(rhs->change_link_collision_enabled_name)))
  {
    return false;
  }
  // change_link_collision_enabled_value
  if (lhs->change_link_collision_enabled_value != rhs->change_link_collision_enabled_value) {
    return false;
  }
  // change_link_visibility_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->change_link_visibility_name), &(rhs->change_link_visibility_name)))
  {
    return false;
  }
  // change_link_visibility_value
  if (lhs->change_link_visibility_value != rhs->change_link_visibility_value) {
    return false;
  }
  // modify_allowed_collisions_type
  if (lhs->modify_allowed_collisions_type != rhs->modify_allowed_collisions_type) {
    return false;
  }
  // modify_allowed_collisions
  if (!tesseract_msgs__msg__AllowedCollisionEntry__Sequence__are_equal(
      &(lhs->modify_allowed_collisions), &(rhs->modify_allowed_collisions)))
  {
    return false;
  }
  // remove_allowed_collision_link
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->remove_allowed_collision_link), &(rhs->remove_allowed_collision_link)))
  {
    return false;
  }
  // joint_state
  if (!sensor_msgs__msg__JointState__are_equal(
      &(lhs->joint_state), &(rhs->joint_state)))
  {
    return false;
  }
  // scene_graph
  if (!tesseract_msgs__msg__SceneGraph__are_equal(
      &(lhs->scene_graph), &(rhs->scene_graph)))
  {
    return false;
  }
  // scene_graph_joint
  if (!tesseract_msgs__msg__Joint__are_equal(
      &(lhs->scene_graph_joint), &(rhs->scene_graph_joint)))
  {
    return false;
  }
  // scene_graph_prefix
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->scene_graph_prefix), &(rhs->scene_graph_prefix)))
  {
    return false;
  }
  // change_joint_position_limits
  if (!tesseract_msgs__msg__StringLimitsPair__Sequence__are_equal(
      &(lhs->change_joint_position_limits), &(rhs->change_joint_position_limits)))
  {
    return false;
  }
  // change_joint_velocity_limits
  if (!tesseract_msgs__msg__StringDoublePair__Sequence__are_equal(
      &(lhs->change_joint_velocity_limits), &(rhs->change_joint_velocity_limits)))
  {
    return false;
  }
  // change_joint_acceleration_limits
  if (!tesseract_msgs__msg__StringDoublePair__Sequence__are_equal(
      &(lhs->change_joint_acceleration_limits), &(rhs->change_joint_acceleration_limits)))
  {
    return false;
  }
  // add_kinematics_information
  if (!tesseract_msgs__msg__KinematicsInformation__are_equal(
      &(lhs->add_kinematics_information), &(rhs->add_kinematics_information)))
  {
    return false;
  }
  // collision_margin_data
  if (!tesseract_msgs__msg__CollisionMarginData__are_equal(
      &(lhs->collision_margin_data), &(rhs->collision_margin_data)))
  {
    return false;
  }
  // collision_margin_override_type
  if (!tesseract_msgs__msg__CollisionMarginOverrideType__are_equal(
      &(lhs->collision_margin_override_type), &(rhs->collision_margin_override_type)))
  {
    return false;
  }
  // add_contact_managers_plugin_info
  if (!tesseract_msgs__msg__ContactManagersPluginInfo__are_equal(
      &(lhs->add_contact_managers_plugin_info), &(rhs->add_contact_managers_plugin_info)))
  {
    return false;
  }
  // set_active_discrete_contact_manager
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->set_active_discrete_contact_manager), &(rhs->set_active_discrete_contact_manager)))
  {
    return false;
  }
  // set_active_continuous_contact_manager
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->set_active_continuous_contact_manager), &(rhs->set_active_continuous_contact_manager)))
  {
    return false;
  }
  // add_trajectory_link_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->add_trajectory_link_name), &(rhs->add_trajectory_link_name)))
  {
    return false;
  }
  // add_trajectory_link_parent_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->add_trajectory_link_parent_name), &(rhs->add_trajectory_link_parent_name)))
  {
    return false;
  }
  // add_trajectory_link_traj
  if (!tesseract_msgs__msg__JointTrajectory__are_equal(
      &(lhs->add_trajectory_link_traj), &(rhs->add_trajectory_link_traj)))
  {
    return false;
  }
  // add_trajectory_link_replace_allowed
  if (lhs->add_trajectory_link_replace_allowed != rhs->add_trajectory_link_replace_allowed) {
    return false;
  }
  return true;
}

bool
tesseract_msgs__msg__EnvironmentCommand__copy(
  const tesseract_msgs__msg__EnvironmentCommand * input,
  tesseract_msgs__msg__EnvironmentCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  output->command = input->command;
  // add_link
  if (!tesseract_msgs__msg__Link__copy(
      &(input->add_link), &(output->add_link)))
  {
    return false;
  }
  // add_joint
  if (!tesseract_msgs__msg__Joint__copy(
      &(input->add_joint), &(output->add_joint)))
  {
    return false;
  }
  // add_replace_allowed
  output->add_replace_allowed = input->add_replace_allowed;
  // move_link_joint
  if (!tesseract_msgs__msg__Joint__copy(
      &(input->move_link_joint), &(output->move_link_joint)))
  {
    return false;
  }
  // move_joint_name
  if (!rosidl_runtime_c__String__copy(
      &(input->move_joint_name), &(output->move_joint_name)))
  {
    return false;
  }
  // move_joint_parent_link
  if (!rosidl_runtime_c__String__copy(
      &(input->move_joint_parent_link), &(output->move_joint_parent_link)))
  {
    return false;
  }
  // remove_link
  if (!rosidl_runtime_c__String__copy(
      &(input->remove_link), &(output->remove_link)))
  {
    return false;
  }
  // remove_joint
  if (!rosidl_runtime_c__String__copy(
      &(input->remove_joint), &(output->remove_joint)))
  {
    return false;
  }
  // replace_joint
  if (!tesseract_msgs__msg__Joint__copy(
      &(input->replace_joint), &(output->replace_joint)))
  {
    return false;
  }
  // change_link_origin_name
  if (!rosidl_runtime_c__String__copy(
      &(input->change_link_origin_name), &(output->change_link_origin_name)))
  {
    return false;
  }
  // change_link_origin_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->change_link_origin_pose), &(output->change_link_origin_pose)))
  {
    return false;
  }
  // change_joint_origin_name
  if (!rosidl_runtime_c__String__copy(
      &(input->change_joint_origin_name), &(output->change_joint_origin_name)))
  {
    return false;
  }
  // change_joint_origin_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->change_joint_origin_pose), &(output->change_joint_origin_pose)))
  {
    return false;
  }
  // change_link_collision_enabled_name
  if (!rosidl_runtime_c__String__copy(
      &(input->change_link_collision_enabled_name), &(output->change_link_collision_enabled_name)))
  {
    return false;
  }
  // change_link_collision_enabled_value
  output->change_link_collision_enabled_value = input->change_link_collision_enabled_value;
  // change_link_visibility_name
  if (!rosidl_runtime_c__String__copy(
      &(input->change_link_visibility_name), &(output->change_link_visibility_name)))
  {
    return false;
  }
  // change_link_visibility_value
  output->change_link_visibility_value = input->change_link_visibility_value;
  // modify_allowed_collisions_type
  output->modify_allowed_collisions_type = input->modify_allowed_collisions_type;
  // modify_allowed_collisions
  if (!tesseract_msgs__msg__AllowedCollisionEntry__Sequence__copy(
      &(input->modify_allowed_collisions), &(output->modify_allowed_collisions)))
  {
    return false;
  }
  // remove_allowed_collision_link
  if (!rosidl_runtime_c__String__copy(
      &(input->remove_allowed_collision_link), &(output->remove_allowed_collision_link)))
  {
    return false;
  }
  // joint_state
  if (!sensor_msgs__msg__JointState__copy(
      &(input->joint_state), &(output->joint_state)))
  {
    return false;
  }
  // scene_graph
  if (!tesseract_msgs__msg__SceneGraph__copy(
      &(input->scene_graph), &(output->scene_graph)))
  {
    return false;
  }
  // scene_graph_joint
  if (!tesseract_msgs__msg__Joint__copy(
      &(input->scene_graph_joint), &(output->scene_graph_joint)))
  {
    return false;
  }
  // scene_graph_prefix
  if (!rosidl_runtime_c__String__copy(
      &(input->scene_graph_prefix), &(output->scene_graph_prefix)))
  {
    return false;
  }
  // change_joint_position_limits
  if (!tesseract_msgs__msg__StringLimitsPair__Sequence__copy(
      &(input->change_joint_position_limits), &(output->change_joint_position_limits)))
  {
    return false;
  }
  // change_joint_velocity_limits
  if (!tesseract_msgs__msg__StringDoublePair__Sequence__copy(
      &(input->change_joint_velocity_limits), &(output->change_joint_velocity_limits)))
  {
    return false;
  }
  // change_joint_acceleration_limits
  if (!tesseract_msgs__msg__StringDoublePair__Sequence__copy(
      &(input->change_joint_acceleration_limits), &(output->change_joint_acceleration_limits)))
  {
    return false;
  }
  // add_kinematics_information
  if (!tesseract_msgs__msg__KinematicsInformation__copy(
      &(input->add_kinematics_information), &(output->add_kinematics_information)))
  {
    return false;
  }
  // collision_margin_data
  if (!tesseract_msgs__msg__CollisionMarginData__copy(
      &(input->collision_margin_data), &(output->collision_margin_data)))
  {
    return false;
  }
  // collision_margin_override_type
  if (!tesseract_msgs__msg__CollisionMarginOverrideType__copy(
      &(input->collision_margin_override_type), &(output->collision_margin_override_type)))
  {
    return false;
  }
  // add_contact_managers_plugin_info
  if (!tesseract_msgs__msg__ContactManagersPluginInfo__copy(
      &(input->add_contact_managers_plugin_info), &(output->add_contact_managers_plugin_info)))
  {
    return false;
  }
  // set_active_discrete_contact_manager
  if (!rosidl_runtime_c__String__copy(
      &(input->set_active_discrete_contact_manager), &(output->set_active_discrete_contact_manager)))
  {
    return false;
  }
  // set_active_continuous_contact_manager
  if (!rosidl_runtime_c__String__copy(
      &(input->set_active_continuous_contact_manager), &(output->set_active_continuous_contact_manager)))
  {
    return false;
  }
  // add_trajectory_link_name
  if (!rosidl_runtime_c__String__copy(
      &(input->add_trajectory_link_name), &(output->add_trajectory_link_name)))
  {
    return false;
  }
  // add_trajectory_link_parent_name
  if (!rosidl_runtime_c__String__copy(
      &(input->add_trajectory_link_parent_name), &(output->add_trajectory_link_parent_name)))
  {
    return false;
  }
  // add_trajectory_link_traj
  if (!tesseract_msgs__msg__JointTrajectory__copy(
      &(input->add_trajectory_link_traj), &(output->add_trajectory_link_traj)))
  {
    return false;
  }
  // add_trajectory_link_replace_allowed
  output->add_trajectory_link_replace_allowed = input->add_trajectory_link_replace_allowed;
  return true;
}

tesseract_msgs__msg__EnvironmentCommand *
tesseract_msgs__msg__EnvironmentCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__EnvironmentCommand * msg = (tesseract_msgs__msg__EnvironmentCommand *)allocator.allocate(sizeof(tesseract_msgs__msg__EnvironmentCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__EnvironmentCommand));
  bool success = tesseract_msgs__msg__EnvironmentCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__EnvironmentCommand__destroy(tesseract_msgs__msg__EnvironmentCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__msg__EnvironmentCommand__Sequence__init(tesseract_msgs__msg__EnvironmentCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__EnvironmentCommand * data = NULL;

  if (size) {
    data = (tesseract_msgs__msg__EnvironmentCommand *)allocator.zero_allocate(size, sizeof(tesseract_msgs__msg__EnvironmentCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__EnvironmentCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__EnvironmentCommand__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tesseract_msgs__msg__EnvironmentCommand__Sequence__fini(tesseract_msgs__msg__EnvironmentCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__msg__EnvironmentCommand__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tesseract_msgs__msg__EnvironmentCommand__Sequence *
tesseract_msgs__msg__EnvironmentCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__EnvironmentCommand__Sequence * array = (tesseract_msgs__msg__EnvironmentCommand__Sequence *)allocator.allocate(sizeof(tesseract_msgs__msg__EnvironmentCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__EnvironmentCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__EnvironmentCommand__Sequence__destroy(tesseract_msgs__msg__EnvironmentCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__msg__EnvironmentCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__msg__EnvironmentCommand__Sequence__are_equal(const tesseract_msgs__msg__EnvironmentCommand__Sequence * lhs, const tesseract_msgs__msg__EnvironmentCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__msg__EnvironmentCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__msg__EnvironmentCommand__Sequence__copy(
  const tesseract_msgs__msg__EnvironmentCommand__Sequence * input,
  tesseract_msgs__msg__EnvironmentCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__msg__EnvironmentCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__msg__EnvironmentCommand * data =
      (tesseract_msgs__msg__EnvironmentCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__msg__EnvironmentCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__msg__EnvironmentCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__msg__EnvironmentCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
