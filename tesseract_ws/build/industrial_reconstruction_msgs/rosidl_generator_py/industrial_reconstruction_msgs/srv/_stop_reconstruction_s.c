// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from industrial_reconstruction_msgs:srv/StopReconstruction.idl
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
#include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__struct.h"
#include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "industrial_reconstruction_msgs/msg/detail/normal_filter_params__functions.h"
// end nested array functions include
bool industrial_reconstruction_msgs__msg__normal_filter_params__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * industrial_reconstruction_msgs__msg__normal_filter_params__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool industrial_reconstruction_msgs__srv__stop_reconstruction__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[83];
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
    assert(strncmp("industrial_reconstruction_msgs.srv._stop_reconstruction.StopReconstruction_Request", full_classname_dest, 82) == 0);
  }
  industrial_reconstruction_msgs__srv__StopReconstruction_Request * ros_message = _ros_message;
  {  // archive_directory
    PyObject * field = PyObject_GetAttrString(_pymsg, "archive_directory");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->archive_directory, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // mesh_filepath
    PyObject * field = PyObject_GetAttrString(_pymsg, "mesh_filepath");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->mesh_filepath, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // min_num_faces
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_num_faces");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->min_num_faces = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // normal_filters
    PyObject * field = PyObject_GetAttrString(_pymsg, "normal_filters");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'normal_filters'");
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
    if (!industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__init(&(ros_message->normal_filters), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    industrial_reconstruction_msgs__msg__NormalFilterParams * dest = ros_message->normal_filters.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!industrial_reconstruction_msgs__msg__normal_filter_params__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * industrial_reconstruction_msgs__srv__stop_reconstruction__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of StopReconstruction_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("industrial_reconstruction_msgs.srv._stop_reconstruction");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StopReconstruction_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  industrial_reconstruction_msgs__srv__StopReconstruction_Request * ros_message = (industrial_reconstruction_msgs__srv__StopReconstruction_Request *)raw_ros_message;
  {  // archive_directory
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->archive_directory.data,
      strlen(ros_message->archive_directory.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "archive_directory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mesh_filepath
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->mesh_filepath.data,
      strlen(ros_message->mesh_filepath.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mesh_filepath", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_num_faces
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->min_num_faces);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_num_faces", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // normal_filters
    PyObject * field = NULL;
    size_t size = ros_message->normal_filters.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    industrial_reconstruction_msgs__msg__NormalFilterParams * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->normal_filters.data[i]);
      PyObject * pyitem = industrial_reconstruction_msgs__msg__normal_filter_params__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "normal_filters", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__struct.h"
// already included above
// #include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool industrial_reconstruction_msgs__srv__stop_reconstruction__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[84];
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
    assert(strncmp("industrial_reconstruction_msgs.srv._stop_reconstruction.StopReconstruction_Response", full_classname_dest, 83) == 0);
  }
  industrial_reconstruction_msgs__srv__StopReconstruction_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * industrial_reconstruction_msgs__srv__stop_reconstruction__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of StopReconstruction_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("industrial_reconstruction_msgs.srv._stop_reconstruction");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StopReconstruction_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  industrial_reconstruction_msgs__srv__StopReconstruction_Response * ros_message = (industrial_reconstruction_msgs__srv__StopReconstruction_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
