// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/Link.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/detail/link__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/detail/link__functions.h"
#include "tesseract_msgs/msg/detail/link__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `inertial`
#include "tesseract_msgs/msg/inertial.h"
// Member `inertial`
#include "tesseract_msgs/msg/detail/inertial__rosidl_typesupport_introspection_c.h"
// Member `visual`
#include "tesseract_msgs/msg/visual_geometry.h"
// Member `visual`
#include "tesseract_msgs/msg/detail/visual_geometry__rosidl_typesupport_introspection_c.h"
// Member `collision`
#include "tesseract_msgs/msg/collision_geometry.h"
// Member `collision`
#include "tesseract_msgs/msg/detail/collision_geometry__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__Link__init(message_memory);
}

void tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_fini_function(void * message_memory)
{
  tesseract_msgs__msg__Link__fini(message_memory);
}

size_t tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__visual(
  const void * untyped_member)
{
  const tesseract_msgs__msg__VisualGeometry__Sequence * member =
    (const tesseract_msgs__msg__VisualGeometry__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__visual(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__VisualGeometry__Sequence * member =
    (const tesseract_msgs__msg__VisualGeometry__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__visual(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__VisualGeometry__Sequence * member =
    (tesseract_msgs__msg__VisualGeometry__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__visual(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__VisualGeometry * item =
    ((const tesseract_msgs__msg__VisualGeometry *)
    tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__visual(untyped_member, index));
  tesseract_msgs__msg__VisualGeometry * value =
    (tesseract_msgs__msg__VisualGeometry *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__visual(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__VisualGeometry * item =
    ((tesseract_msgs__msg__VisualGeometry *)
    tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__visual(untyped_member, index));
  const tesseract_msgs__msg__VisualGeometry * value =
    (const tesseract_msgs__msg__VisualGeometry *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__resize_function__Link__visual(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__VisualGeometry__Sequence * member =
    (tesseract_msgs__msg__VisualGeometry__Sequence *)(untyped_member);
  tesseract_msgs__msg__VisualGeometry__Sequence__fini(member);
  return tesseract_msgs__msg__VisualGeometry__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__collision(
  const void * untyped_member)
{
  const tesseract_msgs__msg__CollisionGeometry__Sequence * member =
    (const tesseract_msgs__msg__CollisionGeometry__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__collision(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__CollisionGeometry__Sequence * member =
    (const tesseract_msgs__msg__CollisionGeometry__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__collision(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__CollisionGeometry__Sequence * member =
    (tesseract_msgs__msg__CollisionGeometry__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__collision(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__CollisionGeometry * item =
    ((const tesseract_msgs__msg__CollisionGeometry *)
    tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__collision(untyped_member, index));
  tesseract_msgs__msg__CollisionGeometry * value =
    (tesseract_msgs__msg__CollisionGeometry *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__collision(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__CollisionGeometry * item =
    ((tesseract_msgs__msg__CollisionGeometry *)
    tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__collision(untyped_member, index));
  const tesseract_msgs__msg__CollisionGeometry * value =
    (const tesseract_msgs__msg__CollisionGeometry *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__resize_function__Link__collision(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__CollisionGeometry__Sequence * member =
    (tesseract_msgs__msg__CollisionGeometry__Sequence *)(untyped_member);
  tesseract_msgs__msg__CollisionGeometry__Sequence__fini(member);
  return tesseract_msgs__msg__CollisionGeometry__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Link, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "inertial",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Link, inertial),  // bytes offset in struct
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
    offsetof(tesseract_msgs__msg__Link, visual),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__visual,  // size() function pointer
    tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__visual,  // get_const(index) function pointer
    tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__visual,  // get(index) function pointer
    tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__visual,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__visual,  // assign(index, value) function pointer
    tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__resize_function__Link__visual  // resize(index) function pointer
  },
  {
    "collision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Link, collision),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__collision,  // size() function pointer
    tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__collision,  // get_const(index) function pointer
    tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__collision,  // get(index) function pointer
    tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__collision,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__collision,  // assign(index, value) function pointer
    tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__resize_function__Link__collision  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "Link",  // message name
  4,  // number of fields
  sizeof(tesseract_msgs__msg__Link),
  tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array,  // message members
  tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle = {
  0,
  &tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Link)() {
  tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Inertial)();
  tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, VisualGeometry)();
  tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, CollisionGeometry)();
  if (!tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
