// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/FixedWingLongitudinalSetpoint.idl
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
#include "px4_msgs/msg/detail/fixed_wing_longitudinal_setpoint__struct.h"
#include "px4_msgs/msg/detail/fixed_wing_longitudinal_setpoint__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__fixed_wing_longitudinal_setpoint__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[77];
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
    assert(strncmp("px4_msgs.msg._fixed_wing_longitudinal_setpoint.FixedWingLongitudinalSetpoint", full_classname_dest, 76) == 0);
  }
  px4_msgs__msg__FixedWingLongitudinalSetpoint * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // altitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->altitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // equivalent_airspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "equivalent_airspeed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->equivalent_airspeed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_direct
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_direct");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_direct = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_direct
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_direct");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_direct = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__fixed_wing_longitudinal_setpoint__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FixedWingLongitudinalSetpoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._fixed_wing_longitudinal_setpoint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FixedWingLongitudinalSetpoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__FixedWingLongitudinalSetpoint * ros_message = (px4_msgs__msg__FixedWingLongitudinalSetpoint *)raw_ros_message;
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
  {  // altitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->altitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // equivalent_airspeed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->equivalent_airspeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "equivalent_airspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_direct
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_direct);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_direct", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_direct
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_direct);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_direct", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
