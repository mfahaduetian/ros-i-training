// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tesseract_msgs:msg/Inertial.idl
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
#include "tesseract_msgs/msg/detail/inertial__struct.h"
#include "tesseract_msgs/msg/detail/inertial__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tesseract_msgs__msg__inertial__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("tesseract_msgs.msg._inertial.Inertial", full_classname_dest, 37) == 0);
  }
  tesseract_msgs__msg__Inertial * ros_message = _ros_message;
  {  // origin
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->origin)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // mass
    PyObject * field = PyObject_GetAttrString(_pymsg, "mass");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mass = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ixx
    PyObject * field = PyObject_GetAttrString(_pymsg, "ixx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ixx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ixy
    PyObject * field = PyObject_GetAttrString(_pymsg, "ixy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ixy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ixz
    PyObject * field = PyObject_GetAttrString(_pymsg, "ixz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ixz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // iyy
    PyObject * field = PyObject_GetAttrString(_pymsg, "iyy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->iyy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // iyz
    PyObject * field = PyObject_GetAttrString(_pymsg, "iyz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->iyz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // izz
    PyObject * field = PyObject_GetAttrString(_pymsg, "izz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->izz = PyFloat_AS_DOUBLE(field);
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
PyObject * tesseract_msgs__msg__inertial__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Inertial */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tesseract_msgs.msg._inertial");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Inertial");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tesseract_msgs__msg__Inertial * ros_message = (tesseract_msgs__msg__Inertial *)raw_ros_message;
  {  // origin
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->origin);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mass
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mass);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mass", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ixx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ixx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ixx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ixy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ixy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ixy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ixz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ixz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ixz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // iyy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->iyy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "iyy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // iyz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->iyz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "iyz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // izz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->izz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "izz", field);
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
