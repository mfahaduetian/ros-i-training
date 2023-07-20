// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tesseract_msgs:msg/JointCalibration.idl
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
#include "tesseract_msgs/msg/detail/joint_calibration__struct.h"
#include "tesseract_msgs/msg/detail/joint_calibration__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tesseract_msgs__msg__joint_calibration__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("tesseract_msgs.msg._joint_calibration.JointCalibration", full_classname_dest, 54) == 0);
  }
  tesseract_msgs__msg__JointCalibration * ros_message = _ros_message;
  {  // reference_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->reference_position = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rising
    PyObject * field = PyObject_GetAttrString(_pymsg, "rising");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rising = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // falling
    PyObject * field = PyObject_GetAttrString(_pymsg, "falling");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->falling = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // empty
    PyObject * field = PyObject_GetAttrString(_pymsg, "empty");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->empty = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tesseract_msgs__msg__joint_calibration__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of JointCalibration */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tesseract_msgs.msg._joint_calibration");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JointCalibration");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tesseract_msgs__msg__JointCalibration * ros_message = (tesseract_msgs__msg__JointCalibration *)raw_ros_message;
  {  // reference_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->reference_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rising
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rising);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rising", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // falling
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->falling);
    {
      int rc = PyObject_SetAttrString(_pymessage, "falling", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // empty
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->empty ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "empty", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
