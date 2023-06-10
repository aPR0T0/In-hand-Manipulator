// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_sdk_inf:msg/SetTorque.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_INF__MSG__DETAIL__SET_TORQUE__STRUCT_H_
#define DYNAMIXEL_SDK_INF__MSG__DETAIL__SET_TORQUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SetTorque in the package dynamixel_sdk_inf.
/**
  * Messages
 */
typedef struct dynamixel_sdk_inf__msg__SetTorque
{
  uint8_t id;
  int32_t torque;
} dynamixel_sdk_inf__msg__SetTorque;

// Struct for a sequence of dynamixel_sdk_inf__msg__SetTorque.
typedef struct dynamixel_sdk_inf__msg__SetTorque__Sequence
{
  dynamixel_sdk_inf__msg__SetTorque * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_sdk_inf__msg__SetTorque__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_SDK_INF__MSG__DETAIL__SET_TORQUE__STRUCT_H_
