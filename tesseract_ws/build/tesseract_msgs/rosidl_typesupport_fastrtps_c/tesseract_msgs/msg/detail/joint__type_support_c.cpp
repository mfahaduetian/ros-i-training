// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tesseract_msgs:msg/Joint.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/joint__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tesseract_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tesseract_msgs/msg/detail/joint__struct.h"
#include "tesseract_msgs/msg/detail/joint__functions.h"
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

#include "geometry_msgs/msg/detail/pose__functions.h"  // parent_to_joint_origin_transform
#include "rosidl_runtime_c/string.h"  // child_link_name, name, parent_link_name
#include "rosidl_runtime_c/string_functions.h"  // child_link_name, name, parent_link_name
#include "tesseract_msgs/msg/detail/joint_calibration__functions.h"  // calibration
#include "tesseract_msgs/msg/detail/joint_dynamics__functions.h"  // dynamics
#include "tesseract_msgs/msg/detail/joint_limits__functions.h"  // limits
#include "tesseract_msgs/msg/detail/joint_mimic__functions.h"  // mimic
#include "tesseract_msgs/msg/detail/joint_safety__functions.h"  // safety

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tesseract_msgs
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tesseract_msgs
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tesseract_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();
size_t get_serialized_size_tesseract_msgs__msg__JointCalibration(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__JointCalibration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointCalibration)();
size_t get_serialized_size_tesseract_msgs__msg__JointDynamics(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__JointDynamics(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointDynamics)();
size_t get_serialized_size_tesseract_msgs__msg__JointLimits(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__JointLimits(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointLimits)();
size_t get_serialized_size_tesseract_msgs__msg__JointMimic(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__JointMimic(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointMimic)();
size_t get_serialized_size_tesseract_msgs__msg__JointSafety(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__JointSafety(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointSafety)();


using _Joint__ros_msg_type = tesseract_msgs__msg__Joint;

static bool _Joint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Joint__ros_msg_type * ros_message = static_cast<const _Joint__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: axis
  {
    size_t size = 3;
    auto array_ptr = ros_message->axis;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: child_link_name
  {
    const rosidl_runtime_c__String * str = &ros_message->child_link_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: parent_link_name
  {
    const rosidl_runtime_c__String * str = &ros_message->parent_link_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: parent_to_joint_origin_transform
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->parent_to_joint_origin_transform, cdr))
    {
      return false;
    }
  }

  // Field name: limits
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointLimits
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->limits, cdr))
    {
      return false;
    }
  }

  // Field name: dynamics
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointDynamics
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->dynamics, cdr))
    {
      return false;
    }
  }

  // Field name: safety
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointSafety
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->safety, cdr))
    {
      return false;
    }
  }

  // Field name: calibration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointCalibration
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->calibration, cdr))
    {
      return false;
    }
  }

  // Field name: mimic
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointMimic
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->mimic, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Joint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Joint__ros_msg_type * ros_message = static_cast<_Joint__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: axis
  {
    size_t size = 3;
    auto array_ptr = ros_message->axis;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: child_link_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->child_link_name.data) {
      rosidl_runtime_c__String__init(&ros_message->child_link_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->child_link_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'child_link_name'\n");
      return false;
    }
  }

  // Field name: parent_link_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->parent_link_name.data) {
      rosidl_runtime_c__String__init(&ros_message->parent_link_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->parent_link_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'parent_link_name'\n");
      return false;
    }
  }

  // Field name: parent_to_joint_origin_transform
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->parent_to_joint_origin_transform))
    {
      return false;
    }
  }

  // Field name: limits
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointLimits
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->limits))
    {
      return false;
    }
  }

  // Field name: dynamics
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointDynamics
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->dynamics))
    {
      return false;
    }
  }

  // Field name: safety
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointSafety
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->safety))
    {
      return false;
    }
  }

  // Field name: calibration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointCalibration
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->calibration))
    {
      return false;
    }
  }

  // Field name: mimic
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointMimic
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->mimic))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tesseract_msgs
size_t get_serialized_size_tesseract_msgs__msg__Joint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Joint__ros_msg_type * ros_message = static_cast<const _Joint__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name axis
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->axis;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name child_link_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->child_link_name.size + 1);
  // field.name parent_link_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->parent_link_name.size + 1);
  // field.name parent_to_joint_origin_transform

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->parent_to_joint_origin_transform), current_alignment);
  // field.name limits

  current_alignment += get_serialized_size_tesseract_msgs__msg__JointLimits(
    &(ros_message->limits), current_alignment);
  // field.name dynamics

  current_alignment += get_serialized_size_tesseract_msgs__msg__JointDynamics(
    &(ros_message->dynamics), current_alignment);
  // field.name safety

  current_alignment += get_serialized_size_tesseract_msgs__msg__JointSafety(
    &(ros_message->safety), current_alignment);
  // field.name calibration

  current_alignment += get_serialized_size_tesseract_msgs__msg__JointCalibration(
    &(ros_message->calibration), current_alignment);
  // field.name mimic

  current_alignment += get_serialized_size_tesseract_msgs__msg__JointMimic(
    &(ros_message->mimic), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Joint__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tesseract_msgs__msg__Joint(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tesseract_msgs
size_t max_serialized_size_tesseract_msgs__msg__Joint(
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

  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: axis
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: child_link_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: parent_link_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: parent_to_joint_origin_transform
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: limits
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__JointLimits(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: dynamics
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__JointDynamics(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: safety
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__JointSafety(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: calibration
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__JointCalibration(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: mimic
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__JointMimic(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Joint__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tesseract_msgs__msg__Joint(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Joint = {
  "tesseract_msgs::msg",
  "Joint",
  _Joint__cdr_serialize,
  _Joint__cdr_deserialize,
  _Joint__get_serialized_size,
  _Joint__max_serialized_size
};

static rosidl_message_type_support_t _Joint__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Joint,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, Joint)() {
  return &_Joint__type_support;
}

#if defined(__cplusplus)
}
#endif
