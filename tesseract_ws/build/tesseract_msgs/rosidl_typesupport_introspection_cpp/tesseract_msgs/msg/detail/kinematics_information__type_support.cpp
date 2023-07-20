// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tesseract_msgs:msg/KinematicsInformation.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tesseract_msgs/msg/detail/kinematics_information__struct.hpp"
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

void KinematicsInformation_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tesseract_msgs::msg::KinematicsInformation(_init);
}

void KinematicsInformation_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tesseract_msgs::msg::KinematicsInformation *>(message_memory);
  typed_message->~KinematicsInformation();
}

size_t size_function__KinematicsInformation__group_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KinematicsInformation__group_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__KinematicsInformation__group_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__KinematicsInformation__group_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__KinematicsInformation__group_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__KinematicsInformation__group_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__KinematicsInformation__group_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__KinematicsInformation__group_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__KinematicsInformation__group_joint_states(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tesseract_msgs::msg::GroupsJointStates> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KinematicsInformation__group_joint_states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tesseract_msgs::msg::GroupsJointStates> *>(untyped_member);
  return &member[index];
}

void * get_function__KinematicsInformation__group_joint_states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tesseract_msgs::msg::GroupsJointStates> *>(untyped_member);
  return &member[index];
}

void fetch_function__KinematicsInformation__group_joint_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tesseract_msgs::msg::GroupsJointStates *>(
    get_const_function__KinematicsInformation__group_joint_states(untyped_member, index));
  auto & value = *reinterpret_cast<tesseract_msgs::msg::GroupsJointStates *>(untyped_value);
  value = item;
}

void assign_function__KinematicsInformation__group_joint_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tesseract_msgs::msg::GroupsJointStates *>(
    get_function__KinematicsInformation__group_joint_states(untyped_member, index));
  const auto & value = *reinterpret_cast<const tesseract_msgs::msg::GroupsJointStates *>(untyped_value);
  item = value;
}

void resize_function__KinematicsInformation__group_joint_states(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tesseract_msgs::msg::GroupsJointStates> *>(untyped_member);
  member->resize(size);
}

size_t size_function__KinematicsInformation__group_tcps(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tesseract_msgs::msg::GroupsTCPs> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KinematicsInformation__group_tcps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tesseract_msgs::msg::GroupsTCPs> *>(untyped_member);
  return &member[index];
}

void * get_function__KinematicsInformation__group_tcps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tesseract_msgs::msg::GroupsTCPs> *>(untyped_member);
  return &member[index];
}

void fetch_function__KinematicsInformation__group_tcps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tesseract_msgs::msg::GroupsTCPs *>(
    get_const_function__KinematicsInformation__group_tcps(untyped_member, index));
  auto & value = *reinterpret_cast<tesseract_msgs::msg::GroupsTCPs *>(untyped_value);
  value = item;
}

void assign_function__KinematicsInformation__group_tcps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tesseract_msgs::msg::GroupsTCPs *>(
    get_function__KinematicsInformation__group_tcps(untyped_member, index));
  const auto & value = *reinterpret_cast<const tesseract_msgs::msg::GroupsTCPs *>(untyped_value);
  item = value;
}

void resize_function__KinematicsInformation__group_tcps(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tesseract_msgs::msg::GroupsTCPs> *>(untyped_member);
  member->resize(size);
}

