// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tesseract_msgs:msg/GroupsKinematicPlugins.idl
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
#include "tesseract_msgs/msg/detail/groups_kinematic_plugins__struct.h"
#include "tesseract_msgs/msg/detail/groups_kinematic_plugins__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool tesseract_msgs__msg__plugin_info_container__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__plugin_info_container__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tesseract_msgs__msg__groups_kinematic_plugins__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("tesseract_msgs.msg._groups_kinematic_plugins.GroupsKinematicPlugins", full_classname_dest, 67) == 0);
  }
  tesseract_msgs__msg__GroupsKinematicPlugins * ros_message = _ros_message;
  {  // group
    PyObject * field = PyObject_GetAttrString(_pymsg, "group");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->group, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // plugin_container
    PyObject * field = PyObject_GetAttrString(_pymsg, "plugin_container");
    if (!field) {
      return false;
    }
    if (!tesseract_msgs__msg__plugin_info_container__convert_from_py(field, &ros_message->plugin_container)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tesseract_msgs__msg__groups_kinematic_plugins__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GroupsKinematicPlugins */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tesseract_msgs.msg._groups_kinematic_plugins");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GroupsKinematicPlugins");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tesseract_msgs__msg__GroupsKinematicPlugins * ros_message = (tesseract_msgs__msg__GroupsKinematicPlugins *)raw_ros_message;
  {  // group
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->group.data,
      strlen(ros_message->group.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "group", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plugin_container
    PyObject * field = NULL;
    field = tesseract_msgs__msg__plugin_info_container__convert_to_py(&ros_message->plugin_container);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "plugin_container", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}