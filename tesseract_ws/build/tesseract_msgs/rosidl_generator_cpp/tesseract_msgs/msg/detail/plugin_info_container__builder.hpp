// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/PluginInfoContainer.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__PLUGIN_INFO_CONTAINER__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__PLUGIN_INFO_CONTAINER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/plugin_info_container__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_PluginInfoContainer_plugins
{
public:
  explicit Init_PluginInfoContainer_plugins(::tesseract_msgs::msg::PluginInfoContainer & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::PluginInfoContainer plugins(::tesseract_msgs::msg::PluginInfoContainer::_plugins_type arg)
  {
    msg_.plugins = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::PluginInfoContainer msg_;
};

class Init_PluginInfoContainer_default_plugin
{
public:
  Init_PluginInfoContainer_default_plugin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PluginInfoContainer_plugins default_plugin(::tesseract_msgs::msg::PluginInfoContainer::_default_plugin_type arg)
  {
    msg_.default_plugin = std::move(arg);
    return Init_PluginInfoContainer_plugins(msg_);
  }

private:
  ::tesseract_msgs::msg::PluginInfoContainer msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::PluginInfoContainer>()
{
  return tesseract_msgs::msg::builder::Init_PluginInfoContainer_default_plugin();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__PLUGIN_INFO_CONTAINER__BUILDER_HPP_
