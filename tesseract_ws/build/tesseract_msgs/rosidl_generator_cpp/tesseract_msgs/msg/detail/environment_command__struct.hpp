// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/EnvironmentCommand.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT_COMMAND__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'add_link'
#include "tesseract_msgs/msg/detail/link__struct.hpp"
// Member 'add_joint'
// Member 'move_link_joint'
// Member 'replace_joint'
// Member 'scene_graph_joint'
#include "tesseract_msgs/msg/detail/joint__struct.hpp"
// Member 'change_link_origin_pose'
// Member 'change_joint_origin_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'modify_allowed_collisions'
#include "tesseract_msgs/msg/detail/allowed_collision_entry__struct.hpp"
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__struct.hpp"
// Member 'scene_graph'
#include "tesseract_msgs/msg/detail/scene_graph__struct.hpp"
// Member 'change_joint_position_limits'
#include "tesseract_msgs/msg/detail/string_limits_pair__struct.hpp"
// Member 'change_joint_velocity_limits'
// Member 'change_joint_acceleration_limits'
#include "tesseract_msgs/msg/detail/string_double_pair__struct.hpp"
// Member 'add_kinematics_information'
#include "tesseract_msgs/msg/detail/kinematics_information__struct.hpp"
// Member 'collision_margin_data'
#include "tesseract_msgs/msg/detail/collision_margin_data__struct.hpp"
// Member 'collision_margin_override_type'
#include "tesseract_msgs/msg/detail/collision_margin_override_type__struct.hpp"
// Member 'add_contact_managers_plugin_info'
#include "tesseract_msgs/msg/detail/contact_managers_plugin_info__struct.hpp"
// Member 'add_trajectory_link_traj'
#include "tesseract_msgs/msg/detail/joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__EnvironmentCommand __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__EnvironmentCommand __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnvironmentCommand_
{
  using Type = EnvironmentCommand_<ContainerAllocator>;

  explicit EnvironmentCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : add_link(_init),
    add_joint(_init),
    move_link_joint(_init),
    replace_joint(_init),
    change_link_origin_pose(_init),
    change_joint_origin_pose(_init),
    joint_state(_init),
    scene_graph(_init),
    scene_graph_joint(_init),
    add_kinematics_information(_init),
    collision_margin_data(_init),
    collision_margin_override_type(_init),
    add_contact_managers_plugin_info(_init),
    add_trajectory_link_traj(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->add_replace_allowed = false;
      this->move_joint_name = "";
      this->move_joint_parent_link = "";
      this->remove_link = "";
      this->remove_joint = "";
      this->change_link_origin_name = "";
      this->change_joint_origin_name = "";
      this->change_link_collision_enabled_name = "";
      this->change_link_collision_enabled_value = false;
      this->change_link_visibility_name = "";
      this->change_link_visibility_value = false;
      this->modify_allowed_collisions_type = 0;
      this->remove_allowed_collision_link = "";
      this->scene_graph_prefix = "";
      this->set_active_discrete_contact_manager = "";
      this->set_active_continuous_contact_manager = "";
      this->add_trajectory_link_name = "";
      this->add_trajectory_link_parent_name = "";
      this->add_trajectory_link_replace_allowed = false;
    }
  }

  explicit EnvironmentCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : add_link(_alloc, _init),
    add_joint(_alloc, _init),
    move_link_joint(_alloc, _init),
    move_joint_name(_alloc),
    move_joint_parent_link(_alloc),
    remove_link(_alloc),
    remove_joint(_alloc),
    replace_joint(_alloc, _init),
    change_link_origin_name(_alloc),
    change_link_origin_pose(_alloc, _init),
    change_joint_origin_name(_alloc),
    change_joint_origin_pose(_alloc, _init),
    change_link_collision_enabled_name(_alloc),
    change_link_visibility_name(_alloc),
    remove_allowed_collision_link(_alloc),
    joint_state(_alloc, _init),
    scene_graph(_alloc, _init),
    scene_graph_joint(_alloc, _init),
    scene_graph_prefix(_alloc),
    add_kinematics_information(_alloc, _init),
    collision_margin_data(_alloc, _init),
    collision_margin_override_type(_alloc, _init),
    add_contact_managers_plugin_info(_alloc, _init),
    set_active_discrete_contact_manager(_alloc),
    set_active_continuous_contact_manager(_alloc),
    add_trajectory_link_name(_alloc),
    add_trajectory_link_parent_name(_alloc),
    add_trajectory_link_traj(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->add_replace_allowed = false;
      this->move_joint_name = "";
      this->move_joint_parent_link = "";
      this->remove_link = "";
      this->remove_joint = "";
      this->change_link_origin_name = "";
      this->change_joint_origin_name = "";
      this->change_link_collision_enabled_name = "";
      this->change_link_collision_enabled_value = false;
      this->change_link_visibility_name = "";
      this->change_link_visibility_value = false;
      this->modify_allowed_collisions_type = 0;
      this->remove_allowed_collision_link = "";
      this->scene_graph_prefix = "";
      this->set_active_discrete_contact_manager = "";
      this->set_active_continuous_contact_manager = "";
      this->add_trajectory_link_name = "";
      this->add_trajectory_link_parent_name = "";
      this->add_trajectory_link_replace_allowed = false;
    }
  }

  // field types and members
  using _command_type =
    uint8_t;
  _command_type command;
  using _add_link_type =
    tesseract_msgs::msg::Link_<ContainerAllocator>;
  _add_link_type add_link;
  using _add_joint_type =
    tesseract_msgs::msg::Joint_<ContainerAllocator>;
  _add_joint_type add_joint;
  using _add_replace_allowed_type =
    bool;
  _add_replace_allowed_type add_replace_allowed;
  using _move_link_joint_type =
    tesseract_msgs::msg::Joint_<ContainerAllocator>;
  _move_link_joint_type move_link_joint;
  using _move_joint_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _move_joint_name_type move_joint_name;
  using _move_joint_parent_link_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _move_joint_parent_link_type move_joint_parent_link;
  using _remove_link_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _remove_link_type remove_link;
  using _remove_joint_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _remove_joint_type remove_joint;
  using _replace_joint_type =
    tesseract_msgs::msg::Joint_<ContainerAllocator>;
  _replace_joint_type replace_joint;
  using _change_link_origin_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _change_link_origin_name_type change_link_origin_name;
  using _change_link_origin_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _change_link_origin_pose_type change_link_origin_pose;
  using _change_joint_origin_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _change_joint_origin_name_type change_joint_origin_name;
  using _change_joint_origin_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _change_joint_origin_pose_type change_joint_origin_pose;
  using _change_link_collision_enabled_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _change_link_collision_enabled_name_type change_link_collision_enabled_name;
  using _change_link_collision_enabled_value_type =
    bool;
  _change_link_collision_enabled_value_type change_link_collision_enabled_value;
  using _change_link_visibility_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _change_link_visibility_name_type change_link_visibility_name;
  using _change_link_visibility_value_type =
    bool;
  _change_link_visibility_value_type change_link_visibility_value;
  using _modify_allowed_collisions_type_type =
    uint8_t;
  _modify_allowed_collisions_type_type modify_allowed_collisions_type;
  using _modify_allowed_collisions_type =
    std::vector<tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>>>;
  _modify_allowed_collisions_type modify_allowed_collisions;
  using _remove_allowed_collision_link_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _remove_allowed_collision_link_type remove_allowed_collision_link;
  using _joint_state_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _joint_state_type joint_state;
  using _scene_graph_type =
    tesseract_msgs::msg::SceneGraph_<ContainerAllocator>;
  _scene_graph_type scene_graph;
  using _scene_graph_joint_type =
    tesseract_msgs::msg::Joint_<ContainerAllocator>;
  _scene_graph_joint_type scene_graph_joint;
  using _scene_graph_prefix_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _scene_graph_prefix_type scene_graph_prefix;
  using _change_joint_position_limits_type =
    std::vector<tesseract_msgs::msg::StringLimitsPair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::StringLimitsPair_<ContainerAllocator>>>;
  _change_joint_position_limits_type change_joint_position_limits;
  using _change_joint_velocity_limits_type =
    std::vector<tesseract_msgs::msg::StringDoublePair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::StringDoublePair_<ContainerAllocator>>>;
  _change_joint_velocity_limits_type change_joint_velocity_limits;
  using _change_joint_acceleration_limits_type =
    std::vector<tesseract_msgs::msg::StringDoublePair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::StringDoublePair_<ContainerAllocator>>>;
  _change_joint_acceleration_limits_type change_joint_acceleration_limits;
  using _add_kinematics_information_type =
    tesseract_msgs::msg::KinematicsInformation_<ContainerAllocator>;
  _add_kinematics_information_type add_kinematics_information;
  using _collision_margin_data_type =
    tesseract_msgs::msg::CollisionMarginData_<ContainerAllocator>;
  _collision_margin_data_type collision_margin_data;
  using _collision_margin_override_type_type =
    tesseract_msgs::msg::CollisionMarginOverrideType_<ContainerAllocator>;
  _collision_margin_override_type_type collision_margin_override_type;
  using _add_contact_managers_plugin_info_type =
    tesseract_msgs::msg::ContactManagersPluginInfo_<ContainerAllocator>;
  _add_contact_managers_plugin_info_type add_contact_managers_plugin_info;
  using _set_active_discrete_contact_manager_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _set_active_discrete_contact_manager_type set_active_discrete_contact_manager;
  using _set_active_continuous_contact_manager_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _set_active_continuous_contact_manager_type set_active_continuous_contact_manager;
  using _add_trajectory_link_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _add_trajectory_link_name_type add_trajectory_link_name;
  using _add_trajectory_link_parent_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _add_trajectory_link_parent_name_type add_trajectory_link_parent_name;
  using _add_trajectory_link_traj_type =
    tesseract_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _add_trajectory_link_traj_type add_trajectory_link_traj;
  using _add_trajectory_link_replace_allowed_type =
    bool;
  _add_trajectory_link_replace_allowed_type add_trajectory_link_replace_allowed;

  // setters for named parameter idiom
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__add_link(
    const tesseract_msgs::msg::Link_<ContainerAllocator> & _arg)
  {
    this->add_link = _arg;
    return *this;
  }
  Type & set__add_joint(
    const tesseract_msgs::msg::Joint_<ContainerAllocator> & _arg)
  {
    this->add_joint = _arg;
    return *this;
  }
  Type & set__add_replace_allowed(
    const bool & _arg)
  {
    this->add_replace_allowed = _arg;
    return *this;
  }
  Type & set__move_link_joint(
    const tesseract_msgs::msg::Joint_<ContainerAllocator> & _arg)
  {
    this->move_link_joint = _arg;
    return *this;
  }
  Type & set__move_joint_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->move_joint_name = _arg;
    return *this;
  }
  Type & set__move_joint_parent_link(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->move_joint_parent_link = _arg;
    return *this;
  }
  Type & set__remove_link(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->remove_link = _arg;
    return *this;
  }
  Type & set__remove_joint(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->remove_joint = _arg;
    return *this;
  }
  Type & set__replace_joint(
    const tesseract_msgs::msg::Joint_<ContainerAllocator> & _arg)
  {
    this->replace_joint = _arg;
    return *this;
  }
  Type & set__change_link_origin_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->change_link_origin_name = _arg;
    return *this;
  }
  Type & set__change_link_origin_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->change_link_origin_pose = _arg;
    return *this;
  }
  Type & set__change_joint_origin_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->change_joint_origin_name = _arg;
    return *this;
  }
  Type & set__change_joint_origin_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->change_joint_origin_pose = _arg;
    return *this;
  }
  Type & set__change_link_collision_enabled_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->change_link_collision_enabled_name = _arg;
    return *this;
  }
  Type & set__change_link_collision_enabled_value(
    const bool & _arg)
  {
    this->change_link_collision_enabled_value = _arg;
    return *this;
  }
  Type & set__change_link_visibility_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->change_link_visibility_name = _arg;
    return *this;
  }
  Type & set__change_link_visibility_value(
    const bool & _arg)
  {
    this->change_link_visibility_value = _arg;
    return *this;
  }
  Type & set__modify_allowed_collisions_type(
    const uint8_t & _arg)
  {
    this->modify_allowed_collisions_type = _arg;
    return *this;
  }
  Type & set__modify_allowed_collisions(
    const std::vector<tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>>> & _arg)
  {
    this->modify_allowed_collisions = _arg;
    return *this;
  }
  Type & set__remove_allowed_collision_link(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->remove_allowed_collision_link = _arg;
    return *this;
  }
  Type & set__joint_state(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->joint_state = _arg;
    return *this;
  }
  Type & set__scene_graph(
    const tesseract_msgs::msg::SceneGraph_<ContainerAllocator> & _arg)
  {
    this->scene_graph = _arg;
    return *this;
  }
  Type & set__scene_graph_joint(
    const tesseract_msgs::msg::Joint_<ContainerAllocator> & _arg)
  {
    this->scene_graph_joint = _arg;
    return *this;
  }
  Type & set__scene_graph_prefix(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->scene_graph_prefix = _arg;
    return *this;
  }
  Type & set__change_joint_position_limits(
    const std::vector<tesseract_msgs::msg::StringLimitsPair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::StringLimitsPair_<ContainerAllocator>>> & _arg)
  {
    this->change_joint_position_limits = _arg;
    return *this;
  }
  Type & set__change_joint_velocity_limits(
    const std::vector<tesseract_msgs::msg::StringDoublePair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::StringDoublePair_<ContainerAllocator>>> & _arg)
  {
    this->change_joint_velocity_limits = _arg;
    return *this;
  }
  Type & set__change_joint_acceleration_limits(
    const std::vector<tesseract_msgs::msg::StringDoublePair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::StringDoublePair_<ContainerAllocator>>> & _arg)
  {
    this->change_joint_acceleration_limits = _arg;
    return *this;
  }
  Type & set__add_kinematics_information(
    const tesseract_msgs::msg::KinematicsInformation_<ContainerAllocator> & _arg)
  {
    this->add_kinematics_information = _arg;
    return *this;
  }
  Type & set__collision_margin_data(
    const tesseract_msgs::msg::CollisionMarginData_<ContainerAllocator> & _arg)
  {
    this->collision_margin_data = _arg;
    return *this;
  }
  Type & set__collision_margin_override_type(
    const tesseract_msgs::msg::CollisionMarginOverrideType_<ContainerAllocator> & _arg)
  {
    this->collision_margin_override_type = _arg;
    return *this;
  }
  Type & set__add_contact_managers_plugin_info(
    const tesseract_msgs::msg::ContactManagersPluginInfo_<ContainerAllocator> & _arg)
  {
    this->add_contact_managers_plugin_info = _arg;
    return *this;
  }
  Type & set__set_active_discrete_contact_manager(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->set_active_discrete_contact_manager = _arg;
    return *this;
  }
  Type & set__set_active_continuous_contact_manager(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->set_active_continuous_contact_manager = _arg;
    return *this;
  }
  Type & set__add_trajectory_link_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->add_trajectory_link_name = _arg;
    return *this;
  }
  Type & set__add_trajectory_link_parent_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->add_trajectory_link_parent_name = _arg;
    return *this;
  }
  Type & set__add_trajectory_link_traj(
    const tesseract_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->add_trajectory_link_traj = _arg;
    return *this;
  }
  Type & set__add_trajectory_link_replace_allowed(
    const bool & _arg)
  {
    this->add_trajectory_link_replace_allowed = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ADD_LINK =
    0u;
  static constexpr uint8_t MOVE_LINK =
    1u;
  static constexpr uint8_t MOVE_JOINT =
    2u;
  static constexpr uint8_t REMOVE_LINK =
    3u;
  static constexpr uint8_t REMOVE_JOINT =
    4u;
  static constexpr uint8_t CHANGE_LINK_ORIGIN =
    5u;
  static constexpr uint8_t CHANGE_JOINT_ORIGIN =
    6u;
  static constexpr uint8_t CHANGE_LINK_COLLISION_ENABLED =
    7u;
  static constexpr uint8_t CHANGE_LINK_VISIBILITY =
    8u;
  static constexpr uint8_t MODIFY_ALLOWED_COLLISIONS =
    9u;
  static constexpr uint8_t REMOVE_ALLOWED_COLLISION_LINK =
    10u;
  static constexpr uint8_t UPDATE_JOINT_STATE =
    11u;
  static constexpr uint8_t ADD_SCENE_GRAPH =
    12u;
  static constexpr uint8_t CHANGE_JOINT_POSITION_LIMITS =
    13u;
  static constexpr uint8_t CHANGE_JOINT_VELOCITY_LIMITS =
    14u;
  static constexpr uint8_t CHANGE_JOINT_ACCELERATION_LIMITS =
    15u;
  static constexpr uint8_t ADD_KINEMATICS_INFORMATION =
    16u;
  static constexpr uint8_t REPLACE_JOINT =
    17u;
  static constexpr uint8_t CHANGE_COLLISION_MARGINS =
    18u;
  static constexpr uint8_t ADD_CONTACT_MANAGERS_PLUGIN_INFO =
    19u;
  static constexpr uint8_t SET_ACTIVE_DISCRETE_CONTACT_MANAGER =
    20u;
  static constexpr uint8_t SET_ACTIVE_CONTINUOUS_CONTACT_MANAGER =
    21u;
  static constexpr uint8_t ADD_TRAJECTORY_LINK =
    22u;

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__EnvironmentCommand
    std::shared_ptr<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__EnvironmentCommand
    std::shared_ptr<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnvironmentCommand_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->add_link != other.add_link) {
      return false;
    }
    if (this->add_joint != other.add_joint) {
      return false;
    }
    if (this->add_replace_allowed != other.add_replace_allowed) {
      return false;
    }
    if (this->move_link_joint != other.move_link_joint) {
      return false;
    }
    if (this->move_joint_name != other.move_joint_name) {
      return false;
    }
    if (this->move_joint_parent_link != other.move_joint_parent_link) {
      return false;
    }
    if (this->remove_link != other.remove_link) {
      return false;
    }
    if (this->remove_joint != other.remove_joint) {
      return false;
    }
    if (this->replace_joint != other.replace_joint) {
      return false;
    }
    if (this->change_link_origin_name != other.change_link_origin_name) {
      return false;
    }
    if (this->change_link_origin_pose != other.change_link_origin_pose) {
      return false;
    }
    if (this->change_joint_origin_name != other.change_joint_origin_name) {
      return false;
    }
    if (this->change_joint_origin_pose != other.change_joint_origin_pose) {
      return false;
    }
    if (this->change_link_collision_enabled_name != other.change_link_collision_enabled_name) {
      return false;
    }
    if (this->change_link_collision_enabled_value != other.change_link_collision_enabled_value) {
      return false;
    }
    if (this->change_link_visibility_name != other.change_link_visibility_name) {
      return false;
    }
    if (this->change_link_visibility_value != other.change_link_visibility_value) {
      return false;
    }
    if (this->modify_allowed_collisions_type != other.modify_allowed_collisions_type) {
      return false;
    }
    if (this->modify_allowed_collisions != other.modify_allowed_collisions) {
      return false;
    }
    if (this->remove_allowed_collision_link != other.remove_allowed_collision_link) {
      return false;
    }
    if (this->joint_state != other.joint_state) {
      return false;
    }
    if (this->scene_graph != other.scene_graph) {
      return false;
    }
    if (this->scene_graph_joint != other.scene_graph_joint) {
      return false;
    }
    if (this->scene_graph_prefix != other.scene_graph_prefix) {
      return false;
    }
    if (this->change_joint_position_limits != other.change_joint_position_limits) {
      return false;
    }
    if (this->change_joint_velocity_limits != other.change_joint_velocity_limits) {
      return false;
    }
    if (this->change_joint_acceleration_limits != other.change_joint_acceleration_limits) {
      return false;
    }
    if (this->add_kinematics_information != other.add_kinematics_information) {
      return false;
    }
    if (this->collision_margin_data != other.collision_margin_data) {
      return false;
    }
    if (this->collision_margin_override_type != other.collision_margin_override_type) {
      return false;
    }
    if (this->add_contact_managers_plugin_info != other.add_contact_managers_plugin_info) {
      return false;
    }
    if (this->set_active_discrete_contact_manager != other.set_active_discrete_contact_manager) {
      return false;
    }
    if (this->set_active_continuous_contact_manager != other.set_active_continuous_contact_manager) {
      return false;
    }
    if (this->add_trajectory_link_name != other.add_trajectory_link_name) {
      return false;
    }
    if (this->add_trajectory_link_parent_name != other.add_trajectory_link_parent_name) {
      return false;
    }
    if (this->add_trajectory_link_traj != other.add_trajectory_link_traj) {
      return false;
    }
    if (this->add_trajectory_link_replace_allowed != other.add_trajectory_link_replace_allowed) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnvironmentCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnvironmentCommand_

