// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces:srv/FirmToRos.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__SRV__DETAIL__FIRM_TO_ROS__BUILDER_HPP_
#define BASE_INTERFACES__SRV__DETAIL__FIRM_TO_ROS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_interfaces/srv/detail/firm_to_ros__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_interfaces
{

namespace srv
{

namespace builder
{

class Init_FirmToRos_Request_data5
{
public:
  explicit Init_FirmToRos_Request_data5(::base_interfaces::srv::FirmToRos_Request & msg)
  : msg_(msg)
  {}
  ::base_interfaces::srv::FirmToRos_Request data5(::base_interfaces::srv::FirmToRos_Request::_data5_type arg)
  {
    msg_.data5 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::srv::FirmToRos_Request msg_;
};

class Init_FirmToRos_Request_data4
{
public:
  explicit Init_FirmToRos_Request_data4(::base_interfaces::srv::FirmToRos_Request & msg)
  : msg_(msg)
  {}
  Init_FirmToRos_Request_data5 data4(::base_interfaces::srv::FirmToRos_Request::_data4_type arg)
  {
    msg_.data4 = std::move(arg);
    return Init_FirmToRos_Request_data5(msg_);
  }

private:
  ::base_interfaces::srv::FirmToRos_Request msg_;
};

class Init_FirmToRos_Request_data3
{
public:
  explicit Init_FirmToRos_Request_data3(::base_interfaces::srv::FirmToRos_Request & msg)
  : msg_(msg)
  {}
  Init_FirmToRos_Request_data4 data3(::base_interfaces::srv::FirmToRos_Request::_data3_type arg)
  {
    msg_.data3 = std::move(arg);
    return Init_FirmToRos_Request_data4(msg_);
  }

private:
  ::base_interfaces::srv::FirmToRos_Request msg_;
};

class Init_FirmToRos_Request_data2
{
public:
  Init_FirmToRos_Request_data2()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FirmToRos_Request_data3 data2(::base_interfaces::srv::FirmToRos_Request::_data2_type arg)
  {
    msg_.data2 = std::move(arg);
    return Init_FirmToRos_Request_data3(msg_);
  }

private:
  ::base_interfaces::srv::FirmToRos_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::srv::FirmToRos_Request>()
{
  return base_interfaces::srv::builder::Init_FirmToRos_Request_data2();
}

}  // namespace base_interfaces


namespace base_interfaces
{

namespace srv
{

namespace builder
{

class Init_FirmToRos_Response_result_msg
{
public:
  explicit Init_FirmToRos_Response_result_msg(::base_interfaces::srv::FirmToRos_Response & msg)
  : msg_(msg)
  {}
  ::base_interfaces::srv::FirmToRos_Response result_msg(::base_interfaces::srv::FirmToRos_Response::_result_msg_type arg)
  {
    msg_.result_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::srv::FirmToRos_Response msg_;
};

class Init_FirmToRos_Response_node_id
{
public:
  Init_FirmToRos_Response_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FirmToRos_Response_result_msg node_id(::base_interfaces::srv::FirmToRos_Response::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_FirmToRos_Response_result_msg(msg_);
  }

private:
  ::base_interfaces::srv::FirmToRos_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::srv::FirmToRos_Response>()
{
  return base_interfaces::srv::builder::Init_FirmToRos_Response_node_id();
}

}  // namespace base_interfaces

#endif  // BASE_INTERFACES__SRV__DETAIL__FIRM_TO_ROS__BUILDER_HPP_
