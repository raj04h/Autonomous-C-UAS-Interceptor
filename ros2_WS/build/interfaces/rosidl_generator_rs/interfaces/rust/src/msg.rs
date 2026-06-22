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
    }
  }
}


