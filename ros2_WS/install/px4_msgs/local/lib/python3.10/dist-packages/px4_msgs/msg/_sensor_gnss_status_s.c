// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/SensorGnssStatus.idl
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
#include "px4_msgs/msg/detail/sensor_gnss_status__struct.h"
#include "px4_msgs/msg/detail/sensor_gnss_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__sensor_gnss_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("px4_msgs.msg._sensor_gnss_status.SensorGnssStatus", full_classname_dest, 49) == 0);
  }
  px4_msgs__msg__SensorGnssStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // device_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->device_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // quality_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "quality_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->quality_available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // quality_corrections
    PyObject * field = PyObject_GetAttrString(_pymsg, "quality_corrections");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->quality_corrections = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // quality_receiver
    PyObject * field = PyObject_GetAttrString(_pymsg, "quality_receiver");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->quality_receiver = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // quality_gnss_signals
    PyObject * field = PyObject_GetAttrString(_pymsg, "quality_gnss_signals");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->quality_gnss_signals = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // quality_post_processing
    PyObject * field = PyObject_GetAttrString(_pymsg, "quality_post_processing");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->quality_post_processing = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__sensor_gnss_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SensorGnssStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._sensor_gnss_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SensorGnssStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__SensorGnssStatus * ros_message = (px4_msgs__msg__SensorGnssStatus *)raw_ros_message;
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
  {  // device_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->device_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quality_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->quality_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quality_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quality_corrections
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->quality_corrections);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quality_corrections", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quality_receiver
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->quality_receiver);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quality_receiver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quality_gnss_signals
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->quality_gnss_signals);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quality_gnss_signals", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quality_post_processing
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->quality_post_processing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quality_post_processing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
