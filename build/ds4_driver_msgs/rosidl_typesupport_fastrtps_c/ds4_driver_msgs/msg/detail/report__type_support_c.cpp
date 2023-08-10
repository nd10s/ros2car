// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ds4_driver_msgs:msg/Report.idl
// generated code does not contain a copyright notice
#include "ds4_driver_msgs/msg/detail/report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ds4_driver_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ds4_driver_msgs/msg/detail/report__struct.h"
#include "ds4_driver_msgs/msg/detail/report__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ds4_driver_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ds4_driver_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ds4_driver_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _Report__ros_msg_type = ds4_driver_msgs__msg__Report;

static bool _Report__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Report__ros_msg_type * ros_message = static_cast<const _Report__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: left_analog_x
  {
    cdr << ros_message->left_analog_x;
  }

  // Field name: left_analog_y
  {
    cdr << ros_message->left_analog_y;
  }

  // Field name: right_analog_x
  {
    cdr << ros_message->right_analog_x;
  }

  // Field name: right_analog_y
  {
    cdr << ros_message->right_analog_y;
  }

  // Field name: l2_analog
  {
    cdr << ros_message->l2_analog;
  }

  // Field name: r2_analog
  {
    cdr << ros_message->r2_analog;
  }

  // Field name: dpad_up
  {
    cdr << (ros_message->dpad_up ? true : false);
  }

  // Field name: dpad_down
  {
    cdr << (ros_message->dpad_down ? true : false);
  }

  // Field name: dpad_left
  {
    cdr << (ros_message->dpad_left ? true : false);
  }

  // Field name: dpad_right
  {
    cdr << (ros_message->dpad_right ? true : false);
  }

  // Field name: button_cross
  {
    cdr << (ros_message->button_cross ? true : false);
  }

  // Field name: button_circle
  {
    cdr << (ros_message->button_circle ? true : false);
  }

  // Field name: button_square
  {
    cdr << (ros_message->button_square ? true : false);
  }

  // Field name: button_triangle
  {
    cdr << (ros_message->button_triangle ? true : false);
  }

  // Field name: button_l1
  {
    cdr << (ros_message->button_l1 ? true : false);
  }

  // Field name: button_l2
  {
    cdr << (ros_message->button_l2 ? true : false);
  }

  // Field name: button_l3
  {
    cdr << (ros_message->button_l3 ? true : false);
  }

  // Field name: button_r1
  {
    cdr << (ros_message->button_r1 ? true : false);
  }

  // Field name: button_r2
  {
    cdr << (ros_message->button_r2 ? true : false);
  }

  // Field name: button_r3
  {
    cdr << (ros_message->button_r3 ? true : false);
  }

  // Field name: button_share
  {
    cdr << (ros_message->button_share ? true : false);
  }

  // Field name: button_options
  {
    cdr << (ros_message->button_options ? true : false);
  }

  // Field name: button_trackpad
  {
    cdr << (ros_message->button_trackpad ? true : false);
  }

  // Field name: button_ps
  {
    cdr << (ros_message->button_ps ? true : false);
  }

  // Field name: lin_acc_x
  {
    cdr << ros_message->lin_acc_x;
  }

  // Field name: lin_acc_y
  {
    cdr << ros_message->lin_acc_y;
  }

  // Field name: lin_acc_z
  {
    cdr << ros_message->lin_acc_z;
  }

  // Field name: ang_vel_x
  {
    cdr << ros_message->ang_vel_x;
  }

  // Field name: ang_vel_y
  {
    cdr << ros_message->ang_vel_y;
  }

  // Field name: ang_vel_z
  {
    cdr << ros_message->ang_vel_z;
  }

  // Field name: trackpad_touch0_id
  {
    cdr << ros_message->trackpad_touch0_id;
  }

  // Field name: trackpad_touch0_active
  {
    cdr << ros_message->trackpad_touch0_active;
  }

  // Field name: trackpad_touch0_x
  {
    cdr << ros_message->trackpad_touch0_x;
  }

  // Field name: trackpad_touch0_y
  {
    cdr << ros_message->trackpad_touch0_y;
  }

  // Field name: trackpad_touch1_id
  {
    cdr << ros_message->trackpad_touch1_id;
  }

  // Field name: trackpad_touch1_active
  {
    cdr << ros_message->trackpad_touch1_active;
  }

  // Field name: trackpad_touch1_x
  {
    cdr << ros_message->trackpad_touch1_x;
  }

  // Field name: trackpad_touch1_y
  {
    cdr << ros_message->trackpad_touch1_y;
  }

  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: battery
  {
    cdr << ros_message->battery;
  }

  // Field name: plug_usb
  {
    cdr << (ros_message->plug_usb ? true : false);
  }

  // Field name: plug_audio
  {
    cdr << (ros_message->plug_audio ? true : false);
  }

  // Field name: plug_mic
  {
    cdr << (ros_message->plug_mic ? true : false);
  }

  return true;
}

