// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from state_estimator_msgs:srv/ListAllEstimators.idl
// generated code does not contain a copyright notice

#ifndef STATE_ESTIMATOR_MSGS__SRV__DETAIL__LIST_ALL_ESTIMATORS__TRAITS_HPP_
#define STATE_ESTIMATOR_MSGS__SRV__DETAIL__LIST_ALL_ESTIMATORS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "state_estimator_msgs/srv/detail/list_all_estimators__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace state_estimator_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListAllEstimators_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListAllEstimators_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListAllEstimators_Request & msg, bool use_flow_style = false)
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

}  // namespace state_estimator_msgs

namespace rosidl_generator_traits
{

[[deprecated("use state_estimator_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const state_estimator_msgs::srv::ListAllEstimators_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  state_estimator_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use state_estimator_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const state_estimator_msgs::srv::ListAllEstimators_Request & msg)
{
  return state_estimator_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<state_estimator_msgs::srv::ListAllEstimators_Request>()
{
  return "state_estimator_msgs::srv::ListAllEstimators_Request";
}

template<>
inline const char * name<state_estimator_msgs::srv::ListAllEstimators_Request>()
{
  return "state_estimator_msgs/srv/ListAllEstimators_Request";
}

template<>
struct has_fixed_size<state_estimator_msgs::srv::ListAllEstimators_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<state_estimator_msgs::srv::ListAllEstimators_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<state_estimator_msgs::srv::ListAllEstimators_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace state_estimator_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListAllEstimators_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: names
  {
    if (msg.names.size() == 0) {
      out << "names: []";
    } else {
      out << "names: [";
      size_t pending_items = msg.names.size();
      for (auto item : msg.names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListAllEstimators_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.names.size() == 0) {
      out << "names: []\n";
    } else {
      out << "names:\n";
      for (auto item : msg.names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListAllEstimators_Response & msg, bool use_flow_style = false)
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

}  // namespace state_estimator_msgs

namespace rosidl_generator_traits
{

[[deprecated("use state_estimator_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const state_estimator_msgs::srv::ListAllEstimators_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  state_estimator_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use state_estimator_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const state_estimator_msgs::srv::ListAllEstimators_Response & msg)
{
  return state_estimator_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<state_estimator_msgs::srv::ListAllEstimators_Response>()
{
  return "state_estimator_msgs::srv::ListAllEstimators_Response";
}

template<>
inline const char * name<state_estimator_msgs::srv::ListAllEstimators_Response>()
{
  return "state_estimator_msgs/srv/ListAllEstimators_Response";
}

template<>
struct has_fixed_size<state_estimator_msgs::srv::ListAllEstimators_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<state_estimator_msgs::srv::ListAllEstimators_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<state_estimator_msgs::srv::ListAllEstimators_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<state_estimator_msgs::srv::ListAllEstimators>()
{
  return "state_estimator_msgs::srv::ListAllEstimators";
}

template<>
inline const char * name<state_estimator_msgs::srv::ListAllEstimators>()
{
  return "state_estimator_msgs/srv/ListAllEstimators";
}

template<>
struct has_fixed_size<state_estimator_msgs::srv::ListAllEstimators>
  : std::integral_constant<
    bool,
    has_fixed_size<state_estimator_msgs::srv::ListAllEstimators_Request>::value &&
    has_fixed_size<state_estimator_msgs::srv::ListAllEstimators_Response>::value
  >
{
};

template<>
struct has_bounded_size<state_estimator_msgs::srv::ListAllEstimators>
  : std::integral_constant<
    bool,
    has_bounded_size<state_estimator_msgs::srv::ListAllEstimators_Request>::value &&
    has_bounded_size<state_estimator_msgs::srv::ListAllEstimators_Response>::value
  >
{
};

template<>
struct is_service<state_estimator_msgs::srv::ListAllEstimators>
  : std::true_type
{
};

template<>
struct is_service_request<state_estimator_msgs::srv::ListAllEstimators_Request>
  : std::true_type
{
};

template<>
struct is_service_response<state_estimator_msgs::srv::ListAllEstimators_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // STATE_ESTIMATOR_MSGS__SRV__DETAIL__LIST_ALL_ESTIMATORS__TRAITS_HPP_
