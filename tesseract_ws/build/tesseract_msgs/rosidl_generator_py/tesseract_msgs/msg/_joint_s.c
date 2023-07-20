// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tesseract_msgs:msg/Joint.idl
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
#include "tesseract_msgs/msg/detail/joint__struct.h"
#include "tesseract_msgs/msg/detail/joint__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__joint_limits__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__joint_limits__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__joint_dynamics__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__joint_dynamics__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__joint_safety__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__joint_safety__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__joint_calibration__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__joint_calibration__convert_to_py(void * raw_ros_message);
bool tesseract_msgs__msg__joint_mimic__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tesseract_msgs__msg__joint_mimic__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tesseract_msgs__msg__joint__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[32];
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
    assert(strncmp("tesseract_msgs.msg._joint.Joint", full_classname_dest, 31) == 0);
  }
  tesseract_msgs__msg__Joint * ros_message = _ros_message;
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
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // axis
    PyObject * field = PyObject_GetAttrString(_pymsg, "axis");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 3;
      double * dest = ros_message->axis;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // child_link_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "child_link_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->child_link_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // parent_link_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "parent_link_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->parent_link_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // parent_to_joint_origin_transform
    PyObject * field = PyObject_GetAttrString(_pymsg, "parent_to_joint_origin_transform");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->parent_to_joint_origin_transform)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // limits
    PyObject * field = PyObject_GetAttrString(_pymsg, "limits");
    if (!field) {
      return false;
    }
    if (!tesseract_msgs__msg__joint_limits__convert_from_py(field, &ros_message->limits)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // dynamics
    PyObject * field = PyObject_GetAttrString(_pymsg, "dynamics");
    if (!field) {
      return false;
    }
    if (!tesseract_msgs__msg__joint_dynamics__convert_from_py(field, &ros_message->dynamics)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // safety
    PyObject * field = PyObject_GetAttrString(_pymsg, "safety");
    if (!field) {
      return false;
    }
    if (!tesseract_msgs__msg__joint_safety__convert_from_py(field, &ros_message->safety)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // calibration
    PyObject * field = PyObject_GetAttrString(_pymsg, "calibration");
    if (!field) {
      return false;
    }
    if (!tesseract_msgs__msg__joint_calibration__convert_from_py(field, &ros_message->calibration)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // mimic
    PyObject * field = PyObject_GetAttrString(_pymsg, "mimic");
    if (!field) {
      return false;
    }
    if (!tesseract_msgs__msg__joint_mimic__convert_from_py(field, &ros_message->mimic)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tesseract_msgs__msg__joint__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Joint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tesseract_msgs.msg._joint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Joint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tesseract_msgs__msg__Joint * ros_message = (tesseract_msgs__msg__Joint *)raw_ros_message;
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
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axis
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "axis");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->axis[0]);
    memcpy(dst, src, 3 * sizeof(double));
    Py_DECREF(field);
  }
  {  // child_link_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->child_link_name.data,
      strlen(ros_message->child_link_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "child_link_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parent_link_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->parent_link_name.data,
      strlen(ros_message->parent_link_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "parent_link_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parent_to_joint_origin_transform
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->parent_to_joint_origin_transform);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "parent_to_joint_origin_transform", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // limits
    PyObject * field = NULL;
    field = tesseract_msgs__msg__joint_limits__convert_to_py(&ros_message->limits);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "limits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dynamics
    PyObject * field = NULL;
    field = tesseract_msgs__msg__joint_dynamics__convert_to_py(&ros_message->dynamics);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "dynamics", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safety
    PyObject * field = NULL;
    field = tesseract_msgs__msg__joint_safety__convert_to_py(&ros_message->safety);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "safety", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // calibration
    PyObject * field = NULL;
    field = tesseract_msgs__msg__joint_calibration__convert_to_py(&ros_message->calibration);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "calibration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mimic
    PyObject * field = NULL;
    field = tesseract_msgs__msg__joint_mimic__convert_to_py(&ros_message->mimic);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mimic", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
