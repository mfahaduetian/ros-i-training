// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tesseract_msgs:msg/StringPair.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tesseract_msgs/msg/detail/string_pair__struct.hpp"
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

void StringPair_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tesseract_msgs::msg::StringPair(_init);
}

void StringPair_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tesseract_msgs::msg::StringPair *>(message_memory);
  typed_message->~StringPair();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StringPair_message_member_array[2] = {
  {
    "first",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::StringPair, first),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "second",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::StringPair, second),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StringPair_message_members = {
  "tesseract_msgs::msg",  // message namespace
  "StringPair",  // message name
  2,  // number of fields
  sizeof(tesseract_msgs::msg::StringPair),
  StringPair_message_member_array,  // message members
  StringPair_init_function,  // function to initialize message memory (memory has to be allocated)
  StringPair_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StringPair_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StringPair_message_members,
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
get_message_type_support_handle<tesseract_msgs::msg::StringPair>()
{
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::StringPair_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tesseract_msgs, msg, StringPair)() {
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::StringPair_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
