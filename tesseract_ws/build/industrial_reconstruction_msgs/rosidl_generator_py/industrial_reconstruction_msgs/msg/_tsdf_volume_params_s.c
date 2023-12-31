// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from industrial_reconstruction_msgs:msg/TSDFVolumeParams.idl
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
#include "industrial_reconstruction_msgs/msg/detail/tsdf_volume_params__struct.h"
#include "industrial_reconstruction_msgs/msg/detail/tsdf_volume_params__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool industrial_reconstruction_msgs__msg__tsdf_volume_params__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[72];
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
    assert(strncmp("industrial_reconstruction_msgs.msg._tsdf_volume_params.TSDFVolumeParams", full_classname_dest, 71) == 0);
  }
  industrial_reconstruction_msgs__msg__TSDFVolumeParams * ros_message = _ros_message;
  {  // voxel_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "voxel_length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->voxel_length = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sdf_trunc
    PyObject * field = PyObject_GetAttrString(_pymsg, "sdf_trunc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sdf_trunc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_box_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_box_values");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->min_box_values)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // max_box_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_box_values");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->max_box_values)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * industrial_reconstruction_msgs__msg__tsdf_volume_params__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TSDFVolumeParams */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("industrial_reconstruction_msgs.msg._tsdf_volume_params");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TSDFVolumeParams");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  industrial_reconstruction_msgs__msg__TSDFVolumeParams * ros_message = (industrial_reconstruction_msgs__msg__TSDFVolumeParams *)raw_ros_message;
  {  // voxel_length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->voxel_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voxel_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sdf_trunc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sdf_trunc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sdf_trunc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_box_values
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->min_box_values);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_box_values", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_box_values
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->max_box_values);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_box_values", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
