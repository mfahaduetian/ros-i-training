// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from industrial_reconstruction_msgs:msg/NormalFilterParams.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "industrial_reconstruction_msgs/msg/detail/normal_filter_params__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace industrial_reconstruction_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void NormalFilterParams_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) industrial_reconstruction_msgs::msg::NormalFilterParams(_init);
}

void NormalFilterParams_fini_function(void * message_memory)
{
  auto typed_message = static_cast<industrial_reconstruction_msgs::msg::NormalFilterParams *>(message_memory);
  typed_message->~NormalFilterParams();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NormalFilterParams_message_member_array[2] = {
  {
    "normal_direction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_reconstruction_msgs::msg::NormalFilterParams, normal_direction),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_reconstruction_msgs::msg::NormalFilterParams, angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NormalFilterParams_message_members = {
  "industrial_reconstruction_msgs::msg",  // message namespace
  "NormalFilterParams",  // message name
  2,  // number of fields
  sizeof(industrial_reconstruction_msgs::msg::NormalFilterParams),
  NormalFilterParams_message_member_array,  // message members
  NormalFilterParams_init_function,  // function to initialize message memory (memory has to be allocated)
  NormalFilterParams_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NormalFilterParams_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NormalFilterParams_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace industrial_reconstruction_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<industrial_reconstruction_msgs::msg::NormalFilterParams>()
{
  return &::industrial_reconstruction_msgs::msg::rosidl_typesupport_introspection_cpp::NormalFilterParams_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, industrial_reconstruction_msgs, msg, NormalFilterParams)() {
  return &::industrial_reconstruction_msgs::msg::rosidl_typesupport_introspection_cpp::NormalFilterParams_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
