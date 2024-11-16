// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from inversekinematics_interfaces:srv/InverseKinematicsPose.idl
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
#include "inversekinematics_interfaces/srv/detail/inverse_kinematics_pose__struct.h"
#include "inversekinematics_interfaces/srv/detail/inverse_kinematics_pose__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool inversekinematics_interfaces__srv__inverse_kinematics_pose__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[88];
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
    assert(strncmp("inversekinematics_interfaces.srv._inverse_kinematics_pose.InverseKinematicsPose_Request", full_classname_dest, 87) == 0);
  }
  inversekinematics_interfaces__srv__InverseKinematicsPose_Request * ros_message = _ros_message;
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z
    PyObject * field = PyObject_GetAttrString(_pymsg, "z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // qx
    PyObject * field = PyObject_GetAttrString(_pymsg, "qx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->qx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // qy
    PyObject * field = PyObject_GetAttrString(_pymsg, "qy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->qy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // qz
    PyObject * field = PyObject_GetAttrString(_pymsg, "qz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->qz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // qw
    PyObject * field = PyObject_GetAttrString(_pymsg, "qw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->qw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * inversekinematics_interfaces__srv__inverse_kinematics_pose__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InverseKinematicsPose_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("inversekinematics_interfaces.srv._inverse_kinematics_pose");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InverseKinematicsPose_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  inversekinematics_interfaces__srv__InverseKinematicsPose_Request * ros_message = (inversekinematics_interfaces__srv__InverseKinematicsPose_Request *)raw_ros_message;
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->qx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->qy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->qz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->qw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "inversekinematics_interfaces/srv/detail/inverse_kinematics_pose__struct.h"
// already included above
// #include "inversekinematics_interfaces/srv/detail/inverse_kinematics_pose__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool inversekinematics_interfaces__srv__inverse_kinematics_pose__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[89];
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
    assert(strncmp("inversekinematics_interfaces.srv._inverse_kinematics_pose.InverseKinematicsPose_Response", full_classname_dest, 88) == 0);
  }
  inversekinematics_interfaces__srv__InverseKinematicsPose_Response * ros_message = _ros_message;
  {  // joint1
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // joint2
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // joint3
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // joint4
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint4 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gripper
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gripper = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * inversekinematics_interfaces__srv__inverse_kinematics_pose__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InverseKinematicsPose_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("inversekinematics_interfaces.srv._inverse_kinematics_pose");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InverseKinematicsPose_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  inversekinematics_interfaces__srv__InverseKinematicsPose_Response * ros_message = (inversekinematics_interfaces__srv__InverseKinematicsPose_Response *)raw_ros_message;
  {  // joint1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gripper
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gripper);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
