// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/Geometry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/detail/geometry__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/detail/geometry__functions.h"
#include "tesseract_msgs/msg/detail/geometry__struct.h"


// Include directives for member types
// Member `mesh`
#include "tesseract_msgs/msg/mesh.h"
// Member `mesh`
#include "tesseract_msgs/msg/detail/mesh__rosidl_typesupport_introspection_c.h"
// Member `octomap`
#include "octomap_msgs/msg/octomap.h"
// Member `octomap`
#include "octomap_msgs/msg/detail/octomap__rosidl_typesupport_introspection_c.h"
// Member `octomap_sub_type`
#include "tesseract_msgs/msg/octree_sub_type.h"
// Member `octomap_sub_type`
#include "tesseract_msgs/msg/detail/octree_sub_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__Geometry_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__Geometry__init(message_memory);
}

void tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__Geometry_fini_function(void * message_memory)
{
  tesseract_msgs__msg__Geometry__fini(message_memory);
}

size_t tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__size_function__Geometry__cylinder_dimensions(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_const_function__Geometry__cylinder_dimensions(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_function__Geometry__cylinder_dimensions(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__fetch_function__Geometry__cylinder_dimensions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_const_function__Geometry__cylinder_dimensions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__assign_function__Geometry__cylinder_dimensions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_function__Geometry__cylinder_dimensions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__size_function__Geometry__capsule_dimensions(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_const_function__Geometry__capsule_dimensions(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_function__Geometry__capsule_dimensions(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__fetch_function__Geometry__capsule_dimensions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_const_function__Geometry__capsule_dimensions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__assign_function__Geometry__capsule_dimensions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_function__Geometry__capsule_dimensions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__size_function__Geometry__cone_dimensions(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_const_function__Geometry__cone_dimensions(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_function__Geometry__cone_dimensions(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__fetch_function__Geometry__cone_dimensions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_const_function__Geometry__cone_dimensions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__assign_function__Geometry__cone_dimensions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_function__Geometry__cone_dimensions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__size_function__Geometry__box_dimensions(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_const_function__Geometry__box_dimensions(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_function__Geometry__box_dimensions(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__fetch_function__Geometry__box_dimensions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_const_function__Geometry__box_dimensions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__assign_function__Geometry__box_dimensions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_function__Geometry__box_dimensions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__size_function__Geometry__plane_coeff(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_const_function__Geometry__plane_coeff(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_function__Geometry__plane_coeff(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__fetch_function__Geometry__plane_coeff(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_const_function__Geometry__plane_coeff(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__assign_function__Geometry__plane_coeff(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_function__Geometry__plane_coeff(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__Geometry_message_member_array[10] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Geometry, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sphere_radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Geometry, sphere_radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cylinder_dimensions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Geometry, cylinder_dimensions),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__size_function__Geometry__cylinder_dimensions,  // size() function pointer
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_const_function__Geometry__cylinder_dimensions,  // get_const(index) function pointer
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_function__Geometry__cylinder_dimensions,  // get(index) function pointer
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__fetch_function__Geometry__cylinder_dimensions,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__assign_function__Geometry__cylinder_dimensions,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "capsule_dimensions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Geometry, capsule_dimensions),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__size_function__Geometry__capsule_dimensions,  // size() function pointer
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_const_function__Geometry__capsule_dimensions,  // get_const(index) function pointer
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_function__Geometry__capsule_dimensions,  // get(index) function pointer
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__fetch_function__Geometry__capsule_dimensions,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__assign_function__Geometry__capsule_dimensions,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cone_dimensions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Geometry, cone_dimensions),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__size_function__Geometry__cone_dimensions,  // size() function pointer
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_const_function__Geometry__cone_dimensions,  // get_const(index) function pointer
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_function__Geometry__cone_dimensions,  // get(index) function pointer
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__fetch_function__Geometry__cone_dimensions,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__assign_function__Geometry__cone_dimensions,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "box_dimensions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Geometry, box_dimensions),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__size_function__Geometry__box_dimensions,  // size() function pointer
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_const_function__Geometry__box_dimensions,  // get_const(index) function pointer
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_function__Geometry__box_dimensions,  // get(index) function pointer
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__fetch_function__Geometry__box_dimensions,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__assign_function__Geometry__box_dimensions,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plane_coeff",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Geometry, plane_coeff),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__size_function__Geometry__plane_coeff,  // size() function pointer
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_const_function__Geometry__plane_coeff,  // get_const(index) function pointer
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__get_function__Geometry__plane_coeff,  // get(index) function pointer
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__fetch_function__Geometry__plane_coeff,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__assign_function__Geometry__plane_coeff,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mesh",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Geometry, mesh),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "octomap",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Geometry, octomap),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "octomap_sub_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Geometry, octomap_sub_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__Geometry_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "Geometry",  // message name
  10,  // number of fields
  sizeof(tesseract_msgs__msg__Geometry),
  tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__Geometry_message_member_array,  // message members
  tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__Geometry_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__Geometry_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__Geometry_message_type_support_handle = {
  0,
  &tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__Geometry_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Geometry)() {
  tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__Geometry_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Mesh)();
  tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__Geometry_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_msgs, msg, Octomap)();
  tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__Geometry_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, OctreeSubType)();
  if (!tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__Geometry_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__Geometry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__msg__Geometry__rosidl_typesupport_introspection_c__Geometry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
