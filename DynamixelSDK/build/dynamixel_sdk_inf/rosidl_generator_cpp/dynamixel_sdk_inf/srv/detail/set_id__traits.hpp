// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamixel_sdk_inf:srv/SetId.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_INF__SRV__DETAIL__SET_ID__TRAITS_HPP_
#define DYNAMIXEL_SDK_INF__SRV__DETAIL__SET_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamixel_sdk_inf/srv/detail/set_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dynamixel_sdk_inf
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetId_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_ids
  {
    if (msg.motor_ids.size() == 0) {
      out << "motor_ids: []";
    } else {
      out << "motor_ids: [";
      size_t pending_items = msg.motor_ids.size();
      for (auto item : msg.motor_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetId_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_ids.size() == 0) {
      out << "motor_ids: []\n";
    } else {
      out << "motor_ids:\n";
      for (auto item : msg.motor_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetId_Request & msg, bool use_flow_style = false)
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
  const dynamixel_sdk_inf::srv::SetId_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_sdk_inf::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_sdk_inf::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_sdk_inf::srv::SetId_Request & msg)
{
  return dynamixel_sdk_inf::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_sdk_inf::srv::SetId_Request>()
{
  return "dynamixel_sdk_inf::srv::SetId_Request";
}

template<>
inline const char * name<dynamixel_sdk_inf::srv::SetId_Request>()
{
  return "dynamixel_sdk_inf/srv/SetId_Request";
}

template<>
struct has_fixed_size<dynamixel_sdk_inf::srv::SetId_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamixel_sdk_inf::srv::SetId_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamixel_sdk_inf::srv::SetId_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dynamixel_sdk_inf
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetId_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: set
  {
    out << "set: ";
    rosidl_generator_traits::value_to_yaml(msg.set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetId_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set: ";
    rosidl_generator_traits::value_to_yaml(msg.set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetId_Response & msg, bool use_flow_style = false)
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
  const dynamixel_sdk_inf::srv::SetId_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_sdk_inf::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_sdk_inf::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_sdk_inf::srv::SetId_Response & msg)
{
  return dynamixel_sdk_inf::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_sdk_inf::srv::SetId_Response>()
{
  return "dynamixel_sdk_inf::srv::SetId_Response";
}

template<>
inline const char * name<dynamixel_sdk_inf::srv::SetId_Response>()
{
  return "dynamixel_sdk_inf/srv/SetId_Response";
}

template<>
struct has_fixed_size<dynamixel_sdk_inf::srv::SetId_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynamixel_sdk_inf::srv::SetId_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamixel_sdk_inf::srv::SetId_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dynamixel_sdk_inf::srv::SetId>()
{
  return "dynamixel_sdk_inf::srv::SetId";
}

template<>
inline const char * name<dynamixel_sdk_inf::srv::SetId>()
{
  return "dynamixel_sdk_inf/srv/SetId";
}

template<>
struct has_fixed_size<dynamixel_sdk_inf::srv::SetId>
  : std::integral_constant<
    bool,
    has_fixed_size<dynamixel_sdk_inf::srv::SetId_Request>::value &&
    has_fixed_size<dynamixel_sdk_inf::srv::SetId_Response>::value
  >
{
};

template<>
struct has_bounded_size<dynamixel_sdk_inf::srv::SetId>
  : std::integral_constant<
    bool,
    has_bounded_size<dynamixel_sdk_inf::srv::SetId_Request>::value &&
    has_bounded_size<dynamixel_sdk_inf::srv::SetId_Response>::value
  >
{
};

template<>
struct is_service<dynamixel_sdk_inf::srv::SetId>
  : std::true_type
{
};

template<>
struct is_service_request<dynamixel_sdk_inf::srv::SetId_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dynamixel_sdk_inf::srv::SetId_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIXEL_SDK_INF__SRV__DETAIL__SET_ID__TRAITS_HPP_
