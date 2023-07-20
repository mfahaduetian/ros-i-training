// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/ContactManagersPluginInfo.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__CONTACT_MANAGERS_PLUGIN_INFO__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__CONTACT_MANAGERS_PLUGIN_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/contact_managers_plugin_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_ContactManagersPluginInfo_continuous_plugin_container
{
public:
  explicit Init_ContactManagersPluginInfo_continuous_plugin_container(::tesseract_msgs::msg::ContactManagersPluginInfo & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::ContactManagersPluginInfo continuous_plugin_container(::tesseract_msgs::msg::ContactManagersPluginInfo::_continuous_plugin_container_type arg)
  {
    msg_.continuous_plugin_container = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::ContactManagersPluginInfo msg_;
};

class Init_ContactManagersPluginInfo_discrete_plugin_container
{
public:
  explicit Init_ContactManagersPluginInfo_discrete_plugin_container(::tesseract_msgs::msg::ContactManagersPluginInfo & msg)
  : msg_(msg)
  {}
  Init_ContactManagersPluginInfo_continuous_plugin_container discrete_plugin_container(::tesseract_msgs::msg::ContactManagersPluginInfo::_discrete_plugin_container_type arg)
  {
    msg_.discrete_plugin_container = std::move(arg);
    return Init_ContactManagersPluginInfo_continuous_plugin_container(msg_);
  }

private:
  ::tesseract_msgs::msg::ContactManagersPluginInfo msg_;
};

class Init_ContactManagersPluginInfo_search_libraries
{
public:
  explicit Init_ContactManagersPluginInfo_search_libraries(::tesseract_msgs::msg::ContactManagersPluginInfo & msg)
  : msg_(msg)
  {}
  Init_ContactManagersPluginInfo_discrete_plugin_container search_libraries(::tesseract_msgs::msg::ContactManagersPluginInfo::_search_libraries_type arg)
  {
    msg_.search_libraries = std::move(arg);
    return Init_ContactManagersPluginInfo_discrete_plugin_container(msg_);
  }

private:
  ::tesseract_msgs::msg::ContactManagersPluginInfo msg_;
};

class Init_ContactManagersPluginInfo_search_paths
{
public:
  Init_ContactManagersPluginInfo_search_paths()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ContactManagersPluginInfo_search_libraries search_paths(::tesseract_msgs::msg::ContactManagersPluginInfo::_search_paths_type arg)
  {
    msg_.search_paths = std::move(arg);
    return Init_ContactManagersPluginInfo_search_libraries(msg_);
  }

private:
  ::tesseract_msgs::msg::ContactManagersPluginInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::ContactManagersPluginInfo>()
{
  return tesseract_msgs::msg::builder::Init_ContactManagersPluginInfo_search_paths();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__CONTACT_MANAGERS_PLUGIN_INFO__BUILDER_HPP_
