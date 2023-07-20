// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/KinematicsInformation.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__KINEMATICS_INFORMATION__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__KINEMATICS_INFORMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/kinematics_information__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_KinematicsInformation_kinematics_plugin_info
{
public:
  explicit Init_KinematicsInformation_kinematics_plugin_info(::tesseract_msgs::msg::KinematicsInformation & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::KinematicsInformation kinematics_plugin_info(::tesseract_msgs::msg::KinematicsInformation::_kinematics_plugin_info_type arg)
  {
    msg_.kinematics_plugin_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::KinematicsInformation msg_;
};

class Init_KinematicsInformation_link_groups
{
public:
  explicit Init_KinematicsInformation_link_groups(::tesseract_msgs::msg::KinematicsInformation & msg)
  : msg_(msg)
  {}
  Init_KinematicsInformation_kinematics_plugin_info link_groups(::tesseract_msgs::msg::KinematicsInformation::_link_groups_type arg)
  {
    msg_.link_groups = std::move(arg);
    return Init_KinematicsInformation_kinematics_plugin_info(msg_);
  }

private:
  ::tesseract_msgs::msg::KinematicsInformation msg_;
};

class Init_KinematicsInformation_joint_groups
{
public:
  explicit Init_KinematicsInformation_joint_groups(::tesseract_msgs::msg::KinematicsInformation & msg)
  : msg_(msg)
  {}
  Init_KinematicsInformation_link_groups joint_groups(::tesseract_msgs::msg::KinematicsInformation::_joint_groups_type arg)
  {
    msg_.joint_groups = std::move(arg);
    return Init_KinematicsInformation_link_groups(msg_);
  }

private:
  ::tesseract_msgs::msg::KinematicsInformation msg_;
};

class Init_KinematicsInformation_chain_groups
{
public:
  explicit Init_KinematicsInformation_chain_groups(::tesseract_msgs::msg::KinematicsInformation & msg)
  : msg_(msg)
  {}
  Init_KinematicsInformation_joint_groups chain_groups(::tesseract_msgs::msg::KinematicsInformation::_chain_groups_type arg)
  {
    msg_.chain_groups = std::move(arg);
    return Init_KinematicsInformation_joint_groups(msg_);
  }

private:
  ::tesseract_msgs::msg::KinematicsInformation msg_;
};

class Init_KinematicsInformation_group_tcps
{
public:
  explicit Init_KinematicsInformation_group_tcps(::tesseract_msgs::msg::KinematicsInformation & msg)
  : msg_(msg)
  {}
  Init_KinematicsInformation_chain_groups group_tcps(::tesseract_msgs::msg::KinematicsInformation::_group_tcps_type arg)
  {
    msg_.group_tcps = std::move(arg);
    return Init_KinematicsInformation_chain_groups(msg_);
  }

private:
  ::tesseract_msgs::msg::KinematicsInformation msg_;
};

class Init_KinematicsInformation_group_joint_states
{
public:
  explicit Init_KinematicsInformation_group_joint_states(::tesseract_msgs::msg::KinematicsInformation & msg)
  : msg_(msg)
  {}
  Init_KinematicsInformation_group_tcps group_joint_states(::tesseract_msgs::msg::KinematicsInformation::_group_joint_states_type arg)
  {
    msg_.group_joint_states = std::move(arg);
    return Init_KinematicsInformation_group_tcps(msg_);
  }

private:
  ::tesseract_msgs::msg::KinematicsInformation msg_;
};

class Init_KinematicsInformation_group_names
{
public:
  Init_KinematicsInformation_group_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KinematicsInformation_group_joint_states group_names(::tesseract_msgs::msg::KinematicsInformation::_group_names_type arg)
  {
    msg_.group_names = std::move(arg);
    return Init_KinematicsInformation_group_joint_states(msg_);
  }

private:
  ::tesseract_msgs::msg::KinematicsInformation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::KinematicsInformation>()
{
  return tesseract_msgs::msg::builder::Init_KinematicsInformation_group_names();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__KINEMATICS_INFORMATION__BUILDER_HPP_
