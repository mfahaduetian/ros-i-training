// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tesseract_msgs:msg/JointLimits.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/joint_limits__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tesseract_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tesseract_msgs/msg/detail/joint_limits__struct.h"
#include "tesseract_msgs/msg/detail/joint_limits__functions.h"
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


// forward declare type support functions


using _JointLimits__ros_msg_type = tesseract_msgs__msg__JointLimits;

static bool _JointLimits__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointLimits__ros_msg_type * ros_message = static_cast<const _JointLimits__ros_msg_type *>(untyped_ros_message);
  // Field name: lower
  {
    cdr << ros_message->lower;
  }

  // Field name: upper
  {
    cdr << ros_message->upper;
  }

  // Field name: effort
  {
    cdr << ros_message->effort;
  }

  // Field name: velocity
  {
    cdr << ros_message->velocity;
  }

  // Field name: acceleration
  {
    cdr << ros_message->acceleration;
  }

  // Field name: empty
  {
    cdr << (ros_message->empty ? true : false);
  }

  return true;
}

static bool _JointLimits__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointLimits__ros_msg_type * ros_message = static_cast<_JointLimits__ros_msg_type *>(untyped_ros_message);
  // Field name: lower
  {
    cdr >> ros_message->lower;
  }

  // Field name: upper
  {
    cdr >> ros_message->upper;
  }

  // Field name: effort
  {
    cdr >> ros_message->effort;
  }

  // Field name: velocity
  {
    cdr >> ros_message->velocity;
  }

  // Field name: acceleration
  {
    cdr >> ros_message->acceleration;
  }

  // Field name: empty
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->empty = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tesseract_msgs
size_t get_serialized_size_tesseract_msgs__msg__JointLimits(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointLimits__ros_msg_type * ros_message = static_cast<const _JointLimits__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lower
  {
    size_t item_size = sizeof(ros_message->lower);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name upper
  {
    size_t item_size = sizeof(ros_message->upper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name effort
  {
    size_t item_size = sizeof(ros_message->effort);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity
  {
    size_t item_size = sizeof(ros_message->velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceleration
  {
    size_t item_size = sizeof(ros_message->acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name empty
  {
    size_t item_size = sizeof(ros_message->empty);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JointLimits__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tesseract_msgs__msg__JointLimits(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tesseract_msgs
size_t max_serialized_size_tesseract_msgs__msg__JointLimits(
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

  // member: lower
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: upper
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: effort
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: empty
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _JointLimits__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tesseract_msgs__msg__JointLimits(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JointLimits = {
  "tesseract_msgs::msg",
  "JointLimits",
  _JointLimits__cdr_serialize,
  _JointLimits__cdr_deserialize,
  _JointLimits__get_serialized_size,
  _JointLimits__max_serialized_size
};

static rosidl_message_type_support_t _JointLimits__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointLimits,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointLimits)() {
  return &_JointLimits__type_support;
}

#if defined(__cplusplus)
}
#endif
