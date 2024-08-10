// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces:srv/FirmToRos.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__SRV__DETAIL__FIRM_TO_ROS__STRUCT_HPP_
#define BASE_INTERFACES__SRV__DETAIL__FIRM_TO_ROS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__base_interfaces__srv__FirmToRos_Request __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces__srv__FirmToRos_Request __declspec(deprecated)
#endif

namespace base_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FirmToRos_Request_
{
  using Type = FirmToRos_Request_<ContainerAllocator>;

  explicit FirmToRos_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data2 = "";
      this->data3 = "";
      this->data4 = "";
      this->data5 = "";
    }
  }

  explicit FirmToRos_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data2(_alloc),
    data3(_alloc),
    data4(_alloc),
    data5(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data2 = "";
      this->data3 = "";
      this->data4 = "";
      this->data5 = "";
    }
  }

  // field types and members
  using _data2_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data2_type data2;
  using _data3_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data3_type data3;
  using _data4_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data4_type data4;
  using _data5_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data5_type data5;

  // setters for named parameter idiom
  Type & set__data2(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data2 = _arg;
    return *this;
  }
  Type & set__data3(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data3 = _arg;
    return *this;
  }
  Type & set__data4(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data4 = _arg;
    return *this;
  }
  Type & set__data5(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data5 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces::srv::FirmToRos_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces::srv::FirmToRos_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces::srv::FirmToRos_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces::srv::FirmToRos_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces::srv::FirmToRos_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces::srv::FirmToRos_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces::srv::FirmToRos_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces::srv::FirmToRos_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces::srv::FirmToRos_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces::srv::FirmToRos_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces__srv__FirmToRos_Request
    std::shared_ptr<base_interfaces::srv::FirmToRos_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces__srv__FirmToRos_Request
    std::shared_ptr<base_interfaces::srv::FirmToRos_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FirmToRos_Request_ & other) const
  {
    if (this->data2 != other.data2) {
      return false;
    }
    if (this->data3 != other.data3) {
      return false;
    }
    if (this->data4 != other.data4) {
      return false;
    }
    if (this->data5 != other.data5) {
      return false;
    }
    return true;
  }
  bool operator!=(const FirmToRos_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FirmToRos_Request_

// alias to use template instance with default allocator
using FirmToRos_Request =
  base_interfaces::srv::FirmToRos_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace base_interfaces


#ifndef _WIN32
# define DEPRECATED__base_interfaces__srv__FirmToRos_Response __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces__srv__FirmToRos_Response __declspec(deprecated)
#endif

namespace base_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FirmToRos_Response_
{
  using Type = FirmToRos_Response_<ContainerAllocator>;

  explicit FirmToRos_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = "";
      this->result_msg = "";
    }
  }

  explicit FirmToRos_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_id(_alloc),
    result_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = "";
      this->result_msg = "";
    }
  }

  // field types and members
  using _node_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_id_type node_id;
  using _result_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_msg_type result_msg;

  // setters for named parameter idiom
  Type & set__node_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__result_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces::srv::FirmToRos_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces::srv::FirmToRos_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces::srv::FirmToRos_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces::srv::FirmToRos_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces::srv::FirmToRos_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces::srv::FirmToRos_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces::srv::FirmToRos_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces::srv::FirmToRos_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces::srv::FirmToRos_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces::srv::FirmToRos_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces__srv__FirmToRos_Response
    std::shared_ptr<base_interfaces::srv::FirmToRos_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces__srv__FirmToRos_Response
    std::shared_ptr<base_interfaces::srv::FirmToRos_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FirmToRos_Response_ & other) const
  {
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->result_msg != other.result_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const FirmToRos_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FirmToRos_Response_

// alias to use template instance with default allocator
using FirmToRos_Response =
  base_interfaces::srv::FirmToRos_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace base_interfaces

namespace base_interfaces
{

namespace srv
{

struct FirmToRos
{
  using Request = base_interfaces::srv::FirmToRos_Request;
  using Response = base_interfaces::srv::FirmToRos_Response;
};

}  // namespace srv

}  // namespace base_interfaces

#endif  // BASE_INTERFACES__SRV__DETAIL__FIRM_TO_ROS__STRUCT_HPP_
