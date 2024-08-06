// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces:action/Angle.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__ACTION__DETAIL__ANGLE__BUILDER_HPP_
#define BASE_INTERFACES__ACTION__DETAIL__ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_interfaces/action/detail/angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_interfaces
{

namespace action
{

namespace builder
{

class Init_Angle_Goal_req_angle6
{
public:
  explicit Init_Angle_Goal_req_angle6(::base_interfaces::action::Angle_Goal & msg)
  : msg_(msg)
  {}
  ::base_interfaces::action::Angle_Goal req_angle6(::base_interfaces::action::Angle_Goal::_req_angle6_type arg)
  {
    msg_.req_angle6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::action::Angle_Goal msg_;
};

class Init_Angle_Goal_req_angle5
{
public:
  explicit Init_Angle_Goal_req_angle5(::base_interfaces::action::Angle_Goal & msg)
  : msg_(msg)
  {}
  Init_Angle_Goal_req_angle6 req_angle5(::base_interfaces::action::Angle_Goal::_req_angle5_type arg)
  {
    msg_.req_angle5 = std::move(arg);
    return Init_Angle_Goal_req_angle6(msg_);
  }

private:
  ::base_interfaces::action::Angle_Goal msg_;
};

class Init_Angle_Goal_req_angle4
{
public:
  explicit Init_Angle_Goal_req_angle4(::base_interfaces::action::Angle_Goal & msg)
  : msg_(msg)
  {}
  Init_Angle_Goal_req_angle5 req_angle4(::base_interfaces::action::Angle_Goal::_req_angle4_type arg)
  {
    msg_.req_angle4 = std::move(arg);
    return Init_Angle_Goal_req_angle5(msg_);
  }

private:
  ::base_interfaces::action::Angle_Goal msg_;
};

class Init_Angle_Goal_req_angle3
{
public:
  explicit Init_Angle_Goal_req_angle3(::base_interfaces::action::Angle_Goal & msg)
  : msg_(msg)
  {}
  Init_Angle_Goal_req_angle4 req_angle3(::base_interfaces::action::Angle_Goal::_req_angle3_type arg)
  {
    msg_.req_angle3 = std::move(arg);
    return Init_Angle_Goal_req_angle4(msg_);
  }

private:
  ::base_interfaces::action::Angle_Goal msg_;
};

class Init_Angle_Goal_req_angle2
{
public:
  explicit Init_Angle_Goal_req_angle2(::base_interfaces::action::Angle_Goal & msg)
  : msg_(msg)
  {}
  Init_Angle_Goal_req_angle3 req_angle2(::base_interfaces::action::Angle_Goal::_req_angle2_type arg)
  {
    msg_.req_angle2 = std::move(arg);
    return Init_Angle_Goal_req_angle3(msg_);
  }

private:
  ::base_interfaces::action::Angle_Goal msg_;
};

class Init_Angle_Goal_req_angle1
{
public:
  Init_Angle_Goal_req_angle1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Angle_Goal_req_angle2 req_angle1(::base_interfaces::action::Angle_Goal::_req_angle1_type arg)
  {
    msg_.req_angle1 = std::move(arg);
    return Init_Angle_Goal_req_angle2(msg_);
  }

private:
  ::base_interfaces::action::Angle_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::action::Angle_Goal>()
{
  return base_interfaces::action::builder::Init_Angle_Goal_req_angle1();
}

}  // namespace base_interfaces


namespace base_interfaces
{

namespace action
{

namespace builder
{

class Init_Angle_Result_current_angle6
{
public:
  explicit Init_Angle_Result_current_angle6(::base_interfaces::action::Angle_Result & msg)
  : msg_(msg)
  {}
  ::base_interfaces::action::Angle_Result current_angle6(::base_interfaces::action::Angle_Result::_current_angle6_type arg)
  {
    msg_.current_angle6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::action::Angle_Result msg_;
};

class Init_Angle_Result_current_angle5
{
public:
  explicit Init_Angle_Result_current_angle5(::base_interfaces::action::Angle_Result & msg)
  : msg_(msg)
  {}
  Init_Angle_Result_current_angle6 current_angle5(::base_interfaces::action::Angle_Result::_current_angle5_type arg)
  {
    msg_.current_angle5 = std::move(arg);
    return Init_Angle_Result_current_angle6(msg_);
  }

private:
  ::base_interfaces::action::Angle_Result msg_;
};

class Init_Angle_Result_current_angle4
{
public:
  explicit Init_Angle_Result_current_angle4(::base_interfaces::action::Angle_Result & msg)
  : msg_(msg)
  {}
  Init_Angle_Result_current_angle5 current_angle4(::base_interfaces::action::Angle_Result::_current_angle4_type arg)
  {
    msg_.current_angle4 = std::move(arg);
    return Init_Angle_Result_current_angle5(msg_);
  }

private:
  ::base_interfaces::action::Angle_Result msg_;
};

class Init_Angle_Result_current_angle3
{
public:
  explicit Init_Angle_Result_current_angle3(::base_interfaces::action::Angle_Result & msg)
  : msg_(msg)
  {}
  Init_Angle_Result_current_angle4 current_angle3(::base_interfaces::action::Angle_Result::_current_angle3_type arg)
  {
    msg_.current_angle3 = std::move(arg);
    return Init_Angle_Result_current_angle4(msg_);
  }

private:
  ::base_interfaces::action::Angle_Result msg_;
};

class Init_Angle_Result_current_angle2
{
public:
  explicit Init_Angle_Result_current_angle2(::base_interfaces::action::Angle_Result & msg)
  : msg_(msg)
  {}
  Init_Angle_Result_current_angle3 current_angle2(::base_interfaces::action::Angle_Result::_current_angle2_type arg)
  {
    msg_.current_angle2 = std::move(arg);
    return Init_Angle_Result_current_angle3(msg_);
  }

private:
  ::base_interfaces::action::Angle_Result msg_;
};

class Init_Angle_Result_current_angle1
{
public:
  Init_Angle_Result_current_angle1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Angle_Result_current_angle2 current_angle1(::base_interfaces::action::Angle_Result::_current_angle1_type arg)
  {
    msg_.current_angle1 = std::move(arg);
    return Init_Angle_Result_current_angle2(msg_);
  }

private:
  ::base_interfaces::action::Angle_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::action::Angle_Result>()
{
  return base_interfaces::action::builder::Init_Angle_Result_current_angle1();
}

}  // namespace base_interfaces


namespace base_interfaces
{

namespace action
{

namespace builder
{

class Init_Angle_Feedback_feedback_angle6
{
public:
  explicit Init_Angle_Feedback_feedback_angle6(::base_interfaces::action::Angle_Feedback & msg)
  : msg_(msg)
  {}
  ::base_interfaces::action::Angle_Feedback feedback_angle6(::base_interfaces::action::Angle_Feedback::_feedback_angle6_type arg)
  {
    msg_.feedback_angle6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::action::Angle_Feedback msg_;
};

class Init_Angle_Feedback_feedback_angle5
{
public:
  explicit Init_Angle_Feedback_feedback_angle5(::base_interfaces::action::Angle_Feedback & msg)
  : msg_(msg)
  {}
  Init_Angle_Feedback_feedback_angle6 feedback_angle5(::base_interfaces::action::Angle_Feedback::_feedback_angle5_type arg)
  {
    msg_.feedback_angle5 = std::move(arg);
    return Init_Angle_Feedback_feedback_angle6(msg_);
  }

private:
  ::base_interfaces::action::Angle_Feedback msg_;
};

class Init_Angle_Feedback_feedback_angle4
{
public:
  explicit Init_Angle_Feedback_feedback_angle4(::base_interfaces::action::Angle_Feedback & msg)
  : msg_(msg)
  {}
  Init_Angle_Feedback_feedback_angle5 feedback_angle4(::base_interfaces::action::Angle_Feedback::_feedback_angle4_type arg)
  {
    msg_.feedback_angle4 = std::move(arg);
    return Init_Angle_Feedback_feedback_angle5(msg_);
  }

private:
  ::base_interfaces::action::Angle_Feedback msg_;
};

class Init_Angle_Feedback_feedback_angle3
{
public:
  explicit Init_Angle_Feedback_feedback_angle3(::base_interfaces::action::Angle_Feedback & msg)
  : msg_(msg)
  {}
  Init_Angle_Feedback_feedback_angle4 feedback_angle3(::base_interfaces::action::Angle_Feedback::_feedback_angle3_type arg)
  {
    msg_.feedback_angle3 = std::move(arg);
    return Init_Angle_Feedback_feedback_angle4(msg_);
  }

private:
  ::base_interfaces::action::Angle_Feedback msg_;
};

class Init_Angle_Feedback_feedback_angle2
{
public:
  explicit Init_Angle_Feedback_feedback_angle2(::base_interfaces::action::Angle_Feedback & msg)
  : msg_(msg)
  {}
  Init_Angle_Feedback_feedback_angle3 feedback_angle2(::base_interfaces::action::Angle_Feedback::_feedback_angle2_type arg)
  {
    msg_.feedback_angle2 = std::move(arg);
    return Init_Angle_Feedback_feedback_angle3(msg_);
  }

private:
  ::base_interfaces::action::Angle_Feedback msg_;
};

class Init_Angle_Feedback_feedback_angle1
{
public:
  Init_Angle_Feedback_feedback_angle1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Angle_Feedback_feedback_angle2 feedback_angle1(::base_interfaces::action::Angle_Feedback::_feedback_angle1_type arg)
  {
    msg_.feedback_angle1 = std::move(arg);
    return Init_Angle_Feedback_feedback_angle2(msg_);
  }

private:
  ::base_interfaces::action::Angle_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::action::Angle_Feedback>()
{
  return base_interfaces::action::builder::Init_Angle_Feedback_feedback_angle1();
}

}  // namespace base_interfaces


namespace base_interfaces
{

namespace action
{

namespace builder
{

class Init_Angle_SendGoal_Request_goal
{
public:
  explicit Init_Angle_SendGoal_Request_goal(::base_interfaces::action::Angle_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::base_interfaces::action::Angle_SendGoal_Request goal(::base_interfaces::action::Angle_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::action::Angle_SendGoal_Request msg_;
};

class Init_Angle_SendGoal_Request_goal_id
{
public:
  Init_Angle_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Angle_SendGoal_Request_goal goal_id(::base_interfaces::action::Angle_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Angle_SendGoal_Request_goal(msg_);
  }

private:
  ::base_interfaces::action::Angle_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::action::Angle_SendGoal_Request>()
{
  return base_interfaces::action::builder::Init_Angle_SendGoal_Request_goal_id();
}

}  // namespace base_interfaces


namespace base_interfaces
{

namespace action
{

namespace builder
{

class Init_Angle_SendGoal_Response_stamp
{
public:
  explicit Init_Angle_SendGoal_Response_stamp(::base_interfaces::action::Angle_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::base_interfaces::action::Angle_SendGoal_Response stamp(::base_interfaces::action::Angle_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::action::Angle_SendGoal_Response msg_;
};

class Init_Angle_SendGoal_Response_accepted
{
public:
  Init_Angle_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Angle_SendGoal_Response_stamp accepted(::base_interfaces::action::Angle_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Angle_SendGoal_Response_stamp(msg_);
  }

private:
  ::base_interfaces::action::Angle_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::action::Angle_SendGoal_Response>()
{
  return base_interfaces::action::builder::Init_Angle_SendGoal_Response_accepted();
}

}  // namespace base_interfaces


namespace base_interfaces
{

namespace action
{

namespace builder
{

class Init_Angle_GetResult_Request_goal_id
{
public:
  Init_Angle_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces::action::Angle_GetResult_Request goal_id(::base_interfaces::action::Angle_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::action::Angle_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::action::Angle_GetResult_Request>()
{
  return base_interfaces::action::builder::Init_Angle_GetResult_Request_goal_id();
}

}  // namespace base_interfaces


namespace base_interfaces
{

namespace action
{

namespace builder
{

class Init_Angle_GetResult_Response_result
{
public:
  explicit Init_Angle_GetResult_Response_result(::base_interfaces::action::Angle_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::base_interfaces::action::Angle_GetResult_Response result(::base_interfaces::action::Angle_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::action::Angle_GetResult_Response msg_;
};

class Init_Angle_GetResult_Response_status
{
public:
  Init_Angle_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Angle_GetResult_Response_result status(::base_interfaces::action::Angle_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Angle_GetResult_Response_result(msg_);
  }

private:
  ::base_interfaces::action::Angle_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::action::Angle_GetResult_Response>()
{
  return base_interfaces::action::builder::Init_Angle_GetResult_Response_status();
}

}  // namespace base_interfaces


namespace base_interfaces
{

namespace action
{

namespace builder
{

class Init_Angle_FeedbackMessage_feedback
{
public:
  explicit Init_Angle_FeedbackMessage_feedback(::base_interfaces::action::Angle_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::base_interfaces::action::Angle_FeedbackMessage feedback(::base_interfaces::action::Angle_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::action::Angle_FeedbackMessage msg_;
};

class Init_Angle_FeedbackMessage_goal_id
{
public:
  Init_Angle_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Angle_FeedbackMessage_feedback goal_id(::base_interfaces::action::Angle_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Angle_FeedbackMessage_feedback(msg_);
  }

private:
  ::base_interfaces::action::Angle_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::action::Angle_FeedbackMessage>()
{
  return base_interfaces::action::builder::Init_Angle_FeedbackMessage_goal_id();
}

}  // namespace base_interfaces

#endif  // BASE_INTERFACES__ACTION__DETAIL__ANGLE__BUILDER_HPP_
