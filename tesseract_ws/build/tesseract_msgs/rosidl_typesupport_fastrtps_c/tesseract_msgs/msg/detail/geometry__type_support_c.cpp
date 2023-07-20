// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tesseract_msgs:msg/Geometry.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/geometry__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tesseract_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tesseract_msgs/msg/detail/geometry__struct.h"
#include "tesseract_msgs/msg/detail/geometry__functions.h"
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

#include "octomap_msgs/msg/detail/octomap__functions.h"  // octomap
#include "tesseract_msgs/msg/detail/mesh__functions.h"  // mesh
#include "tesseract_msgs/msg/detail/octree_sub_type__functions.h"  // octomap_sub_type

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tesseract_msgs
size_t get_serialized_size_octomap_msgs__msg__Octomap(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tesseract_msgs
size_t max_serialized_size_octomap_msgs__msg__Octomap(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tesseract_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, octomap_msgs, msg, Octomap)();
size_t get_serialized_size_tesseract_msgs__msg__Mesh(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__Mesh(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, Mesh)();
size_t get_serialized_size_tesseract_msgs__msg__OctreeSubType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__OctreeSubType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, OctreeSubType)();


using _Geometry__ros_msg_type = tesseract_msgs__msg__Geometry;

static bool _Geometry__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Geometry__ros_msg_type * ros_message = static_cast<const _Geometry__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: sphere_radius
  {
    cdr << ros_message->sphere_radius;
  }

  // Field name: cylinder_dimensions
  {
    size_t size = 2;
    auto array_ptr = ros_message->cylinder_dimensions;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: capsule_dimensions
  {
    size_t size = 2;
    auto array_ptr = ros_message->capsule_dimensions;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cone_dimensions
  {
    size_t size = 2;
    auto array_ptr = ros_message->cone_dimensions;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: box_dimensions
  {
    size_t size = 3;
    auto array_ptr = ros_message->box_dimensions;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: plane_coeff
  {
    size_t size = 4;
    auto array_ptr = ros_message->plane_coeff;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: mesh
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, Mesh
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->mesh, cdr))
    {
      return false;
    }
  }

  // Field name: octomap
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, octomap_msgs, msg, Octomap
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->octomap, cdr))
    {
      return false;
    }
  }

  // Field name: octomap_sub_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, OctreeSubType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->octomap_sub_type, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Geometry__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Geometry__ros_msg_type * ros_message = static_cast<_Geometry__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: sphere_radius
  {
    cdr >> ros_message->sphere_radius;
  }

  // Field name: cylinder_dimensions
  {
    size_t size = 2;
    auto array_ptr = ros_message->cylinder_dimensions;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: capsule_dimensions
  {
    size_t size = 2;
    auto array_ptr = ros_message->capsule_dimensions;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cone_dimensions
  {
    size_t size = 2;
    auto array_ptr = ros_message->cone_dimensions;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: box_dimensions
  {
    size_t size = 3;
    auto array_ptr = ros_message->box_dimensions;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: plane_coeff
  {
    size_t size = 4;
    auto array_ptr = ros_message->plane_coeff;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: mesh
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, Mesh
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->mesh))
    {
      return false;
    }
  }

  // Field name: octomap
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, octomap_msgs, msg, Octomap
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->octomap))
    {
      return false;
    }
  }

  // Field name: octomap_sub_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, OctreeSubType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->octomap_sub_type))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tesseract_msgs
size_t get_serialized_size_tesseract_msgs__msg__Geometry(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Geometry__ros_msg_type * ros_message = static_cast<const _Geometry__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sphere_radius
  {
    size_t item_size = sizeof(ros_message->sphere_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cylinder_dimensions
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->cylinder_dimensions;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name capsule_dimensions
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->capsule_dimensions;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cone_dimensions
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->cone_dimensions;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name box_dimensions
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->box_dimensions;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name plane_coeff
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->plane_coeff;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mesh

  current_alignment += get_serialized_size_tesseract_msgs__msg__Mesh(
    &(ros_message->mesh), current_alignment);
  // field.name octomap

  current_alignment += get_serialized_size_octomap_msgs__msg__Octomap(
    &(ros_message->octomap), current_alignment);
  // field.name octomap_sub_type

  current_alignment += get_serialized_size_tesseract_msgs__msg__OctreeSubType(
    &(ros_message->octomap_sub_type), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Geometry__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tesseract_msgs__msg__Geometry(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tesseract_msgs
size_t max_serialized_size_tesseract_msgs__msg__Geometry(
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

  // member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sphere_radius
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cylinder_dimensions
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: capsule_dimensions
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cone_dimensions
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: box_dimensions
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: plane_coeff
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: mesh
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__Mesh(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: octomap
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_octomap_msgs__msg__Octomap(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: octomap_sub_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__OctreeSubType(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Geometry__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tesseract_msgs__msg__Geometry(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Geometry = {
  "tesseract_msgs::msg",
  "Geometry",
  _Geometry__cdr_serialize,
  _Geometry__cdr_deserialize,
  _Geometry__get_serialized_size,
  _Geometry__max_serialized_size
};

static rosidl_message_type_support_t _Geometry__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Geometry,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, Geometry)() {
  return &_Geometry__type_support;
}

#if defined(__cplusplus)
}
#endif
