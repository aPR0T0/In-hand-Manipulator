// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_sdk_inf:srv/SetMode.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_INF__SRV__DETAIL__SET_MODE__STRUCT_H_
#define DYNAMIXEL_SDK_INF__SRV__DETAIL__SET_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motor_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// motor_ids
enum
{
  dynamixel_sdk_inf__srv__SetMode_Request__motor_ids__MAX_SIZE = 5
};

/// Struct defined in srv/SetMode in the package dynamixel_sdk_inf.
typedef struct dynamixel_sdk_inf__srv__SetMode_Request
{
  rosidl_runtime_c__uint8__Sequence motor_ids;
} dynamixel_sdk_inf__srv__SetMode_Request;

// Struct for a sequence of dynamixel_sdk_inf__srv__SetMode_Request.
typedef struct dynamixel_sdk_inf__srv__SetMode_Request__Sequence
{
  dynamixel_sdk_inf__srv__SetMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_sdk_inf__srv__SetMode_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetMode in the package dynamixel_sdk_inf.
typedef struct dynamixel_sdk_inf__srv__SetMode_Response
{
  int32_t torque_mode;
} dynamixel_sdk_inf__srv__SetMode_Response;

// Struct for a sequence of dynamixel_sdk_inf__srv__SetMode_Response.
typedef struct dynamixel_sdk_inf__srv__SetMode_Response__Sequence
{
  dynamixel_sdk_inf__srv__SetMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_sdk_inf__srv__SetMode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_SDK_INF__SRV__DETAIL__SET_MODE__STRUCT_H_
