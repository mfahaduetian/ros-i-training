// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/EnvironmentCommand.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT_COMMAND__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/environment_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_EnvironmentCommand_add_trajectory_link_replace_allowed
{
public:
  explicit Init_EnvironmentCommand_add_trajectory_link_replace_allowed(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::EnvironmentCommand add_trajectory_link_replace_allowed(::tesseract_msgs::msg::EnvironmentCommand::_add_trajectory_link_replace_allowed_type arg)
  {
    msg_.add_trajectory_link_replace_allowed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_add_trajectory_link_traj
{
public:
  explicit Init_EnvironmentCommand_add_trajectory_link_traj(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_add_trajectory_link_replace_allowed add_trajectory_link_traj(::tesseract_msgs::msg::EnvironmentCommand::_add_trajectory_link_traj_type arg)
  {
    msg_.add_trajectory_link_traj = std::move(arg);
    return Init_EnvironmentCommand_add_trajectory_link_replace_allowed(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_add_trajectory_link_parent_name
{
public:
  explicit Init_EnvironmentCommand_add_trajectory_link_parent_name(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_add_trajectory_link_traj add_trajectory_link_parent_name(::tesseract_msgs::msg::EnvironmentCommand::_add_trajectory_link_parent_name_type arg)
  {
    msg_.add_trajectory_link_parent_name = std::move(arg);
    return Init_EnvironmentCommand_add_trajectory_link_traj(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_add_trajectory_link_name
{
public:
  explicit Init_EnvironmentCommand_add_trajectory_link_name(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_add_trajectory_link_parent_name add_trajectory_link_name(::tesseract_msgs::msg::EnvironmentCommand::_add_trajectory_link_name_type arg)
  {
    msg_.add_trajectory_link_name = std::move(arg);
    return Init_EnvironmentCommand_add_trajectory_link_parent_name(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_set_active_continuous_contact_manager
{
public:
  explicit Init_EnvironmentCommand_set_active_continuous_contact_manager(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_add_trajectory_link_name set_active_continuous_contact_manager(::tesseract_msgs::msg::EnvironmentCommand::_set_active_continuous_contact_manager_type arg)
  {
    msg_.set_active_continuous_contact_manager = std::move(arg);
    return Init_EnvironmentCommand_add_trajectory_link_name(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_set_active_discrete_contact_manager
{
public:
  explicit Init_EnvironmentCommand_set_active_discrete_contact_manager(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_set_active_continuous_contact_manager set_active_discrete_contact_manager(::tesseract_msgs::msg::EnvironmentCommand::_set_active_discrete_contact_manager_type arg)
  {
    msg_.set_active_discrete_contact_manager = std::move(arg);
    return Init_EnvironmentCommand_set_active_continuous_contact_manager(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_add_contact_managers_plugin_info
{
public:
  explicit Init_EnvironmentCommand_add_contact_managers_plugin_info(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_set_active_discrete_contact_manager add_contact_managers_plugin_info(::tesseract_msgs::msg::EnvironmentCommand::_add_contact_managers_plugin_info_type arg)
  {
    msg_.add_contact_managers_plugin_info = std::move(arg);
    return Init_EnvironmentCommand_set_active_discrete_contact_manager(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_collision_margin_override_type
{
public:
  explicit Init_EnvironmentCommand_collision_margin_override_type(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_add_contact_managers_plugin_info collision_margin_override_type(::tesseract_msgs::msg::EnvironmentCommand::_collision_margin_override_type_type arg)
  {
    msg_.collision_margin_override_type = std::move(arg);
    return Init_EnvironmentCommand_add_contact_managers_plugin_info(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_collision_margin_data
{
public:
  explicit Init_EnvironmentCommand_collision_margin_data(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_collision_margin_override_type collision_margin_data(::tesseract_msgs::msg::EnvironmentCommand::_collision_margin_data_type arg)
  {
    msg_.collision_margin_data = std::move(arg);
    return Init_EnvironmentCommand_collision_margin_override_type(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_add_kinematics_information
{
public:
  explicit Init_EnvironmentCommand_add_kinematics_information(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_collision_margin_data add_kinematics_information(::tesseract_msgs::msg::EnvironmentCommand::_add_kinematics_information_type arg)
  {
    msg_.add_kinematics_information = std::move(arg);
    return Init_EnvironmentCommand_collision_margin_data(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_change_joint_acceleration_limits
{
public:
  explicit Init_EnvironmentCommand_change_joint_acceleration_limits(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_add_kinematics_information change_joint_acceleration_limits(::tesseract_msgs::msg::EnvironmentCommand::_change_joint_acceleration_limits_type arg)
  {
    msg_.change_joint_acceleration_limits = std::move(arg);
    return Init_EnvironmentCommand_add_kinematics_information(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_change_joint_velocity_limits
{
public:
  explicit Init_EnvironmentCommand_change_joint_velocity_limits(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_change_joint_acceleration_limits change_joint_velocity_limits(::tesseract_msgs::msg::EnvironmentCommand::_change_joint_velocity_limits_type arg)
  {
    msg_.change_joint_velocity_limits = std::move(arg);
    return Init_EnvironmentCommand_change_joint_acceleration_limits(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_change_joint_position_limits
{
public:
  explicit Init_EnvironmentCommand_change_joint_position_limits(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_change_joint_velocity_limits change_joint_position_limits(::tesseract_msgs::msg::EnvironmentCommand::_change_joint_position_limits_type arg)
  {
    msg_.change_joint_position_limits = std::move(arg);
    return Init_EnvironmentCommand_change_joint_velocity_limits(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_scene_graph_prefix
{
public:
  explicit Init_EnvironmentCommand_scene_graph_prefix(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_change_joint_position_limits scene_graph_prefix(::tesseract_msgs::msg::EnvironmentCommand::_scene_graph_prefix_type arg)
  {
    msg_.scene_graph_prefix = std::move(arg);
    return Init_EnvironmentCommand_change_joint_position_limits(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_scene_graph_joint
{
public:
  explicit Init_EnvironmentCommand_scene_graph_joint(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_scene_graph_prefix scene_graph_joint(::tesseract_msgs::msg::EnvironmentCommand::_scene_graph_joint_type arg)
  {
    msg_.scene_graph_joint = std::move(arg);
    return Init_EnvironmentCommand_scene_graph_prefix(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_scene_graph
{
public:
  explicit Init_EnvironmentCommand_scene_graph(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_scene_graph_joint scene_graph(::tesseract_msgs::msg::EnvironmentCommand::_scene_graph_type arg)
  {
    msg_.scene_graph = std::move(arg);
    return Init_EnvironmentCommand_scene_graph_joint(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_joint_state
{
public:
  explicit Init_EnvironmentCommand_joint_state(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_scene_graph joint_state(::tesseract_msgs::msg::EnvironmentCommand::_joint_state_type arg)
  {
    msg_.joint_state = std::move(arg);
    return Init_EnvironmentCommand_scene_graph(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_remove_allowed_collision_link
{
public:
  explicit Init_EnvironmentCommand_remove_allowed_collision_link(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_joint_state remove_allowed_collision_link(::tesseract_msgs::msg::EnvironmentCommand::_remove_allowed_collision_link_type arg)
  {
    msg_.remove_allowed_collision_link = std::move(arg);
    return Init_EnvironmentCommand_joint_state(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_modify_allowed_collisions
{
public:
  explicit Init_EnvironmentCommand_modify_allowed_collisions(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_remove_allowed_collision_link modify_allowed_collisions(::tesseract_msgs::msg::EnvironmentCommand::_modify_allowed_collisions_type arg)
  {
    msg_.modify_allowed_collisions = std::move(arg);
    return Init_EnvironmentCommand_remove_allowed_collision_link(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_modify_allowed_collisions_type
{
public:
  explicit Init_EnvironmentCommand_modify_allowed_collisions_type(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_modify_allowed_collisions modify_allowed_collisions_type(::tesseract_msgs::msg::EnvironmentCommand::_modify_allowed_collisions_type_type arg)
  {
    msg_.modify_allowed_collisions_type = std::move(arg);
    return Init_EnvironmentCommand_modify_allowed_collisions(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_change_link_visibility_value
{
public:
  explicit Init_EnvironmentCommand_change_link_visibility_value(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_modify_allowed_collisions_type change_link_visibility_value(::tesseract_msgs::msg::EnvironmentCommand::_change_link_visibility_value_type arg)
  {
    msg_.change_link_visibility_value = std::move(arg);
    return Init_EnvironmentCommand_modify_allowed_collisions_type(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_change_link_visibility_name
{
public:
  explicit Init_EnvironmentCommand_change_link_visibility_name(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_change_link_visibility_value change_link_visibility_name(::tesseract_msgs::msg::EnvironmentCommand::_change_link_visibility_name_type arg)
  {
    msg_.change_link_visibility_name = std::move(arg);
    return Init_EnvironmentCommand_change_link_visibility_value(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_change_link_collision_enabled_value
{
public:
  explicit Init_EnvironmentCommand_change_link_collision_enabled_value(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_change_link_visibility_name change_link_collision_enabled_value(::tesseract_msgs::msg::EnvironmentCommand::_change_link_collision_enabled_value_type arg)
  {
    msg_.change_link_collision_enabled_value = std::move(arg);
    return Init_EnvironmentCommand_change_link_visibility_name(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_change_link_collision_enabled_name
{
public:
  explicit Init_EnvironmentCommand_change_link_collision_enabled_name(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_change_link_collision_enabled_value change_link_collision_enabled_name(::tesseract_msgs::msg::EnvironmentCommand::_change_link_collision_enabled_name_type arg)
  {
    msg_.change_link_collision_enabled_name = std::move(arg);
    return Init_EnvironmentCommand_change_link_collision_enabled_value(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_change_joint_origin_pose
{
public:
  explicit Init_EnvironmentCommand_change_joint_origin_pose(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_change_link_collision_enabled_name change_joint_origin_pose(::tesseract_msgs::msg::EnvironmentCommand::_change_joint_origin_pose_type arg)
  {
    msg_.change_joint_origin_pose = std::move(arg);
    return Init_EnvironmentCommand_change_link_collision_enabled_name(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_change_joint_origin_name
{
public:
  explicit Init_EnvironmentCommand_change_joint_origin_name(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_change_joint_origin_pose change_joint_origin_name(::tesseract_msgs::msg::EnvironmentCommand::_change_joint_origin_name_type arg)
  {
    msg_.change_joint_origin_name = std::move(arg);
    return Init_EnvironmentCommand_change_joint_origin_pose(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_change_link_origin_pose
{
public:
  explicit Init_EnvironmentCommand_change_link_origin_pose(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_change_joint_origin_name change_link_origin_pose(::tesseract_msgs::msg::EnvironmentCommand::_change_link_origin_pose_type arg)
  {
    msg_.change_link_origin_pose = std::move(arg);
    return Init_EnvironmentCommand_change_joint_origin_name(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_change_link_origin_name
{
public:
  explicit Init_EnvironmentCommand_change_link_origin_name(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_change_link_origin_pose change_link_origin_name(::tesseract_msgs::msg::EnvironmentCommand::_change_link_origin_name_type arg)
  {
    msg_.change_link_origin_name = std::move(arg);
    return Init_EnvironmentCommand_change_link_origin_pose(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_replace_joint
{
public:
  explicit Init_EnvironmentCommand_replace_joint(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_change_link_origin_name replace_joint(::tesseract_msgs::msg::EnvironmentCommand::_replace_joint_type arg)
  {
    msg_.replace_joint = std::move(arg);
    return Init_EnvironmentCommand_change_link_origin_name(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_remove_joint
{
public:
  explicit Init_EnvironmentCommand_remove_joint(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_replace_joint remove_joint(::tesseract_msgs::msg::EnvironmentCommand::_remove_joint_type arg)
  {
    msg_.remove_joint = std::move(arg);
    return Init_EnvironmentCommand_replace_joint(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_remove_link
{
public:
  explicit Init_EnvironmentCommand_remove_link(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_remove_joint remove_link(::tesseract_msgs::msg::EnvironmentCommand::_remove_link_type arg)
  {
    msg_.remove_link = std::move(arg);
    return Init_EnvironmentCommand_remove_joint(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_move_joint_parent_link
{
public:
  explicit Init_EnvironmentCommand_move_joint_parent_link(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_remove_link move_joint_parent_link(::tesseract_msgs::msg::EnvironmentCommand::_move_joint_parent_link_type arg)
  {
    msg_.move_joint_parent_link = std::move(arg);
    return Init_EnvironmentCommand_remove_link(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_move_joint_name
{
public:
  explicit Init_EnvironmentCommand_move_joint_name(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_move_joint_parent_link move_joint_name(::tesseract_msgs::msg::EnvironmentCommand::_move_joint_name_type arg)
  {
    msg_.move_joint_name = std::move(arg);
    return Init_EnvironmentCommand_move_joint_parent_link(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_move_link_joint
{
public:
  explicit Init_EnvironmentCommand_move_link_joint(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_move_joint_name move_link_joint(::tesseract_msgs::msg::EnvironmentCommand::_move_link_joint_type arg)
  {
    msg_.move_link_joint = std::move(arg);
    return Init_EnvironmentCommand_move_joint_name(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_add_replace_allowed
{
public:
  explicit Init_EnvironmentCommand_add_replace_allowed(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_move_link_joint add_replace_allowed(::tesseract_msgs::msg::EnvironmentCommand::_add_replace_allowed_type arg)
  {
    msg_.add_replace_allowed = std::move(arg);
    return Init_EnvironmentCommand_move_link_joint(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_add_joint
{
public:
  explicit Init_EnvironmentCommand_add_joint(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_add_replace_allowed add_joint(::tesseract_msgs::msg::EnvironmentCommand::_add_joint_type arg)
  {
    msg_.add_joint = std::move(arg);
    return Init_EnvironmentCommand_add_replace_allowed(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_add_link
{
public:
  explicit Init_EnvironmentCommand_add_link(::tesseract_msgs::msg::EnvironmentCommand & msg)
  : msg_(msg)
  {}
  Init_EnvironmentCommand_add_joint add_link(::tesseract_msgs::msg::EnvironmentCommand::_add_link_type arg)
  {
    msg_.add_link = std::move(arg);
    return Init_EnvironmentCommand_add_joint(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

class Init_EnvironmentCommand_command
{
public:
  Init_EnvironmentCommand_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnvironmentCommand_add_link command(::tesseract_msgs::msg::EnvironmentCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_EnvironmentCommand_add_link(msg_);
  }

private:
  ::tesseract_msgs::msg::EnvironmentCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::EnvironmentCommand>()
{
  return tesseract_msgs::msg::builder::Init_EnvironmentCommand_command();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT_COMMAND__BUILDER_HPP_
