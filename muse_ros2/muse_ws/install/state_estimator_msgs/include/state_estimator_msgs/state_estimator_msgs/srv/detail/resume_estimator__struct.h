// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from state_estimator_msgs:srv/ResumeEstimator.idl
// generated code does not contain a copyright notice

#ifndef STATE_ESTIMATOR_MSGS__SRV__DETAIL__RESUME_ESTIMATOR__STRUCT_H_
#define STATE_ESTIMATOR_MSGS__SRV__DETAIL__RESUME_ESTIMATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ResumeEstimator in the package state_estimator_msgs.
typedef struct state_estimator_msgs__srv__ResumeEstimator_Request
{
  rosidl_runtime_c__String name;
} state_estimator_msgs__srv__ResumeEstimator_Request;

// Struct for a sequence of state_estimator_msgs__srv__ResumeEstimator_Request.
typedef struct state_estimator_msgs__srv__ResumeEstimator_Request__Sequence
{
  state_estimator_msgs__srv__ResumeEstimator_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} state_estimator_msgs__srv__ResumeEstimator_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ResumeEstimator in the package state_estimator_msgs.
typedef struct state_estimator_msgs__srv__ResumeEstimator_Response
{
  bool success;
} state_estimator_msgs__srv__ResumeEstimator_Response;

// Struct for a sequence of state_estimator_msgs__srv__ResumeEstimator_Response.
typedef struct state_estimator_msgs__srv__ResumeEstimator_Response__Sequence
{
  state_estimator_msgs__srv__ResumeEstimator_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} state_estimator_msgs__srv__ResumeEstimator_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STATE_ESTIMATOR_MSGS__SRV__DETAIL__RESUME_ESTIMATOR__STRUCT_H_
