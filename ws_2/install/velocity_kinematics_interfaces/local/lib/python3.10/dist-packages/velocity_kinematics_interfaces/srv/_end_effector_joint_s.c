// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from velocity_kinematics_interfaces:srv/EndEffectorJoint.idl
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
#include "velocity_kinematics_interfaces/srv/detail/end_effector_joint__struct.h"
#include "velocity_kinematics_interfaces/srv/detail/end_effector_joint__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool velocity_kinematics_interfaces__srv__end_effector_joint__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[80];
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
    assert(strncmp("velocity_kinematics_interfaces.srv._end_effector_joint.EndEffectorJoint_Request", full_classname_dest, 79) == 0);
  }
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Request * ros_message = _ros_message;
  {  // vx
    PyObject * field = PyObject_GetAttrString(_pymsg, "vx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vy
    PyObject * field = PyObject_GetAttrString(_pymsg, "vy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vz
    PyObject * field = PyObject_GetAttrString(_pymsg, "vz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wx
    PyObject * field = PyObject_GetAttrString(_pymsg, "wx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wy
    PyObject * field = PyObject_GetAttrString(_pymsg, "wy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wz
    PyObject * field = PyObject_GetAttrString(_pymsg, "wz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * velocity_kinematics_interfaces__srv__end_effector_joint__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EndEffectorJoint_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("velocity_kinematics_interfaces.srv._end_effector_joint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EndEffectorJoint_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Request * ros_message = (velocity_kinematics_interfaces__srv__EndEffectorJoint_Request *)raw_ros_message;
  {  // vx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wz", field);
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
// #include "velocity_kinematics_interfaces/srv/detail/end_effector_joint__struct.h"
// already included above
// #include "velocity_kinematics_interfaces/srv/detail/end_effector_joint__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool velocity_kinematics_interfaces__srv__end_effector_joint__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[81];
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
    assert(strncmp("velocity_kinematics_interfaces.srv._end_effector_joint.EndEffectorJoint_Response", full_classname_dest, 80) == 0);
  }
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Response * ros_message = _ros_message;
  {  // joint_vel1
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_vel1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint_vel1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // joint_vel2
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_vel2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint_vel2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // joint_vel3
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_vel3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint_vel3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // joint_vel4
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_vel4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint_vel4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * velocity_kinematics_interfaces__srv__end_effector_joint__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EndEffectorJoint_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("velocity_kinematics_interfaces.srv._end_effector_joint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EndEffectorJoint_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  velocity_kinematics_interfaces__srv__EndEffectorJoint_Response * ros_message = (velocity_kinematics_interfaces__srv__EndEffectorJoint_Response *)raw_ros_message;
  {  // joint_vel1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint_vel1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_vel1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_vel2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint_vel2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_vel2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_vel3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint_vel3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_vel3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_vel4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint_vel4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_vel4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
