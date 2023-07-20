// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tesseract_msgs:msg/PlanningResponse.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tesseract_msgs/msg/detail/planning_response__struct.hpp"
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

void PlanningResponse_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tesseract_msgs::msg::PlanningResponse(_init);
}

void PlanningResponse_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tesseract_msgs::msg::PlanningResponse *>(message_memory);
  typed_message->~PlanningResponse();
}

size_t size_function__PlanningResponse__initial_state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tesseract_msgs::msg::StringDoublePair> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningResponse__initial_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tesseract_msgs::msg::StringDoublePair> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningResponse__initial_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tesseract_msgs::msg::StringDoublePair> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningResponse__initial_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tesseract_msgs::msg::StringDoublePair *>(
    get_const_function__PlanningResponse__initial_state(untyped_member, index));
  auto & value = *reinterpret_cast<tesseract_msgs::msg::StringDoublePair *>(untyped_value);
  value = item;
}

void assign_function__PlanningResponse__initial_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tesseract_msgs::msg::StringDoublePair *>(
    get_function__PlanningResponse__initial_state(untyped_member, index));
  const auto & value = *reinterpret_cast<const tesseract_msgs::msg::StringDoublePair *>(untyped_value);
  item = value;
}

void resize_function__PlanningResponse__initial_state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tesseract_msgs::msg::StringDoublePair> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PlanningResponse_message_member_array[5] = {
  {
    "results",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::PlanningResponse, results),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "initial_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::StringDoublePair>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::PlanningResponse, initial_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningResponse__initial_state,  // size() function pointer
    get_const_function__PlanningResponse__initial_state,  // get_const(index) function pointer
    get_function__PlanningResponse__initial_state,  // get(index) function pointer
    fetch_function__PlanningResponse__initial_state,  // fetch(index, &value) function pointer
    assign_function__PlanningResponse__initial_state,  // assign(index, value) function pointer
    resize_function__PlanningResponse__initial_state  // resize(index) function pointer
  },
  {
    "dotgraph",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::PlanningResponse, dotgraph),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "successful",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::PlanningResponse, successful),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status_string",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::PlanningResponse, status_string),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PlanningResponse_message_members = {
  "tesseract_msgs::msg",  // message namespace
  "PlanningResponse",  // message name
  5,  // number of fields
  sizeof(tesseract_msgs::msg::PlanningResponse),
  PlanningResponse_message_member_array,  // message members
  PlanningResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  PlanningResponse_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PlanningResponse_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PlanningResponse_message_members,
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
get_message_type_support_handle<tesseract_msgs::msg::PlanningResponse>()
{
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::PlanningResponse_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tesseract_msgs, msg, PlanningResponse)() {
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::PlanningResponse_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
