// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamixel_sdk_inf:msg/SetTorque.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_INF__MSG__DETAIL__SET_TORQUE__STRUCT_HPP_
#define DYNAMIXEL_SDK_INF__MSG__DETAIL__SET_TORQUE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynamixel_sdk_inf__msg__SetTorque __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_sdk_inf__msg__SetTorque __declspec(deprecated)
#endif

namespace dynamixel_sdk_inf
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetTorque_
{
  using Type = SetTorque_<ContainerAllocator>;

  explicit SetTorque_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->torque = 0l;
    }
  }

  explicit SetTorque_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->torque = 0l;
    }
  }

  // field types and members
  using _id_type =
    uint8_t;
  _id_type id;
  using _torque_type =
    int32_t;
  _torque_type torque;

  // setters for named parameter idiom
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__torque(
    const int32_t & _arg)
  {
    this->torque = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_sdk_inf::msg::SetTorque_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_sdk_inf::msg::SetTorque_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_sdk_inf::msg::SetTorque_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_sdk_inf::msg::SetTorque_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_sdk_inf::msg::SetTorque_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_sdk_inf::msg::SetTorque_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_sdk_inf::msg::SetTorque_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_sdk_inf::msg::SetTorque_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_sdk_inf::msg::SetTorque_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_sdk_inf::msg::SetTorque_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_sdk_inf__msg__SetTorque
    std::shared_ptr<dynamixel_sdk_inf::msg::SetTorque_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_sdk_inf__msg__SetTorque
    std::shared_ptr<dynamixel_sdk_inf::msg::SetTorque_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetTorque_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->torque != other.torque) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetTorque_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetTorque_

// alias to use template instance with default allocator
using SetTorque =
  dynamixel_sdk_inf::msg::SetTorque_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamixel_sdk_inf

#endif  // DYNAMIXEL_SDK_INF__MSG__DETAIL__SET_TORQUE__STRUCT_HPP_
