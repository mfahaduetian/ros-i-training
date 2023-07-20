// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tesseract_msgs:msg/JointSafety.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/joint_safety__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tesseract_msgs/msg/detail/joint_safety__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace tesseract_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tesseract_msgs
cdr_serialize(
  const tesseract_msgs::msg::JointSafety & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: soft_upper_limit
  cdr << ros_message.soft_upper_limit;
  // Member: soft_lower_limit
  cdr << ros_message.soft_lower_limit;
  // Member: k_position
  cdr << ros_message.k_position;
  // Member: k_velocity
  cdr << ros_message.k_velocity;
  // Member: empty
  cdr << (ros_message.empty ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tesseract_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tesseract_msgs::msg::JointSafety & ros_message)
{
  // Member: soft_upper_limit
  cdr >> ros_message.soft_upper_limit;

  // Member: soft_lower_limit
  cdr >> ros_message.soft_lower_limit;

  // Member: k_position
  cdr >> ros_message.k_position;

  // Member: k_velocity
  cdr >> ros_message.k_velocity;

  // Member: empty
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.empty = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tesseract_msgs
get_serialized_size(
  const tesseract_msgs::msg::JointSafety & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: soft_upper_limit
  {
    size_t item_size = sizeof(ros_message.soft_upper_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: soft_lower_limit
  {
    size_t item_size = sizeof(ros_message.soft_lower_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_position
  {
    size_t item_size = sizeof(ros_message.k_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_velocity
  {
    size_t item_size = sizeof(ros_message.k_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: empty
  {
    size_t item_size = sizeof(ros_message.empty);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tesseract_msgs
max_serialized_size_JointSafety(
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


  // Member: soft_upper_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: soft_lower_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: k_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: k_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: empty
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _JointSafety__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tesseract_msgs::msg::JointSafety *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JointSafety__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tesseract_msgs::msg::JointSafety *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JointSafety__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tesseract_msgs::msg::JointSafety *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JointSafety__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_JointSafety(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _JointSafety__callbacks = {
  "tesseract_msgs::msg",
  "JointSafety",
  _JointSafety__cdr_serialize,
  _JointSafety__cdr_deserialize,
  _JointSafety__get_serialized_size,
  _JointSafety__max_serialized_size
};

static rosidl_message_type_support_t _JointSafety__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_JointSafety__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tesseract_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tesseract_msgs::msg::JointSafety>()
{
  return &tesseract_msgs::msg::typesupport_fastrtps_cpp::_JointSafety__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tesseract_msgs, msg, JointSafety)() {
  return &tesseract_msgs::msg::typesupport_fastrtps_cpp::_JointSafety__handle;
}

#ifdef __cplusplus
}
#endif
