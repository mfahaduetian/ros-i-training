// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tesseract_msgs:msg/ContactResultVector.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tesseract_msgs/msg/detail/contact_result_vector__struct.hpp"
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

void ContactResultVector_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tesseract_msgs::msg::ContactResultVector(_init);
}

void ContactResultVector_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tesseract_msgs::msg::ContactResultVector *>(message_memory);
  typed_message->~ContactResultVector();
}

size_t size_function__ContactResultVector__contacts(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tesseract_msgs::msg::ContactResult> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ContactResultVector__contacts(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tesseract_msgs::msg::ContactResult> *>(untyped_member);
  return &member[index];
}

void * get_function__ContactResultVector__contacts(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tesseract_msgs::msg::ContactResult> *>(untyped_member);
  return &member[index];
}

void fetch_function__ContactResultVector__contacts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tesseract_msgs::msg::ContactResult *>(
    get_const_function__ContactResultVector__contacts(untyped_member, index));
  auto & value = *reinterpret_cast<tesseract_msgs::msg::ContactResult *>(untyped_value);
  value = item;
}

void assign_function__ContactResultVector__contacts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tesseract_msgs::msg::ContactResult *>(
    get_function__ContactResultVector__contacts(untyped_member, index));
  const auto & value = *reinterpret_cast<const tesseract_msgs::msg::ContactResult *>(untyped_value);
  item = value;
}

void resize_function__ContactResultVector__contacts(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tesseract_msgs::msg::ContactResult> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ContactResultVector_message_member_array[1] = {
  {
    "contacts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::ContactResult>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::ContactResultVector, contacts),  // bytes offset in struct
    nullptr,  // default value
    size_function__ContactResultVector__contacts,  // size() function pointer
    get_const_function__ContactResultVector__contacts,  // get_const(index) function pointer
    get_function__ContactResultVector__contacts,  // get(index) function pointer
    fetch_function__ContactResultVector__contacts,  // fetch(index, &value) function pointer
    assign_function__ContactResultVector__contacts,  // assign(index, value) function pointer
    resize_function__ContactResultVector__contacts  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ContactResultVector_message_members = {
  "tesseract_msgs::msg",  // message namespace
  "ContactResultVector",  // message name
  1,  // number of fields
  sizeof(tesseract_msgs::msg::ContactResultVector),
  ContactResultVector_message_member_array,  // message members
  ContactResultVector_init_function,  // function to initialize message memory (memory has to be allocated)
  ContactResultVector_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ContactResultVector_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ContactResultVector_message_members,
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
get_message_type_support_handle<tesseract_msgs::msg::ContactResultVector>()
{
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::ContactResultVector_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tesseract_msgs, msg, ContactResultVector)() {
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::ContactResultVector_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
