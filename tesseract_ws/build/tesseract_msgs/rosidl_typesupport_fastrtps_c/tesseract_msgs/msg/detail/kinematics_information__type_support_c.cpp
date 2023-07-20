// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tesseract_msgs:msg/KinematicsInformation.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/kinematics_information__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tesseract_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tesseract_msgs/msg/detail/kinematics_information__struct.h"
#include "tesseract_msgs/msg/detail/kinematics_information__functions.h"
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

#include "rosidl_runtime_c/string.h"  // group_names
#include "rosidl_runtime_c/string_functions.h"  // group_names
#include "tesseract_msgs/msg/detail/chain_group__functions.h"  // chain_groups
#include "tesseract_msgs/msg/detail/groups_joint_states__functions.h"  // group_joint_states
#include "tesseract_msgs/msg/detail/groups_tc_ps__functions.h"  // group_tcps
#include "tesseract_msgs/msg/detail/joint_group__functions.h"  // joint_groups
#include "tesseract_msgs/msg/detail/kinematics_plugin_info__functions.h"  // kinematics_plugin_info
#include "tesseract_msgs/msg/detail/link_group__functions.h"  // link_groups

// forward declare type support functions
size_t get_serialized_size_tesseract_msgs__msg__ChainGroup(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__ChainGroup(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, ChainGroup)();
size_t get_serialized_size_tesseract_msgs__msg__GroupsJointStates(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__GroupsJointStates(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, GroupsJointStates)();
size_t get_serialized_size_tesseract_msgs__msg__GroupsTCPs(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__GroupsTCPs(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, GroupsTCPs)();
size_t get_serialized_size_tesseract_msgs__msg__JointGroup(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__JointGroup(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointGroup)();
size_t get_serialized_size_tesseract_msgs__msg__KinematicsPluginInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__KinematicsPluginInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, KinematicsPluginInfo)();
size_t get_serialized_size_tesseract_msgs__msg__LinkGroup(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tesseract_msgs__msg__LinkGroup(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, LinkGroup)();


using _KinematicsInformation__ros_msg_type = tesseract_msgs__msg__KinematicsInformation;

static bool _KinematicsInformation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _KinematicsInformation__ros_msg_type * ros_message = static_cast<const _KinematicsInformation__ros_msg_type *>(untyped_ros_message);
  // Field name: group_names
  {
    size_t size = ros_message->group_names.size;
    auto array_ptr = ros_message->group_names.data;
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

  // Field name: group_joint_states
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, GroupsJointStates
      )()->data);
    size_t size = ros_message->group_joint_states.size;
    auto array_ptr = ros_message->group_joint_states.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: group_tcps
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, GroupsTCPs
      )()->data);
    size_t size = ros_message->group_tcps.size;
    auto array_ptr = ros_message->group_tcps.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: chain_groups
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, ChainGroup
      )()->data);
    size_t size = ros_message->chain_groups.size;
    auto array_ptr = ros_message->chain_groups.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: joint_groups
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointGroup
      )()->data);
    size_t size = ros_message->joint_groups.size;
    auto array_ptr = ros_message->joint_groups.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: link_groups
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, LinkGroup
      )()->data);
    size_t size = ros_message->link_groups.size;
    auto array_ptr = ros_message->link_groups.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: kinematics_plugin_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, KinematicsPluginInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->kinematics_plugin_info, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _KinematicsInformation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _KinematicsInformation__ros_msg_type * ros_message = static_cast<_KinematicsInformation__ros_msg_type *>(untyped_ros_message);
  // Field name: group_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->group_names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->group_names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->group_names, size)) {
      fprintf(stderr, "failed to create array for field 'group_names'");
      return false;
    }
    auto array_ptr = ros_message->group_names.data;
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
        fprintf(stderr, "failed to assign string into field 'group_names'\n");
        return false;
      }
    }
  }

  // Field name: group_joint_states
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, GroupsJointStates
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->group_joint_states.data) {
      tesseract_msgs__msg__GroupsJointStates__Sequence__fini(&ros_message->group_joint_states);
    }
    if (!tesseract_msgs__msg__GroupsJointStates__Sequence__init(&ros_message->group_joint_states, size)) {
      fprintf(stderr, "failed to create array for field 'group_joint_states'");
      return false;
    }
    auto array_ptr = ros_message->group_joint_states.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: group_tcps
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, GroupsTCPs
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->group_tcps.data) {
      tesseract_msgs__msg__GroupsTCPs__Sequence__fini(&ros_message->group_tcps);
    }
    if (!tesseract_msgs__msg__GroupsTCPs__Sequence__init(&ros_message->group_tcps, size)) {
      fprintf(stderr, "failed to create array for field 'group_tcps'");
      return false;
    }
    auto array_ptr = ros_message->group_tcps.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: chain_groups
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, ChainGroup
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->chain_groups.data) {
      tesseract_msgs__msg__ChainGroup__Sequence__fini(&ros_message->chain_groups);
    }
    if (!tesseract_msgs__msg__ChainGroup__Sequence__init(&ros_message->chain_groups, size)) {
      fprintf(stderr, "failed to create array for field 'chain_groups'");
      return false;
    }
    auto array_ptr = ros_message->chain_groups.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: joint_groups
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, JointGroup
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_groups.data) {
      tesseract_msgs__msg__JointGroup__Sequence__fini(&ros_message->joint_groups);
    }
    if (!tesseract_msgs__msg__JointGroup__Sequence__init(&ros_message->joint_groups, size)) {
      fprintf(stderr, "failed to create array for field 'joint_groups'");
      return false;
    }
    auto array_ptr = ros_message->joint_groups.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: link_groups
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, LinkGroup
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->link_groups.data) {
      tesseract_msgs__msg__LinkGroup__Sequence__fini(&ros_message->link_groups);
    }
    if (!tesseract_msgs__msg__LinkGroup__Sequence__init(&ros_message->link_groups, size)) {
      fprintf(stderr, "failed to create array for field 'link_groups'");
      return false;
    }
    auto array_ptr = ros_message->link_groups.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: kinematics_plugin_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, KinematicsPluginInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->kinematics_plugin_info))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tesseract_msgs
