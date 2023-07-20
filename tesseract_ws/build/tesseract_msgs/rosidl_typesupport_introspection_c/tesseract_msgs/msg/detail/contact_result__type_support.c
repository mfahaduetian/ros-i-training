// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/ContactResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/detail/contact_result__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/detail/contact_result__functions.h"
#include "tesseract_msgs/msg/detail/contact_result__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `link_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `nearest_points`
// Member `nearest_points_local`
// Member `normal`
#include "geometry_msgs/msg/vector3.h"
// Member `nearest_points`
// Member `nearest_points_local`
// Member `normal`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `transform`
// Member `cc_transform`
#include "geometry_msgs/msg/pose.h"
// Member `transform`
// Member `cc_transform`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__ContactResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__ContactResult__init(message_memory);
}

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__ContactResult_fini_function(void * message_memory)
{
  tesseract_msgs__msg__ContactResult__fini(message_memory);
}

size_t tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__size_function__ContactResult__type_id(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__type_id(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__type_id(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__fetch_function__ContactResult__type_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__type_id(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__assign_function__ContactResult__type_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__type_id(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__size_function__ContactResult__link_names(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__link_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String * member =
    (const rosidl_runtime_c__String *)(untyped_member);
  return &member[index];
}

void * tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__link_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String * member =
    (rosidl_runtime_c__String *)(untyped_member);
  return &member[index];
}

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__fetch_function__ContactResult__link_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__link_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__assign_function__ContactResult__link_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__link_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

size_t tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__size_function__ContactResult__shape_id(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__shape_id(
  const void * untyped_member, size_t index)
{
  const uint64_t * member =
    (const uint64_t *)(untyped_member);
  return &member[index];
}

void * tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__shape_id(
  void * untyped_member, size_t index)
{
  uint64_t * member =
    (uint64_t *)(untyped_member);
  return &member[index];
}

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__fetch_function__ContactResult__shape_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__shape_id(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__assign_function__ContactResult__shape_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__shape_id(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

size_t tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__size_function__ContactResult__subshape_id(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__subshape_id(
  const void * untyped_member, size_t index)
{
  const uint64_t * member =
    (const uint64_t *)(untyped_member);
  return &member[index];
}

void * tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__subshape_id(
  void * untyped_member, size_t index)
{
  uint64_t * member =
    (uint64_t *)(untyped_member);
  return &member[index];
}

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__fetch_function__ContactResult__subshape_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__subshape_id(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__assign_function__ContactResult__subshape_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__subshape_id(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

size_t tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__size_function__ContactResult__nearest_points(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__nearest_points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3 * member =
    (const geometry_msgs__msg__Vector3 *)(untyped_member);
  return &member[index];
}

void * tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__nearest_points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3 * member =
    (geometry_msgs__msg__Vector3 *)(untyped_member);
  return &member[index];
}

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__fetch_function__ContactResult__nearest_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__nearest_points(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__assign_function__ContactResult__nearest_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__nearest_points(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

size_t tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__size_function__ContactResult__nearest_points_local(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__nearest_points_local(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3 * member =
    (const geometry_msgs__msg__Vector3 *)(untyped_member);
  return &member[index];
}

void * tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__nearest_points_local(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3 * member =
    (geometry_msgs__msg__Vector3 *)(untyped_member);
  return &member[index];
}

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__fetch_function__ContactResult__nearest_points_local(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__nearest_points_local(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__assign_function__ContactResult__nearest_points_local(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__nearest_points_local(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

size_t tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__size_function__ContactResult__transform(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__transform(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose * member =
    (const geometry_msgs__msg__Pose *)(untyped_member);
  return &member[index];
}

void * tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__transform(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose * member =
    (geometry_msgs__msg__Pose *)(untyped_member);
  return &member[index];
}

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__fetch_function__ContactResult__transform(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__transform(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__assign_function__ContactResult__transform(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__transform(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

size_t tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__size_function__ContactResult__cc_time(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__cc_time(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__cc_time(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__fetch_function__ContactResult__cc_time(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__cc_time(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__assign_function__ContactResult__cc_time(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__cc_time(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__size_function__ContactResult__cc_type(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__cc_type(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__cc_type(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__fetch_function__ContactResult__cc_type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__cc_type(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__assign_function__ContactResult__cc_type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__cc_type(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__size_function__ContactResult__cc_transform(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__cc_transform(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose * member =
    (const geometry_msgs__msg__Pose *)(untyped_member);
  return &member[index];
}

void * tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__cc_transform(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose * member =
    (geometry_msgs__msg__Pose *)(untyped_member);
  return &member[index];
}

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__fetch_function__ContactResult__cc_transform(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__cc_transform(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__assign_function__ContactResult__cc_transform(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__cc_transform(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_member_array[13] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, type_id),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__size_function__ContactResult__type_id,  // size() function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__type_id,  // get_const(index) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__type_id,  // get(index) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__fetch_function__ContactResult__type_id,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__assign_function__ContactResult__type_id,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, link_names),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__size_function__ContactResult__link_names,  // size() function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__link_names,  // get_const(index) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__link_names,  // get(index) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__fetch_function__ContactResult__link_names,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__assign_function__ContactResult__link_names,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shape_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, shape_id),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__size_function__ContactResult__shape_id,  // size() function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__shape_id,  // get_const(index) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__shape_id,  // get(index) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__fetch_function__ContactResult__shape_id,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__assign_function__ContactResult__shape_id,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subshape_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, subshape_id),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__size_function__ContactResult__subshape_id,  // size() function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__subshape_id,  // get_const(index) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__subshape_id,  // get(index) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__fetch_function__ContactResult__subshape_id,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__assign_function__ContactResult__subshape_id,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nearest_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, nearest_points),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__size_function__ContactResult__nearest_points,  // size() function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__nearest_points,  // get_const(index) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__nearest_points,  // get(index) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__fetch_function__ContactResult__nearest_points,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__assign_function__ContactResult__nearest_points,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nearest_points_local",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, nearest_points_local),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__size_function__ContactResult__nearest_points_local,  // size() function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__nearest_points_local,  // get_const(index) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__nearest_points_local,  // get(index) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__fetch_function__ContactResult__nearest_points_local,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__assign_function__ContactResult__nearest_points_local,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, transform),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__size_function__ContactResult__transform,  // size() function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__transform,  // get_const(index) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__transform,  // get(index) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__fetch_function__ContactResult__transform,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__assign_function__ContactResult__transform,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "normal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, normal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cc_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, cc_time),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__size_function__ContactResult__cc_time,  // size() function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__cc_time,  // get_const(index) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__cc_time,  // get(index) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__fetch_function__ContactResult__cc_time,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__assign_function__ContactResult__cc_time,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cc_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, cc_type),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__size_function__ContactResult__cc_type,  // size() function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__cc_type,  // get_const(index) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__cc_type,  // get(index) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__fetch_function__ContactResult__cc_type,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__assign_function__ContactResult__cc_type,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cc_transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, cc_transform),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__size_function__ContactResult__cc_transform,  // size() function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_const_function__ContactResult__cc_transform,  // get_const(index) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__get_function__ContactResult__cc_transform,  // get(index) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__fetch_function__ContactResult__cc_transform,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__assign_function__ContactResult__cc_transform,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "ContactResult",  // message name
  13,  // number of fields
  sizeof(tesseract_msgs__msg__ContactResult),
  tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_member_array,  // message members
  tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__ContactResult_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__ContactResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_type_support_handle = {
  0,
  &tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, ContactResult)() {
  tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__msg__ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
