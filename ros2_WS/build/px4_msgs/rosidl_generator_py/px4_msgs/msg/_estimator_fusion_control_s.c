// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/EstimatorFusionControl.idl
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
#include "px4_msgs/msg/detail/estimator_fusion_control__struct.h"
#include "px4_msgs/msg/detail/estimator_fusion_control__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__estimator_fusion_control__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("px4_msgs.msg._estimator_fusion_control.EstimatorFusionControl", full_classname_dest, 61) == 0);
  }
  px4_msgs__msg__EstimatorFusionControl * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // gps_intended
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_intended");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'gps_intended'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 2;
      bool * dest = ros_message->gps_intended;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // of_intended
    PyObject * field = PyObject_GetAttrString(_pymsg, "of_intended");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->of_intended = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ev_intended
    PyObject * field = PyObject_GetAttrString(_pymsg, "ev_intended");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ev_intended = (Py_True == field);
    Py_DECREF(field);
  }
  {  // agp_intended
    PyObject * field = PyObject_GetAttrString(_pymsg, "agp_intended");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'agp_intended'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 4;
      bool * dest = ros_message->agp_intended;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // baro_intended
    PyObject * field = PyObject_GetAttrString(_pymsg, "baro_intended");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->baro_intended = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rng_intended
    PyObject * field = PyObject_GetAttrString(_pymsg, "rng_intended");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rng_intended = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mag_intended
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_intended");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mag_intended = (Py_True == field);
    Py_DECREF(field);
  }
  {  // aspd_intended
    PyObject * field = PyObject_GetAttrString(_pymsg, "aspd_intended");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->aspd_intended = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rngbcn_intended
    PyObject * field = PyObject_GetAttrString(_pymsg, "rngbcn_intended");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rngbcn_intended = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_active");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'gps_active'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 2;
      bool * dest = ros_message->gps_active;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // of_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "of_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->of_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ev_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "ev_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ev_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // agp_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "agp_active");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'agp_active'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 4;
      bool * dest = ros_message->agp_active;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // baro_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "baro_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->baro_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rng_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "rng_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rng_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mag_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mag_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // aspd_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "aspd_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->aspd_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rngbcn_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "rngbcn_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rngbcn_active = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__estimator_fusion_control__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EstimatorFusionControl */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._estimator_fusion_control");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EstimatorFusionControl");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__EstimatorFusionControl * ros_message = (px4_msgs__msg__EstimatorFusionControl *)raw_ros_message;
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
  {  // gps_intended
    PyObject * field = NULL;
    size_t size = 2;
    bool * src = ros_message->gps_intended;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_intended", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // of_intended
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->of_intended ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "of_intended", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ev_intended
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ev_intended ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ev_intended", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // agp_intended
    PyObject * field = NULL;
    size_t size = 4;
    bool * src = ros_message->agp_intended;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "agp_intended", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // baro_intended
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->baro_intended ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "baro_intended", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rng_intended
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rng_intended ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rng_intended", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_intended
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mag_intended ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_intended", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aspd_intended
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->aspd_intended ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aspd_intended", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rngbcn_intended
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rngbcn_intended ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rngbcn_intended", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_active
    PyObject * field = NULL;
    size_t size = 2;
    bool * src = ros_message->gps_active;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // of_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->of_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "of_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ev_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ev_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ev_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // agp_active
    PyObject * field = NULL;
    size_t size = 4;
    bool * src = ros_message->agp_active;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "agp_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // baro_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->baro_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "baro_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rng_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rng_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rng_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mag_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aspd_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->aspd_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aspd_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rngbcn_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rngbcn_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rngbcn_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
