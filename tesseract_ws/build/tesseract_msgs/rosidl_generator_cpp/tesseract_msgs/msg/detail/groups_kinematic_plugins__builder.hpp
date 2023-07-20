// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/GroupsKinematicPlugins.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__GROUPS_KINEMATIC_PLUGINS__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__GROUPS_KINEMATIC_PLUGINS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/groups_kinematic_plugins__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_GroupsKinematicPlugins_plugin_container
{
public:
  explicit Init_GroupsKinematicPlugins_plugin_container(::tesseract_msgs::msg::GroupsKinematicPlugins & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::GroupsKinematicPlugins plugin_container(::tesseract_msgs::msg::GroupsKinematicPlugins::_plugin_container_type arg)
  {
    msg_.plugin_container = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::GroupsKinematicPlugins msg_;
};

class Init_GroupsKinematicPlugins_group
{
public:
  Init_GroupsKinematicPlugins_group()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GroupsKinematicPlugins_plugin_container group(::tesseract_msgs::msg::GroupsKinematicPlugins::_group_type arg)
  {
    msg_.group = std::move(arg);
    return Init_GroupsKinematicPlugins_plugin_container(msg_);
  }

private:
  ::tesseract_msgs::msg::GroupsKinematicPlugins msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::GroupsKinematicPlugins>()
{
  return tesseract_msgs::msg::builder::Init_GroupsKinematicPlugins_group();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__GROUPS_KINEMATIC_PLUGINS__BUILDER_HPP_
