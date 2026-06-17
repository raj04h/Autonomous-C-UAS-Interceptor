// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/OpenDroneIdSystem.idl
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
#include "px4_msgs/msg/detail/open_drone_id_system__struct.h"
#include "px4_msgs/msg/detail/open_drone_id_system__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__open_drone_id_system__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("px4_msgs.msg._open_drone_id_system.OpenDroneIdSystem", full_classname_dest, 52) == 0);
  }
  px4_msgs__msg__OpenDroneIdSystem * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // id_or_mac
    PyObject * field = PyObject_GetAttrString(_pymsg, "id_or_mac");
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
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 20;
      uint8_t * dest = ros_message->id_or_mac;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // operator_location_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "operator_location_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->operator_location_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // classification_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "classification_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->classification_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // operator_latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "operator_latitude");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->operator_latitude = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // operator_longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "operator_longitude");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->operator_longitude = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // area_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "area_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->area_count = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // area_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "area_radius");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->area_radius = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // area_ceiling
    PyObject * field = PyObject_GetAttrString(_pymsg, "area_ceiling");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->area_ceiling = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // area_floor
    PyObject * field = PyObject_GetAttrString(_pymsg, "area_floor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->area_floor = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // category_eu
    PyObject * field = PyObject_GetAttrString(_pymsg, "category_eu");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->category_eu = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // class_eu
    PyObject * field = PyObject_GetAttrString(_pymsg, "class_eu");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->class_eu = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // operator_altitude_geo
    PyObject * field = PyObject_GetAttrString(_pymsg, "operator_altitude_geo");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->operator_altitude_geo = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__open_drone_id_system__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OpenDroneIdSystem */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._open_drone_id_system");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OpenDroneIdSystem");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__OpenDroneIdSystem * ros_message = (px4_msgs__msg__OpenDroneIdSystem *)raw_ros_message;
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
  {  // id_or_mac
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "id_or_mac");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->id_or_mac[0]);
    memcpy(dst, src, 20 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // operator_location_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->operator_location_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "operator_location_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // classification_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->classification_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "classification_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // operator_latitude
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->operator_latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "operator_latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // operator_longitude
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->operator_longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "operator_longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // area_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->area_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "area_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // area_radius
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->area_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "area_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // area_ceiling
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->area_ceiling);
    {
      int rc = PyObject_SetAttrString(_pymessage, "area_ceiling", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // area_floor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->area_floor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "area_floor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // category_eu
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->category_eu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "category_eu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // class_eu
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->class_eu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "class_eu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // operator_altitude_geo
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->operator_altitude_geo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "operator_altitude_geo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
