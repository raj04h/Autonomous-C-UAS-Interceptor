// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/InternalCombustionEngineControl.idl
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
#include "px4_msgs/msg/detail/internal_combustion_engine_control__struct.h"
#include "px4_msgs/msg/detail/internal_combustion_engine_control__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__internal_combustion_engine_control__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[81];
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
    assert(strncmp("px4_msgs.msg._internal_combustion_engine_control.InternalCombustionEngineControl", full_classname_dest, 80) == 0);
  }
  px4_msgs__msg__InternalCombustionEngineControl * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // ignition_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "ignition_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ignition_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // throttle_control
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_control");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_control = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // choke_control
    PyObject * field = PyObject_GetAttrString(_pymsg, "choke_control");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->choke_control = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // starter_engine_control
    PyObject * field = PyObject_GetAttrString(_pymsg, "starter_engine_control");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->starter_engine_control = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // user_request
    PyObject * field = PyObject_GetAttrString(_pymsg, "user_request");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->user_request = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__internal_combustion_engine_control__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InternalCombustionEngineControl */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._internal_combustion_engine_control");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InternalCombustionEngineControl");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__InternalCombustionEngineControl * ros_message = (px4_msgs__msg__InternalCombustionEngineControl *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ignition_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ignition_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ignition_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_control
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_control);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_control", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // choke_control
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->choke_control);
    {
      int rc = PyObject_SetAttrString(_pymessage, "choke_control", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // starter_engine_control
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->starter_engine_control);
    {
      int rc = PyObject_SetAttrString(_pymessage, "starter_engine_control", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // user_request
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->user_request);
    {
      int rc = PyObject_SetAttrString(_pymessage, "user_request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
