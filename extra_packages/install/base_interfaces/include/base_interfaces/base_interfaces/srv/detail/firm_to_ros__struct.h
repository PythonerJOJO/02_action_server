// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces:srv/FirmToRos.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__SRV__DETAIL__FIRM_TO_ROS__STRUCT_H_
#define BASE_INTERFACES__SRV__DETAIL__FIRM_TO_ROS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data2'
// Member 'data3'
// Member 'data4'
// Member 'data5'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FirmToRos in the package base_interfaces.
typedef struct base_interfaces__srv__FirmToRos_Request
{
  /// 请求节点ID
  rosidl_runtime_c__String data2;
  /// 请求命令
  rosidl_runtime_c__String data3;
  /// 请求参数1
  rosidl_runtime_c__String data4;
  /// 请求参数2
  rosidl_runtime_c__String data5;
} base_interfaces__srv__FirmToRos_Request;

// Struct for a sequence of base_interfaces__srv__FirmToRos_Request.
typedef struct base_interfaces__srv__FirmToRos_Request__Sequence
{
  base_interfaces__srv__FirmToRos_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces__srv__FirmToRos_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'node_id'
// Member 'result_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FirmToRos in the package base_interfaces.
typedef struct base_interfaces__srv__FirmToRos_Response
{
  /// 执行节点ID
  rosidl_runtime_c__String node_id;
  /// 请求结果信息
  rosidl_runtime_c__String result_msg;
} base_interfaces__srv__FirmToRos_Response;

// Struct for a sequence of base_interfaces__srv__FirmToRos_Response.
typedef struct base_interfaces__srv__FirmToRos_Response__Sequence
{
  base_interfaces__srv__FirmToRos_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces__srv__FirmToRos_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES__SRV__DETAIL__FIRM_TO_ROS__STRUCT_H_
