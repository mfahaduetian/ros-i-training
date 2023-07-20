// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/TaskComposerNodeInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/detail/task_composer_node_info__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/detail/task_composer_node_info__functions.h"
#include "tesseract_msgs/msg/detail/task_composer_node_info__struct.h"


// Include directives for member types
// Member `name`
// Member `uuid`
// Member `inbound_edges`
// Member `outbound_edges`
// Member `input_keys`
// Member `output_keys`
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__TaskComposerNodeInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__TaskComposerNodeInfo__init(message_memory);
}

void tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__TaskComposerNodeInfo_fini_function(void * message_memory)
{
  tesseract_msgs__msg__TaskComposerNodeInfo__fini(message_memory);
}

size_t tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__size_function__TaskComposerNodeInfo__inbound_edges(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_const_function__TaskComposerNodeInfo__inbound_edges(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_function__TaskComposerNodeInfo__inbound_edges(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__fetch_function__TaskComposerNodeInfo__inbound_edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_const_function__TaskComposerNodeInfo__inbound_edges(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__assign_function__TaskComposerNodeInfo__inbound_edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_function__TaskComposerNodeInfo__inbound_edges(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__resize_function__TaskComposerNodeInfo__inbound_edges(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__size_function__TaskComposerNodeInfo__outbound_edges(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_const_function__TaskComposerNodeInfo__outbound_edges(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_function__TaskComposerNodeInfo__outbound_edges(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__fetch_function__TaskComposerNodeInfo__outbound_edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_const_function__TaskComposerNodeInfo__outbound_edges(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__assign_function__TaskComposerNodeInfo__outbound_edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_function__TaskComposerNodeInfo__outbound_edges(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__resize_function__TaskComposerNodeInfo__outbound_edges(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__size_function__TaskComposerNodeInfo__input_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_const_function__TaskComposerNodeInfo__input_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_function__TaskComposerNodeInfo__input_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__fetch_function__TaskComposerNodeInfo__input_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_const_function__TaskComposerNodeInfo__input_keys(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__assign_function__TaskComposerNodeInfo__input_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_function__TaskComposerNodeInfo__input_keys(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__resize_function__TaskComposerNodeInfo__input_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__size_function__TaskComposerNodeInfo__output_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_const_function__TaskComposerNodeInfo__output_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_function__TaskComposerNodeInfo__output_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__fetch_function__TaskComposerNodeInfo__output_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_const_function__TaskComposerNodeInfo__output_keys(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__assign_function__TaskComposerNodeInfo__output_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_function__TaskComposerNodeInfo__output_keys(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__resize_function__TaskComposerNodeInfo__output_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__TaskComposerNodeInfo_message_member_array[9] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__TaskComposerNodeInfo, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uuid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__TaskComposerNodeInfo, uuid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "inbound_edges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__TaskComposerNodeInfo, inbound_edges),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__size_function__TaskComposerNodeInfo__inbound_edges,  // size() function pointer
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_const_function__TaskComposerNodeInfo__inbound_edges,  // get_const(index) function pointer
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_function__TaskComposerNodeInfo__inbound_edges,  // get(index) function pointer
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__fetch_function__TaskComposerNodeInfo__inbound_edges,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__assign_function__TaskComposerNodeInfo__inbound_edges,  // assign(index, value) function pointer
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__resize_function__TaskComposerNodeInfo__inbound_edges  // resize(index) function pointer
  },
  {
    "outbound_edges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__TaskComposerNodeInfo, outbound_edges),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__size_function__TaskComposerNodeInfo__outbound_edges,  // size() function pointer
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_const_function__TaskComposerNodeInfo__outbound_edges,  // get_const(index) function pointer
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_function__TaskComposerNodeInfo__outbound_edges,  // get(index) function pointer
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__fetch_function__TaskComposerNodeInfo__outbound_edges,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__assign_function__TaskComposerNodeInfo__outbound_edges,  // assign(index, value) function pointer
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__resize_function__TaskComposerNodeInfo__outbound_edges  // resize(index) function pointer
  },
  {
    "input_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__TaskComposerNodeInfo, input_keys),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__size_function__TaskComposerNodeInfo__input_keys,  // size() function pointer
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_const_function__TaskComposerNodeInfo__input_keys,  // get_const(index) function pointer
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_function__TaskComposerNodeInfo__input_keys,  // get(index) function pointer
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__fetch_function__TaskComposerNodeInfo__input_keys,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__assign_function__TaskComposerNodeInfo__input_keys,  // assign(index, value) function pointer
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__resize_function__TaskComposerNodeInfo__input_keys  // resize(index) function pointer
  },
  {
    "output_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__TaskComposerNodeInfo, output_keys),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__size_function__TaskComposerNodeInfo__output_keys,  // size() function pointer
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_const_function__TaskComposerNodeInfo__output_keys,  // get_const(index) function pointer
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__get_function__TaskComposerNodeInfo__output_keys,  // get(index) function pointer
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__fetch_function__TaskComposerNodeInfo__output_keys,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__assign_function__TaskComposerNodeInfo__output_keys,  // assign(index, value) function pointer
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__resize_function__TaskComposerNodeInfo__output_keys  // resize(index) function pointer
  },
  {
    "return_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__TaskComposerNodeInfo, return_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__TaskComposerNodeInfo, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elapsed_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__TaskComposerNodeInfo, elapsed_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__TaskComposerNodeInfo_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "TaskComposerNodeInfo",  // message name
  9,  // number of fields
  sizeof(tesseract_msgs__msg__TaskComposerNodeInfo),
  tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__TaskComposerNodeInfo_message_member_array,  // message members
  tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__TaskComposerNodeInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__TaskComposerNodeInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__TaskComposerNodeInfo_message_type_support_handle = {
  0,
  &tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__TaskComposerNodeInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, TaskComposerNodeInfo)() {
  if (!tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__TaskComposerNodeInfo_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__TaskComposerNodeInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__msg__TaskComposerNodeInfo__rosidl_typesupport_introspection_c__TaskComposerNodeInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
