// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/LongitudinalControlConfiguration.idl
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
#include "px4_msgs/msg/detail/longitudinal_control_configuration__struct.h"
#include "px4_msgs/msg/detail/longitudinal_control_configuration__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__longitudinal_control_configuration__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[82];
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
    assert(strncmp("px4_msgs.msg._longitudinal_control_configuration.LongitudinalControlConfiguration", full_classname_dest, 81) == 0);
  }
  px4_msgs__msg__LongitudinalControlConfiguration * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // pitch_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // climb_rate_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "climb_rate_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->climb_rate_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sink_rate_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "sink_rate_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sink_rate_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_weight
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_weight");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_weight = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // enforce_low_height_condition
    PyObject * field = PyObject_GetAttrString(_pymsg, "enforce_low_height_condition");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enforce_low_height_condition = (Py_True == field);
    Py_DECREF(field);
  }
  {  // disable_underspeed_protection
    PyObject * field = PyObject_GetAttrString(_pymsg, "disable_underspeed_protection");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->disable_underspeed_protection = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__longitudinal_control_configuration__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LongitudinalControlConfiguration */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._longitudinal_control_configuration");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LongitudinalControlConfiguration");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__LongitudinalControlConfiguration * ros_message = (px4_msgs__msg__LongitudinalControlConfiguration *)raw_ros_message;
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
  {  // pitch_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // climb_rate_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->climb_rate_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "climb_rate_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sink_rate_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sink_rate_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sink_rate_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_weight
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_weight);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_weight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enforce_low_height_condition
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enforce_low_height_condition ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enforce_low_height_condition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disable_underspeed_protection
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->disable_underspeed_protection ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disable_underspeed_protection", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
