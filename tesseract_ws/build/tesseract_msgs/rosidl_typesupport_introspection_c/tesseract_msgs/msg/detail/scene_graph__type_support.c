// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/SceneGraph.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/detail/scene_graph__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/detail/scene_graph__functions.h"
#include "tesseract_msgs/msg/detail/scene_graph__struct.h"


// Include directives for member types
// Member `id`
// Member `root`
// Member `invisible_links`
// Member `disabled_collision_links`
#include "rosidl_runtime_c/string_functions.h"
// Member `links`
#include "tesseract_msgs/msg/link.h"
// Member `links`
#include "tesseract_msgs/msg/detail/link__rosidl_typesupport_introspection_c.h"
// Member `joints`
#include "tesseract_msgs/msg/joint.h"
// Member `joints`
#include "tesseract_msgs/msg/detail/joint__rosidl_typesupport_introspection_c.h"
// Member `acm`
#include "tesseract_msgs/msg/allowed_collision_entry.h"
// Member `acm`
#include "tesseract_msgs/msg/detail/allowed_collision_entry__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__SceneGraph__init(message_memory);
}

void tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_fini_function(void * message_memory)
{
  tesseract_msgs__msg__SceneGraph__fini(message_memory);
}

size_t tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__size_function__SceneGraph__links(
  const void * untyped_member)
{
  const tesseract_msgs__msg__Link__Sequence * member =
    (const tesseract_msgs__msg__Link__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_const_function__SceneGraph__links(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__Link__Sequence * member =
    (const tesseract_msgs__msg__Link__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_function__SceneGraph__links(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__Link__Sequence * member =
    (tesseract_msgs__msg__Link__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__fetch_function__SceneGraph__links(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__Link * item =
    ((const tesseract_msgs__msg__Link *)
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_const_function__SceneGraph__links(untyped_member, index));
  tesseract_msgs__msg__Link * value =
    (tesseract_msgs__msg__Link *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__assign_function__SceneGraph__links(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__Link * item =
    ((tesseract_msgs__msg__Link *)
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_function__SceneGraph__links(untyped_member, index));
  const tesseract_msgs__msg__Link * value =
    (const tesseract_msgs__msg__Link *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__resize_function__SceneGraph__links(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__Link__Sequence * member =
    (tesseract_msgs__msg__Link__Sequence *)(untyped_member);
  tesseract_msgs__msg__Link__Sequence__fini(member);
  return tesseract_msgs__msg__Link__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__size_function__SceneGraph__joints(
  const void * untyped_member)
{
  const tesseract_msgs__msg__Joint__Sequence * member =
    (const tesseract_msgs__msg__Joint__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_const_function__SceneGraph__joints(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__Joint__Sequence * member =
    (const tesseract_msgs__msg__Joint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_function__SceneGraph__joints(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__Joint__Sequence * member =
    (tesseract_msgs__msg__Joint__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__fetch_function__SceneGraph__joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__Joint * item =
    ((const tesseract_msgs__msg__Joint *)
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_const_function__SceneGraph__joints(untyped_member, index));
  tesseract_msgs__msg__Joint * value =
    (tesseract_msgs__msg__Joint *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__assign_function__SceneGraph__joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__Joint * item =
    ((tesseract_msgs__msg__Joint *)
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_function__SceneGraph__joints(untyped_member, index));
  const tesseract_msgs__msg__Joint * value =
    (const tesseract_msgs__msg__Joint *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__resize_function__SceneGraph__joints(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__Joint__Sequence * member =
    (tesseract_msgs__msg__Joint__Sequence *)(untyped_member);
  tesseract_msgs__msg__Joint__Sequence__fini(member);
  return tesseract_msgs__msg__Joint__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__size_function__SceneGraph__invisible_links(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_const_function__SceneGraph__invisible_links(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_function__SceneGraph__invisible_links(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__fetch_function__SceneGraph__invisible_links(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_const_function__SceneGraph__invisible_links(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__assign_function__SceneGraph__invisible_links(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_function__SceneGraph__invisible_links(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__resize_function__SceneGraph__invisible_links(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__size_function__SceneGraph__disabled_collision_links(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_const_function__SceneGraph__disabled_collision_links(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_function__SceneGraph__disabled_collision_links(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__fetch_function__SceneGraph__disabled_collision_links(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_const_function__SceneGraph__disabled_collision_links(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__assign_function__SceneGraph__disabled_collision_links(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_function__SceneGraph__disabled_collision_links(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__resize_function__SceneGraph__disabled_collision_links(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__size_function__SceneGraph__acm(
  const void * untyped_member)
{
  const tesseract_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (const tesseract_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_const_function__SceneGraph__acm(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (const tesseract_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_function__SceneGraph__acm(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (tesseract_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__fetch_function__SceneGraph__acm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__AllowedCollisionEntry * item =
    ((const tesseract_msgs__msg__AllowedCollisionEntry *)
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_const_function__SceneGraph__acm(untyped_member, index));
  tesseract_msgs__msg__AllowedCollisionEntry * value =
    (tesseract_msgs__msg__AllowedCollisionEntry *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__assign_function__SceneGraph__acm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__AllowedCollisionEntry * item =
    ((tesseract_msgs__msg__AllowedCollisionEntry *)
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_function__SceneGraph__acm(untyped_member, index));
  const tesseract_msgs__msg__AllowedCollisionEntry * value =
    (const tesseract_msgs__msg__AllowedCollisionEntry *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__resize_function__SceneGraph__acm(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (tesseract_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence__fini(member);
  return tesseract_msgs__msg__AllowedCollisionEntry__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_member_array[7] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__SceneGraph, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "root",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__SceneGraph, root),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__SceneGraph, links),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__size_function__SceneGraph__links,  // size() function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_const_function__SceneGraph__links,  // get_const(index) function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_function__SceneGraph__links,  // get(index) function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__fetch_function__SceneGraph__links,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__assign_function__SceneGraph__links,  // assign(index, value) function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__resize_function__SceneGraph__links  // resize(index) function pointer
  },
  {
    "joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__SceneGraph, joints),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__size_function__SceneGraph__joints,  // size() function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_const_function__SceneGraph__joints,  // get_const(index) function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_function__SceneGraph__joints,  // get(index) function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__fetch_function__SceneGraph__joints,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__assign_function__SceneGraph__joints,  // assign(index, value) function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__resize_function__SceneGraph__joints  // resize(index) function pointer
  },
  {
    "invisible_links",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__SceneGraph, invisible_links),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__size_function__SceneGraph__invisible_links,  // size() function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_const_function__SceneGraph__invisible_links,  // get_const(index) function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_function__SceneGraph__invisible_links,  // get(index) function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__fetch_function__SceneGraph__invisible_links,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__assign_function__SceneGraph__invisible_links,  // assign(index, value) function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__resize_function__SceneGraph__invisible_links  // resize(index) function pointer
  },
  {
    "disabled_collision_links",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__SceneGraph, disabled_collision_links),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__size_function__SceneGraph__disabled_collision_links,  // size() function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_const_function__SceneGraph__disabled_collision_links,  // get_const(index) function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_function__SceneGraph__disabled_collision_links,  // get(index) function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__fetch_function__SceneGraph__disabled_collision_links,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__assign_function__SceneGraph__disabled_collision_links,  // assign(index, value) function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__resize_function__SceneGraph__disabled_collision_links  // resize(index) function pointer
  },
  {
    "acm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__SceneGraph, acm),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__size_function__SceneGraph__acm,  // size() function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_const_function__SceneGraph__acm,  // get_const(index) function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__get_function__SceneGraph__acm,  // get(index) function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__fetch_function__SceneGraph__acm,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__assign_function__SceneGraph__acm,  // assign(index, value) function pointer
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__resize_function__SceneGraph__acm  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "SceneGraph",  // message name
  7,  // number of fields
  sizeof(tesseract_msgs__msg__SceneGraph),
  tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_member_array,  // message members
  tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_type_support_handle = {
  0,
  &tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, SceneGraph)() {
  tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Link)();
  tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Joint)();
  tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, AllowedCollisionEntry)();
  if (!tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__msg__SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
