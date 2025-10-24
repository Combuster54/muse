// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from state_estimator_msgs:srv/StartEstimator.idl
// generated code does not contain a copyright notice

#ifndef STATE_ESTIMATOR_MSGS__SRV__DETAIL__START_ESTIMATOR__BUILDER_HPP_
#define STATE_ESTIMATOR_MSGS__SRV__DETAIL__START_ESTIMATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "state_estimator_msgs/srv/detail/start_estimator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace state_estimator_msgs
{

namespace srv
{

namespace builder
{

class Init_StartEstimator_Request_name
{
public:
  Init_StartEstimator_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::state_estimator_msgs::srv::StartEstimator_Request name(::state_estimator_msgs::srv::StartEstimator_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::state_estimator_msgs::srv::StartEstimator_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::state_estimator_msgs::srv::StartEstimator_Request>()
{
  return state_estimator_msgs::srv::builder::Init_StartEstimator_Request_name();
}

}  // namespace state_estimator_msgs


namespace state_estimator_msgs
{

namespace srv
{

namespace builder
{

class Init_StartEstimator_Response_success
{
public:
  Init_StartEstimator_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::state_estimator_msgs::srv::StartEstimator_Response success(::state_estimator_msgs::srv::StartEstimator_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::state_estimator_msgs::srv::StartEstimator_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::state_estimator_msgs::srv::StartEstimator_Response>()
{
  return state_estimator_msgs::srv::builder::Init_StartEstimator_Response_success();
}

}  // namespace state_estimator_msgs

#endif  // STATE_ESTIMATOR_MSGS__SRV__DETAIL__START_ESTIMATOR__BUILDER_HPP_
