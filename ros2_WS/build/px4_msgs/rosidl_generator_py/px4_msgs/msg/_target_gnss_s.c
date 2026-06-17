// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/TargetGnss.idl
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
#include "px4_msgs/msg/detail/target_gnss__struct.h"
#include "px4_msgs/msg/detail/target_gnss__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__target_gnss__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("px4_msgs.msg._target_gnss.TargetGnss", full_classname_dest, 36) == 0);
  }
  px4_msgs__msg__TargetGnss * ros_message = _ros_message;
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
  {  // latitude_deg
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude_deg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitude_deg = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude_deg
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude_deg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude_deg = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // altitude_msl_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude_msl_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->altitude_msl_m = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // eph
    PyObject * field = PyObject_GetAttrString(_pymsg, "eph");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->eph = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // epv
    PyObject * field = PyObject_GetAttrString(_pymsg, "epv");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->epv = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // abs_pos_updated
    PyObject * field = PyObject_GetAttrString(_pymsg, "abs_pos_updated");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->abs_pos_updated = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vel_n_m_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_n_m_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_n_m_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_e_m_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_e_m_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_e_m_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_d_m_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_d_m_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_d_m_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // s_acc_m_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "s_acc_m_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->s_acc_m_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_ned_updated
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_ned_updated");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vel_ned_updated = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__target_gnss__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TargetGnss */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._target_gnss");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TargetGnss");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__TargetGnss * ros_message = (px4_msgs__msg__TargetGnss *)raw_ros_message;
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
  {  // latitude_deg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitude_deg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude_deg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude_deg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude_deg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude_deg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // altitude_msl_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->altitude_msl_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude_msl_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eph
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->eph);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eph", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // epv
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->epv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "epv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // abs_pos_updated
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->abs_pos_updated ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "abs_pos_updated", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_n_m_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_n_m_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_n_m_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_e_m_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_e_m_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_e_m_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_d_m_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_d_m_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_d_m_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // s_acc_m_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->s_acc_m_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s_acc_m_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_ned_updated
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vel_ned_updated ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_ned_updated", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
