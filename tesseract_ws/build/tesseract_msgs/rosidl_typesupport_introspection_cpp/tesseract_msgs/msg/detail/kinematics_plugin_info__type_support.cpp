// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tesseract_msgs:msg/KinematicsPluginInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tesseract_msgs/msg/detail/kinematics_plugin_info__struct.hpp"
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

void KinematicsPluginInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tesseract_msgs::msg::KinematicsPluginInfo(_init);
}

void KinematicsPluginInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tesseract_msgs::msg::KinematicsPluginInfo *>(message_memory);
  typed_message->~KinematicsPluginInfo();
}

size_t size_function__KinematicsPluginInfo__search_paths(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KinematicsPluginInfo__search_paths(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__KinematicsPluginInfo__search_paths(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__KinematicsPluginInfo__search_paths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__KinematicsPluginInfo__search_paths(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__KinematicsPluginInfo__search_paths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__KinematicsPluginInfo__search_paths(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__KinematicsPluginInfo__search_paths(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__KinematicsPluginInfo__search_libraries(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KinematicsPluginInfo__search_libraries(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__KinematicsPluginInfo__search_libraries(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__KinematicsPluginInfo__search_libraries(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__KinematicsPluginInfo__search_libraries(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__KinematicsPluginInfo__search_libraries(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__KinematicsPluginInfo__search_libraries(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__KinematicsPluginInfo__search_libraries(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__KinematicsPluginInfo__group_fwd_plugins(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tesseract_msgs::msg::GroupsKinematicPlugins> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KinematicsPluginInfo__group_fwd_plugins(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tesseract_msgs::msg::GroupsKinematicPlugins> *>(untyped_member);
  return &member[index];
}

void * get_function__KinematicsPluginInfo__group_fwd_plugins(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tesseract_msgs::msg::GroupsKinematicPlugins> *>(untyped_member);
  return &member[index];
}

void fetch_function__KinematicsPluginInfo__group_fwd_plugins(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tesseract_msgs::msg::GroupsKinematicPlugins *>(
    get_const_function__KinematicsPluginInfo__group_fwd_plugins(untyped_member, index));
  auto & value = *reinterpret_cast<tesseract_msgs::msg::GroupsKinematicPlugins *>(untyped_value);
  value = item;
}

void assign_function__KinematicsPluginInfo__group_fwd_plugins(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tesseract_msgs::msg::GroupsKinematicPlugins *>(
    get_function__KinematicsPluginInfo__group_fwd_plugins(untyped_member, index));
  const auto & value = *reinterpret_cast<const tesseract_msgs::msg::GroupsKinematicPlugins *>(untyped_value);
  item = value;
}

void resize_function__KinematicsPluginInfo__group_fwd_plugins(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tesseract_msgs::msg::GroupsKinematicPlugins> *>(untyped_member);
  member->resize(size);
}

size_t size_function__KinematicsPluginInfo__group_inv_plugins(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tesseract_msgs::msg::GroupsKinematicPlugins> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KinematicsPluginInfo__group_inv_plugins(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tesseract_msgs::msg::GroupsKinematicPlugins> *>(untyped_member);
  return &member[index];
}

void * get_function__KinematicsPluginInfo__group_inv_plugins(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tesseract_msgs::msg::GroupsKinematicPlugins> *>(untyped_member);
  return &member[index];
}

void fetch_function__KinematicsPluginInfo__group_inv_plugins(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tesseract_msgs::msg::GroupsKinematicPlugins *>(
    get_const_function__KinematicsPluginInfo__group_inv_plugins(untyped_member, index));
  auto & value = *reinterpret_cast<tesseract_msgs::msg::GroupsKinematicPlugins *>(untyped_value);
  value = item;
}

void assign_function__KinematicsPluginInfo__group_inv_plugins(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tesseract_msgs::msg::GroupsKinematicPlugins *>(
    get_function__KinematicsPluginInfo__group_inv_plugins(untyped_member, index));
  const auto & value = *reinterpret_cast<const tesseract_msgs::msg::GroupsKinematicPlugins *>(untyped_value);
  item = value;
}

void resize_function__KinematicsPluginInfo__group_inv_plugins(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tesseract_msgs::msg::GroupsKinematicPlugins> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember KinematicsPluginInfo_message_member_array[4] = {
  {
    "search_paths",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::KinematicsPluginInfo, search_paths),  // bytes offset in struct
    nullptr,  // default value
    size_function__KinematicsPluginInfo__search_paths,  // size() function pointer
    get_const_function__KinematicsPluginInfo__search_paths,  // get_const(index) function pointer
    get_function__KinematicsPluginInfo__search_paths,  // get(index) function pointer
    fetch_function__KinematicsPluginInfo__search_paths,  // fetch(index, &value) function pointer
    assign_function__KinematicsPluginInfo__search_paths,  // assign(index, value) function pointer
    resize_function__KinematicsPluginInfo__search_paths  // resize(index) function pointer
  },
  {
    "search_libraries",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::KinematicsPluginInfo, search_libraries),  // bytes offset in struct
    nullptr,  // default value
    size_function__KinematicsPluginInfo__search_libraries,  // size() function pointer
    get_const_function__KinematicsPluginInfo__search_libraries,  // get_const(index) function pointer
    get_function__KinematicsPluginInfo__search_libraries,  // get(index) function pointer
    fetch_function__KinematicsPluginInfo__search_libraries,  // fetch(index, &value) function pointer
    assign_function__KinematicsPluginInfo__search_libraries,  // assign(index, value) function pointer
    resize_function__KinematicsPluginInfo__search_libraries  // resize(index) function pointer
  },
  {
    "group_fwd_plugins",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::GroupsKinematicPlugins>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::KinematicsPluginInfo, group_fwd_plugins),  // bytes offset in struct
    nullptr,  // default value
    size_function__KinematicsPluginInfo__group_fwd_plugins,  // size() function pointer
    get_const_function__KinematicsPluginInfo__group_fwd_plugins,  // get_const(index) function pointer
    get_function__KinematicsPluginInfo__group_fwd_plugins,  // get(index) function pointer
    fetch_function__KinematicsPluginInfo__group_fwd_plugins,  // fetch(index, &value) function pointer
    assign_function__KinematicsPluginInfo__group_fwd_plugins,  // assign(index, value) function pointer
    resize_function__KinematicsPluginInfo__group_fwd_plugins  // resize(index) function pointer
  },
  {
    "group_inv_plugins",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::GroupsKinematicPlugins>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::KinematicsPluginInfo, group_inv_plugins),  // bytes offset in struct
    nullptr,  // default value
    size_function__KinematicsPluginInfo__group_inv_plugins,  // size() function pointer
    get_const_function__KinematicsPluginInfo__group_inv_plugins,  // get_const(index) function pointer
    get_function__KinematicsPluginInfo__group_inv_plugins,  // get(index) function pointer
    fetch_function__KinematicsPluginInfo__group_inv_plugins,  // fetch(index, &value) function pointer
    assign_function__KinematicsPluginInfo__group_inv_plugins,  // assign(index, value) function pointer
    resize_function__KinematicsPluginInfo__group_inv_plugins  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers KinematicsPluginInfo_message_members = {
  "tesseract_msgs::msg",  // message namespace
  "KinematicsPluginInfo",  // message name
  4,  // number of fields
  sizeof(tesseract_msgs::msg::KinematicsPluginInfo),
  KinematicsPluginInfo_message_member_array,  // message members
  KinematicsPluginInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  KinematicsPluginInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t KinematicsPluginInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KinematicsPluginInfo_message_members,
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
get_message_type_support_handle<tesseract_msgs::msg::KinematicsPluginInfo>()
{
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::KinematicsPluginInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tesseract_msgs, msg, KinematicsPluginInfo)() {
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::KinematicsPluginInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
