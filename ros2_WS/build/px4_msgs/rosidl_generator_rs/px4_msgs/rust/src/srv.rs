#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to px4_msgs__srv__VehicleCommand_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleCommand_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::VehicleCommand,

}



impl Default for VehicleCommand_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::VehicleCommand_Request::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleCommand_Request {
  type RmwMsg = super::srv::rmw::VehicleCommand_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::VehicleCommand::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::VehicleCommand::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::VehicleCommand::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to px4_msgs__srv__VehicleCommand_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleCommand_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub reply: super::msg::VehicleCommandAck,

}



impl Default for VehicleCommand_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::VehicleCommand_Response::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleCommand_Response {
  type RmwMsg = super::srv::rmw::VehicleCommand_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        reply: super::msg::VehicleCommandAck::into_rmw_message(std::borrow::Cow::Owned(msg.reply)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        reply: super::msg::VehicleCommandAck::into_rmw_message(std::borrow::Cow::Borrowed(&msg.reply)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      reply: super::msg::VehicleCommandAck::from_rmw_message(msg.reply),
    }
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


