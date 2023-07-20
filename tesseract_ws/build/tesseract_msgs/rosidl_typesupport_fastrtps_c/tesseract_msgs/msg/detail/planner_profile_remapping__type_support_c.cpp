// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tesseract_msgs:msg/PlannerProfileRemapping.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/planner_profile_remapping__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tesseract_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tesseract_msgs/msg/detail/planner_profile_remapping__struct.h"
#include "tesseract_msgs/msg/detail/planner_profile_remapping__functions.h"
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

#include "rosidl_runtime_c/string.h"  // planner
#include "rosidl_runtime_c/string_functions.h"  // planner
#include "tesseract_msgs/msg/detail/profile_map__functions.h"  // mapping

// forward declare type support functions
size_t get_serialized_size_tesseract_msgs__msg__ProfileMap(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__ProfileMap(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, ProfileMap)();


using _PlannerProfileRemapping__ros_msg_type = tesseract_msgs__msg__PlannerProfileRemapping;

static bool _PlannerProfileRemapping__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlannerProfileRemapping__ros_msg_type * ros_message = static_cast<const _PlannerProfileRemapping__ros_msg_type *>(untyped_ros_message);
  // Field name: planner
  {
    size_t size = ros_message->planner.size;
    auto array_ptr = ros_message->planner.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: mapping
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, ProfileMap
      )()->data);
    size_t size = ros_message->mapping.size;
    auto array_ptr = ros_message->mapping.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _PlannerProfileRemapping__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlannerProfileRemapping__ros_msg_type * ros_message = static_cast<_PlannerProfileRemapping__ros_msg_type *>(untyped_ros_message);
  // Field name: planner
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->planner.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->planner);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->planner, size)) {
      fprintf(stderr, "failed to create array for field 'planner'");
      return false;
    }
    auto array_ptr = ros_message->planner.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'planner'\n");
        return false;
      }
    }
  }

  // Field name: mapping
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, ProfileMap
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->mapping.data) {
      tesseract_msgs__msg__ProfileMap__Sequence__fini(&ros_message->mapping);
    }
    if (!tesseract_msgs__msg__ProfileMap__Sequence__init(&ros_message->mapping, size)) {
      fprintf(stderr, "failed to create array for field 'mapping'");
      return false;
    }
    auto array_ptr = ros_message->mapping.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tesseract_msgs
size_t get_serialized_size_tesseract_msgs__msg__PlannerProfileRemapping(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlannerProfileRemapping__ros_msg_type * ros_message = static_cast<const _PlannerProfileRemapping__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name planner
  {
    size_t array_size = ros_message->planner.size;
    auto array_ptr = ros_message->planner.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name mapping
  {
    size_t array_size = ros_message->mapping.size;
    auto array_ptr = ros_message->mapping.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tesseract_msgs__msg__ProfileMap(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PlannerProfileRemapping__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tesseract_msgs__msg__PlannerProfileRemapping(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tesseract_msgs
size_t max_serialized_size_tesseract_msgs__msg__PlannerProfileRemapping(
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

  // member: planner
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: mapping
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__ProfileMap(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PlannerProfileRemapping__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tesseract_msgs__msg__PlannerProfileRemapping(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlannerProfileRemapping = {
  "tesseract_msgs::msg",
  "PlannerProfileRemapping",
  _PlannerProfileRemapping__cdr_serialize,
  _PlannerProfileRemapping__cdr_deserialize,
  _PlannerProfileRemapping__get_serialized_size,
  _PlannerProfileRemapping__max_serialized_size
};

static rosidl_message_type_support_t _PlannerProfileRemapping__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlannerProfileRemapping,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, PlannerProfileRemapping)() {
  return &_PlannerProfileRemapping__type_support;
}

#if defined(__cplusplus)
}
#endif
