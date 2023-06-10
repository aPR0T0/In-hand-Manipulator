// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamixel_sdk_inf:msg/SetTorque.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_INF__MSG__DETAIL__SET_TORQUE__TRAITS_HPP_
#define DYNAMIXEL_SDK_INF__MSG__DETAIL__SET_TORQUE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamixel_sdk_inf/msg/detail/set_torque__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dynamixel_sdk_inf
{

namespace msg
{

inline void to_flow_style_yaml(
  const SetTorque & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: torque
  {
    out << "torque: ";
    rosidl_generator_traits::value_to_yaml(msg.torque, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetTorque & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque: ";
    rosidl_generator_traits::value_to_yaml(msg.torque, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetTorque & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace dynamixel_sdk_inf

namespace rosidl_generator_traits
{

[[deprecated("use dynamixel_sdk_inf::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamixel_sdk_inf::msg::SetTorque & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_sdk_inf::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_sdk_inf::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_sdk_inf::msg::SetTorque & msg)
{
  return dynamixel_sdk_inf::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_sdk_inf::msg::SetTorque>()
{
  return "dynamixel_sdk_inf::msg::SetTorque";
}

template<>
inline const char * name<dynamixel_sdk_inf::msg::SetTorque>()
{
  return "dynamixel_sdk_inf/msg/SetTorque";
}

template<>
struct has_fixed_size<dynamixel_sdk_inf::msg::SetTorque>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynamixel_sdk_inf::msg::SetTorque>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamixel_sdk_inf::msg::SetTorque>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIXEL_SDK_INF__MSG__DETAIL__SET_TORQUE__TRAITS_HPP_
