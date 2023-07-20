// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from industrial_reconstruction_msgs:msg/TSDFVolumeParams.idl
// generated code does not contain a copyright notice
#include "industrial_reconstruction_msgs/msg/detail/tsdf_volume_params__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "industrial_reconstruction_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "industrial_reconstruction_msgs/msg/detail/tsdf_volume_params__struct.h"
#include "industrial_reconstruction_msgs/msg/detail/tsdf_volume_params__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/vector3__functions.h"  // max_box_values, min_box_values

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_industrial_reconstruction_msgs
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_industrial_reconstruction_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_industrial_reconstruction_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();


using _TSDFVolumeParams__ros_msg_type = industrial_reconstruction_msgs__msg__TSDFVolumeParams;

static bool _TSDFVolumeParams__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TSDFVolumeParams__ros_msg_type * ros_message = static_cast<const _TSDFVolumeParams__ros_msg_type *>(untyped_ros_message);
  // Field name: voxel_length
  {
    cdr << ros_message->voxel_length;
  }

  // Field name: sdf_trunc
  {
    cdr << ros_message->sdf_trunc;
  }

  // Field name: min_box_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->min_box_values, cdr))
    {
      return false;
    }
  }

  // Field name: max_box_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->max_box_values, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TSDFVolumeParams__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TSDFVolumeParams__ros_msg_type * ros_message = static_cast<_TSDFVolumeParams__ros_msg_type *>(untyped_ros_message);
  // Field name: voxel_length
  {
    cdr >> ros_message->voxel_length;
  }

  // Field name: sdf_trunc
  {
    cdr >> ros_message->sdf_trunc;
  }

  // Field name: min_box_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->min_box_values))
    {
      return false;
    }
  }

  // Field name: max_box_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->max_box_values))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_industrial_reconstruction_msgs
size_t get_serialized_size_industrial_reconstruction_msgs__msg__TSDFVolumeParams(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TSDFVolumeParams__ros_msg_type * ros_message = static_cast<const _TSDFVolumeParams__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name voxel_length
  {
    size_t item_size = sizeof(ros_message->voxel_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sdf_trunc
  {
    size_t item_size = sizeof(ros_message->sdf_trunc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_box_values

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->min_box_values), current_alignment);
  // field.name max_box_values

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->max_box_values), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TSDFVolumeParams__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_industrial_reconstruction_msgs__msg__TSDFVolumeParams(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_industrial_reconstruction_msgs
size_t max_serialized_size_industrial_reconstruction_msgs__msg__TSDFVolumeParams(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: voxel_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sdf_trunc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: min_box_values
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: max_box_values
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TSDFVolumeParams__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_industrial_reconstruction_msgs__msg__TSDFVolumeParams(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TSDFVolumeParams = {
  "industrial_reconstruction_msgs::msg",
  "TSDFVolumeParams",
  _TSDFVolumeParams__cdr_serialize,
  _TSDFVolumeParams__cdr_deserialize,
  _TSDFVolumeParams__get_serialized_size,
  _TSDFVolumeParams__max_serialized_size
};

static rosidl_message_type_support_t _TSDFVolumeParams__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TSDFVolumeParams,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, industrial_reconstruction_msgs, msg, TSDFVolumeParams)() {
  return &_TSDFVolumeParams__type_support;
}

#if defined(__cplusplus)
}
#endif
