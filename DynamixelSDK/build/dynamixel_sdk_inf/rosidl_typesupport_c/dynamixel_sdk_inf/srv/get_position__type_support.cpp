// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from dynamixel_sdk_inf:srv/GetPosition.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "dynamixel_sdk_inf/srv/detail/get_position__struct.h"
#include "dynamixel_sdk_inf/srv/detail/get_position__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace dynamixel_sdk_inf
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetPosition_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPosition_Request_type_support_ids_t;

static const _GetPosition_Request_type_support_ids_t _GetPosition_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetPosition_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPosition_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPosition_Request_type_support_symbol_names_t _GetPosition_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_sdk_inf, srv, GetPosition_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_sdk_inf, srv, GetPosition_Request)),
  }
};

typedef struct _GetPosition_Request_type_support_data_t
{
  void * data[2];
} _GetPosition_Request_type_support_data_t;

static _GetPosition_Request_type_support_data_t _GetPosition_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPosition_Request_message_typesupport_map = {
  2,
  "dynamixel_sdk_inf",
  &_GetPosition_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetPosition_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetPosition_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPosition_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPosition_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamixel_sdk_inf

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dynamixel_sdk_inf, srv, GetPosition_Request)() {
  return &::dynamixel_sdk_inf::srv::rosidl_typesupport_c::GetPosition_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dynamixel_sdk_inf/srv/detail/get_position__struct.h"
// already included above
// #include "dynamixel_sdk_inf/srv/detail/get_position__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dynamixel_sdk_inf
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetPosition_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPosition_Response_type_support_ids_t;

static const _GetPosition_Response_type_support_ids_t _GetPosition_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetPosition_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPosition_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPosition_Response_type_support_symbol_names_t _GetPosition_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_sdk_inf, srv, GetPosition_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_sdk_inf, srv, GetPosition_Response)),
  }
};

typedef struct _GetPosition_Response_type_support_data_t
{
  void * data[2];
} _GetPosition_Response_type_support_data_t;

static _GetPosition_Response_type_support_data_t _GetPosition_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPosition_Response_message_typesupport_map = {
  2,
  "dynamixel_sdk_inf",
  &_GetPosition_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetPosition_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetPosition_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPosition_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPosition_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamixel_sdk_inf

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dynamixel_sdk_inf, srv, GetPosition_Response)() {
  return &::dynamixel_sdk_inf::srv::rosidl_typesupport_c::GetPosition_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dynamixel_sdk_inf/srv/detail/get_position__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dynamixel_sdk_inf
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetPosition_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPosition_type_support_ids_t;

static const _GetPosition_type_support_ids_t _GetPosition_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetPosition_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPosition_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPosition_type_support_symbol_names_t _GetPosition_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_sdk_inf, srv, GetPosition)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_sdk_inf, srv, GetPosition)),
  }
};

typedef struct _GetPosition_type_support_data_t
{
  void * data[2];
} _GetPosition_type_support_data_t;

static _GetPosition_type_support_data_t _GetPosition_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPosition_service_typesupport_map = {
  2,
  "dynamixel_sdk_inf",
  &_GetPosition_service_typesupport_ids.typesupport_identifier[0],
  &_GetPosition_service_typesupport_symbol_names.symbol_name[0],
  &_GetPosition_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetPosition_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPosition_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamixel_sdk_inf

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, dynamixel_sdk_inf, srv, GetPosition)() {
  return &::dynamixel_sdk_inf::srv::rosidl_typesupport_c::GetPosition_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
