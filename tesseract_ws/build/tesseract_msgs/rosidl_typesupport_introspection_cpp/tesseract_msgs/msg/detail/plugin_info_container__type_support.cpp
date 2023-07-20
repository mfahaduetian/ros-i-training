// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tesseract_msgs:msg/PluginInfoContainer.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tesseract_msgs/msg/detail/plugin_info_container__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tesseract_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PluginInfoContainer_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tesseract_msgs::msg::PluginInfoContainer(_init);
}

void PluginInfoContainer_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tesseract_msgs::msg::PluginInfoContainer *>(message_memory);
  typed_message->~PluginInfoContainer();
}

size_t size_function__PluginInfoContainer__plugins(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tesseract_msgs::msg::StringPluginInfoPair> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PluginInfoContainer__plugins(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tesseract_msgs::msg::StringPluginInfoPair> *>(untyped_member);
  return &member[index];
}

void * get_function__PluginInfoContainer__plugins(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tesseract_msgs::msg::StringPluginInfoPair> *>(untyped_member);
  return &member[index];
}

void fetch_function__PluginInfoContainer__plugins(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tesseract_msgs::msg::StringPluginInfoPair *>(
    get_const_function__PluginInfoContainer__plugins(untyped_member, index));
  auto & value = *reinterpret_cast<tesseract_msgs::msg::StringPluginInfoPair *>(untyped_value);
  value = item;
}

void assign_function__PluginInfoContainer__plugins(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tesseract_msgs::msg::StringPluginInfoPair *>(
    get_function__PluginInfoContainer__plugins(untyped_member, index));
  const auto & value = *reinterpret_cast<const tesseract_msgs::msg::StringPluginInfoPair *>(untyped_value);
  item = value;
}

void resize_function__PluginInfoContainer__plugins(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tesseract_msgs::msg::StringPluginInfoPair> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PluginInfoContainer_message_member_array[2] = {
  {
    "default_plugin",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::PluginInfoContainer, default_plugin),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "plugins",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::StringPluginInfoPair>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::PluginInfoContainer, plugins),  // bytes offset in struct
    nullptr,  // default value
    size_function__PluginInfoContainer__plugins,  // size() function pointer
    get_const_function__PluginInfoContainer__plugins,  // get_const(index) function pointer
    get_function__PluginInfoContainer__plugins,  // get(index) function pointer
    fetch_function__PluginInfoContainer__plugins,  // fetch(index, &value) function pointer
    assign_function__PluginInfoContainer__plugins,  // assign(index, value) function pointer
    resize_function__PluginInfoContainer__plugins  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PluginInfoContainer_message_members = {
  "tesseract_msgs::msg",  // message namespace
  "PluginInfoContainer",  // message name
  2,  // number of fields
  sizeof(tesseract_msgs::msg::PluginInfoContainer),
  PluginInfoContainer_message_member_array,  // message members
  PluginInfoContainer_init_function,  // function to initialize message memory (memory has to be allocated)
  PluginInfoContainer_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PluginInfoContainer_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PluginInfoContainer_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tesseract_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tesseract_msgs::msg::PluginInfoContainer>()
{
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::PluginInfoContainer_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tesseract_msgs, msg, PluginInfoContainer)() {
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::PluginInfoContainer_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
