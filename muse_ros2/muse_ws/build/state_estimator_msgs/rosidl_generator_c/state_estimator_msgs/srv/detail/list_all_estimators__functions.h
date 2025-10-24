// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from state_estimator_msgs:srv/ListAllEstimators.idl
// generated code does not contain a copyright notice

#ifndef STATE_ESTIMATOR_MSGS__SRV__DETAIL__LIST_ALL_ESTIMATORS__FUNCTIONS_H_
#define STATE_ESTIMATOR_MSGS__SRV__DETAIL__LIST_ALL_ESTIMATORS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "state_estimator_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "state_estimator_msgs/srv/detail/list_all_estimators__struct.h"

/// Initialize srv/ListAllEstimators message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * state_estimator_msgs__srv__ListAllEstimators_Request
 * )) before or use
 * state_estimator_msgs__srv__ListAllEstimators_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
bool
state_estimator_msgs__srv__ListAllEstimators_Request__init(state_estimator_msgs__srv__ListAllEstimators_Request * msg);

/// Finalize srv/ListAllEstimators message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
void
state_estimator_msgs__srv__ListAllEstimators_Request__fini(state_estimator_msgs__srv__ListAllEstimators_Request * msg);

/// Create srv/ListAllEstimators message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * state_estimator_msgs__srv__ListAllEstimators_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
state_estimator_msgs__srv__ListAllEstimators_Request *
state_estimator_msgs__srv__ListAllEstimators_Request__create();

