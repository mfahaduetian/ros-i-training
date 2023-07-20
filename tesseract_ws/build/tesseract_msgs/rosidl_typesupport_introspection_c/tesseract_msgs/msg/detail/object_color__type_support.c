// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/ObjectColor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/detail/object_color__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/detail/object_color__functions.h"
#include "tesseract_msgs/msg/detail/object_color__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `visual`
// Member `collision`
#include "std_msgs/msg/color_rgba.h"
// Member `visual`
// Member `collision`
#include "std_msgs/msg/detail/color_rgba__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__ObjectColor__init(message_memory);
}

void tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_fini_function(void * message_memory)
{
  tesseract_msgs__msg__ObjectColor__fini(message_memory);
}

size_t tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__size_function__ObjectColor__visual(
  const void * untyped_member)
{
  const std_msgs__msg__ColorRGBA__Sequence * member =
    (const std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__get_const_function__ObjectColor__visual(
  const void * untyped_member, size_t index)
{
  const std_msgs__msg__ColorRGBA__Sequence * member =
    (const std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__get_function__ObjectColor__visual(
  void * untyped_member, size_t index)
{
  std_msgs__msg__ColorRGBA__Sequence * member =
    (std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__fetch_function__ObjectColor__visual(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const std_msgs__msg__ColorRGBA * item =
    ((const std_msgs__msg__ColorRGBA *)
    tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__get_const_function__ObjectColor__visual(untyped_member, index));
  std_msgs__msg__ColorRGBA * value =
    (std_msgs__msg__ColorRGBA *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__assign_function__ObjectColor__visual(
  void * untyped_member, size_t index, const void * untyped_value)
{
  std_msgs__msg__ColorRGBA * item =
    ((std_msgs__msg__ColorRGBA *)
    tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__get_function__ObjectColor__visual(untyped_member, index));
  const std_msgs__msg__ColorRGBA * value =
    (const std_msgs__msg__ColorRGBA *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__resize_function__ObjectColor__visual(
  void * untyped_member, size_t size)
{
  std_msgs__msg__ColorRGBA__Sequence * member =
    (std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  std_msgs__msg__ColorRGBA__Sequence__fini(member);
  return std_msgs__msg__ColorRGBA__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__size_function__ObjectColor__collision(
  const void * untyped_member)
{
  const std_msgs__msg__ColorRGBA__Sequence * member =
    (const std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__get_const_function__ObjectColor__collision(
  const void * untyped_member, size_t index)
{
  const std_msgs__msg__ColorRGBA__Sequence * member =
    (const std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__get_function__ObjectColor__collision(
  void * untyped_member, size_t index)
{
  std_msgs__msg__ColorRGBA__Sequence * member =
    (std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__fetch_function__ObjectColor__collision(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const std_msgs__msg__ColorRGBA * item =
    ((const std_msgs__msg__ColorRGBA *)
    tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__get_const_function__ObjectColor__collision(untyped_member, index));
  std_msgs__msg__ColorRGBA * value =
    (std_msgs__msg__ColorRGBA *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__assign_function__ObjectColor__collision(
  void * untyped_member, size_t index, const void * untyped_value)
{
  std_msgs__msg__ColorRGBA * item =
    ((std_msgs__msg__ColorRGBA *)
    tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__get_function__ObjectColor__collision(untyped_member, index));
  const std_msgs__msg__ColorRGBA * value =
    (const std_msgs__msg__ColorRGBA *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__resize_function__ObjectColor__collision(
  void * untyped_member, size_t size)
{
  std_msgs__msg__ColorRGBA__Sequence * member =
    (std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  std_msgs__msg__ColorRGBA__Sequence__fini(member);
  return std_msgs__msg__ColorRGBA__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ObjectColor, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "visual",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ObjectColor, visual),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__size_function__ObjectColor__visual,  // size() function pointer
    tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__get_const_function__ObjectColor__visual,  // get_const(index) function pointer
    tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__get_function__ObjectColor__visual,  // get(index) function pointer
    tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__fetch_function__ObjectColor__visual,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__assign_function__ObjectColor__visual,  // assign(index, value) function pointer
    tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__resize_function__ObjectColor__visual  // resize(index) function pointer
  },
  {
    "collision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ObjectColor, collision),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__size_function__ObjectColor__collision,  // size() function pointer
    tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__get_const_function__ObjectColor__collision,  // get_const(index) function pointer
    tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__get_function__ObjectColor__collision,  // get(index) function pointer
    tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__fetch_function__ObjectColor__collision,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__assign_function__ObjectColor__collision,  // assign(index, value) function pointer
    tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__resize_function__ObjectColor__collision  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "ObjectColor",  // message name
  3,  // number of fields
  sizeof(tesseract_msgs__msg__ObjectColor),
  tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_message_member_array,  // message members
  tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_message_type_support_handle = {
  0,
  &tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, ObjectColor)() {
  tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, ColorRGBA)();
  tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, ColorRGBA)();
  if (!tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__msg__ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
