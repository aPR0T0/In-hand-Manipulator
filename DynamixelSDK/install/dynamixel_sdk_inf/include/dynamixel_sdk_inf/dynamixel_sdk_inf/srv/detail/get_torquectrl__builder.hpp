// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_sdk_inf:srv/GetTorquectrl.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_INF__SRV__DETAIL__GET_TORQUECTRL__BUILDER_HPP_
#define DYNAMIXEL_SDK_INF__SRV__DETAIL__GET_TORQUECTRL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_sdk_inf/srv/detail/get_torquectrl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_sdk_inf
{

namespace srv
{

namespace builder
{

class Init_GetTorquectrl_Request_id
{
public:
  Init_GetTorquectrl_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamixel_sdk_inf::srv::GetTorquectrl_Request id(::dynamixel_sdk_inf::srv::GetTorquectrl_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_inf::srv::GetTorquectrl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_inf::srv::GetTorquectrl_Request>()
{
  return dynamixel_sdk_inf::srv::builder::Init_GetTorquectrl_Request_id();
}

}  // namespace dynamixel_sdk_inf


namespace dynamixel_sdk_inf
{

namespace srv
{

namespace builder
{

class Init_GetTorquectrl_Response_torque
{
public:
  Init_GetTorquectrl_Response_torque()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamixel_sdk_inf::srv::GetTorquectrl_Response torque(::dynamixel_sdk_inf::srv::GetTorquectrl_Response::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_inf::srv::GetTorquectrl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_inf::srv::GetTorquectrl_Response>()
{
  return dynamixel_sdk_inf::srv::builder::Init_GetTorquectrl_Response_torque();
}

}  // namespace dynamixel_sdk_inf

#endif  // DYNAMIXEL_SDK_INF__SRV__DETAIL__GET_TORQUECTRL__BUILDER_HPP_
