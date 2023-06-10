// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamixel_sdk_inf:srv/GetTorquectrl.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_INF__SRV__DETAIL__GET_TORQUECTRL__TRAITS_HPP_
#define DYNAMIXEL_SDK_INF__SRV__DETAIL__GET_TORQUECTRL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamixel_sdk_inf/srv/detail/get_torquectrl__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dynamixel_sdk_inf
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTorquectrl_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetTorquectrl_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetTorquectrl_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dynamixel_sdk_inf

namespace rosidl_generator_traits
{

[[deprecated("use dynamixel_sdk_inf::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamixel_sdk_inf::srv::GetTorquectrl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_sdk_inf::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_sdk_inf::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_sdk_inf::srv::GetTorquectrl_Request & msg)
{
  return dynamixel_sdk_inf::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_sdk_inf::srv::GetTorquectrl_Request>()
{
  return "dynamixel_sdk_inf::srv::GetTorquectrl_Request";
}

template<>
inline const char * name<dynamixel_sdk_inf::srv::GetTorquectrl_Request>()
{
  return "dynamixel_sdk_inf/srv/GetTorquectrl_Request";
}

template<>
struct has_fixed_size<dynamixel_sdk_inf::srv::GetTorquectrl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynamixel_sdk_inf::srv::GetTorquectrl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamixel_sdk_inf::srv::GetTorquectrl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dynamixel_sdk_inf
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTorquectrl_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: torque
  {
    out << "torque: ";
    rosidl_generator_traits::value_to_yaml(msg.torque, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetTorquectrl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const GetTorquectrl_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dynamixel_sdk_inf

namespace rosidl_generator_traits
{

[[deprecated("use dynamixel_sdk_inf::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamixel_sdk_inf::srv::GetTorquectrl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_sdk_inf::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_sdk_inf::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_sdk_inf::srv::GetTorquectrl_Response & msg)
{
  return dynamixel_sdk_inf::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_sdk_inf::srv::GetTorquectrl_Response>()
{
  return "dynamixel_sdk_inf::srv::GetTorquectrl_Response";
}

template<>
inline const char * name<dynamixel_sdk_inf::srv::GetTorquectrl_Response>()
{
  return "dynamixel_sdk_inf/srv/GetTorquectrl_Response";
}

template<>
struct has_fixed_size<dynamixel_sdk_inf::srv::GetTorquectrl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynamixel_sdk_inf::srv::GetTorquectrl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamixel_sdk_inf::srv::GetTorquectrl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dynamixel_sdk_inf::srv::GetTorquectrl>()
{
  return "dynamixel_sdk_inf::srv::GetTorquectrl";
}

template<>
inline const char * name<dynamixel_sdk_inf::srv::GetTorquectrl>()
{
  return "dynamixel_sdk_inf/srv/GetTorquectrl";
}

template<>
struct has_fixed_size<dynamixel_sdk_inf::srv::GetTorquectrl>
  : std::integral_constant<
    bool,
    has_fixed_size<dynamixel_sdk_inf::srv::GetTorquectrl_Request>::value &&
    has_fixed_size<dynamixel_sdk_inf::srv::GetTorquectrl_Response>::value
  >
{
};

template<>
struct has_bounded_size<dynamixel_sdk_inf::srv::GetTorquectrl>
  : std::integral_constant<
    bool,
    has_bounded_size<dynamixel_sdk_inf::srv::GetTorquectrl_Request>::value &&
    has_bounded_size<dynamixel_sdk_inf::srv::GetTorquectrl_Response>::value
  >
{
};

template<>
struct is_service<dynamixel_sdk_inf::srv::GetTorquectrl>
  : std::true_type
{
};

template<>
struct is_service_request<dynamixel_sdk_inf::srv::GetTorquectrl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dynamixel_sdk_inf::srv::GetTorquectrl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIXEL_SDK_INF__SRV__DETAIL__GET_TORQUECTRL__TRAITS_HPP_
