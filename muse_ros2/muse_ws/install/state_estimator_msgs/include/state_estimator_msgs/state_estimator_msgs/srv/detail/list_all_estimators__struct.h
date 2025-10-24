// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from state_estimator_msgs:srv/ListAllEstimators.idl
// generated code does not contain a copyright notice

#ifndef STATE_ESTIMATOR_MSGS__SRV__DETAIL__LIST_ALL_ESTIMATORS__STRUCT_H_
#define STATE_ESTIMATOR_MSGS__SRV__DETAIL__LIST_ALL_ESTIMATORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ListAllEstimators in the package state_estimator_msgs.
typedef struct state_estimator_msgs__srv__ListAllEstimators_Request
{
  uint8_t structure_needs_at_least_one_member;
} state_estimator_msgs__srv__ListAllEstimators_Request;

// Struct for a sequence of state_estimator_msgs__srv__ListAllEstimators_Request.
typedef struct state_estimator_msgs__srv__ListAllEstimators_Request__Sequence
{
  state_estimator_msgs__srv__ListAllEstimators_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} state_estimator_msgs__srv__ListAllEstimators_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'names'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ListAllEstimators in the package state_estimator_msgs.
typedef struct state_estimator_msgs__srv__ListAllEstimators_Response
{
  rosidl_runtime_c__String__Sequence names;
} state_estimator_msgs__srv__ListAllEstimators_Response;

// Struct for a sequence of state_estimator_msgs__srv__ListAllEstimators_Response.
typedef struct state_estimator_msgs__srv__ListAllEstimators_Response__Sequence
{
  state_estimator_msgs__srv__ListAllEstimators_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} state_estimator_msgs__srv__ListAllEstimators_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STATE_ESTIMATOR_MSGS__SRV__DETAIL__LIST_ALL_ESTIMATORS__STRUCT_H_
