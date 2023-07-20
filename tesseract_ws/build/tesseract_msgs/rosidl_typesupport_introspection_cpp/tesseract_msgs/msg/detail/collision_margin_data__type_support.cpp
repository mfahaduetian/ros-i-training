// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tesseract_msgs:msg/CollisionMarginData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tesseract_msgs/msg/detail/collision_margin_data__struct.hpp"
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

void CollisionMarginData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tesseract_msgs::msg::CollisionMarginData(_init);
}

void CollisionMarginData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tesseract_msgs::msg::CollisionMarginData *>(message_memory);
  typed_message->~CollisionMarginData();
}

size_t size_function__CollisionMarginData__margin_pairs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tesseract_msgs::msg::ContactMarginPair> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CollisionMarginData__margin_pairs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tesseract_msgs::msg::ContactMarginPair> *>(untyped_member);
  return &member[index];
}

void * get_function__CollisionMarginData__margin_pairs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tesseract_msgs::msg::ContactMarginPair> *>(untyped_member);
  return &member[index];
}

void fetch_function__CollisionMarginData__margin_pairs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tesseract_msgs::msg::ContactMarginPair *>(
    get_const_function__CollisionMarginData__margin_pairs(untyped_member, index));
  auto & value = *reinterpret_cast<tesseract_msgs::msg::ContactMarginPair *>(untyped_value);
  value = item;
}

void assign_function__CollisionMarginData__margin_pairs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tesseract_msgs::msg::ContactMarginPair *>(
    get_function__CollisionMarginData__margin_pairs(untyped_member, index));
  const auto & value = *reinterpret_cast<const tesseract_msgs::msg::ContactMarginPair *>(untyped_value);
  item = value;
}

void resize_function__CollisionMarginData__margin_pairs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tesseract_msgs::msg::ContactMarginPair> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CollisionMarginData_message_member_array[2] = {
  {
    "default_margin",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::CollisionMarginData, default_margin),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "margin_pairs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::ContactMarginPair>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::CollisionMarginData, margin_pairs),  // bytes offset in struct
    nullptr,  // default value
    size_function__CollisionMarginData__margin_pairs,  // size() function pointer
    get_const_function__CollisionMarginData__margin_pairs,  // get_const(index) function pointer
    get_function__CollisionMarginData__margin_pairs,  // get(index) function pointer
    fetch_function__CollisionMarginData__margin_pairs,  // fetch(index, &value) function pointer
    assign_function__CollisionMarginData__margin_pairs,  // assign(index, value) function pointer
    resize_function__CollisionMarginData__margin_pairs  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CollisionMarginData_message_members = {
  "tesseract_msgs::msg",  // message namespace
  "CollisionMarginData",  // message name
  2,  // number of fields
  sizeof(tesseract_msgs::msg::CollisionMarginData),
  CollisionMarginData_message_member_array,  // message members
  CollisionMarginData_init_function,  // function to initialize message memory (memory has to be allocated)
  CollisionMarginData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CollisionMarginData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CollisionMarginData_message_members,
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
get_message_type_support_handle<tesseract_msgs::msg::CollisionMarginData>()
{
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::CollisionMarginData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tesseract_msgs, msg, CollisionMarginData)() {
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::CollisionMarginData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
