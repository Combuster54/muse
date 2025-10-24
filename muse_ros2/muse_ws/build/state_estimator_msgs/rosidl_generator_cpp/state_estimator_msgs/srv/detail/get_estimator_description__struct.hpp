// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from state_estimator_msgs:srv/GetEstimatorDescription.idl
// generated code does not contain a copyright notice

#ifndef STATE_ESTIMATOR_MSGS__SRV__DETAIL__GET_ESTIMATOR_DESCRIPTION__STRUCT_HPP_
#define STATE_ESTIMATOR_MSGS__SRV__DETAIL__GET_ESTIMATOR_DESCRIPTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__state_estimator_msgs__srv__GetEstimatorDescription_Request __attribute__((deprecated))
#else
# define DEPRECATED__state_estimator_msgs__srv__GetEstimatorDescription_Request __declspec(deprecated)
#endif

namespace state_estimator_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetEstimatorDescription_Request_
{
  using Type = GetEstimatorDescription_Request_<ContainerAllocator>;

  explicit GetEstimatorDescription_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit GetEstimatorDescription_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    state_estimator_msgs::srv::GetEstimatorDescription_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const state_estimator_msgs::srv::GetEstimatorDescription_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<state_estimator_msgs::srv::GetEstimatorDescription_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<state_estimator_msgs::srv::GetEstimatorDescription_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      state_estimator_msgs::srv::GetEstimatorDescription_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<state_estimator_msgs::srv::GetEstimatorDescription_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      state_estimator_msgs::srv::GetEstimatorDescription_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<state_estimator_msgs::srv::GetEstimatorDescription_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<state_estimator_msgs::srv::GetEstimatorDescription_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<state_estimator_msgs::srv::GetEstimatorDescription_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__state_estimator_msgs__srv__GetEstimatorDescription_Request
    std::shared_ptr<state_estimator_msgs::srv::GetEstimatorDescription_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__state_estimator_msgs__srv__GetEstimatorDescription_Request
    std::shared_ptr<state_estimator_msgs::srv::GetEstimatorDescription_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetEstimatorDescription_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetEstimatorDescription_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetEstimatorDescription_Request_

// alias to use template instance with default allocator
using GetEstimatorDescription_Request =
  state_estimator_msgs::srv::GetEstimatorDescription_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace state_estimator_msgs


#ifndef _WIN32
# define DEPRECATED__state_estimator_msgs__srv__GetEstimatorDescription_Response __attribute__((deprecated))
#else
# define DEPRECATED__state_estimator_msgs__srv__GetEstimatorDescription_Response __declspec(deprecated)
#endif

namespace state_estimator_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetEstimatorDescription_Response_
{
  using Type = GetEstimatorDescription_Response_<ContainerAllocator>;

  explicit GetEstimatorDescription_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->description = "";
    }
  }

  explicit GetEstimatorDescription_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->description = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    state_estimator_msgs::srv::GetEstimatorDescription_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const state_estimator_msgs::srv::GetEstimatorDescription_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<state_estimator_msgs::srv::GetEstimatorDescription_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<state_estimator_msgs::srv::GetEstimatorDescription_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      state_estimator_msgs::srv::GetEstimatorDescription_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<state_estimator_msgs::srv::GetEstimatorDescription_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      state_estimator_msgs::srv::GetEstimatorDescription_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<state_estimator_msgs::srv::GetEstimatorDescription_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<state_estimator_msgs::srv::GetEstimatorDescription_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<state_estimator_msgs::srv::GetEstimatorDescription_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__state_estimator_msgs__srv__GetEstimatorDescription_Response
    std::shared_ptr<state_estimator_msgs::srv::GetEstimatorDescription_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__state_estimator_msgs__srv__GetEstimatorDescription_Response
    std::shared_ptr<state_estimator_msgs::srv::GetEstimatorDescription_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetEstimatorDescription_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetEstimatorDescription_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetEstimatorDescription_Response_

// alias to use template instance with default allocator
using GetEstimatorDescription_Response =
  state_estimator_msgs::srv::GetEstimatorDescription_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace state_estimator_msgs

namespace state_estimator_msgs
{

namespace srv
{

struct GetEstimatorDescription
{
  using Request = state_estimator_msgs::srv::GetEstimatorDescription_Request;
  using Response = state_estimator_msgs::srv::GetEstimatorDescription_Response;
};

}  // namespace srv

}  // namespace state_estimator_msgs

#endif  // STATE_ESTIMATOR_MSGS__SRV__DETAIL__GET_ESTIMATOR_DESCRIPTION__STRUCT_HPP_
