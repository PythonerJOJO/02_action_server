// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from base_interfaces:action/Angle.idl
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
#include "base_interfaces/action/detail/angle__struct.h"
#include "base_interfaces/action/detail/angle__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces__action__angle__goal__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("base_interfaces.action._angle.Angle_Goal", full_classname_dest, 40) == 0);
  }
  base_interfaces__action__Angle_Goal * ros_message = _ros_message;
  {  // req_angle1
    PyObject * field = PyObject_GetAttrString(_pymsg, "req_angle1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->req_angle1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // req_angle2
    PyObject * field = PyObject_GetAttrString(_pymsg, "req_angle2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->req_angle2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // req_angle3
    PyObject * field = PyObject_GetAttrString(_pymsg, "req_angle3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->req_angle3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // req_angle4
    PyObject * field = PyObject_GetAttrString(_pymsg, "req_angle4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->req_angle4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // req_angle5
    PyObject * field = PyObject_GetAttrString(_pymsg, "req_angle5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->req_angle5 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // req_angle6
    PyObject * field = PyObject_GetAttrString(_pymsg, "req_angle6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->req_angle6 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces__action__angle__goal__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Angle_Goal */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces.action._angle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Angle_Goal");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces__action__Angle_Goal * ros_message = (base_interfaces__action__Angle_Goal *)raw_ros_message;
  {  // req_angle1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->req_angle1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "req_angle1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // req_angle2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->req_angle2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "req_angle2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // req_angle3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->req_angle3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "req_angle3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // req_angle4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->req_angle4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "req_angle4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // req_angle5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->req_angle5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "req_angle5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // req_angle6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->req_angle6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "req_angle6", field);
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
// #include "base_interfaces/action/detail/angle__struct.h"
// already included above
// #include "base_interfaces/action/detail/angle__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces__action__angle__result__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("base_interfaces.action._angle.Angle_Result", full_classname_dest, 42) == 0);
  }
  base_interfaces__action__Angle_Result * ros_message = _ros_message;
  {  // current_angle1
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_angle1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_angle1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_angle2
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_angle2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_angle2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_angle3
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_angle3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_angle3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_angle4
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_angle4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_angle4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_angle5
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_angle5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_angle5 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_angle6
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_angle6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_angle6 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces__action__angle__result__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Angle_Result */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces.action._angle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Angle_Result");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces__action__Angle_Result * ros_message = (base_interfaces__action__Angle_Result *)raw_ros_message;
  {  // current_angle1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_angle1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_angle1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_angle2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_angle2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_angle2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_angle3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_angle3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_angle3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_angle4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_angle4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_angle4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_angle5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_angle5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_angle5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_angle6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_angle6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_angle6", field);
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
// #include "base_interfaces/action/detail/angle__struct.h"
// already included above
// #include "base_interfaces/action/detail/angle__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces__action__angle__feedback__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("base_interfaces.action._angle.Angle_Feedback", full_classname_dest, 44) == 0);
  }
  base_interfaces__action__Angle_Feedback * ros_message = _ros_message;
  {  // feedback_angle1
    PyObject * field = PyObject_GetAttrString(_pymsg, "feedback_angle1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->feedback_angle1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // feedback_angle2
    PyObject * field = PyObject_GetAttrString(_pymsg, "feedback_angle2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->feedback_angle2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // feedback_angle3
    PyObject * field = PyObject_GetAttrString(_pymsg, "feedback_angle3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->feedback_angle3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // feedback_angle4
    PyObject * field = PyObject_GetAttrString(_pymsg, "feedback_angle4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->feedback_angle4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // feedback_angle5
    PyObject * field = PyObject_GetAttrString(_pymsg, "feedback_angle5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->feedback_angle5 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // feedback_angle6
    PyObject * field = PyObject_GetAttrString(_pymsg, "feedback_angle6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->feedback_angle6 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces__action__angle__feedback__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Angle_Feedback */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces.action._angle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Angle_Feedback");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces__action__Angle_Feedback * ros_message = (base_interfaces__action__Angle_Feedback *)raw_ros_message;
  {  // feedback_angle1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->feedback_angle1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "feedback_angle1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // feedback_angle2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->feedback_angle2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "feedback_angle2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // feedback_angle3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->feedback_angle3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "feedback_angle3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // feedback_angle4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->feedback_angle4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "feedback_angle4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // feedback_angle5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->feedback_angle5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "feedback_angle5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // feedback_angle6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->feedback_angle6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "feedback_angle6", field);
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
// #include "base_interfaces/action/detail/angle__struct.h"
// already included above
// #include "base_interfaces/action/detail/angle__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);
bool base_interfaces__action__angle__goal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * base_interfaces__action__angle__goal__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces__action__angle__send_goal__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("base_interfaces.action._angle.Angle_SendGoal_Request", full_classname_dest, 52) == 0);
  }
  base_interfaces__action__Angle_SendGoal_Request * ros_message = _ros_message;
  {  // goal_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->goal_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal");
    if (!field) {
      return false;
    }
    if (!base_interfaces__action__angle__goal__convert_from_py(field, &ros_message->goal)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces__action__angle__send_goal__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Angle_SendGoal_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces.action._angle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Angle_SendGoal_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces__action__Angle_SendGoal_Request * ros_message = (base_interfaces__action__Angle_SendGoal_Request *)raw_ros_message;
  {  // goal_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->goal_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal
    PyObject * field = NULL;
    field = base_interfaces__action__angle__goal__convert_to_py(&ros_message->goal);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal", field);
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
// #include "base_interfaces/action/detail/angle__struct.h"
// already included above
// #include "base_interfaces/action/detail/angle__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces__action__angle__send_goal__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("base_interfaces.action._angle.Angle_SendGoal_Response", full_classname_dest, 53) == 0);
  }
  base_interfaces__action__Angle_SendGoal_Response * ros_message = _ros_message;
  {  // accepted
    PyObject * field = PyObject_GetAttrString(_pymsg, "accepted");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accepted = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces__action__angle__send_goal__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Angle_SendGoal_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces.action._angle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Angle_SendGoal_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces__action__Angle_SendGoal_Response * ros_message = (base_interfaces__action__Angle_SendGoal_Response *)raw_ros_message;
  {  // accepted
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accepted ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accepted", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
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
// #include "base_interfaces/action/detail/angle__struct.h"
// already included above
// #include "base_interfaces/action/detail/angle__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces__action__angle__get_result__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("base_interfaces.action._angle.Angle_GetResult_Request", full_classname_dest, 53) == 0);
  }
  base_interfaces__action__Angle_GetResult_Request * ros_message = _ros_message;
  {  // goal_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->goal_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces__action__angle__get_result__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Angle_GetResult_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces.action._angle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Angle_GetResult_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces__action__Angle_GetResult_Request * ros_message = (base_interfaces__action__Angle_GetResult_Request *)raw_ros_message;
  {  // goal_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->goal_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_id", field);
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
// #include "base_interfaces/action/detail/angle__struct.h"
// already included above
// #include "base_interfaces/action/detail/angle__functions.h"

bool base_interfaces__action__angle__result__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * base_interfaces__action__angle__result__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces__action__angle__get_result__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("base_interfaces.action._angle.Angle_GetResult_Response", full_classname_dest, 54) == 0);
  }
  base_interfaces__action__Angle_GetResult_Response * ros_message = _ros_message;
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    if (!base_interfaces__action__angle__result__convert_from_py(field, &ros_message->result)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces__action__angle__get_result__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Angle_GetResult_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces.action._angle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Angle_GetResult_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces__action__Angle_GetResult_Response * ros_message = (base_interfaces__action__Angle_GetResult_Response *)raw_ros_message;
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // result
    PyObject * field = NULL;
    field = base_interfaces__action__angle__result__convert_to_py(&ros_message->result);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
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
// #include "base_interfaces/action/detail/angle__struct.h"
// already included above
// #include "base_interfaces/action/detail/angle__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);
bool base_interfaces__action__angle__feedback__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * base_interfaces__action__angle__feedback__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces__action__angle__feedback_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("base_interfaces.action._angle.Angle_FeedbackMessage", full_classname_dest, 51) == 0);
  }
  base_interfaces__action__Angle_FeedbackMessage * ros_message = _ros_message;
  {  // goal_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->goal_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // feedback
    PyObject * field = PyObject_GetAttrString(_pymsg, "feedback");
    if (!field) {
      return false;
    }
    if (!base_interfaces__action__angle__feedback__convert_from_py(field, &ros_message->feedback)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces__action__angle__feedback_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Angle_FeedbackMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces.action._angle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Angle_FeedbackMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces__action__Angle_FeedbackMessage * ros_message = (base_interfaces__action__Angle_FeedbackMessage *)raw_ros_message;
  {  // goal_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->goal_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // feedback
    PyObject * field = NULL;
    field = base_interfaces__action__angle__feedback__convert_to_py(&ros_message->feedback);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "feedback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
