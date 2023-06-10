// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_sdk_inf:srv/GetTorquectrl.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_INF__SRV__DETAIL__GET_TORQUECTRL__STRUCT_H_
#define DYNAMIXEL_SDK_INF__SRV__DETAIL__GET_TORQUECTRL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetTorquectrl in the package dynamixel_sdk_inf.
typedef struct dynamixel_sdk_inf__srv__GetTorquectrl_Request
{
  uint8_t id;
} dynamixel_sdk_inf__srv__GetTorquectrl_Request;

// Struct for a sequence of dynamixel_sdk_inf__srv__GetTorquectrl_Request.
typedef struct dynamixel_sdk_inf__srv__GetTorquectrl_Request__Sequence
{
  dynamixel_sdk_inf__srv__GetTorquectrl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_sdk_inf__srv__GetTorquectrl_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GetTorquectrl in the package dynamixel_sdk_inf.
typedef struct dynamixel_sdk_inf__srv__GetTorquectrl_Response
{
  int32_t torque;
} dynamixel_sdk_inf__srv__GetTorquectrl_Response;

// Struct for a sequence of dynamixel_sdk_inf__srv__GetTorquectrl_Response.
typedef struct dynamixel_sdk_inf__srv__GetTorquectrl_Response__Sequence
{
  dynamixel_sdk_inf__srv__GetTorquectrl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_sdk_inf__srv__GetTorquectrl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_SDK_INF__SRV__DETAIL__GET_TORQUECTRL__STRUCT_H_
