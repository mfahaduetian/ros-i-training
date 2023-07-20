// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tesseract_msgs:msg/PlanningRequest.idl
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
#include "tesseract_msgs/msg/detail/planning_request__struct.h"
#include "tesseract_msgs/msg/detail/planning_request__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "tesseract_msgs/msg/detail/environment_command__functions.h"
// end nested array functions include
bool tesseract_msgs__msg__environment_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__environment_state__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__environment_command__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__environment_command__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__planner_profile_remapping__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__planner_profile_remapping__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__planner_profile_remapping__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__planner_profile_remapping__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tesseract_msgs__msg__planning_request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("tesseract_msgs.msg._planning_request.PlanningRequest", full_classname_dest, 52) == 0);
  }
  tesseract_msgs__msg__PlanningRequest * ros_message = _ros_message;
  {  // environment_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "environment_state");
    if (!field) {
      return false;
    }
    if (!tesseract_msgs__msg__environment_state__convert_from_py(field, &ros_message->environment_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // commands
    PyObject * field = PyObject_GetAttrString(_pymsg, "commands");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'commands'");
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
    if (!tesseract_msgs__msg__EnvironmentCommand__Sequence__init(&(ros_message->commands), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create tesseract_msgs__msg__EnvironmentCommand__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    tesseract_msgs__msg__EnvironmentCommand * dest = ros_message->commands.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!tesseract_msgs__msg__environment_command__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // executor
    PyObject * field = PyObject_GetAttrString(_pymsg, "executor");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->executor, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // instructions
    PyObject * field = PyObject_GetAttrString(_pymsg, "instructions");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->instructions, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // dotgraph
    PyObject * field = PyObject_GetAttrString(_pymsg, "dotgraph");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dotgraph = (Py_True == field);
    Py_DECREF(field);
  }
  {  // debug
    PyObject * field = PyObject_GetAttrString(_pymsg, "debug");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->debug = (Py_True == field);
    Py_DECREF(field);
  }
  {  // save_io
    PyObject * field = PyObject_GetAttrString(_pymsg, "save_io");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->save_io = (Py_True == field);
    Py_DECREF(field);
  }
  {  // move_profile_remapping
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_profile_remapping");
    if (!field) {
      return false;
    }
    if (!tesseract_msgs__msg__planner_profile_remapping__convert_from_py(field, &ros_message->move_profile_remapping)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // composite_profile_remapping
    PyObject * field = PyObject_GetAttrString(_pymsg, "composite_profile_remapping");
    if (!field) {
      return false;
    }
    if (!tesseract_msgs__msg__planner_profile_remapping__convert_from_py(field, &ros_message->composite_profile_remapping)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tesseract_msgs__msg__planning_request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlanningRequest */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tesseract_msgs.msg._planning_request");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlanningRequest");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tesseract_msgs__msg__PlanningRequest * ros_message = (tesseract_msgs__msg__PlanningRequest *)raw_ros_message;
  {  // environment_state
    PyObject * field = NULL;
    field = tesseract_msgs__msg__environment_state__convert_to_py(&ros_message->environment_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "environment_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // commands
    PyObject * field = NULL;
    size_t size = ros_message->commands.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    tesseract_msgs__msg__EnvironmentCommand * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->commands.data[i]);
      PyObject * pyitem = tesseract_msgs__msg__environment_command__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "commands", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // executor
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->executor.data,
      strlen(ros_message->executor.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "executor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // instructions
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->instructions.data,
      strlen(ros_message->instructions.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "instructions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dotgraph
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dotgraph ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dotgraph", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // debug
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->debug ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "debug", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // save_io
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->save_io ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "save_io", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // move_profile_remapping
    PyObject * field = NULL;
    field = tesseract_msgs__msg__planner_profile_remapping__convert_to_py(&ros_message->move_profile_remapping);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_profile_remapping", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // composite_profile_remapping
    PyObject * field = NULL;
    field = tesseract_msgs__msg__planner_profile_remapping__convert_to_py(&ros_message->composite_profile_remapping);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "composite_profile_remapping", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
