// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamixel_sdk_inf:srv/SetId.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_INF__SRV__DETAIL__SET_ID__STRUCT_HPP_
#define DYNAMIXEL_SDK_INF__SRV__DETAIL__SET_ID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynamixel_sdk_inf__srv__SetId_Request __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_sdk_inf__srv__SetId_Request __declspec(deprecated)
#endif

namespace dynamixel_sdk_inf
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetId_Request_
{
  using Type = SetId_Request_<ContainerAllocator>;

  explicit SetId_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetId_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _motor_ids_type =
    rosidl_runtime_cpp::BoundedVector<uint8_t, 5, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _motor_ids_type motor_ids;

  // setters for named parameter idiom
  Type & set__motor_ids(
    const rosidl_runtime_cpp::BoundedVector<uint8_t, 5, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->motor_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_sdk_inf::srv::SetId_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_sdk_inf::srv::SetId_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_sdk_inf::srv::SetId_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_sdk_inf::srv::SetId_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_sdk_inf::srv::SetId_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_sdk_inf::srv::SetId_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_sdk_inf::srv::SetId_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_sdk_inf::srv::SetId_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_sdk_inf::srv::SetId_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_sdk_inf::srv::SetId_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_sdk_inf__srv__SetId_Request
    std::shared_ptr<dynamixel_sdk_inf::srv::SetId_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_sdk_inf__srv__SetId_Request
    std::shared_ptr<dynamixel_sdk_inf::srv::SetId_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetId_Request_ & other) const
  {
    if (this->motor_ids != other.motor_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetId_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetId_Request_

// alias to use template instance with default allocator
using SetId_Request =
  dynamixel_sdk_inf::srv::SetId_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynamixel_sdk_inf


#ifndef _WIN32
# define DEPRECATED__dynamixel_sdk_inf__srv__SetId_Response __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_sdk_inf__srv__SetId_Response __declspec(deprecated)
#endif

namespace dynamixel_sdk_inf
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetId_Response_
{
  using Type = SetId_Response_<ContainerAllocator>;

  explicit SetId_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set = false;
    }
  }

  explicit SetId_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set = false;
    }
  }

  // field types and members
  using _set_type =
    bool;
  _set_type set;

  // setters for named parameter idiom
  Type & set__set(
    const bool & _arg)
  {
    this->set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_sdk_inf::srv::SetId_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_sdk_inf::srv::SetId_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_sdk_inf::srv::SetId_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_sdk_inf::srv::SetId_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_sdk_inf::srv::SetId_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_sdk_inf::srv::SetId_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_sdk_inf::srv::SetId_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_sdk_inf::srv::SetId_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_sdk_inf::srv::SetId_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_sdk_inf::srv::SetId_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_sdk_inf__srv__SetId_Response
    std::shared_ptr<dynamixel_sdk_inf::srv::SetId_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_sdk_inf__srv__SetId_Response
    std::shared_ptr<dynamixel_sdk_inf::srv::SetId_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetId_Response_ & other) const
  {
    if (this->set != other.set) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetId_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetId_Response_

// alias to use template instance with default allocator
using SetId_Response =
  dynamixel_sdk_inf::srv::SetId_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynamixel_sdk_inf

namespace dynamixel_sdk_inf
{

namespace srv
{

struct SetId
{
  using Request = dynamixel_sdk_inf::srv::SetId_Request;
  using Response = dynamixel_sdk_inf::srv::SetId_Response;
};

}  // namespace srv

}  // namespace dynamixel_sdk_inf

#endif  // DYNAMIXEL_SDK_INF__SRV__DETAIL__SET_ID__STRUCT_HPP_
