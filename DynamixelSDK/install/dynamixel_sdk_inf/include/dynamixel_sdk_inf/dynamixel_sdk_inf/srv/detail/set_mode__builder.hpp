// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_sdk_inf:srv/SetMode.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_INF__SRV__DETAIL__SET_MODE__BUILDER_HPP_
#define DYNAMIXEL_SDK_INF__SRV__DETAIL__SET_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_sdk_inf/srv/detail/set_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_sdk_inf
{

namespace srv
{

namespace builder
{

class Init_SetMode_Request_motor_ids
{
public:
  Init_SetMode_Request_motor_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamixel_sdk_inf::srv::SetMode_Request motor_ids(::dynamixel_sdk_inf::srv::SetMode_Request::_motor_ids_type arg)
  {
    msg_.motor_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_inf::srv::SetMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_inf::srv::SetMode_Request>()
{
  return dynamixel_sdk_inf::srv::builder::Init_SetMode_Request_motor_ids();
}

}  // namespace dynamixel_sdk_inf


namespace dynamixel_sdk_inf
{

namespace srv
{

namespace builder
{

class Init_SetMode_Response_torque_mode
{
public:
  Init_SetMode_Response_torque_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamixel_sdk_inf::srv::SetMode_Response torque_mode(::dynamixel_sdk_inf::srv::SetMode_Response::_torque_mode_type arg)
  {
    msg_.torque_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_inf::srv::SetMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_inf::srv::SetMode_Response>()
{
  return dynamixel_sdk_inf::srv::builder::Init_SetMode_Response_torque_mode();
}

}  // namespace dynamixel_sdk_inf

#endif  // DYNAMIXEL_SDK_INF__SRV__DETAIL__SET_MODE__BUILDER_HPP_
