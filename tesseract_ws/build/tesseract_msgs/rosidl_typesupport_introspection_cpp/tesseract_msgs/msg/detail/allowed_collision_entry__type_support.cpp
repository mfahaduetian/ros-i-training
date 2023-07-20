// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tesseract_msgs:msg/AllowedCollisionEntry.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tesseract_msgs/msg/detail/allowed_collision_entry__struct.hpp"
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

void AllowedCollisionEntry_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tesseract_msgs::msg::AllowedCollisionEntry(_init);
}

void AllowedCollisionEntry_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tesseract_msgs::msg::AllowedCollisionEntry *>(message_memory);
  typed_message->~AllowedCollisionEntry();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AllowedCollisionEntry_message_member_array[3] = {
  {
    "link_1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::AllowedCollisionEntry, link_1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "link_2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::AllowedCollisionEntry, link_2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reason",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::AllowedCollisionEntry, reason),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AllowedCollisionEntry_message_members = {
  "tesseract_msgs::msg",  // message namespace
  "AllowedCollisionEntry",  // message name
  3,  // number of fields
  sizeof(tesseract_msgs::msg::AllowedCollisionEntry),
  AllowedCollisionEntry_message_member_array,  // message members
  AllowedCollisionEntry_init_function,  // function to initialize message memory (memory has to be allocated)
  AllowedCollisionEntry_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AllowedCollisionEntry_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AllowedCollisionEntry_message_members,
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
get_message_type_support_handle<tesseract_msgs::msg::AllowedCollisionEntry>()
{
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::AllowedCollisionEntry_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tesseract_msgs, msg, AllowedCollisionEntry)() {
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::AllowedCollisionEntry_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
