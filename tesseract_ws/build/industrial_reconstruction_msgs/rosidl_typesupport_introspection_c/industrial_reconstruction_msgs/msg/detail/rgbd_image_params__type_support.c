// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from industrial_reconstruction_msgs:msg/RGBDImageParams.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "industrial_reconstruction_msgs/msg/detail/rgbd_image_params__rosidl_typesupport_introspection_c.h"
#include "industrial_reconstruction_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "industrial_reconstruction_msgs/msg/detail/rgbd_image_params__functions.h"
#include "industrial_reconstruction_msgs/msg/detail/rgbd_image_params__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void industrial_reconstruction_msgs__msg__RGBDImageParams__rosidl_typesupport_introspection_c__RGBDImageParams_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  industrial_reconstruction_msgs__msg__RGBDImageParams__init(message_memory);
}

void industrial_reconstruction_msgs__msg__RGBDImageParams__rosidl_typesupport_introspection_c__RGBDImageParams_fini_function(void * message_memory)
{
  industrial_reconstruction_msgs__msg__RGBDImageParams__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember industrial_reconstruction_msgs__msg__RGBDImageParams__rosidl_typesupport_introspection_c__RGBDImageParams_message_member_array[3] = {
  {
    "depth_scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_reconstruction_msgs__msg__RGBDImageParams, depth_scale),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth_trunc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_reconstruction_msgs__msg__RGBDImageParams, depth_trunc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "convert_rgb_to_intensity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_reconstruction_msgs__msg__RGBDImageParams, convert_rgb_to_intensity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers industrial_reconstruction_msgs__msg__RGBDImageParams__rosidl_typesupport_introspection_c__RGBDImageParams_message_members = {
  "industrial_reconstruction_msgs__msg",  // message namespace
  "RGBDImageParams",  // message name
  3,  // number of fields
  sizeof(industrial_reconstruction_msgs__msg__RGBDImageParams),
  industrial_reconstruction_msgs__msg__RGBDImageParams__rosidl_typesupport_introspection_c__RGBDImageParams_message_member_array,  // message members
  industrial_reconstruction_msgs__msg__RGBDImageParams__rosidl_typesupport_introspection_c__RGBDImageParams_init_function,  // function to initialize message memory (memory has to be allocated)
  industrial_reconstruction_msgs__msg__RGBDImageParams__rosidl_typesupport_introspection_c__RGBDImageParams_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t industrial_reconstruction_msgs__msg__RGBDImageParams__rosidl_typesupport_introspection_c__RGBDImageParams_message_type_support_handle = {
  0,
  &industrial_reconstruction_msgs__msg__RGBDImageParams__rosidl_typesupport_introspection_c__RGBDImageParams_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_industrial_reconstruction_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, industrial_reconstruction_msgs, msg, RGBDImageParams)() {
  if (!industrial_reconstruction_msgs__msg__RGBDImageParams__rosidl_typesupport_introspection_c__RGBDImageParams_message_type_support_handle.typesupport_identifier) {
    industrial_reconstruction_msgs__msg__RGBDImageParams__rosidl_typesupport_introspection_c__RGBDImageParams_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &industrial_reconstruction_msgs__msg__RGBDImageParams__rosidl_typesupport_introspection_c__RGBDImageParams_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
