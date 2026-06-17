// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/AirspeedValidated.idl
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
#include "px4_msgs/msg/detail/airspeed_validated__struct.h"
#include "px4_msgs/msg/detail/airspeed_validated__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__airspeed_validated__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("px4_msgs.msg._airspeed_validated.AirspeedValidated", full_classname_dest, 50) == 0);
  }
  px4_msgs__msg__AirspeedValidated * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // indicated_airspeed_m_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "indicated_airspeed_m_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->indicated_airspeed_m_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // calibrated_airspeed_m_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "calibrated_airspeed_m_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->calibrated_airspeed_m_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // true_airspeed_m_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "true_airspeed_m_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->true_airspeed_m_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // airspeed_source
    PyObject * field = PyObject_GetAttrString(_pymsg, "airspeed_source");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->airspeed_source = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // calibrated_ground_minus_wind_m_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "calibrated_ground_minus_wind_m_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->calibrated_ground_minus_wind_m_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // calibraded_airspeed_synth_m_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "calibraded_airspeed_synth_m_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->calibraded_airspeed_synth_m_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // airspeed_derivative_filtered
    PyObject * field = PyObject_GetAttrString(_pymsg, "airspeed_derivative_filtered");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->airspeed_derivative_filtered = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_filtered
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_filtered");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_filtered = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_filtered
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_filtered");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_filtered = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__airspeed_validated__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AirspeedValidated */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._airspeed_validated");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AirspeedValidated");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__AirspeedValidated * ros_message = (px4_msgs__msg__AirspeedValidated *)raw_ros_message;
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
  {  // indicated_airspeed_m_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->indicated_airspeed_m_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "indicated_airspeed_m_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // calibrated_airspeed_m_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->calibrated_airspeed_m_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "calibrated_airspeed_m_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // true_airspeed_m_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->true_airspeed_m_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "true_airspeed_m_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // airspeed_source
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->airspeed_source);
    {
      int rc = PyObject_SetAttrString(_pymessage, "airspeed_source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // calibrated_ground_minus_wind_m_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->calibrated_ground_minus_wind_m_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "calibrated_ground_minus_wind_m_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // calibraded_airspeed_synth_m_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->calibraded_airspeed_synth_m_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "calibraded_airspeed_synth_m_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // airspeed_derivative_filtered
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->airspeed_derivative_filtered);
    {
      int rc = PyObject_SetAttrString(_pymessage, "airspeed_derivative_filtered", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_filtered
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_filtered);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_filtered", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_filtered
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_filtered);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_filtered", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
