// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tesseract_msgs:msg/CollisionMarginData.idl
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
#include "tesseract_msgs/msg/detail/collision_margin_data__struct.h"
#include "tesseract_msgs/msg/detail/collision_margin_data__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "tesseract_msgs/msg/detail/contact_margin_pair__functions.h"
// end nested array functions include
bool tesseract_msgs__msg__contact_margin_pair__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__contact_margin_pair__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tesseract_msgs__msg__collision_margin_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("tesseract_msgs.msg._collision_margin_data.CollisionMarginData", full_classname_dest, 61) == 0);
  }
  tesseract_msgs__msg__CollisionMarginData * ros_message = _ros_message;
  {  // default_margin
    PyObject * field = PyObject_GetAttrString(_pymsg, "default_margin");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->default_margin = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // margin_pairs
    PyObject * field = PyObject_GetAttrString(_pymsg, "margin_pairs");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'margin_pairs'");
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
    if (!tesseract_msgs__msg__ContactMarginPair__Sequence__init(&(ros_message->margin_pairs), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create tesseract_msgs__msg__ContactMarginPair__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    tesseract_msgs__msg__ContactMarginPair * dest = ros_message->margin_pairs.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!tesseract_msgs__msg__contact_margin_pair__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tesseract_msgs__msg__collision_margin_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CollisionMarginData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tesseract_msgs.msg._collision_margin_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CollisionMarginData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tesseract_msgs__msg__CollisionMarginData * ros_message = (tesseract_msgs__msg__CollisionMarginData *)raw_ros_message;
  {  // default_margin
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->default_margin);
    {
      int rc = PyObject_SetAttrString(_pymessage, "default_margin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // margin_pairs
    PyObject * field = NULL;
    size_t size = ros_message->margin_pairs.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    tesseract_msgs__msg__ContactMarginPair * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->margin_pairs.data[i]);
      PyObject * pyitem = tesseract_msgs__msg__contact_margin_pair__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "margin_pairs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
