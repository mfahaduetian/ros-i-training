// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tesseract_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tesseract_msgs/msg/detail/trajectory__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tesseract_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Trajectory_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tesseract_msgs::msg::Trajectory(_init);
}

void Trajectory_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tesseract_msgs::msg::Trajectory *>(message_memory);
  typed_message->~Trajectory();
}

size_t size_function__Trajectory__commands(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tesseract_msgs::msg::EnvironmentCommand> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Trajectory__commands(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tesseract_msgs::msg::EnvironmentCommand> *>(untyped_member);
  return &member[index];
}

void * get_function__Trajectory__commands(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tesseract_msgs::msg::EnvironmentCommand> *>(untyped_member);
  return &member[index];
}

void fetch_function__Trajectory__commands(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tesseract_msgs::msg::EnvironmentCommand *>(
    get_const_function__Trajectory__commands(untyped_member, index));
  auto & value = *reinterpret_cast<tesseract_msgs::msg::EnvironmentCommand *>(untyped_value);
  value = item;
}

void assign_function__Trajectory__commands(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tesseract_msgs::msg::EnvironmentCommand *>(
    get_function__Trajectory__commands(untyped_member, index));
  const auto & value = *reinterpret_cast<const tesseract_msgs::msg::EnvironmentCommand *>(untyped_value);
  item = value;
}

void resize_function__Trajectory__commands(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tesseract_msgs::msg::EnvironmentCommand> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Trajectory__initial_state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tesseract_msgs::msg::StringDoublePair> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Trajectory__initial_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tesseract_msgs::msg::StringDoublePair> *>(untyped_member);
  return &member[index];
}

void * get_function__Trajectory__initial_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tesseract_msgs::msg::StringDoublePair> *>(untyped_member);
  return &member[index];
}

void fetch_function__Trajectory__initial_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tesseract_msgs::msg::StringDoublePair *>(
    get_const_function__Trajectory__initial_state(untyped_member, index));
  auto & value = *reinterpret_cast<tesseract_msgs::msg::StringDoublePair *>(untyped_value);
  value = item;
}

void assign_function__Trajectory__initial_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tesseract_msgs::msg::StringDoublePair *>(
    get_function__Trajectory__initial_state(untyped_member, index));
  const auto & value = *reinterpret_cast<const tesseract_msgs::msg::StringDoublePair *>(untyped_value);
  item = value;
}

void resize_function__Trajectory__initial_state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tesseract_msgs::msg::StringDoublePair> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Trajectory__joint_trajectories(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tesseract_msgs::msg::JointTrajectory> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Trajectory__joint_trajectories(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tesseract_msgs::msg::JointTrajectory> *>(untyped_member);
  return &member[index];
}

void * get_function__Trajectory__joint_trajectories(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tesseract_msgs::msg::JointTrajectory> *>(untyped_member);
  return &member[index];
}

void fetch_function__Trajectory__joint_trajectories(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tesseract_msgs::msg::JointTrajectory *>(
    get_const_function__Trajectory__joint_trajectories(untyped_member, index));
  auto & value = *reinterpret_cast<tesseract_msgs::msg::JointTrajectory *>(untyped_value);
  value = item;
}

void assign_function__Trajectory__joint_trajectories(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tesseract_msgs::msg::JointTrajectory *>(
    get_function__Trajectory__joint_trajectories(untyped_member, index));
  const auto & value = *reinterpret_cast<const tesseract_msgs::msg::JointTrajectory *>(untyped_value);
  item = value;
}

void resize_function__Trajectory__joint_trajectories(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tesseract_msgs::msg::JointTrajectory> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Trajectory_message_member_array[8] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::Trajectory, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ns",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::Trajectory, ns),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "description",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::Trajectory, description),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "environment",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::Environment>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::Trajectory, environment),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "commands",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::EnvironmentCommand>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::Trajectory, commands),  // bytes offset in struct
    nullptr,  // default value
    size_function__Trajectory__commands,  // size() function pointer
    get_const_function__Trajectory__commands,  // get_const(index) function pointer
    get_function__Trajectory__commands,  // get(index) function pointer
    fetch_function__Trajectory__commands,  // fetch(index, &value) function pointer
    assign_function__Trajectory__commands,  // assign(index, value) function pointer
    resize_function__Trajectory__commands  // resize(index) function pointer
  },
  {
    "initial_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::StringDoublePair>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::Trajectory, initial_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__Trajectory__initial_state,  // size() function pointer
    get_const_function__Trajectory__initial_state,  // get_const(index) function pointer
    get_function__Trajectory__initial_state,  // get(index) function pointer
    fetch_function__Trajectory__initial_state,  // fetch(index, &value) function pointer
    assign_function__Trajectory__initial_state,  // assign(index, value) function pointer
    resize_function__Trajectory__initial_state  // resize(index) function pointer
  },
  {
    "instructions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::Trajectory, instructions),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_trajectories",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::JointTrajectory>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::Trajectory, joint_trajectories),  // bytes offset in struct
    nullptr,  // default value
    size_function__Trajectory__joint_trajectories,  // size() function pointer
    get_const_function__Trajectory__joint_trajectories,  // get_const(index) function pointer
    get_function__Trajectory__joint_trajectories,  // get(index) function pointer
    fetch_function__Trajectory__joint_trajectories,  // fetch(index, &value) function pointer
    assign_function__Trajectory__joint_trajectories,  // assign(index, value) function pointer
    resize_function__Trajectory__joint_trajectories  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Trajectory_message_members = {
  "tesseract_msgs::msg",  // message namespace
  "Trajectory",  // message name
  8,  // number of fields
  sizeof(tesseract_msgs::msg::Trajectory),
  Trajectory_message_member_array,  // message members
  Trajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  Trajectory_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Trajectory_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Trajectory_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tesseract_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tesseract_msgs::msg::Trajectory>()
{
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::Trajectory_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tesseract_msgs, msg, Trajectory)() {
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::Trajectory_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
