// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tesseract_msgs:msg/TaskComposerNodeInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tesseract_msgs/msg/detail/task_composer_node_info__struct.hpp"
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

void TaskComposerNodeInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tesseract_msgs::msg::TaskComposerNodeInfo(_init);
}

void TaskComposerNodeInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tesseract_msgs::msg::TaskComposerNodeInfo *>(message_memory);
  typed_message->~TaskComposerNodeInfo();
}

size_t size_function__TaskComposerNodeInfo__inbound_edges(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TaskComposerNodeInfo__inbound_edges(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TaskComposerNodeInfo__inbound_edges(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__TaskComposerNodeInfo__inbound_edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__TaskComposerNodeInfo__inbound_edges(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__TaskComposerNodeInfo__inbound_edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__TaskComposerNodeInfo__inbound_edges(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__TaskComposerNodeInfo__inbound_edges(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TaskComposerNodeInfo__outbound_edges(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TaskComposerNodeInfo__outbound_edges(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TaskComposerNodeInfo__outbound_edges(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__TaskComposerNodeInfo__outbound_edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__TaskComposerNodeInfo__outbound_edges(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__TaskComposerNodeInfo__outbound_edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__TaskComposerNodeInfo__outbound_edges(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__TaskComposerNodeInfo__outbound_edges(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TaskComposerNodeInfo__input_keys(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TaskComposerNodeInfo__input_keys(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TaskComposerNodeInfo__input_keys(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__TaskComposerNodeInfo__input_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__TaskComposerNodeInfo__input_keys(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__TaskComposerNodeInfo__input_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__TaskComposerNodeInfo__input_keys(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__TaskComposerNodeInfo__input_keys(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TaskComposerNodeInfo__output_keys(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TaskComposerNodeInfo__output_keys(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TaskComposerNodeInfo__output_keys(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__TaskComposerNodeInfo__output_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__TaskComposerNodeInfo__output_keys(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__TaskComposerNodeInfo__output_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__TaskComposerNodeInfo__output_keys(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__TaskComposerNodeInfo__output_keys(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TaskComposerNodeInfo_message_member_array[9] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::TaskComposerNodeInfo, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uuid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::TaskComposerNodeInfo, uuid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "inbound_edges",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::TaskComposerNodeInfo, inbound_edges),  // bytes offset in struct
    nullptr,  // default value
    size_function__TaskComposerNodeInfo__inbound_edges,  // size() function pointer
    get_const_function__TaskComposerNodeInfo__inbound_edges,  // get_const(index) function pointer
    get_function__TaskComposerNodeInfo__inbound_edges,  // get(index) function pointer
    fetch_function__TaskComposerNodeInfo__inbound_edges,  // fetch(index, &value) function pointer
    assign_function__TaskComposerNodeInfo__inbound_edges,  // assign(index, value) function pointer
    resize_function__TaskComposerNodeInfo__inbound_edges  // resize(index) function pointer
  },
  {
    "outbound_edges",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::TaskComposerNodeInfo, outbound_edges),  // bytes offset in struct
    nullptr,  // default value
    size_function__TaskComposerNodeInfo__outbound_edges,  // size() function pointer
    get_const_function__TaskComposerNodeInfo__outbound_edges,  // get_const(index) function pointer
    get_function__TaskComposerNodeInfo__outbound_edges,  // get(index) function pointer
    fetch_function__TaskComposerNodeInfo__outbound_edges,  // fetch(index, &value) function pointer
    assign_function__TaskComposerNodeInfo__outbound_edges,  // assign(index, value) function pointer
    resize_function__TaskComposerNodeInfo__outbound_edges  // resize(index) function pointer
  },
  {
    "input_keys",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::TaskComposerNodeInfo, input_keys),  // bytes offset in struct
    nullptr,  // default value
    size_function__TaskComposerNodeInfo__input_keys,  // size() function pointer
    get_const_function__TaskComposerNodeInfo__input_keys,  // get_const(index) function pointer
    get_function__TaskComposerNodeInfo__input_keys,  // get(index) function pointer
    fetch_function__TaskComposerNodeInfo__input_keys,  // fetch(index, &value) function pointer
    assign_function__TaskComposerNodeInfo__input_keys,  // assign(index, value) function pointer
    resize_function__TaskComposerNodeInfo__input_keys  // resize(index) function pointer
  },
  {
    "output_keys",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::TaskComposerNodeInfo, output_keys),  // bytes offset in struct
    nullptr,  // default value
    size_function__TaskComposerNodeInfo__output_keys,  // size() function pointer
    get_const_function__TaskComposerNodeInfo__output_keys,  // get_const(index) function pointer
    get_function__TaskComposerNodeInfo__output_keys,  // get(index) function pointer
    fetch_function__TaskComposerNodeInfo__output_keys,  // fetch(index, &value) function pointer
    assign_function__TaskComposerNodeInfo__output_keys,  // assign(index, value) function pointer
    resize_function__TaskComposerNodeInfo__output_keys  // resize(index) function pointer
  },
  {
    "return_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::TaskComposerNodeInfo, return_value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::TaskComposerNodeInfo, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "elapsed_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::TaskComposerNodeInfo, elapsed_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TaskComposerNodeInfo_message_members = {
  "tesseract_msgs::msg",  // message namespace
  "TaskComposerNodeInfo",  // message name
  9,  // number of fields
  sizeof(tesseract_msgs::msg::TaskComposerNodeInfo),
  TaskComposerNodeInfo_message_member_array,  // message members
  TaskComposerNodeInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  TaskComposerNodeInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TaskComposerNodeInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TaskComposerNodeInfo_message_members,
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
get_message_type_support_handle<tesseract_msgs::msg::TaskComposerNodeInfo>()
{
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::TaskComposerNodeInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tesseract_msgs, msg, TaskComposerNodeInfo)() {
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::TaskComposerNodeInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
