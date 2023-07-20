// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tesseract_msgs:msg/Joint.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/joint__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tesseract_msgs/msg/detail/joint__struct.hpp"

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
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Pose &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Pose &);
size_t get_serialized_size(
  const geometry_msgs::msg::Pose &,
  size_t current_alignment);
size_t
max_serialized_size_Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace tesseract_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tesseract_msgs::msg::JointLimits &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tesseract_msgs::msg::JointLimits &);
size_t get_serialized_size(
  const tesseract_msgs::msg::JointLimits &,
  size_t current_alignment);
size_t
max_serialized_size_JointLimits(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tesseract_msgs

namespace tesseract_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tesseract_msgs::msg::JointDynamics &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tesseract_msgs::msg::JointDynamics &);
size_t get_serialized_size(
  const tesseract_msgs::msg::JointDynamics &,
  size_t current_alignment);
size_t
max_serialized_size_JointDynamics(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tesseract_msgs

namespace tesseract_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tesseract_msgs::msg::JointSafety &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tesseract_msgs::msg::JointSafety &);
size_t get_serialized_size(
  const tesseract_msgs::msg::JointSafety &,
  size_t current_alignment);
size_t
max_serialized_size_JointSafety(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tesseract_msgs

namespace tesseract_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tesseract_msgs::msg::JointCalibration &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tesseract_msgs::msg::JointCalibration &);
size_t get_serialized_size(
  const tesseract_msgs::msg::JointCalibration &,
  size_t current_alignment);
size_t
max_serialized_size_JointCalibration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tesseract_msgs

namespace tesseract_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tesseract_msgs::msg::JointMimic &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tesseract_msgs::msg::JointMimic &);
size_t get_serialized_size(
  const tesseract_msgs::msg::JointMimic &,
  size_t current_alignment);
size_t
max_serialized_size_JointMimic(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tesseract_msgs


namespace tesseract_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tesseract_msgs
cdr_serialize(
  const tesseract_msgs::msg::Joint & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;
  // Member: type
  cdr << ros_message.type;
  // Member: axis
  {
    cdr << ros_message.axis;
  }
  // Member: child_link_name
  cdr << ros_message.child_link_name;
  // Member: parent_link_name
  cdr << ros_message.parent_link_name;
  // Member: parent_to_joint_origin_transform
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.parent_to_joint_origin_transform,
    cdr);
  // Member: limits
  tesseract_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.limits,
    cdr);
  // Member: dynamics
  tesseract_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.dynamics,
    cdr);
  // Member: safety
  tesseract_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.safety,
    cdr);
  // Member: calibration
  tesseract_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.calibration,
    cdr);
  // Member: mimic
  tesseract_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.mimic,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tesseract_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tesseract_msgs::msg::Joint & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: type
  cdr >> ros_message.type;

  // Member: axis
  {
    cdr >> ros_message.axis;
  }

  // Member: child_link_name
  cdr >> ros_message.child_link_name;

  // Member: parent_link_name
  cdr >> ros_message.parent_link_name;

  // Member: parent_to_joint_origin_transform
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.parent_to_joint_origin_transform);

  // Member: limits
  tesseract_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.limits);

  // Member: dynamics
  tesseract_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.dynamics);

  // Member: safety
  tesseract_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.safety);

  // Member: calibration
  tesseract_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.calibration);

  // Member: mimic
  tesseract_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.mimic);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tesseract_msgs
get_serialized_size(
  const tesseract_msgs::msg::Joint & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: axis
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.axis[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: child_link_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.child_link_name.size() + 1);
  // Member: parent_link_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.parent_link_name.size() + 1);
  // Member: parent_to_joint_origin_transform

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.parent_to_joint_origin_transform, current_alignment);
  // Member: limits

  current_alignment +=
    tesseract_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.limits, current_alignment);
  // Member: dynamics

  current_alignment +=
    tesseract_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.dynamics, current_alignment);
  // Member: safety

  current_alignment +=
    tesseract_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.safety, current_alignment);
  // Member: calibration

  current_alignment +=
    tesseract_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.calibration, current_alignment);
  // Member: mimic

  current_alignment +=
    tesseract_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.mimic, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tesseract_msgs
max_serialized_size_Joint(
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


  // Member: name
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

  // Member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: axis
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: child_link_name
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

  // Member: parent_link_name
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

  // Member: parent_to_joint_origin_transform
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: limits
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        tesseract_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_JointLimits(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: dynamics
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        tesseract_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_JointDynamics(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: safety
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        tesseract_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_JointSafety(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: calibration
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        tesseract_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_JointCalibration(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: mimic
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        tesseract_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_JointMimic(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Joint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tesseract_msgs::msg::Joint *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Joint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tesseract_msgs::msg::Joint *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Joint__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tesseract_msgs::msg::Joint *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Joint__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Joint(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Joint__callbacks = {
  "tesseract_msgs::msg",
  "Joint",
  _Joint__cdr_serialize,
  _Joint__cdr_deserialize,
  _Joint__get_serialized_size,
  _Joint__max_serialized_size
};

static rosidl_message_type_support_t _Joint__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Joint__callbacks,
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
get_message_type_support_handle<tesseract_msgs::msg::Joint>()
{
  return &tesseract_msgs::msg::typesupport_fastrtps_cpp::_Joint__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tesseract_msgs, msg, Joint)() {
  return &tesseract_msgs::msg::typesupport_fastrtps_cpp::_Joint__handle;
}

#ifdef __cplusplus
}
#endif
