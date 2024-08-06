// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces:action/Angle.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__ACTION__DETAIL__ANGLE__STRUCT_H_
#define BASE_INTERFACES__ACTION__DETAIL__ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Angle in the package base_interfaces.
typedef struct base_interfaces__action__Angle_Goal
{
  float req_angle1;
  float req_angle2;
  float req_angle3;
  float req_angle4;
  float req_angle5;
  float req_angle6;
} base_interfaces__action__Angle_Goal;

// Struct for a sequence of base_interfaces__action__Angle_Goal.
typedef struct base_interfaces__action__Angle_Goal__Sequence
{
  base_interfaces__action__Angle_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces__action__Angle_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Angle in the package base_interfaces.
typedef struct base_interfaces__action__Angle_Result
{
  float current_angle1;
  float current_angle2;
  float current_angle3;
  float current_angle4;
  float current_angle5;
  float current_angle6;
} base_interfaces__action__Angle_Result;

// Struct for a sequence of base_interfaces__action__Angle_Result.
typedef struct base_interfaces__action__Angle_Result__Sequence
{
  base_interfaces__action__Angle_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces__action__Angle_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Angle in the package base_interfaces.
typedef struct base_interfaces__action__Angle_Feedback
{
  float feedback_angle1;
  float feedback_angle2;
  float feedback_angle3;
  float feedback_angle4;
  float feedback_angle5;
  float feedback_angle6;
} base_interfaces__action__Angle_Feedback;

// Struct for a sequence of base_interfaces__action__Angle_Feedback.
typedef struct base_interfaces__action__Angle_Feedback__Sequence
{
  base_interfaces__action__Angle_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces__action__Angle_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "base_interfaces/action/detail/angle__struct.h"

/// Struct defined in action/Angle in the package base_interfaces.
typedef struct base_interfaces__action__Angle_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  base_interfaces__action__Angle_Goal goal;
} base_interfaces__action__Angle_SendGoal_Request;

// Struct for a sequence of base_interfaces__action__Angle_SendGoal_Request.
typedef struct base_interfaces__action__Angle_SendGoal_Request__Sequence
{
  base_interfaces__action__Angle_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces__action__Angle_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Angle in the package base_interfaces.
typedef struct base_interfaces__action__Angle_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} base_interfaces__action__Angle_SendGoal_Response;

// Struct for a sequence of base_interfaces__action__Angle_SendGoal_Response.
typedef struct base_interfaces__action__Angle_SendGoal_Response__Sequence
{
  base_interfaces__action__Angle_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces__action__Angle_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Angle in the package base_interfaces.
typedef struct base_interfaces__action__Angle_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} base_interfaces__action__Angle_GetResult_Request;

// Struct for a sequence of base_interfaces__action__Angle_GetResult_Request.
typedef struct base_interfaces__action__Angle_GetResult_Request__Sequence
{
  base_interfaces__action__Angle_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces__action__Angle_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "base_interfaces/action/detail/angle__struct.h"

/// Struct defined in action/Angle in the package base_interfaces.
typedef struct base_interfaces__action__Angle_GetResult_Response
{
  int8_t status;
  base_interfaces__action__Angle_Result result;
} base_interfaces__action__Angle_GetResult_Response;

// Struct for a sequence of base_interfaces__action__Angle_GetResult_Response.
typedef struct base_interfaces__action__Angle_GetResult_Response__Sequence
{
  base_interfaces__action__Angle_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces__action__Angle_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "base_interfaces/action/detail/angle__struct.h"

/// Struct defined in action/Angle in the package base_interfaces.
typedef struct base_interfaces__action__Angle_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  base_interfaces__action__Angle_Feedback feedback;
} base_interfaces__action__Angle_FeedbackMessage;

// Struct for a sequence of base_interfaces__action__Angle_FeedbackMessage.
typedef struct base_interfaces__action__Angle_FeedbackMessage__Sequence
{
  base_interfaces__action__Angle_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces__action__Angle_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES__ACTION__DETAIL__ANGLE__STRUCT_H_
