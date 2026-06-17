#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "px4_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__px4_msgs__srv__VehicleCommand_Request() -> *const std::ffi::c_void;
}

#[link(name = "px4_msgs__rosidl_generator_c")]
extern "C" {
    fn px4_msgs__srv__VehicleCommand_Request__init(msg: *mut VehicleCommand_Request) -> bool;
    fn px4_msgs__srv__VehicleCommand_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VehicleCommand_Request>, size: usize) -> bool;
    fn px4_msgs__srv__VehicleCommand_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VehicleCommand_Request>);
    fn px4_msgs__srv__VehicleCommand_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VehicleCommand_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<VehicleCommand_Request>) -> bool;
}

// Corresponds to px4_msgs__srv__VehicleCommand_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleCommand_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::VehicleCommand,

}



impl Default for VehicleCommand_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !px4_msgs__srv__VehicleCommand_Request__init(&mut msg as *mut _) {
        panic!("Call to px4_msgs__srv__VehicleCommand_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VehicleCommand_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { px4_msgs__srv__VehicleCommand_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { px4_msgs__srv__VehicleCommand_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { px4_msgs__srv__VehicleCommand_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VehicleCommand_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VehicleCommand_Request where Self: Sized {
  const TYPE_NAME: &'static str = "px4_msgs/srv/VehicleCommand_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__px4_msgs__srv__VehicleCommand_Request() }
  }
}


#[link(name = "px4_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__px4_msgs__srv__VehicleCommand_Response() -> *const std::ffi::c_void;
}

#[link(name = "px4_msgs__rosidl_generator_c")]
extern "C" {
    fn px4_msgs__srv__VehicleCommand_Response__init(msg: *mut VehicleCommand_Response) -> bool;
    fn px4_msgs__srv__VehicleCommand_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VehicleCommand_Response>, size: usize) -> bool;
    fn px4_msgs__srv__VehicleCommand_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VehicleCommand_Response>);
    fn px4_msgs__srv__VehicleCommand_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VehicleCommand_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<VehicleCommand_Response>) -> bool;
}

// Corresponds to px4_msgs__srv__VehicleCommand_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleCommand_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub reply: super::super::msg::rmw::VehicleCommandAck,

}



impl Default for VehicleCommand_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !px4_msgs__srv__VehicleCommand_Response__init(&mut msg as *mut _) {
        panic!("Call to px4_msgs__srv__VehicleCommand_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VehicleCommand_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { px4_msgs__srv__VehicleCommand_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { px4_msgs__srv__VehicleCommand_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { px4_msgs__srv__VehicleCommand_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VehicleCommand_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VehicleCommand_Response where Self: Sized {
  const TYPE_NAME: &'static str = "px4_msgs/srv/VehicleCommand_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__px4_msgs__srv__VehicleCommand_Response() }
  }
}






#[link(name = "px4_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__px4_msgs__srv__VehicleCommand() -> *const std::ffi::c_void;
}

// Corresponds to px4_msgs__srv__VehicleCommand
#[allow(missing_docs, non_camel_case_types)]
pub struct VehicleCommand;

impl rosidl_runtime_rs::Service for VehicleCommand {
    type Request = VehicleCommand_Request;
    type Response = VehicleCommand_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__px4_msgs__srv__VehicleCommand() }
    }
}


