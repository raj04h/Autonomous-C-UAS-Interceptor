#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to interfaces__msg__Detection

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Detection {

    // This member is not documented.
    #[allow(missing_docs)]
    pub class_name: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Detection::default())
  }
}

impl rosidl_runtime_rs::Message for Detection {
  type RmwMsg = super::msg::rmw::Detection;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        class_name: msg.class_name.as_str().into(),
        confidence: msg.confidence,
        x1: msg.x1,
        y1: msg.y1,
        x2: msg.x2,
        y2: msg.y2,
        center_x: msg.center_x,
        center_y: msg.center_y,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        class_name: msg.class_name.as_str().into(),
      confidence: msg.confidence,
      x1: msg.x1,
      y1: msg.y1,
      x2: msg.x2,
      y2: msg.y2,
      center_x: msg.center_x,
      center_y: msg.center_y,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      class_name: msg.class_name.to_string(),
      confidence: msg.confidence,
      x1: msg.x1,
      y1: msg.y1,
      x2: msg.x2,
      y2: msg.y2,
      center_x: msg.center_x,
      center_y: msg.center_y,
    }
  }
}


// Corresponds to interfaces__msg__Track

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Track {

    // This member is not documented.
    #[allow(missing_docs)]
    pub track_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub class_name: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Track::default())
  }
}

impl rosidl_runtime_rs::Message for Track {
  type RmwMsg = super::msg::rmw::Track;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        track_id: msg.track_id,
        class_name: msg.class_name.as_str().into(),
        confidence: msg.confidence,
        x1: msg.x1,
        y1: msg.y1,
        x2: msg.x2,
        y2: msg.y2,
        center_x: msg.center_x,
        center_y: msg.center_y,
        confirmed: msg.confirmed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      track_id: msg.track_id,
        class_name: msg.class_name.as_str().into(),
      confidence: msg.confidence,
      x1: msg.x1,
      y1: msg.y1,
      x2: msg.x2,
      y2: msg.y2,
      center_x: msg.center_x,
      center_y: msg.center_y,
      confirmed: msg.confirmed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      track_id: msg.track_id,
      class_name: msg.class_name.to_string(),
      confidence: msg.confidence,
      x1: msg.x1,
      y1: msg.y1,
      x2: msg.x2,
      y2: msg.y2,
      center_x: msg.center_x,
      center_y: msg.center_y,
      confirmed: msg.confirmed,
    }
  }
}


// Corresponds to interfaces__msg__TargetState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TargetState::default())
  }
}

impl rosidl_runtime_rs::Message for TargetState {
  type RmwMsg = super::msg::rmw::TargetState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        track_id: msg.track_id,
        x: msg.x,
        y: msg.y,
        vx: msg.vx,
        vy: msg.vy,
        ax: msg.ax,
        ay: msg.ay,
        pred_x: msg.pred_x,
        pred_y: msg.pred_y,
        valid: msg.valid,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      track_id: msg.track_id,
      x: msg.x,
      y: msg.y,
      vx: msg.vx,
      vy: msg.vy,
      ax: msg.ax,
      ay: msg.ay,
      pred_x: msg.pred_x,
      pred_y: msg.pred_y,
      valid: msg.valid,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      track_id: msg.track_id,
      x: msg.x,
      y: msg.y,
      vx: msg.vx,
      vy: msg.vy,
      ax: msg.ax,
      ay: msg.ay,
      pred_x: msg.pred_x,
      pred_y: msg.pred_y,
      valid: msg.valid,
    }
  }
}


// Corresponds to interfaces__msg__GuidanceCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub valid: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_locked: bool,

}



impl Default for GuidanceCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GuidanceCommand::default())
  }
}

impl rosidl_runtime_rs::Message for GuidanceCommand {
  type RmwMsg = super::msg::rmw::GuidanceCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        track_id: msg.track_id,
        error_x: msg.error_x,
        error_y: msg.error_y,
        yaw_command: msg.yaw_command,
        pitch_command: msg.pitch_command,
        valid: msg.valid,
        target_locked: msg.target_locked,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      track_id: msg.track_id,
      error_x: msg.error_x,
      error_y: msg.error_y,
      yaw_command: msg.yaw_command,
      pitch_command: msg.pitch_command,
      valid: msg.valid,
      target_locked: msg.target_locked,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      track_id: msg.track_id,
      error_x: msg.error_x,
      error_y: msg.error_y,
      yaw_command: msg.yaw_command,
      pitch_command: msg.pitch_command,
      valid: msg.valid,
      target_locked: msg.target_locked,
    }
  }
}


// Corresponds to interfaces__msg__ControlCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub track_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub roll_setpoint: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_setpoint: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch_setpoint: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub collective_thrust: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub offboard_enabled: bool,

}



impl Default for ControlCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ControlCommand::default())
  }
}

impl rosidl_runtime_rs::Message for ControlCommand {
  type RmwMsg = super::msg::rmw::ControlCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        track_id: msg.track_id,
        roll_setpoint: msg.roll_setpoint,
        yaw_setpoint: msg.yaw_setpoint,
        pitch_setpoint: msg.pitch_setpoint,
        collective_thrust: msg.collective_thrust,
        offboard_enabled: msg.offboard_enabled,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      track_id: msg.track_id,
      roll_setpoint: msg.roll_setpoint,
      yaw_setpoint: msg.yaw_setpoint,
      pitch_setpoint: msg.pitch_setpoint,
      collective_thrust: msg.collective_thrust,
      offboard_enabled: msg.offboard_enabled,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      track_id: msg.track_id,
      roll_setpoint: msg.roll_setpoint,
      yaw_setpoint: msg.yaw_setpoint,
      pitch_setpoint: msg.pitch_setpoint,
      collective_thrust: msg.collective_thrust,
      offboard_enabled: msg.offboard_enabled,
    }
  }
}


