// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/LinkGroup.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/detail/link_group__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/detail/link_group__functions.h"
#include "tesseract_msgs/msg/detail/link_group__struct.h"


// Include directives for member types
// Member `name`
// Member `links`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__LinkGroup_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__LinkGroup__init(message_memory);
}

void tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__LinkGroup_fini_function(void * message_memory)
{
  tesseract_msgs__msg__LinkGroup__fini(message_memory);
}

size_t tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__size_function__LinkGroup__links(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__get_const_function__LinkGroup__links(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__get_function__LinkGroup__links(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__fetch_function__LinkGroup__links(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__get_const_function__LinkGroup__links(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__assign_function__LinkGroup__links(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__get_function__LinkGroup__links(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__resize_function__LinkGroup__links(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__LinkGroup_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__LinkGroup, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "links",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__LinkGroup, links),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__size_function__LinkGroup__links,  // size() function pointer
    tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__get_const_function__LinkGroup__links,  // get_const(index) function pointer
    tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__get_function__LinkGroup__links,  // get(index) function pointer
    tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__fetch_function__LinkGroup__links,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__assign_function__LinkGroup__links,  // assign(index, value) function pointer
    tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__resize_function__LinkGroup__links  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__LinkGroup_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "LinkGroup",  // message name
  2,  // number of fields
  sizeof(tesseract_msgs__msg__LinkGroup),
  tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__LinkGroup_message_member_array,  // message members
  tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__LinkGroup_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__LinkGroup_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__LinkGroup_message_type_support_handle = {
  0,
  &tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__LinkGroup_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, LinkGroup)() {
  if (!tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__LinkGroup_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__LinkGroup_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__msg__LinkGroup__rosidl_typesupport_introspection_c__LinkGroup_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
