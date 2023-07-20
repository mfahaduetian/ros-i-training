// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tesseract_msgs:msg/PlanningResponse.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/planning_response__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tesseract_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tesseract_msgs/msg/detail/planning_response__struct.h"
#include "tesseract_msgs/msg/detail/planning_response__functions.h"
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

#include "rosidl_runtime_c/string.h"  // dotgraph, results, status_string
#include "rosidl_runtime_c/string_functions.h"  // dotgraph, results, status_string
#include "tesseract_msgs/msg/detail/string_double_pair__functions.h"  // initial_state

// forward declare type support functions
size_t get_serialized_size_tesseract_msgs__msg__StringDoublePair(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__StringDoublePair(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, StringDoublePair)();


using _PlanningResponse__ros_msg_type = tesseract_msgs__msg__PlanningResponse;

static bool _PlanningResponse__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlanningResponse__ros_msg_type * ros_message = static_cast<const _PlanningResponse__ros_msg_type *>(untyped_ros_message);
  // Field name: results
  {
    const rosidl_runtime_c__String * str = &ros_message->results;
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

  // Field name: initial_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, StringDoublePair
      )()->data);
    size_t size = ros_message->initial_state.size;
    auto array_ptr = ros_message->initial_state.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: dotgraph
  {
    const rosidl_runtime_c__String * str = &ros_message->dotgraph;
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

  // Field name: successful
  {
    cdr << (ros_message->successful ? true : false);
  }

  // Field name: status_string
  {
    const rosidl_runtime_c__String * str = &ros_message->status_string;
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

  return true;
}

static bool _PlanningResponse__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlanningResponse__ros_msg_type * ros_message = static_cast<_PlanningResponse__ros_msg_type *>(untyped_ros_message);
  // Field name: results
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->results.data) {
      rosidl_runtime_c__String__init(&ros_message->results);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->results,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'results'\n");
      return false;
    }
  }

  // Field name: initial_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, StringDoublePair
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->initial_state.data) {
      tesseract_msgs__msg__StringDoublePair__Sequence__fini(&ros_message->initial_state);
    }
    if (!tesseract_msgs__msg__StringDoublePair__Sequence__init(&ros_message->initial_state, size)) {
      fprintf(stderr, "failed to create array for field 'initial_state'");
      return false;
    }
    auto array_ptr = ros_message->initial_state.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: dotgraph
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->dotgraph.data) {
      rosidl_runtime_c__String__init(&ros_message->dotgraph);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->dotgraph,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'dotgraph'\n");
      return false;
    }
  }

  // Field name: successful
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->successful = tmp ? true : false;
  }

  // Field name: status_string
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->status_string.data) {
      rosidl_runtime_c__String__init(&ros_message->status_string);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->status_string,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'status_string'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tesseract_msgs
size_t get_serialized_size_tesseract_msgs__msg__PlanningResponse(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanningResponse__ros_msg_type * ros_message = static_cast<const _PlanningResponse__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name results
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->results.size + 1);
  // field.name initial_state
  {
    size_t array_size = ros_message->initial_state.size;
    auto array_ptr = ros_message->initial_state.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tesseract_msgs__msg__StringDoublePair(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name dotgraph
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->dotgraph.size + 1);
  // field.name successful
  {
    size_t item_size = sizeof(ros_message->successful);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_string
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->status_string.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _PlanningResponse__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tesseract_msgs__msg__PlanningResponse(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tesseract_msgs
size_t max_serialized_size_tesseract_msgs__msg__PlanningResponse(
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

  // member: results
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
  // member: initial_state
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
        max_serialized_size_tesseract_msgs__msg__StringDoublePair(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: dotgraph
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
  // member: successful
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_string
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

  return current_alignment - initial_alignment;
}

static size_t _PlanningResponse__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tesseract_msgs__msg__PlanningResponse(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlanningResponse = {
  "tesseract_msgs::msg",
  "PlanningResponse",
  _PlanningResponse__cdr_serialize,
  _PlanningResponse__cdr_deserialize,
  _PlanningResponse__get_serialized_size,
  _PlanningResponse__max_serialized_size
};

static rosidl_message_type_support_t _PlanningResponse__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlanningResponse,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, PlanningResponse)() {
  return &_PlanningResponse__type_support;
}

#if defined(__cplusplus)
}
#endif
