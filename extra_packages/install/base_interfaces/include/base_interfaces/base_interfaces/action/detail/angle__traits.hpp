// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfaces:action/Angle.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__ACTION__DETAIL__ANGLE__TRAITS_HPP_
#define BASE_INTERFACES__ACTION__DETAIL__ANGLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "base_interfaces/action/detail/angle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace base_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Angle_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: req_angle1
  {
    out << "req_angle1: ";
    rosidl_generator_traits::value_to_yaml(msg.req_angle1, out);
    out << ", ";
  }

  // member: req_angle2
  {
    out << "req_angle2: ";
    rosidl_generator_traits::value_to_yaml(msg.req_angle2, out);
    out << ", ";
  }

  // member: req_angle3
  {
    out << "req_angle3: ";
    rosidl_generator_traits::value_to_yaml(msg.req_angle3, out);
    out << ", ";
  }

  // member: req_angle4
  {
    out << "req_angle4: ";
    rosidl_generator_traits::value_to_yaml(msg.req_angle4, out);
    out << ", ";
  }

  // member: req_angle5
  {
    out << "req_angle5: ";
    rosidl_generator_traits::value_to_yaml(msg.req_angle5, out);
    out << ", ";
  }

  // member: req_angle6
  {
    out << "req_angle6: ";
    rosidl_generator_traits::value_to_yaml(msg.req_angle6, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Angle_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: req_angle1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "req_angle1: ";
    rosidl_generator_traits::value_to_yaml(msg.req_angle1, out);
    out << "\n";
  }

  // member: req_angle2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "req_angle2: ";
    rosidl_generator_traits::value_to_yaml(msg.req_angle2, out);
    out << "\n";
  }

  // member: req_angle3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "req_angle3: ";
    rosidl_generator_traits::value_to_yaml(msg.req_angle3, out);
    out << "\n";
  }

  // member: req_angle4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "req_angle4: ";
    rosidl_generator_traits::value_to_yaml(msg.req_angle4, out);
    out << "\n";
  }

  // member: req_angle5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "req_angle5: ";
    rosidl_generator_traits::value_to_yaml(msg.req_angle5, out);
    out << "\n";
  }

  // member: req_angle6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "req_angle6: ";
    rosidl_generator_traits::value_to_yaml(msg.req_angle6, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Angle_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace base_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces::action::Angle_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces::action::Angle_Goal & msg)
{
  return base_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces::action::Angle_Goal>()
{
  return "base_interfaces::action::Angle_Goal";
}

template<>
inline const char * name<base_interfaces::action::Angle_Goal>()
{
  return "base_interfaces/action/Angle_Goal";
}

template<>
struct has_fixed_size<base_interfaces::action::Angle_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfaces::action::Angle_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfaces::action::Angle_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace base_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Angle_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_angle1
  {
    out << "current_angle1: ";
    rosidl_generator_traits::value_to_yaml(msg.current_angle1, out);
    out << ", ";
  }

  // member: current_angle2
  {
    out << "current_angle2: ";
    rosidl_generator_traits::value_to_yaml(msg.current_angle2, out);
    out << ", ";
  }

  // member: current_angle3
  {
    out << "current_angle3: ";
    rosidl_generator_traits::value_to_yaml(msg.current_angle3, out);
    out << ", ";
  }

  // member: current_angle4
  {
    out << "current_angle4: ";
    rosidl_generator_traits::value_to_yaml(msg.current_angle4, out);
    out << ", ";
  }

  // member: current_angle5
  {
    out << "current_angle5: ";
    rosidl_generator_traits::value_to_yaml(msg.current_angle5, out);
    out << ", ";
  }

  // member: current_angle6
  {
    out << "current_angle6: ";
    rosidl_generator_traits::value_to_yaml(msg.current_angle6, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Angle_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_angle1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_angle1: ";
    rosidl_generator_traits::value_to_yaml(msg.current_angle1, out);
    out << "\n";
  }

  // member: current_angle2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_angle2: ";
    rosidl_generator_traits::value_to_yaml(msg.current_angle2, out);
    out << "\n";
  }

  // member: current_angle3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_angle3: ";
    rosidl_generator_traits::value_to_yaml(msg.current_angle3, out);
    out << "\n";
  }

  // member: current_angle4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_angle4: ";
    rosidl_generator_traits::value_to_yaml(msg.current_angle4, out);
    out << "\n";
  }

  // member: current_angle5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_angle5: ";
    rosidl_generator_traits::value_to_yaml(msg.current_angle5, out);
    out << "\n";
  }

  // member: current_angle6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_angle6: ";
    rosidl_generator_traits::value_to_yaml(msg.current_angle6, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Angle_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace base_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces::action::Angle_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces::action::Angle_Result & msg)
{
  return base_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces::action::Angle_Result>()
{
  return "base_interfaces::action::Angle_Result";
}

template<>
inline const char * name<base_interfaces::action::Angle_Result>()
{
  return "base_interfaces/action/Angle_Result";
}

template<>
struct has_fixed_size<base_interfaces::action::Angle_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfaces::action::Angle_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfaces::action::Angle_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace base_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Angle_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback_angle1
  {
    out << "feedback_angle1: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_angle1, out);
    out << ", ";
  }

  // member: feedback_angle2
  {
    out << "feedback_angle2: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_angle2, out);
    out << ", ";
  }

  // member: feedback_angle3
  {
    out << "feedback_angle3: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_angle3, out);
    out << ", ";
  }

  // member: feedback_angle4
  {
    out << "feedback_angle4: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_angle4, out);
    out << ", ";
  }

  // member: feedback_angle5
  {
    out << "feedback_angle5: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_angle5, out);
    out << ", ";
  }

  // member: feedback_angle6
  {
    out << "feedback_angle6: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_angle6, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Angle_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback_angle1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback_angle1: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_angle1, out);
    out << "\n";
  }

  // member: feedback_angle2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback_angle2: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_angle2, out);
    out << "\n";
  }

  // member: feedback_angle3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback_angle3: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_angle3, out);
    out << "\n";
  }

  // member: feedback_angle4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback_angle4: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_angle4, out);
    out << "\n";
  }

  // member: feedback_angle5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback_angle5: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_angle5, out);
    out << "\n";
  }

  // member: feedback_angle6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback_angle6: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_angle6, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Angle_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace base_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces::action::Angle_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces::action::Angle_Feedback & msg)
{
  return base_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces::action::Angle_Feedback>()
{
  return "base_interfaces::action::Angle_Feedback";
}

template<>
inline const char * name<base_interfaces::action::Angle_Feedback>()
{
  return "base_interfaces/action/Angle_Feedback";
}

template<>
struct has_fixed_size<base_interfaces::action::Angle_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfaces::action::Angle_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfaces::action::Angle_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "base_interfaces/action/detail/angle__traits.hpp"

namespace base_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Angle_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Angle_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Angle_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace base_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces::action::Angle_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces::action::Angle_SendGoal_Request & msg)
{
  return base_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces::action::Angle_SendGoal_Request>()
{
  return "base_interfaces::action::Angle_SendGoal_Request";
}

template<>
inline const char * name<base_interfaces::action::Angle_SendGoal_Request>()
{
  return "base_interfaces/action/Angle_SendGoal_Request";
}

template<>
struct has_fixed_size<base_interfaces::action::Angle_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<base_interfaces::action::Angle_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<base_interfaces::action::Angle_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<base_interfaces::action::Angle_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<base_interfaces::action::Angle_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace base_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Angle_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Angle_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Angle_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace base_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces::action::Angle_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces::action::Angle_SendGoal_Response & msg)
{
  return base_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces::action::Angle_SendGoal_Response>()
{
  return "base_interfaces::action::Angle_SendGoal_Response";
}

template<>
inline const char * name<base_interfaces::action::Angle_SendGoal_Response>()
{
  return "base_interfaces/action/Angle_SendGoal_Response";
}

template<>
struct has_fixed_size<base_interfaces::action::Angle_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<base_interfaces::action::Angle_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<base_interfaces::action::Angle_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces::action::Angle_SendGoal>()
{
  return "base_interfaces::action::Angle_SendGoal";
}

template<>
inline const char * name<base_interfaces::action::Angle_SendGoal>()
{
  return "base_interfaces/action/Angle_SendGoal";
}

template<>
struct has_fixed_size<base_interfaces::action::Angle_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<base_interfaces::action::Angle_SendGoal_Request>::value &&
    has_fixed_size<base_interfaces::action::Angle_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<base_interfaces::action::Angle_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<base_interfaces::action::Angle_SendGoal_Request>::value &&
    has_bounded_size<base_interfaces::action::Angle_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<base_interfaces::action::Angle_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<base_interfaces::action::Angle_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<base_interfaces::action::Angle_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace base_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Angle_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Angle_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Angle_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace base_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces::action::Angle_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces::action::Angle_GetResult_Request & msg)
{
  return base_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces::action::Angle_GetResult_Request>()
{
  return "base_interfaces::action::Angle_GetResult_Request";
}

template<>
inline const char * name<base_interfaces::action::Angle_GetResult_Request>()
{
  return "base_interfaces/action/Angle_GetResult_Request";
}

template<>
struct has_fixed_size<base_interfaces::action::Angle_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<base_interfaces::action::Angle_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<base_interfaces::action::Angle_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "base_interfaces/action/detail/angle__traits.hpp"

namespace base_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Angle_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Angle_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Angle_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace base_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces::action::Angle_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces::action::Angle_GetResult_Response & msg)
{
  return base_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces::action::Angle_GetResult_Response>()
{
  return "base_interfaces::action::Angle_GetResult_Response";
}

template<>
inline const char * name<base_interfaces::action::Angle_GetResult_Response>()
{
  return "base_interfaces/action/Angle_GetResult_Response";
}

template<>
struct has_fixed_size<base_interfaces::action::Angle_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<base_interfaces::action::Angle_Result>::value> {};

template<>
struct has_bounded_size<base_interfaces::action::Angle_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<base_interfaces::action::Angle_Result>::value> {};

template<>
struct is_message<base_interfaces::action::Angle_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces::action::Angle_GetResult>()
{
  return "base_interfaces::action::Angle_GetResult";
}

template<>
inline const char * name<base_interfaces::action::Angle_GetResult>()
{
  return "base_interfaces/action/Angle_GetResult";
}

template<>
struct has_fixed_size<base_interfaces::action::Angle_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<base_interfaces::action::Angle_GetResult_Request>::value &&
    has_fixed_size<base_interfaces::action::Angle_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<base_interfaces::action::Angle_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<base_interfaces::action::Angle_GetResult_Request>::value &&
    has_bounded_size<base_interfaces::action::Angle_GetResult_Response>::value
  >
{
};

template<>
struct is_service<base_interfaces::action::Angle_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<base_interfaces::action::Angle_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<base_interfaces::action::Angle_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "base_interfaces/action/detail/angle__traits.hpp"

namespace base_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Angle_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Angle_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Angle_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace base_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces::action::Angle_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces::action::Angle_FeedbackMessage & msg)
{
  return base_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces::action::Angle_FeedbackMessage>()
{
  return "base_interfaces::action::Angle_FeedbackMessage";
}

template<>
inline const char * name<base_interfaces::action::Angle_FeedbackMessage>()
{
  return "base_interfaces/action/Angle_FeedbackMessage";
}

template<>
struct has_fixed_size<base_interfaces::action::Angle_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<base_interfaces::action::Angle_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<base_interfaces::action::Angle_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<base_interfaces::action::Angle_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<base_interfaces::action::Angle_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<base_interfaces::action::Angle>
  : std::true_type
{
};

template<>
struct is_action_goal<base_interfaces::action::Angle_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<base_interfaces::action::Angle_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<base_interfaces::action::Angle_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // BASE_INTERFACES__ACTION__DETAIL__ANGLE__TRAITS_HPP_
