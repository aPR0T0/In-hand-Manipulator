// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_sdk_inf:msg/SetTorque.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_INF__MSG__DETAIL__SET_TORQUE__BUILDER_HPP_
#define DYNAMIXEL_SDK_INF__MSG__DETAIL__SET_TORQUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_sdk_inf/msg/detail/set_torque__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_sdk_inf
{

namespace msg
{

namespace builder
{

class Init_SetTorque_torque
{
public:
  explicit Init_SetTorque_torque(::dynamixel_sdk_inf::msg::SetTorque & msg)
  : msg_(msg)
  {}
  ::dynamixel_sdk_inf::msg::SetTorque torque(::dynamixel_sdk_inf::msg::SetTorque::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_inf::msg::SetTorque msg_;
};

class Init_SetTorque_id
{
public:
  Init_SetTorque_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTorque_torque id(::dynamixel_sdk_inf::msg::SetTorque::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SetTorque_torque(msg_);
  }

private:
  ::dynamixel_sdk_inf::msg::SetTorque msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_inf::msg::SetTorque>()
{
  return dynamixel_sdk_inf::msg::builder::Init_SetTorque_id();
}

}  // namespace dynamixel_sdk_inf

#endif  // DYNAMIXEL_SDK_INF__MSG__DETAIL__SET_TORQUE__BUILDER_HPP_