// alias to use template instance with default allocator
using EnvironmentCommand =
  tesseract_msgs::msg::EnvironmentCommand_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::ADD_LINK;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::MOVE_LINK;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::MOVE_JOINT;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::REMOVE_LINK;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::REMOVE_JOINT;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::CHANGE_LINK_ORIGIN;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::CHANGE_JOINT_ORIGIN;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::CHANGE_LINK_COLLISION_ENABLED;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::CHANGE_LINK_VISIBILITY;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::MODIFY_ALLOWED_COLLISIONS;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::REMOVE_ALLOWED_COLLISION_LINK;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::UPDATE_JOINT_STATE;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::ADD_SCENE_GRAPH;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::CHANGE_JOINT_POSITION_LIMITS;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::CHANGE_JOINT_VELOCITY_LIMITS;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::CHANGE_JOINT_ACCELERATION_LIMITS;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::ADD_KINEMATICS_INFORMATION;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::REPLACE_JOINT;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::CHANGE_COLLISION_MARGINS;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::ADD_CONTACT_MANAGERS_PLUGIN_INFO;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::SET_ACTIVE_DISCRETE_CONTACT_MANAGER;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::SET_ACTIVE_CONTINUOUS_CONTACT_MANAGER;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::ADD_TRAJECTORY_LINK;

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT_COMMAND__STRUCT_HPP_
