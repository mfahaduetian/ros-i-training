// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tesseract_msgs:msg/EnvironmentCommand.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "tesseract_msgs/msg/detail/environment_command__struct.h"
#include "tesseract_msgs/msg/detail/environment_command__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "tesseract_msgs/msg/detail/allowed_collision_entry__functions.h"
#include "tesseract_msgs/msg/detail/string_double_pair__functions.h"
#include "tesseract_msgs/msg/detail/string_limits_pair__functions.h"
// end nested array functions include
bool tesseract_msgs__msg__link__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__link__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__joint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__joint__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__joint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__joint__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__joint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__joint__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__allowed_collision_entry__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__allowed_collision_entry__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__joint_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__joint_state__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__scene_graph__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__scene_graph__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__joint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__joint__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__string_limits_pair__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__string_limits_pair__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__string_double_pair__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__string_double_pair__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__string_double_pair__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__string_double_pair__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__kinematics_information__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__kinematics_information__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__collision_margin_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__collision_margin_data__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__collision_margin_override_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__collision_margin_override_type__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__contact_managers_plugin_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__contact_managers_plugin_info__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__joint_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__joint_trajectory__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tesseract_msgs__msg__environment_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tesseract_msgs.msg._environment_command.EnvironmentCommand", full_classname_dest, 58) == 0);
  }
  tesseract_msgs__msg__EnvironmentCommand * ros_message = _ros_message;
  {  // command
    PyObject * field = PyObject_GetAttrString(_pymsg, "command");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // add_link
    PyObject * field = PyObject_GetAttrString(_pymsg, "add_link");
    if (!field) {
      return false;
    }
    if (!tesseract_msgs__msg__link__convert_from_py(field, &ros_message->add_link)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // add_joint
    PyObject * field = PyObject_GetAttrString(_pymsg, "add_joint");
    if (!field) {
      return false;
    }
    if (!tesseract_msgs__msg__joint__convert_from_py(field, &ros_message->add_joint)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // add_replace_allowed
    PyObject * field = PyObject_GetAttrString(_pymsg, "add_replace_allowed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->add_replace_allowed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // move_link_joint
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_link_joint");
    if (!field) {
      return false;
    }
    if (!tesseract_msgs__msg__joint__convert_from_py(field, &ros_message->move_link_joint)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // move_joint_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_joint_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->move_joint_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // move_joint_parent_link
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_joint_parent_link");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->move_joint_parent_link, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // remove_link
    PyObject * field = PyObject_GetAttrString(_pymsg, "remove_link");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->remove_link, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // remove_joint
    PyObject * field = PyObject_GetAttrString(_pymsg, "remove_joint");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->remove_joint, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // replace_joint
    PyObject * field = PyObject_GetAttrString(_pymsg, "replace_joint");
    if (!field) {
      return false;
    }
    if (!tesseract_msgs__msg__joint__convert_from_py(field, &ros_message->replace_joint)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // change_link_origin_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "change_link_origin_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->change_link_origin_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // change_link_origin_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "change_link_origin_pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->change_link_origin_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // change_joint_origin_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "change_joint_origin_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->change_joint_origin_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // change_joint_origin_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "change_joint_origin_pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->change_joint_origin_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // change_link_collision_enabled_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "change_link_collision_enabled_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->change_link_collision_enabled_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // change_link_collision_enabled_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "change_link_collision_enabled_value");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->change_link_collision_enabled_value = (Py_True == field);
    Py_DECREF(field);
  }
  {  // change_link_visibility_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "change_link_visibility_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->change_link_visibility_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // change_link_visibility_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "change_link_visibility_value");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->change_link_visibility_value = (Py_True == field);
    Py_DECREF(field);
  }
  {  // modify_allowed_collisions_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "modify_allowed_collisions_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->modify_allowed_collisions_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // modify_allowed_collisions
    PyObject * field = PyObject_GetAttrString(_pymsg, "modify_allowed_collisions");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'modify_allowed_collisions'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!tesseract_msgs__msg__AllowedCollisionEntry__Sequence__init(&(ros_message->modify_allowed_collisions), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create tesseract_msgs__msg__AllowedCollisionEntry__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    tesseract_msgs__msg__AllowedCollisionEntry * dest = ros_message->modify_allowed_collisions.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!tesseract_msgs__msg__allowed_collision_entry__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // remove_allowed_collision_link
    PyObject * field = PyObject_GetAttrString(_pymsg, "remove_allowed_collision_link");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->remove_allowed_collision_link, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // joint_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_state");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__joint_state__convert_from_py(field, &ros_message->joint_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // scene_graph
    PyObject * field = PyObject_GetAttrString(_pymsg, "scene_graph");
    if (!field) {
      return false;
    }
    if (!tesseract_msgs__msg__scene_graph__convert_from_py(field, &ros_message->scene_graph)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // scene_graph_joint
    PyObject * field = PyObject_GetAttrString(_pymsg, "scene_graph_joint");
    if (!field) {
      return false;
    }
    if (!tesseract_msgs__msg__joint__convert_from_py(field, &ros_message->scene_graph_joint)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // scene_graph_prefix
    PyObject * field = PyObject_GetAttrString(_pymsg, "scene_graph_prefix");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->scene_graph_prefix, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // change_joint_position_limits
    PyObject * field = PyObject_GetAttrString(_pymsg, "change_joint_position_limits");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'change_joint_position_limits'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!tesseract_msgs__msg__StringLimitsPair__Sequence__init(&(ros_message->change_joint_position_limits), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create tesseract_msgs__msg__StringLimitsPair__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    tesseract_msgs__msg__StringLimitsPair * dest = ros_message->change_joint_position_limits.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!tesseract_msgs__msg__string_limits_pair__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // change_joint_velocity_limits
    PyObject * field = PyObject_GetAttrString(_pymsg, "change_joint_velocity_limits");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'change_joint_velocity_limits'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!tesseract_msgs__msg__StringDoublePair__Sequence__init(&(ros_message->change_joint_velocity_limits), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create tesseract_msgs__msg__StringDoublePair__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    tesseract_msgs__msg__StringDoublePair * dest = ros_message->change_joint_velocity_limits.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!tesseract_msgs__msg__string_double_pair__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // change_joint_acceleration_limits
    PyObject * field = PyObject_GetAttrString(_pymsg, "change_joint_acceleration_limits");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'change_joint_acceleration_limits'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!tesseract_msgs__msg__StringDoublePair__Sequence__init(&(ros_message->change_joint_acceleration_limits), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create tesseract_msgs__msg__StringDoublePair__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    tesseract_msgs__msg__StringDoublePair * dest = ros_message->change_joint_acceleration_limits.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!tesseract_msgs__msg__string_double_pair__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // add_kinematics_information
    PyObject * field = PyObject_GetAttrString(_pymsg, "add_kinematics_information");
    if (!field) {
      return false;
    }
    if (!tesseract_msgs__msg__kinematics_information__convert_from_py(field, &ros_message->add_kinematics_information)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // collision_margin_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "collision_margin_data");
    if (!field) {
      return false;
    }
    if (!tesseract_msgs__msg__collision_margin_data__convert_from_py(field, &ros_message->collision_margin_data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // collision_margin_override_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "collision_margin_override_type");
    if (!field) {
      return false;
    }
    if (!tesseract_msgs__msg__collision_margin_override_type__convert_from_py(field, &ros_message->collision_margin_override_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // add_contact_managers_plugin_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "add_contact_managers_plugin_info");
    if (!field) {
      return false;
    }
    if (!tesseract_msgs__msg__contact_managers_plugin_info__convert_from_py(field, &ros_message->add_contact_managers_plugin_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // set_active_discrete_contact_manager
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_active_discrete_contact_manager");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->set_active_discrete_contact_manager, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // set_active_continuous_contact_manager
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_active_continuous_contact_manager");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->set_active_continuous_contact_manager, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // add_trajectory_link_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "add_trajectory_link_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->add_trajectory_link_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // add_trajectory_link_parent_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "add_trajectory_link_parent_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->add_trajectory_link_parent_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // add_trajectory_link_traj
    PyObject * field = PyObject_GetAttrString(_pymsg, "add_trajectory_link_traj");
    if (!field) {
      return false;
    }
    if (!tesseract_msgs__msg__joint_trajectory__convert_from_py(field, &ros_message->add_trajectory_link_traj)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // add_trajectory_link_replace_allowed
    PyObject * field = PyObject_GetAttrString(_pymsg, "add_trajectory_link_replace_allowed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->add_trajectory_link_replace_allowed = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tesseract_msgs__msg__environment_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EnvironmentCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tesseract_msgs.msg._environment_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EnvironmentCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tesseract_msgs__msg__EnvironmentCommand * ros_message = (tesseract_msgs__msg__EnvironmentCommand *)raw_ros_message;
  {  // command
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->command);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // add_link
    PyObject * field = NULL;
    field = tesseract_msgs__msg__link__convert_to_py(&ros_message->add_link);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "add_link", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // add_joint
    PyObject * field = NULL;
    field = tesseract_msgs__msg__joint__convert_to_py(&ros_message->add_joint);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "add_joint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // add_replace_allowed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->add_replace_allowed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "add_replace_allowed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // move_link_joint
    PyObject * field = NULL;
    field = tesseract_msgs__msg__joint__convert_to_py(&ros_message->move_link_joint);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_link_joint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // move_joint_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->move_joint_name.data,
      strlen(ros_message->move_joint_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_joint_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // move_joint_parent_link
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->move_joint_parent_link.data,
      strlen(ros_message->move_joint_parent_link.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_joint_parent_link", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remove_link
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->remove_link.data,
      strlen(ros_message->remove_link.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "remove_link", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remove_joint
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->remove_joint.data,
      strlen(ros_message->remove_joint.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "remove_joint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // replace_joint
    PyObject * field = NULL;
    field = tesseract_msgs__msg__joint__convert_to_py(&ros_message->replace_joint);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "replace_joint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // change_link_origin_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->change_link_origin_name.data,
      strlen(ros_message->change_link_origin_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "change_link_origin_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // change_link_origin_pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->change_link_origin_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "change_link_origin_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // change_joint_origin_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->change_joint_origin_name.data,
      strlen(ros_message->change_joint_origin_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "change_joint_origin_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // change_joint_origin_pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->change_joint_origin_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "change_joint_origin_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // change_link_collision_enabled_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->change_link_collision_enabled_name.data,
      strlen(ros_message->change_link_collision_enabled_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "change_link_collision_enabled_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // change_link_collision_enabled_value
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->change_link_collision_enabled_value ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "change_link_collision_enabled_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // change_link_visibility_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->change_link_visibility_name.data,
      strlen(ros_message->change_link_visibility_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "change_link_visibility_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // change_link_visibility_value
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->change_link_visibility_value ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "change_link_visibility_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // modify_allowed_collisions_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->modify_allowed_collisions_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "modify_allowed_collisions_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // modify_allowed_collisions
    PyObject * field = NULL;
    size_t size = ros_message->modify_allowed_collisions.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    tesseract_msgs__msg__AllowedCollisionEntry * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->modify_allowed_collisions.data[i]);
      PyObject * pyitem = tesseract_msgs__msg__allowed_collision_entry__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "modify_allowed_collisions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remove_allowed_collision_link
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->remove_allowed_collision_link.data,
      strlen(ros_message->remove_allowed_collision_link.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "remove_allowed_collision_link", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_state
    PyObject * field = NULL;
    field = sensor_msgs__msg__joint_state__convert_to_py(&ros_message->joint_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scene_graph
    PyObject * field = NULL;
    field = tesseract_msgs__msg__scene_graph__convert_to_py(&ros_message->scene_graph);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "scene_graph", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scene_graph_joint
    PyObject * field = NULL;
    field = tesseract_msgs__msg__joint__convert_to_py(&ros_message->scene_graph_joint);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "scene_graph_joint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scene_graph_prefix
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->scene_graph_prefix.data,
      strlen(ros_message->scene_graph_prefix.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "scene_graph_prefix", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // change_joint_position_limits
    PyObject * field = NULL;
    size_t size = ros_message->change_joint_position_limits.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    tesseract_msgs__msg__StringLimitsPair * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->change_joint_position_limits.data[i]);
      PyObject * pyitem = tesseract_msgs__msg__string_limits_pair__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "change_joint_position_limits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // change_joint_velocity_limits
    PyObject * field = NULL;
    size_t size = ros_message->change_joint_velocity_limits.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    tesseract_msgs__msg__StringDoublePair * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->change_joint_velocity_limits.data[i]);
      PyObject * pyitem = tesseract_msgs__msg__string_double_pair__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "change_joint_velocity_limits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // change_joint_acceleration_limits
    PyObject * field = NULL;
    size_t size = ros_message->change_joint_acceleration_limits.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    tesseract_msgs__msg__StringDoublePair * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->change_joint_acceleration_limits.data[i]);
      PyObject * pyitem = tesseract_msgs__msg__string_double_pair__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "change_joint_acceleration_limits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // add_kinematics_information
    PyObject * field = NULL;
    field = tesseract_msgs__msg__kinematics_information__convert_to_py(&ros_message->add_kinematics_information);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "add_kinematics_information", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // collision_margin_data
    PyObject * field = NULL;
    field = tesseract_msgs__msg__collision_margin_data__convert_to_py(&ros_message->collision_margin_data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "collision_margin_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // collision_margin_override_type
    PyObject * field = NULL;
    field = tesseract_msgs__msg__collision_margin_override_type__convert_to_py(&ros_message->collision_margin_override_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "collision_margin_override_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // add_contact_managers_plugin_info
    PyObject * field = NULL;
    field = tesseract_msgs__msg__contact_managers_plugin_info__convert_to_py(&ros_message->add_contact_managers_plugin_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "add_contact_managers_plugin_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_active_discrete_contact_manager
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->set_active_discrete_contact_manager.data,
      strlen(ros_message->set_active_discrete_contact_manager.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_active_discrete_contact_manager", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_active_continuous_contact_manager
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->set_active_continuous_contact_manager.data,
      strlen(ros_message->set_active_continuous_contact_manager.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_active_continuous_contact_manager", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // add_trajectory_link_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->add_trajectory_link_name.data,
      strlen(ros_message->add_trajectory_link_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "add_trajectory_link_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // add_trajectory_link_parent_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->add_trajectory_link_parent_name.data,
      strlen(ros_message->add_trajectory_link_parent_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "add_trajectory_link_parent_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // add_trajectory_link_traj
    PyObject * field = NULL;
    field = tesseract_msgs__msg__joint_trajectory__convert_to_py(&ros_message->add_trajectory_link_traj);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "add_trajectory_link_traj", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // add_trajectory_link_replace_allowed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->add_trajectory_link_replace_allowed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "add_trajectory_link_replace_allowed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
