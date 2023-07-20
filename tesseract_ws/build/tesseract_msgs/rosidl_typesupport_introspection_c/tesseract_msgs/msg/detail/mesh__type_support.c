// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/detail/mesh__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/detail/mesh__functions.h"
#include "tesseract_msgs/msg/detail/mesh__struct.h"


// Include directives for member types
// Member `vertices`
#include "geometry_msgs/msg/point.h"
// Member `vertices`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `faces`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `file_path`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__Mesh__init(message_memory);
}

void tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_fini_function(void * message_memory)
{
  tesseract_msgs__msg__Mesh__fini(message_memory);
}

size_t tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__size_function__Mesh__vertices(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__vertices(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__vertices(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__fetch_function__Mesh__vertices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__vertices(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__assign_function__Mesh__vertices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__vertices(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__resize_function__Mesh__vertices(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__size_function__Mesh__faces(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__faces(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__faces(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__fetch_function__Mesh__faces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__faces(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__assign_function__Mesh__faces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__faces(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__resize_function__Mesh__faces(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__size_function__Mesh__scale(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__scale(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__scale(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__fetch_function__Mesh__scale(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__scale(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__assign_function__Mesh__scale(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__scale(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_member_array[4] = {
  {
    "vertices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Mesh, vertices),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__size_function__Mesh__vertices,  // size() function pointer
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__vertices,  // get_const(index) function pointer
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__vertices,  // get(index) function pointer
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__fetch_function__Mesh__vertices,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__assign_function__Mesh__vertices,  // assign(index, value) function pointer
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__resize_function__Mesh__vertices  // resize(index) function pointer
  },
  {
    "faces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Mesh, faces),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__size_function__Mesh__faces,  // size() function pointer
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__faces,  // get_const(index) function pointer
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__faces,  // get(index) function pointer
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__fetch_function__Mesh__faces,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__assign_function__Mesh__faces,  // assign(index, value) function pointer
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__resize_function__Mesh__faces  // resize(index) function pointer
  },
  {
    "file_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Mesh, file_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Mesh, scale),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__size_function__Mesh__scale,  // size() function pointer
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_const_function__Mesh__scale,  // get_const(index) function pointer
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__get_function__Mesh__scale,  // get(index) function pointer
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__fetch_function__Mesh__scale,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__assign_function__Mesh__scale,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "Mesh",  // message name
  4,  // number of fields
  sizeof(tesseract_msgs__msg__Mesh),
  tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_member_array,  // message members
  tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_type_support_handle = {
  0,
  &tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Mesh)() {
  tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__msg__Mesh__rosidl_typesupport_introspection_c__Mesh_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
