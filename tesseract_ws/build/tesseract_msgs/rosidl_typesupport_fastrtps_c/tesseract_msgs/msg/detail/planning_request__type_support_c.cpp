// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tesseract_msgs:msg/PlanningRequest.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/planning_request__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tesseract_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tesseract_msgs/msg/detail/planning_request__struct.h"
#include "tesseract_msgs/msg/detail/planning_request__functions.h"
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

#include "rosidl_runtime_c/string.h"  // executor, instructions, name
#include "rosidl_runtime_c/string_functions.h"  // executor, instructions, name
#include "tesseract_msgs/msg/detail/environment_command__functions.h"  // commands
#include "tesseract_msgs/msg/detail/environment_state__functions.h"  // environment_state
#include "tesseract_msgs/msg/detail/planner_profile_remapping__functions.h"  // composite_profile_remapping, move_profile_remapping

// forward declare type support functions
size_t get_serialized_size_tesseract_msgs__msg__EnvironmentCommand(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__EnvironmentCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, EnvironmentCommand)();
size_t get_serialized_size_tesseract_msgs__msg__EnvironmentState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__EnvironmentState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, EnvironmentState)();
size_t get_serialized_size_tesseract_msgs__msg__PlannerProfileRemapping(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__PlannerProfileRemapping(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, PlannerProfileRemapping)();


using _PlanningRequest__ros_msg_type = tesseract_msgs__msg__PlanningRequest;

static bool _PlanningRequest__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlanningRequest__ros_msg_type * ros_message = static_cast<const _PlanningRequest__ros_msg_type *>(untyped_ros_message);
  // Field name: environment_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, EnvironmentState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->environment_state, cdr))
    {
      return false;
    }
  }

  // Field name: commands
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, EnvironmentCommand
      )()->data);
    size_t size = ros_message->commands.size;
    auto array_ptr = ros_message->commands.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

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

  // Field name: executor
  {
    const rosidl_runtime_c__String * str = &ros_message->executor;
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

  // Field name: instructions
  {
    const rosidl_runtime_c__String * str = &ros_message->instructions;
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

  // Field name: dotgraph
  {
    cdr << (ros_message->dotgraph ? true : false);
  }

  // Field name: debug
  {
    cdr << (ros_message->debug ? true : false);
  }

  // Field name: save_io
  {
    cdr << (ros_message->save_io ? true : false);
  }

  // Field name: move_profile_remapping
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, PlannerProfileRemapping
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->move_profile_remapping, cdr))
    {
      return false;
    }
  }

  // Field name: composite_profile_remapping
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, PlannerProfileRemapping
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->composite_profile_remapping, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PlanningRequest__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlanningRequest__ros_msg_type * ros_message = static_cast<_PlanningRequest__ros_msg_type *>(untyped_ros_message);
  // Field name: environment_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, EnvironmentState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->environment_state))
    {
      return false;
    }
  }

  // Field name: commands
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, EnvironmentCommand
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->commands.data) {
      tesseract_msgs__msg__EnvironmentCommand__Sequence__fini(&ros_message->commands);
    }
    if (!tesseract_msgs__msg__EnvironmentCommand__Sequence__init(&ros_message->commands, size)) {
      fprintf(stderr, "failed to create array for field 'commands'");
      return false;
    }
    auto array_ptr = ros_message->commands.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

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

  // Field name: executor
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->executor.data) {
      rosidl_runtime_c__String__init(&ros_message->executor);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->executor,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'executor'\n");
      return false;
    }
  }

  // Field name: instructions
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->instructions.data) {
      rosidl_runtime_c__String__init(&ros_message->instructions);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->instructions,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'instructions'\n");
      return false;
    }
  }

  // Field name: dotgraph
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dotgraph = tmp ? true : false;
  }

  // Field name: debug
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->debug = tmp ? true : false;
  }

  // Field name: save_io
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->save_io = tmp ? true : false;
  }

  // Field name: move_profile_remapping
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, PlannerProfileRemapping
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->move_profile_remapping))
    {
      return false;
    }
  }

  // Field name: composite_profile_remapping
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, PlannerProfileRemapping
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->composite_profile_remapping))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tesseract_msgs
size_t get_serialized_size_tesseract_msgs__msg__PlanningRequest(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanningRequest__ros_msg_type * ros_message = static_cast<const _PlanningRequest__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name environment_state

  current_alignment += get_serialized_size_tesseract_msgs__msg__EnvironmentState(
    &(ros_message->environment_state), current_alignment);
  // field.name commands
  {
    size_t array_size = ros_message->commands.size;
    auto array_ptr = ros_message->commands.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tesseract_msgs__msg__EnvironmentCommand(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name executor
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->executor.size + 1);
  // field.name instructions
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->instructions.size + 1);
  // field.name dotgraph
  {
    size_t item_size = sizeof(ros_message->dotgraph);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name debug
  {
    size_t item_size = sizeof(ros_message->debug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name save_io
  {
    size_t item_size = sizeof(ros_message->save_io);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name move_profile_remapping

  current_alignment += get_serialized_size_tesseract_msgs__msg__PlannerProfileRemapping(
    &(ros_message->move_profile_remapping), current_alignment);
  // field.name composite_profile_remapping

  current_alignment += get_serialized_size_tesseract_msgs__msg__PlannerProfileRemapping(
    &(ros_message->composite_profile_remapping), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PlanningRequest__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tesseract_msgs__msg__PlanningRequest(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tesseract_msgs
size_t max_serialized_size_tesseract_msgs__msg__PlanningRequest(
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

  // member: environment_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__EnvironmentState(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: commands
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
        max_serialized_size_tesseract_msgs__msg__EnvironmentCommand(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
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
  // member: executor
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
  // member: instructions
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
  // member: dotgraph
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: debug
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: save_io
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: move_profile_remapping
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__PlannerProfileRemapping(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: composite_profile_remapping
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__PlannerProfileRemapping(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PlanningRequest__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tesseract_msgs__msg__PlanningRequest(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlanningRequest = {
  "tesseract_msgs::msg",
  "PlanningRequest",
  _PlanningRequest__cdr_serialize,
  _PlanningRequest__cdr_deserialize,
  _PlanningRequest__get_serialized_size,
  _PlanningRequest__max_serialized_size
};

static rosidl_message_type_support_t _PlanningRequest__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlanningRequest,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, PlanningRequest)() {
  return &_PlanningRequest__type_support;
}

#if defined(__cplusplus)
}
#endif
