// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfaces:srv/FirmToRos.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__SRV__DETAIL__FIRM_TO_ROS__TRAITS_HPP_
#define BASE_INTERFACES__SRV__DETAIL__FIRM_TO_ROS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "base_interfaces/srv/detail/firm_to_ros__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace base_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const FirmToRos_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: data2
  {
    out << "data2: ";
    rosidl_generator_traits::value_to_yaml(msg.data2, out);
    out << ", ";
  }

  // member: data3
  {
    out << "data3: ";
    rosidl_generator_traits::value_to_yaml(msg.data3, out);
    out << ", ";
  }

  // member: data4
  {
    out << "data4: ";
    rosidl_generator_traits::value_to_yaml(msg.data4, out);
    out << ", ";
  }

  // member: data5
  {
    out << "data5: ";
    rosidl_generator_traits::value_to_yaml(msg.data5, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FirmToRos_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data2: ";
    rosidl_generator_traits::value_to_yaml(msg.data2, out);
    out << "\n";
  }

  // member: data3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data3: ";
    rosidl_generator_traits::value_to_yaml(msg.data3, out);
    out << "\n";
  }

  // member: data4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data4: ";
    rosidl_generator_traits::value_to_yaml(msg.data4, out);
    out << "\n";
  }

  // member: data5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data5: ";
    rosidl_generator_traits::value_to_yaml(msg.data5, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FirmToRos_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace base_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces::srv::FirmToRos_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces::srv::FirmToRos_Request & msg)
{
  return base_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces::srv::FirmToRos_Request>()
{
  return "base_interfaces::srv::FirmToRos_Request";
}

template<>
inline const char * name<base_interfaces::srv::FirmToRos_Request>()
{
  return "base_interfaces/srv/FirmToRos_Request";
}

template<>
struct has_fixed_size<base_interfaces::srv::FirmToRos_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<base_interfaces::srv::FirmToRos_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<base_interfaces::srv::FirmToRos_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace base_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const FirmToRos_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_id
  {
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << ", ";
  }

  // member: result_msg
  {
    out << "result_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.result_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FirmToRos_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << "\n";
  }

  // member: result_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.result_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FirmToRos_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace base_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces::srv::FirmToRos_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces::srv::FirmToRos_Response & msg)
{
  return base_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces::srv::FirmToRos_Response>()
{
  return "base_interfaces::srv::FirmToRos_Response";
}

template<>
inline const char * name<base_interfaces::srv::FirmToRos_Response>()
{
  return "base_interfaces/srv/FirmToRos_Response";
}

template<>
struct has_fixed_size<base_interfaces::srv::FirmToRos_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<base_interfaces::srv::FirmToRos_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<base_interfaces::srv::FirmToRos_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces::srv::FirmToRos>()
{
  return "base_interfaces::srv::FirmToRos";
}

template<>
inline const char * name<base_interfaces::srv::FirmToRos>()
{
  return "base_interfaces/srv/FirmToRos";
}

template<>
struct has_fixed_size<base_interfaces::srv::FirmToRos>
  : std::integral_constant<
    bool,
    has_fixed_size<base_interfaces::srv::FirmToRos_Request>::value &&
    has_fixed_size<base_interfaces::srv::FirmToRos_Response>::value
  >
{
};

template<>
struct has_bounded_size<base_interfaces::srv::FirmToRos>
  : std::integral_constant<
    bool,
    has_bounded_size<base_interfaces::srv::FirmToRos_Request>::value &&
    has_bounded_size<base_interfaces::srv::FirmToRos_Response>::value
  >
{
};

template<>
struct is_service<base_interfaces::srv::FirmToRos>
  : std::true_type
{
};

template<>
struct is_service_request<base_interfaces::srv::FirmToRos_Request>
  : std::true_type
{
};

template<>
struct is_service_response<base_interfaces::srv::FirmToRos_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BASE_INTERFACES__SRV__DETAIL__FIRM_TO_ROS__TRAITS_HPP_