/// Destroy srv/ListAllEstimators message.
/**
 * It calls
 * state_estimator_msgs__srv__ListAllEstimators_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
void
state_estimator_msgs__srv__ListAllEstimators_Request__destroy(state_estimator_msgs__srv__ListAllEstimators_Request * msg);

/// Check for srv/ListAllEstimators message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
bool
state_estimator_msgs__srv__ListAllEstimators_Request__are_equal(const state_estimator_msgs__srv__ListAllEstimators_Request * lhs, const state_estimator_msgs__srv__ListAllEstimators_Request * rhs);

/// Copy a srv/ListAllEstimators message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
bool
state_estimator_msgs__srv__ListAllEstimators_Request__copy(
  const state_estimator_msgs__srv__ListAllEstimators_Request * input,
  state_estimator_msgs__srv__ListAllEstimators_Request * output);

/// Initialize array of srv/ListAllEstimators messages.
/**
 * It allocates the memory for the number of elements and calls
 * state_estimator_msgs__srv__ListAllEstimators_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
bool
state_estimator_msgs__srv__ListAllEstimators_Request__Sequence__init(state_estimator_msgs__srv__ListAllEstimators_Request__Sequence * array, size_t size);

/// Finalize array of srv/ListAllEstimators messages.
/**
 * It calls
 * state_estimator_msgs__srv__ListAllEstimators_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
void
state_estimator_msgs__srv__ListAllEstimators_Request__Sequence__fini(state_estimator_msgs__srv__ListAllEstimators_Request__Sequence * array);

/// Create array of srv/ListAllEstimators messages.
/**
 * It allocates the memory for the array and calls
 * state_estimator_msgs__srv__ListAllEstimators_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
state_estimator_msgs__srv__ListAllEstimators_Request__Sequence *
state_estimator_msgs__srv__ListAllEstimators_Request__Sequence__create(size_t size);

/// Destroy array of srv/ListAllEstimators messages.
/**
 * It calls
 * state_estimator_msgs__srv__ListAllEstimators_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
void
state_estimator_msgs__srv__ListAllEstimators_Request__Sequence__destroy(state_estimator_msgs__srv__ListAllEstimators_Request__Sequence * array);

/// Check for srv/ListAllEstimators message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
bool
state_estimator_msgs__srv__ListAllEstimators_Request__Sequence__are_equal(const state_estimator_msgs__srv__ListAllEstimators_Request__Sequence * lhs, const state_estimator_msgs__srv__ListAllEstimators_Request__Sequence * rhs);

/// Copy an array of srv/ListAllEstimators messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
bool
state_estimator_msgs__srv__ListAllEstimators_Request__Sequence__copy(
  const state_estimator_msgs__srv__ListAllEstimators_Request__Sequence * input,
  state_estimator_msgs__srv__ListAllEstimators_Request__Sequence * output);

/// Initialize srv/ListAllEstimators message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * state_estimator_msgs__srv__ListAllEstimators_Response
 * )) before or use
 * state_estimator_msgs__srv__ListAllEstimators_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
bool
state_estimator_msgs__srv__ListAllEstimators_Response__init(state_estimator_msgs__srv__ListAllEstimators_Response * msg);

/// Finalize srv/ListAllEstimators message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
void
state_estimator_msgs__srv__ListAllEstimators_Response__fini(state_estimator_msgs__srv__ListAllEstimators_Response * msg);

/// Create srv/ListAllEstimators message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * state_estimator_msgs__srv__ListAllEstimators_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
state_estimator_msgs__srv__ListAllEstimators_Response *
state_estimator_msgs__srv__ListAllEstimators_Response__create();

/// Destroy srv/ListAllEstimators message.
/**
 * It calls
 * state_estimator_msgs__srv__ListAllEstimators_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
void
state_estimator_msgs__srv__ListAllEstimators_Response__destroy(state_estimator_msgs__srv__ListAllEstimators_Response * msg);

/// Check for srv/ListAllEstimators message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
bool
state_estimator_msgs__srv__ListAllEstimators_Response__are_equal(const state_estimator_msgs__srv__ListAllEstimators_Response * lhs, const state_estimator_msgs__srv__ListAllEstimators_Response * rhs);

/// Copy a srv/ListAllEstimators message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
bool
state_estimator_msgs__srv__ListAllEstimators_Response__copy(
  const state_estimator_msgs__srv__ListAllEstimators_Response * input,
  state_estimator_msgs__srv__ListAllEstimators_Response * output);

/// Initialize array of srv/ListAllEstimators messages.
/**
 * It allocates the memory for the number of elements and calls
 * state_estimator_msgs__srv__ListAllEstimators_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
bool
state_estimator_msgs__srv__ListAllEstimators_Response__Sequence__init(state_estimator_msgs__srv__ListAllEstimators_Response__Sequence * array, size_t size);

/// Finalize array of srv/ListAllEstimators messages.
/**
 * It calls
 * state_estimator_msgs__srv__ListAllEstimators_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
void
state_estimator_msgs__srv__ListAllEstimators_Response__Sequence__fini(state_estimator_msgs__srv__ListAllEstimators_Response__Sequence * array);

/// Create array of srv/ListAllEstimators messages.
/**
 * It allocates the memory for the array and calls
 * state_estimator_msgs__srv__ListAllEstimators_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
state_estimator_msgs__srv__ListAllEstimators_Response__Sequence *
state_estimator_msgs__srv__ListAllEstimators_Response__Sequence__create(size_t size);

/// Destroy array of srv/ListAllEstimators messages.
/**
 * It calls
 * state_estimator_msgs__srv__ListAllEstimators_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
void
state_estimator_msgs__srv__ListAllEstimators_Response__Sequence__destroy(state_estimator_msgs__srv__ListAllEstimators_Response__Sequence * array);

/// Check for srv/ListAllEstimators message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
bool
state_estimator_msgs__srv__ListAllEstimators_Response__Sequence__are_equal(const state_estimator_msgs__srv__ListAllEstimators_Response__Sequence * lhs, const state_estimator_msgs__srv__ListAllEstimators_Response__Sequence * rhs);

/// Copy an array of srv/ListAllEstimators messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_state_estimator_msgs
bool
state_estimator_msgs__srv__ListAllEstimators_Response__Sequence__copy(
  const state_estimator_msgs__srv__ListAllEstimators_Response__Sequence * input,
  state_estimator_msgs__srv__ListAllEstimators_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // STATE_ESTIMATOR_MSGS__SRV__DETAIL__LIST_ALL_ESTIMATORS__FUNCTIONS_H_
