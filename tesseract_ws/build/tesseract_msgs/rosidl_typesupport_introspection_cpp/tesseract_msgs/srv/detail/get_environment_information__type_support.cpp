// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tesseract_msgs:srv/GetEnvironmentInformation.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tesseract_msgs/srv/detail/get_environment_information__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tesseract_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetEnvironmentInformation_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tesseract_msgs::srv::GetEnvironmentInformation_Request(_init);
}

void GetEnvironmentInformation_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tesseract_msgs::srv::GetEnvironmentInformation_Request *>(message_memory);
  typed_message->~GetEnvironmentInformation_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetEnvironmentInformation_Request_message_member_array[1] = {
  {
    "flags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::srv::GetEnvironmentInformation_Request, flags),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetEnvironmentInformation_Request_message_members = {
  "tesseract_msgs::srv",  // message namespace
  "GetEnvironmentInformation_Request",  // message name
  1,  // number of fields
  sizeof(tesseract_msgs::srv::GetEnvironmentInformation_Request),
  GetEnvironmentInformation_Request_message_member_array,  // message members
  GetEnvironmentInformation_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetEnvironmentInformation_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetEnvironmentInformation_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetEnvironmentInformation_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tesseract_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tesseract_msgs::srv::GetEnvironmentInformation_Request>()
{
  return &::tesseract_msgs::srv::rosidl_typesupport_introspection_cpp::GetEnvironmentInformation_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tesseract_msgs, srv, GetEnvironmentInformation_Request)() {
  return &::tesseract_msgs::srv::rosidl_typesupport_introspection_cpp::GetEnvironmentInformation_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tesseract_msgs/srv/detail/get_environment_information__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tesseract_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetEnvironmentInformation_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tesseract_msgs::srv::GetEnvironmentInformation_Response(_init);
}

void GetEnvironmentInformation_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tesseract_msgs::srv::GetEnvironmentInformation_Response *>(message_memory);
  typed_message->~GetEnvironmentInformation_Response();
}

size_t size_function__GetEnvironmentInformation_Response__command_history(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tesseract_msgs::msg::EnvironmentCommand> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetEnvironmentInformation_Response__command_history(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tesseract_msgs::msg::EnvironmentCommand> *>(untyped_member);
  return &member[index];
}

void * get_function__GetEnvironmentInformation_Response__command_history(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tesseract_msgs::msg::EnvironmentCommand> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetEnvironmentInformation_Response__command_history(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tesseract_msgs::msg::EnvironmentCommand *>(
    get_const_function__GetEnvironmentInformation_Response__command_history(untyped_member, index));
  auto & value = *reinterpret_cast<tesseract_msgs::msg::EnvironmentCommand *>(untyped_value);
  value = item;
}

void assign_function__GetEnvironmentInformation_Response__command_history(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tesseract_msgs::msg::EnvironmentCommand *>(
    get_function__GetEnvironmentInformation_Response__command_history(untyped_member, index));
  const auto & value = *reinterpret_cast<const tesseract_msgs::msg::EnvironmentCommand *>(untyped_value);
  item = value;
}

void resize_function__GetEnvironmentInformation_Response__command_history(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tesseract_msgs::msg::EnvironmentCommand> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetEnvironmentInformation_Response__links(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tesseract_msgs::msg::Link> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetEnvironmentInformation_Response__links(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tesseract_msgs::msg::Link> *>(untyped_member);
  return &member[index];
}

void * get_function__GetEnvironmentInformation_Response__links(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tesseract_msgs::msg::Link> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetEnvironmentInformation_Response__links(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tesseract_msgs::msg::Link *>(
    get_const_function__GetEnvironmentInformation_Response__links(untyped_member, index));
  auto & value = *reinterpret_cast<tesseract_msgs::msg::Link *>(untyped_value);
  value = item;
}

void assign_function__GetEnvironmentInformation_Response__links(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tesseract_msgs::msg::Link *>(
    get_function__GetEnvironmentInformation_Response__links(untyped_member, index));
  const auto & value = *reinterpret_cast<const tesseract_msgs::msg::Link *>(untyped_value);
  item = value;
}

void resize_function__GetEnvironmentInformation_Response__links(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tesseract_msgs::msg::Link> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetEnvironmentInformation_Response__joints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tesseract_msgs::msg::Joint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetEnvironmentInformation_Response__joints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tesseract_msgs::msg::Joint> *>(untyped_member);
  return &member[index];
}

void * get_function__GetEnvironmentInformation_Response__joints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tesseract_msgs::msg::Joint> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetEnvironmentInformation_Response__joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tesseract_msgs::msg::Joint *>(
    get_const_function__GetEnvironmentInformation_Response__joints(untyped_member, index));
  auto & value = *reinterpret_cast<tesseract_msgs::msg::Joint *>(untyped_value);
  value = item;
}

void assign_function__GetEnvironmentInformation_Response__joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tesseract_msgs::msg::Joint *>(
    get_function__GetEnvironmentInformation_Response__joints(untyped_member, index));
  const auto & value = *reinterpret_cast<const tesseract_msgs::msg::Joint *>(untyped_value);
  item = value;
}

void resize_function__GetEnvironmentInformation_Response__joints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tesseract_msgs::msg::Joint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetEnvironmentInformation_Response__link_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetEnvironmentInformation_Response__link_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetEnvironmentInformation_Response__link_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetEnvironmentInformation_Response__link_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__GetEnvironmentInformation_Response__link_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__GetEnvironmentInformation_Response__link_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__GetEnvironmentInformation_Response__link_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__GetEnvironmentInformation_Response__link_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetEnvironmentInformation_Response__joint_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetEnvironmentInformation_Response__joint_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetEnvironmentInformation_Response__joint_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetEnvironmentInformation_Response__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__GetEnvironmentInformation_Response__joint_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__GetEnvironmentInformation_Response__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__GetEnvironmentInformation_Response__joint_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__GetEnvironmentInformation_Response__joint_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetEnvironmentInformation_Response__active_link_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetEnvironmentInformation_Response__active_link_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetEnvironmentInformation_Response__active_link_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetEnvironmentInformation_Response__active_link_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__GetEnvironmentInformation_Response__active_link_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__GetEnvironmentInformation_Response__active_link_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__GetEnvironmentInformation_Response__active_link_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__GetEnvironmentInformation_Response__active_link_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetEnvironmentInformation_Response__active_joint_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetEnvironmentInformation_Response__active_joint_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetEnvironmentInformation_Response__active_joint_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetEnvironmentInformation_Response__active_joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__GetEnvironmentInformation_Response__active_joint_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__GetEnvironmentInformation_Response__active_joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__GetEnvironmentInformation_Response__active_joint_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__GetEnvironmentInformation_Response__active_joint_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetEnvironmentInformation_Response__allowed_collision_matrix(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tesseract_msgs::msg::AllowedCollisionEntry> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetEnvironmentInformation_Response__allowed_collision_matrix(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tesseract_msgs::msg::AllowedCollisionEntry> *>(untyped_member);
  return &member[index];
}

void * get_function__GetEnvironmentInformation_Response__allowed_collision_matrix(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tesseract_msgs::msg::AllowedCollisionEntry> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetEnvironmentInformation_Response__allowed_collision_matrix(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tesseract_msgs::msg::AllowedCollisionEntry *>(
    get_const_function__GetEnvironmentInformation_Response__allowed_collision_matrix(untyped_member, index));
  auto & value = *reinterpret_cast<tesseract_msgs::msg::AllowedCollisionEntry *>(untyped_value);
  value = item;
}

void assign_function__GetEnvironmentInformation_Response__allowed_collision_matrix(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tesseract_msgs::msg::AllowedCollisionEntry *>(
    get_function__GetEnvironmentInformation_Response__allowed_collision_matrix(untyped_member, index));
  const auto & value = *reinterpret_cast<const tesseract_msgs::msg::AllowedCollisionEntry *>(untyped_value);
  item = value;
}

void resize_function__GetEnvironmentInformation_Response__allowed_collision_matrix(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tesseract_msgs::msg::AllowedCollisionEntry> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetEnvironmentInformation_Response_message_member_array[15] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::srv::GetEnvironmentInformation_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::srv::GetEnvironmentInformation_Response, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "revision",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::srv::GetEnvironmentInformation_Response, revision),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "command_history",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::EnvironmentCommand>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::srv::GetEnvironmentInformation_Response, command_history),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetEnvironmentInformation_Response__command_history,  // size() function pointer
    get_const_function__GetEnvironmentInformation_Response__command_history,  // get_const(index) function pointer
    get_function__GetEnvironmentInformation_Response__command_history,  // get(index) function pointer
    fetch_function__GetEnvironmentInformation_Response__command_history,  // fetch(index, &value) function pointer
    assign_function__GetEnvironmentInformation_Response__command_history,  // assign(index, value) function pointer
    resize_function__GetEnvironmentInformation_Response__command_history  // resize(index) function pointer
  },
  {
    "links",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::Link>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::srv::GetEnvironmentInformation_Response, links),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetEnvironmentInformation_Response__links,  // size() function pointer
    get_const_function__GetEnvironmentInformation_Response__links,  // get_const(index) function pointer
    get_function__GetEnvironmentInformation_Response__links,  // get(index) function pointer
    fetch_function__GetEnvironmentInformation_Response__links,  // fetch(index, &value) function pointer
    assign_function__GetEnvironmentInformation_Response__links,  // assign(index, value) function pointer
    resize_function__GetEnvironmentInformation_Response__links  // resize(index) function pointer
  },
  {
    "joints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::Joint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::srv::GetEnvironmentInformation_Response, joints),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetEnvironmentInformation_Response__joints,  // size() function pointer
    get_const_function__GetEnvironmentInformation_Response__joints,  // get_const(index) function pointer
    get_function__GetEnvironmentInformation_Response__joints,  // get(index) function pointer
    fetch_function__GetEnvironmentInformation_Response__joints,  // fetch(index, &value) function pointer
    assign_function__GetEnvironmentInformation_Response__joints,  // assign(index, value) function pointer
    resize_function__GetEnvironmentInformation_Response__joints  // resize(index) function pointer
  },
  {
    "link_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::srv::GetEnvironmentInformation_Response, link_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetEnvironmentInformation_Response__link_names,  // size() function pointer
    get_const_function__GetEnvironmentInformation_Response__link_names,  // get_const(index) function pointer
    get_function__GetEnvironmentInformation_Response__link_names,  // get(index) function pointer
    fetch_function__GetEnvironmentInformation_Response__link_names,  // fetch(index, &value) function pointer
    assign_function__GetEnvironmentInformation_Response__link_names,  // assign(index, value) function pointer
    resize_function__GetEnvironmentInformation_Response__link_names  // resize(index) function pointer
  },
  {
    "joint_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::srv::GetEnvironmentInformation_Response, joint_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetEnvironmentInformation_Response__joint_names,  // size() function pointer
    get_const_function__GetEnvironmentInformation_Response__joint_names,  // get_const(index) function pointer
    get_function__GetEnvironmentInformation_Response__joint_names,  // get(index) function pointer
    fetch_function__GetEnvironmentInformation_Response__joint_names,  // fetch(index, &value) function pointer
    assign_function__GetEnvironmentInformation_Response__joint_names,  // assign(index, value) function pointer
    resize_function__GetEnvironmentInformation_Response__joint_names  // resize(index) function pointer
  },
  {
    "active_link_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::srv::GetEnvironmentInformation_Response, active_link_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetEnvironmentInformation_Response__active_link_names,  // size() function pointer
    get_const_function__GetEnvironmentInformation_Response__active_link_names,  // get_const(index) function pointer
    get_function__GetEnvironmentInformation_Response__active_link_names,  // get(index) function pointer
    fetch_function__GetEnvironmentInformation_Response__active_link_names,  // fetch(index, &value) function pointer
    assign_function__GetEnvironmentInformation_Response__active_link_names,  // assign(index, value) function pointer
    resize_function__GetEnvironmentInformation_Response__active_link_names  // resize(index) function pointer
  },
  {
    "active_joint_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::srv::GetEnvironmentInformation_Response, active_joint_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetEnvironmentInformation_Response__active_joint_names,  // size() function pointer
    get_const_function__GetEnvironmentInformation_Response__active_joint_names,  // get_const(index) function pointer
    get_function__GetEnvironmentInformation_Response__active_joint_names,  // get(index) function pointer
    fetch_function__GetEnvironmentInformation_Response__active_joint_names,  // fetch(index, &value) function pointer
    assign_function__GetEnvironmentInformation_Response__active_joint_names,  // assign(index, value) function pointer
    resize_function__GetEnvironmentInformation_Response__active_joint_names  // resize(index) function pointer
  },
  {
    "link_transforms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::TransformMap>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::srv::GetEnvironmentInformation_Response, link_transforms),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_transforms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::TransformMap>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::srv::GetEnvironmentInformation_Response, joint_transforms),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "allowed_collision_matrix",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::AllowedCollisionEntry>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::srv::GetEnvironmentInformation_Response, allowed_collision_matrix),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetEnvironmentInformation_Response__allowed_collision_matrix,  // size() function pointer
    get_const_function__GetEnvironmentInformation_Response__allowed_collision_matrix,  // get_const(index) function pointer
    get_function__GetEnvironmentInformation_Response__allowed_collision_matrix,  // get(index) function pointer
    fetch_function__GetEnvironmentInformation_Response__allowed_collision_matrix,  // fetch(index, &value) function pointer
    assign_function__GetEnvironmentInformation_Response__allowed_collision_matrix,  // assign(index, value) function pointer
    resize_function__GetEnvironmentInformation_Response__allowed_collision_matrix  // resize(index) function pointer
  },
  {
    "kinematics_information",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::KinematicsInformation>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::srv::GetEnvironmentInformation_Response, kinematics_information),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::JointState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::srv::GetEnvironmentInformation_Response, joint_states),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetEnvironmentInformation_Response_message_members = {
  "tesseract_msgs::srv",  // message namespace
  "GetEnvironmentInformation_Response",  // message name
  15,  // number of fields
  sizeof(tesseract_msgs::srv::GetEnvironmentInformation_Response),
  GetEnvironmentInformation_Response_message_member_array,  // message members
  GetEnvironmentInformation_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetEnvironmentInformation_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetEnvironmentInformation_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetEnvironmentInformation_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tesseract_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tesseract_msgs::srv::GetEnvironmentInformation_Response>()
{
  return &::tesseract_msgs::srv::rosidl_typesupport_introspection_cpp::GetEnvironmentInformation_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tesseract_msgs, srv, GetEnvironmentInformation_Response)() {
  return &::tesseract_msgs::srv::rosidl_typesupport_introspection_cpp::GetEnvironmentInformation_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "tesseract_msgs/srv/detail/get_environment_information__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace tesseract_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetEnvironmentInformation_service_members = {
  "tesseract_msgs::srv",  // service namespace
  "GetEnvironmentInformation",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<tesseract_msgs::srv::GetEnvironmentInformation>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetEnvironmentInformation_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetEnvironmentInformation_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tesseract_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<tesseract_msgs::srv::GetEnvironmentInformation>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::tesseract_msgs::srv::rosidl_typesupport_introspection_cpp::GetEnvironmentInformation_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::tesseract_msgs::srv::GetEnvironmentInformation_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::tesseract_msgs::srv::GetEnvironmentInformation_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tesseract_msgs, srv, GetEnvironmentInformation)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<tesseract_msgs::srv::GetEnvironmentInformation>();
}

#ifdef __cplusplus
}
#endif
