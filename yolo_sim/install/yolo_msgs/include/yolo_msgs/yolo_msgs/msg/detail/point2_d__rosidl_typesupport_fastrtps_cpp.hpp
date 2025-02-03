// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from yolo_msgs:msg/Point2D.idl
// generated code does not contain a copyright notice

#ifndef YOLO_MSGS__MSG__DETAIL__POINT2_D__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define YOLO_MSGS__MSG__DETAIL__POINT2_D__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "yolo_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "yolo_msgs/msg/detail/point2_d__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace yolo_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yolo_msgs
cdr_serialize(
  const yolo_msgs::msg::Point2D & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yolo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  yolo_msgs::msg::Point2D & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yolo_msgs
get_serialized_size(
  const yolo_msgs::msg::Point2D & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yolo_msgs
max_serialized_size_Point2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace yolo_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yolo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, yolo_msgs, msg, Point2D)();

#ifdef __cplusplus
}
#endif

#endif  // YOLO_MSGS__MSG__DETAIL__POINT2_D__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
