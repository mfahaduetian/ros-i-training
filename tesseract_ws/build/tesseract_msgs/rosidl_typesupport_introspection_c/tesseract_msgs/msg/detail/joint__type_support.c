// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/Joint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/detail/joint__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/detail/joint__functions.h"
#include "tesseract_msgs/msg/detail/joint__struct.h"


// Include directives for member types
// Member `name`
// Member `child_link_name`
// Member `parent_link_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `parent_to_joint_origin_transform`
#include "geometry_msgs/msg/pose.h"
// Member `parent_to_joint_origin_transform`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `limits`
#include "tesseract_msgs/msg/joint_limits.h"
// Member `limits`
#include "tesseract_msgs/msg/detail/joint_limits__rosidl_typesupport_introspection_c.h"
// Member `dynamics`
#include "tesseract_msgs/msg/joint_dynamics.h"
// Member `dynamics`
#include "tesseract_msgs/msg/detail/joint_dynamics__rosidl_typesupport_introspection_c.h"
// Member `safety`
#include "tesseract_msgs/msg/joint_safety.h"
// Member `safety`
#include "tesseract_msgs/msg/detail/joint_safety__rosidl_typesupport_introspection_c.h"
// Member `calibration`
#include "tesseract_msgs/msg/joint_calibration.h"
// Member `calibration`
#include "tesseract_msgs/msg/detail/joint_calibration__rosidl_typesupport_introspection_c.h"
// Member `mimic`
#include "tesseract_msgs/msg/joint_mimic.h"
// Member `mimic`
#include "tesseract_msgs/msg/detail/joint_mimic__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__Joint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__Joint__init(message_memory);
}

void tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__Joint_fini_function(void * message_memory)
{
  tesseract_msgs__msg__Joint__fini(message_memory);
}

size_t tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__size_function__Joint__axis(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__get_const_function__Joint__axis(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__get_function__Joint__axis(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__fetch_function__Joint__axis(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__get_const_function__Joint__axis(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__assign_function__Joint__axis(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__get_function__Joint__axis(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_member_array[11] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Joint, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Joint, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "axis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Joint, axis),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__size_function__Joint__axis,  // size() function pointer
    tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__get_const_function__Joint__axis,  // get_const(index) function pointer
    tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__get_function__Joint__axis,  // get(index) function pointer
    tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__fetch_function__Joint__axis,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__assign_function__Joint__axis,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "child_link_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Joint, child_link_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parent_link_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Joint, parent_link_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parent_to_joint_origin_transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Joint, parent_to_joint_origin_transform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Joint, limits),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dynamics",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Joint, dynamics),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "safety",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Joint, safety),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "calibration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Joint, calibration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mimic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Joint, mimic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "Joint",  // message name
  11,  // number of fields
  sizeof(tesseract_msgs__msg__Joint),
  tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_member_array,  // message members
  tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__Joint_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__Joint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_type_support_handle = {
  0,
  &tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Joint)() {
  tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, JointLimits)();
  tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, JointDynamics)();
  tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, JointSafety)();
  tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, JointCalibration)();
  tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, JointMimic)();
  if (!tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__msg__Joint__rosidl_typesupport_introspection_c__Joint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
