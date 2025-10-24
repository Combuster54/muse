// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from state_estimator_msgs:srv/ResumeEstimator.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "state_estimator_msgs/srv/detail/resume_estimator__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace state_estimator_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ResumeEstimator_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResumeEstimator_Request_type_support_ids_t;

static const _ResumeEstimator_Request_type_support_ids_t _ResumeEstimator_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ResumeEstimator_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResumeEstimator_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResumeEstimator_Request_type_support_symbol_names_t _ResumeEstimator_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, state_estimator_msgs, srv, ResumeEstimator_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, state_estimator_msgs, srv, ResumeEstimator_Request)),
  }
};

typedef struct _ResumeEstimator_Request_type_support_data_t
{
  void * data[2];
} _ResumeEstimator_Request_type_support_data_t;

static _ResumeEstimator_Request_type_support_data_t _ResumeEstimator_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResumeEstimator_Request_message_typesupport_map = {
  2,
  "state_estimator_msgs",
  &_ResumeEstimator_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ResumeEstimator_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ResumeEstimator_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResumeEstimator_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResumeEstimator_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace state_estimator_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<state_estimator_msgs::srv::ResumeEstimator_Request>()
{
  return &::state_estimator_msgs::srv::rosidl_typesupport_cpp::ResumeEstimator_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, state_estimator_msgs, srv, ResumeEstimator_Request)() {
  return get_message_type_support_handle<state_estimator_msgs::srv::ResumeEstimator_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "state_estimator_msgs/srv/detail/resume_estimator__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace state_estimator_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ResumeEstimator_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResumeEstimator_Response_type_support_ids_t;

static const _ResumeEstimator_Response_type_support_ids_t _ResumeEstimator_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ResumeEstimator_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResumeEstimator_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResumeEstimator_Response_type_support_symbol_names_t _ResumeEstimator_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, state_estimator_msgs, srv, ResumeEstimator_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, state_estimator_msgs, srv, ResumeEstimator_Response)),
  }
};

typedef struct _ResumeEstimator_Response_type_support_data_t
{
  void * data[2];
} _ResumeEstimator_Response_type_support_data_t;

static _ResumeEstimator_Response_type_support_data_t _ResumeEstimator_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResumeEstimator_Response_message_typesupport_map = {
  2,
  "state_estimator_msgs",
  &_ResumeEstimator_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ResumeEstimator_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ResumeEstimator_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResumeEstimator_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResumeEstimator_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace state_estimator_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<state_estimator_msgs::srv::ResumeEstimator_Response>()
{
  return &::state_estimator_msgs::srv::rosidl_typesupport_cpp::ResumeEstimator_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, state_estimator_msgs, srv, ResumeEstimator_Response)() {
  return get_message_type_support_handle<state_estimator_msgs::srv::ResumeEstimator_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "state_estimator_msgs/srv/detail/resume_estimator__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace state_estimator_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ResumeEstimator_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResumeEstimator_type_support_ids_t;

static const _ResumeEstimator_type_support_ids_t _ResumeEstimator_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ResumeEstimator_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResumeEstimator_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResumeEstimator_type_support_symbol_names_t _ResumeEstimator_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, state_estimator_msgs, srv, ResumeEstimator)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, state_estimator_msgs, srv, ResumeEstimator)),
  }
};

typedef struct _ResumeEstimator_type_support_data_t
{
  void * data[2];
} _ResumeEstimator_type_support_data_t;

static _ResumeEstimator_type_support_data_t _ResumeEstimator_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResumeEstimator_service_typesupport_map = {
  2,
  "state_estimator_msgs",
  &_ResumeEstimator_service_typesupport_ids.typesupport_identifier[0],
  &_ResumeEstimator_service_typesupport_symbol_names.symbol_name[0],
  &_ResumeEstimator_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ResumeEstimator_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResumeEstimator_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace state_estimator_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<state_estimator_msgs::srv::ResumeEstimator>()
{
  return &::state_estimator_msgs::srv::rosidl_typesupport_cpp::ResumeEstimator_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, state_estimator_msgs, srv, ResumeEstimator)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<state_estimator_msgs::srv::ResumeEstimator>();
}

#ifdef __cplusplus
}
#endif
