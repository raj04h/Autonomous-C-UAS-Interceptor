// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/RangingBeacon.idl
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
#include "px4_msgs/msg/detail/ranging_beacon__struct.h"
#include "px4_msgs/msg/detail/ranging_beacon__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__ranging_beacon__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("px4_msgs.msg._ranging_beacon.RangingBeacon", full_classname_dest, 42) == 0);
  }
  px4_msgs__msg__RangingBeacon * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // timestamp_sample
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp_sample");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp_sample = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // beacon_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "beacon_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->beacon_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // range
    PyObject * field = PyObject_GetAttrString(_pymsg, "range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alt
    PyObject * field = PyObject_GetAttrString(_pymsg, "alt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alt_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "alt_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->alt_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hacc
    PyObject * field = PyObject_GetAttrString(_pymsg, "hacc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hacc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vacc
    PyObject * field = PyObject_GetAttrString(_pymsg, "vacc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vacc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sequence_nr
    PyObject * field = PyObject_GetAttrString(_pymsg, "sequence_nr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sequence_nr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // carrier_freq
    PyObject * field = PyObject_GetAttrString(_pymsg, "carrier_freq");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->carrier_freq = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // range_accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "range_accuracy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range_accuracy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__ranging_beacon__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RangingBeacon */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._ranging_beacon");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RangingBeacon");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__RangingBeacon * ros_message = (px4_msgs__msg__RangingBeacon *)raw_ros_message;
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
  {  // timestamp_sample
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp_sample);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp_sample", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beacon_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->beacon_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beacon_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alt_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->alt_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alt_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hacc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hacc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hacc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vacc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vacc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vacc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sequence_nr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sequence_nr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sequence_nr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // carrier_freq
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->carrier_freq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "carrier_freq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range_accuracy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range_accuracy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range_accuracy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
