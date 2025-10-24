// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from state_estimator_msgs:srv/GetWhitelist.idl
// generated code does not contain a copyright notice

#ifndef STATE_ESTIMATOR_MSGS__SRV__DETAIL__GET_WHITELIST__BUILDER_HPP_
#define STATE_ESTIMATOR_MSGS__SRV__DETAIL__GET_WHITELIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "state_estimator_msgs/srv/detail/get_whitelist__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace state_estimator_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::state_estimator_msgs::srv::GetWhitelist_Request>()
{
  return ::state_estimator_msgs::srv::GetWhitelist_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace state_estimator_msgs


namespace state_estimator_msgs
{

namespace srv
{

namespace builder
{

class Init_GetWhitelist_Response_names
{
public:
  Init_GetWhitelist_Response_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::state_estimator_msgs::srv::GetWhitelist_Response names(::state_estimator_msgs::srv::GetWhitelist_Response::_names_type arg)
  {
    msg_.names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::state_estimator_msgs::srv::GetWhitelist_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::state_estimator_msgs::srv::GetWhitelist_Response>()
{
  return state_estimator_msgs::srv::builder::Init_GetWhitelist_Response_names();
}

}  // namespace state_estimator_msgs

#endif  // STATE_ESTIMATOR_MSGS__SRV__DETAIL__GET_WHITELIST__BUILDER_HPP_
