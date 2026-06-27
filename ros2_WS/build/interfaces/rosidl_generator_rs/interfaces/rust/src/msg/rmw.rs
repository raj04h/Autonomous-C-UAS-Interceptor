#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__msg__Detection() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__msg__Detection__init(msg: *mut Detection) -> bool;
    fn interfaces__msg__Detection__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Detection>, size: usize) -> bool;
    fn interfaces__msg__Detection__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Detection>);
    fn interfaces__msg__Detection__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Detection>, out_seq: *mut rosidl_runtime_rs::Sequence<Detection>) -> bool;
}

// Corresponds to interfaces__msg__Detection
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Detection {

    // This member is not documented.
    #[allow(missing_docs)]
    pub class_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confidence: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x1: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y1: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x2: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y2: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub center_x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub center_y: i32,

}



impl Default for Detection {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__msg__Detection__init(&mut msg as *mut _) {
        panic!("Call to interfaces__msg__Detection__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Detection {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__msg__Detection__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__msg__Detection__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__msg__Detection__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Detection {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Detection where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/msg/Detection";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__msg__Detection() }
  }
}


#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__msg__Track() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__msg__Track__init(msg: *mut Track) -> bool;
    fn interfaces__msg__Track__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Track>, size: usize) -> bool;
    fn interfaces__msg__Track__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Track>);
    fn interfaces__msg__Track__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Track>, out_seq: *mut rosidl_runtime_rs::Sequence<Track>) -> bool;
}

// Corresponds to interfaces__msg__Track
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Track {

    // This member is not documented.
    #[allow(missing_docs)]
    pub track_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub class_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confidence: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x1: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y1: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x2: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y2: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub center_x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub center_y: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confirmed: bool,

}



impl Default for Track {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__msg__Track__init(&mut msg as *mut _) {
        panic!("Call to interfaces__msg__Track__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Track {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__msg__Track__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__msg__Track__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__msg__Track__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Track {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Track where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/msg/Track";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__msg__Track() }
  }
}


#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__msg__TargetState() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__msg__TargetState__init(msg: *mut TargetState) -> bool;
    fn interfaces__msg__TargetState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TargetState>, size: usize) -> bool;
    fn interfaces__msg__TargetState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TargetState>);
    fn interfaces__msg__TargetState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TargetState>, out_seq: *mut rosidl_runtime_rs::Sequence<TargetState>) -> bool;
}

// Corresponds to interfaces__msg__TargetState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TargetState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub track_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vx: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vy: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ax: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ay: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pred_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pred_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub valid: bool,

}



impl Default for TargetState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__msg__TargetState__init(&mut msg as *mut _) {
        panic!("Call to interfaces__msg__TargetState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TargetState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__msg__TargetState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__msg__TargetState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__msg__TargetState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TargetState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TargetState where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/msg/TargetState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__msg__TargetState() }
  }
}


#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__msg__GuidanceCommand() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__msg__GuidanceCommand__init(msg: *mut GuidanceCommand) -> bool;
    fn interfaces__msg__GuidanceCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GuidanceCommand>, size: usize) -> bool;
    fn interfaces__msg__GuidanceCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GuidanceCommand>);
    fn interfaces__msg__GuidanceCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GuidanceCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<GuidanceCommand>) -> bool;
}

// Corresponds to interfaces__msg__GuidanceCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GuidanceCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub track_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_command: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch_command: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_locked: bool,

}



impl Default for GuidanceCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__msg__GuidanceCommand__init(&mut msg as *mut _) {
        panic!("Call to interfaces__msg__GuidanceCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GuidanceCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__msg__GuidanceCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__msg__GuidanceCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__msg__GuidanceCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GuidanceCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GuidanceCommand where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/msg/GuidanceCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__msg__GuidanceCommand() }
  }
}


