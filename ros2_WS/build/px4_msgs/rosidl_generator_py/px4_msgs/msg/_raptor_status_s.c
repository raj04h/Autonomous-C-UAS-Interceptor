// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/RaptorStatus.idl
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
#include "px4_msgs/msg/detail/raptor_status__struct.h"
#include "px4_msgs/msg/detail/raptor_status__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__raptor_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("px4_msgs.msg._raptor_status.RaptorStatus", full_classname_dest, 40) == 0);
  }
  px4_msgs__msg__RaptorStatus * ros_message = _ros_message;
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
  {  // subscription_update_angular_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "subscription_update_angular_velocity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->subscription_update_angular_velocity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // subscription_update_local_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "subscription_update_local_position");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->subscription_update_local_position = (Py_True == field);
    Py_DECREF(field);
  }
  {  // subscription_update_attitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "subscription_update_attitude");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->subscription_update_attitude = (Py_True == field);
    Py_DECREF(field);
  }
  {  // subscription_update_trajectory_setpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "subscription_update_trajectory_setpoint");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->subscription_update_trajectory_setpoint = (Py_True == field);
    Py_DECREF(field);
  }
  {  // subscription_update_vehicle_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "subscription_update_vehicle_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->subscription_update_vehicle_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // exit_reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "exit_reason");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->exit_reason = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // timestamp_last_vehicle_angular_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp_last_vehicle_angular_velocity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp_last_vehicle_angular_velocity = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // timestamp_last_vehicle_local_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp_last_vehicle_local_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp_last_vehicle_local_position = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // timestamp_last_vehicle_attitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp_last_vehicle_attitude");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp_last_vehicle_attitude = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // timestamp_last_trajectory_setpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp_last_trajectory_setpoint");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp_last_trajectory_setpoint = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vehicle_angular_velocity_stale
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_angular_velocity_stale");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vehicle_angular_velocity_stale = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vehicle_local_position_stale
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_local_position_stale");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vehicle_local_position_stale = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vehicle_attitude_stale
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_attitude_stale");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vehicle_attitude_stale = (Py_True == field);
    Py_DECREF(field);
  }
  {  // trajectory_setpoint_stale
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory_setpoint_stale");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->trajectory_setpoint_stale = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active
    PyObject * field = PyObject_GetAttrString(_pymsg, "active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // substep
    PyObject * field = PyObject_GetAttrString(_pymsg, "substep");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->substep = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // control_interval
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_interval");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->control_interval = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // trajectory_setpoint_dt_mean
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory_setpoint_dt_mean");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->trajectory_setpoint_dt_mean = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // trajectory_setpoint_dt_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory_setpoint_dt_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->trajectory_setpoint_dt_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // trajectory_setpoint_dt_max_since_activation
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory_setpoint_dt_max_since_activation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->trajectory_setpoint_dt_max_since_activation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // internal_reference_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "internal_reference_position");
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
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 3;
      float * dest = ros_message->internal_reference_position;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // internal_reference_linear_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "internal_reference_linear_velocity");
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
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 3;
      float * dest = ros_message->internal_reference_linear_velocity;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__raptor_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RaptorStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._raptor_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RaptorStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__RaptorStatus * ros_message = (px4_msgs__msg__RaptorStatus *)raw_ros_message;
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
  {  // subscription_update_angular_velocity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->subscription_update_angular_velocity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "subscription_update_angular_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // subscription_update_local_position
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->subscription_update_local_position ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "subscription_update_local_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // subscription_update_attitude
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->subscription_update_attitude ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "subscription_update_attitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // subscription_update_trajectory_setpoint
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->subscription_update_trajectory_setpoint ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "subscription_update_trajectory_setpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // subscription_update_vehicle_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->subscription_update_vehicle_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "subscription_update_vehicle_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // exit_reason
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->exit_reason);
    {
      int rc = PyObject_SetAttrString(_pymessage, "exit_reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp_last_vehicle_angular_velocity
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->timestamp_last_vehicle_angular_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp_last_vehicle_angular_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp_last_vehicle_local_position
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->timestamp_last_vehicle_local_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp_last_vehicle_local_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp_last_vehicle_attitude
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->timestamp_last_vehicle_attitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp_last_vehicle_attitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp_last_trajectory_setpoint
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->timestamp_last_trajectory_setpoint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp_last_trajectory_setpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_angular_velocity_stale
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vehicle_angular_velocity_stale ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_angular_velocity_stale", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_local_position_stale
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vehicle_local_position_stale ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_local_position_stale", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_attitude_stale
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vehicle_attitude_stale ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_attitude_stale", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trajectory_setpoint_stale
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->trajectory_setpoint_stale ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trajectory_setpoint_stale", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // substep
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->substep);
    {
      int rc = PyObject_SetAttrString(_pymessage, "substep", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_interval
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->control_interval);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_interval", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trajectory_setpoint_dt_mean
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->trajectory_setpoint_dt_mean);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trajectory_setpoint_dt_mean", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trajectory_setpoint_dt_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->trajectory_setpoint_dt_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trajectory_setpoint_dt_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trajectory_setpoint_dt_max_since_activation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->trajectory_setpoint_dt_max_since_activation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trajectory_setpoint_dt_max_since_activation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // internal_reference_position
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "internal_reference_position");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->internal_reference_position[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // internal_reference_linear_velocity
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "internal_reference_linear_velocity");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->internal_reference_linear_velocity[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