size_t size_function__KinematicsInformation__chain_groups(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tesseract_msgs::msg::ChainGroup> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KinematicsInformation__chain_groups(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tesseract_msgs::msg::ChainGroup> *>(untyped_member);
  return &member[index];
}

void * get_function__KinematicsInformation__chain_groups(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tesseract_msgs::msg::ChainGroup> *>(untyped_member);
  return &member[index];
}

void fetch_function__KinematicsInformation__chain_groups(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tesseract_msgs::msg::ChainGroup *>(
    get_const_function__KinematicsInformation__chain_groups(untyped_member, index));
  auto & value = *reinterpret_cast<tesseract_msgs::msg::ChainGroup *>(untyped_value);
  value = item;
}

void assign_function__KinematicsInformation__chain_groups(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tesseract_msgs::msg::ChainGroup *>(
    get_function__KinematicsInformation__chain_groups(untyped_member, index));
  const auto & value = *reinterpret_cast<const tesseract_msgs::msg::ChainGroup *>(untyped_value);
  item = value;
}

void resize_function__KinematicsInformation__chain_groups(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tesseract_msgs::msg::ChainGroup> *>(untyped_member);
  member->resize(size);
}

size_t size_function__KinematicsInformation__joint_groups(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tesseract_msgs::msg::JointGroup> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KinematicsInformation__joint_groups(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tesseract_msgs::msg::JointGroup> *>(untyped_member);
  return &member[index];
}

void * get_function__KinematicsInformation__joint_groups(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tesseract_msgs::msg::JointGroup> *>(untyped_member);
  return &member[index];
}

void fetch_function__KinematicsInformation__joint_groups(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tesseract_msgs::msg::JointGroup *>(
    get_const_function__KinematicsInformation__joint_groups(untyped_member, index));
  auto & value = *reinterpret_cast<tesseract_msgs::msg::JointGroup *>(untyped_value);
  value = item;
}

void assign_function__KinematicsInformation__joint_groups(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tesseract_msgs::msg::JointGroup *>(
    get_function__KinematicsInformation__joint_groups(untyped_member, index));
  const auto & value = *reinterpret_cast<const tesseract_msgs::msg::JointGroup *>(untyped_value);
  item = value;
}

void resize_function__KinematicsInformation__joint_groups(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tesseract_msgs::msg::JointGroup> *>(untyped_member);
  member->resize(size);
}

size_t size_function__KinematicsInformation__link_groups(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tesseract_msgs::msg::LinkGroup> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KinematicsInformation__link_groups(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tesseract_msgs::msg::LinkGroup> *>(untyped_member);
  return &member[index];
}

void * get_function__KinematicsInformation__link_groups(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tesseract_msgs::msg::LinkGroup> *>(untyped_member);
  return &member[index];
}

void fetch_function__KinematicsInformation__link_groups(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tesseract_msgs::msg::LinkGroup *>(
    get_const_function__KinematicsInformation__link_groups(untyped_member, index));
  auto & value = *reinterpret_cast<tesseract_msgs::msg::LinkGroup *>(untyped_value);
  value = item;
}

void assign_function__KinematicsInformation__link_groups(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tesseract_msgs::msg::LinkGroup *>(
    get_function__KinematicsInformation__link_groups(untyped_member, index));
  const auto & value = *reinterpret_cast<const tesseract_msgs::msg::LinkGroup *>(untyped_value);
  item = value;
}

void resize_function__KinematicsInformation__link_groups(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tesseract_msgs::msg::LinkGroup> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember KinematicsInformation_message_member_array[7] = {
  {
    "group_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::KinematicsInformation, group_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__KinematicsInformation__group_names,  // size() function pointer
    get_const_function__KinematicsInformation__group_names,  // get_const(index) function pointer
    get_function__KinematicsInformation__group_names,  // get(index) function pointer
    fetch_function__KinematicsInformation__group_names,  // fetch(index, &value) function pointer
    assign_function__KinematicsInformation__group_names,  // assign(index, value) function pointer
    resize_function__KinematicsInformation__group_names  // resize(index) function pointer
  },
  {
    "group_joint_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::GroupsJointStates>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::KinematicsInformation, group_joint_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__KinematicsInformation__group_joint_states,  // size() function pointer
    get_const_function__KinematicsInformation__group_joint_states,  // get_const(index) function pointer
    get_function__KinematicsInformation__group_joint_states,  // get(index) function pointer
    fetch_function__KinematicsInformation__group_joint_states,  // fetch(index, &value) function pointer
    assign_function__KinematicsInformation__group_joint_states,  // assign(index, value) function pointer
    resize_function__KinematicsInformation__group_joint_states  // resize(index) function pointer
  },
  {
    "group_tcps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::GroupsTCPs>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::KinematicsInformation, group_tcps),  // bytes offset in struct
    nullptr,  // default value
    size_function__KinematicsInformation__group_tcps,  // size() function pointer
    get_const_function__KinematicsInformation__group_tcps,  // get_const(index) function pointer
    get_function__KinematicsInformation__group_tcps,  // get(index) function pointer
    fetch_function__KinematicsInformation__group_tcps,  // fetch(index, &value) function pointer
    assign_function__KinematicsInformation__group_tcps,  // assign(index, value) function pointer
    resize_function__KinematicsInformation__group_tcps  // resize(index) function pointer
  },
  {
    "chain_groups",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::ChainGroup>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::KinematicsInformation, chain_groups),  // bytes offset in struct
    nullptr,  // default value
    size_function__KinematicsInformation__chain_groups,  // size() function pointer
    get_const_function__KinematicsInformation__chain_groups,  // get_const(index) function pointer
    get_function__KinematicsInformation__chain_groups,  // get(index) function pointer
    fetch_function__KinematicsInformation__chain_groups,  // fetch(index, &value) function pointer
    assign_function__KinematicsInformation__chain_groups,  // assign(index, value) function pointer
    resize_function__KinematicsInformation__chain_groups  // resize(index) function pointer
  },
  {
    "joint_groups",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::JointGroup>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::KinematicsInformation, joint_groups),  // bytes offset in struct
    nullptr,  // default value
    size_function__KinematicsInformation__joint_groups,  // size() function pointer
    get_const_function__KinematicsInformation__joint_groups,  // get_const(index) function pointer
    get_function__KinematicsInformation__joint_groups,  // get(index) function pointer
    fetch_function__KinematicsInformation__joint_groups,  // fetch(index, &value) function pointer
    assign_function__KinematicsInformation__joint_groups,  // assign(index, value) function pointer
    resize_function__KinematicsInformation__joint_groups  // resize(index) function pointer
  },
  {
    "link_groups",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::LinkGroup>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::KinematicsInformation, link_groups),  // bytes offset in struct
    nullptr,  // default value
    size_function__KinematicsInformation__link_groups,  // size() function pointer
    get_const_function__KinematicsInformation__link_groups,  // get_const(index) function pointer
    get_function__KinematicsInformation__link_groups,  // get(index) function pointer
    fetch_function__KinematicsInformation__link_groups,  // fetch(index, &value) function pointer
    assign_function__KinematicsInformation__link_groups,  // assign(index, value) function pointer
    resize_function__KinematicsInformation__link_groups  // resize(index) function pointer
  },
  {
    "kinematics_plugin_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::KinematicsPluginInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::KinematicsInformation, kinematics_plugin_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers KinematicsInformation_message_members = {
  "tesseract_msgs::msg",  // message namespace
  "KinematicsInformation",  // message name
  7,  // number of fields
  sizeof(tesseract_msgs::msg::KinematicsInformation),
  KinematicsInformation_message_member_array,  // message members
  KinematicsInformation_init_function,  // function to initialize message memory (memory has to be allocated)
  KinematicsInformation_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t KinematicsInformation_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KinematicsInformation_message_members,
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
get_message_type_support_handle<tesseract_msgs::msg::KinematicsInformation>()
{
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::KinematicsInformation_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tesseract_msgs, msg, KinematicsInformation)() {
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::KinematicsInformation_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
