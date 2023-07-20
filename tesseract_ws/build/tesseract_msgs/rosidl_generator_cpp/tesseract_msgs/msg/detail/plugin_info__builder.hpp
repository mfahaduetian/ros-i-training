// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/PluginInfo.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__PLUGIN_INFO__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__PLUGIN_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/plugin_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_PluginInfo_config
{
public:
  explicit Init_PluginInfo_config(::tesseract_msgs::msg::PluginInfo & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::PluginInfo config(::tesseract_msgs::msg::PluginInfo::_config_type arg)
  {
    msg_.config = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::PluginInfo msg_;
};

class Init_PluginInfo_class_name
{
public:
  Init_PluginInfo_class_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PluginInfo_config class_name(::tesseract_msgs::msg::PluginInfo::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_PluginInfo_config(msg_);
  }

private:
  ::tesseract_msgs::msg::PluginInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::PluginInfo>()
{
  return tesseract_msgs::msg::builder::Init_PluginInfo_class_name();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__PLUGIN_INFO__BUILDER_HPP_
