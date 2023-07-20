// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from snp_msgs:msg/ToolPath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "snp_msgs/msg/detail/tool_path__rosidl_typesupport_introspection_c.h"
#include "snp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "snp_msgs/msg/detail/tool_path__functions.h"
#include "snp_msgs/msg/detail/tool_path__struct.h"


// Include directives for member types
// Member `segments`
#include "geometry_msgs/msg/pose_array.h"
// Member `segments`
#include "geometry_msgs/msg/detail/pose_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__ToolPath_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  snp_msgs__msg__ToolPath__init(message_memory);
}

void snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__ToolPath_fini_function(void * message_memory)
{
  snp_msgs__msg__ToolPath__fini(message_memory);
}

size_t snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__size_function__ToolPath__segments(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseArray__Sequence * member =
    (const geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  return member->size;
}

const void * snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__get_const_function__ToolPath__segments(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseArray__Sequence * member =
    (const geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__get_function__ToolPath__segments(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseArray__Sequence * member =
    (geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__fetch_function__ToolPath__segments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__PoseArray * item =
    ((const geometry_msgs__msg__PoseArray *)
    snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__get_const_function__ToolPath__segments(untyped_member, index));
  geometry_msgs__msg__PoseArray * value =
    (geometry_msgs__msg__PoseArray *)(untyped_value);
  *value = *item;
}

void snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__assign_function__ToolPath__segments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__PoseArray * item =
    ((geometry_msgs__msg__PoseArray *)
    snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__get_function__ToolPath__segments(untyped_member, index));
  const geometry_msgs__msg__PoseArray * value =
    (const geometry_msgs__msg__PoseArray *)(untyped_value);
  *item = *value;
}

bool snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__resize_function__ToolPath__segments(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseArray__Sequence * member =
    (geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseArray__Sequence__fini(member);
  return geometry_msgs__msg__PoseArray__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__ToolPath_message_member_array[1] = {
  {
    "segments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs__msg__ToolPath, segments),  // bytes offset in struct
    NULL,  // default value
    snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__size_function__ToolPath__segments,  // size() function pointer
    snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__get_const_function__ToolPath__segments,  // get_const(index) function pointer
    snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__get_function__ToolPath__segments,  // get(index) function pointer
    snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__fetch_function__ToolPath__segments,  // fetch(index, &value) function pointer
    snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__assign_function__ToolPath__segments,  // assign(index, value) function pointer
    snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__resize_function__ToolPath__segments  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__ToolPath_message_members = {
  "snp_msgs__msg",  // message namespace
  "ToolPath",  // message name
  1,  // number of fields
  sizeof(snp_msgs__msg__ToolPath),
  snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__ToolPath_message_member_array,  // message members
  snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__ToolPath_init_function,  // function to initialize message memory (memory has to be allocated)
  snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__ToolPath_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__ToolPath_message_type_support_handle = {
  0,
  &snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__ToolPath_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_snp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, msg, ToolPath)() {
  snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__ToolPath_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseArray)();
  if (!snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__ToolPath_message_type_support_handle.typesupport_identifier) {
    snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__ToolPath_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &snp_msgs__msg__ToolPath__rosidl_typesupport_introspection_c__ToolPath_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
