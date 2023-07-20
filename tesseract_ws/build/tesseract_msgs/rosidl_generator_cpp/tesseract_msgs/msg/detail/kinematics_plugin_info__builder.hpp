// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/KinematicsPluginInfo.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__KINEMATICS_PLUGIN_INFO__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__KINEMATICS_PLUGIN_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/kinematics_plugin_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_KinematicsPluginInfo_group_inv_plugins
{
public:
  explicit Init_KinematicsPluginInfo_group_inv_plugins(::tesseract_msgs::msg::KinematicsPluginInfo & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::KinematicsPluginInfo group_inv_plugins(::tesseract_msgs::msg::KinematicsPluginInfo::_group_inv_plugins_type arg)
  {
    msg_.group_inv_plugins = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::KinematicsPluginInfo msg_;
};

class Init_KinematicsPluginInfo_group_fwd_plugins
{
public:
  explicit Init_KinematicsPluginInfo_group_fwd_plugins(::tesseract_msgs::msg::KinematicsPluginInfo & msg)
  : msg_(msg)
  {}
  Init_KinematicsPluginInfo_group_inv_plugins group_fwd_plugins(::tesseract_msgs::msg::KinematicsPluginInfo::_group_fwd_plugins_type arg)
  {
    msg_.group_fwd_plugins = std::move(arg);
    return Init_KinematicsPluginInfo_group_inv_plugins(msg_);
  }

private:
  ::tesseract_msgs::msg::KinematicsPluginInfo msg_;
};

class Init_KinematicsPluginInfo_search_libraries
{
public:
  explicit Init_KinematicsPluginInfo_search_libraries(::tesseract_msgs::msg::KinematicsPluginInfo & msg)
  : msg_(msg)
  {}
  Init_KinematicsPluginInfo_group_fwd_plugins search_libraries(::tesseract_msgs::msg::KinematicsPluginInfo::_search_libraries_type arg)
  {
    msg_.search_libraries = std::move(arg);
    return Init_KinematicsPluginInfo_group_fwd_plugins(msg_);
  }

private:
  ::tesseract_msgs::msg::KinematicsPluginInfo msg_;
};

class Init_KinematicsPluginInfo_search_paths
{
public:
  Init_KinematicsPluginInfo_search_paths()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KinematicsPluginInfo_search_libraries search_paths(::tesseract_msgs::msg::KinematicsPluginInfo::_search_paths_type arg)
  {
    msg_.search_paths = std::move(arg);
    return Init_KinematicsPluginInfo_search_libraries(msg_);
  }

private:
  ::tesseract_msgs::msg::KinematicsPluginInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::KinematicsPluginInfo>()
{
  return tesseract_msgs::msg::builder::Init_KinematicsPluginInfo_search_paths();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__KINEMATICS_PLUGIN_INFO__BUILDER_HPP_