size_t get_serialized_size_tesseract_msgs__msg__KinematicsInformation(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _KinematicsInformation__ros_msg_type * ros_message = static_cast<const _KinematicsInformation__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name group_names
  {
    size_t array_size = ros_message->group_names.size;
    auto array_ptr = ros_message->group_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name group_joint_states
  {
    size_t array_size = ros_message->group_joint_states.size;
    auto array_ptr = ros_message->group_joint_states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tesseract_msgs__msg__GroupsJointStates(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name group_tcps
  {
    size_t array_size = ros_message->group_tcps.size;
    auto array_ptr = ros_message->group_tcps.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tesseract_msgs__msg__GroupsTCPs(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name chain_groups
  {
    size_t array_size = ros_message->chain_groups.size;
    auto array_ptr = ros_message->chain_groups.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tesseract_msgs__msg__ChainGroup(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name joint_groups
  {
    size_t array_size = ros_message->joint_groups.size;
    auto array_ptr = ros_message->joint_groups.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tesseract_msgs__msg__JointGroup(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name link_groups
  {
    size_t array_size = ros_message->link_groups.size;
    auto array_ptr = ros_message->link_groups.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tesseract_msgs__msg__LinkGroup(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name kinematics_plugin_info

  current_alignment += get_serialized_size_tesseract_msgs__msg__KinematicsPluginInfo(
    &(ros_message->kinematics_plugin_info), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _KinematicsInformation__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tesseract_msgs__msg__KinematicsInformation(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tesseract_msgs
size_t max_serialized_size_tesseract_msgs__msg__KinematicsInformation(
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

  // member: group_names
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
  // member: group_joint_states
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
        max_serialized_size_tesseract_msgs__msg__GroupsJointStates(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: group_tcps
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
        max_serialized_size_tesseract_msgs__msg__GroupsTCPs(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: chain_groups
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
        max_serialized_size_tesseract_msgs__msg__ChainGroup(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: joint_groups
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
        max_serialized_size_tesseract_msgs__msg__JointGroup(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: link_groups
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
        max_serialized_size_tesseract_msgs__msg__LinkGroup(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: kinematics_plugin_info
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tesseract_msgs__msg__KinematicsPluginInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _KinematicsInformation__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tesseract_msgs__msg__KinematicsInformation(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_KinematicsInformation = {
  "tesseract_msgs::msg",
  "KinematicsInformation",
  _KinematicsInformation__cdr_serialize,
  _KinematicsInformation__cdr_deserialize,
  _KinematicsInformation__get_serialized_size,
  _KinematicsInformation__max_serialized_size
};

static rosidl_message_type_support_t _KinematicsInformation__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_KinematicsInformation,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesseract_msgs, msg, KinematicsInformation)() {
  return &_KinematicsInformation__type_support;
}

#if defined(__cplusplus)
}
#endif