static bool _Report__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Report__ros_msg_type * ros_message = static_cast<_Report__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: left_analog_x
  {
    cdr >> ros_message->left_analog_x;
  }

  // Field name: left_analog_y
  {
    cdr >> ros_message->left_analog_y;
  }

  // Field name: right_analog_x
  {
    cdr >> ros_message->right_analog_x;
  }

  // Field name: right_analog_y
  {
    cdr >> ros_message->right_analog_y;
  }

  // Field name: l2_analog
  {
    cdr >> ros_message->l2_analog;
  }

  // Field name: r2_analog
  {
    cdr >> ros_message->r2_analog;
  }

  // Field name: dpad_up
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dpad_up = tmp ? true : false;
  }

  // Field name: dpad_down
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dpad_down = tmp ? true : false;
  }

  // Field name: dpad_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dpad_left = tmp ? true : false;
  }

  // Field name: dpad_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dpad_right = tmp ? true : false;
  }

  // Field name: button_cross
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_cross = tmp ? true : false;
  }

  // Field name: button_circle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_circle = tmp ? true : false;
  }

  // Field name: button_square
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_square = tmp ? true : false;
  }

  // Field name: button_triangle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_triangle = tmp ? true : false;
  }

  // Field name: button_l1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_l1 = tmp ? true : false;
  }

  // Field name: button_l2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_l2 = tmp ? true : false;
  }

  // Field name: button_l3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_l3 = tmp ? true : false;
  }

  // Field name: button_r1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_r1 = tmp ? true : false;
  }

  // Field name: button_r2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_r2 = tmp ? true : false;
  }

  // Field name: button_r3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_r3 = tmp ? true : false;
  }

  // Field name: button_share
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_share = tmp ? true : false;
  }

  // Field name: button_options
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_options = tmp ? true : false;
  }

  // Field name: button_trackpad
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_trackpad = tmp ? true : false;
  }

  // Field name: button_ps
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_ps = tmp ? true : false;
  }

  // Field name: lin_acc_x
  {
    cdr >> ros_message->lin_acc_x;
  }

  // Field name: lin_acc_y
  {
    cdr >> ros_message->lin_acc_y;
  }

  // Field name: lin_acc_z
  {
    cdr >> ros_message->lin_acc_z;
  }

  // Field name: ang_vel_x
  {
    cdr >> ros_message->ang_vel_x;
  }

  // Field name: ang_vel_y
  {
    cdr >> ros_message->ang_vel_y;
  }

  // Field name: ang_vel_z
  {
    cdr >> ros_message->ang_vel_z;
  }

  // Field name: trackpad_touch0_id
  {
    cdr >> ros_message->trackpad_touch0_id;
  }

  // Field name: trackpad_touch0_active
  {
    cdr >> ros_message->trackpad_touch0_active;
  }

  // Field name: trackpad_touch0_x
  {
    cdr >> ros_message->trackpad_touch0_x;
  }

  // Field name: trackpad_touch0_y
  {
    cdr >> ros_message->trackpad_touch0_y;
  }

  // Field name: trackpad_touch1_id
  {
    cdr >> ros_message->trackpad_touch1_id;
  }

  // Field name: trackpad_touch1_active
  {
    cdr >> ros_message->trackpad_touch1_active;
  }

  // Field name: trackpad_touch1_x
  {
    cdr >> ros_message->trackpad_touch1_x;
  }

  // Field name: trackpad_touch1_y
  {
    cdr >> ros_message->trackpad_touch1_y;
  }

  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: battery
  {
    cdr >> ros_message->battery;
  }

  // Field name: plug_usb
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->plug_usb = tmp ? true : false;
  }

  // Field name: plug_audio
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->plug_audio = tmp ? true : false;
  }

  // Field name: plug_mic
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->plug_mic = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ds4_driver_msgs
size_t get_serialized_size_ds4_driver_msgs__msg__Report(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Report__ros_msg_type * ros_message = static_cast<const _Report__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name left_analog_x
  {
    size_t item_size = sizeof(ros_message->left_analog_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_analog_y
  {
    size_t item_size = sizeof(ros_message->left_analog_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_analog_x
  {
    size_t item_size = sizeof(ros_message->right_analog_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_analog_y
  {
    size_t item_size = sizeof(ros_message->right_analog_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name l2_analog
  {
    size_t item_size = sizeof(ros_message->l2_analog);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name r2_analog
  {
    size_t item_size = sizeof(ros_message->r2_analog);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dpad_up
  {
    size_t item_size = sizeof(ros_message->dpad_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dpad_down
  {
    size_t item_size = sizeof(ros_message->dpad_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dpad_left
  {
    size_t item_size = sizeof(ros_message->dpad_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dpad_right
  {
    size_t item_size = sizeof(ros_message->dpad_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_cross
  {
    size_t item_size = sizeof(ros_message->button_cross);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_circle
  {
    size_t item_size = sizeof(ros_message->button_circle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_square
  {
    size_t item_size = sizeof(ros_message->button_square);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_triangle
  {
    size_t item_size = sizeof(ros_message->button_triangle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_l1
  {
    size_t item_size = sizeof(ros_message->button_l1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_l2
  {
    size_t item_size = sizeof(ros_message->button_l2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_l3
  {
    size_t item_size = sizeof(ros_message->button_l3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_r1
  {
    size_t item_size = sizeof(ros_message->button_r1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_r2
  {
    size_t item_size = sizeof(ros_message->button_r2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_r3
  {
    size_t item_size = sizeof(ros_message->button_r3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_share
  {
    size_t item_size = sizeof(ros_message->button_share);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_options
  {
    size_t item_size = sizeof(ros_message->button_options);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_trackpad
  {
    size_t item_size = sizeof(ros_message->button_trackpad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_ps
  {
    size_t item_size = sizeof(ros_message->button_ps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lin_acc_x
  {
    size_t item_size = sizeof(ros_message->lin_acc_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lin_acc_y
  {
    size_t item_size = sizeof(ros_message->lin_acc_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lin_acc_z
  {
    size_t item_size = sizeof(ros_message->lin_acc_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ang_vel_x
  {
    size_t item_size = sizeof(ros_message->ang_vel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ang_vel_y
  {
    size_t item_size = sizeof(ros_message->ang_vel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ang_vel_z
  {
    size_t item_size = sizeof(ros_message->ang_vel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trackpad_touch0_id
  {
    size_t item_size = sizeof(ros_message->trackpad_touch0_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trackpad_touch0_active
  {
    size_t item_size = sizeof(ros_message->trackpad_touch0_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trackpad_touch0_x
  {
    size_t item_size = sizeof(ros_message->trackpad_touch0_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trackpad_touch0_y
  {
    size_t item_size = sizeof(ros_message->trackpad_touch0_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trackpad_touch1_id
  {
    size_t item_size = sizeof(ros_message->trackpad_touch1_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trackpad_touch1_active
  {
    size_t item_size = sizeof(ros_message->trackpad_touch1_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trackpad_touch1_x
  {
    size_t item_size = sizeof(ros_message->trackpad_touch1_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trackpad_touch1_y
  {
    size_t item_size = sizeof(ros_message->trackpad_touch1_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery
  {
    size_t item_size = sizeof(ros_message->battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name plug_usb
  {
    size_t item_size = sizeof(ros_message->plug_usb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name plug_audio
  {
    size_t item_size = sizeof(ros_message->plug_audio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name plug_mic
  {
    size_t item_size = sizeof(ros_message->plug_mic);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Report__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ds4_driver_msgs__msg__Report(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ds4_driver_msgs
size_t max_serialized_size_ds4_driver_msgs__msg__Report(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: left_analog_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left_analog_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: right_analog_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: right_analog_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: l2_analog
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: r2_analog
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dpad_up
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dpad_down
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dpad_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dpad_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_cross
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_circle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_square
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_triangle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_l1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_l2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_l3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_r1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_r2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_r3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_share
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_options
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_trackpad
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_ps
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lin_acc_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: lin_acc_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: lin_acc_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ang_vel_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ang_vel_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ang_vel_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: trackpad_touch0_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: trackpad_touch0_active
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: trackpad_touch0_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: trackpad_touch0_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: trackpad_touch1_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: trackpad_touch1_active
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: trackpad_touch1_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: trackpad_touch1_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: battery
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: plug_usb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: plug_audio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: plug_mic
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Report__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ds4_driver_msgs__msg__Report(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Report = {
  "ds4_driver_msgs::msg",
  "Report",
  _Report__cdr_serialize,
  _Report__cdr_deserialize,
  _Report__get_serialized_size,
  _Report__max_serialized_size
};

static rosidl_message_type_support_t _Report__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Report,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ds4_driver_msgs, msg, Report)() {
  return &_Report__type_support;
}

#if defined(__cplusplus)
}
#endif
