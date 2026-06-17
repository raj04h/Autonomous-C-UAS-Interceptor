#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to px4_msgs__msg__ActionRequest
/// Action request for the vehicle's main state
///
/// Message represents actions requested by a PX4 internal component towards the main state machine such as a request to arm or switch mode.
/// It allows mapping triggers from various external interfaces like RC channels or MAVLink to cause an action.
/// Request are published by `manual_control` and subscribed by the `commander` and `vtol_att_control` modules.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActionRequest {
    /// Time since system start
    pub timestamp: u64,

    /// Requested action
    pub action: u8,

    /// Request trigger type, such as a switch, button or gesture
    pub source: u8,

    /// Requested mode. Only applies when `action` is `ACTION_SWITCH_MODE`. Values for this field are defined by the `vehicle_status_s::NAVIGATION_STATE_*` enumeration.
    pub mode: u8,

}

impl ActionRequest {
    /// Disarm vehicle
    pub const ACTION_DISARM: u8 = 0;

    /// Arm vehicle
    pub const ACTION_ARM: u8 = 1;

    /// Toggle arming
    pub const ACTION_TOGGLE_ARMING: u8 = 2;

    /// Revert a kill action
    pub const ACTION_UNKILL: u8 = 3;

    /// Kill vehicle (instantly stop the motors)
    pub const ACTION_KILL: u8 = 4;

    /// Switch mode. The target mode is set in the `mode` field.
    pub const ACTION_SWITCH_MODE: u8 = 5;

    /// Transition to hover flight
    pub const ACTION_VTOL_TRANSITION_TO_MULTICOPTER: u8 = 6;

    /// Transition to fast forward flight
    pub const ACTION_VTOL_TRANSITION_TO_FIXEDWING: u8 = 7;

    /// Irreversibly output failsafe values on all outputs, trigger parachute
    pub const ACTION_TERMINATION: u8 = 8;

    /// Triggered by holding the sticks in a certain position
    pub const SOURCE_STICK_GESTURE: u8 = 0;

    /// Triggered by an RC switch moving into a certain position
    pub const SOURCE_RC_SWITCH: u8 = 1;

    /// Triggered by a momentary button on the RC being pressed or held
    pub const SOURCE_RC_BUTTON: u8 = 2;

    /// Mode change through the RC mode selection mechanism
    pub const SOURCE_RC_MODE_SLOT: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 4;

}


impl Default for ActionRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ActionRequest::default())
  }
}

impl rosidl_runtime_rs::Message for ActionRequest {
  type RmwMsg = super::msg::rmw::ActionRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        action: msg.action,
        source: msg.source,
        mode: msg.mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      action: msg.action,
      source: msg.source,
      mode: msg.mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      action: msg.action,
      source: msg.source,
      mode: msg.mode,
    }
  }
}


// Corresponds to px4_msgs__msg__ActuatorArmed

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorArmed {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Set to true if system is armed
    pub armed: bool,

    /// Set to true if the actuator safety is disabled but motors are not armed
    pub prearmed: bool,

    /// Set to true if system is ready to be armed
    pub ready_to_arm: bool,

    /// Set to true if actuators are forced to being disabled (due to emergency or HIL)
    pub lockdown: bool,

    /// Set to true if manual throttle kill switch is engaged
    pub kill: bool,

    /// Send out failsafe (by default same as disarmed) output
    pub termination: bool,

    /// IO/FMU should ignore messages from the actuator controls topics
    pub in_esc_calibration_mode: bool,

}



impl Default for ActuatorArmed {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ActuatorArmed::default())
  }
}

impl rosidl_runtime_rs::Message for ActuatorArmed {
  type RmwMsg = super::msg::rmw::ActuatorArmed;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        armed: msg.armed,
        prearmed: msg.prearmed,
        ready_to_arm: msg.ready_to_arm,
        lockdown: msg.lockdown,
        kill: msg.kill,
        termination: msg.termination,
        in_esc_calibration_mode: msg.in_esc_calibration_mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      armed: msg.armed,
      prearmed: msg.prearmed,
      ready_to_arm: msg.ready_to_arm,
      lockdown: msg.lockdown,
      kill: msg.kill,
      termination: msg.termination,
      in_esc_calibration_mode: msg.in_esc_calibration_mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      armed: msg.armed,
      prearmed: msg.prearmed,
      ready_to_arm: msg.ready_to_arm,
      lockdown: msg.lockdown,
      kill: msg.kill,
      termination: msg.termination,
      in_esc_calibration_mode: msg.in_esc_calibration_mode,
    }
  }
}


// Corresponds to px4_msgs__msg__ActuatorControlsStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorControlsStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_power: [f32; 3],

}



impl Default for ActuatorControlsStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ActuatorControlsStatus::default())
  }
}

impl rosidl_runtime_rs::Message for ActuatorControlsStatus {
  type RmwMsg = super::msg::rmw::ActuatorControlsStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        control_power: msg.control_power,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        control_power: msg.control_power,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      control_power: msg.control_power,
    }
  }
}


// Corresponds to px4_msgs__msg__ActuatorMotors
/// Motor control message
///
/// Normalised thrust setpoint for up to 12 motors.
/// Published by the vehicle's allocation and consumed by the ESC protocol drivers e.g. PWM, DSHOT, UAVCAN.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorMotors {
    /// Time since system start
    pub timestamp: u64,

    /// Sampling timestamp of the data this control response is based on
    pub timestamp_sample: u64,

    /// Bitset indicating which motors are configured to be reversible
    pub reversible_flags: u16,

    /// [@range -1, 1] Normalized thrust. Where 1 means maximum positive thrust, -1 maximum negative (if not supported by the output, <0 maps to NaN). NaN maps to disarmed (stop the motors)
    pub control: [f32; 12],

}

impl ActuatorMotors {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 0;

    /// output_functions.yaml Motor.start
    pub const ACTUATOR_FUNCTION_MOTOR1: u8 = 101;

    /// output_functions.yaml Motor.count
    pub const NUM_CONTROLS: u8 = 12;

}


impl Default for ActuatorMotors {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ActuatorMotors::default())
  }
}

impl rosidl_runtime_rs::Message for ActuatorMotors {
  type RmwMsg = super::msg::rmw::ActuatorMotors;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        reversible_flags: msg.reversible_flags,
        control: msg.control,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      reversible_flags: msg.reversible_flags,
        control: msg.control,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      reversible_flags: msg.reversible_flags,
      control: msg.control,
    }
  }
}


// Corresponds to px4_msgs__msg__ActuatorOutputs

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorOutputs {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// valid outputs
    pub noutputs: u32,

    /// output data, in natural output units
    pub output: [f32; 16],

}

impl ActuatorOutputs {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NUM_ACTUATOR_OUTPUTS: u8 = 16;

    /// for sanity checking
    pub const NUM_ACTUATOR_OUTPUT_GROUPS: u8 = 4;

}


impl Default for ActuatorOutputs {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ActuatorOutputs::default())
  }
}

impl rosidl_runtime_rs::Message for ActuatorOutputs {
  type RmwMsg = super::msg::rmw::ActuatorOutputs;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        noutputs: msg.noutputs,
        output: msg.output,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      noutputs: msg.noutputs,
        output: msg.output,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      noutputs: msg.noutputs,
      output: msg.output,
    }
  }
}


// Corresponds to px4_msgs__msg__ActuatorServos
/// Servo control message
///
/// Normalised output setpoint for up to 15 servos.
/// Published by the vehicle's allocation and consumed by the actuator output drivers.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorServos {
    /// Time since system start
    pub timestamp: u64,

    /// Sampling timestamp of the data this control response is based on
    pub timestamp_sample: u64,

    /// [@range -1, 1] Normalized output. 1 means maximum positive position. -1 maximum negative position (if not supported by the output, <0 maps to NaN). NaN maps to disarmed.
    pub control: [f32; 15],

}

impl ActuatorServos {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NUM_CONTROLS: u8 = 15;

}


impl Default for ActuatorServos {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ActuatorServos::default())
  }
}

impl rosidl_runtime_rs::Message for ActuatorServos {
  type RmwMsg = super::msg::rmw::ActuatorServos;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        control: msg.control,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
        control: msg.control,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      control: msg.control,
    }
  }
}


// Corresponds to px4_msgs__msg__ActuatorServosTrim
/// Servo trims, added as offset to servo outputs

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorServosTrim {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// range: [-1, 1]
    pub trim: [f32; 15],

}

impl ActuatorServosTrim {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NUM_CONTROLS: u8 = 15;

}


impl Default for ActuatorServosTrim {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ActuatorServosTrim::default())
  }
}

impl rosidl_runtime_rs::Message for ActuatorServosTrim {
  type RmwMsg = super::msg::rmw::ActuatorServosTrim;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        trim: msg.trim,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        trim: msg.trim,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      trim: msg.trim,
    }
  }
}


// Corresponds to px4_msgs__msg__ActuatorTest

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorTest {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// one of ACTION_*
    pub action: u8,

    /// actuator output function
    pub function: u16,

    /// range: [-1, 1], where 1 means maximum positive output,
    /// 0 to center servos or minimum motor thrust,
    /// -1 maximum negative (if not supported by the motors, <0 maps to NaN),
    /// and NaN maps to disarmed (stop the motors)
    pub value: f32,

    /// timeout in ms after which to exit test mode (if 0, do not time out)
    pub timeout_ms: u32,

}

impl ActuatorTest {
    /// Topic to test individual actuator output functions
    /// exit test mode for the given function
    pub const ACTION_RELEASE_CONTROL: u8 = 0;

    /// enable actuator test mode
    pub const ACTION_DO_CONTROL: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_MOTOR1: u8 = 101;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAX_NUM_MOTORS: u8 = 12;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_SERVO1: u8 = 201;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAX_NUM_SERVOS: u8 = 15;

    /// >= MAX_NUM_MOTORS to support code in esc_calibration
    pub const ORB_QUEUE_LENGTH: u8 = 16;

}


impl Default for ActuatorTest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ActuatorTest::default())
  }
}

impl rosidl_runtime_rs::Message for ActuatorTest {
  type RmwMsg = super::msg::rmw::ActuatorTest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        action: msg.action,
        function: msg.function,
        value: msg.value,
        timeout_ms: msg.timeout_ms,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      action: msg.action,
      function: msg.function,
      value: msg.value,
      timeout_ms: msg.timeout_ms,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      action: msg.action,
      function: msg.function,
      value: msg.value,
      timeout_ms: msg.timeout_ms,
    }
  }
}


// Corresponds to px4_msgs__msg__AdcReport
/// ADC raw data.
///
/// Communicates raw data from an analog-to-digital converter (ADC) to other modules, such as battery status.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AdcReport {
    /// Time since system start
    pub timestamp: u64,

    /// unique device ID for the sensor that does not change between power cycles
    pub device_id: u32,

    /// ADC channel IDs, negative for non-existent, TODO: should be kept same as array index
    pub channel_id: [i16; 16],

    /// ADC channel raw value, accept negative value, valid if channel ID is positive
    pub raw_data: [i32; 16],

    /// ADC channel resolution
    pub resolution: u32,

    /// ADC channel voltage reference, use to calculate LSB voltage(lsb=scale/resolution)
    pub v_ref: f32,

}



impl Default for AdcReport {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AdcReport::default())
  }
}

impl rosidl_runtime_rs::Message for AdcReport {
  type RmwMsg = super::msg::rmw::AdcReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        device_id: msg.device_id,
        channel_id: msg.channel_id,
        raw_data: msg.raw_data,
        resolution: msg.resolution,
        v_ref: msg.v_ref,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
        channel_id: msg.channel_id,
        raw_data: msg.raw_data,
      resolution: msg.resolution,
      v_ref: msg.v_ref,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
      channel_id: msg.channel_id,
      raw_data: msg.raw_data,
      resolution: msg.resolution,
      v_ref: msg.v_ref,
    }
  }
}


// Corresponds to px4_msgs__msg__Airspeed
/// Airspeed data from sensors
///
/// This is published by airspeed sensor drivers, CAN airspeed sensors, simulators.
/// It is subscribed by the airspeed selector module, which validates the data from multiple sensors and passes on a single estimation to the EKF, controllers and telemetry providers.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Airspeed {
    /// Time since system start
    pub timestamp: u64,

    /// Timestamp of the raw data
    pub timestamp_sample: u64,

    /// Indicated airspeed
    pub indicated_airspeed_m_s: f32,

    /// True airspeed
    pub true_airspeed_m_s: f32,

    /// [@range 0,1] Confidence value for this sensor
    pub confidence: f32,

}



impl Default for Airspeed {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Airspeed::default())
  }
}

impl rosidl_runtime_rs::Message for Airspeed {
  type RmwMsg = super::msg::rmw::Airspeed;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        indicated_airspeed_m_s: msg.indicated_airspeed_m_s,
        true_airspeed_m_s: msg.true_airspeed_m_s,
        confidence: msg.confidence,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      indicated_airspeed_m_s: msg.indicated_airspeed_m_s,
      true_airspeed_m_s: msg.true_airspeed_m_s,
      confidence: msg.confidence,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      indicated_airspeed_m_s: msg.indicated_airspeed_m_s,
      true_airspeed_m_s: msg.true_airspeed_m_s,
      confidence: msg.confidence,
    }
  }
}


// Corresponds to px4_msgs__msg__AirspeedValidated
/// Validated airspeed
///
/// Provides information about airspeed (indicated, true, calibrated) and the source of the data.
/// Used by controllers, estimators and for airspeed reporting to operator.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AirspeedValidated {
    /// Time since system start
    pub timestamp: u64,

    /// [m/s] [@invalid NaN] Indicated airspeed (IAS)
    pub indicated_airspeed_m_s: f32,

    /// [m/s] [@invalid NaN] Calibrated airspeed (CAS)
    pub calibrated_airspeed_m_s: f32,

    /// [m/s] [@invalid NaN] True airspeed (TAS)
    pub true_airspeed_m_s: f32,

    /// Source of currently published airspeed values
    pub airspeed_source: i8,

    /// [m/s] [@invalid NaN] CAS calculated from groundspeed - windspeed, where windspeed is estimated based on a zero-sideslip assumption
    pub calibrated_ground_minus_wind_m_s: f32,

    /// [m/s] [@invalid NaN] Synthetic airspeed
    pub calibraded_airspeed_synth_m_s: f32,

    /// Filtered indicated airspeed derivative
    pub airspeed_derivative_filtered: f32,

    /// Filtered fixed-wing throttle
    pub throttle_filtered: f32,

    /// Filtered pitch
    pub pitch_filtered: f32,

}

impl AirspeedValidated {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 1;

    /// Disabled
    pub const SOURCE_DISABLED: i8 = -1;

    /// Ground speed minus wind
    pub const SOURCE_GROUND_MINUS_WIND: i8 = 0;

    /// Sensor 1
    pub const SOURCE_SENSOR_1: i8 = 1;

    /// Sensor 2
    pub const SOURCE_SENSOR_2: i8 = 2;

    /// Sensor 3
    pub const SOURCE_SENSOR_3: i8 = 3;

    /// Synthetic airspeed
    pub const SOURCE_SYNTHETIC: i8 = 4;

}


impl Default for AirspeedValidated {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AirspeedValidated::default())
  }
}

impl rosidl_runtime_rs::Message for AirspeedValidated {
  type RmwMsg = super::msg::rmw::AirspeedValidated;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        indicated_airspeed_m_s: msg.indicated_airspeed_m_s,
        calibrated_airspeed_m_s: msg.calibrated_airspeed_m_s,
        true_airspeed_m_s: msg.true_airspeed_m_s,
        airspeed_source: msg.airspeed_source,
        calibrated_ground_minus_wind_m_s: msg.calibrated_ground_minus_wind_m_s,
        calibraded_airspeed_synth_m_s: msg.calibraded_airspeed_synth_m_s,
        airspeed_derivative_filtered: msg.airspeed_derivative_filtered,
        throttle_filtered: msg.throttle_filtered,
        pitch_filtered: msg.pitch_filtered,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      indicated_airspeed_m_s: msg.indicated_airspeed_m_s,
      calibrated_airspeed_m_s: msg.calibrated_airspeed_m_s,
      true_airspeed_m_s: msg.true_airspeed_m_s,
      airspeed_source: msg.airspeed_source,
      calibrated_ground_minus_wind_m_s: msg.calibrated_ground_minus_wind_m_s,
      calibraded_airspeed_synth_m_s: msg.calibraded_airspeed_synth_m_s,
      airspeed_derivative_filtered: msg.airspeed_derivative_filtered,
      throttle_filtered: msg.throttle_filtered,
      pitch_filtered: msg.pitch_filtered,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      indicated_airspeed_m_s: msg.indicated_airspeed_m_s,
      calibrated_airspeed_m_s: msg.calibrated_airspeed_m_s,
      true_airspeed_m_s: msg.true_airspeed_m_s,
      airspeed_source: msg.airspeed_source,
      calibrated_ground_minus_wind_m_s: msg.calibrated_ground_minus_wind_m_s,
      calibraded_airspeed_synth_m_s: msg.calibraded_airspeed_synth_m_s,
      airspeed_derivative_filtered: msg.airspeed_derivative_filtered,
      throttle_filtered: msg.throttle_filtered,
      pitch_filtered: msg.pitch_filtered,
    }
  }
}


// Corresponds to px4_msgs__msg__AirspeedWind
/// Wind estimate (from airspeed_selector)
///
/// Contains wind estimation and airspeed innovation information estimated by the WindEstimator
/// in the airspeed selector module.
///
/// This message is published by the airspeed selector for debugging purposes, and is not
/// subscribed to by any other modules.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AirspeedWind {
    /// Time since system start
    pub timestamp: u64,

    /// Timestamp of the raw data
    pub timestamp_sample: u64,

    /// Wind component in north / X direction
    pub windspeed_north: f32,

    /// Wind component in east / Y direction
    pub windspeed_east: f32,

    /// [(m/s)^2] [@invalid 0 if not estimated] Wind estimate error variance in north / X direction
    pub variance_north: f32,

    /// [(m/s)^2] [@invalid 0 if not estimated] Wind estimate error variance in east / Y direction
    pub variance_east: f32,

    /// True airspeed innovation
    pub tas_innov: f32,

    /// True airspeed innovation variance
    pub tas_innov_var: f32,

    /// Estimated true airspeed scale factor (not validated)
    pub tas_scale_raw: f32,

    /// True airspeed scale factor variance
    pub tas_scale_raw_var: f32,

    /// Estimated true airspeed scale factor after validation
    pub tas_scale_validated: f32,

    /// Sideslip measurement innovation
    pub beta_innov: f32,

    /// Sideslip measurement innovation variance
    pub beta_innov_var: f32,

    /// source of wind estimate
    pub source: u8,

}

impl AirspeedWind {
    /// Wind estimate only based on synthetic sideslip fusion
    pub const SOURCE_AS_BETA_ONLY: u8 = 0;

    /// Combined synthetic sideslip and airspeed fusion (data from first airspeed sensor)
    pub const SOURCE_AS_SENSOR_1: u8 = 1;

    /// Combined synthetic sideslip and airspeed fusion (data from second airspeed sensor)
    pub const SOURCE_AS_SENSOR_2: u8 = 2;

    /// Combined synthetic sideslip and airspeed fusion (data from third airspeed sensor)
    pub const SOURCE_AS_SENSOR_3: u8 = 3;

}


impl Default for AirspeedWind {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AirspeedWind::default())
  }
}

impl rosidl_runtime_rs::Message for AirspeedWind {
  type RmwMsg = super::msg::rmw::AirspeedWind;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        windspeed_north: msg.windspeed_north,
        windspeed_east: msg.windspeed_east,
        variance_north: msg.variance_north,
        variance_east: msg.variance_east,
        tas_innov: msg.tas_innov,
        tas_innov_var: msg.tas_innov_var,
        tas_scale_raw: msg.tas_scale_raw,
        tas_scale_raw_var: msg.tas_scale_raw_var,
        tas_scale_validated: msg.tas_scale_validated,
        beta_innov: msg.beta_innov,
        beta_innov_var: msg.beta_innov_var,
        source: msg.source,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      windspeed_north: msg.windspeed_north,
      windspeed_east: msg.windspeed_east,
      variance_north: msg.variance_north,
      variance_east: msg.variance_east,
      tas_innov: msg.tas_innov,
      tas_innov_var: msg.tas_innov_var,
      tas_scale_raw: msg.tas_scale_raw,
      tas_scale_raw_var: msg.tas_scale_raw_var,
      tas_scale_validated: msg.tas_scale_validated,
      beta_innov: msg.beta_innov,
      beta_innov_var: msg.beta_innov_var,
      source: msg.source,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      windspeed_north: msg.windspeed_north,
      windspeed_east: msg.windspeed_east,
      variance_north: msg.variance_north,
      variance_east: msg.variance_east,
      tas_innov: msg.tas_innov,
      tas_innov_var: msg.tas_innov_var,
      tas_scale_raw: msg.tas_scale_raw,
      tas_scale_raw_var: msg.tas_scale_raw_var,
      tas_scale_validated: msg.tas_scale_validated,
      beta_innov: msg.beta_innov,
      beta_innov_var: msg.beta_innov_var,
      source: msg.source,
    }
  }
}


// Corresponds to px4_msgs__msg__ArmingCheckReply
/// Arming check reply
///
/// This is a response to an ArmingCheckRequest message sent by the FMU to an external component, such as a ROS 2 navigation mode.
/// The response contains the current set of external mode requirements, and a queue of events indicating recent failures to set the mode (which the FMU may then forward to a ground station).
/// The request is sent regularly to all registered ROS modes, even while armed, so that the FMU always knows and can forward the current state.
///
/// Note that the external component is identified by its registration_id, which is allocated to the component during registration (arming_check_id in RegisterExtComponentReply).
/// The message is not used by internal/FMU components, as their mode requirements are known at compile time.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArmingCheckReply {
    /// Time since system start.
    pub timestamp: u64,

    /// Id of ArmingCheckRequest for which this is a response
    pub request_id: u8,

    /// Id of external component emitting this response
    pub registration_id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub health_component_index: u8,

    /// Unused. Intended for use with health events interface (health_component_t in events.json)
    pub health_component_is_present: bool,

    /// Unused. Intended for use with health events interface (health_component_t in events.json)
    pub health_component_warning: bool,

    /// Unused. Intended for use with health events interface (health_component_t in events.json)
    pub health_component_error: bool,

    /// True if the component can arm. For navigation mode components, true if the component can arm in the mode or switch to the mode when already armed
    pub can_arm_and_run: bool,

    /// Number of queued failure messages (Event) in the events field
    pub num_events: u8,

    /// Arming failure reasons (Queue of events to report to GCS)
    pub events: [super::msg::Event; 5],

    /// Mode requirements
    /// Requires angular velocity estimate (e.g. from gyroscope)
    pub mode_req_angular_velocity: bool,

    /// Requires an attitude estimate
    pub mode_req_attitude: bool,

    /// Requires a local altitude estimate
    pub mode_req_local_alt: bool,

    /// Requires a local position estimate
    pub mode_req_local_position: bool,

    /// Requires a more relaxed global position estimate
    pub mode_req_local_position_relaxed: bool,

    /// Requires a global position estimate
    pub mode_req_global_position: bool,

    /// Requires a relaxed global position estimate
    pub mode_req_global_position_relaxed: bool,

    /// Requires an uploaded mission
    pub mode_req_mission: bool,

    /// Requires a home position (such as RTL/Return mode)
    pub mode_req_home_position: bool,

    /// Prevent arming (such as in Land mode)
    pub mode_req_prevent_arming: bool,

    /// Requires a manual controller
    pub mode_req_manual_control: bool,

}

impl ArmingCheckReply {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 1;

    /// Index of health component for which this response applies
    pub const HEALTH_COMPONENT_INDEX_NONE: u8 = 0;

    /// Must be >= ExternalChecks::MAX_NUM_REGISTRATIONS so replies from all registered
    /// modes fit in the queue within a single request cycle (otherwise replies from the
    /// 5th+ mode overwrite earlier ones, causing spurious "unresponsive mode" failures).
    pub const ORB_QUEUE_LENGTH: u8 = 8;

}


impl Default for ArmingCheckReply {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ArmingCheckReply::default())
  }
}

impl rosidl_runtime_rs::Message for ArmingCheckReply {
  type RmwMsg = super::msg::rmw::ArmingCheckReply;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        request_id: msg.request_id,
        registration_id: msg.registration_id,
        health_component_index: msg.health_component_index,
        health_component_is_present: msg.health_component_is_present,
        health_component_warning: msg.health_component_warning,
        health_component_error: msg.health_component_error,
        can_arm_and_run: msg.can_arm_and_run,
        num_events: msg.num_events,
        events: msg.events
          .map(|elem| super::msg::Event::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
        mode_req_angular_velocity: msg.mode_req_angular_velocity,
        mode_req_attitude: msg.mode_req_attitude,
        mode_req_local_alt: msg.mode_req_local_alt,
        mode_req_local_position: msg.mode_req_local_position,
        mode_req_local_position_relaxed: msg.mode_req_local_position_relaxed,
        mode_req_global_position: msg.mode_req_global_position,
        mode_req_global_position_relaxed: msg.mode_req_global_position_relaxed,
        mode_req_mission: msg.mode_req_mission,
        mode_req_home_position: msg.mode_req_home_position,
        mode_req_prevent_arming: msg.mode_req_prevent_arming,
        mode_req_manual_control: msg.mode_req_manual_control,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      request_id: msg.request_id,
      registration_id: msg.registration_id,
      health_component_index: msg.health_component_index,
      health_component_is_present: msg.health_component_is_present,
      health_component_warning: msg.health_component_warning,
      health_component_error: msg.health_component_error,
      can_arm_and_run: msg.can_arm_and_run,
      num_events: msg.num_events,
        events: msg.events
          .iter()
          .map(|elem| super::msg::Event::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
      mode_req_angular_velocity: msg.mode_req_angular_velocity,
      mode_req_attitude: msg.mode_req_attitude,
      mode_req_local_alt: msg.mode_req_local_alt,
      mode_req_local_position: msg.mode_req_local_position,
      mode_req_local_position_relaxed: msg.mode_req_local_position_relaxed,
      mode_req_global_position: msg.mode_req_global_position,
      mode_req_global_position_relaxed: msg.mode_req_global_position_relaxed,
      mode_req_mission: msg.mode_req_mission,
      mode_req_home_position: msg.mode_req_home_position,
      mode_req_prevent_arming: msg.mode_req_prevent_arming,
      mode_req_manual_control: msg.mode_req_manual_control,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      request_id: msg.request_id,
      registration_id: msg.registration_id,
      health_component_index: msg.health_component_index,
      health_component_is_present: msg.health_component_is_present,
      health_component_warning: msg.health_component_warning,
      health_component_error: msg.health_component_error,
      can_arm_and_run: msg.can_arm_and_run,
      num_events: msg.num_events,
      events: msg.events
        .map(super::msg::Event::from_rmw_message),
      mode_req_angular_velocity: msg.mode_req_angular_velocity,
      mode_req_attitude: msg.mode_req_attitude,
      mode_req_local_alt: msg.mode_req_local_alt,
      mode_req_local_position: msg.mode_req_local_position,
      mode_req_local_position_relaxed: msg.mode_req_local_position_relaxed,
      mode_req_global_position: msg.mode_req_global_position,
      mode_req_global_position_relaxed: msg.mode_req_global_position_relaxed,
      mode_req_mission: msg.mode_req_mission,
      mode_req_home_position: msg.mode_req_home_position,
      mode_req_prevent_arming: msg.mode_req_prevent_arming,
      mode_req_manual_control: msg.mode_req_manual_control,
    }
  }
}


// Corresponds to px4_msgs__msg__ArmingCheckRequest
/// Arming check request
///
/// Broadcast message to request arming checks be reported by all registered components, such as external ROS 2 navigation modes.
/// All registered components should respond with an ArmingCheckReply message that indicates their current mode requirements, and any arming failure information.
/// The request is sent regularly, even while armed, so that the FMU always knows the current arming state for external modes, and can forward it to ground stations.
///
/// The reply will include the published request_id, allowing correlation of all arming check information for a particular request.
/// The reply will also include the registration_id for each external component, provided to it during the registration process (RegisterExtComponentReply).

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArmingCheckRequest {
    /// Time since system start
    pub timestamp: u64,

    /// Id of this request. Allows correlation with associated ArmingCheckReply messages.
    pub request_id: u8,

    /// Bitmask of valid registration ID's (the bit is also cleared if flagged as unresponsive)
    pub valid_registrations_mask: u32,

}

impl ArmingCheckRequest {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 1;

}


impl Default for ArmingCheckRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ArmingCheckRequest::default())
  }
}

impl rosidl_runtime_rs::Message for ArmingCheckRequest {
  type RmwMsg = super::msg::rmw::ArmingCheckRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        request_id: msg.request_id,
        valid_registrations_mask: msg.valid_registrations_mask,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      request_id: msg.request_id,
      valid_registrations_mask: msg.valid_registrations_mask,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      request_id: msg.request_id,
      valid_registrations_mask: msg.valid_registrations_mask,
    }
  }
}


// Corresponds to px4_msgs__msg__AutotuneAttitudeControlStatus
/// Autotune attitude control status
///
/// This message is published by the fw_autotune_attitude_control and mc_autotune_attitude_control modules when the user engages autotune,
/// and is subscribed to by the respective attitude controllers to command rate setpoints.
///
/// The rate_sp field is consumed by the controllers, while the remaining fields (model coefficients, gains, filters, and autotune state) are used for logging and debugging.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AutotuneAttitudeControlStatus {
    /// Time since system start
    pub timestamp: u64,

    /// Coefficients of the identified discrete-time model
    pub coeff: [f32; 5],

    /// Coefficients' variance of the identified discrete-time model
    pub coeff_var: [f32; 5],

    /// Fitness of the parameter estimate
    pub fitness: f32,

    /// Innovation (residual error between model and measured output)
    pub innov: f32,

    /// Model sample time used for identification
    pub dt_model: f32,

    /// Proportional rate-loop gain (ideal form)
    pub kc: f32,

    /// Integral rate-loop gain (ideal form)
    pub ki: f32,

    /// Derivative rate-loop gain (ideal form)
    pub kd: f32,

    /// Feedforward rate-loop gain
    pub kff: f32,

    /// Proportional attitude gain
    pub att_p: f32,

    /// Rate setpoint commanded to the attitude controller.
    pub rate_sp: [f32; 3],

    /// Filtered input signal (normalized torque setpoint) used in system identification.
    pub u_filt: f32,

    /// Filtered output signal (angular velocity) used in system identification.
    pub y_filt: f32,

    /// Current state of the autotune procedure.
    pub state: u8,

}

impl AutotuneAttitudeControlStatus {
    /// Idle (not running)
    pub const STATE_IDLE: u8 = 0;

    /// Initialize filters and setup
    pub const STATE_INIT: u8 = 1;

    /// FW only: determine required excitation amplitude (roll)
    pub const STATE_ROLL_AMPLITUDE_DETECTION: u8 = 2;

    /// Roll-axis excitation and model identification
    pub const STATE_ROLL: u8 = 3;

    /// Pause to return to level flight
    pub const STATE_ROLL_PAUSE: u8 = 4;

    /// FW only: determine required excitation amplitude (pitch)
    pub const STATE_PITCH_AMPLITUDE_DETECTION: u8 = 5;

    /// Pitch-axis excitation and model identification
    pub const STATE_PITCH: u8 = 6;

    /// Pause to return to level flight
    pub const STATE_PITCH_PAUSE: u8 = 7;

    /// FW only: determine required excitation amplitude (yaw)
    pub const STATE_YAW_AMPLITUDE_DETECTION: u8 = 8;

    /// Yaw-axis excitation and model identification
    pub const STATE_YAW: u8 = 9;

    /// Pause to return to level flight
    pub const STATE_YAW_PAUSE: u8 = 10;

    /// Verify model and candidate gains
    pub const STATE_VERIFICATION: u8 = 11;

    /// Apply gains
    pub const STATE_APPLY: u8 = 12;

    /// Test gains in closed-loop
    pub const STATE_TEST: u8 = 13;

    /// Tuning completed successfully
    pub const STATE_COMPLETE: u8 = 14;

    /// Tuning failed (model invalid or controller unstable)
    pub const STATE_FAIL: u8 = 15;

    /// Waiting for disarm before finalizing
    pub const STATE_WAIT_FOR_DISARM: u8 = 16;

}


impl Default for AutotuneAttitudeControlStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AutotuneAttitudeControlStatus::default())
  }
}

impl rosidl_runtime_rs::Message for AutotuneAttitudeControlStatus {
  type RmwMsg = super::msg::rmw::AutotuneAttitudeControlStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        coeff: msg.coeff,
        coeff_var: msg.coeff_var,
        fitness: msg.fitness,
        innov: msg.innov,
        dt_model: msg.dt_model,
        kc: msg.kc,
        ki: msg.ki,
        kd: msg.kd,
        kff: msg.kff,
        att_p: msg.att_p,
        rate_sp: msg.rate_sp,
        u_filt: msg.u_filt,
        y_filt: msg.y_filt,
        state: msg.state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        coeff: msg.coeff,
        coeff_var: msg.coeff_var,
      fitness: msg.fitness,
      innov: msg.innov,
      dt_model: msg.dt_model,
      kc: msg.kc,
      ki: msg.ki,
      kd: msg.kd,
      kff: msg.kff,
      att_p: msg.att_p,
        rate_sp: msg.rate_sp,
      u_filt: msg.u_filt,
      y_filt: msg.y_filt,
      state: msg.state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      coeff: msg.coeff,
      coeff_var: msg.coeff_var,
      fitness: msg.fitness,
      innov: msg.innov,
      dt_model: msg.dt_model,
      kc: msg.kc,
      ki: msg.ki,
      kd: msg.kd,
      kff: msg.kff,
      att_p: msg.att_p,
      rate_sp: msg.rate_sp,
      u_filt: msg.u_filt,
      y_filt: msg.y_filt,
      state: msg.state,
    }
  }
}


// Corresponds to px4_msgs__msg__AuxGlobalPosition
/// Auxiliary global position
///
/// This message provides global position data from an external source such as
/// pseudolites, visual navigation, or other positioning system.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AuxGlobalPosition {
    /// Time since system start
    pub timestamp: u64,

    /// Timestamp of the raw data
    pub timestamp_sample: u64,

    /// Unique identifier for the AGP source
    pub id: u8,

    /// Source type of the position data (based on mavlink::GLOBAL_POSITION_SRC)
    pub source: u8,

    /// lat, lon: required for horizontal position fusion, alt: required for vertical position fusion
    /// [deg] Latitude in WGS84
    pub lat: f64,

    /// Longitude in WGS84
    pub lon: f64,

    /// [m] [@invalid NaN] Altitude above mean sea level (AMSL)
    pub alt: f32,

    /// [m] [@invalid NaN] Std dev of horizontal position, lower bounded by NOISE param
    pub eph: f32,

    /// [m] [@invalid NaN] Std dev of vertical position, lower bounded by NOISE param
    pub epv: f32,

    /// Counter for reset events on horizontal position coordinates
    pub lat_lon_reset_counter: u8,

}

impl AuxGlobalPosition {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 1;

    /// Unknown source
    pub const SOURCE_UNKNOWN: u8 = 0;

    /// GNSS
    pub const SOURCE_GNSS: u8 = 1;

    /// Vision
    pub const SOURCE_VISION: u8 = 2;

    /// Pseudolites
    pub const SOURCE_PSEUDOLITES: u8 = 3;

    /// Terrain
    pub const SOURCE_TERRAIN: u8 = 4;

    /// Magnetic
    pub const SOURCE_MAGNETIC: u8 = 5;

    /// Estimator
    pub const SOURCE_ESTIMATOR: u8 = 6;

    /// Low Earth Orbit satellite-based positioning
    pub const SOURCE_LEO: u8 = 7;

}


impl Default for AuxGlobalPosition {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AuxGlobalPosition::default())
  }
}

impl rosidl_runtime_rs::Message for AuxGlobalPosition {
  type RmwMsg = super::msg::rmw::AuxGlobalPosition;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        id: msg.id,
        source: msg.source,
        lat: msg.lat,
        lon: msg.lon,
        alt: msg.alt,
        eph: msg.eph,
        epv: msg.epv,
        lat_lon_reset_counter: msg.lat_lon_reset_counter,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      id: msg.id,
      source: msg.source,
      lat: msg.lat,
      lon: msg.lon,
      alt: msg.alt,
      eph: msg.eph,
      epv: msg.epv,
      lat_lon_reset_counter: msg.lat_lon_reset_counter,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      id: msg.id,
      source: msg.source,
      lat: msg.lat,
      lon: msg.lon,
      alt: msg.alt,
      eph: msg.eph,
      epv: msg.epv,
      lat_lon_reset_counter: msg.lat_lon_reset_counter,
    }
  }
}


// Corresponds to px4_msgs__msg__BatteryInfo
/// Battery information
///
/// Static or near-invariant battery information.
/// Should be streamed at low rate.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BatteryInfo {
    /// Time since system start
    pub timestamp: u64,

    /// Must match the id in the battery_status message for the same battery
    pub id: u8,

    /// Serial number of the battery pack in ASCII characters, 0 terminated
    pub serial_number: [u8; 32],

}



impl Default for BatteryInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BatteryInfo::default())
  }
}

impl rosidl_runtime_rs::Message for BatteryInfo {
  type RmwMsg = super::msg::rmw::BatteryInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        id: msg.id,
        serial_number: msg.serial_number,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      id: msg.id,
        serial_number: msg.serial_number,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      id: msg.id,
      serial_number: msg.serial_number,
    }
  }
}


// Corresponds to px4_msgs__msg__BatteryStatus
/// Battery status
///
/// Battery status information for up to 3 battery instances.
/// These are populated from power module and smart battery device drivers, and one battery updated from MAVLink.
/// Battery instance information is also logged and streamed in MAVLink telemetry.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BatteryStatus {
    /// Time since system start
    pub timestamp: u64,

    /// Whether or not a battery is connected. For power modules this is based on a voltage threshold.
    pub connected: bool,

    /// [V] [@invalid 0] Battery voltage
    pub voltage_v: f32,

    /// [A] [@invalid -1] Battery current
    pub current_a: f32,

    /// [A] [@invalid -1] Battery current average (for FW average in level flight)
    pub current_average_a: f32,

    /// [mAh] [@invalid -1] Discharged amount
    pub discharged_mah: f32,

    /// [@range 0,1] Remaining capacity
    pub remaining: f32,

    /// [-] [@range 1,] [@invalid -1] Scaling factor to compensate for lower actuation power caused by voltage sag
    pub scale: f32,

    /// [s] [@invalid NaN] Predicted time remaining until battery is empty under previous averaged load
    pub time_remaining_s: f32,

    /// [degC] [@invalid NaN] Temperature of the battery
    pub temperature: f32,

    /// [-] [@invalid 0] Number of cells
    pub cell_count: u8,

    /// Battery source
    pub source: u8,

    /// Zero based priority is the connection on the Power Controller V1..Vn AKA BrickN-1
    pub priority: u8,

    /// Capacity of the battery when fully charged
    pub capacity: u16,

    /// Number of discharge cycles the battery has experienced
    pub cycle_count: u16,

    /// Predicted remaining battery capacity based on the average rate of discharge
    pub average_time_to_empty: u16,

    /// Manufacture date, part of serial number of the battery pack. Formatted as: Day + Month×32 + (Year–1980)×512
    pub manufacture_date: u16,

    /// [@range 0, 100] State of health. FullChargeCapacity/DesignCapacity
    pub state_of_health: u16,

    /// [@range 1, 100] Max error, expected margin of error in the state-of-charge calculation
    pub max_error: u16,

    /// ID number of a battery. Should be unique and consistent for the lifetime of a vehicle. 1-indexed
    pub id: u8,

    /// Interface error counter
    pub interface_error: u16,

    /// [V] [@invalid 0] Battery individual cell voltages
    pub voltage_cell_v: [f32; 14],

    /// Max difference between individual cell voltages
    pub max_cell_voltage_delta: f32,

    /// Power off event imminent indication, false if unknown
    pub is_powering_off: bool,

    /// Set if the battery is explicitly required before arming
    pub is_required: bool,

    /// Current battery warning
    pub warning: u8,

    /// Smart battery supply status/fault flags (bitmask) for health indication
    pub faults: u16,

    /// Compensated battery capacity
    pub full_charge_capacity_wh: f32,

    /// [Wh] [@invalid NaN] Compensated battery capacity remaining
    pub remaining_capacity_wh: f32,

    /// Number of battery overdischarge
    pub over_discharge_count: u16,

    /// [V] [@invalid NaN] Nominal voltage of the battery pack
    pub nominal_voltage: f32,

    /// Internal resistance per cell estimate
    pub internal_resistance_estimate: f32,

    /// Open circuit voltage estimate
    pub ocv_estimate: f32,

    /// Filtered open circuit voltage estimate
    pub ocv_estimate_filtered: f32,

    /// [@range 0, 1] Normalized volt based state of charge estimate
    pub volt_based_soc_estimate: f32,

    /// Predicted voltage
    pub voltage_prediction: f32,

    /// Prediction error
    pub prediction_error: f32,

    /// Norm of the covariance matrix
    pub estimation_covariance_norm: f32,

}

impl BatteryStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAX_INSTANCES: u8 = 3;

    /// Power module (analog ADC or I2C power monitor)
    pub const SOURCE_POWER_MODULE: u8 = 0;

    /// External (MAVLink, CAN, or external driver)
    pub const SOURCE_EXTERNAL: u8 = 1;

    /// ESCs (via ESC telemetry)
    pub const SOURCE_ESCS: u8 = 2;

    /// No battery low voltage warning active
    pub const WARNING_NONE: u8 = 0;

    /// Low voltage warning
    pub const WARNING_LOW: u8 = 1;

    /// Critical voltage, return / abort immediately
    pub const WARNING_CRITICAL: u8 = 2;

    /// Immediate landing required
    pub const WARNING_EMERGENCY: u8 = 3;

    /// Battery has failed completely
    pub const WARNING_FAILED: u8 = 4;

    /// Battery is diagnosed to be defective or an error occurred, usage is discouraged / prohibited. Possible causes (faults) are listed in faults field
    pub const STATE_UNHEALTHY: u8 = 6;

    /// Battery is charging
    pub const STATE_CHARGING: u8 = 7;

    /// Battery has deep discharged
    pub const FAULT_DEEP_DISCHARGE: u8 = 0;

    /// Voltage spikes
    pub const FAULT_SPIKES: u8 = 1;

    /// One or more cells have failed
    pub const FAULT_CELL_FAIL: u8 = 2;

    /// Over-current
    pub const FAULT_OVER_CURRENT: u8 = 3;

    /// Over-temperature
    pub const FAULT_OVER_TEMPERATURE: u8 = 4;

    /// Under-temperature fault
    pub const FAULT_UNDER_TEMPERATURE: u8 = 5;

    /// Vehicle voltage is not compatible with this battery (batteries on same power rail should have similar voltage)
    pub const FAULT_INCOMPATIBLE_VOLTAGE: u8 = 6;

    /// Battery firmware is not compatible with current autopilot firmware
    pub const FAULT_INCOMPATIBLE_FIRMWARE: u8 = 7;

    /// Battery model is not supported by the system
    pub const FAULT_INCOMPATIBLE_MODEL: u8 = 8;

    /// Hardware problem
    pub const FAULT_HARDWARE_FAILURE: u8 = 9;

    /// Battery had a problem while arming
    pub const FAULT_FAILED_TO_ARM: u8 = 10;

    /// Counter. Keep this as last element
    pub const FAULT_COUNT: u8 = 11;

}


impl Default for BatteryStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BatteryStatus::default())
  }
}

impl rosidl_runtime_rs::Message for BatteryStatus {
  type RmwMsg = super::msg::rmw::BatteryStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        connected: msg.connected,
        voltage_v: msg.voltage_v,
        current_a: msg.current_a,
        current_average_a: msg.current_average_a,
        discharged_mah: msg.discharged_mah,
        remaining: msg.remaining,
        scale: msg.scale,
        time_remaining_s: msg.time_remaining_s,
        temperature: msg.temperature,
        cell_count: msg.cell_count,
        source: msg.source,
        priority: msg.priority,
        capacity: msg.capacity,
        cycle_count: msg.cycle_count,
        average_time_to_empty: msg.average_time_to_empty,
        manufacture_date: msg.manufacture_date,
        state_of_health: msg.state_of_health,
        max_error: msg.max_error,
        id: msg.id,
        interface_error: msg.interface_error,
        voltage_cell_v: msg.voltage_cell_v,
        max_cell_voltage_delta: msg.max_cell_voltage_delta,
        is_powering_off: msg.is_powering_off,
        is_required: msg.is_required,
        warning: msg.warning,
        faults: msg.faults,
        full_charge_capacity_wh: msg.full_charge_capacity_wh,
        remaining_capacity_wh: msg.remaining_capacity_wh,
        over_discharge_count: msg.over_discharge_count,
        nominal_voltage: msg.nominal_voltage,
        internal_resistance_estimate: msg.internal_resistance_estimate,
        ocv_estimate: msg.ocv_estimate,
        ocv_estimate_filtered: msg.ocv_estimate_filtered,
        volt_based_soc_estimate: msg.volt_based_soc_estimate,
        voltage_prediction: msg.voltage_prediction,
        prediction_error: msg.prediction_error,
        estimation_covariance_norm: msg.estimation_covariance_norm,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      connected: msg.connected,
      voltage_v: msg.voltage_v,
      current_a: msg.current_a,
      current_average_a: msg.current_average_a,
      discharged_mah: msg.discharged_mah,
      remaining: msg.remaining,
      scale: msg.scale,
      time_remaining_s: msg.time_remaining_s,
      temperature: msg.temperature,
      cell_count: msg.cell_count,
      source: msg.source,
      priority: msg.priority,
      capacity: msg.capacity,
      cycle_count: msg.cycle_count,
      average_time_to_empty: msg.average_time_to_empty,
      manufacture_date: msg.manufacture_date,
      state_of_health: msg.state_of_health,
      max_error: msg.max_error,
      id: msg.id,
      interface_error: msg.interface_error,
        voltage_cell_v: msg.voltage_cell_v,
      max_cell_voltage_delta: msg.max_cell_voltage_delta,
      is_powering_off: msg.is_powering_off,
      is_required: msg.is_required,
      warning: msg.warning,
      faults: msg.faults,
      full_charge_capacity_wh: msg.full_charge_capacity_wh,
      remaining_capacity_wh: msg.remaining_capacity_wh,
      over_discharge_count: msg.over_discharge_count,
      nominal_voltage: msg.nominal_voltage,
      internal_resistance_estimate: msg.internal_resistance_estimate,
      ocv_estimate: msg.ocv_estimate,
      ocv_estimate_filtered: msg.ocv_estimate_filtered,
      volt_based_soc_estimate: msg.volt_based_soc_estimate,
      voltage_prediction: msg.voltage_prediction,
      prediction_error: msg.prediction_error,
      estimation_covariance_norm: msg.estimation_covariance_norm,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      connected: msg.connected,
      voltage_v: msg.voltage_v,
      current_a: msg.current_a,
      current_average_a: msg.current_average_a,
      discharged_mah: msg.discharged_mah,
      remaining: msg.remaining,
      scale: msg.scale,
      time_remaining_s: msg.time_remaining_s,
      temperature: msg.temperature,
      cell_count: msg.cell_count,
      source: msg.source,
      priority: msg.priority,
      capacity: msg.capacity,
      cycle_count: msg.cycle_count,
      average_time_to_empty: msg.average_time_to_empty,
      manufacture_date: msg.manufacture_date,
      state_of_health: msg.state_of_health,
      max_error: msg.max_error,
      id: msg.id,
      interface_error: msg.interface_error,
      voltage_cell_v: msg.voltage_cell_v,
      max_cell_voltage_delta: msg.max_cell_voltage_delta,
      is_powering_off: msg.is_powering_off,
      is_required: msg.is_required,
      warning: msg.warning,
      faults: msg.faults,
      full_charge_capacity_wh: msg.full_charge_capacity_wh,
      remaining_capacity_wh: msg.remaining_capacity_wh,
      over_discharge_count: msg.over_discharge_count,
      nominal_voltage: msg.nominal_voltage,
      internal_resistance_estimate: msg.internal_resistance_estimate,
      ocv_estimate: msg.ocv_estimate,
      ocv_estimate_filtered: msg.ocv_estimate_filtered,
      volt_based_soc_estimate: msg.volt_based_soc_estimate,
      voltage_prediction: msg.voltage_prediction,
      prediction_error: msg.prediction_error,
      estimation_covariance_norm: msg.estimation_covariance_norm,
    }
  }
}


// Corresponds to px4_msgs__msg__ButtonEvent

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ButtonEvent {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Set to true if the event is triggered
    pub triggered: bool,

}

impl ButtonEvent {
    /// TOPICS button_event safety_button
    pub const ORB_QUEUE_LENGTH: u8 = 2;

}


impl Default for ButtonEvent {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ButtonEvent::default())
  }
}

impl rosidl_runtime_rs::Message for ButtonEvent {
  type RmwMsg = super::msg::rmw::ButtonEvent;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        triggered: msg.triggered,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      triggered: msg.triggered,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      triggered: msg.triggered,
    }
  }
}


// Corresponds to px4_msgs__msg__CameraCapture

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CameraCapture {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Capture time in UTC / GPS time
    pub timestamp_utc: u64,

    /// Image sequence number
    pub seq: u32,

    /// Latitude in degrees (WGS84)
    pub lat: f64,

    /// Longitude in degrees (WGS84)
    pub lon: f64,

    /// Altitude (AMSL)
    pub alt: f32,

    /// Altitude above ground (meters)
    pub ground_distance: f32,

    /// Attitude of the camera relative to NED earth-fixed frame when using a gimbal, otherwise vehicle attitude
    pub q: [f32; 4],

    /// 1 for success, 0 for failure, -1 if camera does not provide feedback
    pub result: i8,

}



impl Default for CameraCapture {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CameraCapture::default())
  }
}

impl rosidl_runtime_rs::Message for CameraCapture {
  type RmwMsg = super::msg::rmw::CameraCapture;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_utc: msg.timestamp_utc,
        seq: msg.seq,
        lat: msg.lat,
        lon: msg.lon,
        alt: msg.alt,
        ground_distance: msg.ground_distance,
        q: msg.q,
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_utc: msg.timestamp_utc,
      seq: msg.seq,
      lat: msg.lat,
      lon: msg.lon,
      alt: msg.alt,
      ground_distance: msg.ground_distance,
        q: msg.q,
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_utc: msg.timestamp_utc,
      seq: msg.seq,
      lat: msg.lat,
      lon: msg.lon,
      alt: msg.alt,
      ground_distance: msg.ground_distance,
      q: msg.q,
      result: msg.result,
    }
  }
}


// Corresponds to px4_msgs__msg__CameraStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CameraStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// mavlink system id of the currently active camera
    pub active_sys_id: u8,

    /// mavlink component id of currently active camera
    pub active_comp_id: u8,

}



impl Default for CameraStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CameraStatus::default())
  }
}

impl rosidl_runtime_rs::Message for CameraStatus {
  type RmwMsg = super::msg::rmw::CameraStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        active_sys_id: msg.active_sys_id,
        active_comp_id: msg.active_comp_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      active_sys_id: msg.active_sys_id,
      active_comp_id: msg.active_comp_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      active_sys_id: msg.active_sys_id,
      active_comp_id: msg.active_comp_id,
    }
  }
}


// Corresponds to px4_msgs__msg__CameraTrigger

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CameraTrigger {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// UTC timestamp
    pub timestamp_utc: u64,

    /// Image sequence number
    pub seq: u32,

    /// Trigger feedback from camera
    pub feedback: bool,

}

impl CameraTrigger {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u32 = 2;

}


impl Default for CameraTrigger {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CameraTrigger::default())
  }
}

impl rosidl_runtime_rs::Message for CameraTrigger {
  type RmwMsg = super::msg::rmw::CameraTrigger;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_utc: msg.timestamp_utc,
        seq: msg.seq,
        feedback: msg.feedback,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_utc: msg.timestamp_utc,
      seq: msg.seq,
      feedback: msg.feedback,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_utc: msg.timestamp_utc,
      seq: msg.seq,
      feedback: msg.feedback,
    }
  }
}


// Corresponds to px4_msgs__msg__CanInterfaceStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CanInterfaceStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub interface: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub io_errors: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frames_tx: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frames_rx: u64,

}



impl Default for CanInterfaceStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CanInterfaceStatus::default())
  }
}

impl rosidl_runtime_rs::Message for CanInterfaceStatus {
  type RmwMsg = super::msg::rmw::CanInterfaceStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        interface: msg.interface,
        io_errors: msg.io_errors,
        frames_tx: msg.frames_tx,
        frames_rx: msg.frames_rx,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      interface: msg.interface,
      io_errors: msg.io_errors,
      frames_tx: msg.frames_tx,
      frames_rx: msg.frames_rx,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      interface: msg.interface,
      io_errors: msg.io_errors,
      frames_tx: msg.frames_tx,
      frames_rx: msg.frames_rx,
    }
  }
}


// Corresponds to px4_msgs__msg__CellularStatus
/// Cellular status
///
/// This is currently used only for logging cell status from MAVLink.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CellularStatus {
    /// Time since system start
    pub timestamp: u64,

    /// Status bitmap
    pub status: u16,

    /// Failure reason
    pub failure_reason: u8,

    /// Cellular network radio type
    pub type_: u8,

    /// Cellular network RSSI/RSRP, absolute value
    pub quality: u8,

    /// Mobile country code
    pub mcc: u16,

    /// Mobile network code
    pub mnc: u16,

    /// Location area code
    pub lac: u16,

}

impl CellularStatus {
    /// State unknown or not reportable
    pub const STATUS_FLAG_UNKNOWN: u16 = 1;

    /// Modem is unusable
    pub const STATUS_FLAG_FAILED: u16 = 2;

    /// Modem is being initialized
    pub const STATUS_FLAG_INITIALIZING: u16 = 4;

    /// Modem is locked
    pub const STATUS_FLAG_LOCKED: u16 = 8;

    /// Modem is not enabled and is powered down
    pub const STATUS_FLAG_DISABLED: u16 = 16;

    /// Modem is currently transitioning to the STATUS_FLAG_DISABLED state
    pub const STATUS_FLAG_DISABLING: u16 = 32;

    /// Modem is currently transitioning to the STATUS_FLAG_ENABLED state
    pub const STATUS_FLAG_ENABLING: u16 = 64;

    /// Modem is enabled and powered on but not registered with a network provider and not available for data connections
    pub const STATUS_FLAG_ENABLED: u16 = 128;

    /// Modem is searching for a network provider to register
    pub const STATUS_FLAG_SEARCHING: u16 = 256;

    /// Modem is registered with a network provider, and data connections and messaging may be available for use
    pub const STATUS_FLAG_REGISTERED: u16 = 512;

    /// Modem is disconnecting and deactivating the last active packet data bearer. This state will not be entered if more than one packet data bearer is active and one of the active bearers is deactivated
    pub const STATUS_FLAG_DISCONNECTING: u16 = 1024;

    /// Modem is activating and connecting the first packet data bearer. Subsequent bearer activations when another bearer is already active do not cause this state to be entered
    pub const STATUS_FLAG_CONNECTING: u16 = 2048;

    /// One or more packet data bearers is active and connected
    pub const STATUS_FLAG_CONNECTED: u16 = 4096;

    /// No error
    pub const FAILURE_REASON_NONE: u8 = 0;

    /// Error state is unknown
    pub const FAILURE_REASON_UNKNOWN: u8 = 1;

    /// SIM is required for the modem but missing
    pub const FAILURE_REASON_SIM_MISSING: u8 = 2;

    /// SIM is available, but not usable for connection
    pub const FAILURE_REASON_SIM_ERROR: u8 = 3;

    /// None
    pub const CELLULAR_NETWORK_RADIO_TYPE_NONE: u8 = 0;

    /// GSM
    pub const CELLULAR_NETWORK_RADIO_TYPE_GSM: u8 = 1;

    /// CDMA
    pub const CELLULAR_NETWORK_RADIO_TYPE_CDMA: u8 = 2;

    /// WCDMA
    pub const CELLULAR_NETWORK_RADIO_TYPE_WCDMA: u8 = 3;

    /// LTE
    pub const CELLULAR_NETWORK_RADIO_TYPE_LTE: u8 = 4;

}


impl Default for CellularStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CellularStatus::default())
  }
}

impl rosidl_runtime_rs::Message for CellularStatus {
  type RmwMsg = super::msg::rmw::CellularStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        status: msg.status,
        failure_reason: msg.failure_reason,
        type_: msg.type_,
        quality: msg.quality,
        mcc: msg.mcc,
        mnc: msg.mnc,
        lac: msg.lac,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      status: msg.status,
      failure_reason: msg.failure_reason,
      type_: msg.type_,
      quality: msg.quality,
      mcc: msg.mcc,
      mnc: msg.mnc,
      lac: msg.lac,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      status: msg.status,
      failure_reason: msg.failure_reason,
      type_: msg.type_,
      quality: msg.quality,
      mcc: msg.mcc,
      mnc: msg.mnc,
      lac: msg.lac,
    }
  }
}


// Corresponds to px4_msgs__msg__CollisionConstraints
/// Local setpoint constraints in NED frame
/// setting something to NaN means that no limit is provided

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CollisionConstraints {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// velocities demanded
    pub original_setpoint: [f32; 2],

    /// velocities allowed
    pub adapted_setpoint: [f32; 2],

}



impl Default for CollisionConstraints {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CollisionConstraints::default())
  }
}

impl rosidl_runtime_rs::Message for CollisionConstraints {
  type RmwMsg = super::msg::rmw::CollisionConstraints;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        original_setpoint: msg.original_setpoint,
        adapted_setpoint: msg.adapted_setpoint,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        original_setpoint: msg.original_setpoint,
        adapted_setpoint: msg.adapted_setpoint,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      original_setpoint: msg.original_setpoint,
      adapted_setpoint: msg.adapted_setpoint,
    }
  }
}


// Corresponds to px4_msgs__msg__ConfigOverrides
/// Configurable overrides by (external) modes or mode executors

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConfigOverrides {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Prevent the drone from automatically disarming after landing (if configured)
    pub disable_auto_disarm: bool,

    /// Defer all failsafes that can be deferred (until the flag is cleared)
    pub defer_failsafes: bool,

    /// Maximum time a failsafe can be deferred. 0 = system default, -1 = no timeout
    pub defer_failsafes_timeout_s: i16,

    /// Prevent the drone from automatically setting the home position on arm or takeoff
    pub disable_auto_set_home: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source_type: i8,

    /// ID depending on source_type
    pub source_id: u8,

}

impl ConfigOverrides {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SOURCE_TYPE_MODE: i8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SOURCE_TYPE_MODE_EXECUTOR: i8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 4;

}


impl Default for ConfigOverrides {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ConfigOverrides::default())
  }
}

impl rosidl_runtime_rs::Message for ConfigOverrides {
  type RmwMsg = super::msg::rmw::ConfigOverrides;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        disable_auto_disarm: msg.disable_auto_disarm,
        defer_failsafes: msg.defer_failsafes,
        defer_failsafes_timeout_s: msg.defer_failsafes_timeout_s,
        disable_auto_set_home: msg.disable_auto_set_home,
        source_type: msg.source_type,
        source_id: msg.source_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      disable_auto_disarm: msg.disable_auto_disarm,
      defer_failsafes: msg.defer_failsafes,
      defer_failsafes_timeout_s: msg.defer_failsafes_timeout_s,
      disable_auto_set_home: msg.disable_auto_set_home,
      source_type: msg.source_type,
      source_id: msg.source_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      disable_auto_disarm: msg.disable_auto_disarm,
      defer_failsafes: msg.defer_failsafes,
      defer_failsafes_timeout_s: msg.defer_failsafes_timeout_s,
      disable_auto_set_home: msg.disable_auto_set_home,
      source_type: msg.source_type,
      source_id: msg.source_id,
    }
  }
}


// Corresponds to px4_msgs__msg__ControlAllocatorStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlAllocatorStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Boolean indicating whether the 3D torque setpoint was correctly allocated to actuators. 0 if not achieved, 1 if achieved.
    pub torque_setpoint_achieved: bool,

    /// Unallocated torque. Equal to 0 if the setpoint was achieved.
    /// Computed as: unallocated_torque = torque_setpoint - allocated_torque
    pub unallocated_torque: [f32; 3],

    /// Boolean indicating whether the 3D thrust setpoint was correctly allocated to actuators. 0 if not achieved, 1 if achieved.
    pub thrust_setpoint_achieved: bool,

    /// Unallocated thrust. Equal to 0 if the setpoint was achieved.
    /// Computed as: unallocated_thrust = thrust_setpoint - allocated_thrust
    pub unallocated_thrust: [f32; 3],

    /// Indicates actuator saturation status.
    /// Note 1: actuator saturation does not necessarily imply that the thrust setpoint or the torque setpoint were not achieved.
    /// Note 2: an actuator with limited dynamics can be indicated as upper-saturated even if it as not reached its maximum value.
    pub actuator_saturation: [i8; 16],

    /// Bitmask of failed motors that were removed from the allocation / effectiveness matrix. Not necessarily identical to the report from FailureDetector
    pub handled_motor_failure_mask: u16,

    /// Bitmaks of motors stopped by failure injection
    pub motor_stop_mask: u16,

    /// True while an actuator group preflight check (VEHICLE_CMD_ACTUATOR_GROUP_TEST) is overriding the torque/thrust setpoint or collective-tilt
    pub actuator_group_preflight_check_active: bool,

}

impl ControlAllocatorStatus {
    /// The actuator is not saturated
    pub const ACTUATOR_SATURATION_OK: i8 = 0;

    /// The actuator is saturated (with a value <= the desired value) because it cannot increase its value faster
    pub const ACTUATOR_SATURATION_UPPER_DYN: i8 = 1;

    /// The actuator is saturated (with a value <= the desired value) because it has reached its maximum value
    pub const ACTUATOR_SATURATION_UPPER: i8 = 2;

    /// The actuator is saturated (with a value >= the desired value) because it cannot decrease its value faster
    pub const ACTUATOR_SATURATION_LOWER_DYN: i8 = -1;

    /// The actuator is saturated (with a value >= the desired value) because it has reached its minimum value
    pub const ACTUATOR_SATURATION_LOWER: i8 = -2;

}


impl Default for ControlAllocatorStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ControlAllocatorStatus::default())
  }
}

impl rosidl_runtime_rs::Message for ControlAllocatorStatus {
  type RmwMsg = super::msg::rmw::ControlAllocatorStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        torque_setpoint_achieved: msg.torque_setpoint_achieved,
        unallocated_torque: msg.unallocated_torque,
        thrust_setpoint_achieved: msg.thrust_setpoint_achieved,
        unallocated_thrust: msg.unallocated_thrust,
        actuator_saturation: msg.actuator_saturation,
        handled_motor_failure_mask: msg.handled_motor_failure_mask,
        motor_stop_mask: msg.motor_stop_mask,
        actuator_group_preflight_check_active: msg.actuator_group_preflight_check_active,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      torque_setpoint_achieved: msg.torque_setpoint_achieved,
        unallocated_torque: msg.unallocated_torque,
      thrust_setpoint_achieved: msg.thrust_setpoint_achieved,
        unallocated_thrust: msg.unallocated_thrust,
        actuator_saturation: msg.actuator_saturation,
      handled_motor_failure_mask: msg.handled_motor_failure_mask,
      motor_stop_mask: msg.motor_stop_mask,
      actuator_group_preflight_check_active: msg.actuator_group_preflight_check_active,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      torque_setpoint_achieved: msg.torque_setpoint_achieved,
      unallocated_torque: msg.unallocated_torque,
      thrust_setpoint_achieved: msg.thrust_setpoint_achieved,
      unallocated_thrust: msg.unallocated_thrust,
      actuator_saturation: msg.actuator_saturation,
      handled_motor_failure_mask: msg.handled_motor_failure_mask,
      motor_stop_mask: msg.motor_stop_mask,
      actuator_group_preflight_check_active: msg.actuator_group_preflight_check_active,
    }
  }
}


// Corresponds to px4_msgs__msg__Cpuload

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Cpuload {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// processor load from 0 to 1
    pub load: f32,

    /// RAM usage from 0 to 1
    pub ram_usage: f32,

}



impl Default for Cpuload {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Cpuload::default())
  }
}

impl rosidl_runtime_rs::Message for Cpuload {
  type RmwMsg = super::msg::rmw::Cpuload;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        load: msg.load,
        ram_usage: msg.ram_usage,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      load: msg.load,
      ram_usage: msg.ram_usage,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      load: msg.load,
      ram_usage: msg.ram_usage,
    }
  }
}


// Corresponds to px4_msgs__msg__DatamanRequest

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DatamanRequest {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub client_id: u8,

    /// id/read/write/clear
    pub request_type: u8,

    /// dm_item_t
    pub item: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub data: [u8; 56],


    // This member is not documented.
    #[allow(missing_docs)]
    pub data_length: u32,

}



impl Default for DatamanRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DatamanRequest::default())
  }
}

impl rosidl_runtime_rs::Message for DatamanRequest {
  type RmwMsg = super::msg::rmw::DatamanRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        client_id: msg.client_id,
        request_type: msg.request_type,
        item: msg.item,
        index: msg.index,
        data: msg.data,
        data_length: msg.data_length,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      client_id: msg.client_id,
      request_type: msg.request_type,
      item: msg.item,
      index: msg.index,
        data: msg.data,
      data_length: msg.data_length,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      client_id: msg.client_id,
      request_type: msg.request_type,
      item: msg.item,
      index: msg.index,
      data: msg.data,
      data_length: msg.data_length,
    }
  }
}


// Corresponds to px4_msgs__msg__DatamanResponse

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DatamanResponse {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub client_id: u8,

    /// id/read/write/clear
    pub request_type: u8,

    /// dm_item_t
    pub item: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub data: [u8; 56],


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u8,

}

impl DatamanResponse {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_SUCCESS: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FAILURE_ID_ERR: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FAILURE_NO_DATA: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FAILURE_READ_FAILED: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FAILURE_WRITE_FAILED: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FAILURE_CLEAR_FAILED: u8 = 5;

}


impl Default for DatamanResponse {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DatamanResponse::default())
  }
}

impl rosidl_runtime_rs::Message for DatamanResponse {
  type RmwMsg = super::msg::rmw::DatamanResponse;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        client_id: msg.client_id,
        request_type: msg.request_type,
        item: msg.item,
        index: msg.index,
        data: msg.data,
        status: msg.status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      client_id: msg.client_id,
      request_type: msg.request_type,
      item: msg.item,
      index: msg.index,
        data: msg.data,
      status: msg.status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      client_id: msg.client_id,
      request_type: msg.request_type,
      item: msg.item,
      index: msg.index,
      data: msg.data,
      status: msg.status,
    }
  }
}


// Corresponds to px4_msgs__msg__DebugArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DebugArray {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// unique ID of debug array, used to discriminate between arrays
    pub id: u16,

    /// name of the debug array (max. 10 characters)
    pub name: [u8; 10],

    /// data
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub data: [f32; 58],

}

impl DebugArray {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ARRAY_SIZE: u8 = 58;

}


impl Default for DebugArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DebugArray::default())
  }
}

impl rosidl_runtime_rs::Message for DebugArray {
  type RmwMsg = super::msg::rmw::DebugArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        id: msg.id,
        name: msg.name,
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      id: msg.id,
        name: msg.name,
        data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      id: msg.id,
      name: msg.name,
      data: msg.data,
    }
  }
}


// Corresponds to px4_msgs__msg__DebugKeyValue

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DebugKeyValue {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// max. 10 characters as key / name
    pub key: [u8; 10],

    /// the value to send as debug output
    pub value: f32,

}



impl Default for DebugKeyValue {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DebugKeyValue::default())
  }
}

impl rosidl_runtime_rs::Message for DebugKeyValue {
  type RmwMsg = super::msg::rmw::DebugKeyValue;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        key: msg.key,
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        key: msg.key,
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      key: msg.key,
      value: msg.value,
    }
  }
}


// Corresponds to px4_msgs__msg__DebugValue

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DebugValue {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// index of debug variable
    pub ind: i8,

    /// the value to send as debug output
    pub value: f32,

}



impl Default for DebugValue {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DebugValue::default())
  }
}

impl rosidl_runtime_rs::Message for DebugValue {
  type RmwMsg = super::msg::rmw::DebugValue;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        ind: msg.ind,
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      ind: msg.ind,
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      ind: msg.ind,
      value: msg.value,
    }
  }
}


// Corresponds to px4_msgs__msg__DebugVect

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DebugVect {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// max. 10 characters as key / name
    pub name: [u8; 10],

    /// x value
    pub x: f32,

    /// y value
    pub y: f32,

    /// z value
    pub z: f32,

}



impl Default for DebugVect {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DebugVect::default())
  }
}

impl rosidl_runtime_rs::Message for DebugVect {
  type RmwMsg = super::msg::rmw::DebugVect;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        name: msg.name,
        x: msg.x,
        y: msg.y,
        z: msg.z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        name: msg.name,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      name: msg.name,
      x: msg.x,
      y: msg.y,
      z: msg.z,
    }
  }
}


// Corresponds to px4_msgs__msg__DeviceInformation
/// Device information
///
/// Can be used to uniquely associate a device_id from a sensor topic with a physical device using serial number.
/// as well as tracking of the used firmware versions on the devices.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeviceInformation {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Type of the device. Matches MAVLink DEVICE_TYPE enum
    pub device_type: u8,

    /// Name of device e.g. DroneCAN node name
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub name: [u8; 80],

    /// [-] [@invalid 0 if not available] Unique device ID for the sensor. Does not change between power cycles.
    pub device_id: u32,

    /// [-] [@invalid empty if not available] Firmware version.
    pub firmware_version: [u8; 24],

    /// [-] [@invalid empty if not available] Hardware version.
    pub hardware_version: [u8; 24],

    /// [-] [@invalid empty if not available] Device serial number or unique identifier.
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub serial_number: [u8; 33],

}

impl DeviceInformation {
    /// Generic/unknown sensor
    pub const DEVICE_TYPE_GENERIC: u8 = 0;

    /// Airspeed sensor
    pub const DEVICE_TYPE_AIRSPEED: u8 = 1;

    /// ESC
    pub const DEVICE_TYPE_ESC: u8 = 2;

    /// Servo
    pub const DEVICE_TYPE_SERVO: u8 = 3;

    /// GPS
    pub const DEVICE_TYPE_GPS: u8 = 4;

    /// Magnetometer
    pub const DEVICE_TYPE_MAGNETOMETER: u8 = 5;

    /// Parachute
    pub const DEVICE_TYPE_PARACHUTE: u8 = 6;

    /// Rangefinder
    pub const DEVICE_TYPE_RANGEFINDER: u8 = 7;

    /// Winch
    pub const DEVICE_TYPE_WINCH: u8 = 8;

    /// Barometer
    pub const DEVICE_TYPE_BAROMETER: u8 = 9;

    /// Optical flow
    pub const DEVICE_TYPE_OPTICAL_FLOW: u8 = 10;

    /// Accelerometer
    pub const DEVICE_TYPE_ACCELEROMETER: u8 = 11;

    /// Gyroscope
    pub const DEVICE_TYPE_GYROSCOPE: u8 = 12;

    /// Differential pressure
    pub const DEVICE_TYPE_DIFFERENTIAL_PRESSURE: u8 = 13;

    /// Battery
    pub const DEVICE_TYPE_BATTERY: u8 = 14;

    /// Hygrometer
    pub const DEVICE_TYPE_HYGROMETER: u8 = 15;

}


impl Default for DeviceInformation {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DeviceInformation::default())
  }
}

impl rosidl_runtime_rs::Message for DeviceInformation {
  type RmwMsg = super::msg::rmw::DeviceInformation;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        device_type: msg.device_type,
        name: msg.name,
        device_id: msg.device_id,
        firmware_version: msg.firmware_version,
        hardware_version: msg.hardware_version,
        serial_number: msg.serial_number,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      device_type: msg.device_type,
        name: msg.name,
      device_id: msg.device_id,
        firmware_version: msg.firmware_version,
        hardware_version: msg.hardware_version,
        serial_number: msg.serial_number,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      device_type: msg.device_type,
      name: msg.name,
      device_id: msg.device_id,
      firmware_version: msg.firmware_version,
      hardware_version: msg.hardware_version,
      serial_number: msg.serial_number,
    }
  }
}


// Corresponds to px4_msgs__msg__DifferentialPressure
/// Differential-pressure (airspeed) sensor
///
/// This is populated by airspeed sensor drivers and used by the sensor module to calculate airspeed.
/// The information is published in the `SCALED_PRESSURE_n` MAVLink messages (along with information from a corresponding `SensorBaro` instance).

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DifferentialPressure {
    /// Time of publication (since system start)
    pub timestamp: u64,

    /// Time of raw data capture
    pub timestamp_sample: u64,

    /// Unique device ID for the sensor that does not change between power cycles
    pub device_id: u32,

    /// Differential pressure reading (may be negative)
    pub differential_pressure_pa: f32,

    /// [degC] [@invalid NaN if unknown] Temperature
    pub temperature: f32,

    /// Number of errors detected by driver
    pub error_count: u32,

}



impl Default for DifferentialPressure {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DifferentialPressure::default())
  }
}

impl rosidl_runtime_rs::Message for DifferentialPressure {
  type RmwMsg = super::msg::rmw::DifferentialPressure;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        device_id: msg.device_id,
        differential_pressure_pa: msg.differential_pressure_pa,
        temperature: msg.temperature,
        error_count: msg.error_count,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      differential_pressure_pa: msg.differential_pressure_pa,
      temperature: msg.temperature,
      error_count: msg.error_count,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      differential_pressure_pa: msg.differential_pressure_pa,
      temperature: msg.temperature,
      error_count: msg.error_count,
    }
  }
}


// Corresponds to px4_msgs__msg__DistanceSensor
/// DISTANCE_SENSOR message data

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DistanceSensor {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// unique device ID for the sensor that does not change between power cycles
    pub device_id: u32,

    /// Minimum distance the sensor can measure (in m)
    pub min_distance: f32,

    /// Maximum distance the sensor can measure (in m)
    pub max_distance: f32,

    /// Current distance reading (in m)
    pub current_distance: f32,

    /// Measurement variance (in m^2), 0 for unknown / invalid readings
    pub variance: f32,

    /// Signal quality in percent (0...100%), where 0 = invalid signal, 100 = perfect signal, and -1 = unknown signal quality.
    pub signal_quality: i8,

    /// Type from MAV_DISTANCE_SENSOR enum
    pub type_: u8,

    /// Sensor horizontal field of view (rad)
    pub h_fov: f32,

    /// Sensor vertical field of view (rad)
    pub v_fov: f32,

    /// Quaterion sensor orientation with respect to the vehicle body frame to specify the orientation ROTATION_CUSTOM
    pub q: [f32; 4],

    /// Direction the sensor faces from MAV_SENSOR_ORIENTATION enum
    pub orientation: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,

}

impl DistanceSensor {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAV_DISTANCE_SENSOR_LASER: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAV_DISTANCE_SENSOR_ULTRASOUND: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAV_DISTANCE_SENSOR_INFRARED: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAV_DISTANCE_SENSOR_RADAR: u8 = 3;

    /// MAV_SENSOR_ROTATION_NONE
    pub const ROTATION_YAW_0: u8 = 0;

    /// MAV_SENSOR_ROTATION_YAW_45
    pub const ROTATION_YAW_45: u8 = 1;

    /// MAV_SENSOR_ROTATION_YAW_90
    pub const ROTATION_YAW_90: u8 = 2;

    /// MAV_SENSOR_ROTATION_YAW_135
    pub const ROTATION_YAW_135: u8 = 3;

    /// MAV_SENSOR_ROTATION_YAW_180
    pub const ROTATION_YAW_180: u8 = 4;

    /// MAV_SENSOR_ROTATION_YAW_225
    pub const ROTATION_YAW_225: u8 = 5;

    /// MAV_SENSOR_ROTATION_YAW_270
    pub const ROTATION_YAW_270: u8 = 6;

    /// MAV_SENSOR_ROTATION_YAW_315
    pub const ROTATION_YAW_315: u8 = 7;

    /// MAV_SENSOR_ROTATION_NONE
    pub const ROTATION_FORWARD_FACING: u8 = 0;

    /// MAV_SENSOR_ROTATION_YAW_90
    pub const ROTATION_RIGHT_FACING: u8 = 2;

    /// MAV_SENSOR_ROTATION_YAW_180
    pub const ROTATION_BACKWARD_FACING: u8 = 4;

    /// MAV_SENSOR_ROTATION_YAW_270
    pub const ROTATION_LEFT_FACING: u8 = 6;

    /// MAV_SENSOR_ROTATION_PITCH_90
    pub const ROTATION_UPWARD_FACING: u8 = 24;

    /// MAV_SENSOR_ROTATION_PITCH_270
    pub const ROTATION_DOWNWARD_FACING: u8 = 25;

    /// MAV_SENSOR_ROTATION_CUSTOM
    pub const ROTATION_CUSTOM: u8 = 100;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_ENABLED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_DISABLED: u8 = 2;

}


impl Default for DistanceSensor {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DistanceSensor::default())
  }
}

impl rosidl_runtime_rs::Message for DistanceSensor {
  type RmwMsg = super::msg::rmw::DistanceSensor;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        device_id: msg.device_id,
        min_distance: msg.min_distance,
        max_distance: msg.max_distance,
        current_distance: msg.current_distance,
        variance: msg.variance,
        signal_quality: msg.signal_quality,
        type_: msg.type_,
        h_fov: msg.h_fov,
        v_fov: msg.v_fov,
        q: msg.q,
        orientation: msg.orientation,
        mode: msg.mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
      min_distance: msg.min_distance,
      max_distance: msg.max_distance,
      current_distance: msg.current_distance,
      variance: msg.variance,
      signal_quality: msg.signal_quality,
      type_: msg.type_,
      h_fov: msg.h_fov,
      v_fov: msg.v_fov,
        q: msg.q,
      orientation: msg.orientation,
      mode: msg.mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
      min_distance: msg.min_distance,
      max_distance: msg.max_distance,
      current_distance: msg.current_distance,
      variance: msg.variance,
      signal_quality: msg.signal_quality,
      type_: msg.type_,
      h_fov: msg.h_fov,
      v_fov: msg.v_fov,
      q: msg.q,
      orientation: msg.orientation,
      mode: msg.mode,
    }
  }
}


// Corresponds to px4_msgs__msg__DistanceSensorModeChangeRequest

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DistanceSensorModeChangeRequest {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// request to disable/enable the distance sensor
    pub request_on_off: u8,

}

impl DistanceSensorModeChangeRequest {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REQUEST_OFF: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REQUEST_ON: u8 = 1;

}


impl Default for DistanceSensorModeChangeRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DistanceSensorModeChangeRequest::default())
  }
}

impl rosidl_runtime_rs::Message for DistanceSensorModeChangeRequest {
  type RmwMsg = super::msg::rmw::DistanceSensorModeChangeRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        request_on_off: msg.request_on_off,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      request_on_off: msg.request_on_off,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      request_on_off: msg.request_on_off,
    }
  }
}


// Corresponds to px4_msgs__msg__DronecanNodeStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DronecanNodeStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// The node ID which this data comes from
    pub node_id: u16,

    /// From the uavcan.protocol.NodeStatus message
    /// Node uptime
    pub uptime_sec: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub health: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,

    /// Not used currently, keep zero when publishing, ignore when receiving.
    pub sub_mode: u8,

    /// Optional, vendor-specific node status code, e.g. a fault code or a status bitmask.
    pub vendor_specific_status_code: u16,

}

impl DronecanNodeStatus {
    /// Abstract node health.
    ///
    /// The node is functioning properly.
    pub const HEALTH_OK: u8 = 0;

    /// A critical parameter went out of range or the node encountered a minor failure.
    pub const HEALTH_WARNING: u8 = 1;

    /// The node encountered a major failure.
    pub const HEALTH_ERROR: u8 = 2;

    /// The node suffered a fatal malfunction.
    pub const HEALTH_CRITICAL: u8 = 3;

    /// Current mode.
    ///
    /// Mode OFFLINE can be actually reported by the node to explicitly inform other network
    /// participants that the sending node is about to shutdown. In this case other nodes will not
    /// have to wait OFFLINE_TIMEOUT_MS before they detect that the node is no longer available.
    ///
    /// Reserved values can be used in future revisions of the specification.
    ///
    /// Normal operating mode.
    pub const MODE_OPERATIONAL: u8 = 0;

    /// Initialization is in progress; this mode is entered immediately after startup.
    pub const MODE_INITIALIZATION: u8 = 1;

    /// E.g. calibration, the bootloader is running, etc.
    pub const MODE_MAINTENANCE: u8 = 2;

    /// New software/firmware is being loaded.
    pub const MODE_SOFTWARE_UPDATE: u8 = 3;

    /// The node is no longer available.
    pub const MODE_OFFLINE: u8 = 7;

}


impl Default for DronecanNodeStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DronecanNodeStatus::default())
  }
}

impl rosidl_runtime_rs::Message for DronecanNodeStatus {
  type RmwMsg = super::msg::rmw::DronecanNodeStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        node_id: msg.node_id,
        uptime_sec: msg.uptime_sec,
        health: msg.health,
        mode: msg.mode,
        sub_mode: msg.sub_mode,
        vendor_specific_status_code: msg.vendor_specific_status_code,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      node_id: msg.node_id,
      uptime_sec: msg.uptime_sec,
      health: msg.health,
      mode: msg.mode,
      sub_mode: msg.sub_mode,
      vendor_specific_status_code: msg.vendor_specific_status_code,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      node_id: msg.node_id,
      uptime_sec: msg.uptime_sec,
      health: msg.health,
      mode: msg.mode,
      sub_mode: msg.sub_mode,
      vendor_specific_status_code: msg.vendor_specific_status_code,
    }
  }
}


// Corresponds to px4_msgs__msg__Ekf2Timestamps
/// this message contains the (relative) timestamps of the sensor inputs used by EKF2.
/// It can be used for reproducible replay.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Ekf2Timestamps {
    /// the timestamp field is the ekf2 reference time and matches the timestamp of
    /// the sensor_combined topic.
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// timestamps are relative to the main timestamp and are in 0.1 ms (timestamp +
    /// *_timestamp_rel = absolute timestamp). For int16, this allows a maximum
    /// difference of +-3.2s to the sensor_combined topic.
    pub airspeed_timestamp_rel: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub airspeed_validated_timestamp_rel: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_sensor_timestamp_rel: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub optical_flow_timestamp_rel: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vehicle_air_data_timestamp_rel: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vehicle_magnetometer_timestamp_rel: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub visual_odometry_timestamp_rel: i16,

}

impl Ekf2Timestamps {
    /// (0x7fff) If one of the relative timestamps
    /// is set to this value, it means the associated sensor values did not update
    pub const RELATIVE_TIMESTAMP_INVALID: i16 = 32767;

}


impl Default for Ekf2Timestamps {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Ekf2Timestamps::default())
  }
}

impl rosidl_runtime_rs::Message for Ekf2Timestamps {
  type RmwMsg = super::msg::rmw::Ekf2Timestamps;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        airspeed_timestamp_rel: msg.airspeed_timestamp_rel,
        airspeed_validated_timestamp_rel: msg.airspeed_validated_timestamp_rel,
        distance_sensor_timestamp_rel: msg.distance_sensor_timestamp_rel,
        optical_flow_timestamp_rel: msg.optical_flow_timestamp_rel,
        vehicle_air_data_timestamp_rel: msg.vehicle_air_data_timestamp_rel,
        vehicle_magnetometer_timestamp_rel: msg.vehicle_magnetometer_timestamp_rel,
        visual_odometry_timestamp_rel: msg.visual_odometry_timestamp_rel,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      airspeed_timestamp_rel: msg.airspeed_timestamp_rel,
      airspeed_validated_timestamp_rel: msg.airspeed_validated_timestamp_rel,
      distance_sensor_timestamp_rel: msg.distance_sensor_timestamp_rel,
      optical_flow_timestamp_rel: msg.optical_flow_timestamp_rel,
      vehicle_air_data_timestamp_rel: msg.vehicle_air_data_timestamp_rel,
      vehicle_magnetometer_timestamp_rel: msg.vehicle_magnetometer_timestamp_rel,
      visual_odometry_timestamp_rel: msg.visual_odometry_timestamp_rel,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      airspeed_timestamp_rel: msg.airspeed_timestamp_rel,
      airspeed_validated_timestamp_rel: msg.airspeed_validated_timestamp_rel,
      distance_sensor_timestamp_rel: msg.distance_sensor_timestamp_rel,
      optical_flow_timestamp_rel: msg.optical_flow_timestamp_rel,
      vehicle_air_data_timestamp_rel: msg.vehicle_air_data_timestamp_rel,
      vehicle_magnetometer_timestamp_rel: msg.vehicle_magnetometer_timestamp_rel,
      visual_odometry_timestamp_rel: msg.visual_odometry_timestamp_rel,
    }
  }
}


// Corresponds to px4_msgs__msg__EscEepromRead

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EscEepromRead {
    /// Time since system start
    pub timestamp: u64,

    /// ESC firmware type (see ESC_FIRMWARE enum in MAVLink)
    pub firmware: u8,

    /// Index of the ESC (0 = ESC1, 1 = ESC2, etc.)
    pub index: u8,

    /// Length of valid data
    pub length: u16,

    /// Raw ESC EEPROM data
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub data: [u8; 48],

}

impl EscEepromRead {
    /// To support 8 queued up responses
    pub const ORB_QUEUE_LENGTH: u8 = 8;

}


impl Default for EscEepromRead {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EscEepromRead::default())
  }
}

impl rosidl_runtime_rs::Message for EscEepromRead {
  type RmwMsg = super::msg::rmw::EscEepromRead;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        firmware: msg.firmware,
        index: msg.index,
        length: msg.length,
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      firmware: msg.firmware,
      index: msg.index,
      length: msg.length,
        data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      firmware: msg.firmware,
      index: msg.index,
      length: msg.length,
      data: msg.data,
    }
  }
}


// Corresponds to px4_msgs__msg__EscEepromWrite

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EscEepromWrite {
    /// Time since system start
    pub timestamp: u64,

    /// ESC firmware type (see ESC_FIRMWARE enum in MAVLink)
    pub firmware: u8,

    /// Index of the ESC (0 = ESC1, 1 = ESC2, etc, 255 = All)
    pub index: u8,

    /// Length of valid data
    pub length: u16,

    /// Raw ESC EEPROM data
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub data: [u8; 48],

    /// Bitmask indicating which bytes in the data array should be written (max 48 values)
    pub write_mask: [u32; 2],

}

impl EscEepromWrite {
    /// To support 8 queued up requests
    pub const ORB_QUEUE_LENGTH: u8 = 8;

}


impl Default for EscEepromWrite {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EscEepromWrite::default())
  }
}

impl rosidl_runtime_rs::Message for EscEepromWrite {
  type RmwMsg = super::msg::rmw::EscEepromWrite;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        firmware: msg.firmware,
        index: msg.index,
        length: msg.length,
        data: msg.data,
        write_mask: msg.write_mask,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      firmware: msg.firmware,
      index: msg.index,
      length: msg.length,
        data: msg.data,
        write_mask: msg.write_mask,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      firmware: msg.firmware,
      index: msg.index,
      length: msg.length,
      data: msg.data,
      write_mask: msg.write_mask,
    }
  }
}


// Corresponds to px4_msgs__msg__EscReport

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EscReport {
    /// Time since system start
    pub timestamp: u64,

    /// Number of reported errors by ESC - if supported
    pub esc_errorcount: u32,

    /// Motor RPM, negative for reverse rotation - if supported
    pub esc_rpm: i32,

    /// Voltage measured from current ESC - if supported
    pub esc_voltage: f32,

    /// Current measured from current ESC - if supported
    pub esc_current: f32,

    /// Temperature measured from current ESC - if supported
    pub esc_temperature: f32,

    /// Temperature measured from current motor - if supported
    pub motor_temperature: i16,

    /// State of ESC - depend on Vendor
    pub esc_state: u8,

    /// Actuator output function (one of Motor1...MotorN)
    pub actuator_function: u8,

    /// Bitmask to indicate the internal ESC faults
    pub failures: u16,

    /// [@range 0,100] Applied power (negative values reserved)
    pub esc_power: i8,

}

impl EscReport {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTUATOR_FUNCTION_MOTOR1: u8 = 101;

    /// output_functions.yaml Motor.start + Motor.count - 1
    pub const ACTUATOR_FUNCTION_MOTOR_MAX: u8 = 112;

    /// (1 << 0)
    pub const FAILURE_OVER_CURRENT: u8 = 0;

    /// (1 << 1)
    pub const FAILURE_OVER_VOLTAGE: u8 = 1;

    /// (1 << 2)
    pub const FAILURE_MOTOR_OVER_TEMPERATURE: u8 = 2;

    /// (1 << 3)
    pub const FAILURE_OVER_RPM: u8 = 3;

    /// (1 << 4) Set if ESC received an inconsistent command (i.e out of boundaries)
    pub const FAILURE_INCONSISTENT_CMD: u8 = 4;

    /// (1 << 5)
    pub const FAILURE_MOTOR_STUCK: u8 = 5;

    /// (1 << 6)
    pub const FAILURE_GENERIC: u8 = 6;

    /// (1 << 7)
    pub const FAILURE_MOTOR_WARN_TEMPERATURE: u8 = 7;

    /// (1 << 8)
    pub const FAILURE_WARN_ESC_TEMPERATURE: u8 = 8;

    /// (1 << 9)
    pub const FAILURE_OVER_ESC_TEMPERATURE: u8 = 9;

    /// Counter - keep it as last element!
    pub const ESC_FAILURE_COUNT: u8 = 10;

}


impl Default for EscReport {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EscReport::default())
  }
}

impl rosidl_runtime_rs::Message for EscReport {
  type RmwMsg = super::msg::rmw::EscReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        esc_errorcount: msg.esc_errorcount,
        esc_rpm: msg.esc_rpm,
        esc_voltage: msg.esc_voltage,
        esc_current: msg.esc_current,
        esc_temperature: msg.esc_temperature,
        motor_temperature: msg.motor_temperature,
        esc_state: msg.esc_state,
        actuator_function: msg.actuator_function,
        failures: msg.failures,
        esc_power: msg.esc_power,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      esc_errorcount: msg.esc_errorcount,
      esc_rpm: msg.esc_rpm,
      esc_voltage: msg.esc_voltage,
      esc_current: msg.esc_current,
      esc_temperature: msg.esc_temperature,
      motor_temperature: msg.motor_temperature,
      esc_state: msg.esc_state,
      actuator_function: msg.actuator_function,
      failures: msg.failures,
      esc_power: msg.esc_power,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      esc_errorcount: msg.esc_errorcount,
      esc_rpm: msg.esc_rpm,
      esc_voltage: msg.esc_voltage,
      esc_current: msg.esc_current,
      esc_temperature: msg.esc_temperature,
      motor_temperature: msg.motor_temperature,
      esc_state: msg.esc_state,
      actuator_function: msg.actuator_function,
      failures: msg.failures,
      esc_power: msg.esc_power,
    }
  }
}


// Corresponds to px4_msgs__msg__EscStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EscStatus {
    /// Time since system start
    pub timestamp: u64,

    /// Incremented by the writing thread everytime new data is stored
    pub counter: u16,

    /// Number of connected ESCs
    pub esc_count: u8,

    /// How ESCs connected to the system
    pub esc_connectiontype: u8,

    /// Bitmask indicating which ESC is online/offline (in motor order)
    pub esc_online_flags: u16,

    /// esc_online_flags bit 0 : Set to 1 if Motor1 is online
    /// esc_online_flags bit 1 : Set to 1 if Motor2 is online
    /// esc_online_flags bit 2 : Set to 1 if Motor3 is online
    /// esc_online_flags bit 3 : Set to 1 if Motor4 is online
    /// esc_online_flags bit 4 : Set to 1 if Motor5 is online
    /// esc_online_flags bit 5 : Set to 1 if Motor6 is online
    /// esc_online_flags bit 6 : Set to 1 if Motor7 is online
    /// esc_online_flags bit 7 : Set to 1 if Motor8 is online
    /// esc_online_flags bit 8 : Set to 1 if Motor9 is online
    /// esc_online_flags bit 9 : Set to 1 if Motor10 is online
    /// esc_online_flags bit 10: Set to 1 if Motor11 is online
    /// esc_online_flags bit 11: Set to 1 if Motor12 is online
    /// [-] Bitmask indicating which ESC is armed (in motor order)
    pub esc_armed_flags: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub esc: [super::msg::EscReport; 12],

}

impl EscStatus {
    /// The number of ESCs supported (Motor1-Motor12)
    pub const CONNECTED_ESC_MAX: u8 = 12;

    /// Traditional PPM ESC
    pub const ESC_CONNECTION_TYPE_PPM: u8 = 0;

    /// Serial Bus connected ESC
    pub const ESC_CONNECTION_TYPE_SERIAL: u8 = 1;

    /// One Shot PPM
    pub const ESC_CONNECTION_TYPE_ONESHOT: u8 = 2;

    /// I2C
    pub const ESC_CONNECTION_TYPE_I2C: u8 = 3;

    /// CAN-Bus
    pub const ESC_CONNECTION_TYPE_CAN: u8 = 4;

    /// DShot
    pub const ESC_CONNECTION_TYPE_DSHOT: u8 = 5;

}


impl Default for EscStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EscStatus::default())
  }
}

impl rosidl_runtime_rs::Message for EscStatus {
  type RmwMsg = super::msg::rmw::EscStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        counter: msg.counter,
        esc_count: msg.esc_count,
        esc_connectiontype: msg.esc_connectiontype,
        esc_online_flags: msg.esc_online_flags,
        esc_armed_flags: msg.esc_armed_flags,
        esc: msg.esc
          .map(|elem| super::msg::EscReport::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      counter: msg.counter,
      esc_count: msg.esc_count,
      esc_connectiontype: msg.esc_connectiontype,
      esc_online_flags: msg.esc_online_flags,
      esc_armed_flags: msg.esc_armed_flags,
        esc: msg.esc
          .iter()
          .map(|elem| super::msg::EscReport::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      counter: msg.counter,
      esc_count: msg.esc_count,
      esc_connectiontype: msg.esc_connectiontype,
      esc_online_flags: msg.esc_online_flags,
      esc_armed_flags: msg.esc_armed_flags,
      esc: msg.esc
        .map(super::msg::EscReport::from_rmw_message),
    }
  }
}


// Corresponds to px4_msgs__msg__EstimatorAidSource1d

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EstimatorAidSource1d {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp of the raw data (microseconds)
    pub timestamp_sample: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimator_instance: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time_last_fuse: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub observation: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub observation_variance: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub innovation: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub innovation_filtered: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub innovation_variance: f32,

    /// normalized innovation squared
    pub test_ratio: f32,

    /// signed filtered test ratio
    pub test_ratio_filtered: f32,

    /// true if the observation has been rejected
    pub innovation_rejected: bool,

    /// true if the sample was successfully fused
    pub fused: bool,

}



impl Default for EstimatorAidSource1d {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EstimatorAidSource1d::default())
  }
}

impl rosidl_runtime_rs::Message for EstimatorAidSource1d {
  type RmwMsg = super::msg::rmw::EstimatorAidSource1d;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        estimator_instance: msg.estimator_instance,
        device_id: msg.device_id,
        time_last_fuse: msg.time_last_fuse,
        observation: msg.observation,
        observation_variance: msg.observation_variance,
        innovation: msg.innovation,
        innovation_filtered: msg.innovation_filtered,
        innovation_variance: msg.innovation_variance,
        test_ratio: msg.test_ratio,
        test_ratio_filtered: msg.test_ratio_filtered,
        innovation_rejected: msg.innovation_rejected,
        fused: msg.fused,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      estimator_instance: msg.estimator_instance,
      device_id: msg.device_id,
      time_last_fuse: msg.time_last_fuse,
      observation: msg.observation,
      observation_variance: msg.observation_variance,
      innovation: msg.innovation,
      innovation_filtered: msg.innovation_filtered,
      innovation_variance: msg.innovation_variance,
      test_ratio: msg.test_ratio,
      test_ratio_filtered: msg.test_ratio_filtered,
      innovation_rejected: msg.innovation_rejected,
      fused: msg.fused,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      estimator_instance: msg.estimator_instance,
      device_id: msg.device_id,
      time_last_fuse: msg.time_last_fuse,
      observation: msg.observation,
      observation_variance: msg.observation_variance,
      innovation: msg.innovation,
      innovation_filtered: msg.innovation_filtered,
      innovation_variance: msg.innovation_variance,
      test_ratio: msg.test_ratio,
      test_ratio_filtered: msg.test_ratio_filtered,
      innovation_rejected: msg.innovation_rejected,
      fused: msg.fused,
    }
  }
}


// Corresponds to px4_msgs__msg__EstimatorAidSource2d

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EstimatorAidSource2d {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp of the raw data (microseconds)
    pub timestamp_sample: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimator_instance: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time_last_fuse: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub observation: [f64; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub observation_variance: [f32; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub innovation: [f32; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub innovation_filtered: [f32; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub innovation_variance: [f32; 2],

    /// normalized innovation squared
    pub test_ratio: [f32; 2],

    /// signed filtered test ratio
    pub test_ratio_filtered: [f32; 2],

    /// true if the observation has been rejected
    pub innovation_rejected: bool,

    /// true if the sample was successfully fused
    pub fused: bool,

}



impl Default for EstimatorAidSource2d {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EstimatorAidSource2d::default())
  }
}

impl rosidl_runtime_rs::Message for EstimatorAidSource2d {
  type RmwMsg = super::msg::rmw::EstimatorAidSource2d;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        estimator_instance: msg.estimator_instance,
        device_id: msg.device_id,
        time_last_fuse: msg.time_last_fuse,
        observation: msg.observation,
        observation_variance: msg.observation_variance,
        innovation: msg.innovation,
        innovation_filtered: msg.innovation_filtered,
        innovation_variance: msg.innovation_variance,
        test_ratio: msg.test_ratio,
        test_ratio_filtered: msg.test_ratio_filtered,
        innovation_rejected: msg.innovation_rejected,
        fused: msg.fused,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      estimator_instance: msg.estimator_instance,
      device_id: msg.device_id,
      time_last_fuse: msg.time_last_fuse,
        observation: msg.observation,
        observation_variance: msg.observation_variance,
        innovation: msg.innovation,
        innovation_filtered: msg.innovation_filtered,
        innovation_variance: msg.innovation_variance,
        test_ratio: msg.test_ratio,
        test_ratio_filtered: msg.test_ratio_filtered,
      innovation_rejected: msg.innovation_rejected,
      fused: msg.fused,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      estimator_instance: msg.estimator_instance,
      device_id: msg.device_id,
      time_last_fuse: msg.time_last_fuse,
      observation: msg.observation,
      observation_variance: msg.observation_variance,
      innovation: msg.innovation,
      innovation_filtered: msg.innovation_filtered,
      innovation_variance: msg.innovation_variance,
      test_ratio: msg.test_ratio,
      test_ratio_filtered: msg.test_ratio_filtered,
      innovation_rejected: msg.innovation_rejected,
      fused: msg.fused,
    }
  }
}


// Corresponds to px4_msgs__msg__EstimatorAidSource3d

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EstimatorAidSource3d {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp of the raw data (microseconds)
    pub timestamp_sample: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimator_instance: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time_last_fuse: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub observation: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub observation_variance: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub innovation: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub innovation_filtered: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub innovation_variance: [f32; 3],

    /// normalized innovation squared
    pub test_ratio: [f32; 3],

    /// signed filtered test ratio
    pub test_ratio_filtered: [f32; 3],

    /// true if the observation has been rejected
    pub innovation_rejected: bool,

    /// true if the sample was successfully fused
    pub fused: bool,

}



impl Default for EstimatorAidSource3d {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EstimatorAidSource3d::default())
  }
}

impl rosidl_runtime_rs::Message for EstimatorAidSource3d {
  type RmwMsg = super::msg::rmw::EstimatorAidSource3d;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        estimator_instance: msg.estimator_instance,
        device_id: msg.device_id,
        time_last_fuse: msg.time_last_fuse,
        observation: msg.observation,
        observation_variance: msg.observation_variance,
        innovation: msg.innovation,
        innovation_filtered: msg.innovation_filtered,
        innovation_variance: msg.innovation_variance,
        test_ratio: msg.test_ratio,
        test_ratio_filtered: msg.test_ratio_filtered,
        innovation_rejected: msg.innovation_rejected,
        fused: msg.fused,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      estimator_instance: msg.estimator_instance,
      device_id: msg.device_id,
      time_last_fuse: msg.time_last_fuse,
        observation: msg.observation,
        observation_variance: msg.observation_variance,
        innovation: msg.innovation,
        innovation_filtered: msg.innovation_filtered,
        innovation_variance: msg.innovation_variance,
        test_ratio: msg.test_ratio,
        test_ratio_filtered: msg.test_ratio_filtered,
      innovation_rejected: msg.innovation_rejected,
      fused: msg.fused,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      estimator_instance: msg.estimator_instance,
      device_id: msg.device_id,
      time_last_fuse: msg.time_last_fuse,
      observation: msg.observation,
      observation_variance: msg.observation_variance,
      innovation: msg.innovation,
      innovation_filtered: msg.innovation_filtered,
      innovation_variance: msg.innovation_variance,
      test_ratio: msg.test_ratio,
      test_ratio_filtered: msg.test_ratio_filtered,
      innovation_rejected: msg.innovation_rejected,
      fused: msg.fused,
    }
  }
}


// Corresponds to px4_msgs__msg__EstimatorBias

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EstimatorBias {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp of the raw data (microseconds)
    pub timestamp_sample: u64,

    /// unique device ID for the sensor that does not change between power cycles
    pub device_id: u32,

    /// estimated barometric altitude bias (m)
    pub bias: f32,

    /// estimated barometric altitude bias variance (m^2)
    pub bias_var: f32,

    /// innovation of the last measurement fusion (m)
    pub innov: f32,

    /// innovation variance of the last measurement fusion (m^2)
    pub innov_var: f32,

    /// normalized innovation squared test ratio
    pub innov_test_ratio: f32,

}



impl Default for EstimatorBias {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EstimatorBias::default())
  }
}

impl rosidl_runtime_rs::Message for EstimatorBias {
  type RmwMsg = super::msg::rmw::EstimatorBias;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        device_id: msg.device_id,
        bias: msg.bias,
        bias_var: msg.bias_var,
        innov: msg.innov,
        innov_var: msg.innov_var,
        innov_test_ratio: msg.innov_test_ratio,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      bias: msg.bias,
      bias_var: msg.bias_var,
      innov: msg.innov,
      innov_var: msg.innov_var,
      innov_test_ratio: msg.innov_test_ratio,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      bias: msg.bias,
      bias_var: msg.bias_var,
      innov: msg.innov,
      innov_var: msg.innov_var,
      innov_test_ratio: msg.innov_test_ratio,
    }
  }
}


// Corresponds to px4_msgs__msg__EstimatorBias3d

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EstimatorBias3d {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp of the raw data (microseconds)
    pub timestamp_sample: u64,

    /// unique device ID for the sensor that does not change between power cycles
    pub device_id: u32,

    /// estimated barometric altitude bias (m)
    pub bias: [f32; 3],

    /// estimated barometric altitude bias variance (m^2)
    pub bias_var: [f32; 3],

    /// innovation of the last measurement fusion (m)
    pub innov: [f32; 3],

    /// innovation variance of the last measurement fusion (m^2)
    pub innov_var: [f32; 3],

    /// normalized innovation squared test ratio
    pub innov_test_ratio: [f32; 3],

}



impl Default for EstimatorBias3d {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EstimatorBias3d::default())
  }
}

impl rosidl_runtime_rs::Message for EstimatorBias3d {
  type RmwMsg = super::msg::rmw::EstimatorBias3d;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        device_id: msg.device_id,
        bias: msg.bias,
        bias_var: msg.bias_var,
        innov: msg.innov,
        innov_var: msg.innov_var,
        innov_test_ratio: msg.innov_test_ratio,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
        bias: msg.bias,
        bias_var: msg.bias_var,
        innov: msg.innov,
        innov_var: msg.innov_var,
        innov_test_ratio: msg.innov_test_ratio,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      bias: msg.bias,
      bias_var: msg.bias_var,
      innov: msg.innov,
      innov_var: msg.innov_var,
      innov_test_ratio: msg.innov_test_ratio,
    }
  }
}


// Corresponds to px4_msgs__msg__EstimatorEventFlags

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EstimatorEventFlags {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp of the raw data (microseconds)
    pub timestamp_sample: u64,

    /// information events
    /// number of information event changes
    pub information_event_changes: u32,

    /// 0 - true when gps quality checks are passing passed
    pub gps_checks_passed: bool,

    /// 1 - true when the velocity states are reset to the gps measurement
    pub reset_vel_to_gps: bool,

    /// 2 - true when the velocity states are reset using the optical flow measurement
    pub reset_vel_to_flow: bool,

    /// 3 - true when the velocity states are reset to the vision system measurement
    pub reset_vel_to_vision: bool,

    /// 4 - true when the velocity states are reset to zero
    pub reset_vel_to_zero: bool,

    /// 5 - true when the position states are reset to the last known position
    pub reset_pos_to_last_known: bool,

    /// 6 - true when the position states are reset to the gps measurement
    pub reset_pos_to_gps: bool,

    /// 7 - true when the position states are reset to the vision system measurement
    pub reset_pos_to_vision: bool,

    /// 8 - true when the filter starts using gps measurements to correct the state estimates
    pub starting_gps_fusion: bool,

    /// 9 - true when the filter starts using vision system position measurements to correct the state estimates
    pub starting_vision_pos_fusion: bool,

    /// 10 - true when the filter starts using vision system velocity measurements to correct the state estimates
    pub starting_vision_vel_fusion: bool,

    /// 11 - true when the filter starts using vision system yaw  measurements to correct the state estimates
    pub starting_vision_yaw_fusion: bool,

    /// 12 - true when the filter resets the yaw to an estimate derived from IMU and GPS data
    pub yaw_aligned_to_imu_gps: bool,

    /// 13 - true when the vertical position state is reset to the baro measurement
    pub reset_hgt_to_baro: bool,

    /// 14 - true when the vertical position state is reset to the gps measurement
    pub reset_hgt_to_gps: bool,

    /// 15 - true when the vertical position state is reset to the rng measurement
    pub reset_hgt_to_rng: bool,

    /// 16 - true when the vertical position state is reset to the ev measurement
    pub reset_hgt_to_ev: bool,

}



impl Default for EstimatorEventFlags {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EstimatorEventFlags::default())
  }
}

impl rosidl_runtime_rs::Message for EstimatorEventFlags {
  type RmwMsg = super::msg::rmw::EstimatorEventFlags;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        information_event_changes: msg.information_event_changes,
        gps_checks_passed: msg.gps_checks_passed,
        reset_vel_to_gps: msg.reset_vel_to_gps,
        reset_vel_to_flow: msg.reset_vel_to_flow,
        reset_vel_to_vision: msg.reset_vel_to_vision,
        reset_vel_to_zero: msg.reset_vel_to_zero,
        reset_pos_to_last_known: msg.reset_pos_to_last_known,
        reset_pos_to_gps: msg.reset_pos_to_gps,
        reset_pos_to_vision: msg.reset_pos_to_vision,
        starting_gps_fusion: msg.starting_gps_fusion,
        starting_vision_pos_fusion: msg.starting_vision_pos_fusion,
        starting_vision_vel_fusion: msg.starting_vision_vel_fusion,
        starting_vision_yaw_fusion: msg.starting_vision_yaw_fusion,
        yaw_aligned_to_imu_gps: msg.yaw_aligned_to_imu_gps,
        reset_hgt_to_baro: msg.reset_hgt_to_baro,
        reset_hgt_to_gps: msg.reset_hgt_to_gps,
        reset_hgt_to_rng: msg.reset_hgt_to_rng,
        reset_hgt_to_ev: msg.reset_hgt_to_ev,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      information_event_changes: msg.information_event_changes,
      gps_checks_passed: msg.gps_checks_passed,
      reset_vel_to_gps: msg.reset_vel_to_gps,
      reset_vel_to_flow: msg.reset_vel_to_flow,
      reset_vel_to_vision: msg.reset_vel_to_vision,
      reset_vel_to_zero: msg.reset_vel_to_zero,
      reset_pos_to_last_known: msg.reset_pos_to_last_known,
      reset_pos_to_gps: msg.reset_pos_to_gps,
      reset_pos_to_vision: msg.reset_pos_to_vision,
      starting_gps_fusion: msg.starting_gps_fusion,
      starting_vision_pos_fusion: msg.starting_vision_pos_fusion,
      starting_vision_vel_fusion: msg.starting_vision_vel_fusion,
      starting_vision_yaw_fusion: msg.starting_vision_yaw_fusion,
      yaw_aligned_to_imu_gps: msg.yaw_aligned_to_imu_gps,
      reset_hgt_to_baro: msg.reset_hgt_to_baro,
      reset_hgt_to_gps: msg.reset_hgt_to_gps,
      reset_hgt_to_rng: msg.reset_hgt_to_rng,
      reset_hgt_to_ev: msg.reset_hgt_to_ev,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      information_event_changes: msg.information_event_changes,
      gps_checks_passed: msg.gps_checks_passed,
      reset_vel_to_gps: msg.reset_vel_to_gps,
      reset_vel_to_flow: msg.reset_vel_to_flow,
      reset_vel_to_vision: msg.reset_vel_to_vision,
      reset_vel_to_zero: msg.reset_vel_to_zero,
      reset_pos_to_last_known: msg.reset_pos_to_last_known,
      reset_pos_to_gps: msg.reset_pos_to_gps,
      reset_pos_to_vision: msg.reset_pos_to_vision,
      starting_gps_fusion: msg.starting_gps_fusion,
      starting_vision_pos_fusion: msg.starting_vision_pos_fusion,
      starting_vision_vel_fusion: msg.starting_vision_vel_fusion,
      starting_vision_yaw_fusion: msg.starting_vision_yaw_fusion,
      yaw_aligned_to_imu_gps: msg.yaw_aligned_to_imu_gps,
      reset_hgt_to_baro: msg.reset_hgt_to_baro,
      reset_hgt_to_gps: msg.reset_hgt_to_gps,
      reset_hgt_to_rng: msg.reset_hgt_to_rng,
      reset_hgt_to_ev: msg.reset_hgt_to_ev,
    }
  }
}


// Corresponds to px4_msgs__msg__EstimatorFusionControl

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EstimatorFusionControl {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// sensor intended for fusion (enabled via EKF2_SENS_EN AND CTRL param != disabled)
    pub gps_intended: [bool; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub of_intended: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ev_intended: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub agp_intended: [bool; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub baro_intended: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rng_intended: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mag_intended: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub aspd_intended: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rngbcn_intended: bool,

    /// whether the estimator is actively fusing data from each source
    pub gps_active: [bool; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub of_active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ev_active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub agp_active: [bool; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub baro_active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rng_active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mag_active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub aspd_active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rngbcn_active: bool,

}



impl Default for EstimatorFusionControl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EstimatorFusionControl::default())
  }
}

impl rosidl_runtime_rs::Message for EstimatorFusionControl {
  type RmwMsg = super::msg::rmw::EstimatorFusionControl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        gps_intended: msg.gps_intended,
        of_intended: msg.of_intended,
        ev_intended: msg.ev_intended,
        agp_intended: msg.agp_intended,
        baro_intended: msg.baro_intended,
        rng_intended: msg.rng_intended,
        mag_intended: msg.mag_intended,
        aspd_intended: msg.aspd_intended,
        rngbcn_intended: msg.rngbcn_intended,
        gps_active: msg.gps_active,
        of_active: msg.of_active,
        ev_active: msg.ev_active,
        agp_active: msg.agp_active,
        baro_active: msg.baro_active,
        rng_active: msg.rng_active,
        mag_active: msg.mag_active,
        aspd_active: msg.aspd_active,
        rngbcn_active: msg.rngbcn_active,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        gps_intended: msg.gps_intended,
      of_intended: msg.of_intended,
      ev_intended: msg.ev_intended,
        agp_intended: msg.agp_intended,
      baro_intended: msg.baro_intended,
      rng_intended: msg.rng_intended,
      mag_intended: msg.mag_intended,
      aspd_intended: msg.aspd_intended,
      rngbcn_intended: msg.rngbcn_intended,
        gps_active: msg.gps_active,
      of_active: msg.of_active,
      ev_active: msg.ev_active,
        agp_active: msg.agp_active,
      baro_active: msg.baro_active,
      rng_active: msg.rng_active,
      mag_active: msg.mag_active,
      aspd_active: msg.aspd_active,
      rngbcn_active: msg.rngbcn_active,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      gps_intended: msg.gps_intended,
      of_intended: msg.of_intended,
      ev_intended: msg.ev_intended,
      agp_intended: msg.agp_intended,
      baro_intended: msg.baro_intended,
      rng_intended: msg.rng_intended,
      mag_intended: msg.mag_intended,
      aspd_intended: msg.aspd_intended,
      rngbcn_intended: msg.rngbcn_intended,
      gps_active: msg.gps_active,
      of_active: msg.of_active,
      ev_active: msg.ev_active,
      agp_active: msg.agp_active,
      baro_active: msg.baro_active,
      rng_active: msg.rng_active,
      mag_active: msg.mag_active,
      aspd_active: msg.aspd_active,
      rngbcn_active: msg.rngbcn_active,
    }
  }
}


// Corresponds to px4_msgs__msg__EstimatorGpsStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EstimatorGpsStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp of the raw data (microseconds)
    pub timestamp_sample: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub checks_passed: bool,

    /// 0 : insufficient fix type (no 3D solution)
    pub check_fail_gps_fix: bool,

    /// 1 : minimum required sat count fail
    pub check_fail_min_sat_count: bool,

    /// 2 : maximum allowed PDOP fail
    pub check_fail_max_pdop: bool,

    /// 3 : maximum allowed horizontal position error fail
    pub check_fail_max_horz_err: bool,

    /// 4 : maximum allowed vertical position error fail
    pub check_fail_max_vert_err: bool,

    /// 5 : maximum allowed speed error fail
    pub check_fail_max_spd_err: bool,

    /// 6 : maximum allowed horizontal position drift fail - requires stationary vehicle
    pub check_fail_max_horz_drift: bool,

    /// 7 : maximum allowed vertical position drift fail - requires stationary vehicle
    pub check_fail_max_vert_drift: bool,

    /// 8 : maximum allowed horizontal speed fail - requires stationary vehicle
    pub check_fail_max_horz_spd_err: bool,

    /// 9 : maximum allowed vertical velocity discrepancy fail
    pub check_fail_max_vert_spd_err: bool,

    /// 10 : GPS signal is spoofed
    pub check_fail_spoofed_gps: bool,

    /// Horizontal position rate magnitude (m/s)
    pub position_drift_rate_horizontal_m_s: f32,

    /// Vertical position rate magnitude (m/s)
    pub position_drift_rate_vertical_m_s: f32,

    /// Filtered horizontal velocity magnitude (m/s)
    pub filtered_horizontal_speed_m_s: f32,

}



impl Default for EstimatorGpsStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EstimatorGpsStatus::default())
  }
}

impl rosidl_runtime_rs::Message for EstimatorGpsStatus {
  type RmwMsg = super::msg::rmw::EstimatorGpsStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        checks_passed: msg.checks_passed,
        check_fail_gps_fix: msg.check_fail_gps_fix,
        check_fail_min_sat_count: msg.check_fail_min_sat_count,
        check_fail_max_pdop: msg.check_fail_max_pdop,
        check_fail_max_horz_err: msg.check_fail_max_horz_err,
        check_fail_max_vert_err: msg.check_fail_max_vert_err,
        check_fail_max_spd_err: msg.check_fail_max_spd_err,
        check_fail_max_horz_drift: msg.check_fail_max_horz_drift,
        check_fail_max_vert_drift: msg.check_fail_max_vert_drift,
        check_fail_max_horz_spd_err: msg.check_fail_max_horz_spd_err,
        check_fail_max_vert_spd_err: msg.check_fail_max_vert_spd_err,
        check_fail_spoofed_gps: msg.check_fail_spoofed_gps,
        position_drift_rate_horizontal_m_s: msg.position_drift_rate_horizontal_m_s,
        position_drift_rate_vertical_m_s: msg.position_drift_rate_vertical_m_s,
        filtered_horizontal_speed_m_s: msg.filtered_horizontal_speed_m_s,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      checks_passed: msg.checks_passed,
      check_fail_gps_fix: msg.check_fail_gps_fix,
      check_fail_min_sat_count: msg.check_fail_min_sat_count,
      check_fail_max_pdop: msg.check_fail_max_pdop,
      check_fail_max_horz_err: msg.check_fail_max_horz_err,
      check_fail_max_vert_err: msg.check_fail_max_vert_err,
      check_fail_max_spd_err: msg.check_fail_max_spd_err,
      check_fail_max_horz_drift: msg.check_fail_max_horz_drift,
      check_fail_max_vert_drift: msg.check_fail_max_vert_drift,
      check_fail_max_horz_spd_err: msg.check_fail_max_horz_spd_err,
      check_fail_max_vert_spd_err: msg.check_fail_max_vert_spd_err,
      check_fail_spoofed_gps: msg.check_fail_spoofed_gps,
      position_drift_rate_horizontal_m_s: msg.position_drift_rate_horizontal_m_s,
      position_drift_rate_vertical_m_s: msg.position_drift_rate_vertical_m_s,
      filtered_horizontal_speed_m_s: msg.filtered_horizontal_speed_m_s,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      checks_passed: msg.checks_passed,
      check_fail_gps_fix: msg.check_fail_gps_fix,
      check_fail_min_sat_count: msg.check_fail_min_sat_count,
      check_fail_max_pdop: msg.check_fail_max_pdop,
      check_fail_max_horz_err: msg.check_fail_max_horz_err,
      check_fail_max_vert_err: msg.check_fail_max_vert_err,
      check_fail_max_spd_err: msg.check_fail_max_spd_err,
      check_fail_max_horz_drift: msg.check_fail_max_horz_drift,
      check_fail_max_vert_drift: msg.check_fail_max_vert_drift,
      check_fail_max_horz_spd_err: msg.check_fail_max_horz_spd_err,
      check_fail_max_vert_spd_err: msg.check_fail_max_vert_spd_err,
      check_fail_spoofed_gps: msg.check_fail_spoofed_gps,
      position_drift_rate_horizontal_m_s: msg.position_drift_rate_horizontal_m_s,
      position_drift_rate_vertical_m_s: msg.position_drift_rate_vertical_m_s,
      filtered_horizontal_speed_m_s: msg.filtered_horizontal_speed_m_s,
    }
  }
}


// Corresponds to px4_msgs__msg__EstimatorInnovations

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EstimatorInnovations {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp of the raw data (microseconds)
    pub timestamp_sample: u64,

    /// GPS
    /// horizontal GPS velocity innovation (m/sec) and innovation variance ((m/sec)**2)
    pub gps_hvel: [f32; 2],

    /// vertical GPS velocity innovation (m/sec) and innovation variance ((m/sec)**2)
    pub gps_vvel: f32,

    /// horizontal GPS position innovation (m) and innovation variance (m**2)
    pub gps_hpos: [f32; 2],

    /// vertical GPS position innovation (m) and innovation variance (m**2)
    pub gps_vpos: f32,

    /// External Vision
    /// horizontal external vision velocity innovation (m/sec) and innovation variance ((m/sec)**2)
    pub ev_hvel: [f32; 2],

    /// vertical external vision velocity innovation (m/sec) and innovation variance ((m/sec)**2)
    pub ev_vvel: f32,

    /// horizontal external vision position innovation (m) and innovation variance (m**2)
    pub ev_hpos: [f32; 2],

    /// vertical external vision position innovation (m) and innovation variance (m**2)
    pub ev_vpos: f32,

    /// Height sensors
    /// range sensor height innovation (m) and innovation variance (m**2)
    pub rng_vpos: f32,

    /// barometer height innovation (m) and innovation variance (m**2)
    pub baro_vpos: f32,

    /// Auxiliary velocity
    /// horizontal auxiliary velocity innovation from landing target measurement (m/sec) and innovation variance ((m/sec)**2)
    pub aux_hvel: [f32; 2],

    /// Optical flow
    /// flow innvoation (rad/sec) and innovation variance ((rad/sec)**2)
    pub flow: [f32; 2],

    /// Various
    /// heading innovation (rad) and innovation variance (rad**2)
    pub heading: f32,

    /// earth magnetic field innovation (Gauss) and innovation variance (Gauss**2)
    pub mag_field: [f32; 3],

    /// gravity innovation from accelerometerr vector (m/s**2)
    pub gravity: [f32; 3],

    /// drag specific force innovation (m/sec**2) and innovation variance ((m/sec)**2)
    pub drag: [f32; 2],

    /// airspeed innovation (m/sec) and innovation variance ((m/sec)**2)
    pub airspeed: f32,

    /// synthetic sideslip innovation (rad) and innovation variance (rad**2)
    pub beta: f32,

    /// height of ground innovation (m) and innovation variance (m**2)
    pub hagl: f32,

    /// height of ground rate innovation (m/s) and innovation variance ((m/s)**2)
    pub hagl_rate: f32,

}



impl Default for EstimatorInnovations {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EstimatorInnovations::default())
  }
}

impl rosidl_runtime_rs::Message for EstimatorInnovations {
  type RmwMsg = super::msg::rmw::EstimatorInnovations;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        gps_hvel: msg.gps_hvel,
        gps_vvel: msg.gps_vvel,
        gps_hpos: msg.gps_hpos,
        gps_vpos: msg.gps_vpos,
        ev_hvel: msg.ev_hvel,
        ev_vvel: msg.ev_vvel,
        ev_hpos: msg.ev_hpos,
        ev_vpos: msg.ev_vpos,
        rng_vpos: msg.rng_vpos,
        baro_vpos: msg.baro_vpos,
        aux_hvel: msg.aux_hvel,
        flow: msg.flow,
        heading: msg.heading,
        mag_field: msg.mag_field,
        gravity: msg.gravity,
        drag: msg.drag,
        airspeed: msg.airspeed,
        beta: msg.beta,
        hagl: msg.hagl,
        hagl_rate: msg.hagl_rate,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
        gps_hvel: msg.gps_hvel,
      gps_vvel: msg.gps_vvel,
        gps_hpos: msg.gps_hpos,
      gps_vpos: msg.gps_vpos,
        ev_hvel: msg.ev_hvel,
      ev_vvel: msg.ev_vvel,
        ev_hpos: msg.ev_hpos,
      ev_vpos: msg.ev_vpos,
      rng_vpos: msg.rng_vpos,
      baro_vpos: msg.baro_vpos,
        aux_hvel: msg.aux_hvel,
        flow: msg.flow,
      heading: msg.heading,
        mag_field: msg.mag_field,
        gravity: msg.gravity,
        drag: msg.drag,
      airspeed: msg.airspeed,
      beta: msg.beta,
      hagl: msg.hagl,
      hagl_rate: msg.hagl_rate,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      gps_hvel: msg.gps_hvel,
      gps_vvel: msg.gps_vvel,
      gps_hpos: msg.gps_hpos,
      gps_vpos: msg.gps_vpos,
      ev_hvel: msg.ev_hvel,
      ev_vvel: msg.ev_vvel,
      ev_hpos: msg.ev_hpos,
      ev_vpos: msg.ev_vpos,
      rng_vpos: msg.rng_vpos,
      baro_vpos: msg.baro_vpos,
      aux_hvel: msg.aux_hvel,
      flow: msg.flow,
      heading: msg.heading,
      mag_field: msg.mag_field,
      gravity: msg.gravity,
      drag: msg.drag,
      airspeed: msg.airspeed,
      beta: msg.beta,
      hagl: msg.hagl,
      hagl_rate: msg.hagl_rate,
    }
  }
}


// Corresponds to px4_msgs__msg__EstimatorSelectorStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EstimatorSelectorStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub primary_instance: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub instances_available: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub instance_changed_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_instance_change: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub accel_device_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub baro_device_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_device_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mag_device_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub combined_test_ratio: [f32; 9],


    // This member is not documented.
    #[allow(missing_docs)]
    pub relative_test_ratio: [f32; 9],


    // This member is not documented.
    #[allow(missing_docs)]
    pub healthy: [bool; 9],


    // This member is not documented.
    #[allow(missing_docs)]
    pub accumulated_gyro_error: [f32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub accumulated_accel_error: [f32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_fault_detected: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub accel_fault_detected: bool,

}



impl Default for EstimatorSelectorStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EstimatorSelectorStatus::default())
  }
}

impl rosidl_runtime_rs::Message for EstimatorSelectorStatus {
  type RmwMsg = super::msg::rmw::EstimatorSelectorStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        primary_instance: msg.primary_instance,
        instances_available: msg.instances_available,
        instance_changed_count: msg.instance_changed_count,
        last_instance_change: msg.last_instance_change,
        accel_device_id: msg.accel_device_id,
        baro_device_id: msg.baro_device_id,
        gyro_device_id: msg.gyro_device_id,
        mag_device_id: msg.mag_device_id,
        combined_test_ratio: msg.combined_test_ratio,
        relative_test_ratio: msg.relative_test_ratio,
        healthy: msg.healthy,
        accumulated_gyro_error: msg.accumulated_gyro_error,
        accumulated_accel_error: msg.accumulated_accel_error,
        gyro_fault_detected: msg.gyro_fault_detected,
        accel_fault_detected: msg.accel_fault_detected,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      primary_instance: msg.primary_instance,
      instances_available: msg.instances_available,
      instance_changed_count: msg.instance_changed_count,
      last_instance_change: msg.last_instance_change,
      accel_device_id: msg.accel_device_id,
      baro_device_id: msg.baro_device_id,
      gyro_device_id: msg.gyro_device_id,
      mag_device_id: msg.mag_device_id,
        combined_test_ratio: msg.combined_test_ratio,
        relative_test_ratio: msg.relative_test_ratio,
        healthy: msg.healthy,
        accumulated_gyro_error: msg.accumulated_gyro_error,
        accumulated_accel_error: msg.accumulated_accel_error,
      gyro_fault_detected: msg.gyro_fault_detected,
      accel_fault_detected: msg.accel_fault_detected,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      primary_instance: msg.primary_instance,
      instances_available: msg.instances_available,
      instance_changed_count: msg.instance_changed_count,
      last_instance_change: msg.last_instance_change,
      accel_device_id: msg.accel_device_id,
      baro_device_id: msg.baro_device_id,
      gyro_device_id: msg.gyro_device_id,
      mag_device_id: msg.mag_device_id,
      combined_test_ratio: msg.combined_test_ratio,
      relative_test_ratio: msg.relative_test_ratio,
      healthy: msg.healthy,
      accumulated_gyro_error: msg.accumulated_gyro_error,
      accumulated_accel_error: msg.accumulated_accel_error,
      gyro_fault_detected: msg.gyro_fault_detected,
      accel_fault_detected: msg.accel_fault_detected,
    }
  }
}


// Corresponds to px4_msgs__msg__EstimatorSensorBias
/// Sensor readings and in-run biases in SI-unit form. Sensor readings are compensated for static offsets,
/// scale errors, in-run bias and thermal drift (if thermal compensation is enabled and available).

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EstimatorSensorBias {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp of the raw data (microseconds)
    pub timestamp_sample: u64,

    /// In-run bias estimates (subtract from uncorrected data)
    /// unique device ID for the sensor that does not change between power cycles
    pub gyro_device_id: u32,

    /// gyroscope in-run bias in body frame (rad/s)
    pub gyro_bias: [f32; 3],

    /// magnitude of maximum gyroscope in-run bias in body frame (rad/s)
    pub gyro_bias_limit: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_bias_variance: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_bias_valid: bool,

    /// true when the gyro bias estimate is stable enough to use for calibration
    pub gyro_bias_stable: bool,

    /// unique device ID for the sensor that does not change between power cycles
    pub accel_device_id: u32,

    /// accelerometer in-run bias in body frame (m/s^2)
    pub accel_bias: [f32; 3],

    /// magnitude of maximum accelerometer in-run bias in body frame (m/s^2)
    pub accel_bias_limit: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub accel_bias_variance: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub accel_bias_valid: bool,

    /// true when the accel bias estimate is stable enough to use for calibration
    pub accel_bias_stable: bool,

    /// unique device ID for the sensor that does not change between power cycles
    pub mag_device_id: u32,

    /// magnetometer in-run bias in body frame (Gauss)
    pub mag_bias: [f32; 3],

    /// magnitude of maximum magnetometer in-run bias in body frame (Gauss)
    pub mag_bias_limit: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mag_bias_variance: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub mag_bias_valid: bool,

    /// true when the mag bias estimate is stable enough to use for calibration
    pub mag_bias_stable: bool,

}



impl Default for EstimatorSensorBias {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EstimatorSensorBias::default())
  }
}

impl rosidl_runtime_rs::Message for EstimatorSensorBias {
  type RmwMsg = super::msg::rmw::EstimatorSensorBias;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        gyro_device_id: msg.gyro_device_id,
        gyro_bias: msg.gyro_bias,
        gyro_bias_limit: msg.gyro_bias_limit,
        gyro_bias_variance: msg.gyro_bias_variance,
        gyro_bias_valid: msg.gyro_bias_valid,
        gyro_bias_stable: msg.gyro_bias_stable,
        accel_device_id: msg.accel_device_id,
        accel_bias: msg.accel_bias,
        accel_bias_limit: msg.accel_bias_limit,
        accel_bias_variance: msg.accel_bias_variance,
        accel_bias_valid: msg.accel_bias_valid,
        accel_bias_stable: msg.accel_bias_stable,
        mag_device_id: msg.mag_device_id,
        mag_bias: msg.mag_bias,
        mag_bias_limit: msg.mag_bias_limit,
        mag_bias_variance: msg.mag_bias_variance,
        mag_bias_valid: msg.mag_bias_valid,
        mag_bias_stable: msg.mag_bias_stable,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      gyro_device_id: msg.gyro_device_id,
        gyro_bias: msg.gyro_bias,
      gyro_bias_limit: msg.gyro_bias_limit,
        gyro_bias_variance: msg.gyro_bias_variance,
      gyro_bias_valid: msg.gyro_bias_valid,
      gyro_bias_stable: msg.gyro_bias_stable,
      accel_device_id: msg.accel_device_id,
        accel_bias: msg.accel_bias,
      accel_bias_limit: msg.accel_bias_limit,
        accel_bias_variance: msg.accel_bias_variance,
      accel_bias_valid: msg.accel_bias_valid,
      accel_bias_stable: msg.accel_bias_stable,
      mag_device_id: msg.mag_device_id,
        mag_bias: msg.mag_bias,
      mag_bias_limit: msg.mag_bias_limit,
        mag_bias_variance: msg.mag_bias_variance,
      mag_bias_valid: msg.mag_bias_valid,
      mag_bias_stable: msg.mag_bias_stable,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      gyro_device_id: msg.gyro_device_id,
      gyro_bias: msg.gyro_bias,
      gyro_bias_limit: msg.gyro_bias_limit,
      gyro_bias_variance: msg.gyro_bias_variance,
      gyro_bias_valid: msg.gyro_bias_valid,
      gyro_bias_stable: msg.gyro_bias_stable,
      accel_device_id: msg.accel_device_id,
      accel_bias: msg.accel_bias,
      accel_bias_limit: msg.accel_bias_limit,
      accel_bias_variance: msg.accel_bias_variance,
      accel_bias_valid: msg.accel_bias_valid,
      accel_bias_stable: msg.accel_bias_stable,
      mag_device_id: msg.mag_device_id,
      mag_bias: msg.mag_bias,
      mag_bias_limit: msg.mag_bias_limit,
      mag_bias_variance: msg.mag_bias_variance,
      mag_bias_valid: msg.mag_bias_valid,
      mag_bias_stable: msg.mag_bias_stable,
    }
  }
}


// Corresponds to px4_msgs__msg__EstimatorStates

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EstimatorStates {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp of the raw data (microseconds)
    pub timestamp_sample: u64,

    /// Internal filter states
    pub states: [f32; 25],

    /// Number of states effectively used
    pub n_states: u8,

    /// Diagonal Elements of Covariance Matrix
    pub covariances: [f32; 24],

}



impl Default for EstimatorStates {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EstimatorStates::default())
  }
}

impl rosidl_runtime_rs::Message for EstimatorStates {
  type RmwMsg = super::msg::rmw::EstimatorStates;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        states: msg.states,
        n_states: msg.n_states,
        covariances: msg.covariances,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
        states: msg.states,
      n_states: msg.n_states,
        covariances: msg.covariances,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      states: msg.states,
      n_states: msg.n_states,
      covariances: msg.covariances,
    }
  }
}


// Corresponds to px4_msgs__msg__EstimatorStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EstimatorStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp of the raw data (microseconds)
    pub timestamp_sample: u64,

    /// return a vector containing the output predictor angular, velocity and position tracking error magnitudes (rad), (m/s), (m)
    pub output_tracking_error: [f32; 3],

    /// Bitmask to indicate status of GPS checks - see definition below
    pub gps_check_fail_flags: u16,

    /// Bitmask to indicate EKF logic state
    pub control_mode_flags: u64,

    /// Bitmask to indicate EKF internal faults
    pub filter_fault_flags: u32,

    /// 0 - true if the fusion of the magnetometer X-axis has encountered a numerical error
    /// 1 - true if the fusion of the magnetometer Y-axis has encountered a numerical error
    /// 2 - true if the fusion of the magnetometer Z-axis has encountered a numerical error
    /// 3 - true if the fusion of the magnetic heading has encountered a numerical error
    /// 4 - true if the fusion of the magnetic declination has encountered a numerical error
    /// 5 - true if fusion of the airspeed has encountered a numerical error
    /// 6 - true if fusion of the synthetic sideslip constraint has encountered a numerical error
    /// 7 - true if fusion of the optical flow X axis has encountered a numerical error
    /// 8 - true if fusion of the optical flow Y axis has encountered a numerical error
    /// 9 - true if fusion of the North velocity has encountered a numerical error
    /// 10 - true if fusion of the East velocity has encountered a numerical error
    /// 11 - true if fusion of the Down velocity has encountered a numerical error
    /// 12 - true if fusion of the North position has encountered a numerical error
    /// 13 - true if fusion of the East position has encountered a numerical error
    /// 14 - true if fusion of the Down position has encountered a numerical error
    /// 15 - true if bad delta velocity bias estimates have been detected
    /// 16 - true if bad vertical accelerometer data has been detected
    /// 17 - true if delta velocity data contains clipping (asymmetric railing)
    /// 1-Sigma estimated horizontal position accuracy relative to the estimators origin (m)
    pub pos_horiz_accuracy: f32,

    /// 1-Sigma estimated vertical position accuracy relative to the estimators origin (m)
    pub pos_vert_accuracy: f32,

    /// low-pass filtered ratio of the largest heading innovation component to the innovation test limit
    pub hdg_test_ratio: f32,

    /// low-pass filtered ratio of the largest velocity innovation component to the innovation test limit
    pub vel_test_ratio: f32,

    /// low-pass filtered ratio of the largest horizontal position innovation component to the innovation test limit
    pub pos_test_ratio: f32,

    /// low-pass filtered ratio of the vertical position innovation to the innovation test limit
    pub hgt_test_ratio: f32,

    /// low-pass filtered ratio of the true airspeed innovation to the innovation test limit
    pub tas_test_ratio: f32,

    /// low-pass filtered ratio of the height above ground innovation to the innovation test limit
    pub hagl_test_ratio: f32,

    /// low-pass filtered ratio of the synthetic sideslip innovation to the innovation test limit
    pub beta_test_ratio: f32,

    /// Bitmask indicating which filter kinematic state outputs are valid for flight control use.
    pub solution_status_flags: u16,

    /// 0 - True if the attitude estimate is good
    /// 1 - True if the horizontal velocity estimate is good
    /// 2 - True if the vertical velocity estimate is good
    /// 3 - True if the horizontal position (relative) estimate is good
    /// 4 - True if the horizontal position (absolute) estimate is good
    /// 5 - True if the vertical position (absolute) estimate is good
    /// 6 - True if the vertical position (above ground) estimate is good
    /// 7 - True if the EKF is in a constant position mode and is not using external measurements (eg GPS or optical flow)
    /// 8 - True if the EKF has sufficient data to enter a mode that will provide a (relative) position estimate
    /// 9 - True if the EKF has sufficient data to enter a mode that will provide a (absolute) position estimate
    /// 10 - True if the EKF has detected a GPS glitch
    /// 11 - True if the EKF has detected bad accelerometer data
    /// number of horizontal position reset events (allow to wrap if count exceeds 255)
    pub reset_count_vel_ne: u8,

    /// number of vertical velocity reset events (allow to wrap if count exceeds 255)
    pub reset_count_vel_d: u8,

    /// number of horizontal position reset events (allow to wrap if count exceeds 255)
    pub reset_count_pos_ne: u8,

    /// number of vertical position reset events (allow to wrap if count exceeds 255)
    pub reset_count_pod_d: u8,

    /// number of quaternion reset events (allow to wrap if count exceeds 255)
    pub reset_count_quat: u8,

    /// cumulative amount of time in seconds that the EKF inertial calculation has slipped relative to system time
    pub time_slip: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pre_flt_fail_innov_heading: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pre_flt_fail_innov_height: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pre_flt_fail_innov_pos_horiz: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pre_flt_fail_innov_vel_horiz: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pre_flt_fail_innov_vel_vert: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pre_flt_fail_mag_field_disturbed: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub accel_device_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_device_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub baro_device_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mag_device_id: u32,

    /// legacy local position estimator (LPE) flags
    /// Bitmask to indicate sensor health states (vel, pos, hgt)
    pub health_flags: u8,

    /// Bitmask to indicate timeout flags (vel, pos, hgt)
    pub timeout_flags: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mag_inclination_deg: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mag_inclination_ref_deg: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mag_strength_gs: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mag_strength_ref_gs: f32,

}

impl EstimatorStatus {
    /// bits are true when corresponding test has failed
    /// 0 : insufficient fix type (no 3D solution)
    pub const GPS_CHECK_FAIL_GPS_FIX: u8 = 0;

    /// 1 : minimum required sat count fail
    pub const GPS_CHECK_FAIL_MIN_SAT_COUNT: u8 = 1;

    /// 2 : maximum allowed PDOP fail
    pub const GPS_CHECK_FAIL_MAX_PDOP: u8 = 2;

    /// 3 : maximum allowed horizontal position error fail
    pub const GPS_CHECK_FAIL_MAX_HORZ_ERR: u8 = 3;

    /// 4 : maximum allowed vertical position error fail
    pub const GPS_CHECK_FAIL_MAX_VERT_ERR: u8 = 4;

    /// 5 : maximum allowed speed error fail
    pub const GPS_CHECK_FAIL_MAX_SPD_ERR: u8 = 5;

    /// 6 : maximum allowed horizontal position drift fail - requires stationary vehicle
    pub const GPS_CHECK_FAIL_MAX_HORZ_DRIFT: u8 = 6;

    /// 7 : maximum allowed vertical position drift fail - requires stationary vehicle
    pub const GPS_CHECK_FAIL_MAX_VERT_DRIFT: u8 = 7;

    /// 8 : maximum allowed horizontal speed fail - requires stationary vehicle
    pub const GPS_CHECK_FAIL_MAX_HORZ_SPD_ERR: u8 = 8;

    /// 9 : maximum allowed vertical velocity discrepancy fail
    pub const GPS_CHECK_FAIL_MAX_VERT_SPD_ERR: u8 = 9;

    /// 10 : GPS signal is spoofed
    pub const GPS_CHECK_FAIL_SPOOFED: u8 = 10;

    /// 11 : GPS signal is jammed
    pub const GPS_CHECK_FAIL_JAMMED: u8 = 11;

    /// 0 - true if the filter tilt alignment is complete
    pub const CS_TILT_ALIGN: u8 = 0;

    /// 1 - true if the filter yaw alignment is complete
    pub const CS_YAW_ALIGN: u8 = 1;

    /// 2 - true if GNSS position measurements are being fused
    pub const CS_GNSS_POS: u8 = 2;

    /// 3 - true if optical flow measurements are being fused
    pub const CS_OPT_FLOW: u8 = 3;

    /// 4 - true if a simple magnetic yaw heading is being fused
    pub const CS_MAG_HDG: u8 = 4;

    /// 5 - true if 3-axis magnetometer measurement are being fused
    pub const CS_MAG_3D: u8 = 5;

    /// 6 - true if synthetic magnetic declination measurements are being fused
    pub const CS_MAG_DEC: u8 = 6;

    /// 7 - true when thought to be airborne
    pub const CS_IN_AIR: u8 = 7;

    /// 8 - true when wind velocity is being estimated
    pub const CS_WIND: u8 = 8;

    /// 9 - true when baro data is being fused
    pub const CS_BARO_HGT: u8 = 9;

    /// 10 - true when range finder data is being fused for height aiding
    pub const CS_RNG_HGT: u8 = 10;

    /// 11 - true when GPS altitude is being fused
    pub const CS_GPS_HGT: u8 = 11;

    /// 12 - true when local position data from external vision is being fused
    pub const CS_EV_POS: u8 = 12;

    /// 13 - true when yaw data from external vision measurements is being fused
    pub const CS_EV_YAW: u8 = 13;

    /// 14 - true when height data from external vision measurements is being fused
    pub const CS_EV_HGT: u8 = 14;

    /// 15 - true when synthetic sideslip measurements are being fused
    pub const CS_BETA: u8 = 15;

    /// 16 - true when only the magnetic field states are updated by the magnetometer
    pub const CS_MAG_FIELD: u8 = 16;

    /// 17 - true when thought to be operating as a fixed wing vehicle with constrained sideslip
    pub const CS_FIXED_WING: u8 = 17;

    /// 18 - true when the magnetometer has been declared faulty and is no longer being used
    pub const CS_MAG_FAULT: u8 = 18;

    /// 19 - true when airspeed measurements are being fused
    pub const CS_ASPD: u8 = 19;

    /// 20 - true when when protection from ground effect induced static pressure rise is active
    pub const CS_GND_EFFECT: u8 = 20;

    /// 21 - true when a stuck range finder sensor has been detected
    pub const CS_RNG_STUCK: u8 = 21;

    /// 22 - true when yaw (not ground course) data from a GPS receiver is being fused
    pub const CS_GPS_YAW: u8 = 22;

    /// 23 - true when the in-flight mag field alignment has been completed
    pub const CS_MAG_ALIGNED: u8 = 23;

    /// 24 - true when local frame velocity data fusion from external vision measurements is intended
    pub const CS_EV_VEL: u8 = 24;

    /// 25 - true when we are using a synthesized measurement for the magnetometer Z component
    pub const CS_SYNTHETIC_MAG_Z: u8 = 25;

    /// 26 - true when the vehicle is at rest
    pub const CS_VEHICLE_AT_REST: u8 = 26;

    /// 27 - true when the GNSS heading has been declared faulty and is no longer being used
    pub const CS_GPS_YAW_FAULT: u8 = 27;

    /// 28 - true when the range finder has been declared faulty and is no longer being used
    pub const CS_RNG_FAULT: u8 = 28;

    /// 44 - true if GNSS velocity measurement fusion is intended
    pub const CS_GNSS_VEL: u8 = 44;

    /// 45 - true if GNSS measurements have been declared faulty and are no longer used
    pub const CS_GNSS_FAULT: u8 = 45;

    /// 46 - true if yaw has been set manually
    pub const CS_YAW_MANUAL: u8 = 46;

}


impl Default for EstimatorStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EstimatorStatus::default())
  }
}

impl rosidl_runtime_rs::Message for EstimatorStatus {
  type RmwMsg = super::msg::rmw::EstimatorStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        output_tracking_error: msg.output_tracking_error,
        gps_check_fail_flags: msg.gps_check_fail_flags,
        control_mode_flags: msg.control_mode_flags,
        filter_fault_flags: msg.filter_fault_flags,
        pos_horiz_accuracy: msg.pos_horiz_accuracy,
        pos_vert_accuracy: msg.pos_vert_accuracy,
        hdg_test_ratio: msg.hdg_test_ratio,
        vel_test_ratio: msg.vel_test_ratio,
        pos_test_ratio: msg.pos_test_ratio,
        hgt_test_ratio: msg.hgt_test_ratio,
        tas_test_ratio: msg.tas_test_ratio,
        hagl_test_ratio: msg.hagl_test_ratio,
        beta_test_ratio: msg.beta_test_ratio,
        solution_status_flags: msg.solution_status_flags,
        reset_count_vel_ne: msg.reset_count_vel_ne,
        reset_count_vel_d: msg.reset_count_vel_d,
        reset_count_pos_ne: msg.reset_count_pos_ne,
        reset_count_pod_d: msg.reset_count_pod_d,
        reset_count_quat: msg.reset_count_quat,
        time_slip: msg.time_slip,
        pre_flt_fail_innov_heading: msg.pre_flt_fail_innov_heading,
        pre_flt_fail_innov_height: msg.pre_flt_fail_innov_height,
        pre_flt_fail_innov_pos_horiz: msg.pre_flt_fail_innov_pos_horiz,
        pre_flt_fail_innov_vel_horiz: msg.pre_flt_fail_innov_vel_horiz,
        pre_flt_fail_innov_vel_vert: msg.pre_flt_fail_innov_vel_vert,
        pre_flt_fail_mag_field_disturbed: msg.pre_flt_fail_mag_field_disturbed,
        accel_device_id: msg.accel_device_id,
        gyro_device_id: msg.gyro_device_id,
        baro_device_id: msg.baro_device_id,
        mag_device_id: msg.mag_device_id,
        health_flags: msg.health_flags,
        timeout_flags: msg.timeout_flags,
        mag_inclination_deg: msg.mag_inclination_deg,
        mag_inclination_ref_deg: msg.mag_inclination_ref_deg,
        mag_strength_gs: msg.mag_strength_gs,
        mag_strength_ref_gs: msg.mag_strength_ref_gs,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
        output_tracking_error: msg.output_tracking_error,
      gps_check_fail_flags: msg.gps_check_fail_flags,
      control_mode_flags: msg.control_mode_flags,
      filter_fault_flags: msg.filter_fault_flags,
      pos_horiz_accuracy: msg.pos_horiz_accuracy,
      pos_vert_accuracy: msg.pos_vert_accuracy,
      hdg_test_ratio: msg.hdg_test_ratio,
      vel_test_ratio: msg.vel_test_ratio,
      pos_test_ratio: msg.pos_test_ratio,
      hgt_test_ratio: msg.hgt_test_ratio,
      tas_test_ratio: msg.tas_test_ratio,
      hagl_test_ratio: msg.hagl_test_ratio,
      beta_test_ratio: msg.beta_test_ratio,
      solution_status_flags: msg.solution_status_flags,
      reset_count_vel_ne: msg.reset_count_vel_ne,
      reset_count_vel_d: msg.reset_count_vel_d,
      reset_count_pos_ne: msg.reset_count_pos_ne,
      reset_count_pod_d: msg.reset_count_pod_d,
      reset_count_quat: msg.reset_count_quat,
      time_slip: msg.time_slip,
      pre_flt_fail_innov_heading: msg.pre_flt_fail_innov_heading,
      pre_flt_fail_innov_height: msg.pre_flt_fail_innov_height,
      pre_flt_fail_innov_pos_horiz: msg.pre_flt_fail_innov_pos_horiz,
      pre_flt_fail_innov_vel_horiz: msg.pre_flt_fail_innov_vel_horiz,
      pre_flt_fail_innov_vel_vert: msg.pre_flt_fail_innov_vel_vert,
      pre_flt_fail_mag_field_disturbed: msg.pre_flt_fail_mag_field_disturbed,
      accel_device_id: msg.accel_device_id,
      gyro_device_id: msg.gyro_device_id,
      baro_device_id: msg.baro_device_id,
      mag_device_id: msg.mag_device_id,
      health_flags: msg.health_flags,
      timeout_flags: msg.timeout_flags,
      mag_inclination_deg: msg.mag_inclination_deg,
      mag_inclination_ref_deg: msg.mag_inclination_ref_deg,
      mag_strength_gs: msg.mag_strength_gs,
      mag_strength_ref_gs: msg.mag_strength_ref_gs,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      output_tracking_error: msg.output_tracking_error,
      gps_check_fail_flags: msg.gps_check_fail_flags,
      control_mode_flags: msg.control_mode_flags,
      filter_fault_flags: msg.filter_fault_flags,
      pos_horiz_accuracy: msg.pos_horiz_accuracy,
      pos_vert_accuracy: msg.pos_vert_accuracy,
      hdg_test_ratio: msg.hdg_test_ratio,
      vel_test_ratio: msg.vel_test_ratio,
      pos_test_ratio: msg.pos_test_ratio,
      hgt_test_ratio: msg.hgt_test_ratio,
      tas_test_ratio: msg.tas_test_ratio,
      hagl_test_ratio: msg.hagl_test_ratio,
      beta_test_ratio: msg.beta_test_ratio,
      solution_status_flags: msg.solution_status_flags,
      reset_count_vel_ne: msg.reset_count_vel_ne,
      reset_count_vel_d: msg.reset_count_vel_d,
      reset_count_pos_ne: msg.reset_count_pos_ne,
      reset_count_pod_d: msg.reset_count_pod_d,
      reset_count_quat: msg.reset_count_quat,
      time_slip: msg.time_slip,
      pre_flt_fail_innov_heading: msg.pre_flt_fail_innov_heading,
      pre_flt_fail_innov_height: msg.pre_flt_fail_innov_height,
      pre_flt_fail_innov_pos_horiz: msg.pre_flt_fail_innov_pos_horiz,
      pre_flt_fail_innov_vel_horiz: msg.pre_flt_fail_innov_vel_horiz,
      pre_flt_fail_innov_vel_vert: msg.pre_flt_fail_innov_vel_vert,
      pre_flt_fail_mag_field_disturbed: msg.pre_flt_fail_mag_field_disturbed,
      accel_device_id: msg.accel_device_id,
      gyro_device_id: msg.gyro_device_id,
      baro_device_id: msg.baro_device_id,
      mag_device_id: msg.mag_device_id,
      health_flags: msg.health_flags,
      timeout_flags: msg.timeout_flags,
      mag_inclination_deg: msg.mag_inclination_deg,
      mag_inclination_ref_deg: msg.mag_inclination_ref_deg,
      mag_strength_gs: msg.mag_strength_gs,
      mag_strength_ref_gs: msg.mag_strength_ref_gs,
    }
  }
}


// Corresponds to px4_msgs__msg__EstimatorStatusFlags

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EstimatorStatusFlags {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp of the raw data (microseconds)
    pub timestamp_sample: u64,

    /// filter control status
    /// number of filter control status (cs) changes
    pub control_status_changes: u32,

    /// 0 - true if the filter tilt alignment is complete
    pub cs_tilt_align: bool,

    /// 1 - true if the filter yaw alignment is complete
    pub cs_yaw_align: bool,

    /// 2 - true if GNSS position measurement fusion is intended
    pub cs_gnss_pos: bool,

    /// 3 - true if optical flow measurements fusion is intended
    pub cs_opt_flow: bool,

    /// 4 - true if a simple magnetic yaw heading fusion is intended
    pub cs_mag_hdg: bool,

    /// 5 - true if 3-axis magnetometer measurement fusion is intended
    pub cs_mag_3d: bool,

    /// 6 - true if synthetic magnetic declination measurements fusion is intended
    pub cs_mag_dec: bool,

    /// 7 - true when the vehicle is airborne
    pub cs_in_air: bool,

    /// 8 - true when wind velocity is being estimated
    pub cs_wind: bool,

    /// 9 - true when baro data is being fused
    pub cs_baro_hgt: bool,

    /// 10 - true when range finder data is being fused for height aiding
    pub cs_rng_hgt: bool,

    /// 11 - true when GPS altitude is being fused
    pub cs_gps_hgt: bool,

    /// 12 - true when local position data fusion from external vision is intended
    pub cs_ev_pos: bool,

    /// 13 - true when yaw data from external vision measurements fusion is intended
    pub cs_ev_yaw: bool,

    /// 14 - true when height data from external vision measurements is being fused
    pub cs_ev_hgt: bool,

    /// 15 - true when synthetic sideslip measurements are being fused
    pub cs_fuse_beta: bool,

    /// 16 - true when the mag field does not match the expected strength
    pub cs_mag_field_disturbed: bool,

    /// 17 - true when the vehicle is operating as a fixed wing vehicle
    pub cs_fixed_wing: bool,

    /// 18 - true when the magnetometer has been declared faulty and is no longer being used
    pub cs_mag_fault: bool,

    /// 19 - true when airspeed measurements are being fused
    pub cs_fuse_aspd: bool,

    /// 20 - true when protection from ground effect induced static pressure rise is active
    pub cs_gnd_effect: bool,

    /// 21 - true when rng data wasn't ready for more than 10s and new rng values haven't changed enough
    pub cs_rng_stuck: bool,

    /// 22 - true when yaw (not ground course) data fusion from a GPS receiver is intended
    pub cs_gnss_yaw: bool,

    /// 23 - true when the in-flight mag field alignment has been completed
    pub cs_mag_aligned_in_flight: bool,

    /// 24 - true when local frame velocity data fusion from external vision measurements is intended
    pub cs_ev_vel: bool,

    /// 25 - true when we are using a synthesized measurement for the magnetometer Z component
    pub cs_synthetic_mag_z: bool,

    /// 26 - true when the vehicle is at rest
    pub cs_vehicle_at_rest: bool,

    /// 27 - true when the GNSS heading has been declared faulty and is no longer being used
    pub cs_gnss_yaw_fault: bool,

    /// 28 - true when the range finder has been declared faulty and is no longer being used
    pub cs_rng_fault: bool,

    /// 29 - true if we are no longer fusing measurements that constrain horizontal velocity drift
    pub cs_inertial_dead_reckoning: bool,

    /// 30 - true if we are navigationg reliant on wind relative measurements
    pub cs_wind_dead_reckoning: bool,

    /// 31 - true when the range finder kinematic consistency check is passing
    pub cs_rng_kin_consistent: bool,

    /// 32 - true when fake position measurements are being fused
    pub cs_fake_pos: bool,

    /// 33 - true when fake height measurements are being fused
    pub cs_fake_hgt: bool,

    /// 34 - true when gravity vector measurements are being fused
    pub cs_gravity_vector: bool,

    /// 35 - true if 3-axis magnetometer measurement fusion (mag states only) is intended
    pub cs_mag: bool,

    /// 36 - true when the EV heading has been declared faulty and is no longer being used
    pub cs_ev_yaw_fault: bool,

    /// 37 - true when the heading obtained from mag data is declared consistent with the filter
    pub cs_mag_heading_consistent: bool,

    /// 38 - true if auxiliary global position measurement fusion is intended
    pub cs_aux_gpos: bool,

    /// 39 - true if we are fusing range finder data for terrain
    pub cs_rng_terrain: bool,

    /// 40 - true if we are fusing flow data for terrain
    pub cs_opt_flow_terrain: bool,

    /// 41 - true if a valid constant position is being fused
    pub cs_valid_fake_pos: bool,

    /// 42 - true if the vehicle is at a constant position
    pub cs_constant_pos: bool,

    /// 43 - true when the current baro has been declared faulty and is no longer being used
    pub cs_baro_fault: bool,

    /// 44 - true if GNSS velocity measurement fusion is intended
    pub cs_gnss_vel: bool,

    /// 45 - true if GNSS true if GNSS measurements (lat, lon, vel) have been declared faulty
    pub cs_gnss_fault: bool,

    /// 46 - true if yaw has been set manually
    pub cs_yaw_manual: bool,

    /// 47 - true if GNSS true if GNSS measurements (alt) have been declared faulty
    pub cs_gnss_hgt_fault: bool,

    /// 48 - true if the vehicle is in vtol transition
    pub cs_in_transition: bool,

    /// 49 - true when heading is observable
    pub cs_heading_observable: bool,

    /// fault status
    /// number of filter fault status (fs) changes
    pub fault_status_changes: u32,

    /// 0 - true if the fusion of the magnetometer X-axis has encountered a numerical error
    pub fs_bad_mag_x: bool,

    /// 1 - true if the fusion of the magnetometer Y-axis has encountered a numerical error
    pub fs_bad_mag_y: bool,

    /// 2 - true if the fusion of the magnetometer Z-axis has encountered a numerical error
    pub fs_bad_mag_z: bool,

    /// 3 - true if the fusion of the heading angle has encountered a numerical error
    pub fs_bad_hdg: bool,

    /// 4 - true if the fusion of the magnetic declination has encountered a numerical error
    pub fs_bad_mag_decl: bool,

    /// 5 - true if fusion of the airspeed has encountered a numerical error
    pub fs_bad_airspeed: bool,

    /// 6 - true if fusion of the synthetic sideslip constraint has encountered a numerical error
    pub fs_bad_sideslip: bool,

    /// 7 - true if fusion of the optical flow X axis has encountered a numerical error
    pub fs_bad_optflow_x: bool,

    /// 8 - true if fusion of the optical flow Y axis has encountered a numerical error
    pub fs_bad_optflow_y: bool,

    /// 10 - true if bad vertical accelerometer data has been detected
    pub fs_bad_acc_vertical: bool,

    /// 11 - true if delta velocity data contains clipping (asymmetric railing)
    pub fs_bad_acc_clipping: bool,

}



impl Default for EstimatorStatusFlags {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EstimatorStatusFlags::default())
  }
}

impl rosidl_runtime_rs::Message for EstimatorStatusFlags {
  type RmwMsg = super::msg::rmw::EstimatorStatusFlags;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        control_status_changes: msg.control_status_changes,
        cs_tilt_align: msg.cs_tilt_align,
        cs_yaw_align: msg.cs_yaw_align,
        cs_gnss_pos: msg.cs_gnss_pos,
        cs_opt_flow: msg.cs_opt_flow,
        cs_mag_hdg: msg.cs_mag_hdg,
        cs_mag_3d: msg.cs_mag_3d,
        cs_mag_dec: msg.cs_mag_dec,
        cs_in_air: msg.cs_in_air,
        cs_wind: msg.cs_wind,
        cs_baro_hgt: msg.cs_baro_hgt,
        cs_rng_hgt: msg.cs_rng_hgt,
        cs_gps_hgt: msg.cs_gps_hgt,
        cs_ev_pos: msg.cs_ev_pos,
        cs_ev_yaw: msg.cs_ev_yaw,
        cs_ev_hgt: msg.cs_ev_hgt,
        cs_fuse_beta: msg.cs_fuse_beta,
        cs_mag_field_disturbed: msg.cs_mag_field_disturbed,
        cs_fixed_wing: msg.cs_fixed_wing,
        cs_mag_fault: msg.cs_mag_fault,
        cs_fuse_aspd: msg.cs_fuse_aspd,
        cs_gnd_effect: msg.cs_gnd_effect,
        cs_rng_stuck: msg.cs_rng_stuck,
        cs_gnss_yaw: msg.cs_gnss_yaw,
        cs_mag_aligned_in_flight: msg.cs_mag_aligned_in_flight,
        cs_ev_vel: msg.cs_ev_vel,
        cs_synthetic_mag_z: msg.cs_synthetic_mag_z,
        cs_vehicle_at_rest: msg.cs_vehicle_at_rest,
        cs_gnss_yaw_fault: msg.cs_gnss_yaw_fault,
        cs_rng_fault: msg.cs_rng_fault,
        cs_inertial_dead_reckoning: msg.cs_inertial_dead_reckoning,
        cs_wind_dead_reckoning: msg.cs_wind_dead_reckoning,
        cs_rng_kin_consistent: msg.cs_rng_kin_consistent,
        cs_fake_pos: msg.cs_fake_pos,
        cs_fake_hgt: msg.cs_fake_hgt,
        cs_gravity_vector: msg.cs_gravity_vector,
        cs_mag: msg.cs_mag,
        cs_ev_yaw_fault: msg.cs_ev_yaw_fault,
        cs_mag_heading_consistent: msg.cs_mag_heading_consistent,
        cs_aux_gpos: msg.cs_aux_gpos,
        cs_rng_terrain: msg.cs_rng_terrain,
        cs_opt_flow_terrain: msg.cs_opt_flow_terrain,
        cs_valid_fake_pos: msg.cs_valid_fake_pos,
        cs_constant_pos: msg.cs_constant_pos,
        cs_baro_fault: msg.cs_baro_fault,
        cs_gnss_vel: msg.cs_gnss_vel,
        cs_gnss_fault: msg.cs_gnss_fault,
        cs_yaw_manual: msg.cs_yaw_manual,
        cs_gnss_hgt_fault: msg.cs_gnss_hgt_fault,
        cs_in_transition: msg.cs_in_transition,
        cs_heading_observable: msg.cs_heading_observable,
        fault_status_changes: msg.fault_status_changes,
        fs_bad_mag_x: msg.fs_bad_mag_x,
        fs_bad_mag_y: msg.fs_bad_mag_y,
        fs_bad_mag_z: msg.fs_bad_mag_z,
        fs_bad_hdg: msg.fs_bad_hdg,
        fs_bad_mag_decl: msg.fs_bad_mag_decl,
        fs_bad_airspeed: msg.fs_bad_airspeed,
        fs_bad_sideslip: msg.fs_bad_sideslip,
        fs_bad_optflow_x: msg.fs_bad_optflow_x,
        fs_bad_optflow_y: msg.fs_bad_optflow_y,
        fs_bad_acc_vertical: msg.fs_bad_acc_vertical,
        fs_bad_acc_clipping: msg.fs_bad_acc_clipping,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      control_status_changes: msg.control_status_changes,
      cs_tilt_align: msg.cs_tilt_align,
      cs_yaw_align: msg.cs_yaw_align,
      cs_gnss_pos: msg.cs_gnss_pos,
      cs_opt_flow: msg.cs_opt_flow,
      cs_mag_hdg: msg.cs_mag_hdg,
      cs_mag_3d: msg.cs_mag_3d,
      cs_mag_dec: msg.cs_mag_dec,
      cs_in_air: msg.cs_in_air,
      cs_wind: msg.cs_wind,
      cs_baro_hgt: msg.cs_baro_hgt,
      cs_rng_hgt: msg.cs_rng_hgt,
      cs_gps_hgt: msg.cs_gps_hgt,
      cs_ev_pos: msg.cs_ev_pos,
      cs_ev_yaw: msg.cs_ev_yaw,
      cs_ev_hgt: msg.cs_ev_hgt,
      cs_fuse_beta: msg.cs_fuse_beta,
      cs_mag_field_disturbed: msg.cs_mag_field_disturbed,
      cs_fixed_wing: msg.cs_fixed_wing,
      cs_mag_fault: msg.cs_mag_fault,
      cs_fuse_aspd: msg.cs_fuse_aspd,
      cs_gnd_effect: msg.cs_gnd_effect,
      cs_rng_stuck: msg.cs_rng_stuck,
      cs_gnss_yaw: msg.cs_gnss_yaw,
      cs_mag_aligned_in_flight: msg.cs_mag_aligned_in_flight,
      cs_ev_vel: msg.cs_ev_vel,
      cs_synthetic_mag_z: msg.cs_synthetic_mag_z,
      cs_vehicle_at_rest: msg.cs_vehicle_at_rest,
      cs_gnss_yaw_fault: msg.cs_gnss_yaw_fault,
      cs_rng_fault: msg.cs_rng_fault,
      cs_inertial_dead_reckoning: msg.cs_inertial_dead_reckoning,
      cs_wind_dead_reckoning: msg.cs_wind_dead_reckoning,
      cs_rng_kin_consistent: msg.cs_rng_kin_consistent,
      cs_fake_pos: msg.cs_fake_pos,
      cs_fake_hgt: msg.cs_fake_hgt,
      cs_gravity_vector: msg.cs_gravity_vector,
      cs_mag: msg.cs_mag,
      cs_ev_yaw_fault: msg.cs_ev_yaw_fault,
      cs_mag_heading_consistent: msg.cs_mag_heading_consistent,
      cs_aux_gpos: msg.cs_aux_gpos,
      cs_rng_terrain: msg.cs_rng_terrain,
      cs_opt_flow_terrain: msg.cs_opt_flow_terrain,
      cs_valid_fake_pos: msg.cs_valid_fake_pos,
      cs_constant_pos: msg.cs_constant_pos,
      cs_baro_fault: msg.cs_baro_fault,
      cs_gnss_vel: msg.cs_gnss_vel,
      cs_gnss_fault: msg.cs_gnss_fault,
      cs_yaw_manual: msg.cs_yaw_manual,
      cs_gnss_hgt_fault: msg.cs_gnss_hgt_fault,
      cs_in_transition: msg.cs_in_transition,
      cs_heading_observable: msg.cs_heading_observable,
      fault_status_changes: msg.fault_status_changes,
      fs_bad_mag_x: msg.fs_bad_mag_x,
      fs_bad_mag_y: msg.fs_bad_mag_y,
      fs_bad_mag_z: msg.fs_bad_mag_z,
      fs_bad_hdg: msg.fs_bad_hdg,
      fs_bad_mag_decl: msg.fs_bad_mag_decl,
      fs_bad_airspeed: msg.fs_bad_airspeed,
      fs_bad_sideslip: msg.fs_bad_sideslip,
      fs_bad_optflow_x: msg.fs_bad_optflow_x,
      fs_bad_optflow_y: msg.fs_bad_optflow_y,
      fs_bad_acc_vertical: msg.fs_bad_acc_vertical,
      fs_bad_acc_clipping: msg.fs_bad_acc_clipping,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      control_status_changes: msg.control_status_changes,
      cs_tilt_align: msg.cs_tilt_align,
      cs_yaw_align: msg.cs_yaw_align,
      cs_gnss_pos: msg.cs_gnss_pos,
      cs_opt_flow: msg.cs_opt_flow,
      cs_mag_hdg: msg.cs_mag_hdg,
      cs_mag_3d: msg.cs_mag_3d,
      cs_mag_dec: msg.cs_mag_dec,
      cs_in_air: msg.cs_in_air,
      cs_wind: msg.cs_wind,
      cs_baro_hgt: msg.cs_baro_hgt,
      cs_rng_hgt: msg.cs_rng_hgt,
      cs_gps_hgt: msg.cs_gps_hgt,
      cs_ev_pos: msg.cs_ev_pos,
      cs_ev_yaw: msg.cs_ev_yaw,
      cs_ev_hgt: msg.cs_ev_hgt,
      cs_fuse_beta: msg.cs_fuse_beta,
      cs_mag_field_disturbed: msg.cs_mag_field_disturbed,
      cs_fixed_wing: msg.cs_fixed_wing,
      cs_mag_fault: msg.cs_mag_fault,
      cs_fuse_aspd: msg.cs_fuse_aspd,
      cs_gnd_effect: msg.cs_gnd_effect,
      cs_rng_stuck: msg.cs_rng_stuck,
      cs_gnss_yaw: msg.cs_gnss_yaw,
      cs_mag_aligned_in_flight: msg.cs_mag_aligned_in_flight,
      cs_ev_vel: msg.cs_ev_vel,
      cs_synthetic_mag_z: msg.cs_synthetic_mag_z,
      cs_vehicle_at_rest: msg.cs_vehicle_at_rest,
      cs_gnss_yaw_fault: msg.cs_gnss_yaw_fault,
      cs_rng_fault: msg.cs_rng_fault,
      cs_inertial_dead_reckoning: msg.cs_inertial_dead_reckoning,
      cs_wind_dead_reckoning: msg.cs_wind_dead_reckoning,
      cs_rng_kin_consistent: msg.cs_rng_kin_consistent,
      cs_fake_pos: msg.cs_fake_pos,
      cs_fake_hgt: msg.cs_fake_hgt,
      cs_gravity_vector: msg.cs_gravity_vector,
      cs_mag: msg.cs_mag,
      cs_ev_yaw_fault: msg.cs_ev_yaw_fault,
      cs_mag_heading_consistent: msg.cs_mag_heading_consistent,
      cs_aux_gpos: msg.cs_aux_gpos,
      cs_rng_terrain: msg.cs_rng_terrain,
      cs_opt_flow_terrain: msg.cs_opt_flow_terrain,
      cs_valid_fake_pos: msg.cs_valid_fake_pos,
      cs_constant_pos: msg.cs_constant_pos,
      cs_baro_fault: msg.cs_baro_fault,
      cs_gnss_vel: msg.cs_gnss_vel,
      cs_gnss_fault: msg.cs_gnss_fault,
      cs_yaw_manual: msg.cs_yaw_manual,
      cs_gnss_hgt_fault: msg.cs_gnss_hgt_fault,
      cs_in_transition: msg.cs_in_transition,
      cs_heading_observable: msg.cs_heading_observable,
      fault_status_changes: msg.fault_status_changes,
      fs_bad_mag_x: msg.fs_bad_mag_x,
      fs_bad_mag_y: msg.fs_bad_mag_y,
      fs_bad_mag_z: msg.fs_bad_mag_z,
      fs_bad_hdg: msg.fs_bad_hdg,
      fs_bad_mag_decl: msg.fs_bad_mag_decl,
      fs_bad_airspeed: msg.fs_bad_airspeed,
      fs_bad_sideslip: msg.fs_bad_sideslip,
      fs_bad_optflow_x: msg.fs_bad_optflow_x,
      fs_bad_optflow_y: msg.fs_bad_optflow_y,
      fs_bad_acc_vertical: msg.fs_bad_acc_vertical,
      fs_bad_acc_clipping: msg.fs_bad_acc_clipping,
    }
  }
}


// Corresponds to px4_msgs__msg__Event
/// Events interface

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Event {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Event ID
    pub id: u32,

    /// Event sequence number
    pub event_sequence: u16,

    /// (optional) arguments, depend on event id
    pub arguments: [u8; 25],

    /// Log levels: 4 bits MSB: internal, 4 bits LSB: external
    pub log_levels: u8,

}

impl Event {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 16;

}


impl Default for Event {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Event::default())
  }
}

impl rosidl_runtime_rs::Message for Event {
  type RmwMsg = super::msg::rmw::Event;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        id: msg.id,
        event_sequence: msg.event_sequence,
        arguments: msg.arguments,
        log_levels: msg.log_levels,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      id: msg.id,
      event_sequence: msg.event_sequence,
        arguments: msg.arguments,
      log_levels: msg.log_levels,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      id: msg.id,
      event_sequence: msg.event_sequence,
      arguments: msg.arguments,
      log_levels: msg.log_levels,
    }
  }
}


// Corresponds to px4_msgs__msg__FailsafeFlags
/// Input flags for the failsafe state machine set by the arming & health checks.
///
/// Flags must be named such that false == no failure (e.g. _invalid, _unhealthy, _lost)
/// The flag comments are used as label for the failsafe state machine simulation

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FailsafeFlags {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Per-mode requirements
    pub mode_req_angular_velocity: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_req_attitude: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_req_local_alt: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_req_local_position: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_req_local_position_relaxed: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_req_global_position: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_req_global_position_relaxed: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_req_mission: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_req_offboard_signal: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_req_home_position: u32,

    /// if set, mode cannot be entered if wind or flight time limit exceeded
    pub mode_req_wind_and_flight_time_compliance: u32,

    /// if set, cannot arm while in this mode
    pub mode_req_prevent_arming: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_req_manual_control: u32,

    /// other requirements, not covered above (for external modes)
    pub mode_req_other: u32,

    /// Mode requirements
    /// Angular velocity invalid
    pub angular_velocity_invalid: bool,

    /// Attitude invalid
    pub attitude_invalid: bool,

    /// Local altitude invalid
    pub local_altitude_invalid: bool,

    /// Local position estimate invalid
    pub local_position_invalid: bool,

    /// Local position with reduced accuracy requirements invalid (e.g. flying with optical flow)
    pub local_position_invalid_relaxed: bool,

    /// Local velocity estimate invalid
    pub local_velocity_invalid: bool,

    /// Global position estimate invalid
    pub global_position_invalid: bool,

    /// Global position estimate invalid with relaxed accuracy requirements
    pub global_position_invalid_relaxed: bool,

    /// No mission available
    pub auto_mission_missing: bool,

    /// Offboard signal lost
    pub offboard_control_signal_lost: bool,

    /// No home position available
    pub home_position_invalid: bool,

    /// Control links
    /// Manual control (RC) signal lost
    pub manual_control_signal_lost: bool,

    /// GCS connection lost
    pub gcs_connection_lost: bool,

    /// Battery
    /// Battery warning level (see BatteryStatus.msg)
    pub battery_warning: u8,

    /// Low battery based on remaining flight time
    pub battery_low_remaining_time: bool,

    /// Battery unhealthy
    pub battery_unhealthy: bool,

    /// Failure detector
    /// Critical failure (attitude limit exceeded, or external ATS)
    pub fd_critical_failure: bool,

    /// ESC failed to arm
    pub fd_esc_arming_failure: bool,

    /// Imbalanced propeller detected
    pub fd_imbalanced_prop: bool,

    /// Motor failure
    pub fd_motor_failure: bool,

    /// Uncommanded altitude loss (rotary-wing, altitude-controlled flight)
    pub fd_alt_loss: bool,

    /// Other
    /// Geofence breached (one or multiple)
    pub geofence_breached: bool,

    /// Mission failure
    pub mission_failure: bool,

    /// vehicle in fixed-wing system failure failsafe mode (after quad-chute)
    pub vtol_fixed_wing_system_failure: bool,

    /// Wind limit exceeded
    pub wind_limit_exceeded: bool,

    /// Maximum flight time exceeded
    pub flight_time_limit_exceeded: bool,

    /// Position estimate has dropped below threshold, but is currently still declared valid
    pub position_accuracy_low: bool,

    /// Navigator failed to execute a mode
    pub navigator_failure: bool,

    /// Parachute system missing or unhealthy
    pub parachute_unhealthy: bool,

    /// Remote ID (Open Drone ID) system missing or unhealthy
    pub remote_id_unhealthy: bool,

    /// Active GNSS count dropped below SYS_HAS_NUM_GNSS, or two receivers report inconsistent positions
    pub gnss_lost: bool,

}



impl Default for FailsafeFlags {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FailsafeFlags::default())
  }
}

impl rosidl_runtime_rs::Message for FailsafeFlags {
  type RmwMsg = super::msg::rmw::FailsafeFlags;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        mode_req_angular_velocity: msg.mode_req_angular_velocity,
        mode_req_attitude: msg.mode_req_attitude,
        mode_req_local_alt: msg.mode_req_local_alt,
        mode_req_local_position: msg.mode_req_local_position,
        mode_req_local_position_relaxed: msg.mode_req_local_position_relaxed,
        mode_req_global_position: msg.mode_req_global_position,
        mode_req_global_position_relaxed: msg.mode_req_global_position_relaxed,
        mode_req_mission: msg.mode_req_mission,
        mode_req_offboard_signal: msg.mode_req_offboard_signal,
        mode_req_home_position: msg.mode_req_home_position,
        mode_req_wind_and_flight_time_compliance: msg.mode_req_wind_and_flight_time_compliance,
        mode_req_prevent_arming: msg.mode_req_prevent_arming,
        mode_req_manual_control: msg.mode_req_manual_control,
        mode_req_other: msg.mode_req_other,
        angular_velocity_invalid: msg.angular_velocity_invalid,
        attitude_invalid: msg.attitude_invalid,
        local_altitude_invalid: msg.local_altitude_invalid,
        local_position_invalid: msg.local_position_invalid,
        local_position_invalid_relaxed: msg.local_position_invalid_relaxed,
        local_velocity_invalid: msg.local_velocity_invalid,
        global_position_invalid: msg.global_position_invalid,
        global_position_invalid_relaxed: msg.global_position_invalid_relaxed,
        auto_mission_missing: msg.auto_mission_missing,
        offboard_control_signal_lost: msg.offboard_control_signal_lost,
        home_position_invalid: msg.home_position_invalid,
        manual_control_signal_lost: msg.manual_control_signal_lost,
        gcs_connection_lost: msg.gcs_connection_lost,
        battery_warning: msg.battery_warning,
        battery_low_remaining_time: msg.battery_low_remaining_time,
        battery_unhealthy: msg.battery_unhealthy,
        fd_critical_failure: msg.fd_critical_failure,
        fd_esc_arming_failure: msg.fd_esc_arming_failure,
        fd_imbalanced_prop: msg.fd_imbalanced_prop,
        fd_motor_failure: msg.fd_motor_failure,
        fd_alt_loss: msg.fd_alt_loss,
        geofence_breached: msg.geofence_breached,
        mission_failure: msg.mission_failure,
        vtol_fixed_wing_system_failure: msg.vtol_fixed_wing_system_failure,
        wind_limit_exceeded: msg.wind_limit_exceeded,
        flight_time_limit_exceeded: msg.flight_time_limit_exceeded,
        position_accuracy_low: msg.position_accuracy_low,
        navigator_failure: msg.navigator_failure,
        parachute_unhealthy: msg.parachute_unhealthy,
        remote_id_unhealthy: msg.remote_id_unhealthy,
        gnss_lost: msg.gnss_lost,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      mode_req_angular_velocity: msg.mode_req_angular_velocity,
      mode_req_attitude: msg.mode_req_attitude,
      mode_req_local_alt: msg.mode_req_local_alt,
      mode_req_local_position: msg.mode_req_local_position,
      mode_req_local_position_relaxed: msg.mode_req_local_position_relaxed,
      mode_req_global_position: msg.mode_req_global_position,
      mode_req_global_position_relaxed: msg.mode_req_global_position_relaxed,
      mode_req_mission: msg.mode_req_mission,
      mode_req_offboard_signal: msg.mode_req_offboard_signal,
      mode_req_home_position: msg.mode_req_home_position,
      mode_req_wind_and_flight_time_compliance: msg.mode_req_wind_and_flight_time_compliance,
      mode_req_prevent_arming: msg.mode_req_prevent_arming,
      mode_req_manual_control: msg.mode_req_manual_control,
      mode_req_other: msg.mode_req_other,
      angular_velocity_invalid: msg.angular_velocity_invalid,
      attitude_invalid: msg.attitude_invalid,
      local_altitude_invalid: msg.local_altitude_invalid,
      local_position_invalid: msg.local_position_invalid,
      local_position_invalid_relaxed: msg.local_position_invalid_relaxed,
      local_velocity_invalid: msg.local_velocity_invalid,
      global_position_invalid: msg.global_position_invalid,
      global_position_invalid_relaxed: msg.global_position_invalid_relaxed,
      auto_mission_missing: msg.auto_mission_missing,
      offboard_control_signal_lost: msg.offboard_control_signal_lost,
      home_position_invalid: msg.home_position_invalid,
      manual_control_signal_lost: msg.manual_control_signal_lost,
      gcs_connection_lost: msg.gcs_connection_lost,
      battery_warning: msg.battery_warning,
      battery_low_remaining_time: msg.battery_low_remaining_time,
      battery_unhealthy: msg.battery_unhealthy,
      fd_critical_failure: msg.fd_critical_failure,
      fd_esc_arming_failure: msg.fd_esc_arming_failure,
      fd_imbalanced_prop: msg.fd_imbalanced_prop,
      fd_motor_failure: msg.fd_motor_failure,
      fd_alt_loss: msg.fd_alt_loss,
      geofence_breached: msg.geofence_breached,
      mission_failure: msg.mission_failure,
      vtol_fixed_wing_system_failure: msg.vtol_fixed_wing_system_failure,
      wind_limit_exceeded: msg.wind_limit_exceeded,
      flight_time_limit_exceeded: msg.flight_time_limit_exceeded,
      position_accuracy_low: msg.position_accuracy_low,
      navigator_failure: msg.navigator_failure,
      parachute_unhealthy: msg.parachute_unhealthy,
      remote_id_unhealthy: msg.remote_id_unhealthy,
      gnss_lost: msg.gnss_lost,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      mode_req_angular_velocity: msg.mode_req_angular_velocity,
      mode_req_attitude: msg.mode_req_attitude,
      mode_req_local_alt: msg.mode_req_local_alt,
      mode_req_local_position: msg.mode_req_local_position,
      mode_req_local_position_relaxed: msg.mode_req_local_position_relaxed,
      mode_req_global_position: msg.mode_req_global_position,
      mode_req_global_position_relaxed: msg.mode_req_global_position_relaxed,
      mode_req_mission: msg.mode_req_mission,
      mode_req_offboard_signal: msg.mode_req_offboard_signal,
      mode_req_home_position: msg.mode_req_home_position,
      mode_req_wind_and_flight_time_compliance: msg.mode_req_wind_and_flight_time_compliance,
      mode_req_prevent_arming: msg.mode_req_prevent_arming,
      mode_req_manual_control: msg.mode_req_manual_control,
      mode_req_other: msg.mode_req_other,
      angular_velocity_invalid: msg.angular_velocity_invalid,
      attitude_invalid: msg.attitude_invalid,
      local_altitude_invalid: msg.local_altitude_invalid,
      local_position_invalid: msg.local_position_invalid,
      local_position_invalid_relaxed: msg.local_position_invalid_relaxed,
      local_velocity_invalid: msg.local_velocity_invalid,
      global_position_invalid: msg.global_position_invalid,
      global_position_invalid_relaxed: msg.global_position_invalid_relaxed,
      auto_mission_missing: msg.auto_mission_missing,
      offboard_control_signal_lost: msg.offboard_control_signal_lost,
      home_position_invalid: msg.home_position_invalid,
      manual_control_signal_lost: msg.manual_control_signal_lost,
      gcs_connection_lost: msg.gcs_connection_lost,
      battery_warning: msg.battery_warning,
      battery_low_remaining_time: msg.battery_low_remaining_time,
      battery_unhealthy: msg.battery_unhealthy,
      fd_critical_failure: msg.fd_critical_failure,
      fd_esc_arming_failure: msg.fd_esc_arming_failure,
      fd_imbalanced_prop: msg.fd_imbalanced_prop,
      fd_motor_failure: msg.fd_motor_failure,
      fd_alt_loss: msg.fd_alt_loss,
      geofence_breached: msg.geofence_breached,
      mission_failure: msg.mission_failure,
      vtol_fixed_wing_system_failure: msg.vtol_fixed_wing_system_failure,
      wind_limit_exceeded: msg.wind_limit_exceeded,
      flight_time_limit_exceeded: msg.flight_time_limit_exceeded,
      position_accuracy_low: msg.position_accuracy_low,
      navigator_failure: msg.navigator_failure,
      parachute_unhealthy: msg.parachute_unhealthy,
      remote_id_unhealthy: msg.remote_id_unhealthy,
      gnss_lost: msg.gnss_lost,
    }
  }
}


// Corresponds to px4_msgs__msg__FailureDetectorStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FailureDetectorStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// FailureDetector status
    pub fd_roll: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fd_pitch: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fd_alt: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fd_ext: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fd_arm_escs: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fd_battery: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fd_imbalanced_prop: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fd_motor: bool,

    /// Metric of the imbalanced propeller check (low-passed)
    pub imbalanced_prop_metric: f32,

    /// Bit-mask with motor indices, indicating critical motor failures
    pub motor_failure_mask: u16,

    /// Bitmaks of motors stopped by failure injection
    pub motor_stop_mask: u16,

}



impl Default for FailureDetectorStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FailureDetectorStatus::default())
  }
}

impl rosidl_runtime_rs::Message for FailureDetectorStatus {
  type RmwMsg = super::msg::rmw::FailureDetectorStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        fd_roll: msg.fd_roll,
        fd_pitch: msg.fd_pitch,
        fd_alt: msg.fd_alt,
        fd_ext: msg.fd_ext,
        fd_arm_escs: msg.fd_arm_escs,
        fd_battery: msg.fd_battery,
        fd_imbalanced_prop: msg.fd_imbalanced_prop,
        fd_motor: msg.fd_motor,
        imbalanced_prop_metric: msg.imbalanced_prop_metric,
        motor_failure_mask: msg.motor_failure_mask,
        motor_stop_mask: msg.motor_stop_mask,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      fd_roll: msg.fd_roll,
      fd_pitch: msg.fd_pitch,
      fd_alt: msg.fd_alt,
      fd_ext: msg.fd_ext,
      fd_arm_escs: msg.fd_arm_escs,
      fd_battery: msg.fd_battery,
      fd_imbalanced_prop: msg.fd_imbalanced_prop,
      fd_motor: msg.fd_motor,
      imbalanced_prop_metric: msg.imbalanced_prop_metric,
      motor_failure_mask: msg.motor_failure_mask,
      motor_stop_mask: msg.motor_stop_mask,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      fd_roll: msg.fd_roll,
      fd_pitch: msg.fd_pitch,
      fd_alt: msg.fd_alt,
      fd_ext: msg.fd_ext,
      fd_arm_escs: msg.fd_arm_escs,
      fd_battery: msg.fd_battery,
      fd_imbalanced_prop: msg.fd_imbalanced_prop,
      fd_motor: msg.fd_motor,
      imbalanced_prop_metric: msg.imbalanced_prop_metric,
      motor_failure_mask: msg.motor_failure_mask,
      motor_stop_mask: msg.motor_stop_mask,
    }
  }
}


// Corresponds to px4_msgs__msg__FiducialMarkerPosReport
/// Relative position of a precision-landing target detected by a vision pipeline (e.g. an ArUco marker).
///
/// Published by: vision pipelines (on-board or off-board over MAVLink TARGET_RELATIVE), decoded in mavlink_receiver.
/// Subscribed by: vision_target_estimator (VTEPosition).
///
/// The measurement is expressed in an arbitrary sensor frame; the quaternion q rotates it into the NED earth frame.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FiducialMarkerPosReport {
    /// Time since system start
    pub timestamp: u64,

    /// Timestamp of the raw observation
    pub timestamp_sample: u64,

    /// Target position relative to vehicle, expressed in the frame defined by q
    pub rel_pos: [f32; 3],

    /// Target position variance, expressed in the frame defined by q
    pub cov_rel_pos: [f32; 3],

    /// Quaternion rotation from the rel_pos frame to the NED earth frame
    pub q: [f32; 4],

}



impl Default for FiducialMarkerPosReport {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FiducialMarkerPosReport::default())
  }
}

impl rosidl_runtime_rs::Message for FiducialMarkerPosReport {
  type RmwMsg = super::msg::rmw::FiducialMarkerPosReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        rel_pos: msg.rel_pos,
        cov_rel_pos: msg.cov_rel_pos,
        q: msg.q,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
        rel_pos: msg.rel_pos,
        cov_rel_pos: msg.cov_rel_pos,
        q: msg.q,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      rel_pos: msg.rel_pos,
      cov_rel_pos: msg.cov_rel_pos,
      q: msg.q,
    }
  }
}


// Corresponds to px4_msgs__msg__FiducialMarkerYawReport
/// Yaw of a precision-landing target relative to the NED (North, East, Down) frame, reported by a vision pipeline.
///
/// Published by: vision pipelines (on-board or off-board over MAVLink TARGET_RELATIVE), decoded in mavlink_receiver.
/// Subscribed by: vision_target_estimator (VTEOrientation).

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FiducialMarkerYawReport {
    /// Time since system start
    pub timestamp: u64,

    /// Timestamp of the raw observation
    pub timestamp_sample: u64,

    /// [rad] [@frame NED] Orientation of the target relative to the NED frame [-Pi ; Pi]
    pub yaw_ned: f32,

    /// Orientation uncertainty
    pub yaw_var_ned: f32,

}



impl Default for FiducialMarkerYawReport {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FiducialMarkerYawReport::default())
  }
}

impl rosidl_runtime_rs::Message for FiducialMarkerYawReport {
  type RmwMsg = super::msg::rmw::FiducialMarkerYawReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        yaw_ned: msg.yaw_ned,
        yaw_var_ned: msg.yaw_var_ned,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      yaw_ned: msg.yaw_ned,
      yaw_var_ned: msg.yaw_var_ned,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      yaw_ned: msg.yaw_ned,
      yaw_var_ned: msg.yaw_var_ned,
    }
  }
}


// Corresponds to px4_msgs__msg__FigureEightStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FigureEightStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Major axis radius of the figure eight. Positive values orbit clockwise, negative values orbit counter-clockwise.
    pub major_radius: f32,

    /// Minor axis radius of the figure eight.
    pub minor_radius: f32,

    /// Orientation of the major axis of the figure eight.
    pub orientation: f32,

    /// The coordinate system of the fields: x, y, z.
    pub frame: u8,

    /// X coordinate of center point. Coordinate system depends on frame field: local = x position in meters * 1e4, global = latitude in degrees * 1e7.
    pub x: i32,

    /// Y coordinate of center point. Coordinate system depends on frame field: local = y position in meters * 1e4, global = latitude in degrees * 1e7.
    pub y: i32,

    /// Altitude of center point. Coordinate system depends on frame field.
    pub z: f32,

}



impl Default for FigureEightStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FigureEightStatus::default())
  }
}

impl rosidl_runtime_rs::Message for FigureEightStatus {
  type RmwMsg = super::msg::rmw::FigureEightStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        major_radius: msg.major_radius,
        minor_radius: msg.minor_radius,
        orientation: msg.orientation,
        frame: msg.frame,
        x: msg.x,
        y: msg.y,
        z: msg.z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      major_radius: msg.major_radius,
      minor_radius: msg.minor_radius,
      orientation: msg.orientation,
      frame: msg.frame,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      major_radius: msg.major_radius,
      minor_radius: msg.minor_radius,
      orientation: msg.orientation,
      frame: msg.frame,
      x: msg.x,
      y: msg.y,
      z: msg.z,
    }
  }
}


// Corresponds to px4_msgs__msg__FixedWingLateralGuidanceStatus
/// Fixed Wing Lateral Guidance Status message
/// Published by fw_pos_control module to report the resultant lateral setpoints and NPFG debug outputs

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FixedWingLateralGuidanceStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// [@range -pi, pi] Desired direction of travel over ground w.r.t (true) North. Set by guidance law
    pub course_setpoint: f32,

    /// [m/s^2] [FRD] lateral acceleration demand only for maintaining curvature
    pub lateral_acceleration_ff: f32,

    /// [@range 0,1] bearing feasibility
    pub bearing_feas: f32,

    /// [@range 0,1] on-track bearing feasibility
    pub bearing_feas_on_track: f32,

    /// signed track error
    pub signed_track_error: f32,

    /// track error bound
    pub track_error_bound: f32,

    /// [m] [@range 0, INF] [@INVALID NaN] distance from the current waypoint at which the navigator should advance to the next one (turn anticipation). If below NAV_ACC_RAD, the parameter value is used instead.
    pub switch_distance: f32,

    /// adapted period (if auto-tuning enabled)
    pub adapted_period: f32,

    /// true = wind estimate is valid and/or being used by controller (also indicates if wind estimate usage is disabled despite being valid)
    pub wind_est_valid: u8,

}



impl Default for FixedWingLateralGuidanceStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FixedWingLateralGuidanceStatus::default())
  }
}

impl rosidl_runtime_rs::Message for FixedWingLateralGuidanceStatus {
  type RmwMsg = super::msg::rmw::FixedWingLateralGuidanceStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        course_setpoint: msg.course_setpoint,
        lateral_acceleration_ff: msg.lateral_acceleration_ff,
        bearing_feas: msg.bearing_feas,
        bearing_feas_on_track: msg.bearing_feas_on_track,
        signed_track_error: msg.signed_track_error,
        track_error_bound: msg.track_error_bound,
        switch_distance: msg.switch_distance,
        adapted_period: msg.adapted_period,
        wind_est_valid: msg.wind_est_valid,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      course_setpoint: msg.course_setpoint,
      lateral_acceleration_ff: msg.lateral_acceleration_ff,
      bearing_feas: msg.bearing_feas,
      bearing_feas_on_track: msg.bearing_feas_on_track,
      signed_track_error: msg.signed_track_error,
      track_error_bound: msg.track_error_bound,
      switch_distance: msg.switch_distance,
      adapted_period: msg.adapted_period,
      wind_est_valid: msg.wind_est_valid,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      course_setpoint: msg.course_setpoint,
      lateral_acceleration_ff: msg.lateral_acceleration_ff,
      bearing_feas: msg.bearing_feas,
      bearing_feas_on_track: msg.bearing_feas_on_track,
      signed_track_error: msg.signed_track_error,
      track_error_bound: msg.track_error_bound,
      switch_distance: msg.switch_distance,
      adapted_period: msg.adapted_period,
      wind_est_valid: msg.wind_est_valid,
    }
  }
}


// Corresponds to px4_msgs__msg__FixedWingLateralSetpoint
/// Fixed Wing Lateral Setpoint message
///
/// Used by the fw_lateral_longitudinal_control module
/// At least one of course, airspeed_direction, or lateral_acceleration must be finite.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FixedWingLateralSetpoint {
    /// Time since system start
    pub timestamp: u64,

    /// [@range -pi, pi] Desired direction of travel over ground w.r.t (true) North. NAN if not controlled directly.
    pub course: f32,

    /// [@range -pi, pi] Desired horizontal angle of airspeed vector w.r.t. (true) North. Same as vehicle heading if in the absence of sideslip. NAN if not controlled directly, takes precedence over course if finite.
    pub airspeed_direction: f32,

    /// [m/s^2] [@frame FRD] Lateral acceleration setpoint. NAN if not controlled directly, used as feedforward if either course setpoint or airspeed_direction is finite.
    pub lateral_acceleration: f32,

}

impl FixedWingLateralSetpoint {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 0;

}


impl Default for FixedWingLateralSetpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FixedWingLateralSetpoint::default())
  }
}

impl rosidl_runtime_rs::Message for FixedWingLateralSetpoint {
  type RmwMsg = super::msg::rmw::FixedWingLateralSetpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        course: msg.course,
        airspeed_direction: msg.airspeed_direction,
        lateral_acceleration: msg.lateral_acceleration,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      course: msg.course,
      airspeed_direction: msg.airspeed_direction,
      lateral_acceleration: msg.lateral_acceleration,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      course: msg.course,
      airspeed_direction: msg.airspeed_direction,
      lateral_acceleration: msg.lateral_acceleration,
    }
  }
}


// Corresponds to px4_msgs__msg__FixedWingLateralStatus
/// Fixed Wing Lateral Status message
/// Published by the fw_lateral_longitudinal_control module to report the resultant lateral setpoint

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FixedWingLateralStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// [m/s^2] [FRD] resultant lateral acceleration setpoint
    pub lateral_acceleration_setpoint: f32,

    /// [@range 0, 1] estimate of certainty of the correct functionality of the npfg roll setpoint
    pub can_run_factor: f32,

}



impl Default for FixedWingLateralStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FixedWingLateralStatus::default())
  }
}

impl rosidl_runtime_rs::Message for FixedWingLateralStatus {
  type RmwMsg = super::msg::rmw::FixedWingLateralStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        lateral_acceleration_setpoint: msg.lateral_acceleration_setpoint,
        can_run_factor: msg.can_run_factor,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      lateral_acceleration_setpoint: msg.lateral_acceleration_setpoint,
      can_run_factor: msg.can_run_factor,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      lateral_acceleration_setpoint: msg.lateral_acceleration_setpoint,
      can_run_factor: msg.can_run_factor,
    }
  }
}


// Corresponds to px4_msgs__msg__FixedWingLongitudinalSetpoint
/// Fixed Wing Longitudinal Setpoint message
///
/// Used by the fw_lateral_longitudinal_control module
/// If pitch_direct and throttle_direct are not both finite, then the controller relies on altitude/height_rate and equivalent_airspeed to control vertical motion.
/// If both altitude and height_rate are NAN, the controller maintains the current altitude.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FixedWingLongitudinalSetpoint {
    /// Time since system start
    pub timestamp: u64,

    /// Altitude setpoint AMSL, not controlled directly if NAN or if height_rate is finite
    pub altitude: f32,

    /// [m/s] [@frame ENU] Scalar height rate setpoint. NAN if not controlled directly
    pub height_rate: f32,

    /// [@range 0, inf] Scalar equivalent airspeed setpoint. NAN if system default should be used
    pub equivalent_airspeed: f32,

    /// [rad] [@range -pi, pi] [@frame FRD] NAN if not controlled, overrides total energy controller
    pub pitch_direct: f32,

    /// [@range 0,1] NAN if not controlled, overrides total energy controller
    pub throttle_direct: f32,

}

impl FixedWingLongitudinalSetpoint {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 0;

}


impl Default for FixedWingLongitudinalSetpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FixedWingLongitudinalSetpoint::default())
  }
}

impl rosidl_runtime_rs::Message for FixedWingLongitudinalSetpoint {
  type RmwMsg = super::msg::rmw::FixedWingLongitudinalSetpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        altitude: msg.altitude,
        height_rate: msg.height_rate,
        equivalent_airspeed: msg.equivalent_airspeed,
        pitch_direct: msg.pitch_direct,
        throttle_direct: msg.throttle_direct,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      altitude: msg.altitude,
      height_rate: msg.height_rate,
      equivalent_airspeed: msg.equivalent_airspeed,
      pitch_direct: msg.pitch_direct,
      throttle_direct: msg.throttle_direct,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      altitude: msg.altitude,
      height_rate: msg.height_rate,
      equivalent_airspeed: msg.equivalent_airspeed,
      pitch_direct: msg.pitch_direct,
      throttle_direct: msg.throttle_direct,
    }
  }
}


// Corresponds to px4_msgs__msg__FixedWingRunwayControl
/// Auxiliary control fields for fixed-wing runway takeoff/landing

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FixedWingRunwayControl {
    /// Passes information from the FixedWingModeManager to the FixedWingAttitudeController (wheel control) and FixedWingLandDetector (takeoff state)
    /// [us] time since system start
    pub timestamp: u64,

    /// Current state of runway takeoff state machine
    pub runway_takeoff_state: u8,

    /// Flag that enables the wheel steering.
    pub wheel_steering_enabled: bool,

    /// [norm] [@range -1, 1] [FRD] Manual wheel nudging, added to controller output. NAN is interpreted as 0.
    pub wheel_steering_nudging_rate: f32,

}

impl FixedWingRunwayControl {
    /// ramping up throttle
    pub const STATE_THROTTLE_RAMP: u8 = 0;

    /// clamped to runway, controlling yaw directly (wheel or rudder)
    pub const STATE_CLAMPED_TO_RUNWAY: u8 = 1;

    /// climbout to safe height before navigation
    pub const STATE_CLIMBOUT: u8 = 2;

    /// navigate freely
    pub const STATE_FLYING: u8 = 3;

}


impl Default for FixedWingRunwayControl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FixedWingRunwayControl::default())
  }
}

impl rosidl_runtime_rs::Message for FixedWingRunwayControl {
  type RmwMsg = super::msg::rmw::FixedWingRunwayControl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        runway_takeoff_state: msg.runway_takeoff_state,
        wheel_steering_enabled: msg.wheel_steering_enabled,
        wheel_steering_nudging_rate: msg.wheel_steering_nudging_rate,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      runway_takeoff_state: msg.runway_takeoff_state,
      wheel_steering_enabled: msg.wheel_steering_enabled,
      wheel_steering_nudging_rate: msg.wheel_steering_nudging_rate,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      runway_takeoff_state: msg.runway_takeoff_state,
      wheel_steering_enabled: msg.wheel_steering_enabled,
      wheel_steering_nudging_rate: msg.wheel_steering_nudging_rate,
    }
  }
}


// Corresponds to px4_msgs__msg__FlightPhaseEstimation

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FlightPhaseEstimation {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Estimate of current flight phase
    pub flight_phase: u8,

}

impl FlightPhaseEstimation {
    /// vehicle flight phase is unknown
    pub const FLIGHT_PHASE_UNKNOWN: u8 = 0;

    /// Vehicle is in level flight
    pub const FLIGHT_PHASE_LEVEL: u8 = 1;

    /// vehicle is in descend
    pub const FLIGHT_PHASE_DESCEND: u8 = 2;

    /// vehicle is climbing
    pub const FLIGHT_PHASE_CLIMB: u8 = 3;

}


impl Default for FlightPhaseEstimation {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FlightPhaseEstimation::default())
  }
}

impl rosidl_runtime_rs::Message for FlightPhaseEstimation {
  type RmwMsg = super::msg::rmw::FlightPhaseEstimation;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        flight_phase: msg.flight_phase,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      flight_phase: msg.flight_phase,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      flight_phase: msg.flight_phase,
    }
  }
}


// Corresponds to px4_msgs__msg__FollowTarget

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowTarget {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// target position (deg * 1e7)
    pub lat: f64,

    /// target position (deg * 1e7)
    pub lon: f64,

    /// target position
    pub alt: f32,

    /// target vel in y
    pub vy: f32,

    /// target vel in x
    pub vx: f32,

    /// target vel in z
    pub vz: f32,

    /// target reporting capabilities
    pub est_cap: u8,

}



impl Default for FollowTarget {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FollowTarget::default())
  }
}

impl rosidl_runtime_rs::Message for FollowTarget {
  type RmwMsg = super::msg::rmw::FollowTarget;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        lat: msg.lat,
        lon: msg.lon,
        alt: msg.alt,
        vy: msg.vy,
        vx: msg.vx,
        vz: msg.vz,
        est_cap: msg.est_cap,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      lat: msg.lat,
      lon: msg.lon,
      alt: msg.alt,
      vy: msg.vy,
      vx: msg.vx,
      vz: msg.vz,
      est_cap: msg.est_cap,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      lat: msg.lat,
      lon: msg.lon,
      alt: msg.alt,
      vy: msg.vy,
      vx: msg.vx,
      vz: msg.vz,
      est_cap: msg.est_cap,
    }
  }
}


// Corresponds to px4_msgs__msg__FollowTargetEstimator

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowTargetEstimator {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// time of last filter reset (microseconds)
    pub last_filter_reset_timestamp: u64,

    /// True if estimator states are okay to be used
    pub valid: bool,

    /// True if estimator stopped receiving follow_target messages for some time. The estimate can still be valid, though it might be inaccurate.
    pub stale: bool,

    /// Estimated target latitude
    pub lat_est: f64,

    /// Estimated target longitude
    pub lon_est: f64,

    /// Estimated target altitude
    pub alt_est: f32,

    /// Estimated target NED position (m)
    pub pos_est: [f32; 3],

    /// Estimated target NED velocity (m/s)
    pub vel_est: [f32; 3],

    /// Estimated target NED acceleration (m^2/s)
    pub acc_est: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub prediction_count: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fusion_count: u64,

}



impl Default for FollowTargetEstimator {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FollowTargetEstimator::default())
  }
}

impl rosidl_runtime_rs::Message for FollowTargetEstimator {
  type RmwMsg = super::msg::rmw::FollowTargetEstimator;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        last_filter_reset_timestamp: msg.last_filter_reset_timestamp,
        valid: msg.valid,
        stale: msg.stale,
        lat_est: msg.lat_est,
        lon_est: msg.lon_est,
        alt_est: msg.alt_est,
        pos_est: msg.pos_est,
        vel_est: msg.vel_est,
        acc_est: msg.acc_est,
        prediction_count: msg.prediction_count,
        fusion_count: msg.fusion_count,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      last_filter_reset_timestamp: msg.last_filter_reset_timestamp,
      valid: msg.valid,
      stale: msg.stale,
      lat_est: msg.lat_est,
      lon_est: msg.lon_est,
      alt_est: msg.alt_est,
        pos_est: msg.pos_est,
        vel_est: msg.vel_est,
        acc_est: msg.acc_est,
      prediction_count: msg.prediction_count,
      fusion_count: msg.fusion_count,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      last_filter_reset_timestamp: msg.last_filter_reset_timestamp,
      valid: msg.valid,
      stale: msg.stale,
      lat_est: msg.lat_est,
      lon_est: msg.lon_est,
      alt_est: msg.alt_est,
      pos_est: msg.pos_est,
      vel_est: msg.vel_est,
      acc_est: msg.acc_est,
      prediction_count: msg.prediction_count,
      fusion_count: msg.fusion_count,
    }
  }
}


// Corresponds to px4_msgs__msg__FollowTargetStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowTargetStatus {
    /// time since system start
    pub timestamp: u64,

    /// Tracked target course in NED local frame (North is course zero)
    pub tracked_target_course: f32,

    /// Current follow angle setting
    pub follow_angle: f32,

    /// Current orbit angle setpoint from the smooth trajectory generator
    pub orbit_angle_setpoint: f32,

    /// Angular rate commanded from Jerk-limited Orbit Angle trajectory for Orbit Angle
    pub angular_rate_setpoint: f32,

    /// Raw 'idealistic' desired drone position if a drone could teleport from place to places
    pub desired_position_raw: [f32; 3],

    /// True when doing emergency ascent (when distance to ground is below safety altitude)
    pub in_emergency_ascent: bool,

    /// Gimbal pitch commanded to track target in the center of the frame
    pub gimbal_pitch: f32,

}



impl Default for FollowTargetStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FollowTargetStatus::default())
  }
}

impl rosidl_runtime_rs::Message for FollowTargetStatus {
  type RmwMsg = super::msg::rmw::FollowTargetStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        tracked_target_course: msg.tracked_target_course,
        follow_angle: msg.follow_angle,
        orbit_angle_setpoint: msg.orbit_angle_setpoint,
        angular_rate_setpoint: msg.angular_rate_setpoint,
        desired_position_raw: msg.desired_position_raw,
        in_emergency_ascent: msg.in_emergency_ascent,
        gimbal_pitch: msg.gimbal_pitch,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      tracked_target_course: msg.tracked_target_course,
      follow_angle: msg.follow_angle,
      orbit_angle_setpoint: msg.orbit_angle_setpoint,
      angular_rate_setpoint: msg.angular_rate_setpoint,
        desired_position_raw: msg.desired_position_raw,
      in_emergency_ascent: msg.in_emergency_ascent,
      gimbal_pitch: msg.gimbal_pitch,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      tracked_target_course: msg.tracked_target_course,
      follow_angle: msg.follow_angle,
      orbit_angle_setpoint: msg.orbit_angle_setpoint,
      angular_rate_setpoint: msg.angular_rate_setpoint,
      desired_position_raw: msg.desired_position_raw,
      in_emergency_ascent: msg.in_emergency_ascent,
      gimbal_pitch: msg.gimbal_pitch,
    }
  }
}


// Corresponds to px4_msgs__msg__FuelTankStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FuelTankStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// maximum fuel capacity. Must always be provided, either from the driver or a parameter
    pub maximum_fuel_capacity: f32,

    /// consumed fuel, NaN if not measured. Should not be inferred from the max fuel capacity
    pub consumed_fuel: f32,

    /// fuel consumption rate, NaN if not measured
    pub fuel_consumption_rate: f32,

    /// percentage of remaining fuel, UINT8_MAX if not provided
    pub percent_remaining: u8,

    /// remaining fuel, NaN if not measured. Should not be inferred from the max fuel capacity
    pub remaining_fuel: f32,

    /// identifier for the fuel tank. Must match ID of other messages for same fuel system. 0 by default when only a single tank exists
    pub fuel_tank_id: u8,

    /// type of fuel based on MAV_FUEL_TYPE enum. Set to MAV_FUEL_TYPE_UNKNOWN if unknown or it does not fit the provided types
    pub fuel_type: u32,

    /// fuel temperature in Kelvin, NaN if not measured
    pub temperature: f32,

}

impl FuelTankStatus {
    /// fuel type not specified. Fuel levels are normalized (i.e., maximum is 1, and other levels are relative to 1).
    pub const MAV_FUEL_TYPE_UNKNOWN: u8 = 0;

    /// represents generic liquid fuels, such as gasoline or diesel. Fuel levels are measured in millilitres (ml), and flow rates in millilitres per second (ml/s).
    pub const MAV_FUEL_TYPE_LIQUID: u8 = 1;

    /// represents a gas fuel, such as hydrogen, methane, or propane. Fuel levels are in kilo-Pascal (kPa), and flow rates are in milliliters per second (ml/s).
    pub const MAV_FUEL_TYPE_GAS: u8 = 2;

}


impl Default for FuelTankStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FuelTankStatus::default())
  }
}

impl rosidl_runtime_rs::Message for FuelTankStatus {
  type RmwMsg = super::msg::rmw::FuelTankStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        maximum_fuel_capacity: msg.maximum_fuel_capacity,
        consumed_fuel: msg.consumed_fuel,
        fuel_consumption_rate: msg.fuel_consumption_rate,
        percent_remaining: msg.percent_remaining,
        remaining_fuel: msg.remaining_fuel,
        fuel_tank_id: msg.fuel_tank_id,
        fuel_type: msg.fuel_type,
        temperature: msg.temperature,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      maximum_fuel_capacity: msg.maximum_fuel_capacity,
      consumed_fuel: msg.consumed_fuel,
      fuel_consumption_rate: msg.fuel_consumption_rate,
      percent_remaining: msg.percent_remaining,
      remaining_fuel: msg.remaining_fuel,
      fuel_tank_id: msg.fuel_tank_id,
      fuel_type: msg.fuel_type,
      temperature: msg.temperature,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      maximum_fuel_capacity: msg.maximum_fuel_capacity,
      consumed_fuel: msg.consumed_fuel,
      fuel_consumption_rate: msg.fuel_consumption_rate,
      percent_remaining: msg.percent_remaining,
      remaining_fuel: msg.remaining_fuel,
      fuel_tank_id: msg.fuel_tank_id,
      fuel_type: msg.fuel_type,
      temperature: msg.temperature,
    }
  }
}


// Corresponds to px4_msgs__msg__GainCompression

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GainCompression {
    /// Time since system start (microseconds)
    pub timestamp: u64,

    /// [-] [@frame FRD] [@range 0, 1] Multiplicative gain to modify the output of the controller per axis
    pub compression_gains: [f32; 3],

    /// [-] [@frame FRD] Squared output of spectral damper high-pass filter
    pub spectral_damper_hpf: [f32; 3],

    /// [-] [@frame FRD] Spectral damper output squared
    pub spectral_damper_out: [f32; 3],

}



impl Default for GainCompression {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GainCompression::default())
  }
}

impl rosidl_runtime_rs::Message for GainCompression {
  type RmwMsg = super::msg::rmw::GainCompression;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        compression_gains: msg.compression_gains,
        spectral_damper_hpf: msg.spectral_damper_hpf,
        spectral_damper_out: msg.spectral_damper_out,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        compression_gains: msg.compression_gains,
        spectral_damper_hpf: msg.spectral_damper_hpf,
        spectral_damper_out: msg.spectral_damper_out,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      compression_gains: msg.compression_gains,
      spectral_damper_hpf: msg.spectral_damper_hpf,
      spectral_damper_out: msg.spectral_damper_out,
    }
  }
}


// Corresponds to px4_msgs__msg__GeneratorStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GeneratorStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Status flags
    pub status: u64,

    /// Current into/out of battery. Positive for out. Negative for in. NaN: field not provided.
    pub battery_current: f32,

    /// Current going to the UAV. If battery current not available this is the DC current from the generator. Positive for out. Negative for in. NaN: field not provided
    pub load_current: f32,

    /// The power being generated. NaN: field not provided
    pub power_generated: f32,

    /// Voltage of the bus seen at the generator, or battery bus if battery bus is controlled by generator and at a different voltage to main bus.
    pub bus_voltage: f32,

    /// The target battery current. Positive for out. Negative for in. NaN: field not provided
    pub bat_current_setpoint: f32,

    /// Seconds this generator has run since it was rebooted. UINT32_MAX: field not provided.
    pub runtime: u32,

    /// Seconds until this generator requires maintenance.  A negative value indicates maintenance is past-due. INT32_MAX: field not provided.
    pub time_until_maintenance: i32,

    /// Speed of electrical generator or alternator. UINT16_MAX: field not provided.
    pub generator_speed: u16,

    /// The temperature of the rectifier or power converter. INT16_MAX: field not provided.
    pub rectifier_temperature: i16,

    /// The temperature of the mechanical motor, fuel cell core or generator. INT16_MAX: field not provided.
    pub generator_temperature: i16,

}

impl GeneratorStatus {
    /// Generator is off.
    pub const STATUS_FLAG_OFF: u64 = 1;

    /// Generator is ready to start generating power.
    pub const STATUS_FLAG_READY: u64 = 2;

    /// Generator is generating power.
    pub const STATUS_FLAG_GENERATING: u64 = 4;

    /// Generator is charging the batteries (generating enough power to charge and provide the load).
    pub const STATUS_FLAG_CHARGING: u64 = 8;

    /// Generator is operating at a reduced maximum power.
    pub const STATUS_FLAG_REDUCED_POWER: u64 = 16;

    /// Generator is providing the maximum output.
    pub const STATUS_FLAG_MAXPOWER: u64 = 32;

    /// Generator is near the maximum operating temperature, cooling is insufficient.
    pub const STATUS_FLAG_OVERTEMP_WARNING: u64 = 64;

    /// Generator hit the maximum operating temperature and shutdown.
    pub const STATUS_FLAG_OVERTEMP_FAULT: u64 = 128;

    /// Power electronics are near the maximum operating temperature, cooling is insufficient.
    pub const STATUS_FLAG_ELECTRONICS_OVERTEMP_WARNING: u64 = 256;

    /// Power electronics hit the maximum operating temperature and shutdown.
    pub const STATUS_FLAG_ELECTRONICS_OVERTEMP_FAULT: u64 = 512;

    /// Power electronics experienced a fault and shutdown.
    pub const STATUS_FLAG_ELECTRONICS_FAULT: u64 = 1024;

    /// The power source supplying the generator failed e.g. mechanical generator stopped, tether is no longer providing power, solar cell is in shade, hydrogen reaction no longer happening.
    pub const STATUS_FLAG_POWERSOURCE_FAULT: u64 = 2048;

    /// Generator controller having communication problems.
    pub const STATUS_FLAG_COMMUNICATION_WARNING: u64 = 4096;

    /// Power electronic or generator cooling system error.
    pub const STATUS_FLAG_COOLING_WARNING: u64 = 8192;

    /// Generator controller power rail experienced a fault.
    pub const STATUS_FLAG_POWER_RAIL_FAULT: u64 = 16384;

    /// Generator controller exceeded the overcurrent threshold and shutdown to prevent damage.
    pub const STATUS_FLAG_OVERCURRENT_FAULT: u64 = 32768;

    /// Generator controller detected a high current going into the batteries and shutdown to prevent battery damage. |
    pub const STATUS_FLAG_BATTERY_OVERCHARGE_CURRENT_FAULT: u64 = 65536;

    /// Generator controller exceeded it's overvoltage threshold and shutdown to prevent it exceeding the voltage rating.
    pub const STATUS_FLAG_OVERVOLTAGE_FAULT: u64 = 131072;

    /// Batteries are under voltage (generator will not start).
    pub const STATUS_FLAG_BATTERY_UNDERVOLT_FAULT: u64 = 262144;

    /// Generator start is inhibited by e.g. a safety switch.
    pub const STATUS_FLAG_START_INHIBITED: u64 = 524288;

    /// Generator requires maintenance.
    pub const STATUS_FLAG_MAINTENANCE_REQUIRED: u64 = 1048576;

    /// Generator is not ready to generate yet.
    pub const STATUS_FLAG_WARMING_UP: u64 = 2097152;

    /// Generator is idle.
    pub const STATUS_FLAG_IDLE: u64 = 4194304;

}


impl Default for GeneratorStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GeneratorStatus::default())
  }
}

impl rosidl_runtime_rs::Message for GeneratorStatus {
  type RmwMsg = super::msg::rmw::GeneratorStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        status: msg.status,
        battery_current: msg.battery_current,
        load_current: msg.load_current,
        power_generated: msg.power_generated,
        bus_voltage: msg.bus_voltage,
        bat_current_setpoint: msg.bat_current_setpoint,
        runtime: msg.runtime,
        time_until_maintenance: msg.time_until_maintenance,
        generator_speed: msg.generator_speed,
        rectifier_temperature: msg.rectifier_temperature,
        generator_temperature: msg.generator_temperature,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      status: msg.status,
      battery_current: msg.battery_current,
      load_current: msg.load_current,
      power_generated: msg.power_generated,
      bus_voltage: msg.bus_voltage,
      bat_current_setpoint: msg.bat_current_setpoint,
      runtime: msg.runtime,
      time_until_maintenance: msg.time_until_maintenance,
      generator_speed: msg.generator_speed,
      rectifier_temperature: msg.rectifier_temperature,
      generator_temperature: msg.generator_temperature,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      status: msg.status,
      battery_current: msg.battery_current,
      load_current: msg.load_current,
      power_generated: msg.power_generated,
      bus_voltage: msg.bus_voltage,
      bat_current_setpoint: msg.bat_current_setpoint,
      runtime: msg.runtime,
      time_until_maintenance: msg.time_until_maintenance,
      generator_speed: msg.generator_speed,
      rectifier_temperature: msg.rectifier_temperature,
      generator_temperature: msg.generator_temperature,
    }
  }
}


// Corresponds to px4_msgs__msg__GeofenceResult

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GeofenceResult {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// true the check for max distance from Home is triggered
    pub geofence_max_dist_triggered: bool,

    /// true the check for max altitude above Home is triggered
    pub geofence_max_alt_triggered: bool,

    /// true the check for custom inclusion/exclusion geofence(s) is triggered
    pub geofence_custom_fence_triggered: bool,

    /// action to take when the geofence is breached
    pub geofence_action: u8,

}

impl GeofenceResult {
    /// no action on geofence violation
    pub const GF_ACTION_NONE: u8 = 0;

    /// critical mavlink message
    pub const GF_ACTION_WARN: u8 = 1;

    /// switch to AUTO|LOITER
    pub const GF_ACTION_LOITER: u8 = 2;

    /// switch to AUTO|RTL
    pub const GF_ACTION_RTL: u8 = 3;

    /// flight termination
    pub const GF_ACTION_TERMINATE: u8 = 4;

    /// switch to AUTO|LAND
    pub const GF_ACTION_LAND: u8 = 5;

}


impl Default for GeofenceResult {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GeofenceResult::default())
  }
}

impl rosidl_runtime_rs::Message for GeofenceResult {
  type RmwMsg = super::msg::rmw::GeofenceResult;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        geofence_max_dist_triggered: msg.geofence_max_dist_triggered,
        geofence_max_alt_triggered: msg.geofence_max_alt_triggered,
        geofence_custom_fence_triggered: msg.geofence_custom_fence_triggered,
        geofence_action: msg.geofence_action,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      geofence_max_dist_triggered: msg.geofence_max_dist_triggered,
      geofence_max_alt_triggered: msg.geofence_max_alt_triggered,
      geofence_custom_fence_triggered: msg.geofence_custom_fence_triggered,
      geofence_action: msg.geofence_action,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      geofence_max_dist_triggered: msg.geofence_max_dist_triggered,
      geofence_max_alt_triggered: msg.geofence_max_alt_triggered,
      geofence_custom_fence_triggered: msg.geofence_custom_fence_triggered,
      geofence_action: msg.geofence_action,
    }
  }
}


// Corresponds to px4_msgs__msg__GeofenceStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GeofenceStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// loaded geofence id
    pub geofence_id: u32,

    /// Current geofence status
    pub status: u8,

}

impl GeofenceStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GF_STATUS_LOADING: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GF_STATUS_READY: u8 = 1;

}


impl Default for GeofenceStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GeofenceStatus::default())
  }
}

impl rosidl_runtime_rs::Message for GeofenceStatus {
  type RmwMsg = super::msg::rmw::GeofenceStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        geofence_id: msg.geofence_id,
        status: msg.status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      geofence_id: msg.geofence_id,
      status: msg.status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      geofence_id: msg.geofence_id,
      status: msg.status,
    }
  }
}


// Corresponds to px4_msgs__msg__GimbalControls

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GimbalControls {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp the data this control response is based on was sampled
    pub timestamp_sample: u64,

    /// Normalized output. 1 means maximum positive position. -1 maximum negative position. 0 means no deflection. NaN maps to disarmed.
    pub control: [f32; 3],

}

impl GimbalControls {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INDEX_ROLL: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INDEX_PITCH: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INDEX_YAW: u8 = 2;

}


impl Default for GimbalControls {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GimbalControls::default())
  }
}

impl rosidl_runtime_rs::Message for GimbalControls {
  type RmwMsg = super::msg::rmw::GimbalControls;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        control: msg.control,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
        control: msg.control,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      control: msg.control,
    }
  }
}


// Corresponds to px4_msgs__msg__GimbalDeviceAttitudeStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GimbalDeviceAttitudeStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_system: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_component: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_flags: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub q: [f32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_velocity_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_velocity_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_velocity_z: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub failure_flags: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub delta_yaw: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub delta_yaw_velocity: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gimbal_device_id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub received_from_mavlink: bool,

}

impl GimbalDeviceAttitudeStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DEVICE_FLAGS_RETRACT: u16 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DEVICE_FLAGS_NEUTRAL: u16 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DEVICE_FLAGS_ROLL_LOCK: u16 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DEVICE_FLAGS_PITCH_LOCK: u16 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DEVICE_FLAGS_YAW_LOCK: u16 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DEVICE_FLAGS_YAW_IN_VEHICLE_FRAME: u16 = 32;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DEVICE_FLAGS_YAW_IN_EARTH_FRAME: u16 = 64;

}


impl Default for GimbalDeviceAttitudeStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GimbalDeviceAttitudeStatus::default())
  }
}

impl rosidl_runtime_rs::Message for GimbalDeviceAttitudeStatus {
  type RmwMsg = super::msg::rmw::GimbalDeviceAttitudeStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        target_system: msg.target_system,
        target_component: msg.target_component,
        device_flags: msg.device_flags,
        q: msg.q,
        angular_velocity_x: msg.angular_velocity_x,
        angular_velocity_y: msg.angular_velocity_y,
        angular_velocity_z: msg.angular_velocity_z,
        failure_flags: msg.failure_flags,
        delta_yaw: msg.delta_yaw,
        delta_yaw_velocity: msg.delta_yaw_velocity,
        gimbal_device_id: msg.gimbal_device_id,
        received_from_mavlink: msg.received_from_mavlink,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      target_system: msg.target_system,
      target_component: msg.target_component,
      device_flags: msg.device_flags,
        q: msg.q,
      angular_velocity_x: msg.angular_velocity_x,
      angular_velocity_y: msg.angular_velocity_y,
      angular_velocity_z: msg.angular_velocity_z,
      failure_flags: msg.failure_flags,
      delta_yaw: msg.delta_yaw,
      delta_yaw_velocity: msg.delta_yaw_velocity,
      gimbal_device_id: msg.gimbal_device_id,
      received_from_mavlink: msg.received_from_mavlink,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      target_system: msg.target_system,
      target_component: msg.target_component,
      device_flags: msg.device_flags,
      q: msg.q,
      angular_velocity_x: msg.angular_velocity_x,
      angular_velocity_y: msg.angular_velocity_y,
      angular_velocity_z: msg.angular_velocity_z,
      failure_flags: msg.failure_flags,
      delta_yaw: msg.delta_yaw,
      delta_yaw_velocity: msg.delta_yaw_velocity,
      gimbal_device_id: msg.gimbal_device_id,
      received_from_mavlink: msg.received_from_mavlink,
    }
  }
}


// Corresponds to px4_msgs__msg__GimbalDeviceInformation

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GimbalDeviceInformation {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vendor_name: [u8; 32],


    // This member is not documented.
    #[allow(missing_docs)]
    pub model_name: [u8; 32],


    // This member is not documented.
    #[allow(missing_docs)]
    pub custom_name: [u8; 32],


    // This member is not documented.
    #[allow(missing_docs)]
    pub firmware_version: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hardware_version: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub uid: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cap_flags: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub custom_cap_flags: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub roll_min: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub roll_max: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch_min: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch_max: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_min: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_max: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gimbal_device_id: u8,

}

impl GimbalDeviceInformation {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_DEVICE_CAP_FLAGS_HAS_RETRACT: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_DEVICE_CAP_FLAGS_HAS_NEUTRAL: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_DEVICE_CAP_FLAGS_HAS_ROLL_AXIS: u32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_DEVICE_CAP_FLAGS_HAS_ROLL_FOLLOW: u32 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_DEVICE_CAP_FLAGS_HAS_ROLL_LOCK: u32 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_DEVICE_CAP_FLAGS_HAS_PITCH_AXIS: u32 = 32;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_DEVICE_CAP_FLAGS_HAS_PITCH_FOLLOW: u32 = 64;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_DEVICE_CAP_FLAGS_HAS_PITCH_LOCK: u32 = 128;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_DEVICE_CAP_FLAGS_HAS_YAW_AXIS: u32 = 256;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_DEVICE_CAP_FLAGS_HAS_YAW_FOLLOW: u32 = 512;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_DEVICE_CAP_FLAGS_HAS_YAW_LOCK: u32 = 1024;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_DEVICE_CAP_FLAGS_SUPPORTS_INFINITE_YAW: u32 = 2048;

}


impl Default for GimbalDeviceInformation {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GimbalDeviceInformation::default())
  }
}

impl rosidl_runtime_rs::Message for GimbalDeviceInformation {
  type RmwMsg = super::msg::rmw::GimbalDeviceInformation;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        vendor_name: msg.vendor_name,
        model_name: msg.model_name,
        custom_name: msg.custom_name,
        firmware_version: msg.firmware_version,
        hardware_version: msg.hardware_version,
        uid: msg.uid,
        cap_flags: msg.cap_flags,
        custom_cap_flags: msg.custom_cap_flags,
        roll_min: msg.roll_min,
        roll_max: msg.roll_max,
        pitch_min: msg.pitch_min,
        pitch_max: msg.pitch_max,
        yaw_min: msg.yaw_min,
        yaw_max: msg.yaw_max,
        gimbal_device_id: msg.gimbal_device_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        vendor_name: msg.vendor_name,
        model_name: msg.model_name,
        custom_name: msg.custom_name,
      firmware_version: msg.firmware_version,
      hardware_version: msg.hardware_version,
      uid: msg.uid,
      cap_flags: msg.cap_flags,
      custom_cap_flags: msg.custom_cap_flags,
      roll_min: msg.roll_min,
      roll_max: msg.roll_max,
      pitch_min: msg.pitch_min,
      pitch_max: msg.pitch_max,
      yaw_min: msg.yaw_min,
      yaw_max: msg.yaw_max,
      gimbal_device_id: msg.gimbal_device_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      vendor_name: msg.vendor_name,
      model_name: msg.model_name,
      custom_name: msg.custom_name,
      firmware_version: msg.firmware_version,
      hardware_version: msg.hardware_version,
      uid: msg.uid,
      cap_flags: msg.cap_flags,
      custom_cap_flags: msg.custom_cap_flags,
      roll_min: msg.roll_min,
      roll_max: msg.roll_max,
      pitch_min: msg.pitch_min,
      pitch_max: msg.pitch_max,
      yaw_min: msg.yaw_min,
      yaw_max: msg.yaw_max,
      gimbal_device_id: msg.gimbal_device_id,
    }
  }
}


// Corresponds to px4_msgs__msg__GimbalDeviceSetAttitude

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GimbalDeviceSetAttitude {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_system: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_component: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flags: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub q: [f32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_velocity_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_velocity_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_velocity_z: f32,

}

impl GimbalDeviceSetAttitude {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_DEVICE_FLAGS_RETRACT: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_DEVICE_FLAGS_NEUTRAL: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_DEVICE_FLAGS_ROLL_LOCK: u32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_DEVICE_FLAGS_PITCH_LOCK: u32 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_DEVICE_FLAGS_YAW_LOCK: u32 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_DEVICE_FLAGS_YAW_IN_VEHICLE_FRAME: u32 = 32;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_DEVICE_FLAGS_YAW_IN_EARTH_FRAME: u32 = 64;

}


impl Default for GimbalDeviceSetAttitude {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GimbalDeviceSetAttitude::default())
  }
}

impl rosidl_runtime_rs::Message for GimbalDeviceSetAttitude {
  type RmwMsg = super::msg::rmw::GimbalDeviceSetAttitude;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        target_system: msg.target_system,
        target_component: msg.target_component,
        flags: msg.flags,
        q: msg.q,
        angular_velocity_x: msg.angular_velocity_x,
        angular_velocity_y: msg.angular_velocity_y,
        angular_velocity_z: msg.angular_velocity_z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      target_system: msg.target_system,
      target_component: msg.target_component,
      flags: msg.flags,
        q: msg.q,
      angular_velocity_x: msg.angular_velocity_x,
      angular_velocity_y: msg.angular_velocity_y,
      angular_velocity_z: msg.angular_velocity_z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      target_system: msg.target_system,
      target_component: msg.target_component,
      flags: msg.flags,
      q: msg.q,
      angular_velocity_x: msg.angular_velocity_x,
      angular_velocity_y: msg.angular_velocity_y,
      angular_velocity_z: msg.angular_velocity_z,
    }
  }
}


// Corresponds to px4_msgs__msg__GimbalManagerInformation

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GimbalManagerInformation {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cap_flags: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gimbal_device_id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub roll_min: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub roll_max: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch_min: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch_max: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_min: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_max: f32,

}

impl GimbalManagerInformation {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_CAP_FLAGS_HAS_RETRACT: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_CAP_FLAGS_HAS_NEUTRAL: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_AXIS: u32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_FOLLOW: u32 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_LOCK: u32 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_AXIS: u32 = 32;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_FOLLOW: u32 = 64;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_LOCK: u32 = 128;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_AXIS: u32 = 256;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_FOLLOW: u32 = 512;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_LOCK: u32 = 1024;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_CAP_FLAGS_SUPPORTS_INFINITE_YAW: u32 = 2048;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_LOCAL: u32 = 65536;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_GLOBAL: u32 = 131072;

}


impl Default for GimbalManagerInformation {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GimbalManagerInformation::default())
  }
}

impl rosidl_runtime_rs::Message for GimbalManagerInformation {
  type RmwMsg = super::msg::rmw::GimbalManagerInformation;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        cap_flags: msg.cap_flags,
        gimbal_device_id: msg.gimbal_device_id,
        roll_min: msg.roll_min,
        roll_max: msg.roll_max,
        pitch_min: msg.pitch_min,
        pitch_max: msg.pitch_max,
        yaw_min: msg.yaw_min,
        yaw_max: msg.yaw_max,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      cap_flags: msg.cap_flags,
      gimbal_device_id: msg.gimbal_device_id,
      roll_min: msg.roll_min,
      roll_max: msg.roll_max,
      pitch_min: msg.pitch_min,
      pitch_max: msg.pitch_max,
      yaw_min: msg.yaw_min,
      yaw_max: msg.yaw_max,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      cap_flags: msg.cap_flags,
      gimbal_device_id: msg.gimbal_device_id,
      roll_min: msg.roll_min,
      roll_max: msg.roll_max,
      pitch_min: msg.pitch_min,
      pitch_max: msg.pitch_max,
      yaw_min: msg.yaw_min,
      yaw_max: msg.yaw_max,
    }
  }
}


// Corresponds to px4_msgs__msg__GimbalManagerSetAttitude

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GimbalManagerSetAttitude {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub origin_sysid: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub origin_compid: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_system: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_component: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flags: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gimbal_device_id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub q: [f32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_velocity_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_velocity_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_velocity_z: f32,

}

impl GimbalManagerSetAttitude {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_FLAGS_RETRACT: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_FLAGS_NEUTRAL: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_FLAGS_ROLL_LOCK: u32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_FLAGS_PITCH_LOCK: u32 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_FLAGS_YAW_LOCK: u32 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 2;

}


impl Default for GimbalManagerSetAttitude {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GimbalManagerSetAttitude::default())
  }
}

impl rosidl_runtime_rs::Message for GimbalManagerSetAttitude {
  type RmwMsg = super::msg::rmw::GimbalManagerSetAttitude;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        origin_sysid: msg.origin_sysid,
        origin_compid: msg.origin_compid,
        target_system: msg.target_system,
        target_component: msg.target_component,
        flags: msg.flags,
        gimbal_device_id: msg.gimbal_device_id,
        q: msg.q,
        angular_velocity_x: msg.angular_velocity_x,
        angular_velocity_y: msg.angular_velocity_y,
        angular_velocity_z: msg.angular_velocity_z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      origin_sysid: msg.origin_sysid,
      origin_compid: msg.origin_compid,
      target_system: msg.target_system,
      target_component: msg.target_component,
      flags: msg.flags,
      gimbal_device_id: msg.gimbal_device_id,
        q: msg.q,
      angular_velocity_x: msg.angular_velocity_x,
      angular_velocity_y: msg.angular_velocity_y,
      angular_velocity_z: msg.angular_velocity_z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      origin_sysid: msg.origin_sysid,
      origin_compid: msg.origin_compid,
      target_system: msg.target_system,
      target_component: msg.target_component,
      flags: msg.flags,
      gimbal_device_id: msg.gimbal_device_id,
      q: msg.q,
      angular_velocity_x: msg.angular_velocity_x,
      angular_velocity_y: msg.angular_velocity_y,
      angular_velocity_z: msg.angular_velocity_z,
    }
  }
}


// Corresponds to px4_msgs__msg__GimbalManagerSetManualControl

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GimbalManagerSetManualControl {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub origin_sysid: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub origin_compid: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_system: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_component: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flags: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gimbal_device_id: u8,

    /// unitless -1..1, can be NAN
    pub pitch: f32,

    /// unitless -1..1, can be NAN
    pub yaw: f32,

    /// unitless -1..1, can be NAN
    pub pitch_rate: f32,

    /// unitless -1..1, can be NAN
    pub yaw_rate: f32,

}

impl GimbalManagerSetManualControl {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_FLAGS_RETRACT: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_FLAGS_NEUTRAL: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_FLAGS_ROLL_LOCK: u32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_FLAGS_PITCH_LOCK: u32 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GIMBAL_MANAGER_FLAGS_YAW_LOCK: u32 = 16;

}


impl Default for GimbalManagerSetManualControl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GimbalManagerSetManualControl::default())
  }
}

impl rosidl_runtime_rs::Message for GimbalManagerSetManualControl {
  type RmwMsg = super::msg::rmw::GimbalManagerSetManualControl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        origin_sysid: msg.origin_sysid,
        origin_compid: msg.origin_compid,
        target_system: msg.target_system,
        target_component: msg.target_component,
        flags: msg.flags,
        gimbal_device_id: msg.gimbal_device_id,
        pitch: msg.pitch,
        yaw: msg.yaw,
        pitch_rate: msg.pitch_rate,
        yaw_rate: msg.yaw_rate,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      origin_sysid: msg.origin_sysid,
      origin_compid: msg.origin_compid,
      target_system: msg.target_system,
      target_component: msg.target_component,
      flags: msg.flags,
      gimbal_device_id: msg.gimbal_device_id,
      pitch: msg.pitch,
      yaw: msg.yaw,
      pitch_rate: msg.pitch_rate,
      yaw_rate: msg.yaw_rate,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      origin_sysid: msg.origin_sysid,
      origin_compid: msg.origin_compid,
      target_system: msg.target_system,
      target_component: msg.target_component,
      flags: msg.flags,
      gimbal_device_id: msg.gimbal_device_id,
      pitch: msg.pitch,
      yaw: msg.yaw,
      pitch_rate: msg.pitch_rate,
      yaw_rate: msg.yaw_rate,
    }
  }
}


// Corresponds to px4_msgs__msg__GimbalManagerStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GimbalManagerStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flags: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gimbal_device_id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub primary_control_sysid: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub primary_control_compid: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub secondary_control_sysid: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub secondary_control_compid: u8,

}



impl Default for GimbalManagerStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GimbalManagerStatus::default())
  }
}

impl rosidl_runtime_rs::Message for GimbalManagerStatus {
  type RmwMsg = super::msg::rmw::GimbalManagerStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        flags: msg.flags,
        gimbal_device_id: msg.gimbal_device_id,
        primary_control_sysid: msg.primary_control_sysid,
        primary_control_compid: msg.primary_control_compid,
        secondary_control_sysid: msg.secondary_control_sysid,
        secondary_control_compid: msg.secondary_control_compid,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      flags: msg.flags,
      gimbal_device_id: msg.gimbal_device_id,
      primary_control_sysid: msg.primary_control_sysid,
      primary_control_compid: msg.primary_control_compid,
      secondary_control_sysid: msg.secondary_control_sysid,
      secondary_control_compid: msg.secondary_control_compid,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      flags: msg.flags,
      gimbal_device_id: msg.gimbal_device_id,
      primary_control_sysid: msg.primary_control_sysid,
      primary_control_compid: msg.primary_control_compid,
      secondary_control_sysid: msg.secondary_control_sysid,
      secondary_control_compid: msg.secondary_control_compid,
    }
  }
}


// Corresponds to px4_msgs__msg__GotoSetpoint
/// Position and (optional) heading setpoints with corresponding speed constraints
///
/// Setpoints are intended as inputs to position and heading smoothers, respectively.
/// Setpoints do not need to be kinematically consistent.
/// Optional heading setpoints may be specified as controlled by the respective flag.
/// Unset optional setpoints are not controlled.
/// Unset optional constraints default to vehicle specifications.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GotoSetpoint {
    /// Time since system start
    pub timestamp: u64,

    /// setpoints
    /// [m] [@frame NED] NED local world frame
    pub position: [f32; 3],

    /// true if heading is to be controlled
    pub flag_control_heading: bool,

    /// (optional) [-pi,pi] from North
    pub heading: f32,

    /// constraints
    /// true if setting a non-default horizontal speed limit
    pub flag_set_max_horizontal_speed: bool,

    /// (optional) Maximum speed (absolute) in the NE-plane
    pub max_horizontal_speed: f32,

    /// true if setting a non-default vertical speed limit
    pub flag_set_max_vertical_speed: bool,

    /// (optional) Maximum speed (absolute) in the D-axis
    pub max_vertical_speed: f32,

    /// true if setting a non-default heading rate limit
    pub flag_set_max_heading_rate: bool,

    /// (optional) Maximum heading rate (absolute)
    pub max_heading_rate: f32,

}

impl GotoSetpoint {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 0;

}


impl Default for GotoSetpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GotoSetpoint::default())
  }
}

impl rosidl_runtime_rs::Message for GotoSetpoint {
  type RmwMsg = super::msg::rmw::GotoSetpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        position: msg.position,
        flag_control_heading: msg.flag_control_heading,
        heading: msg.heading,
        flag_set_max_horizontal_speed: msg.flag_set_max_horizontal_speed,
        max_horizontal_speed: msg.max_horizontal_speed,
        flag_set_max_vertical_speed: msg.flag_set_max_vertical_speed,
        max_vertical_speed: msg.max_vertical_speed,
        flag_set_max_heading_rate: msg.flag_set_max_heading_rate,
        max_heading_rate: msg.max_heading_rate,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        position: msg.position,
      flag_control_heading: msg.flag_control_heading,
      heading: msg.heading,
      flag_set_max_horizontal_speed: msg.flag_set_max_horizontal_speed,
      max_horizontal_speed: msg.max_horizontal_speed,
      flag_set_max_vertical_speed: msg.flag_set_max_vertical_speed,
      max_vertical_speed: msg.max_vertical_speed,
      flag_set_max_heading_rate: msg.flag_set_max_heading_rate,
      max_heading_rate: msg.max_heading_rate,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      position: msg.position,
      flag_control_heading: msg.flag_control_heading,
      heading: msg.heading,
      flag_set_max_horizontal_speed: msg.flag_set_max_horizontal_speed,
      max_horizontal_speed: msg.max_horizontal_speed,
      flag_set_max_vertical_speed: msg.flag_set_max_vertical_speed,
      max_vertical_speed: msg.max_vertical_speed,
      flag_set_max_heading_rate: msg.flag_set_max_heading_rate,
      max_heading_rate: msg.max_heading_rate,
    }
  }
}


// Corresponds to px4_msgs__msg__GpioConfig
/// GPIO configuration

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GpioConfig {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Device id
    pub device_id: u32,

    /// Pin mask
    pub mask: u32,

    /// Initial pin output state
    pub state: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub config: u32,

}

impl GpioConfig {
    /// Configuration Mask
    /// Bit 0-3: Direction: 0=Input, 1=Output
    /// Bit 4-7: Input Config: 0=Floating, 1=PullUp, 2=PullDown
    /// Bit 8-12: Output Config: 0=PushPull, 1=OpenDrain
    /// Bit 13-31: Reserved
    /// 0x0000
    pub const INPUT: u32 = 0;

    /// 0x0001
    pub const OUTPUT: u32 = 1;

    /// 0x0010
    pub const PULLUP: u32 = 16;

    /// 0x0020
    pub const PULLDOWN: u32 = 32;

    /// 0x0100
    pub const OPENDRAIN: u32 = 256;

    /// 0x0000
    pub const INPUT_FLOATING: u32 = 0;

    /// 0x0010
    pub const INPUT_PULLUP: u32 = 16;

    /// 0x0020
    pub const INPUT_PULLDOWN: u32 = 32;

    /// 0x0000
    pub const OUTPUT_PUSHPULL: u32 = 0;

    /// 0x0100
    pub const OUTPUT_OPENDRAIN: u32 = 256;

    /// 0x0110
    pub const OUTPUT_OPENDRAIN_PULLUP: u32 = 272;

}


impl Default for GpioConfig {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GpioConfig::default())
  }
}

impl rosidl_runtime_rs::Message for GpioConfig {
  type RmwMsg = super::msg::rmw::GpioConfig;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        device_id: msg.device_id,
        mask: msg.mask,
        state: msg.state,
        config: msg.config,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
      mask: msg.mask,
      state: msg.state,
      config: msg.config,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
      mask: msg.mask,
      state: msg.state,
      config: msg.config,
    }
  }
}


// Corresponds to px4_msgs__msg__GpioIn
/// GPIO mask and state

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GpioIn {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Device id
    pub device_id: u32,

    /// pin state mask
    pub state: u32,

}

impl GpioIn {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAX_INSTANCES: u8 = 8;

}


impl Default for GpioIn {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GpioIn::default())
  }
}

impl rosidl_runtime_rs::Message for GpioIn {
  type RmwMsg = super::msg::rmw::GpioIn;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        device_id: msg.device_id,
        state: msg.state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
      state: msg.state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
      state: msg.state,
    }
  }
}


// Corresponds to px4_msgs__msg__GpioOut
/// GPIO mask and state

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GpioOut {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Device id
    pub device_id: u32,

    /// pin mask
    pub mask: u32,

    /// pin state mask
    pub state: u32,

}



impl Default for GpioOut {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GpioOut::default())
  }
}

impl rosidl_runtime_rs::Message for GpioOut {
  type RmwMsg = super::msg::rmw::GpioOut;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        device_id: msg.device_id,
        mask: msg.mask,
        state: msg.state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
      mask: msg.mask,
      state: msg.state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
      mask: msg.mask,
      state: msg.state,
    }
  }
}


// Corresponds to px4_msgs__msg__GpioRequest
/// Request GPIO mask to be read

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GpioRequest {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Device id
    pub device_id: u32,

}



impl Default for GpioRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GpioRequest::default())
  }
}

impl rosidl_runtime_rs::Message for GpioRequest {
  type RmwMsg = super::msg::rmw::GpioRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        device_id: msg.device_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
    }
  }
}


// Corresponds to px4_msgs__msg__GpsDump
/// This message is used to dump the raw gps communication to the log.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GpsDump {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Instance of GNSS receiver
    pub instance: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_id: u32,

    /// length of data, MSB bit set = message to the gps device,
    /// clear = message from the device
    pub len: u8,

    /// data to write to the log
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub data: [u8; 79],

}

impl GpsDump {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INSTANCE_MAIN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INSTANCE_SECONDARY: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 16;

}


impl Default for GpsDump {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GpsDump::default())
  }
}

impl rosidl_runtime_rs::Message for GpsDump {
  type RmwMsg = super::msg::rmw::GpsDump;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        instance: msg.instance,
        device_id: msg.device_id,
        len: msg.len,
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      instance: msg.instance,
      device_id: msg.device_id,
      len: msg.len,
        data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      instance: msg.instance,
      device_id: msg.device_id,
      len: msg.len,
      data: msg.data,
    }
  }
}


// Corresponds to px4_msgs__msg__GpsInjectData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GpsInjectData {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// unique device ID for the sensor that does not change between power cycles
    pub device_id: u32,

    /// length of data
    pub len: u16,

    /// LSB: 1=fragmented across multiple uORB publications
    pub flags: u8,

    /// data chunk to write to GPS device (RTCM message)
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub data: [u8; 300],

}

impl GpsInjectData {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAX_INSTANCES: u8 = 2;

}


impl Default for GpsInjectData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GpsInjectData::default())
  }
}

impl rosidl_runtime_rs::Message for GpsInjectData {
  type RmwMsg = super::msg::rmw::GpsInjectData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        device_id: msg.device_id,
        len: msg.len,
        flags: msg.flags,
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
      len: msg.len,
      flags: msg.flags,
        data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
      len: msg.len,
      flags: msg.flags,
      data: msg.data,
    }
  }
}


// Corresponds to px4_msgs__msg__Gripper
/// Used to command an actuation in the gripper, which is mapped to a specific output in the control allocation module

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Gripper {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: u64,

    /// Commanded state for the gripper
    pub command: i8,

}

impl Gripper {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMMAND_GRAB: i8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMMAND_RELEASE: i8 = 1;

}


impl Default for Gripper {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Gripper::default())
  }
}

impl rosidl_runtime_rs::Message for Gripper {
  type RmwMsg = super::msg::rmw::Gripper;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        command: msg.command,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      command: msg.command,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      command: msg.command,
    }
  }
}


// Corresponds to px4_msgs__msg__HealthReport

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HealthReport {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// bitfield for each flight mode (NAVIGATION_STATE_*) if arming is possible
    pub can_arm_mode_flags: u64,

    /// bitfield for each flight mode if it can run
    pub can_run_mode_flags: u64,

    /// flags for each health_component_t
    pub health_is_present_flags: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub health_warning_flags: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub health_error_flags: u64,

    /// A component is required but missing, if present==0 and error==1
    pub arming_check_warning_flags: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub arming_check_error_flags: u64,

}



impl Default for HealthReport {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HealthReport::default())
  }
}

impl rosidl_runtime_rs::Message for HealthReport {
  type RmwMsg = super::msg::rmw::HealthReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        can_arm_mode_flags: msg.can_arm_mode_flags,
        can_run_mode_flags: msg.can_run_mode_flags,
        health_is_present_flags: msg.health_is_present_flags,
        health_warning_flags: msg.health_warning_flags,
        health_error_flags: msg.health_error_flags,
        arming_check_warning_flags: msg.arming_check_warning_flags,
        arming_check_error_flags: msg.arming_check_error_flags,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      can_arm_mode_flags: msg.can_arm_mode_flags,
      can_run_mode_flags: msg.can_run_mode_flags,
      health_is_present_flags: msg.health_is_present_flags,
      health_warning_flags: msg.health_warning_flags,
      health_error_flags: msg.health_error_flags,
      arming_check_warning_flags: msg.arming_check_warning_flags,
      arming_check_error_flags: msg.arming_check_error_flags,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      can_arm_mode_flags: msg.can_arm_mode_flags,
      can_run_mode_flags: msg.can_run_mode_flags,
      health_is_present_flags: msg.health_is_present_flags,
      health_warning_flags: msg.health_warning_flags,
      health_error_flags: msg.health_error_flags,
      arming_check_warning_flags: msg.arming_check_warning_flags,
      arming_check_error_flags: msg.arming_check_error_flags,
    }
  }
}


// Corresponds to px4_msgs__msg__HeaterStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HeaterStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub heater_on: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature_target_met: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature_sensor: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature_target: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub controller_period_usec: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub controller_time_on_usec: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub proportional_value: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub integrator_value: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feed_forward_value: f32,

    /// Supply voltage (V)
    pub supply_voltage: f32,

    /// Heater current (A)
    pub heater_current: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub nominal_multiplier: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature_source: u8,

}

impl HeaterStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_GPIO: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_PX4IO: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TEMPERATURE_SOURCE_IMU: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TEMPERATURE_SOURCE_HYGRO: u8 = 1;

}


impl Default for HeaterStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HeaterStatus::default())
  }
}

impl rosidl_runtime_rs::Message for HeaterStatus {
  type RmwMsg = super::msg::rmw::HeaterStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        device_id: msg.device_id,
        heater_on: msg.heater_on,
        temperature_target_met: msg.temperature_target_met,
        temperature_sensor: msg.temperature_sensor,
        temperature_target: msg.temperature_target,
        controller_period_usec: msg.controller_period_usec,
        controller_time_on_usec: msg.controller_time_on_usec,
        proportional_value: msg.proportional_value,
        integrator_value: msg.integrator_value,
        feed_forward_value: msg.feed_forward_value,
        supply_voltage: msg.supply_voltage,
        heater_current: msg.heater_current,
        nominal_multiplier: msg.nominal_multiplier,
        mode: msg.mode,
        temperature_source: msg.temperature_source,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
      heater_on: msg.heater_on,
      temperature_target_met: msg.temperature_target_met,
      temperature_sensor: msg.temperature_sensor,
      temperature_target: msg.temperature_target,
      controller_period_usec: msg.controller_period_usec,
      controller_time_on_usec: msg.controller_time_on_usec,
      proportional_value: msg.proportional_value,
      integrator_value: msg.integrator_value,
      feed_forward_value: msg.feed_forward_value,
      supply_voltage: msg.supply_voltage,
      heater_current: msg.heater_current,
      nominal_multiplier: msg.nominal_multiplier,
      mode: msg.mode,
      temperature_source: msg.temperature_source,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
      heater_on: msg.heater_on,
      temperature_target_met: msg.temperature_target_met,
      temperature_sensor: msg.temperature_sensor,
      temperature_target: msg.temperature_target,
      controller_period_usec: msg.controller_period_usec,
      controller_time_on_usec: msg.controller_time_on_usec,
      proportional_value: msg.proportional_value,
      integrator_value: msg.integrator_value,
      feed_forward_value: msg.feed_forward_value,
      supply_voltage: msg.supply_voltage,
      heater_current: msg.heater_current,
      nominal_multiplier: msg.nominal_multiplier,
      mode: msg.mode,
      temperature_source: msg.temperature_source,
    }
  }
}


// Corresponds to px4_msgs__msg__HomePosition
/// GPS home position in WGS84 coordinates.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HomePosition {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Latitude in degrees
    pub lat: f64,

    /// Longitude in degrees
    pub lon: f64,

    /// Altitude in meters (AMSL)
    pub alt: f32,

    /// X coordinate in meters
    pub x: f32,

    /// Y coordinate in meters
    pub y: f32,

    /// Z coordinate in meters
    pub z: f32,

    /// Pitch angle in radians
    pub roll: f32,

    /// Roll angle in radians
    pub pitch: f32,

    /// Yaw angle in radians
    pub yaw: f32,

    /// true when the altitude has been set
    pub valid_alt: bool,

    /// true when the latitude and longitude have been set
    pub valid_hpos: bool,

    /// true when the local position (xyz) has been set
    pub valid_lpos: bool,

    /// true when home position was set manually
    pub manual_home: bool,

    /// update counter of the home position
    pub update_count: u32,

}

impl HomePosition {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 1;

}


impl Default for HomePosition {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HomePosition::default())
  }
}

impl rosidl_runtime_rs::Message for HomePosition {
  type RmwMsg = super::msg::rmw::HomePosition;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        lat: msg.lat,
        lon: msg.lon,
        alt: msg.alt,
        x: msg.x,
        y: msg.y,
        z: msg.z,
        roll: msg.roll,
        pitch: msg.pitch,
        yaw: msg.yaw,
        valid_alt: msg.valid_alt,
        valid_hpos: msg.valid_hpos,
        valid_lpos: msg.valid_lpos,
        manual_home: msg.manual_home,
        update_count: msg.update_count,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      lat: msg.lat,
      lon: msg.lon,
      alt: msg.alt,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      roll: msg.roll,
      pitch: msg.pitch,
      yaw: msg.yaw,
      valid_alt: msg.valid_alt,
      valid_hpos: msg.valid_hpos,
      valid_lpos: msg.valid_lpos,
      manual_home: msg.manual_home,
      update_count: msg.update_count,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      lat: msg.lat,
      lon: msg.lon,
      alt: msg.alt,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      roll: msg.roll,
      pitch: msg.pitch,
      yaw: msg.yaw,
      valid_alt: msg.valid_alt,
      valid_hpos: msg.valid_hpos,
      valid_lpos: msg.valid_lpos,
      manual_home: msg.manual_home,
      update_count: msg.update_count,
    }
  }
}


// Corresponds to px4_msgs__msg__HoverThrustEstimate

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HoverThrustEstimate {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// time of corresponding sensor data last used for this estimate
    pub timestamp_sample: u64,

    /// estimated hover thrust [0.1, 0.9]
    pub hover_thrust: f32,

    /// estimated hover thrust variance
    pub hover_thrust_var: f32,

    /// innovation of the last acceleration fusion
    pub accel_innov: f32,

    /// innovation variance of the last acceleration fusion
    pub accel_innov_var: f32,

    /// normalized innovation squared test ratio
    pub accel_innov_test_ratio: f32,

    /// vertical acceleration noise variance estimated form innovation residual
    pub accel_noise_var: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub valid: bool,

}



impl Default for HoverThrustEstimate {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HoverThrustEstimate::default())
  }
}

impl rosidl_runtime_rs::Message for HoverThrustEstimate {
  type RmwMsg = super::msg::rmw::HoverThrustEstimate;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        hover_thrust: msg.hover_thrust,
        hover_thrust_var: msg.hover_thrust_var,
        accel_innov: msg.accel_innov,
        accel_innov_var: msg.accel_innov_var,
        accel_innov_test_ratio: msg.accel_innov_test_ratio,
        accel_noise_var: msg.accel_noise_var,
        valid: msg.valid,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      hover_thrust: msg.hover_thrust,
      hover_thrust_var: msg.hover_thrust_var,
      accel_innov: msg.accel_innov,
      accel_innov_var: msg.accel_innov_var,
      accel_innov_test_ratio: msg.accel_innov_test_ratio,
      accel_noise_var: msg.accel_noise_var,
      valid: msg.valid,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      hover_thrust: msg.hover_thrust,
      hover_thrust_var: msg.hover_thrust_var,
      accel_innov: msg.accel_innov,
      accel_innov_var: msg.accel_innov_var,
      accel_innov_test_ratio: msg.accel_innov_test_ratio,
      accel_noise_var: msg.accel_noise_var,
      valid: msg.valid,
    }
  }
}


// Corresponds to px4_msgs__msg__InputRc

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InputRc {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// last valid reception time
    pub timestamp_last_signal: u64,

    /// number of channels actually being seen
    pub channel_count: u8,

    /// receive signal strength indicator (RSSI): < 0: Undefined, 0: no signal, 100: full reception
    pub rssi: i32,

    /// explicit failsafe flag: true on TX failure or TX out of range , false otherwise. Only the true state is reliable, as there are some (PPM) receivers on the market going into failsafe without telling us explicitly.
    pub rc_failsafe: bool,

    /// RC receiver connection status: True,if no frame has arrived in the expected time, false otherwise. True usually means that the receiver has been disconnected, but can also indicate a radio link loss on "stupid" systems. Will remain false, if a RX with failsafe option continues to transmit frames after a link loss.
    pub rc_lost: bool,

    /// Number of lost RC frames. Note: intended purpose: observe the radio link quality if RSSI is not available. This value must not be used to trigger any failsafe-alike functionality.
    pub rc_lost_frame_count: u16,

    /// Number of total RC frames. Note: intended purpose: observe the radio link quality if RSSI is not available. This value must not be used to trigger any failsafe-alike functionality.
    pub rc_total_frame_count: u16,

    /// Length of a single PPM frame. Zero for non-PPM systems
    pub rc_ppm_frame_length: u16,

    /// RC frame rate in msg/second. 0 = invalid
    pub rc_frame_rate: u16,

    /// Input source
    pub input_source: u8,

    /// measured pulse widths for each of the supported channels
    pub values: [u16; 18],

    /// link quality. Percentage 0-100%. -1 = invalid
    pub link_quality: i8,

    /// Actual rssi in units of dBm. NaN = invalid
    pub rssi_dbm: f32,

    /// link signal to noise ratio in units of dB. -1 = invalid
    pub link_snr: i8,

}

impl InputRc {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RC_INPUT_SOURCE_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RC_INPUT_SOURCE_PX4FMU_PPM: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RC_INPUT_SOURCE_PX4IO_PPM: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RC_INPUT_SOURCE_PX4IO_SPEKTRUM: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RC_INPUT_SOURCE_PX4IO_SBUS: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RC_INPUT_SOURCE_PX4IO_ST24: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RC_INPUT_SOURCE_MAVLINK: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RC_INPUT_SOURCE_QURT: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RC_INPUT_SOURCE_PX4FMU_SPEKTRUM: u8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RC_INPUT_SOURCE_PX4FMU_SBUS: u8 = 9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RC_INPUT_SOURCE_PX4FMU_ST24: u8 = 10;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RC_INPUT_SOURCE_PX4FMU_SUMD: u8 = 11;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RC_INPUT_SOURCE_PX4FMU_DSM: u8 = 12;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RC_INPUT_SOURCE_PX4IO_SUMD: u8 = 13;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RC_INPUT_SOURCE_PX4FMU_CRSF: u8 = 14;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RC_INPUT_SOURCE_PX4FMU_GHST: u8 = 15;

    /// Maximum number of R/C input channels in the system. S.Bus has up to 18 channels.
    pub const RC_INPUT_MAX_CHANNELS: u8 = 18;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RSSI_MAX: i8 = 100;

}


impl Default for InputRc {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::InputRc::default())
  }
}

impl rosidl_runtime_rs::Message for InputRc {
  type RmwMsg = super::msg::rmw::InputRc;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_last_signal: msg.timestamp_last_signal,
        channel_count: msg.channel_count,
        rssi: msg.rssi,
        rc_failsafe: msg.rc_failsafe,
        rc_lost: msg.rc_lost,
        rc_lost_frame_count: msg.rc_lost_frame_count,
        rc_total_frame_count: msg.rc_total_frame_count,
        rc_ppm_frame_length: msg.rc_ppm_frame_length,
        rc_frame_rate: msg.rc_frame_rate,
        input_source: msg.input_source,
        values: msg.values,
        link_quality: msg.link_quality,
        rssi_dbm: msg.rssi_dbm,
        link_snr: msg.link_snr,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_last_signal: msg.timestamp_last_signal,
      channel_count: msg.channel_count,
      rssi: msg.rssi,
      rc_failsafe: msg.rc_failsafe,
      rc_lost: msg.rc_lost,
      rc_lost_frame_count: msg.rc_lost_frame_count,
      rc_total_frame_count: msg.rc_total_frame_count,
      rc_ppm_frame_length: msg.rc_ppm_frame_length,
      rc_frame_rate: msg.rc_frame_rate,
      input_source: msg.input_source,
        values: msg.values,
      link_quality: msg.link_quality,
      rssi_dbm: msg.rssi_dbm,
      link_snr: msg.link_snr,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_last_signal: msg.timestamp_last_signal,
      channel_count: msg.channel_count,
      rssi: msg.rssi,
      rc_failsafe: msg.rc_failsafe,
      rc_lost: msg.rc_lost,
      rc_lost_frame_count: msg.rc_lost_frame_count,
      rc_total_frame_count: msg.rc_total_frame_count,
      rc_ppm_frame_length: msg.rc_ppm_frame_length,
      rc_frame_rate: msg.rc_frame_rate,
      input_source: msg.input_source,
      values: msg.values,
      link_quality: msg.link_quality,
      rssi_dbm: msg.rssi_dbm,
      link_snr: msg.link_snr,
    }
  }
}


// Corresponds to px4_msgs__msg__InternalCombustionEngineControl

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InternalCombustionEngineControl {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// activate/deactivate ignition (spark plug)
    pub ignition_on: bool,

    /// setpoint for throttle actuator, with slew rate if enabled, idles with 0 [norm] [@range 0,1] [@uncontrolled NAN to stop motor]
    pub throttle_control: f32,

    /// setpoint for choke actuator, 1: fully closed [@range 0,1]
    pub choke_control: f32,

    /// setpoint for (electric) starter motor [@range 0,1]
    pub starter_engine_control: f32,

    /// user intent for the ICE being on/off
    pub user_request: u8,

}



impl Default for InternalCombustionEngineControl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::InternalCombustionEngineControl::default())
  }
}

impl rosidl_runtime_rs::Message for InternalCombustionEngineControl {
  type RmwMsg = super::msg::rmw::InternalCombustionEngineControl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        ignition_on: msg.ignition_on,
        throttle_control: msg.throttle_control,
        choke_control: msg.choke_control,
        starter_engine_control: msg.starter_engine_control,
        user_request: msg.user_request,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      ignition_on: msg.ignition_on,
      throttle_control: msg.throttle_control,
      choke_control: msg.choke_control,
      starter_engine_control: msg.starter_engine_control,
      user_request: msg.user_request,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      ignition_on: msg.ignition_on,
      throttle_control: msg.throttle_control,
      choke_control: msg.choke_control,
      starter_engine_control: msg.starter_engine_control,
      user_request: msg.user_request,
    }
  }
}


// Corresponds to px4_msgs__msg__InternalCombustionEngineStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InternalCombustionEngineStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flags: u32,

    /// Engine load estimate, percent, [0, 127]
    pub engine_load_percent: u8,

    /// Engine speed, revolutions per minute
    pub engine_speed_rpm: u32,

    /// Spark dwell time, millisecond
    pub spark_dwell_time_ms: f32,

    /// Atmospheric (barometric) pressure, kilopascal
    pub atmospheric_pressure_kpa: f32,

    /// Engine intake manifold pressure, kilopascal
    pub intake_manifold_pressure_kpa: f32,

    /// Engine intake manifold temperature, kelvin
    pub intake_manifold_temperature: f32,

    /// Engine coolant temperature, kelvin
    pub coolant_temperature: f32,

    /// Oil pressure, kilopascal
    pub oil_pressure: f32,

    /// Oil temperature, kelvin
    pub oil_temperature: f32,

    /// Fuel pressure, kilopascal
    pub fuel_pressure: f32,

    /// Instant fuel consumption estimate, (centimeter^3)/minute
    pub fuel_consumption_rate_cm3pm: f32,

    /// Estimate of the consumed fuel since the start of the engine, centimeter^3
    pub estimated_consumed_fuel_volume_cm3: f32,

    /// Throttle position, percent
    pub throttle_position_percent: u8,

    /// The index of the publishing ECU
    pub ecu_index: u8,

    /// Spark plug activity report.
    pub spark_plug_usage: u8,

    /// Cylinder ignition timing, angular degrees of the crankshaft
    pub ignition_timing_deg: f32,

    /// Fuel injection time, millisecond
    pub injection_time_ms: f32,

    /// Cylinder head temperature (CHT), kelvin
    pub cylinder_head_temperature: f32,

    /// Exhaust gas temperature (EGT), kelvin
    pub exhaust_gas_temperature: f32,

    /// Estimated lambda coefficient, dimensionless ratio
    pub lambda_coefficient: f32,

}

impl InternalCombustionEngineStatus {
    /// The engine is not running. This is the default state.
    pub const STATE_STOPPED: u8 = 0;

    /// The engine is starting. This is a transient state.
    pub const STATE_STARTING: u8 = 1;

    /// The engine is running normally.
    pub const STATE_RUNNING: u8 = 2;

    /// The engine can no longer function.
    pub const STATE_FAULT: u8 = 3;

    /// General error.
    pub const FLAG_GENERAL_ERROR: u32 = 1;

    /// Error of the crankshaft sensor. This flag is optional.
    pub const FLAG_CRANKSHAFT_SENSOR_ERROR_SUPPORTED: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FLAG_CRANKSHAFT_SENSOR_ERROR: u32 = 4;

    /// Temperature levels. These flags are optional
    pub const FLAG_TEMPERATURE_SUPPORTED: u32 = 8;

    /// Under-temperature warning
    pub const FLAG_TEMPERATURE_BELOW_NOMINAL: u32 = 16;

    /// Over-temperature warning
    pub const FLAG_TEMPERATURE_ABOVE_NOMINAL: u32 = 32;

    /// Critical overheating
    pub const FLAG_TEMPERATURE_OVERHEATING: u32 = 64;

    /// Exhaust gas over-temperature warning
    pub const FLAG_TEMPERATURE_EGT_ABOVE_NOMINAL: u32 = 128;

    /// Fuel pressure. These flags are optional
    pub const FLAG_FUEL_PRESSURE_SUPPORTED: u32 = 256;

    /// Under-pressure warning
    pub const FLAG_FUEL_PRESSURE_BELOW_NOMINAL: u32 = 512;

    /// Over-pressure warning
    pub const FLAG_FUEL_PRESSURE_ABOVE_NOMINAL: u32 = 1024;

    /// Detonation warning. This flag is optional.
    pub const FLAG_DETONATION_SUPPORTED: u32 = 2048;

    /// Detonation condition observed warning
    pub const FLAG_DETONATION_OBSERVED: u32 = 4096;

    /// Misfire warning. This flag is optional.
    pub const FLAG_MISFIRE_SUPPORTED: u32 = 8192;

    /// Misfire condition observed warning
    pub const FLAG_MISFIRE_OBSERVED: u32 = 16384;

    /// Oil pressure. These flags are optional
    pub const FLAG_OIL_PRESSURE_SUPPORTED: u32 = 32768;

    /// Under-pressure warning
    pub const FLAG_OIL_PRESSURE_BELOW_NOMINAL: u32 = 65536;

    /// Over-pressure warning
    pub const FLAG_OIL_PRESSURE_ABOVE_NOMINAL: u32 = 131072;

    /// Debris warning. This flag is optional
    pub const FLAG_DEBRIS_SUPPORTED: u32 = 262144;

    /// Detection of debris warning
    pub const FLAG_DEBRIS_DETECTED: u32 = 524288;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SPARK_PLUG_SINGLE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SPARK_PLUG_FIRST_ACTIVE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SPARK_PLUG_SECOND_ACTIVE: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SPARK_PLUG_BOTH_ACTIVE: u8 = 3;

}


impl Default for InternalCombustionEngineStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::InternalCombustionEngineStatus::default())
  }
}

impl rosidl_runtime_rs::Message for InternalCombustionEngineStatus {
  type RmwMsg = super::msg::rmw::InternalCombustionEngineStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        state: msg.state,
        flags: msg.flags,
        engine_load_percent: msg.engine_load_percent,
        engine_speed_rpm: msg.engine_speed_rpm,
        spark_dwell_time_ms: msg.spark_dwell_time_ms,
        atmospheric_pressure_kpa: msg.atmospheric_pressure_kpa,
        intake_manifold_pressure_kpa: msg.intake_manifold_pressure_kpa,
        intake_manifold_temperature: msg.intake_manifold_temperature,
        coolant_temperature: msg.coolant_temperature,
        oil_pressure: msg.oil_pressure,
        oil_temperature: msg.oil_temperature,
        fuel_pressure: msg.fuel_pressure,
        fuel_consumption_rate_cm3pm: msg.fuel_consumption_rate_cm3pm,
        estimated_consumed_fuel_volume_cm3: msg.estimated_consumed_fuel_volume_cm3,
        throttle_position_percent: msg.throttle_position_percent,
        ecu_index: msg.ecu_index,
        spark_plug_usage: msg.spark_plug_usage,
        ignition_timing_deg: msg.ignition_timing_deg,
        injection_time_ms: msg.injection_time_ms,
        cylinder_head_temperature: msg.cylinder_head_temperature,
        exhaust_gas_temperature: msg.exhaust_gas_temperature,
        lambda_coefficient: msg.lambda_coefficient,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      state: msg.state,
      flags: msg.flags,
      engine_load_percent: msg.engine_load_percent,
      engine_speed_rpm: msg.engine_speed_rpm,
      spark_dwell_time_ms: msg.spark_dwell_time_ms,
      atmospheric_pressure_kpa: msg.atmospheric_pressure_kpa,
      intake_manifold_pressure_kpa: msg.intake_manifold_pressure_kpa,
      intake_manifold_temperature: msg.intake_manifold_temperature,
      coolant_temperature: msg.coolant_temperature,
      oil_pressure: msg.oil_pressure,
      oil_temperature: msg.oil_temperature,
      fuel_pressure: msg.fuel_pressure,
      fuel_consumption_rate_cm3pm: msg.fuel_consumption_rate_cm3pm,
      estimated_consumed_fuel_volume_cm3: msg.estimated_consumed_fuel_volume_cm3,
      throttle_position_percent: msg.throttle_position_percent,
      ecu_index: msg.ecu_index,
      spark_plug_usage: msg.spark_plug_usage,
      ignition_timing_deg: msg.ignition_timing_deg,
      injection_time_ms: msg.injection_time_ms,
      cylinder_head_temperature: msg.cylinder_head_temperature,
      exhaust_gas_temperature: msg.exhaust_gas_temperature,
      lambda_coefficient: msg.lambda_coefficient,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      state: msg.state,
      flags: msg.flags,
      engine_load_percent: msg.engine_load_percent,
      engine_speed_rpm: msg.engine_speed_rpm,
      spark_dwell_time_ms: msg.spark_dwell_time_ms,
      atmospheric_pressure_kpa: msg.atmospheric_pressure_kpa,
      intake_manifold_pressure_kpa: msg.intake_manifold_pressure_kpa,
      intake_manifold_temperature: msg.intake_manifold_temperature,
      coolant_temperature: msg.coolant_temperature,
      oil_pressure: msg.oil_pressure,
      oil_temperature: msg.oil_temperature,
      fuel_pressure: msg.fuel_pressure,
      fuel_consumption_rate_cm3pm: msg.fuel_consumption_rate_cm3pm,
      estimated_consumed_fuel_volume_cm3: msg.estimated_consumed_fuel_volume_cm3,
      throttle_position_percent: msg.throttle_position_percent,
      ecu_index: msg.ecu_index,
      spark_plug_usage: msg.spark_plug_usage,
      ignition_timing_deg: msg.ignition_timing_deg,
      injection_time_ms: msg.injection_time_ms,
      cylinder_head_temperature: msg.cylinder_head_temperature,
      exhaust_gas_temperature: msg.exhaust_gas_temperature,
      lambda_coefficient: msg.lambda_coefficient,
    }
  }
}


// Corresponds to px4_msgs__msg__IridiumsbdStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IridiumsbdStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// timestamp of the last "OK" received after the "AT" command
    pub last_at_ok_timestamp: u64,

    /// current size of the tx buffer
    pub tx_buf_write_index: u16,

    /// the rx buffer is parsed up to that index
    pub rx_buf_read_index: u16,

    /// current size of the rx buffer
    pub rx_buf_end_index: u16,

    /// number of failed sbd sessions
    pub failed_sbd_sessions: u16,

    /// number of successful sbd sessions
    pub successful_sbd_sessions: u16,

    /// number of times the tx buffer was reset
    pub num_tx_buf_reset: u16,

    /// current signal quality, 0 is no signal, 5 the best
    pub signal_quality: u8,

    /// current state of the driver, see the satcom_state of IridiumSBD.h for the definition
    pub state: u8,

    /// indicates if a ring call is pending
    pub ring_pending: bool,

    /// indicates if a tx buffer write is pending
    pub tx_buf_write_pending: bool,

    /// indicates if a tx session is pending
    pub tx_session_pending: bool,

    /// indicates if a rx read is pending
    pub rx_read_pending: bool,

    /// indicates if a rx session is pending
    pub rx_session_pending: bool,

}



impl Default for IridiumsbdStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::IridiumsbdStatus::default())
  }
}

impl rosidl_runtime_rs::Message for IridiumsbdStatus {
  type RmwMsg = super::msg::rmw::IridiumsbdStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        last_at_ok_timestamp: msg.last_at_ok_timestamp,
        tx_buf_write_index: msg.tx_buf_write_index,
        rx_buf_read_index: msg.rx_buf_read_index,
        rx_buf_end_index: msg.rx_buf_end_index,
        failed_sbd_sessions: msg.failed_sbd_sessions,
        successful_sbd_sessions: msg.successful_sbd_sessions,
        num_tx_buf_reset: msg.num_tx_buf_reset,
        signal_quality: msg.signal_quality,
        state: msg.state,
        ring_pending: msg.ring_pending,
        tx_buf_write_pending: msg.tx_buf_write_pending,
        tx_session_pending: msg.tx_session_pending,
        rx_read_pending: msg.rx_read_pending,
        rx_session_pending: msg.rx_session_pending,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      last_at_ok_timestamp: msg.last_at_ok_timestamp,
      tx_buf_write_index: msg.tx_buf_write_index,
      rx_buf_read_index: msg.rx_buf_read_index,
      rx_buf_end_index: msg.rx_buf_end_index,
      failed_sbd_sessions: msg.failed_sbd_sessions,
      successful_sbd_sessions: msg.successful_sbd_sessions,
      num_tx_buf_reset: msg.num_tx_buf_reset,
      signal_quality: msg.signal_quality,
      state: msg.state,
      ring_pending: msg.ring_pending,
      tx_buf_write_pending: msg.tx_buf_write_pending,
      tx_session_pending: msg.tx_session_pending,
      rx_read_pending: msg.rx_read_pending,
      rx_session_pending: msg.rx_session_pending,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      last_at_ok_timestamp: msg.last_at_ok_timestamp,
      tx_buf_write_index: msg.tx_buf_write_index,
      rx_buf_read_index: msg.rx_buf_read_index,
      rx_buf_end_index: msg.rx_buf_end_index,
      failed_sbd_sessions: msg.failed_sbd_sessions,
      successful_sbd_sessions: msg.successful_sbd_sessions,
      num_tx_buf_reset: msg.num_tx_buf_reset,
      signal_quality: msg.signal_quality,
      state: msg.state,
      ring_pending: msg.ring_pending,
      tx_buf_write_pending: msg.tx_buf_write_pending,
      tx_session_pending: msg.tx_session_pending,
      rx_read_pending: msg.rx_read_pending,
      rx_session_pending: msg.rx_session_pending,
    }
  }
}


// Corresponds to px4_msgs__msg__IrlockReport
/// IRLOCK_REPORT message data

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IrlockReport {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub signature: u16,

    /// When looking along the optical axis of the camera, x points right, y points down, and z points along the optical axis.
    /// tan(theta), where theta is the angle between the target and the camera center of projection in camera x-axis
    pub pos_x: f32,

    /// tan(theta), where theta is the angle between the target and the camera center of projection in camera y-axis
    pub pos_y: f32,

    /// /** size of target along camera x-axis in units of tan(theta) **/
    pub size_x: f32,

    /// /** size of target along camera y-axis in units of tan(theta) **/
    pub size_y: f32,

}



impl Default for IrlockReport {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::IrlockReport::default())
  }
}

impl rosidl_runtime_rs::Message for IrlockReport {
  type RmwMsg = super::msg::rmw::IrlockReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        signature: msg.signature,
        pos_x: msg.pos_x,
        pos_y: msg.pos_y,
        size_x: msg.size_x,
        size_y: msg.size_y,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      signature: msg.signature,
      pos_x: msg.pos_x,
      pos_y: msg.pos_y,
      size_x: msg.size_x,
      size_y: msg.size_y,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      signature: msg.signature,
      pos_x: msg.pos_x,
      pos_y: msg.pos_y,
      size_x: msg.size_x,
      size_y: msg.size_y,
    }
  }
}


// Corresponds to px4_msgs__msg__LandingGear

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LandingGear {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub landing_gear: i8,

}

impl LandingGear {
    /// landing gear up
    pub const GEAR_UP: i8 = 1;

    /// landing gear down
    pub const GEAR_DOWN: i8 = -1;

    /// keep the current state
    pub const GEAR_KEEP: i8 = 0;

}


impl Default for LandingGear {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LandingGear::default())
  }
}

impl rosidl_runtime_rs::Message for LandingGear {
  type RmwMsg = super::msg::rmw::LandingGear;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        landing_gear: msg.landing_gear,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      landing_gear: msg.landing_gear,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      landing_gear: msg.landing_gear,
    }
  }
}


// Corresponds to px4_msgs__msg__LandingGearWheel

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LandingGearWheel {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// negative is turning left, positive turning right [-1, 1]
    pub normalized_wheel_setpoint: f32,

}



impl Default for LandingGearWheel {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LandingGearWheel::default())
  }
}

impl rosidl_runtime_rs::Message for LandingGearWheel {
  type RmwMsg = super::msg::rmw::LandingGearWheel;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        normalized_wheel_setpoint: msg.normalized_wheel_setpoint,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      normalized_wheel_setpoint: msg.normalized_wheel_setpoint,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      normalized_wheel_setpoint: msg.normalized_wheel_setpoint,
    }
  }
}


// Corresponds to px4_msgs__msg__LandingTargetInnovations

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LandingTargetInnovations {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Innovation of landing target position estimator
    pub innov_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub innov_y: f32,

    /// Innovation covariance of landing target position estimator
    pub innov_cov_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub innov_cov_y: f32,

}



impl Default for LandingTargetInnovations {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LandingTargetInnovations::default())
  }
}

impl rosidl_runtime_rs::Message for LandingTargetInnovations {
  type RmwMsg = super::msg::rmw::LandingTargetInnovations;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        innov_x: msg.innov_x,
        innov_y: msg.innov_y,
        innov_cov_x: msg.innov_cov_x,
        innov_cov_y: msg.innov_cov_y,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      innov_x: msg.innov_x,
      innov_y: msg.innov_y,
      innov_cov_x: msg.innov_cov_x,
      innov_cov_y: msg.innov_cov_y,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      innov_x: msg.innov_x,
      innov_y: msg.innov_y,
      innov_cov_x: msg.innov_cov_x,
      innov_cov_y: msg.innov_cov_y,
    }
  }
}


// Corresponds to px4_msgs__msg__LandingTargetPose
/// Relative position of precision land target in navigation (body fixed, north aligned, NED) and inertial (world fixed, north aligned, NED) frames

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LandingTargetPose {
    /// Time since system start
    pub timestamp: u64,

    /// Flag indicating whether the landing target is static or moving with respect to the ground
    pub is_static: bool,

    /// Flag showing whether relative position is valid
    pub rel_pos_valid: bool,

    /// Flag showing whether relative velocity is valid
    pub rel_vel_valid: bool,

    /// Flag showing whether relative velocity is valid for EKF2 auxiliary velocity aiding
    pub rel_vel_ekf2_valid: bool,

    /// X/north position of target, relative to vehicle (navigation frame)
    pub x_rel: f32,

    /// Y/east position of target, relative to vehicle (navigation frame)
    pub y_rel: f32,

    /// Z/down position of target, relative to vehicle (navigation frame)
    pub z_rel: f32,

    /// X/north velocity of target, relative to vehicle (navigation frame)
    pub vx_rel: f32,

    /// Y/east velocity of target, relative to vehicle (navigation frame)
    pub vy_rel: f32,

    /// Z/down velocity of target, relative to vehicle (navigation frame)
    pub vz_rel: f32,

    /// X/north position variance
    pub cov_x_rel: f32,

    /// Y/east position variance
    pub cov_y_rel: f32,

    /// Z/down position variance
    pub cov_z_rel: f32,

    /// X/north velocity variance
    pub cov_vx_rel: f32,

    /// Y/east velocity variance
    pub cov_vy_rel: f32,

    /// Z/down velocity variance
    pub cov_vz_rel: f32,

    /// Flag showing whether absolute position is valid
    pub abs_pos_valid: bool,

    /// X/north position of target, relative to origin (navigation frame)
    pub x_abs: f32,

    /// Y/east position of target, relative to origin (navigation frame)
    pub y_abs: f32,

    /// Z/down position of target, relative to origin (navigation frame)
    pub z_abs: f32,

}



impl Default for LandingTargetPose {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LandingTargetPose::default())
  }
}

impl rosidl_runtime_rs::Message for LandingTargetPose {
  type RmwMsg = super::msg::rmw::LandingTargetPose;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        is_static: msg.is_static,
        rel_pos_valid: msg.rel_pos_valid,
        rel_vel_valid: msg.rel_vel_valid,
        rel_vel_ekf2_valid: msg.rel_vel_ekf2_valid,
        x_rel: msg.x_rel,
        y_rel: msg.y_rel,
        z_rel: msg.z_rel,
        vx_rel: msg.vx_rel,
        vy_rel: msg.vy_rel,
        vz_rel: msg.vz_rel,
        cov_x_rel: msg.cov_x_rel,
        cov_y_rel: msg.cov_y_rel,
        cov_z_rel: msg.cov_z_rel,
        cov_vx_rel: msg.cov_vx_rel,
        cov_vy_rel: msg.cov_vy_rel,
        cov_vz_rel: msg.cov_vz_rel,
        abs_pos_valid: msg.abs_pos_valid,
        x_abs: msg.x_abs,
        y_abs: msg.y_abs,
        z_abs: msg.z_abs,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      is_static: msg.is_static,
      rel_pos_valid: msg.rel_pos_valid,
      rel_vel_valid: msg.rel_vel_valid,
      rel_vel_ekf2_valid: msg.rel_vel_ekf2_valid,
      x_rel: msg.x_rel,
      y_rel: msg.y_rel,
      z_rel: msg.z_rel,
      vx_rel: msg.vx_rel,
      vy_rel: msg.vy_rel,
      vz_rel: msg.vz_rel,
      cov_x_rel: msg.cov_x_rel,
      cov_y_rel: msg.cov_y_rel,
      cov_z_rel: msg.cov_z_rel,
      cov_vx_rel: msg.cov_vx_rel,
      cov_vy_rel: msg.cov_vy_rel,
      cov_vz_rel: msg.cov_vz_rel,
      abs_pos_valid: msg.abs_pos_valid,
      x_abs: msg.x_abs,
      y_abs: msg.y_abs,
      z_abs: msg.z_abs,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      is_static: msg.is_static,
      rel_pos_valid: msg.rel_pos_valid,
      rel_vel_valid: msg.rel_vel_valid,
      rel_vel_ekf2_valid: msg.rel_vel_ekf2_valid,
      x_rel: msg.x_rel,
      y_rel: msg.y_rel,
      z_rel: msg.z_rel,
      vx_rel: msg.vx_rel,
      vy_rel: msg.vy_rel,
      vz_rel: msg.vz_rel,
      cov_x_rel: msg.cov_x_rel,
      cov_y_rel: msg.cov_y_rel,
      cov_z_rel: msg.cov_z_rel,
      cov_vx_rel: msg.cov_vx_rel,
      cov_vy_rel: msg.cov_vy_rel,
      cov_vz_rel: msg.cov_vz_rel,
      abs_pos_valid: msg.abs_pos_valid,
      x_abs: msg.x_abs,
      y_abs: msg.y_abs,
      z_abs: msg.z_abs,
    }
  }
}


// Corresponds to px4_msgs__msg__LateralControlConfiguration
/// Fixed Wing Lateral Control Configuration message
///
/// Used by the fw_lateral_longitudinal_control module to constrain FixedWingLateralSetpoint messages.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LateralControlConfiguration {
    /// Time since system start
    pub timestamp: u64,

    /// Currently maps to a maximum roll angle, accel_max = tan(roll_max) * GRAVITY
    pub lateral_accel_max: f32,

}

impl LateralControlConfiguration {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 0;

}


impl Default for LateralControlConfiguration {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LateralControlConfiguration::default())
  }
}

impl rosidl_runtime_rs::Message for LateralControlConfiguration {
  type RmwMsg = super::msg::rmw::LateralControlConfiguration;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        lateral_accel_max: msg.lateral_accel_max,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      lateral_accel_max: msg.lateral_accel_max,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      lateral_accel_max: msg.lateral_accel_max,
    }
  }
}


// Corresponds to px4_msgs__msg__LaunchDetectionStatus
/// Status of the launch detection state machine (fixed-wing only)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LaunchDetectionStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub launch_detection_state: u8,

    /// flag indicating whether selected actuators should kept disarmed (have to be configured in control allocation)
    pub selected_control_surface_disarmed: bool,

}

impl LaunchDetectionStatus {
    /// waiting for launch
    pub const STATE_WAITING_FOR_LAUNCH: u8 = 0;

    /// launch detected, but keep motor(s) disabled (e.g. because it can't spin freely while on catapult)
    pub const STATE_LAUNCH_DETECTED_DISABLED_MOTOR: u8 = 1;

    /// launch detected, use normal takeoff/flying configuration
    pub const STATE_FLYING: u8 = 2;

}


impl Default for LaunchDetectionStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LaunchDetectionStatus::default())
  }
}

impl rosidl_runtime_rs::Message for LaunchDetectionStatus {
  type RmwMsg = super::msg::rmw::LaunchDetectionStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        launch_detection_state: msg.launch_detection_state,
        selected_control_surface_disarmed: msg.selected_control_surface_disarmed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      launch_detection_state: msg.launch_detection_state,
      selected_control_surface_disarmed: msg.selected_control_surface_disarmed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      launch_detection_state: msg.launch_detection_state,
      selected_control_surface_disarmed: msg.selected_control_surface_disarmed,
    }
  }
}


// Corresponds to px4_msgs__msg__LedControl
/// LED control: control a single or multiple LED's.
/// These are the externally visible LED's, not the board LED's

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedControl {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// bitmask which LED(s) to control, set to 0xff for all
    pub led_mask: u8,

    /// see COLOR_*
    pub color: u8,

    /// see MODE_*
    pub mode: u8,

    /// how many times to blink (number of on-off cycles if mode is one of MODE_BLINK_*) . Set to 0 for infinite
    /// in MODE_FLASH it is the number of cycles. Max number of blinks: 122 and max number of flash cycles: 20
    pub num_blinks: u8,

    /// priority: higher priority events will override current lower priority events (see MAX_PRIORITY)
    pub priority: u8,

}

impl LedControl {
    /// colors
    /// this is only used in the drivers
    pub const COLOR_OFF: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COLOR_RED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COLOR_GREEN: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COLOR_BLUE: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COLOR_YELLOW: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COLOR_PURPLE: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COLOR_AMBER: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COLOR_CYAN: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COLOR_WHITE: u8 = 8;

    /// LED modes definitions
    /// turn LED off
    pub const MODE_OFF: u8 = 0;

    /// turn LED on
    pub const MODE_ON: u8 = 1;

    /// disable this priority (switch to lower priority setting)
    pub const MODE_DISABLED: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_BLINK_SLOW: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_BLINK_NORMAL: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_BLINK_FAST: u8 = 5;

    /// continuously increase & decrease brightness (solid color if driver does not support it)
    pub const MODE_BREATHE: u8 = 6;

    /// two fast blinks (on/off) with timing as in MODE_BLINK_FAST and then off for a while
    pub const MODE_FLASH: u8 = 7;

    /// maximum priority (minimum is 0)
    pub const MAX_PRIORITY: u8 = 2;

    /// needs to match BOARD_MAX_LEDS
    pub const ORB_QUEUE_LENGTH: u8 = 8;

}


impl Default for LedControl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LedControl::default())
  }
}

impl rosidl_runtime_rs::Message for LedControl {
  type RmwMsg = super::msg::rmw::LedControl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        led_mask: msg.led_mask,
        color: msg.color,
        mode: msg.mode,
        num_blinks: msg.num_blinks,
        priority: msg.priority,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      led_mask: msg.led_mask,
      color: msg.color,
      mode: msg.mode,
      num_blinks: msg.num_blinks,
      priority: msg.priority,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      led_mask: msg.led_mask,
      color: msg.color,
      mode: msg.mode,
      num_blinks: msg.num_blinks,
      priority: msg.priority,
    }
  }
}


// Corresponds to px4_msgs__msg__LogMessage
/// A logging message, output with PX4_WARN, PX4_ERR, PX4_INFO

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LogMessage {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// log level (same as in the linux kernel, starting with 0)
    pub severity: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub text: [u8; 127],

}

impl LogMessage {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 4;

}


impl Default for LogMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LogMessage::default())
  }
}

impl rosidl_runtime_rs::Message for LogMessage {
  type RmwMsg = super::msg::rmw::LogMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        severity: msg.severity,
        text: msg.text,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      severity: msg.severity,
        text: msg.text,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      severity: msg.severity,
      text: msg.text,
    }
  }
}


// Corresponds to px4_msgs__msg__LoggerStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoggerStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub backend: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_logging: bool,

    /// total written to log in kiloBytes
    pub total_written_kb: f32,

    /// write rate in kiloBytes/s
    pub write_rate_kb_s: f32,

    /// number of failed buffer writes due to buffer overflow
    pub dropouts: u32,

    /// messages misssed
    pub message_gaps: u32,

    /// current buffer fill in Bytes
    pub buffer_used_bytes: u32,

    /// total buffer size in Bytes
    pub buffer_size_bytes: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub num_messages: u8,

}

impl LoggerStatus {
    /// Normal, full size log
    pub const LOGGER_TYPE_FULL: u8 = 0;

    /// reduced mission log (e.g. for geotagging)
    pub const LOGGER_TYPE_MISSION: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BACKEND_FILE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BACKEND_MAVLINK: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BACKEND_ALL: u8 = 3;

}


impl Default for LoggerStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LoggerStatus::default())
  }
}

impl rosidl_runtime_rs::Message for LoggerStatus {
  type RmwMsg = super::msg::rmw::LoggerStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        type_: msg.type_,
        backend: msg.backend,
        is_logging: msg.is_logging,
        total_written_kb: msg.total_written_kb,
        write_rate_kb_s: msg.write_rate_kb_s,
        dropouts: msg.dropouts,
        message_gaps: msg.message_gaps,
        buffer_used_bytes: msg.buffer_used_bytes,
        buffer_size_bytes: msg.buffer_size_bytes,
        num_messages: msg.num_messages,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      type_: msg.type_,
      backend: msg.backend,
      is_logging: msg.is_logging,
      total_written_kb: msg.total_written_kb,
      write_rate_kb_s: msg.write_rate_kb_s,
      dropouts: msg.dropouts,
      message_gaps: msg.message_gaps,
      buffer_used_bytes: msg.buffer_used_bytes,
      buffer_size_bytes: msg.buffer_size_bytes,
      num_messages: msg.num_messages,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      type_: msg.type_,
      backend: msg.backend,
      is_logging: msg.is_logging,
      total_written_kb: msg.total_written_kb,
      write_rate_kb_s: msg.write_rate_kb_s,
      dropouts: msg.dropouts,
      message_gaps: msg.message_gaps,
      buffer_used_bytes: msg.buffer_used_bytes,
      buffer_size_bytes: msg.buffer_size_bytes,
      num_messages: msg.num_messages,
    }
  }
}


// Corresponds to px4_msgs__msg__LongitudinalControlConfiguration
/// Fixed Wing Longitudinal Control Configuration message
///
/// Used by the fw_lateral_longitudinal_control module and TECS to constrain FixedWingLongitudinalSetpoint messages
/// and configure the resultant setpoints.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LongitudinalControlConfiguration {
    /// Time since system start
    pub timestamp: u64,

    /// [@range -pi, pi] Defaults to FW_P_LIM_MIN if NAN.
    pub pitch_min: f32,

    /// [@range -pi, pi] Defaults to FW_P_LIM_MAX if NAN.
    pub pitch_max: f32,

    /// [@range 0,1] Defaults to FW_THR_MIN if NAN.
    pub throttle_min: f32,

    /// [@range 0,1] Defaults to FW_THR_MAX if NAN.
    pub throttle_max: f32,

    /// Target climbrate to change altitude. Defaults to FW_T_CLIMB_MAX if NAN. Not used if height_rate is directly set in FixedWingLongitudinalSetpoint.
    pub climb_rate_target: f32,

    /// Target sinkrate to change altitude. Defaults to FW_T_SINK_MAX if NAN. Not used if height_rate is directly set in FixedWingLongitudinalSetpoint.
    pub sink_rate_target: f32,

    /// [@range 0,2] 0=pitch controls altitude only, 2=pitch controls airspeed only
    pub speed_weight: f32,

    /// If true, the altitude controller is configured with an alternative timeconstant for tighter altitude tracking
    pub enforce_low_height_condition: bool,

    /// If true, underspeed handling is disabled in the altitude controller
    pub disable_underspeed_protection: bool,

}

impl LongitudinalControlConfiguration {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 0;

}


impl Default for LongitudinalControlConfiguration {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LongitudinalControlConfiguration::default())
  }
}

impl rosidl_runtime_rs::Message for LongitudinalControlConfiguration {
  type RmwMsg = super::msg::rmw::LongitudinalControlConfiguration;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        pitch_min: msg.pitch_min,
        pitch_max: msg.pitch_max,
        throttle_min: msg.throttle_min,
        throttle_max: msg.throttle_max,
        climb_rate_target: msg.climb_rate_target,
        sink_rate_target: msg.sink_rate_target,
        speed_weight: msg.speed_weight,
        enforce_low_height_condition: msg.enforce_low_height_condition,
        disable_underspeed_protection: msg.disable_underspeed_protection,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      pitch_min: msg.pitch_min,
      pitch_max: msg.pitch_max,
      throttle_min: msg.throttle_min,
      throttle_max: msg.throttle_max,
      climb_rate_target: msg.climb_rate_target,
      sink_rate_target: msg.sink_rate_target,
      speed_weight: msg.speed_weight,
      enforce_low_height_condition: msg.enforce_low_height_condition,
      disable_underspeed_protection: msg.disable_underspeed_protection,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      pitch_min: msg.pitch_min,
      pitch_max: msg.pitch_max,
      throttle_min: msg.throttle_min,
      throttle_max: msg.throttle_max,
      climb_rate_target: msg.climb_rate_target,
      sink_rate_target: msg.sink_rate_target,
      speed_weight: msg.speed_weight,
      enforce_low_height_condition: msg.enforce_low_height_condition,
      disable_underspeed_protection: msg.disable_underspeed_protection,
    }
  }
}


// Corresponds to px4_msgs__msg__MagWorkerData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MagWorkerData {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp_sample: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub done_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub calibration_points_perside: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub calibration_interval_perside_us: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub calibration_counter_total: [u32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub side_data_collected: [bool; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: [f32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: [f32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: [f32; 4],

}

impl MagWorkerData {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAX_MAGS: u8 = 4;

}


impl Default for MagWorkerData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MagWorkerData::default())
  }
}

impl rosidl_runtime_rs::Message for MagWorkerData {
  type RmwMsg = super::msg::rmw::MagWorkerData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        done_count: msg.done_count,
        calibration_points_perside: msg.calibration_points_perside,
        calibration_interval_perside_us: msg.calibration_interval_perside_us,
        calibration_counter_total: msg.calibration_counter_total,
        side_data_collected: msg.side_data_collected,
        x: msg.x,
        y: msg.y,
        z: msg.z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      done_count: msg.done_count,
      calibration_points_perside: msg.calibration_points_perside,
      calibration_interval_perside_us: msg.calibration_interval_perside_us,
        calibration_counter_total: msg.calibration_counter_total,
        side_data_collected: msg.side_data_collected,
        x: msg.x,
        y: msg.y,
        z: msg.z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      done_count: msg.done_count,
      calibration_points_perside: msg.calibration_points_perside,
      calibration_interval_perside_us: msg.calibration_interval_perside_us,
      calibration_counter_total: msg.calibration_counter_total,
      side_data_collected: msg.side_data_collected,
      x: msg.x,
      y: msg.y,
      z: msg.z,
    }
  }
}


// Corresponds to px4_msgs__msg__MagnetometerBiasEstimate

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MagnetometerBiasEstimate {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// estimated X-bias of all the sensors
    pub bias_x: [f32; 4],

    /// estimated Y-bias of all the sensors
    pub bias_y: [f32; 4],

    /// estimated Z-bias of all the sensors
    pub bias_z: [f32; 4],

    /// true if the estimator has converged
    pub valid: [bool; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub stable: [bool; 4],

}



impl Default for MagnetometerBiasEstimate {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MagnetometerBiasEstimate::default())
  }
}

impl rosidl_runtime_rs::Message for MagnetometerBiasEstimate {
  type RmwMsg = super::msg::rmw::MagnetometerBiasEstimate;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        bias_x: msg.bias_x,
        bias_y: msg.bias_y,
        bias_z: msg.bias_z,
        valid: msg.valid,
        stable: msg.stable,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        bias_x: msg.bias_x,
        bias_y: msg.bias_y,
        bias_z: msg.bias_z,
        valid: msg.valid,
        stable: msg.stable,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      bias_x: msg.bias_x,
      bias_y: msg.bias_y,
      bias_z: msg.bias_z,
      valid: msg.valid,
      stable: msg.stable,
    }
  }
}


// Corresponds to px4_msgs__msg__ManualControlSetpoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ManualControlSetpoint {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp of the raw data (microseconds)
    pub timestamp_sample: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub valid: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data_source: u8,

    /// Any of the channels may not be available and be set to NaN
    /// to indicate that it does not contain valid data.
    /// Stick positions [-1,1]
    /// on a common RC mode 1/2/3/4 remote/joystick the stick deflection: -1 is down/left, 1 is up/right
    /// Note: QGC sends throttle/z in range [0,1000] - [0,1]. The MAVLink input conversion [0,1] to [-1,1] is at the moment kept backwards compatible.
    /// Positive values are generally used for:
    /// move right,   positive roll rotation,  right side down
    pub roll: f32,

    /// move forward, negative pitch rotation, nose down
    pub pitch: f32,

    /// positive yaw rotation,   clockwise when seen top down
    pub yaw: f32,

    /// move up,      positive thrust,         -1 is minimum available 0% or -100% +1 is 100% thrust
    pub throttle: f32,

    /// position of flaps switch/knob/lever [-1, 1]
    pub flaps: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub aux1: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub aux2: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub aux3: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub aux4: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub aux5: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub aux6: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sticks_moving: bool,

    /// From uint16 buttons field of Mavlink manual_control message
    pub buttons: u16,

}

impl ManualControlSetpoint {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SOURCE_UNKNOWN: u8 = 0;

    /// radio control (input_rc)
    pub const SOURCE_RC: u8 = 1;

    /// mavlink instance 0
    pub const SOURCE_MAVLINK_0: u8 = 2;

    /// mavlink instance 1
    pub const SOURCE_MAVLINK_1: u8 = 3;

    /// mavlink instance 2
    pub const SOURCE_MAVLINK_2: u8 = 4;

    /// mavlink instance 3
    pub const SOURCE_MAVLINK_3: u8 = 5;

    /// mavlink instance 4
    pub const SOURCE_MAVLINK_4: u8 = 6;

    /// mavlink instance 5
    pub const SOURCE_MAVLINK_5: u8 = 7;

}


impl Default for ManualControlSetpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ManualControlSetpoint::default())
  }
}

impl rosidl_runtime_rs::Message for ManualControlSetpoint {
  type RmwMsg = super::msg::rmw::ManualControlSetpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        valid: msg.valid,
        data_source: msg.data_source,
        roll: msg.roll,
        pitch: msg.pitch,
        yaw: msg.yaw,
        throttle: msg.throttle,
        flaps: msg.flaps,
        aux1: msg.aux1,
        aux2: msg.aux2,
        aux3: msg.aux3,
        aux4: msg.aux4,
        aux5: msg.aux5,
        aux6: msg.aux6,
        sticks_moving: msg.sticks_moving,
        buttons: msg.buttons,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      valid: msg.valid,
      data_source: msg.data_source,
      roll: msg.roll,
      pitch: msg.pitch,
      yaw: msg.yaw,
      throttle: msg.throttle,
      flaps: msg.flaps,
      aux1: msg.aux1,
      aux2: msg.aux2,
      aux3: msg.aux3,
      aux4: msg.aux4,
      aux5: msg.aux5,
      aux6: msg.aux6,
      sticks_moving: msg.sticks_moving,
      buttons: msg.buttons,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      valid: msg.valid,
      data_source: msg.data_source,
      roll: msg.roll,
      pitch: msg.pitch,
      yaw: msg.yaw,
      throttle: msg.throttle,
      flaps: msg.flaps,
      aux1: msg.aux1,
      aux2: msg.aux2,
      aux3: msg.aux3,
      aux4: msg.aux4,
      aux5: msg.aux5,
      aux6: msg.aux6,
      sticks_moving: msg.sticks_moving,
      buttons: msg.buttons,
    }
  }
}


// Corresponds to px4_msgs__msg__ManualControlSwitches

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ManualControlSwitches {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp of the raw data (microseconds)
    pub timestamp_sample: u64,

    /// the slot a specific model selector is in
    pub mode_slot: u8,

    /// arm/disarm switch: _DISARMED_, ARMED
    pub arm_switch: u8,

    /// return to launch 2 position switch (mandatory): _NORMAL_, RTL
    pub return_switch: u8,

    /// loiter 2 position switch (optional): _MISSION_, LOITER
    pub loiter_switch: u8,

    /// offboard 2 position switch (optional): _NORMAL_, OFFBOARD
    pub offboard_switch: u8,

    /// throttle kill: _NORMAL_, KILL
    pub kill_switch: u8,

    /// trigger termination which cannot be undone
    pub termination_switch: u8,

    /// landing gear switch: _DOWN_, UP
    pub gear_switch: u8,

    /// VTOL transition switch: _HOVER, FORWARD_FLIGHT
    pub transition_switch: u8,

    /// Photo trigger switch
    pub photo_switch: u8,

    /// Photo trigger switch
    pub video_switch: u8,

    /// Engage the main motor (for helicopters)
    pub engage_main_motor_switch: u8,

    /// Payload power switch
    pub payload_power_switch: u8,

    /// number of switch changes
    pub switch_changes: u32,

}

impl ManualControlSwitches {
    /// switch is not mapped
    pub const SWITCH_POS_NONE: u8 = 0;

    /// switch activated (value = 1)
    pub const SWITCH_POS_ON: u8 = 1;

    /// middle position (value = 0)
    pub const SWITCH_POS_MIDDLE: u8 = 2;

    /// switch not activated (value = -1)
    pub const SWITCH_POS_OFF: u8 = 3;

    /// no mode slot assigned
    pub const MODE_SLOT_NONE: u8 = 0;

    /// mode slot 1 selected
    pub const MODE_SLOT_1: u8 = 1;

    /// mode slot 2 selected
    pub const MODE_SLOT_2: u8 = 2;

    /// mode slot 3 selected
    pub const MODE_SLOT_3: u8 = 3;

    /// mode slot 4 selected
    pub const MODE_SLOT_4: u8 = 4;

    /// mode slot 5 selected
    pub const MODE_SLOT_5: u8 = 5;

    /// mode slot 6 selected
    pub const MODE_SLOT_6: u8 = 6;

    /// number of slots
    pub const MODE_SLOT_NUM: u8 = 6;

}


impl Default for ManualControlSwitches {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ManualControlSwitches::default())
  }
}

impl rosidl_runtime_rs::Message for ManualControlSwitches {
  type RmwMsg = super::msg::rmw::ManualControlSwitches;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        mode_slot: msg.mode_slot,
        arm_switch: msg.arm_switch,
        return_switch: msg.return_switch,
        loiter_switch: msg.loiter_switch,
        offboard_switch: msg.offboard_switch,
        kill_switch: msg.kill_switch,
        termination_switch: msg.termination_switch,
        gear_switch: msg.gear_switch,
        transition_switch: msg.transition_switch,
        photo_switch: msg.photo_switch,
        video_switch: msg.video_switch,
        engage_main_motor_switch: msg.engage_main_motor_switch,
        payload_power_switch: msg.payload_power_switch,
        switch_changes: msg.switch_changes,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      mode_slot: msg.mode_slot,
      arm_switch: msg.arm_switch,
      return_switch: msg.return_switch,
      loiter_switch: msg.loiter_switch,
      offboard_switch: msg.offboard_switch,
      kill_switch: msg.kill_switch,
      termination_switch: msg.termination_switch,
      gear_switch: msg.gear_switch,
      transition_switch: msg.transition_switch,
      photo_switch: msg.photo_switch,
      video_switch: msg.video_switch,
      engage_main_motor_switch: msg.engage_main_motor_switch,
      payload_power_switch: msg.payload_power_switch,
      switch_changes: msg.switch_changes,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      mode_slot: msg.mode_slot,
      arm_switch: msg.arm_switch,
      return_switch: msg.return_switch,
      loiter_switch: msg.loiter_switch,
      offboard_switch: msg.offboard_switch,
      kill_switch: msg.kill_switch,
      termination_switch: msg.termination_switch,
      gear_switch: msg.gear_switch,
      transition_switch: msg.transition_switch,
      photo_switch: msg.photo_switch,
      video_switch: msg.video_switch,
      engage_main_motor_switch: msg.engage_main_motor_switch,
      payload_power_switch: msg.payload_power_switch,
      switch_changes: msg.switch_changes,
    }
  }
}


// Corresponds to px4_msgs__msg__MavlinkLog

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MavlinkLog {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub text: [u8; 127],

    /// log level (same as in the linux kernel, starting with 0)
    pub severity: u8,

}

impl MavlinkLog {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 8;

}


impl Default for MavlinkLog {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MavlinkLog::default())
  }
}

impl rosidl_runtime_rs::Message for MavlinkLog {
  type RmwMsg = super::msg::rmw::MavlinkLog;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        text: msg.text,
        severity: msg.severity,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        text: msg.text,
      severity: msg.severity,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      text: msg.text,
      severity: msg.severity,
    }
  }
}


// Corresponds to px4_msgs__msg__MavlinkTunnel
/// MAV_TUNNEL_PAYLOAD_TYPE enum

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MavlinkTunnel {
    /// Time since system start (microseconds)
    pub timestamp: u64,

    /// A code that identifies the content of the payload (0 for unknown, which is the default). If this code is less than 32768, it is a 'registered' payload type and the corresponding code should be added to the MAV_TUNNEL_PAYLOAD_TYPE enum. Software creators can register blocks of types as needed. Codes greater than 32767 are considered local experiments and should not be checked in to any widely distributed codebase.
    pub payload_type: u16,

    /// System ID (can be 0 for broadcast, but this is discouraged)
    pub target_system: u8,

    /// Component ID (can be 0 for broadcast, but this is discouraged)
    pub target_component: u8,

    /// Length of the data transported in payload
    pub payload_length: u8,

    /// Data itself
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub payload: [u8; 128],

}

impl MavlinkTunnel {
    /// Encoding of payload unknown
    pub const MAV_TUNNEL_PAYLOAD_TYPE_UNKNOWN: u8 = 0;

    /// Registered for STorM32 gimbal controller
    pub const MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED0: u8 = 200;

    /// Registered for STorM32 gimbal controller
    pub const MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED1: u8 = 201;

    /// Registered for STorM32 gimbal controller
    pub const MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED2: u8 = 202;

    /// Registered for STorM32 gimbal controller
    pub const MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED3: u8 = 203;

    /// Registered for STorM32 gimbal controller
    pub const MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED4: u8 = 204;

    /// Registered for STorM32 gimbal controller
    pub const MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED5: u8 = 205;

    /// Registered for STorM32 gimbal controller
    pub const MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED6: u8 = 206;

    /// Registered for STorM32 gimbal controller
    pub const MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED7: u8 = 207;

    /// Registered for STorM32 gimbal controller
    pub const MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED8: u8 = 208;

    /// Registered for STorM32 gimbal controller
    pub const MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED9: u8 = 209;

}


impl Default for MavlinkTunnel {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MavlinkTunnel::default())
  }
}

impl rosidl_runtime_rs::Message for MavlinkTunnel {
  type RmwMsg = super::msg::rmw::MavlinkTunnel;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        payload_type: msg.payload_type,
        target_system: msg.target_system,
        target_component: msg.target_component,
        payload_length: msg.payload_length,
        payload: msg.payload,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      payload_type: msg.payload_type,
      target_system: msg.target_system,
      target_component: msg.target_component,
      payload_length: msg.payload_length,
        payload: msg.payload,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      payload_type: msg.payload_type,
      target_system: msg.target_system,
      target_component: msg.target_component,
      payload_length: msg.payload_length,
      payload: msg.payload,
    }
  }
}


// Corresponds to px4_msgs__msg__MessageFormatRequest

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MessageFormatRequest {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Must be set to LATEST_PROTOCOL_VERSION. Do not change this field, it must be the first field after the timestamp
    pub protocol_version: u16,

    /// E.g. /fmu/in/vehicle_command
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub topic_name: [u8; 50],

}

impl MessageFormatRequest {
    /// Request to PX4 to get the hash of a message, to check for message compatibility
    /// Current version of this protocol. Increase this whenever the MessageFormatRequest or MessageFormatResponse changes.
    pub const LATEST_PROTOCOL_VERSION: u16 = 1;

}


impl Default for MessageFormatRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MessageFormatRequest::default())
  }
}

impl rosidl_runtime_rs::Message for MessageFormatRequest {
  type RmwMsg = super::msg::rmw::MessageFormatRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        protocol_version: msg.protocol_version,
        topic_name: msg.topic_name,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      protocol_version: msg.protocol_version,
        topic_name: msg.topic_name,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      protocol_version: msg.protocol_version,
      topic_name: msg.topic_name,
    }
  }
}


// Corresponds to px4_msgs__msg__MessageFormatResponse

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MessageFormatResponse {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Response from PX4 with the format of a message
    /// Must be set to LATEST_PROTOCOL_VERSION. Do not change this field, it must be the first field after the timestamp
    pub protocol_version: u16,

    /// E.g. /fmu/in/vehicle_command
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub topic_name: [u8; 50],


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

    /// hash over all message fields
    pub message_hash: u32,

}



impl Default for MessageFormatResponse {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MessageFormatResponse::default())
  }
}

impl rosidl_runtime_rs::Message for MessageFormatResponse {
  type RmwMsg = super::msg::rmw::MessageFormatResponse;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        protocol_version: msg.protocol_version,
        topic_name: msg.topic_name,
        success: msg.success,
        message_hash: msg.message_hash,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      protocol_version: msg.protocol_version,
        topic_name: msg.topic_name,
      success: msg.success,
      message_hash: msg.message_hash,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      protocol_version: msg.protocol_version,
      topic_name: msg.topic_name,
      success: msg.success,
      message_hash: msg.message_hash,
    }
  }
}


// Corresponds to px4_msgs__msg__Mission

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Mission {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// default 0, there are two offboard storage places in the dataman: 0 or 1
    pub mission_dataman_id: u8,

    /// default 0, there are two offboard storage places in the dataman: 0 or 1
    pub fence_dataman_id: u8,

    /// default 0, there are two offboard storage places in the dataman: 0 or 1
    pub safepoint_dataman_id: u8,

    /// count of the missions stored in the dataman
    pub count: u16,

    /// default -1, start at the one changed latest
    pub current_seq: i32,

    /// Index of the land start marker, if unavailable index of the land item, -1 otherwise
    pub land_start_index: i32,

    /// Index of the land item, -1 otherwise
    pub land_index: i32,

    /// indicates updates to the mission, reload from dataman if changed
    pub mission_id: u32,

    /// indicates updates to the geofence, reload from dataman if changed
    pub geofence_id: u32,

    /// indicates updates to the safe points, reload from dataman if changed
    pub safe_points_id: u32,

}



impl Default for Mission {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Mission::default())
  }
}

impl rosidl_runtime_rs::Message for Mission {
  type RmwMsg = super::msg::rmw::Mission;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        mission_dataman_id: msg.mission_dataman_id,
        fence_dataman_id: msg.fence_dataman_id,
        safepoint_dataman_id: msg.safepoint_dataman_id,
        count: msg.count,
        current_seq: msg.current_seq,
        land_start_index: msg.land_start_index,
        land_index: msg.land_index,
        mission_id: msg.mission_id,
        geofence_id: msg.geofence_id,
        safe_points_id: msg.safe_points_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      mission_dataman_id: msg.mission_dataman_id,
      fence_dataman_id: msg.fence_dataman_id,
      safepoint_dataman_id: msg.safepoint_dataman_id,
      count: msg.count,
      current_seq: msg.current_seq,
      land_start_index: msg.land_start_index,
      land_index: msg.land_index,
      mission_id: msg.mission_id,
      geofence_id: msg.geofence_id,
      safe_points_id: msg.safe_points_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      mission_dataman_id: msg.mission_dataman_id,
      fence_dataman_id: msg.fence_dataman_id,
      safepoint_dataman_id: msg.safepoint_dataman_id,
      count: msg.count,
      current_seq: msg.current_seq,
      land_start_index: msg.land_start_index,
      land_index: msg.land_index,
      mission_id: msg.mission_id,
      geofence_id: msg.geofence_id,
      safe_points_id: msg.safe_points_id,
    }
  }
}


// Corresponds to px4_msgs__msg__MissionResult

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionResult {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Id for the mission for which the result was generated
    pub mission_id: u32,

    /// Id for the corresponding geofence for which the result was generated (used for mission feasibility)
    pub geofence_id: u32,

    /// Counter of the home position for which the result was generated (used for mission feasibility)
    pub home_position_counter: u32,

    /// Sequence of the mission item which has been reached, default -1
    pub seq_reached: i32,

    /// Sequence of the current mission item
    pub seq_current: u16,

    /// Total number of mission items
    pub seq_total: u16,

    /// true if mission is valid
    pub valid: bool,

    /// true if mission is valid, but has potentially problematic items leading to safety warnings
    pub warning: bool,

    /// true if mission has been completed
    pub finished: bool,

    /// true if the mission cannot continue or be completed for some reason
    pub failure: bool,

    /// true if the number of do jumps remaining has changed
    pub item_do_jump_changed: bool,

    /// indicate which item has changed
    pub item_changed_index: u16,

    /// set to the number of do jumps remaining for that item
    pub item_do_jump_remaining: u16,

    /// indicates the mode in which the mission is executed
    pub execution_mode: u8,

}



impl Default for MissionResult {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MissionResult::default())
  }
}

impl rosidl_runtime_rs::Message for MissionResult {
  type RmwMsg = super::msg::rmw::MissionResult;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        mission_id: msg.mission_id,
        geofence_id: msg.geofence_id,
        home_position_counter: msg.home_position_counter,
        seq_reached: msg.seq_reached,
        seq_current: msg.seq_current,
        seq_total: msg.seq_total,
        valid: msg.valid,
        warning: msg.warning,
        finished: msg.finished,
        failure: msg.failure,
        item_do_jump_changed: msg.item_do_jump_changed,
        item_changed_index: msg.item_changed_index,
        item_do_jump_remaining: msg.item_do_jump_remaining,
        execution_mode: msg.execution_mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      mission_id: msg.mission_id,
      geofence_id: msg.geofence_id,
      home_position_counter: msg.home_position_counter,
      seq_reached: msg.seq_reached,
      seq_current: msg.seq_current,
      seq_total: msg.seq_total,
      valid: msg.valid,
      warning: msg.warning,
      finished: msg.finished,
      failure: msg.failure,
      item_do_jump_changed: msg.item_do_jump_changed,
      item_changed_index: msg.item_changed_index,
      item_do_jump_remaining: msg.item_do_jump_remaining,
      execution_mode: msg.execution_mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      mission_id: msg.mission_id,
      geofence_id: msg.geofence_id,
      home_position_counter: msg.home_position_counter,
      seq_reached: msg.seq_reached,
      seq_current: msg.seq_current,
      seq_total: msg.seq_total,
      valid: msg.valid,
      warning: msg.warning,
      finished: msg.finished,
      failure: msg.failure,
      item_do_jump_changed: msg.item_do_jump_changed,
      item_changed_index: msg.item_changed_index,
      item_do_jump_remaining: msg.item_do_jump_remaining,
      execution_mode: msg.execution_mode,
    }
  }
}


// Corresponds to px4_msgs__msg__ModeCompleted
/// Mode completion result, published by an active mode.
/// The possible values of nav_state are defined in the VehicleStatus msg.
/// Note that this is not always published (e.g. when a user switches modes or on
/// failsafe activation)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ModeCompleted {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// One of RESULT_*
    pub result: u8,

    /// Source mode (values in VehicleStatus)
    pub nav_state: u8,

}

impl ModeCompleted {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RESULT_SUCCESS: u8 = 0;

    /// : reserved
    ///  Mode failed (generic error)
    pub const RESULT_FAILURE_OTHER: u8 = 100;

}


impl Default for ModeCompleted {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ModeCompleted::default())
  }
}

impl rosidl_runtime_rs::Message for ModeCompleted {
  type RmwMsg = super::msg::rmw::ModeCompleted;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        result: msg.result,
        nav_state: msg.nav_state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      result: msg.result,
      nav_state: msg.nav_state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      result: msg.result,
      nav_state: msg.nav_state,
    }
  }
}


// Corresponds to px4_msgs__msg__MountOrientation

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MountOrientation {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Attitude/direction of the mount as euler angles in rad
    pub attitude_euler_angle: [f32; 3],

}



impl Default for MountOrientation {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MountOrientation::default())
  }
}

impl rosidl_runtime_rs::Message for MountOrientation {
  type RmwMsg = super::msg::rmw::MountOrientation;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        attitude_euler_angle: msg.attitude_euler_angle,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        attitude_euler_angle: msg.attitude_euler_angle,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      attitude_euler_angle: msg.attitude_euler_angle,
    }
  }
}


// Corresponds to px4_msgs__msg__NavigatorMissionItem

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigatorMissionItem {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Sequence of the current mission item
    pub sequence_current: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub nav_cmd: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub latitude: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub longitude: f32,

    /// time that the MAV should stay inside the radius before advancing in seconds
    pub time_inside: f32,

    /// default radius in which the mission is accepted as reached in meters
    pub acceptance_radius: f32,

    /// loiter radius in meters, 0 for a VTOL to hover, negative for counter-clockwise
    pub loiter_radius: f32,

    /// in radians NED -PI..+PI, NAN means don't change yaw
    pub yaw: f32,

    /// altitude in meters (AMSL)
    pub altitude: f32,

    /// mission frame
    pub frame: u8,

    /// mission item origin (onboard or mavlink)
    pub origin: u8,

    /// exit xtrack location: 0 for center of loiter wp, 1 for exit location
    pub loiter_exit_xtrack: bool,

    /// heading needs to be reached
    pub force_heading: bool,

    /// true if altitude is relative from start point
    pub altitude_is_relative: bool,

    /// true if next waypoint should follow after this one
    pub autocontinue: bool,

    /// part of the vtol back transition sequence
    pub vtol_back_transition: bool,

}



impl Default for NavigatorMissionItem {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NavigatorMissionItem::default())
  }
}

impl rosidl_runtime_rs::Message for NavigatorMissionItem {
  type RmwMsg = super::msg::rmw::NavigatorMissionItem;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        sequence_current: msg.sequence_current,
        nav_cmd: msg.nav_cmd,
        latitude: msg.latitude,
        longitude: msg.longitude,
        time_inside: msg.time_inside,
        acceptance_radius: msg.acceptance_radius,
        loiter_radius: msg.loiter_radius,
        yaw: msg.yaw,
        altitude: msg.altitude,
        frame: msg.frame,
        origin: msg.origin,
        loiter_exit_xtrack: msg.loiter_exit_xtrack,
        force_heading: msg.force_heading,
        altitude_is_relative: msg.altitude_is_relative,
        autocontinue: msg.autocontinue,
        vtol_back_transition: msg.vtol_back_transition,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      sequence_current: msg.sequence_current,
      nav_cmd: msg.nav_cmd,
      latitude: msg.latitude,
      longitude: msg.longitude,
      time_inside: msg.time_inside,
      acceptance_radius: msg.acceptance_radius,
      loiter_radius: msg.loiter_radius,
      yaw: msg.yaw,
      altitude: msg.altitude,
      frame: msg.frame,
      origin: msg.origin,
      loiter_exit_xtrack: msg.loiter_exit_xtrack,
      force_heading: msg.force_heading,
      altitude_is_relative: msg.altitude_is_relative,
      autocontinue: msg.autocontinue,
      vtol_back_transition: msg.vtol_back_transition,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      sequence_current: msg.sequence_current,
      nav_cmd: msg.nav_cmd,
      latitude: msg.latitude,
      longitude: msg.longitude,
      time_inside: msg.time_inside,
      acceptance_radius: msg.acceptance_radius,
      loiter_radius: msg.loiter_radius,
      yaw: msg.yaw,
      altitude: msg.altitude,
      frame: msg.frame,
      origin: msg.origin,
      loiter_exit_xtrack: msg.loiter_exit_xtrack,
      force_heading: msg.force_heading,
      altitude_is_relative: msg.altitude_is_relative,
      autocontinue: msg.autocontinue,
      vtol_back_transition: msg.vtol_back_transition,
    }
  }
}


// Corresponds to px4_msgs__msg__NavigatorStatus
/// Current status of a Navigator mode
/// The possible values of nav_state are defined in the VehicleStatus msg.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigatorStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Source mode (values in VehicleStatus)
    pub nav_state: u8,

    /// Navigator failure enum
    pub failure: u8,

}

impl NavigatorStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_NONE: u8 = 0;

    /// Target altitude exceeds maximum height above ground
    pub const FAILURE_HAGL: u8 = 1;

}


impl Default for NavigatorStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NavigatorStatus::default())
  }
}

impl rosidl_runtime_rs::Message for NavigatorStatus {
  type RmwMsg = super::msg::rmw::NavigatorStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        nav_state: msg.nav_state,
        failure: msg.failure,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      nav_state: msg.nav_state,
      failure: msg.failure,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      nav_state: msg.nav_state,
      failure: msg.failure,
    }
  }
}


// Corresponds to px4_msgs__msg__NeuralControl
/// Neural control
///
/// Debugging topic for the Neural controller, logs the inputs and output vectors of the neural network, and the time it takes to run
/// Publisher: mc_nn_control
/// Subscriber: logger

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NeuralControl {
    /// Time since system start
    pub timestamp: u64,

    /// Observation vector (pos error (3), att (6d), lin vel (3), ang vel (3))
    pub observation: [f32; 15],

    /// Output from neural network
    pub network_output: [f32; 4],

    /// Time spent from input to output
    pub controller_time: i32,

    /// Time spent for NN inference
    pub inference_time: i32,

}



impl Default for NeuralControl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NeuralControl::default())
  }
}

impl rosidl_runtime_rs::Message for NeuralControl {
  type RmwMsg = super::msg::rmw::NeuralControl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        observation: msg.observation,
        network_output: msg.network_output,
        controller_time: msg.controller_time,
        inference_time: msg.inference_time,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        observation: msg.observation,
        network_output: msg.network_output,
      controller_time: msg.controller_time,
      inference_time: msg.inference_time,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      observation: msg.observation,
      network_output: msg.network_output,
      controller_time: msg.controller_time,
      inference_time: msg.inference_time,
    }
  }
}


// Corresponds to px4_msgs__msg__NormalizedUnsignedSetpoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NormalizedUnsignedSetpoint {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// [0, 1]
    pub normalized_setpoint: f32,

}



impl Default for NormalizedUnsignedSetpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NormalizedUnsignedSetpoint::default())
  }
}

impl rosidl_runtime_rs::Message for NormalizedUnsignedSetpoint {
  type RmwMsg = super::msg::rmw::NormalizedUnsignedSetpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        normalized_setpoint: msg.normalized_setpoint,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      normalized_setpoint: msg.normalized_setpoint,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      normalized_setpoint: msg.normalized_setpoint,
    }
  }
}


// Corresponds to px4_msgs__msg__ObstacleDistance
/// Obstacle distances in front of the sensor.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObstacleDistance {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Coordinate frame of reference for the yaw rotation and offset of the sensor data. Defaults to MAV_FRAME_GLOBAL, which is North aligned. For body-mounted sensors use MAV_FRAME_BODY_FRD, which is vehicle front aligned.
    pub frame: u8,

    /// Type from MAV_DISTANCE_SENSOR enum.
    pub sensor_type: u8,

    /// Distance of obstacles around the UAV with index 0 corresponding to local North. A value of 0 means that the obstacle is right in front of the sensor. A value of max_distance +1 means no obstacle is present. A value of UINT16_MAX for unknown/not used. In a array element, one unit corresponds to 1cm.
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub distances: [u16; 72],

    /// Angular width in degrees of each array element.
    pub increment: f32,

    /// Minimum distance the sensor can measure in centimeters.
    pub min_distance: u16,

    /// Maximum distance the sensor can measure in centimeters.
    pub max_distance: u16,

    /// Relative angle offset of the 0-index element in the distances array. Value of 0 corresponds to forward. Positive is clockwise direction, negative is counter-clockwise.
    pub angle_offset: f32,

}

impl ObstacleDistance {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAV_FRAME_GLOBAL: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAV_FRAME_LOCAL_NED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAV_FRAME_BODY_FRD: u8 = 12;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAV_DISTANCE_SENSOR_LASER: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAV_DISTANCE_SENSOR_ULTRASOUND: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAV_DISTANCE_SENSOR_INFRARED: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAV_DISTANCE_SENSOR_RADAR: u8 = 3;

}


impl Default for ObstacleDistance {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ObstacleDistance::default())
  }
}

impl rosidl_runtime_rs::Message for ObstacleDistance {
  type RmwMsg = super::msg::rmw::ObstacleDistance;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        frame: msg.frame,
        sensor_type: msg.sensor_type,
        distances: msg.distances,
        increment: msg.increment,
        min_distance: msg.min_distance,
        max_distance: msg.max_distance,
        angle_offset: msg.angle_offset,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      frame: msg.frame,
      sensor_type: msg.sensor_type,
        distances: msg.distances,
      increment: msg.increment,
      min_distance: msg.min_distance,
      max_distance: msg.max_distance,
      angle_offset: msg.angle_offset,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      frame: msg.frame,
      sensor_type: msg.sensor_type,
      distances: msg.distances,
      increment: msg.increment,
      min_distance: msg.min_distance,
      max_distance: msg.max_distance,
      angle_offset: msg.angle_offset,
    }
  }
}


// Corresponds to px4_msgs__msg__OffboardControlMode
/// Off-board control mode

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OffboardControlMode {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acceleration: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub attitude: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub body_rate: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub thrust_and_torque: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub direct_actuator: bool,

}



impl Default for OffboardControlMode {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::OffboardControlMode::default())
  }
}

impl rosidl_runtime_rs::Message for OffboardControlMode {
  type RmwMsg = super::msg::rmw::OffboardControlMode;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        position: msg.position,
        velocity: msg.velocity,
        acceleration: msg.acceleration,
        attitude: msg.attitude,
        body_rate: msg.body_rate,
        thrust_and_torque: msg.thrust_and_torque,
        direct_actuator: msg.direct_actuator,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      position: msg.position,
      velocity: msg.velocity,
      acceleration: msg.acceleration,
      attitude: msg.attitude,
      body_rate: msg.body_rate,
      thrust_and_torque: msg.thrust_and_torque,
      direct_actuator: msg.direct_actuator,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      position: msg.position,
      velocity: msg.velocity,
      acceleration: msg.acceleration,
      attitude: msg.attitude,
      body_rate: msg.body_rate,
      thrust_and_torque: msg.thrust_and_torque,
      direct_actuator: msg.direct_actuator,
    }
  }
}


// Corresponds to px4_msgs__msg__OnboardComputerStatus
/// ONBOARD_COMPUTER_STATUS message data

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OnboardComputerStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// time since system boot of the companion (milliseconds)
    pub uptime: u32,

    /// type of onboard computer 0: Mission computer primary, 1: Mission computer backup 1, 2: Mission computer backup 2, 3: Compute node, 4-5: Compute spares, 6-9: Payload computers.
    pub type_: u8,

    /// CPU usage on the component in percent
    pub cpu_cores: [u8; 8],

    /// Combined CPU usage as the last 10 slices of 100 MS
    pub cpu_combined: [u8; 10],

    /// GPU usage on the component in percent
    pub gpu_cores: [u8; 4],

    /// Combined GPU usage as the last 10 slices of 100 MS
    pub gpu_combined: [u8; 10],

    /// Temperature of the board
    pub temperature_board: i8,

    /// Temperature of the CPU core
    pub temperature_core: [i8; 8],

    /// Fan speeds
    pub fan_speed: [i16; 4],

    /// Amount of used RAM on the component system
    pub ram_usage: u32,

    /// Total amount of RAM on the component system
    pub ram_total: u32,

    /// Storage type: 0: HDD, 1: SSD, 2: EMMC, 3: SD card (non-removable), 4: SD card (removable)
    pub storage_type: [u32; 4],

    /// Amount of used storage space on the component system
    pub storage_usage: [u32; 4],

    /// Total amount of storage space on the component system
    pub storage_total: [u32; 4],

    /// Link type: 0-9: UART, 10-19: Wired network, 20-29: Wifi, 30-39: Point-to-point proprietary, 40-49: Mesh proprietary
    pub link_type: [u32; 6],

    /// Network traffic from the component system
    pub link_tx_rate: [u32; 6],

    /// Network traffic to the component system
    pub link_rx_rate: [u32; 6],

    /// Network capacity from the component system
    pub link_tx_max: [u32; 6],

    /// Network capacity to the component system
    pub link_rx_max: [u32; 6],

}



impl Default for OnboardComputerStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::OnboardComputerStatus::default())
  }
}

impl rosidl_runtime_rs::Message for OnboardComputerStatus {
  type RmwMsg = super::msg::rmw::OnboardComputerStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        uptime: msg.uptime,
        type_: msg.type_,
        cpu_cores: msg.cpu_cores,
        cpu_combined: msg.cpu_combined,
        gpu_cores: msg.gpu_cores,
        gpu_combined: msg.gpu_combined,
        temperature_board: msg.temperature_board,
        temperature_core: msg.temperature_core,
        fan_speed: msg.fan_speed,
        ram_usage: msg.ram_usage,
        ram_total: msg.ram_total,
        storage_type: msg.storage_type,
        storage_usage: msg.storage_usage,
        storage_total: msg.storage_total,
        link_type: msg.link_type,
        link_tx_rate: msg.link_tx_rate,
        link_rx_rate: msg.link_rx_rate,
        link_tx_max: msg.link_tx_max,
        link_rx_max: msg.link_rx_max,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      uptime: msg.uptime,
      type_: msg.type_,
        cpu_cores: msg.cpu_cores,
        cpu_combined: msg.cpu_combined,
        gpu_cores: msg.gpu_cores,
        gpu_combined: msg.gpu_combined,
      temperature_board: msg.temperature_board,
        temperature_core: msg.temperature_core,
        fan_speed: msg.fan_speed,
      ram_usage: msg.ram_usage,
      ram_total: msg.ram_total,
        storage_type: msg.storage_type,
        storage_usage: msg.storage_usage,
        storage_total: msg.storage_total,
        link_type: msg.link_type,
        link_tx_rate: msg.link_tx_rate,
        link_rx_rate: msg.link_rx_rate,
        link_tx_max: msg.link_tx_max,
        link_rx_max: msg.link_rx_max,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      uptime: msg.uptime,
      type_: msg.type_,
      cpu_cores: msg.cpu_cores,
      cpu_combined: msg.cpu_combined,
      gpu_cores: msg.gpu_cores,
      gpu_combined: msg.gpu_combined,
      temperature_board: msg.temperature_board,
      temperature_core: msg.temperature_core,
      fan_speed: msg.fan_speed,
      ram_usage: msg.ram_usage,
      ram_total: msg.ram_total,
      storage_type: msg.storage_type,
      storage_usage: msg.storage_usage,
      storage_total: msg.storage_total,
      link_type: msg.link_type,
      link_tx_rate: msg.link_tx_rate,
      link_rx_rate: msg.link_rx_rate,
      link_tx_max: msg.link_tx_max,
      link_rx_max: msg.link_rx_max,
    }
  }
}


// Corresponds to px4_msgs__msg__OpenDroneIdArmStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OpenDroneIdArmStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub error: [u8; 50],

}



impl Default for OpenDroneIdArmStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::OpenDroneIdArmStatus::default())
  }
}

impl rosidl_runtime_rs::Message for OpenDroneIdArmStatus {
  type RmwMsg = super::msg::rmw::OpenDroneIdArmStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        status: msg.status,
        error: msg.error,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      status: msg.status,
        error: msg.error,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      status: msg.status,
      error: msg.error,
    }
  }
}


// Corresponds to px4_msgs__msg__OpenDroneIdBasicId

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OpenDroneIdBasicId {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: u64,

    /// Only used for drone ID data received from other UAs, no null termination, null filled if shorter
    pub id_or_mac: [u8; 20],

    /// MAV_ODID_ID_TYPE: indicates the format for the uas_id field
    pub id_type: u8,

    /// MAV_ODID_UA_TYPE: indicates the type of UA (Unmanned Aircraft)
    pub ua_type: u8,

    /// UAS (Unmanned Aircraft System) ID following the format specified by id_type, no null termination, null filled if shorter
    pub uas_id: [u8; 20],

}



impl Default for OpenDroneIdBasicId {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::OpenDroneIdBasicId::default())
  }
}

impl rosidl_runtime_rs::Message for OpenDroneIdBasicId {
  type RmwMsg = super::msg::rmw::OpenDroneIdBasicId;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        id_or_mac: msg.id_or_mac,
        id_type: msg.id_type,
        ua_type: msg.ua_type,
        uas_id: msg.uas_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        id_or_mac: msg.id_or_mac,
      id_type: msg.id_type,
      ua_type: msg.ua_type,
        uas_id: msg.uas_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      id_or_mac: msg.id_or_mac,
      id_type: msg.id_type,
      ua_type: msg.ua_type,
      uas_id: msg.uas_id,
    }
  }
}


// Corresponds to px4_msgs__msg__OpenDroneIdOperatorId

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OpenDroneIdOperatorId {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub id_or_mac: [u8; 20],


    // This member is not documented.
    #[allow(missing_docs)]
    pub operator_id_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub operator_id: [u8; 20],

}



impl Default for OpenDroneIdOperatorId {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::OpenDroneIdOperatorId::default())
  }
}

impl rosidl_runtime_rs::Message for OpenDroneIdOperatorId {
  type RmwMsg = super::msg::rmw::OpenDroneIdOperatorId;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        id_or_mac: msg.id_or_mac,
        operator_id_type: msg.operator_id_type,
        operator_id: msg.operator_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        id_or_mac: msg.id_or_mac,
      operator_id_type: msg.operator_id_type,
        operator_id: msg.operator_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      id_or_mac: msg.id_or_mac,
      operator_id_type: msg.operator_id_type,
      operator_id: msg.operator_id,
    }
  }
}


// Corresponds to px4_msgs__msg__OpenDroneIdSelfId

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OpenDroneIdSelfId {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub id_or_mac: [u8; 20],


    // This member is not documented.
    #[allow(missing_docs)]
    pub description_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub description: [u8; 23],

}



impl Default for OpenDroneIdSelfId {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::OpenDroneIdSelfId::default())
  }
}

impl rosidl_runtime_rs::Message for OpenDroneIdSelfId {
  type RmwMsg = super::msg::rmw::OpenDroneIdSelfId;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        id_or_mac: msg.id_or_mac,
        description_type: msg.description_type,
        description: msg.description,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        id_or_mac: msg.id_or_mac,
      description_type: msg.description_type,
        description: msg.description,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      id_or_mac: msg.id_or_mac,
      description_type: msg.description_type,
      description: msg.description,
    }
  }
}


// Corresponds to px4_msgs__msg__OpenDroneIdSystem

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OpenDroneIdSystem {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub id_or_mac: [u8; 20],


    // This member is not documented.
    #[allow(missing_docs)]
    pub operator_location_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub classification_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub operator_latitude: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub operator_longitude: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub area_count: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub area_radius: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub area_ceiling: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub area_floor: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub category_eu: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub class_eu: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub operator_altitude_geo: f32,

}



impl Default for OpenDroneIdSystem {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::OpenDroneIdSystem::default())
  }
}

impl rosidl_runtime_rs::Message for OpenDroneIdSystem {
  type RmwMsg = super::msg::rmw::OpenDroneIdSystem;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        id_or_mac: msg.id_or_mac,
        operator_location_type: msg.operator_location_type,
        classification_type: msg.classification_type,
        operator_latitude: msg.operator_latitude,
        operator_longitude: msg.operator_longitude,
        area_count: msg.area_count,
        area_radius: msg.area_radius,
        area_ceiling: msg.area_ceiling,
        area_floor: msg.area_floor,
        category_eu: msg.category_eu,
        class_eu: msg.class_eu,
        operator_altitude_geo: msg.operator_altitude_geo,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        id_or_mac: msg.id_or_mac,
      operator_location_type: msg.operator_location_type,
      classification_type: msg.classification_type,
      operator_latitude: msg.operator_latitude,
      operator_longitude: msg.operator_longitude,
      area_count: msg.area_count,
      area_radius: msg.area_radius,
      area_ceiling: msg.area_ceiling,
      area_floor: msg.area_floor,
      category_eu: msg.category_eu,
      class_eu: msg.class_eu,
      operator_altitude_geo: msg.operator_altitude_geo,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      id_or_mac: msg.id_or_mac,
      operator_location_type: msg.operator_location_type,
      classification_type: msg.classification_type,
      operator_latitude: msg.operator_latitude,
      operator_longitude: msg.operator_longitude,
      area_count: msg.area_count,
      area_radius: msg.area_radius,
      area_ceiling: msg.area_ceiling,
      area_floor: msg.area_floor,
      category_eu: msg.category_eu,
      class_eu: msg.class_eu,
      operator_altitude_geo: msg.operator_altitude_geo,
    }
  }
}


// Corresponds to px4_msgs__msg__OrbTest

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OrbTest {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub val: i32,

}



impl Default for OrbTest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::OrbTest::default())
  }
}

impl rosidl_runtime_rs::Message for OrbTest {
  type RmwMsg = super::msg::rmw::OrbTest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        val: msg.val,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      val: msg.val,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      val: msg.val,
    }
  }
}


// Corresponds to px4_msgs__msg__OrbTestLarge

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OrbTestLarge {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub val: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub junk: [u8; 512],

}



impl Default for OrbTestLarge {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::OrbTestLarge::default())
  }
}

impl rosidl_runtime_rs::Message for OrbTestLarge {
  type RmwMsg = super::msg::rmw::OrbTestLarge;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        val: msg.val,
        junk: msg.junk,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      val: msg.val,
        junk: msg.junk,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      val: msg.val,
      junk: msg.junk,
    }
  }
}


// Corresponds to px4_msgs__msg__OrbTestMedium

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OrbTestMedium {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub val: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub junk: [u8; 64],

}

impl OrbTestMedium {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 16;

}


impl Default for OrbTestMedium {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::OrbTestMedium::default())
  }
}

impl rosidl_runtime_rs::Message for OrbTestMedium {
  type RmwMsg = super::msg::rmw::OrbTestMedium;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        val: msg.val,
        junk: msg.junk,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      val: msg.val,
        junk: msg.junk,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      val: msg.val,
      junk: msg.junk,
    }
  }
}


// Corresponds to px4_msgs__msg__OrbitStatus
/// Orbit status
///
/// Current state of an orbit or loiter manoeuver, published while the maneuver is executing.
/// For multirotors, published by the orbit flight task (FlightTaskOrbit) on each control cycle
/// when a valid GPS projection is available.
/// For fixed-wing, published by FixedWingModeManager during loiter.
/// Subscribed by the MAVLink module and streamed to the GCS as ORBIT_EXECUTION_STATUS (message 360).

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OrbitStatus {
    /// Time since system start
    pub timestamp: u64,

    /// Radius of the orbit circle. Positive values orbit clockwise, negative values orbit counter-clockwise.
    pub radius: f32,

    /// The coordinate system of the fields: x, y, z
    pub frame: u8,

    /// X coordinate of center point. Coordinate system depends on frame field: `local = x position in meters * 1e4`, `global = latitude in degrees * 1e7`.
    pub x: f64,

    /// Y coordinate of center point. Coordinate system depends on frame field: `local = y position in meters * 1e4`, `global = longitude in degrees * 1e7`.
    pub y: f64,

    /// Altitude of center point. Coordinate system depends on frame field.
    pub z: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_behaviour: u8,

}

impl OrbitStatus {
    /// WGS84 global frame, MSL altitude. x/y = latitude/longitude (degrees × 1e7)
    pub const FRAME_GLOBAL: u8 = 0;

    /// Local NED frame. x/y = north/east position (meters × 1e4)
    pub const FRAME_LOCAL_NED: u8 = 1;

    /// WGS84 global frame, altitude above home. x/y = latitude/longitude (degrees × 1e7)
    pub const FRAME_GLOBAL_RELATIVE_ALT: u8 = 3;

    /// WGS84 global frame, altitude above terrain. x/y = latitude/longitude (degrees × 1e7)
    pub const FRAME_GLOBAL_TERRAIN_ALT: u8 = 10;

    /// Vehicle front points to the center (default).
    pub const ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER: u8 = 0;

    /// Vehicle front holds heading when message received.
    pub const ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING: u8 = 1;

    /// Yaw uncontrolled.
    pub const ORBIT_YAW_BEHAVIOUR_UNCONTROLLED: u8 = 2;

    /// Vehicle front follows flight path (tangential to circle).
    pub const ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE: u8 = 3;

    /// Yaw controlled by RC input.
    pub const ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED: u8 = 4;

    /// Vehicle uses current yaw behaviour (unchanged). The vehicle-default yaw behaviour is used if this value is specified when orbit is first commanded.
    pub const ORBIT_YAW_BEHAVIOUR_UNCHANGED: u8 = 5;

}


impl Default for OrbitStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::OrbitStatus::default())
  }
}

impl rosidl_runtime_rs::Message for OrbitStatus {
  type RmwMsg = super::msg::rmw::OrbitStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        radius: msg.radius,
        frame: msg.frame,
        x: msg.x,
        y: msg.y,
        z: msg.z,
        yaw_behaviour: msg.yaw_behaviour,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      radius: msg.radius,
      frame: msg.frame,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      yaw_behaviour: msg.yaw_behaviour,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      radius: msg.radius,
      frame: msg.frame,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      yaw_behaviour: msg.yaw_behaviour,
    }
  }
}


// Corresponds to px4_msgs__msg__ParameterResetRequest
/// ParameterResetRequest : Used by the primary to reset one or all parameter value(s) on the remote

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ParameterResetRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parameter_index: u16,

    /// If this is true then ignore parameter_index
    pub reset_all: bool,

}

impl ParameterResetRequest {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 4;

}


impl Default for ParameterResetRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ParameterResetRequest::default())
  }
}

impl rosidl_runtime_rs::Message for ParameterResetRequest {
  type RmwMsg = super::msg::rmw::ParameterResetRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        parameter_index: msg.parameter_index,
        reset_all: msg.reset_all,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      parameter_index: msg.parameter_index,
      reset_all: msg.reset_all,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      parameter_index: msg.parameter_index,
      reset_all: msg.reset_all,
    }
  }
}


// Corresponds to px4_msgs__msg__ParameterSetUsedRequest
/// ParameterSetUsedRequest : Used by a remote to update the used flag for a parameter on the primary

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ParameterSetUsedRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parameter_index: u16,

}

impl ParameterSetUsedRequest {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 64;

}


impl Default for ParameterSetUsedRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ParameterSetUsedRequest::default())
  }
}

impl rosidl_runtime_rs::Message for ParameterSetUsedRequest {
  type RmwMsg = super::msg::rmw::ParameterSetUsedRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        parameter_index: msg.parameter_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      parameter_index: msg.parameter_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      parameter_index: msg.parameter_index,
    }
  }
}


// Corresponds to px4_msgs__msg__ParameterSetValueRequest
/// ParameterSetValueRequest : Used by a remote or primary to update the value for a parameter at the other end

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ParameterSetValueRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parameter_index: u16,

    /// Optional value for an integer parameter
    pub int_value: i32,

    /// Optional value for a float parameter
    pub float_value: f32,

}

impl ParameterSetValueRequest {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 32;

}


impl Default for ParameterSetValueRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ParameterSetValueRequest::default())
  }
}

impl rosidl_runtime_rs::Message for ParameterSetValueRequest {
  type RmwMsg = super::msg::rmw::ParameterSetValueRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        parameter_index: msg.parameter_index,
        int_value: msg.int_value,
        float_value: msg.float_value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      parameter_index: msg.parameter_index,
      int_value: msg.int_value,
      float_value: msg.float_value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      parameter_index: msg.parameter_index,
      int_value: msg.int_value,
      float_value: msg.float_value,
    }
  }
}


// Corresponds to px4_msgs__msg__ParameterSetValueResponse
/// ParameterSetValueResponse : Response to a set value request by either primary or secondary

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ParameterSetValueResponse {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub request_timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parameter_index: u16,

}

impl ParameterSetValueResponse {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 4;

}


impl Default for ParameterSetValueResponse {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ParameterSetValueResponse::default())
  }
}

impl rosidl_runtime_rs::Message for ParameterSetValueResponse {
  type RmwMsg = super::msg::rmw::ParameterSetValueResponse;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        request_timestamp: msg.request_timestamp,
        parameter_index: msg.parameter_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      request_timestamp: msg.request_timestamp,
      parameter_index: msg.parameter_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      request_timestamp: msg.request_timestamp,
      parameter_index: msg.parameter_index,
    }
  }
}


// Corresponds to px4_msgs__msg__ParameterUpdate
/// This message is used to notify the system about one or more parameter changes

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ParameterUpdate {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Instance count - constantly incrementing
    pub instance: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub get_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub set_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub find_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub export_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub changed: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub custom_default: u16,

}



impl Default for ParameterUpdate {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ParameterUpdate::default())
  }
}

impl rosidl_runtime_rs::Message for ParameterUpdate {
  type RmwMsg = super::msg::rmw::ParameterUpdate;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        instance: msg.instance,
        get_count: msg.get_count,
        set_count: msg.set_count,
        find_count: msg.find_count,
        export_count: msg.export_count,
        active: msg.active,
        changed: msg.changed,
        custom_default: msg.custom_default,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      instance: msg.instance,
      get_count: msg.get_count,
      set_count: msg.set_count,
      find_count: msg.find_count,
      export_count: msg.export_count,
      active: msg.active,
      changed: msg.changed,
      custom_default: msg.custom_default,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      instance: msg.instance,
      get_count: msg.get_count,
      set_count: msg.set_count,
      find_count: msg.find_count,
      export_count: msg.export_count,
      active: msg.active,
      changed: msg.changed,
      custom_default: msg.custom_default,
    }
  }
}


// Corresponds to px4_msgs__msg__Ping

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Ping {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Timestamp of the ping packet
    pub ping_time: u64,

    /// Sequence number of the ping packet
    pub ping_sequence: u32,

    /// Number of dropped ping packets
    pub dropped_packets: u32,

    /// Round trip time (in ms)
    pub rtt_ms: f32,

    /// System ID of the remote system
    pub system_id: u8,

    /// Component ID of the remote system
    pub component_id: u8,

}



impl Default for Ping {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Ping::default())
  }
}

impl rosidl_runtime_rs::Message for Ping {
  type RmwMsg = super::msg::rmw::Ping;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        ping_time: msg.ping_time,
        ping_sequence: msg.ping_sequence,
        dropped_packets: msg.dropped_packets,
        rtt_ms: msg.rtt_ms,
        system_id: msg.system_id,
        component_id: msg.component_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      ping_time: msg.ping_time,
      ping_sequence: msg.ping_sequence,
      dropped_packets: msg.dropped_packets,
      rtt_ms: msg.rtt_ms,
      system_id: msg.system_id,
      component_id: msg.component_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      ping_time: msg.ping_time,
      ping_sequence: msg.ping_sequence,
      dropped_packets: msg.dropped_packets,
      rtt_ms: msg.rtt_ms,
      system_id: msg.system_id,
      component_id: msg.component_id,
    }
  }
}


// Corresponds to px4_msgs__msg__PositionControllerLandingStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PositionControllerLandingStatus {
    /// time since system start
    pub timestamp: u64,

    /// lateral touchdown position offset manually commanded during landing
    pub lateral_touchdown_offset: f32,

    /// true if the aircraft is flaring
    pub flaring: bool,

    /// abort status is:
    /// 0 if not aborted
    /// >0 if aborted, with the singular abort criterion which triggered the landing abort enumerated by the following abort reasons
    pub abort_status: u8,

}

impl PositionControllerLandingStatus {
    /// abort reasons
    /// after the manual operator abort, corresponds to individual bits of param FW_LND_ABORT
    pub const NOT_ABORTED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ABORTED_BY_OPERATOR: u8 = 1;

    /// FW_LND_ABORT (1 << 0)
    pub const TERRAIN_NOT_FOUND: u8 = 2;

    /// FW_LND_ABORT (1 << 1)
    pub const TERRAIN_TIMEOUT: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNKNOWN_ABORT_CRITERION: u8 = 4;

}


impl Default for PositionControllerLandingStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PositionControllerLandingStatus::default())
  }
}

impl rosidl_runtime_rs::Message for PositionControllerLandingStatus {
  type RmwMsg = super::msg::rmw::PositionControllerLandingStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        lateral_touchdown_offset: msg.lateral_touchdown_offset,
        flaring: msg.flaring,
        abort_status: msg.abort_status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      lateral_touchdown_offset: msg.lateral_touchdown_offset,
      flaring: msg.flaring,
      abort_status: msg.abort_status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      lateral_touchdown_offset: msg.lateral_touchdown_offset,
      flaring: msg.flaring,
      abort_status: msg.abort_status,
    }
  }
}


// Corresponds to px4_msgs__msg__PositionControllerStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PositionControllerStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Roll setpoint
    pub nav_roll: f32,

    /// Pitch setpoint
    pub nav_pitch: f32,

    /// Bearing angle
    pub nav_bearing: f32,

    /// Bearing angle from aircraft to current target
    pub target_bearing: f32,

    /// Signed track error
    pub xtrack_error: f32,

    /// Distance to active (next) waypoint
    pub wp_dist: f32,

    /// Current horizontal acceptance radius
    pub acceptance_radius: f32,

    /// Current (applied) position setpoint type (see PositionSetpoint.msg)
    pub type_: u8,

}



impl Default for PositionControllerStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PositionControllerStatus::default())
  }
}

impl rosidl_runtime_rs::Message for PositionControllerStatus {
  type RmwMsg = super::msg::rmw::PositionControllerStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        nav_roll: msg.nav_roll,
        nav_pitch: msg.nav_pitch,
        nav_bearing: msg.nav_bearing,
        target_bearing: msg.target_bearing,
        xtrack_error: msg.xtrack_error,
        wp_dist: msg.wp_dist,
        acceptance_radius: msg.acceptance_radius,
        type_: msg.type_,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      nav_roll: msg.nav_roll,
      nav_pitch: msg.nav_pitch,
      nav_bearing: msg.nav_bearing,
      target_bearing: msg.target_bearing,
      xtrack_error: msg.xtrack_error,
      wp_dist: msg.wp_dist,
      acceptance_radius: msg.acceptance_radius,
      type_: msg.type_,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      nav_roll: msg.nav_roll,
      nav_pitch: msg.nav_pitch,
      nav_bearing: msg.nav_bearing,
      target_bearing: msg.target_bearing,
      xtrack_error: msg.xtrack_error,
      wp_dist: msg.wp_dist,
      acceptance_radius: msg.acceptance_radius,
      type_: msg.type_,
    }
  }
}


// Corresponds to px4_msgs__msg__PositionSetpoint
/// this file is only used in the position_setpoint triple as a dependency

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PositionSetpoint {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// true if setpoint is valid
    pub valid: bool,

    /// setpoint type to adjust behavior of position controller
    pub type_: u8,

    /// local velocity setpoint in m/s in NED
    pub vx: f32,

    /// local velocity setpoint in m/s in NED
    pub vy: f32,

    /// local velocity setpoint in m/s in NED
    pub vz: f32,

    /// latitude, in deg
    pub lat: f64,

    /// longitude, in deg
    pub lon: f64,

    /// altitude AMSL, in m
    pub alt: f32,

    /// yaw (only in hover), in rad [-PI..PI), NaN = leave to flight task
    pub yaw: f32,

    /// [@range 0, INF] loiter major axis radius
    pub loiter_radius: f32,

    /// [@range 0, INF] loiter minor axis radius (used for non-circular loiter shapes)
    pub loiter_minor_radius: f32,

    /// loiter direction is clockwise by default and can be changed using this field
    pub loiter_direction_counter_clockwise: bool,

    /// [@range -pi, pi] orientation of the major axis with respect to true north
    pub loiter_orientation: f32,

    /// loitern pattern to follow
    pub loiter_pattern: u8,

    /// horizontal acceptance_radius (meters)
    pub acceptance_radius: f32,

    /// vertical acceptance radius, only used for fixed wing guidance, NAN = let guidance choose (meters)
    pub alt_acceptance_radius: f32,

    /// desired course (bearing) over ground, NaN = unused
    pub course: f32,

    /// the generally desired cruising speed (not a hard constraint)
    pub cruising_speed: f32,

    /// commands the vehicle to glide if the capability is available (fixed wing only)
    pub gliding_enabled: bool,

    /// the generally desired cruising throttle (not a hard constraint), only has an effect for rover
    pub cruising_throttle: f32,

}

impl PositionSetpoint {
    /// position setpoint
    pub const SETPOINT_TYPE_POSITION: u8 = 0;

    /// velocity setpoint
    pub const SETPOINT_TYPE_VELOCITY: u8 = 1;

    /// loiter setpoint
    pub const SETPOINT_TYPE_LOITER: u8 = 2;

    /// takeoff setpoint
    pub const SETPOINT_TYPE_TAKEOFF: u8 = 3;

    /// land setpoint, altitude must be ignored, descend until landing
    pub const SETPOINT_TYPE_LAND: u8 = 4;

    /// do nothing, switch off motors or keep at idle speed (MC)
    pub const SETPOINT_TYPE_IDLE: u8 = 5;

    /// Circular pattern
    pub const LOITER_TYPE_ORBIT: u8 = 0;

    /// Pattern resembling an 8
    pub const LOITER_TYPE_FIGUREEIGHT: u8 = 1;

}


impl Default for PositionSetpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PositionSetpoint::default())
  }
}

impl rosidl_runtime_rs::Message for PositionSetpoint {
  type RmwMsg = super::msg::rmw::PositionSetpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        valid: msg.valid,
        type_: msg.type_,
        vx: msg.vx,
        vy: msg.vy,
        vz: msg.vz,
        lat: msg.lat,
        lon: msg.lon,
        alt: msg.alt,
        yaw: msg.yaw,
        loiter_radius: msg.loiter_radius,
        loiter_minor_radius: msg.loiter_minor_radius,
        loiter_direction_counter_clockwise: msg.loiter_direction_counter_clockwise,
        loiter_orientation: msg.loiter_orientation,
        loiter_pattern: msg.loiter_pattern,
        acceptance_radius: msg.acceptance_radius,
        alt_acceptance_radius: msg.alt_acceptance_radius,
        course: msg.course,
        cruising_speed: msg.cruising_speed,
        gliding_enabled: msg.gliding_enabled,
        cruising_throttle: msg.cruising_throttle,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      valid: msg.valid,
      type_: msg.type_,
      vx: msg.vx,
      vy: msg.vy,
      vz: msg.vz,
      lat: msg.lat,
      lon: msg.lon,
      alt: msg.alt,
      yaw: msg.yaw,
      loiter_radius: msg.loiter_radius,
      loiter_minor_radius: msg.loiter_minor_radius,
      loiter_direction_counter_clockwise: msg.loiter_direction_counter_clockwise,
      loiter_orientation: msg.loiter_orientation,
      loiter_pattern: msg.loiter_pattern,
      acceptance_radius: msg.acceptance_radius,
      alt_acceptance_radius: msg.alt_acceptance_radius,
      course: msg.course,
      cruising_speed: msg.cruising_speed,
      gliding_enabled: msg.gliding_enabled,
      cruising_throttle: msg.cruising_throttle,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      valid: msg.valid,
      type_: msg.type_,
      vx: msg.vx,
      vy: msg.vy,
      vz: msg.vz,
      lat: msg.lat,
      lon: msg.lon,
      alt: msg.alt,
      yaw: msg.yaw,
      loiter_radius: msg.loiter_radius,
      loiter_minor_radius: msg.loiter_minor_radius,
      loiter_direction_counter_clockwise: msg.loiter_direction_counter_clockwise,
      loiter_orientation: msg.loiter_orientation,
      loiter_pattern: msg.loiter_pattern,
      acceptance_radius: msg.acceptance_radius,
      alt_acceptance_radius: msg.alt_acceptance_radius,
      course: msg.course,
      cruising_speed: msg.cruising_speed,
      gliding_enabled: msg.gliding_enabled,
      cruising_throttle: msg.cruising_throttle,
    }
  }
}


// Corresponds to px4_msgs__msg__PositionSetpointTriplet
/// Global position setpoint triplet in WGS84 coordinates.
/// This are the three next waypoints (or just the next two or one).

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PositionSetpointTriplet {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub previous: super::msg::PositionSetpoint,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current: super::msg::PositionSetpoint,


    // This member is not documented.
    #[allow(missing_docs)]
    pub next: super::msg::PositionSetpoint,

}



impl Default for PositionSetpointTriplet {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PositionSetpointTriplet::default())
  }
}

impl rosidl_runtime_rs::Message for PositionSetpointTriplet {
  type RmwMsg = super::msg::rmw::PositionSetpointTriplet;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        previous: super::msg::PositionSetpoint::into_rmw_message(std::borrow::Cow::Owned(msg.previous)).into_owned(),
        current: super::msg::PositionSetpoint::into_rmw_message(std::borrow::Cow::Owned(msg.current)).into_owned(),
        next: super::msg::PositionSetpoint::into_rmw_message(std::borrow::Cow::Owned(msg.next)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        previous: super::msg::PositionSetpoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.previous)).into_owned(),
        current: super::msg::PositionSetpoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.current)).into_owned(),
        next: super::msg::PositionSetpoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.next)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      previous: super::msg::PositionSetpoint::from_rmw_message(msg.previous),
      current: super::msg::PositionSetpoint::from_rmw_message(msg.current),
      next: super::msg::PositionSetpoint::from_rmw_message(msg.next),
    }
  }
}


// Corresponds to px4_msgs__msg__PowerButtonState
/// power button state notification message

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PowerButtonState {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// one of PWR_BUTTON_STATE_*
    pub event: u8,

}

impl PowerButtonState {
    /// Button went up without meeting shutdown button down time (delete event)
    pub const PWR_BUTTON_STATE_IDEL: u8 = 0;

    /// Button went Down
    pub const PWR_BUTTON_STATE_DOWN: u8 = 1;

    /// Button went Up
    pub const PWR_BUTTON_STATE_UP: u8 = 2;

    /// Button went Up after meeting shutdown button down time
    pub const PWR_BUTTON_STATE_REQUEST_SHUTDOWN: u8 = 3;

}


impl Default for PowerButtonState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PowerButtonState::default())
  }
}

impl rosidl_runtime_rs::Message for PowerButtonState {
  type RmwMsg = super::msg::rmw::PowerButtonState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        event: msg.event,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      event: msg.event,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      event: msg.event,
    }
  }
}


// Corresponds to px4_msgs__msg__PowerMonitor
/// power monitor message

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PowerMonitor {
    /// Time since system start (microseconds)
    pub timestamp: u64,

    /// Voltage in volts, 0 if unknown
    pub voltage_v: f32,

    /// Current in amperes, -1 if unknown
    pub current_a: f32,

    /// power in watts, -1 if unknown
    pub power_w: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rconf: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rsv: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rbv: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rp: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rc: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rcal: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub me: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub al: i16,

}



impl Default for PowerMonitor {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PowerMonitor::default())
  }
}

impl rosidl_runtime_rs::Message for PowerMonitor {
  type RmwMsg = super::msg::rmw::PowerMonitor;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        voltage_v: msg.voltage_v,
        current_a: msg.current_a,
        power_w: msg.power_w,
        rconf: msg.rconf,
        rsv: msg.rsv,
        rbv: msg.rbv,
        rp: msg.rp,
        rc: msg.rc,
        rcal: msg.rcal,
        me: msg.me,
        al: msg.al,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      voltage_v: msg.voltage_v,
      current_a: msg.current_a,
      power_w: msg.power_w,
      rconf: msg.rconf,
      rsv: msg.rsv,
      rbv: msg.rbv,
      rp: msg.rp,
      rc: msg.rc,
      rcal: msg.rcal,
      me: msg.me,
      al: msg.al,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      voltage_v: msg.voltage_v,
      current_a: msg.current_a,
      power_w: msg.power_w,
      rconf: msg.rconf,
      rsv: msg.rsv,
      rbv: msg.rbv,
      rp: msg.rp,
      rc: msg.rc,
      rcal: msg.rcal,
      me: msg.me,
      al: msg.al,
    }
  }
}


// Corresponds to px4_msgs__msg__PpsCapture

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PpsCapture {
    /// time since system start (microseconds) at PPS capture event
    pub timestamp: u64,

    /// Corrected GPS UTC timestamp at PPS capture event
    pub rtc_timestamp: u64,

    /// Increments when PPS dt < 50ms
    pub pps_rate_exceeded_counter: u8,

}



impl Default for PpsCapture {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PpsCapture::default())
  }
}

impl rosidl_runtime_rs::Message for PpsCapture {
  type RmwMsg = super::msg::rmw::PpsCapture;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        rtc_timestamp: msg.rtc_timestamp,
        pps_rate_exceeded_counter: msg.pps_rate_exceeded_counter,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      rtc_timestamp: msg.rtc_timestamp,
      pps_rate_exceeded_counter: msg.pps_rate_exceeded_counter,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      rtc_timestamp: msg.rtc_timestamp,
      pps_rate_exceeded_counter: msg.pps_rate_exceeded_counter,
    }
  }
}


// Corresponds to px4_msgs__msg__PrecLandStatus
/// Precision-landing runtime status: a single state captures both whether precision landing is active and which phase it is in.
///
/// Published by: navigator (precland.cpp).
/// Subscribed by: vision_target_estimator, flight_mode_manager (FlightTaskAuto).
///
/// STOPPED is published when the precision-landing task is not active (just inactivated, or never started).
/// The phase values (START..FALLBACK) are only published while the task is running and not yet finished.
/// DONE is published once on successful completion, then STOPPED on the subsequent inactivation.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PrecLandStatus {
    /// Time since system start
    pub timestamp: u64,

    /// Current precision-landing state
    pub state: u8,

}

impl PrecLandStatus {
    /// Task not active (inactivated or never started)
    pub const PREC_LAND_STATE_STOPPED: u8 = 0;

    /// Task just activated, initial setup
    pub const PREC_LAND_STATE_START: u8 = 1;

    /// Positioning over landing target while maintaining altitude
    pub const PREC_LAND_STATE_HORIZONTAL: u8 = 2;

    /// Descending while staying over the target
    pub const PREC_LAND_STATE_DESCEND: u8 = 3;

    /// Final landing approach (continues even without target in sight)
    pub const PREC_LAND_STATE_FINAL: u8 = 4;

    /// Searching for the landing target
    pub const PREC_LAND_STATE_SEARCH: u8 = 5;

    /// Fallback landing method (no precision)
    pub const PREC_LAND_STATE_FALLBACK: u8 = 6;

    /// Precision landing finished
    pub const PREC_LAND_STATE_DONE: u8 = 7;

}


impl Default for PrecLandStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PrecLandStatus::default())
  }
}

impl rosidl_runtime_rs::Message for PrecLandStatus {
  type RmwMsg = super::msg::rmw::PrecLandStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        state: msg.state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      state: msg.state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      state: msg.state,
    }
  }
}


// Corresponds to px4_msgs__msg__PurePursuitStatus
/// Pure pursuit status

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PurePursuitStatus {
    /// Time since system start
    pub timestamp: u64,

    /// [@range 0, inf] Lookahead distance of pure the pursuit controller
    pub lookahead_distance: f32,

    /// [rad] [@range -pi, pi] [@frame NED] Target bearing calculated by the pure pursuit controller
    pub target_bearing: f32,

    /// [@range -inf (Left of the path), inf (Right of the path)] Shortest distance from the vehicle to the path
    pub crosstrack_error: f32,

    /// [@range -inf, inf]Distance from the vehicle to the current waypoint
    pub distance_to_waypoint: f32,

    /// [rad] [@range -pi, pi] [@frame NED]Bearing towards current waypoint
    pub bearing_to_waypoint: f32,

}



impl Default for PurePursuitStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PurePursuitStatus::default())
  }
}

impl rosidl_runtime_rs::Message for PurePursuitStatus {
  type RmwMsg = super::msg::rmw::PurePursuitStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        lookahead_distance: msg.lookahead_distance,
        target_bearing: msg.target_bearing,
        crosstrack_error: msg.crosstrack_error,
        distance_to_waypoint: msg.distance_to_waypoint,
        bearing_to_waypoint: msg.bearing_to_waypoint,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      lookahead_distance: msg.lookahead_distance,
      target_bearing: msg.target_bearing,
      crosstrack_error: msg.crosstrack_error,
      distance_to_waypoint: msg.distance_to_waypoint,
      bearing_to_waypoint: msg.bearing_to_waypoint,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      lookahead_distance: msg.lookahead_distance,
      target_bearing: msg.target_bearing,
      crosstrack_error: msg.crosstrack_error,
      distance_to_waypoint: msg.distance_to_waypoint,
      bearing_to_waypoint: msg.bearing_to_waypoint,
    }
  }
}


// Corresponds to px4_msgs__msg__PwmInput

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PwmInput {
    /// Time since system start (microseconds)
    pub timestamp: u64,

    /// Timer overcapture error flag (AUX5 or MAIN5)
    pub error_count: u64,

    /// Pulse width, timer counts (microseconds)
    pub pulse_width: u32,

    /// Period, timer counts (microseconds)
    pub period: u32,

}



impl Default for PwmInput {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PwmInput::default())
  }
}

impl rosidl_runtime_rs::Message for PwmInput {
  type RmwMsg = super::msg::rmw::PwmInput;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        error_count: msg.error_count,
        pulse_width: msg.pulse_width,
        period: msg.period,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      error_count: msg.error_count,
      pulse_width: msg.pulse_width,
      period: msg.period,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      error_count: msg.error_count,
      pulse_width: msg.pulse_width,
      period: msg.period,
    }
  }
}


// Corresponds to px4_msgs__msg__Px4ioStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Px4ioStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub free_memory_bytes: u16,

    /// Servo rail voltage in volts
    pub voltage_v: f32,

    /// RSSI pin voltage in volts
    pub rssi_v: f32,

    /// PX4IO status flags (PX4IO_P_STATUS_FLAGS)
    pub status_arm_sync: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_failsafe: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_fmu_initialized: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_fmu_ok: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_init_ok: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_outputs_armed: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_raw_pwm: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_rc_ok: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_rc_dsm: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_rc_ppm: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_rc_sbus: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_rc_st24: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_rc_sumd: bool,

    /// px4io safety button was pressed for longer than 1 second
    pub status_safety_button_event: bool,

    /// PX4IO alarms (PX4IO_P_STATUS_ALARMS)
    pub alarm_pwm_error: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub alarm_rc_lost: bool,

    /// PX4IO arming (PX4IO_P_SETUP_ARMING)
    pub arming_failsafe_custom: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub arming_fmu_armed: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub arming_fmu_prearmed: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub arming_termination: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub arming_io_arm_ok: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub arming_lockdown: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub arming_termination_failsafe: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pwm: [u16; 8],


    // This member is not documented.
    #[allow(missing_docs)]
    pub pwm_disarmed: [u16; 8],


    // This member is not documented.
    #[allow(missing_docs)]
    pub pwm_failsafe: [u16; 8],


    // This member is not documented.
    #[allow(missing_docs)]
    pub pwm_rate_hz: [u16; 8],


    // This member is not documented.
    #[allow(missing_docs)]
    pub raw_inputs: [u16; 18],

}



impl Default for Px4ioStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Px4ioStatus::default())
  }
}

impl rosidl_runtime_rs::Message for Px4ioStatus {
  type RmwMsg = super::msg::rmw::Px4ioStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        free_memory_bytes: msg.free_memory_bytes,
        voltage_v: msg.voltage_v,
        rssi_v: msg.rssi_v,
        status_arm_sync: msg.status_arm_sync,
        status_failsafe: msg.status_failsafe,
        status_fmu_initialized: msg.status_fmu_initialized,
        status_fmu_ok: msg.status_fmu_ok,
        status_init_ok: msg.status_init_ok,
        status_outputs_armed: msg.status_outputs_armed,
        status_raw_pwm: msg.status_raw_pwm,
        status_rc_ok: msg.status_rc_ok,
        status_rc_dsm: msg.status_rc_dsm,
        status_rc_ppm: msg.status_rc_ppm,
        status_rc_sbus: msg.status_rc_sbus,
        status_rc_st24: msg.status_rc_st24,
        status_rc_sumd: msg.status_rc_sumd,
        status_safety_button_event: msg.status_safety_button_event,
        alarm_pwm_error: msg.alarm_pwm_error,
        alarm_rc_lost: msg.alarm_rc_lost,
        arming_failsafe_custom: msg.arming_failsafe_custom,
        arming_fmu_armed: msg.arming_fmu_armed,
        arming_fmu_prearmed: msg.arming_fmu_prearmed,
        arming_termination: msg.arming_termination,
        arming_io_arm_ok: msg.arming_io_arm_ok,
        arming_lockdown: msg.arming_lockdown,
        arming_termination_failsafe: msg.arming_termination_failsafe,
        pwm: msg.pwm,
        pwm_disarmed: msg.pwm_disarmed,
        pwm_failsafe: msg.pwm_failsafe,
        pwm_rate_hz: msg.pwm_rate_hz,
        raw_inputs: msg.raw_inputs,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      free_memory_bytes: msg.free_memory_bytes,
      voltage_v: msg.voltage_v,
      rssi_v: msg.rssi_v,
      status_arm_sync: msg.status_arm_sync,
      status_failsafe: msg.status_failsafe,
      status_fmu_initialized: msg.status_fmu_initialized,
      status_fmu_ok: msg.status_fmu_ok,
      status_init_ok: msg.status_init_ok,
      status_outputs_armed: msg.status_outputs_armed,
      status_raw_pwm: msg.status_raw_pwm,
      status_rc_ok: msg.status_rc_ok,
      status_rc_dsm: msg.status_rc_dsm,
      status_rc_ppm: msg.status_rc_ppm,
      status_rc_sbus: msg.status_rc_sbus,
      status_rc_st24: msg.status_rc_st24,
      status_rc_sumd: msg.status_rc_sumd,
      status_safety_button_event: msg.status_safety_button_event,
      alarm_pwm_error: msg.alarm_pwm_error,
      alarm_rc_lost: msg.alarm_rc_lost,
      arming_failsafe_custom: msg.arming_failsafe_custom,
      arming_fmu_armed: msg.arming_fmu_armed,
      arming_fmu_prearmed: msg.arming_fmu_prearmed,
      arming_termination: msg.arming_termination,
      arming_io_arm_ok: msg.arming_io_arm_ok,
      arming_lockdown: msg.arming_lockdown,
      arming_termination_failsafe: msg.arming_termination_failsafe,
        pwm: msg.pwm,
        pwm_disarmed: msg.pwm_disarmed,
        pwm_failsafe: msg.pwm_failsafe,
        pwm_rate_hz: msg.pwm_rate_hz,
        raw_inputs: msg.raw_inputs,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      free_memory_bytes: msg.free_memory_bytes,
      voltage_v: msg.voltage_v,
      rssi_v: msg.rssi_v,
      status_arm_sync: msg.status_arm_sync,
      status_failsafe: msg.status_failsafe,
      status_fmu_initialized: msg.status_fmu_initialized,
      status_fmu_ok: msg.status_fmu_ok,
      status_init_ok: msg.status_init_ok,
      status_outputs_armed: msg.status_outputs_armed,
      status_raw_pwm: msg.status_raw_pwm,
      status_rc_ok: msg.status_rc_ok,
      status_rc_dsm: msg.status_rc_dsm,
      status_rc_ppm: msg.status_rc_ppm,
      status_rc_sbus: msg.status_rc_sbus,
      status_rc_st24: msg.status_rc_st24,
      status_rc_sumd: msg.status_rc_sumd,
      status_safety_button_event: msg.status_safety_button_event,
      alarm_pwm_error: msg.alarm_pwm_error,
      alarm_rc_lost: msg.alarm_rc_lost,
      arming_failsafe_custom: msg.arming_failsafe_custom,
      arming_fmu_armed: msg.arming_fmu_armed,
      arming_fmu_prearmed: msg.arming_fmu_prearmed,
      arming_termination: msg.arming_termination,
      arming_io_arm_ok: msg.arming_io_arm_ok,
      arming_lockdown: msg.arming_lockdown,
      arming_termination_failsafe: msg.arming_termination_failsafe,
      pwm: msg.pwm,
      pwm_disarmed: msg.pwm_disarmed,
      pwm_failsafe: msg.pwm_failsafe,
      pwm_rate_hz: msg.pwm_rate_hz,
      raw_inputs: msg.raw_inputs,
    }
  }
}


// Corresponds to px4_msgs__msg__QshellReq

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QshellReq {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub cmd: [u8; 100],


    // This member is not documented.
    #[allow(missing_docs)]
    pub strlen: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub request_sequence: u32,

}

impl QshellReq {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAX_STRLEN: u32 = 100;

}


impl Default for QshellReq {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::QshellReq::default())
  }
}

impl rosidl_runtime_rs::Message for QshellReq {
  type RmwMsg = super::msg::rmw::QshellReq;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        cmd: msg.cmd,
        strlen: msg.strlen,
        request_sequence: msg.request_sequence,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        cmd: msg.cmd,
      strlen: msg.strlen,
      request_sequence: msg.request_sequence,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      cmd: msg.cmd,
      strlen: msg.strlen,
      request_sequence: msg.request_sequence,
    }
  }
}


// Corresponds to px4_msgs__msg__QshellRetval

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QshellRetval {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub return_value: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub return_sequence: u32,

}



impl Default for QshellRetval {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::QshellRetval::default())
  }
}

impl rosidl_runtime_rs::Message for QshellRetval {
  type RmwMsg = super::msg::rmw::QshellRetval;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        return_value: msg.return_value,
        return_sequence: msg.return_sequence,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      return_value: msg.return_value,
      return_sequence: msg.return_sequence,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      return_value: msg.return_value,
      return_sequence: msg.return_sequence,
    }
  }
}


// Corresponds to px4_msgs__msg__RadioStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RadioStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// local signal strength
    pub rssi: u8,

    /// remote signal strength
    pub remote_rssi: u8,

    /// how full the tx buffer is as a percentage
    pub txbuf: u8,

    /// background noise level
    pub noise: u8,

    /// remote background noise level
    pub remote_noise: u8,

    /// receive errors
    pub rxerrors: u16,

    /// count of error corrected packets
    pub fix: u16,

}



impl Default for RadioStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RadioStatus::default())
  }
}

impl rosidl_runtime_rs::Message for RadioStatus {
  type RmwMsg = super::msg::rmw::RadioStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        rssi: msg.rssi,
        remote_rssi: msg.remote_rssi,
        txbuf: msg.txbuf,
        noise: msg.noise,
        remote_noise: msg.remote_noise,
        rxerrors: msg.rxerrors,
        fix: msg.fix,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      rssi: msg.rssi,
      remote_rssi: msg.remote_rssi,
      txbuf: msg.txbuf,
      noise: msg.noise,
      remote_noise: msg.remote_noise,
      rxerrors: msg.rxerrors,
      fix: msg.fix,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      rssi: msg.rssi,
      remote_rssi: msg.remote_rssi,
      txbuf: msg.txbuf,
      noise: msg.noise,
      remote_noise: msg.remote_noise,
      rxerrors: msg.rxerrors,
      fix: msg.fix,
    }
  }
}


// Corresponds to px4_msgs__msg__RangingBeacon
/// Ranging beacon measurement data (e.g. LoRa, UWB)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RangingBeacon {
    /// time since system start
    pub timestamp: u64,

    /// the timestamp of the raw data
    pub timestamp_sample: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub beacon_id: u8,

    /// Range measurement
    pub range: f32,

    /// Latitude
    pub lat: f64,

    /// Longitude
    pub lon: f64,

    /// Beacon altitude (frame defined in alt_type)
    pub alt: f32,

    /// Altitude frame for alt field
    pub alt_type: u8,

    /// Groundbeacon horizontal accuracy
    pub hacc: f32,

    /// Groundbeacon vertical accuracy
    pub vacc: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sequence_nr: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u8,

    /// Carrier frequency
    pub carrier_freq: u16,

    /// Range accuracy estimate
    pub range_accuracy: f32,

}

impl RangingBeacon {
    /// Altitude above WGS84 ellipsoid
    pub const ALT_TYPE_WGS84: u8 = 0;

    /// Altitude above Mean Sea Level (AMSL)
    pub const ALT_TYPE_MSL: u8 = 1;

}


impl Default for RangingBeacon {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RangingBeacon::default())
  }
}

impl rosidl_runtime_rs::Message for RangingBeacon {
  type RmwMsg = super::msg::rmw::RangingBeacon;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        beacon_id: msg.beacon_id,
        range: msg.range,
        lat: msg.lat,
        lon: msg.lon,
        alt: msg.alt,
        alt_type: msg.alt_type,
        hacc: msg.hacc,
        vacc: msg.vacc,
        sequence_nr: msg.sequence_nr,
        status: msg.status,
        carrier_freq: msg.carrier_freq,
        range_accuracy: msg.range_accuracy,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      beacon_id: msg.beacon_id,
      range: msg.range,
      lat: msg.lat,
      lon: msg.lon,
      alt: msg.alt,
      alt_type: msg.alt_type,
      hacc: msg.hacc,
      vacc: msg.vacc,
      sequence_nr: msg.sequence_nr,
      status: msg.status,
      carrier_freq: msg.carrier_freq,
      range_accuracy: msg.range_accuracy,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      beacon_id: msg.beacon_id,
      range: msg.range,
      lat: msg.lat,
      lon: msg.lon,
      alt: msg.alt,
      alt_type: msg.alt_type,
      hacc: msg.hacc,
      vacc: msg.vacc,
      sequence_nr: msg.sequence_nr,
      status: msg.status,
      carrier_freq: msg.carrier_freq,
      range_accuracy: msg.range_accuracy,
    }
  }
}


// Corresponds to px4_msgs__msg__RaptorInput
/// Raptor Input

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RaptorInput {
    /// Time since system start
    pub timestamp: u64,

    /// Sampling timestamp of the data this control response is based on
    pub timestamp_sample: u64,

    /// Signals if the policy is active (aka publishing actuator_motors)
    pub active: bool,

    /// [m] [@frame FLU] Position of the vehicle_local_position frame
    pub position: [f32; 3],

    /// Orientation in the vehicle_attitude frame but using the FLU convention as a unit quaternion (w, x, y, z)
    pub orientation: [f32; 4],

    /// [m/s] [@frame FLU] Linear velocity in the vehicle_local_position frame
    pub linear_velocity: [f32; 3],

    /// [rad/s]  [@frame FLU] Angular velocity in the body frame
    pub angular_velocity: [f32; 3],

    /// [@range -1, 1] Previous action. Motor commands normalized to [-1, 1]
    pub previous_action: [f32; 4],

}

impl RaptorInput {
    /// The exact inputs to the Raptor foundation policy.
    /// Having access to the exact inputs helps with debugging and post-hoc analysis.
    pub const MESSAGE_VERSION: u32 = 0;

    /// Policy output dimensionality (for quadrotors)
    pub const ACTION_DIM: u8 = 4;

}


impl Default for RaptorInput {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RaptorInput::default())
  }
}

impl rosidl_runtime_rs::Message for RaptorInput {
  type RmwMsg = super::msg::rmw::RaptorInput;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        active: msg.active,
        position: msg.position,
        orientation: msg.orientation,
        linear_velocity: msg.linear_velocity,
        angular_velocity: msg.angular_velocity,
        previous_action: msg.previous_action,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      active: msg.active,
        position: msg.position,
        orientation: msg.orientation,
        linear_velocity: msg.linear_velocity,
        angular_velocity: msg.angular_velocity,
        previous_action: msg.previous_action,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      active: msg.active,
      position: msg.position,
      orientation: msg.orientation,
      linear_velocity: msg.linear_velocity,
      angular_velocity: msg.angular_velocity,
      previous_action: msg.previous_action,
    }
  }
}


// Corresponds to px4_msgs__msg__RaptorStatus
/// Raptor Status

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RaptorStatus {
    /// Time since system start
    pub timestamp: u64,

    /// Sampling timestamp of the data this control response is based on
    pub timestamp_sample: u64,

    /// Flag signalling if the vehicle_angular_velocity was updated
    pub subscription_update_angular_velocity: bool,

    /// Flag signalling if the vehicle_local_position was updated
    pub subscription_update_local_position: bool,

    /// Flag signalling if the vehicle_attitude was updated
    pub subscription_update_attitude: bool,

    /// Flag signalling if the trajectory_setpoint was updated
    pub subscription_update_trajectory_setpoint: bool,

    /// Flag signalling if the vehicle_status was updated
    pub subscription_update_vehicle_status: bool,

    /// Exit reason identifier. Representing conditions that lead to the Raptor policy not being executed
    pub exit_reason: u8,

    /// Timestamp of the last received vehicle_angular_velocity message
    pub timestamp_last_vehicle_angular_velocity: u32,

    /// Timestamp of the last received vehicle_local_position message
    pub timestamp_last_vehicle_local_position: u32,

    /// Timestamp of the last received vehicle_attitude message
    pub timestamp_last_vehicle_attitude: u32,

    /// Timestamp of the last received trajectory_setpoint message
    pub timestamp_last_trajectory_setpoint: u32,

    /// True if vehicle_angular_velocity data is considered stale (exceeded timeout)
    pub vehicle_angular_velocity_stale: bool,

    /// True if vehicle_local_position data is considered stale (exceeded timeout)
    pub vehicle_local_position_stale: bool,

    /// True if vehicle_attitude data is considered stale (exceeded timeout)
    pub vehicle_attitude_stale: bool,

    /// True if trajectory_setpoint data is considered stale (exceeded timeout)
    pub trajectory_setpoint_stale: bool,

    /// True if the Raptor policy is currently active (publishing actuator_motors)
    pub active: bool,

    /// The policy is trained at a fixed frequency (e.g. 100 Hz) but we might want to use it for control at higher frequencies (e.g. 400 Hz), which leads to a number of intermediate steps before the actual policy state is advanced (in this case 4 = 400 Hz / 100 Hz). This field provides the current substep (e.g. 0-3).
    pub substep: u8,

    /// Time interval between control updates
    pub control_interval: f32,

    /// The average trajectory setpoint arrival time interval (since Raptor mode activation within NUM_TRAJECTORY_SETPOINT_DTS received trajectory_setpoint messages)
    pub trajectory_setpoint_dt_mean: f32,

    /// The max trajectory setpoint arrival time interval (since Raptor mode activation and within NUM_TRAJECTORY_SETPOINT_DTS received trajectory_setpoint messages)
    pub trajectory_setpoint_dt_max: f32,

    /// The max trajectory setpoint arrival time interval (since Raptor mode activation)
    pub trajectory_setpoint_dt_max_since_activation: f32,

    /// [m] [@frame FLU] Internal reference position
    pub internal_reference_position: [f32; 3],

    /// [m/s] [@frame FLU] Internal reference linear velocity
    pub internal_reference_linear_velocity: [f32; 3],

}

impl RaptorStatus {
    /// Diagnostic messages for the Raptor foundation policy.
    /// This diagnostic data is useful for debugging (e.g. identifying missing input information).
    pub const MESSAGE_VERSION: u32 = 0;

    /// No exit reason => Raptor control step was executed (actuator_motors should have been published)
    pub const EXIT_REASON_NONE: u8 = 0;

    /// We synchronize the control onto the input observation with the highest update frequency, which is vehicle_angular_velocity. If there was no update, we do not need to execute the policy again
    pub const EXIT_REASON_NO_ANGULAR_VELOCITY_UPDATE: u8 = 1;

    /// We can not execute the policy if not all observations are available
    pub const EXIT_REASON_NOT_ALL_OBSERVATIONS_SET: u8 = 2;

    /// If OBSERVATION_TIMEOUT_ANGULAR_VELOCITY is exceeded, we treat the vehicle_angular_velocity as stale and can not run the policy
    pub const EXIT_REASON_ANGULAR_VELOCITY_STALE: u8 = 3;

    /// If OBSERVATION_TIMEOUT_LOCAL_POSITION is exceeded, we treat the vehicle_local_position as stale and can not run the policy
    pub const EXIT_REASON_LOCAL_POSITION_STALE: u8 = 4;

    /// If OBSERVATION_TIMEOUT_ATTITUDE is exceeded, we treat the vehicle_attitude as stale and can not run the policy
    pub const EXIT_REASON_ATTITUDE_STALE: u8 = 5;

    /// The executor that runs the policy can run in oversampling mode, where it decides if the policy should be ran based on the timestamp and not based on fixed synchronization onto the vehicle_angular_velocity. In this case the executor can decide to skip running the policy if the interval is too small, in which case this flag is set.
    pub const EXIT_REASON_EXECUTOR_STATUS_SOURCE_NOT_CONTROL: u8 = 6;

}


impl Default for RaptorStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RaptorStatus::default())
  }
}

impl rosidl_runtime_rs::Message for RaptorStatus {
  type RmwMsg = super::msg::rmw::RaptorStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        subscription_update_angular_velocity: msg.subscription_update_angular_velocity,
        subscription_update_local_position: msg.subscription_update_local_position,
        subscription_update_attitude: msg.subscription_update_attitude,
        subscription_update_trajectory_setpoint: msg.subscription_update_trajectory_setpoint,
        subscription_update_vehicle_status: msg.subscription_update_vehicle_status,
        exit_reason: msg.exit_reason,
        timestamp_last_vehicle_angular_velocity: msg.timestamp_last_vehicle_angular_velocity,
        timestamp_last_vehicle_local_position: msg.timestamp_last_vehicle_local_position,
        timestamp_last_vehicle_attitude: msg.timestamp_last_vehicle_attitude,
        timestamp_last_trajectory_setpoint: msg.timestamp_last_trajectory_setpoint,
        vehicle_angular_velocity_stale: msg.vehicle_angular_velocity_stale,
        vehicle_local_position_stale: msg.vehicle_local_position_stale,
        vehicle_attitude_stale: msg.vehicle_attitude_stale,
        trajectory_setpoint_stale: msg.trajectory_setpoint_stale,
        active: msg.active,
        substep: msg.substep,
        control_interval: msg.control_interval,
        trajectory_setpoint_dt_mean: msg.trajectory_setpoint_dt_mean,
        trajectory_setpoint_dt_max: msg.trajectory_setpoint_dt_max,
        trajectory_setpoint_dt_max_since_activation: msg.trajectory_setpoint_dt_max_since_activation,
        internal_reference_position: msg.internal_reference_position,
        internal_reference_linear_velocity: msg.internal_reference_linear_velocity,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      subscription_update_angular_velocity: msg.subscription_update_angular_velocity,
      subscription_update_local_position: msg.subscription_update_local_position,
      subscription_update_attitude: msg.subscription_update_attitude,
      subscription_update_trajectory_setpoint: msg.subscription_update_trajectory_setpoint,
      subscription_update_vehicle_status: msg.subscription_update_vehicle_status,
      exit_reason: msg.exit_reason,
      timestamp_last_vehicle_angular_velocity: msg.timestamp_last_vehicle_angular_velocity,
      timestamp_last_vehicle_local_position: msg.timestamp_last_vehicle_local_position,
      timestamp_last_vehicle_attitude: msg.timestamp_last_vehicle_attitude,
      timestamp_last_trajectory_setpoint: msg.timestamp_last_trajectory_setpoint,
      vehicle_angular_velocity_stale: msg.vehicle_angular_velocity_stale,
      vehicle_local_position_stale: msg.vehicle_local_position_stale,
      vehicle_attitude_stale: msg.vehicle_attitude_stale,
      trajectory_setpoint_stale: msg.trajectory_setpoint_stale,
      active: msg.active,
      substep: msg.substep,
      control_interval: msg.control_interval,
      trajectory_setpoint_dt_mean: msg.trajectory_setpoint_dt_mean,
      trajectory_setpoint_dt_max: msg.trajectory_setpoint_dt_max,
      trajectory_setpoint_dt_max_since_activation: msg.trajectory_setpoint_dt_max_since_activation,
        internal_reference_position: msg.internal_reference_position,
        internal_reference_linear_velocity: msg.internal_reference_linear_velocity,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      subscription_update_angular_velocity: msg.subscription_update_angular_velocity,
      subscription_update_local_position: msg.subscription_update_local_position,
      subscription_update_attitude: msg.subscription_update_attitude,
      subscription_update_trajectory_setpoint: msg.subscription_update_trajectory_setpoint,
      subscription_update_vehicle_status: msg.subscription_update_vehicle_status,
      exit_reason: msg.exit_reason,
      timestamp_last_vehicle_angular_velocity: msg.timestamp_last_vehicle_angular_velocity,
      timestamp_last_vehicle_local_position: msg.timestamp_last_vehicle_local_position,
      timestamp_last_vehicle_attitude: msg.timestamp_last_vehicle_attitude,
      timestamp_last_trajectory_setpoint: msg.timestamp_last_trajectory_setpoint,
      vehicle_angular_velocity_stale: msg.vehicle_angular_velocity_stale,
      vehicle_local_position_stale: msg.vehicle_local_position_stale,
      vehicle_attitude_stale: msg.vehicle_attitude_stale,
      trajectory_setpoint_stale: msg.trajectory_setpoint_stale,
      active: msg.active,
      substep: msg.substep,
      control_interval: msg.control_interval,
      trajectory_setpoint_dt_mean: msg.trajectory_setpoint_dt_mean,
      trajectory_setpoint_dt_max: msg.trajectory_setpoint_dt_max,
      trajectory_setpoint_dt_max_since_activation: msg.trajectory_setpoint_dt_max_since_activation,
      internal_reference_position: msg.internal_reference_position,
      internal_reference_linear_velocity: msg.internal_reference_linear_velocity,
    }
  }
}


// Corresponds to px4_msgs__msg__RateCtrlStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RateCtrlStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// rate controller integrator status
    pub rollspeed_integ: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitchspeed_integ: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yawspeed_integ: f32,

}



impl Default for RateCtrlStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RateCtrlStatus::default())
  }
}

impl rosidl_runtime_rs::Message for RateCtrlStatus {
  type RmwMsg = super::msg::rmw::RateCtrlStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        rollspeed_integ: msg.rollspeed_integ,
        pitchspeed_integ: msg.pitchspeed_integ,
        yawspeed_integ: msg.yawspeed_integ,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      rollspeed_integ: msg.rollspeed_integ,
      pitchspeed_integ: msg.pitchspeed_integ,
      yawspeed_integ: msg.yawspeed_integ,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      rollspeed_integ: msg.rollspeed_integ,
      pitchspeed_integ: msg.pitchspeed_integ,
      yawspeed_integ: msg.yawspeed_integ,
    }
  }
}


// Corresponds to px4_msgs__msg__RcChannels

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RcChannels {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Timestamp of last valid RC signal
    pub timestamp_last_valid: u64,

    /// Scaled to -1..1 (throttle: 0..1)
    pub channels: [f32; 18],

    /// Number of valid channels
    pub channel_count: u8,

    /// Functions mapping
    pub function: [i8; 30],

    /// Receive signal strength index
    pub rssi: u8,

    /// Control signal lost, should be checked together with topic timeout
    pub signal_lost: bool,

    /// Number of dropped frames
    pub frame_drop_count: u32,

}

impl RcChannels {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_THROTTLE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_ROLL: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_PITCH: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_YAW: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_RETURN: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_LOITER: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_OFFBOARD: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_FLAPS: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_AUX_1: u8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_AUX_2: u8 = 9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_AUX_3: u8 = 10;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_AUX_4: u8 = 11;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_AUX_5: u8 = 12;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_AUX_6: u8 = 13;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_PARAM_1: u8 = 14;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_PARAM_2: u8 = 15;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_PARAM_3_5: u8 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_KILLSWITCH: u8 = 17;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_TRANSITION: u8 = 18;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_GEAR: u8 = 19;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_ARMSWITCH: u8 = 20;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_FLTBTN_SLOT_1: u8 = 21;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_FLTBTN_SLOT_2: u8 = 22;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_FLTBTN_SLOT_3: u8 = 23;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_FLTBTN_SLOT_4: u8 = 24;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_FLTBTN_SLOT_5: u8 = 25;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_FLTBTN_SLOT_6: u8 = 26;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_ENGAGE_MAIN_MOTOR: u8 = 27;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_PAYLOAD_POWER: u8 = 28;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_TERMINATION: u8 = 29;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUNCTION_FLTBTN_SLOT_COUNT: u8 = 6;

}


impl Default for RcChannels {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RcChannels::default())
  }
}

impl rosidl_runtime_rs::Message for RcChannels {
  type RmwMsg = super::msg::rmw::RcChannels;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_last_valid: msg.timestamp_last_valid,
        channels: msg.channels,
        channel_count: msg.channel_count,
        function: msg.function,
        rssi: msg.rssi,
        signal_lost: msg.signal_lost,
        frame_drop_count: msg.frame_drop_count,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_last_valid: msg.timestamp_last_valid,
        channels: msg.channels,
      channel_count: msg.channel_count,
        function: msg.function,
      rssi: msg.rssi,
      signal_lost: msg.signal_lost,
      frame_drop_count: msg.frame_drop_count,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_last_valid: msg.timestamp_last_valid,
      channels: msg.channels,
      channel_count: msg.channel_count,
      function: msg.function,
      rssi: msg.rssi,
      signal_lost: msg.signal_lost,
      frame_drop_count: msg.frame_drop_count,
    }
  }
}


// Corresponds to px4_msgs__msg__RcParameterMap

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RcParameterMap {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// true for RC-Param channels which are mapped to a param
    pub valid: [bool; 3],

    /// corresponding param index, this field is ignored if set to -1, in this case param_id will be used
    pub param_index: [i32; 3],

    /// MAP_NCHAN * (ID_LEN + 1) chars, corresponding param id, null terminated
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub param_id: [u8; 51],

    /// scale to map the RC input [-1, 1] to a parameter value
    pub scale: [f32; 3],

    /// initial value around which the parameter value is changed
    pub value0: [f32; 3],

    /// minimal parameter value
    pub value_min: [f32; 3],

    /// minimal parameter value
    pub value_max: [f32; 3],

}

impl RcParameterMap {
    /// This limit is also hardcoded in the enum RC_CHANNELS_FUNCTION in rc_channels.h
    pub const RC_PARAM_MAP_NCHAN: u8 = 3;

    /// corresponds to MAVLINK_MSG_PARAM_VALUE_FIELD_PARAM_ID_LEN
    pub const PARAM_ID_LEN: u8 = 16;

}


impl Default for RcParameterMap {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RcParameterMap::default())
  }
}

impl rosidl_runtime_rs::Message for RcParameterMap {
  type RmwMsg = super::msg::rmw::RcParameterMap;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        valid: msg.valid,
        param_index: msg.param_index,
        param_id: msg.param_id,
        scale: msg.scale,
        value0: msg.value0,
        value_min: msg.value_min,
        value_max: msg.value_max,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        valid: msg.valid,
        param_index: msg.param_index,
        param_id: msg.param_id,
        scale: msg.scale,
        value0: msg.value0,
        value_min: msg.value_min,
        value_max: msg.value_max,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      valid: msg.valid,
      param_index: msg.param_index,
      param_id: msg.param_id,
      scale: msg.scale,
      value0: msg.value0,
      value_min: msg.value_min,
      value_max: msg.value_max,
    }
  }
}


// Corresponds to px4_msgs__msg__RegisterExtComponentReply

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RegisterExtComponentReply {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// ID from the request
    pub request_id: u64,

    /// name from the request
    pub name: [u8; 25],


    // This member is not documented.
    #[allow(missing_docs)]
    pub px4_ros2_api_version: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

    /// arming check registration ID (-1 if invalid)
    pub arming_check_id: i8,

    /// assigned mode ID (-1 if invalid)
    pub mode_id: i8,

    /// assigned mode executor ID (-1 if invalid)
    pub mode_executor_id: i8,

    /// mode cannot be selected by the user
    pub not_user_selectable: bool,

}

impl RegisterExtComponentReply {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 2;

}


impl Default for RegisterExtComponentReply {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RegisterExtComponentReply::default())
  }
}

impl rosidl_runtime_rs::Message for RegisterExtComponentReply {
  type RmwMsg = super::msg::rmw::RegisterExtComponentReply;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        request_id: msg.request_id,
        name: msg.name,
        px4_ros2_api_version: msg.px4_ros2_api_version,
        success: msg.success,
        arming_check_id: msg.arming_check_id,
        mode_id: msg.mode_id,
        mode_executor_id: msg.mode_executor_id,
        not_user_selectable: msg.not_user_selectable,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      request_id: msg.request_id,
        name: msg.name,
      px4_ros2_api_version: msg.px4_ros2_api_version,
      success: msg.success,
      arming_check_id: msg.arming_check_id,
      mode_id: msg.mode_id,
      mode_executor_id: msg.mode_executor_id,
      not_user_selectable: msg.not_user_selectable,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      request_id: msg.request_id,
      name: msg.name,
      px4_ros2_api_version: msg.px4_ros2_api_version,
      success: msg.success,
      arming_check_id: msg.arming_check_id,
      mode_id: msg.mode_id,
      mode_executor_id: msg.mode_executor_id,
      not_user_selectable: msg.not_user_selectable,
    }
  }
}


// Corresponds to px4_msgs__msg__RegisterExtComponentRequest
/// Request to register an external component

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RegisterExtComponentRequest {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// ID, set this to a random value
    pub request_id: u64,

    /// either the requested mode name, or component name
    pub name: [u8; 25],

    /// Set to LATEST_PX4_ROS2_API_VERSION
    pub px4_ros2_api_version: u16,

    /// Components to be registered
    pub register_arming_check: bool,

    /// registering a mode also requires arming_check to be set
    pub register_mode: bool,

    /// registering an executor also requires a mode to be registered (which is the owned mode by the executor)
    pub register_mode_executor: bool,

    /// set to true if an internal mode should be replaced
    pub enable_replace_internal_mode: bool,

    /// vehicle_status::NAVIGATION_STATE_*
    pub replace_internal_mode: u8,

    /// switch to the registered mode (can only be set in combination with an executor)
    pub activate_mode_immediately: bool,

    /// mode cannot be selected by the user
    pub not_user_selectable: bool,

    /// set to true if the registered mode wants to receive offboard trajectory setpoints via MAVLink
    pub request_offboard_setpoints: bool,

}

impl RegisterExtComponentRequest {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 2;

    /// API version compatibility. Increase this on a breaking semantic change. Changes to any message field are detected separately and do not require an API version change.
    pub const LATEST_PX4_ROS2_API_VERSION: u16 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 2;

}


impl Default for RegisterExtComponentRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RegisterExtComponentRequest::default())
  }
}

impl rosidl_runtime_rs::Message for RegisterExtComponentRequest {
  type RmwMsg = super::msg::rmw::RegisterExtComponentRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        request_id: msg.request_id,
        name: msg.name,
        px4_ros2_api_version: msg.px4_ros2_api_version,
        register_arming_check: msg.register_arming_check,
        register_mode: msg.register_mode,
        register_mode_executor: msg.register_mode_executor,
        enable_replace_internal_mode: msg.enable_replace_internal_mode,
        replace_internal_mode: msg.replace_internal_mode,
        activate_mode_immediately: msg.activate_mode_immediately,
        not_user_selectable: msg.not_user_selectable,
        request_offboard_setpoints: msg.request_offboard_setpoints,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      request_id: msg.request_id,
        name: msg.name,
      px4_ros2_api_version: msg.px4_ros2_api_version,
      register_arming_check: msg.register_arming_check,
      register_mode: msg.register_mode,
      register_mode_executor: msg.register_mode_executor,
      enable_replace_internal_mode: msg.enable_replace_internal_mode,
      replace_internal_mode: msg.replace_internal_mode,
      activate_mode_immediately: msg.activate_mode_immediately,
      not_user_selectable: msg.not_user_selectable,
      request_offboard_setpoints: msg.request_offboard_setpoints,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      request_id: msg.request_id,
      name: msg.name,
      px4_ros2_api_version: msg.px4_ros2_api_version,
      register_arming_check: msg.register_arming_check,
      register_mode: msg.register_mode,
      register_mode_executor: msg.register_mode_executor,
      enable_replace_internal_mode: msg.enable_replace_internal_mode,
      replace_internal_mode: msg.replace_internal_mode,
      activate_mode_immediately: msg.activate_mode_immediately,
      not_user_selectable: msg.not_user_selectable,
      request_offboard_setpoints: msg.request_offboard_setpoints,
    }
  }
}


// Corresponds to px4_msgs__msg__RoverAttitudeSetpoint
/// Rover Attitude Setpoint

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RoverAttitudeSetpoint {
    /// Time since system start
    pub timestamp: u64,

    /// [rad] [@range -inf, inf] [@frame NED] Yaw setpoint
    pub yaw_setpoint: f32,

}



impl Default for RoverAttitudeSetpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RoverAttitudeSetpoint::default())
  }
}

impl rosidl_runtime_rs::Message for RoverAttitudeSetpoint {
  type RmwMsg = super::msg::rmw::RoverAttitudeSetpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        yaw_setpoint: msg.yaw_setpoint,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      yaw_setpoint: msg.yaw_setpoint,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      yaw_setpoint: msg.yaw_setpoint,
    }
  }
}


// Corresponds to px4_msgs__msg__RoverAttitudeStatus
/// Rover Attitude Status

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RoverAttitudeStatus {
    /// Time since system start
    pub timestamp: u64,

    /// [rad] [@range -pi, pi] [@frame NED]Measured yaw
    pub measured_yaw: f32,

    /// [rad] [@range -pi, pi] [@frame NED] Yaw setpoint that is being tracked (Applied slew rates)
    pub adjusted_yaw_setpoint: f32,

}



impl Default for RoverAttitudeStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RoverAttitudeStatus::default())
  }
}

impl rosidl_runtime_rs::Message for RoverAttitudeStatus {
  type RmwMsg = super::msg::rmw::RoverAttitudeStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        measured_yaw: msg.measured_yaw,
        adjusted_yaw_setpoint: msg.adjusted_yaw_setpoint,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      measured_yaw: msg.measured_yaw,
      adjusted_yaw_setpoint: msg.adjusted_yaw_setpoint,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      measured_yaw: msg.measured_yaw,
      adjusted_yaw_setpoint: msg.adjusted_yaw_setpoint,
    }
  }
}


// Corresponds to px4_msgs__msg__RoverPositionSetpoint
/// Rover Position Setpoint

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RoverPositionSetpoint {
    /// Time since system start
    pub timestamp: u64,

    /// [m] [@range -inf, inf] [@frame NED] Target position
    pub position_ned: [f32; 2],

    /// [m] [@range -inf, inf] [@frame NED] [@invalid NaN Defaults to vehicle position] Start position which specifies a line for the rover to track
    pub start_ned: [f32; 2],

    /// [m/s] [@range 0, inf] [@invalid NaN Defaults to maximum speed] Cruising speed
    pub cruising_speed: f32,

    /// [m/s] [@range 0, inf] [@invalid NaN Defaults to 0] Speed the rover should arrive at the target with
    pub arrival_speed: f32,

    /// [rad] [@range -pi,pi] [@frame NED] [@invalid NaN Defaults to vehicle yaw] Mecanum only: Specify vehicle yaw during travel
    pub yaw: f32,

}



impl Default for RoverPositionSetpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RoverPositionSetpoint::default())
  }
}

impl rosidl_runtime_rs::Message for RoverPositionSetpoint {
  type RmwMsg = super::msg::rmw::RoverPositionSetpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        position_ned: msg.position_ned,
        start_ned: msg.start_ned,
        cruising_speed: msg.cruising_speed,
        arrival_speed: msg.arrival_speed,
        yaw: msg.yaw,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        position_ned: msg.position_ned,
        start_ned: msg.start_ned,
      cruising_speed: msg.cruising_speed,
      arrival_speed: msg.arrival_speed,
      yaw: msg.yaw,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      position_ned: msg.position_ned,
      start_ned: msg.start_ned,
      cruising_speed: msg.cruising_speed,
      arrival_speed: msg.arrival_speed,
      yaw: msg.yaw,
    }
  }
}


// Corresponds to px4_msgs__msg__RoverRateSetpoint
/// Rover Rate setpoint

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RoverRateSetpoint {
    /// Time since system start
    pub timestamp: u64,

    /// [rad/s] [@range -inf, inf] [@frame NED] Yaw rate setpoint
    pub yaw_rate_setpoint: f32,

}



impl Default for RoverRateSetpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RoverRateSetpoint::default())
  }
}

impl rosidl_runtime_rs::Message for RoverRateSetpoint {
  type RmwMsg = super::msg::rmw::RoverRateSetpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        yaw_rate_setpoint: msg.yaw_rate_setpoint,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      yaw_rate_setpoint: msg.yaw_rate_setpoint,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      yaw_rate_setpoint: msg.yaw_rate_setpoint,
    }
  }
}


// Corresponds to px4_msgs__msg__RoverRateStatus
/// Rover Rate Status

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RoverRateStatus {
    /// Time since system start
    pub timestamp: u64,

    /// [rad/s] [@range -inf, inf] [@frame NED] Measured yaw rate
    pub measured_yaw_rate: f32,

    /// [rad/s] [@range -inf, inf] [@frame NED] Yaw rate setpoint that is being tracked (Applied slew rates)
    pub adjusted_yaw_rate_setpoint: f32,

    /// [@range -1, 1] Integral of the PID for the closed loop yaw rate controller
    pub pid_yaw_rate_integral: f32,

}



impl Default for RoverRateStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RoverRateStatus::default())
  }
}

impl rosidl_runtime_rs::Message for RoverRateStatus {
  type RmwMsg = super::msg::rmw::RoverRateStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        measured_yaw_rate: msg.measured_yaw_rate,
        adjusted_yaw_rate_setpoint: msg.adjusted_yaw_rate_setpoint,
        pid_yaw_rate_integral: msg.pid_yaw_rate_integral,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      measured_yaw_rate: msg.measured_yaw_rate,
      adjusted_yaw_rate_setpoint: msg.adjusted_yaw_rate_setpoint,
      pid_yaw_rate_integral: msg.pid_yaw_rate_integral,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      measured_yaw_rate: msg.measured_yaw_rate,
      adjusted_yaw_rate_setpoint: msg.adjusted_yaw_rate_setpoint,
      pid_yaw_rate_integral: msg.pid_yaw_rate_integral,
    }
  }
}


// Corresponds to px4_msgs__msg__RoverSpeedSetpoint
/// Rover Speed Setpoint

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RoverSpeedSetpoint {
    /// Time since system start
    pub timestamp: u64,

    /// [m/s] [@range -inf (Backwards), inf (Forwards)] [@frame Body] Speed setpoint in body x direction
    pub speed_body_x: f32,

    /// [m/s] [@range -inf (Left), inf (Right)] [@frame Body] [@invalid NaN If not mecanum] Mecanum only: Speed setpoint in body y direction
    pub speed_body_y: f32,

}



impl Default for RoverSpeedSetpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RoverSpeedSetpoint::default())
  }
}

impl rosidl_runtime_rs::Message for RoverSpeedSetpoint {
  type RmwMsg = super::msg::rmw::RoverSpeedSetpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        speed_body_x: msg.speed_body_x,
        speed_body_y: msg.speed_body_y,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      speed_body_x: msg.speed_body_x,
      speed_body_y: msg.speed_body_y,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      speed_body_x: msg.speed_body_x,
      speed_body_y: msg.speed_body_y,
    }
  }
}


// Corresponds to px4_msgs__msg__RoverSpeedStatus
/// Rover Velocity Status

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RoverSpeedStatus {
    /// Time since system start
    pub timestamp: u64,

    /// [m/s] [@range -inf (Backwards), inf (Forwards)] [@frame Body] Measured speed in body x direction
    pub measured_speed_body_x: f32,

    /// [m/s] [@range -inf (Backwards), inf (Forwards)] [@frame Body] Speed setpoint in body x direction that is being tracked (Applied slew rates)
    pub adjusted_speed_body_x_setpoint: f32,

    /// [@range -1, 1] Integral of the PID for the closed loop controller of the speed in body x direction
    pub pid_throttle_body_x_integral: f32,

    /// [m/s] [@range -inf (Left), inf (Right)] [@frame Body] [@invalid NaN If not mecanum] Mecanum only: Measured speed in body y direction
    pub measured_speed_body_y: f32,

    /// [m/s] [@range -inf (Left), inf (Right)] [@frame Body] [@invalid NaN If not mecanum] Mecanum only: Speed setpoint in body y direction that is being tracked (Applied slew rates)
    pub adjusted_speed_body_y_setpoint: f32,

    /// [-] [@range -1, 1] [@invalid NaN If not mecanum] Mecanum only: Integral of the PID for the closed loop controller of the speed in body y direction
    pub pid_throttle_body_y_integral: f32,

}



impl Default for RoverSpeedStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RoverSpeedStatus::default())
  }
}

impl rosidl_runtime_rs::Message for RoverSpeedStatus {
  type RmwMsg = super::msg::rmw::RoverSpeedStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        measured_speed_body_x: msg.measured_speed_body_x,
        adjusted_speed_body_x_setpoint: msg.adjusted_speed_body_x_setpoint,
        pid_throttle_body_x_integral: msg.pid_throttle_body_x_integral,
        measured_speed_body_y: msg.measured_speed_body_y,
        adjusted_speed_body_y_setpoint: msg.adjusted_speed_body_y_setpoint,
        pid_throttle_body_y_integral: msg.pid_throttle_body_y_integral,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      measured_speed_body_x: msg.measured_speed_body_x,
      adjusted_speed_body_x_setpoint: msg.adjusted_speed_body_x_setpoint,
      pid_throttle_body_x_integral: msg.pid_throttle_body_x_integral,
      measured_speed_body_y: msg.measured_speed_body_y,
      adjusted_speed_body_y_setpoint: msg.adjusted_speed_body_y_setpoint,
      pid_throttle_body_y_integral: msg.pid_throttle_body_y_integral,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      measured_speed_body_x: msg.measured_speed_body_x,
      adjusted_speed_body_x_setpoint: msg.adjusted_speed_body_x_setpoint,
      pid_throttle_body_x_integral: msg.pid_throttle_body_x_integral,
      measured_speed_body_y: msg.measured_speed_body_y,
      adjusted_speed_body_y_setpoint: msg.adjusted_speed_body_y_setpoint,
      pid_throttle_body_y_integral: msg.pid_throttle_body_y_integral,
    }
  }
}


// Corresponds to px4_msgs__msg__RoverSteeringSetpoint
/// Rover Steering setpoint

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RoverSteeringSetpoint {
    /// Time since system start
    pub timestamp: u64,

    /// [-] [@range -1 (Left), 1 (Right)] [@frame Body] Ackermann: Normalized steering angle, Differential/Mecanum: Normalized speed difference between the left and right wheels
    pub normalized_steering_setpoint: f32,

}



impl Default for RoverSteeringSetpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RoverSteeringSetpoint::default())
  }
}

impl rosidl_runtime_rs::Message for RoverSteeringSetpoint {
  type RmwMsg = super::msg::rmw::RoverSteeringSetpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        normalized_steering_setpoint: msg.normalized_steering_setpoint,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      normalized_steering_setpoint: msg.normalized_steering_setpoint,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      normalized_steering_setpoint: msg.normalized_steering_setpoint,
    }
  }
}


// Corresponds to px4_msgs__msg__RoverThrottleSetpoint
/// Rover Throttle setpoint

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RoverThrottleSetpoint {
    /// Time since system start
    pub timestamp: u64,

    /// [-] [@range -1 (Backwards), 1 (Forwards)] [@frame Body] Throttle setpoint along body X axis
    pub throttle_body_x: f32,

    /// [-] [@range -1 (Left), 1 (Right)] [@frame Body] [@invalid NaN If not mecanum] Mecanum only: Throttle setpoint along body Y axis
    pub throttle_body_y: f32,

}



impl Default for RoverThrottleSetpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RoverThrottleSetpoint::default())
  }
}

impl rosidl_runtime_rs::Message for RoverThrottleSetpoint {
  type RmwMsg = super::msg::rmw::RoverThrottleSetpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        throttle_body_x: msg.throttle_body_x,
        throttle_body_y: msg.throttle_body_y,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      throttle_body_x: msg.throttle_body_x,
      throttle_body_y: msg.throttle_body_y,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      throttle_body_x: msg.throttle_body_x,
      throttle_body_y: msg.throttle_body_y,
    }
  }
}


// Corresponds to px4_msgs__msg__Rpm

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Rpm {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// rpm values of 0.0 mean within a timeout there is no movement measured
    /// filtered revolutions per minute
    pub rpm_estimate: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rpm_raw: f32,

}



impl Default for Rpm {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Rpm::default())
  }
}

impl rosidl_runtime_rs::Message for Rpm {
  type RmwMsg = super::msg::rmw::Rpm;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        rpm_estimate: msg.rpm_estimate,
        rpm_raw: msg.rpm_raw,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      rpm_estimate: msg.rpm_estimate,
      rpm_raw: msg.rpm_raw,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      rpm_estimate: msg.rpm_estimate,
      rpm_raw: msg.rpm_raw,
    }
  }
}


// Corresponds to px4_msgs__msg__RtlStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RtlStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// unique ID of active set of safe_point_items
    pub safe_points_id: u32,

    /// flag if the RTL point needs reevaluation (e.g. new safe points available, but need loading).
    pub is_evaluation_pending: bool,

    /// flag if approaches are defined for current RTL_TYPE parameter setting
    pub has_vtol_approach: bool,

    /// Type of RTL chosen
    pub rtl_type: u8,

    /// index of the chosen safe point, UINT8_MAX if no rally point was chosen
    pub safe_point_index: u8,

}

impl RtlStatus {
    /// pending if evaluation can't pe performed currently e.g. when it is still loading the safe points
    pub const RTL_STATUS_TYPE_NONE: u8 = 0;

    /// chosen to directly go to a safe point or home position
    pub const RTL_STATUS_TYPE_DIRECT_SAFE_POINT: u8 = 1;

    /// going straight to the beginning of the mission landing
    pub const RTL_STATUS_TYPE_DIRECT_MISSION_LAND: u8 = 2;

    /// Following the mission from start index to mission landing. Start index is current WP if in Mission mode, and closest WP otherwise.
    pub const RTL_STATUS_TYPE_FOLLOW_MISSION: u8 = 3;

    /// Following the mission in reverse from start index to the beginning of the mission. Start index is previous WP if in Mission mode, and closest WP otherwise.
    pub const RTL_STATUS_TYPE_FOLLOW_MISSION_REVERSE: u8 = 4;

}


impl Default for RtlStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RtlStatus::default())
  }
}

impl rosidl_runtime_rs::Message for RtlStatus {
  type RmwMsg = super::msg::rmw::RtlStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        safe_points_id: msg.safe_points_id,
        is_evaluation_pending: msg.is_evaluation_pending,
        has_vtol_approach: msg.has_vtol_approach,
        rtl_type: msg.rtl_type,
        safe_point_index: msg.safe_point_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      safe_points_id: msg.safe_points_id,
      is_evaluation_pending: msg.is_evaluation_pending,
      has_vtol_approach: msg.has_vtol_approach,
      rtl_type: msg.rtl_type,
      safe_point_index: msg.safe_point_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      safe_points_id: msg.safe_points_id,
      is_evaluation_pending: msg.is_evaluation_pending,
      has_vtol_approach: msg.has_vtol_approach,
      rtl_type: msg.rtl_type,
      safe_point_index: msg.safe_point_index,
    }
  }
}


// Corresponds to px4_msgs__msg__RtlTimeEstimate

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RtlTimeEstimate {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Flag indicating whether the time estiamtes are valid
    pub valid: bool,

    /// Estimated time for RTL
    pub time_estimate: f32,

    /// Same as time_estimate, but with safety factor and safety margin included (factor*t + margin)
    pub safe_time_estimate: f32,

}



impl Default for RtlTimeEstimate {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RtlTimeEstimate::default())
  }
}

impl rosidl_runtime_rs::Message for RtlTimeEstimate {
  type RmwMsg = super::msg::rmw::RtlTimeEstimate;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        valid: msg.valid,
        time_estimate: msg.time_estimate,
        safe_time_estimate: msg.safe_time_estimate,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      valid: msg.valid,
      time_estimate: msg.time_estimate,
      safe_time_estimate: msg.safe_time_estimate,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      valid: msg.valid,
      time_estimate: msg.time_estimate,
      safe_time_estimate: msg.safe_time_estimate,
    }
  }
}


// Corresponds to px4_msgs__msg__SatelliteInfo

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SatelliteInfo {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Number of satellites visible to the receiver
    pub count: u8,

    /// Space vehicle ID, see scheme below
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub svid: [u8; 40],

    /// 0: Satellite not used, 1: used for navigation
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub used: [u8; 40],

    /// Elevation (0: right on top of receiver, 90: on the horizon) of satellite
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub elevation: [u8; 40],

    /// Direction of satellite, 0: 0 deg, 255: 360 deg.
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub azimuth: [u8; 40],

    /// dBHz, Signal to noise ratio of satellite C/N0, range 0..99, zero when not tracking this satellite.
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub snr: [u8; 40],

    /// Satellite PRN code assignment, (psuedorandom number SBAS, valid codes are 120-144)
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub prn: [u8; 40],

}

impl SatelliteInfo {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SAT_INFO_MAX_SATELLITES: u8 = 40;

}


impl Default for SatelliteInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SatelliteInfo::default())
  }
}

impl rosidl_runtime_rs::Message for SatelliteInfo {
  type RmwMsg = super::msg::rmw::SatelliteInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        count: msg.count,
        svid: msg.svid,
        used: msg.used,
        elevation: msg.elevation,
        azimuth: msg.azimuth,
        snr: msg.snr,
        prn: msg.prn,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      count: msg.count,
        svid: msg.svid,
        used: msg.used,
        elevation: msg.elevation,
        azimuth: msg.azimuth,
        snr: msg.snr,
        prn: msg.prn,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      count: msg.count,
      svid: msg.svid,
      used: msg.used,
      elevation: msg.elevation,
      azimuth: msg.azimuth,
      snr: msg.snr,
      prn: msg.prn,
    }
  }
}


// Corresponds to px4_msgs__msg__SensorAccel

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorAccel {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp_sample: u64,

    /// unique device ID for the sensor that does not change between power cycles
    pub device_id: u32,

    /// acceleration in the FRD board frame X-axis in m/s^2
    pub x: f32,

    /// acceleration in the FRD board frame Y-axis in m/s^2
    pub y: f32,

    /// acceleration in the FRD board frame Z-axis in m/s^2
    pub z: f32,

    /// temperature in degrees Celsius
    pub temperature: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_count: u32,

    /// clip count per axis in the sample period
    pub clip_counter: [u8; 3],

    /// number of raw samples that went into this message
    pub samples: u8,

}

impl SensorAccel {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 8;

}


impl Default for SensorAccel {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorAccel::default())
  }
}

impl rosidl_runtime_rs::Message for SensorAccel {
  type RmwMsg = super::msg::rmw::SensorAccel;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        device_id: msg.device_id,
        x: msg.x,
        y: msg.y,
        z: msg.z,
        temperature: msg.temperature,
        error_count: msg.error_count,
        clip_counter: msg.clip_counter,
        samples: msg.samples,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      temperature: msg.temperature,
      error_count: msg.error_count,
        clip_counter: msg.clip_counter,
      samples: msg.samples,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      temperature: msg.temperature,
      error_count: msg.error_count,
      clip_counter: msg.clip_counter,
      samples: msg.samples,
    }
  }
}


// Corresponds to px4_msgs__msg__SensorAccelFifo

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorAccelFifo {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp_sample: u64,

    /// unique device ID for the sensor that does not change between power cycles
    pub device_id: u32,

    /// delta time between samples (microseconds)
    pub dt: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub scale: f32,

    /// number of valid samples
    pub samples: u8,

    /// acceleration in the FRD board frame X-axis in m/s^2
    pub x: [i16; 32],

    /// acceleration in the FRD board frame Y-axis in m/s^2
    pub y: [i16; 32],

    /// acceleration in the FRD board frame Z-axis in m/s^2
    pub z: [i16; 32],

}



impl Default for SensorAccelFifo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorAccelFifo::default())
  }
}

impl rosidl_runtime_rs::Message for SensorAccelFifo {
  type RmwMsg = super::msg::rmw::SensorAccelFifo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        device_id: msg.device_id,
        dt: msg.dt,
        scale: msg.scale,
        samples: msg.samples,
        x: msg.x,
        y: msg.y,
        z: msg.z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      dt: msg.dt,
      scale: msg.scale,
      samples: msg.samples,
        x: msg.x,
        y: msg.y,
        z: msg.z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      dt: msg.dt,
      scale: msg.scale,
      samples: msg.samples,
      x: msg.x,
      y: msg.y,
      z: msg.z,
    }
  }
}


// Corresponds to px4_msgs__msg__SensorAirflow

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorAirflow {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// unique device ID for the sensor that does not change between power cycles
    pub device_id: u32,

    /// the speed being reported by the wind / airflow sensor
    pub speed: f32,

    /// the direction being reported by the wind / airflow sensor
    pub direction: f32,

    /// Status code from the sensor
    pub status: u8,

}



impl Default for SensorAirflow {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorAirflow::default())
  }
}

impl rosidl_runtime_rs::Message for SensorAirflow {
  type RmwMsg = super::msg::rmw::SensorAirflow;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        device_id: msg.device_id,
        speed: msg.speed,
        direction: msg.direction,
        status: msg.status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
      speed: msg.speed,
      direction: msg.direction,
      status: msg.status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
      speed: msg.speed,
      direction: msg.direction,
      status: msg.status,
    }
  }
}


// Corresponds to px4_msgs__msg__SensorBaro
/// Barometer sensor
///
/// This is populated by barometer drivers and used by the EKF2 estimator.
/// The information is published in the `SCALED_PRESSURE_n` MAVLink messages (along with information from a corresponding `DifferentialPressure` instance).

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorBaro {
    /// Time of publication (since system start)
    pub timestamp: u64,

    /// Time of raw data capture
    pub timestamp_sample: u64,

    /// Unique device ID for the sensor that does not change between power cycles
    pub device_id: u32,

    /// Static pressure measurement
    pub pressure: f32,

    /// Temperature.
    pub temperature: f32,

    /// Number of errors detected by driver.
    pub error_count: u32,

}

impl SensorBaro {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 4;

}


impl Default for SensorBaro {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorBaro::default())
  }
}

impl rosidl_runtime_rs::Message for SensorBaro {
  type RmwMsg = super::msg::rmw::SensorBaro;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        device_id: msg.device_id,
        pressure: msg.pressure,
        temperature: msg.temperature,
        error_count: msg.error_count,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      pressure: msg.pressure,
      temperature: msg.temperature,
      error_count: msg.error_count,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      pressure: msg.pressure,
      temperature: msg.temperature,
      error_count: msg.error_count,
    }
  }
}


// Corresponds to px4_msgs__msg__SensorCombined
/// Sensor readings in SI-unit form.
/// These fields are scaled and offset-compensated where possible and do not
/// change with board revisions and sensor updates.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorCombined {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// gyro timstamp is equal to the timestamp of the message
    /// average angular rate measured in the FRD body frame XYZ-axis in rad/s over the last gyro sampling period
    pub gyro_rad: [f32; 3],

    /// gyro measurement sampling period in microseconds
    pub gyro_integral_dt: u32,

    /// timestamp + accelerometer_timestamp_relative = Accelerometer timestamp
    pub accelerometer_timestamp_relative: i32,

    /// average value acceleration measured in the FRD body frame XYZ-axis in m/s^2 over the last accelerometer sampling period
    pub accelerometer_m_s2: [f32; 3],

    /// accelerometer measurement sampling period in microseconds
    pub accelerometer_integral_dt: u32,

    /// bitfield indicating if there was any accelerometer clipping (per axis) during the integration time frame
    pub accelerometer_clipping: u8,

    /// bitfield indicating if there was any gyro clipping (per axis) during the integration time frame
    pub gyro_clipping: u8,

    /// Calibration changed counter. Monotonically increases whenever accelermeter calibration changes.
    pub accel_calibration_count: u8,

    /// Calibration changed counter. Monotonically increases whenever rate gyro calibration changes.
    pub gyro_calibration_count: u8,

}

impl SensorCombined {
    /// (0x7fffffff) If one of the relative timestamps is set to this value, it means the associated sensor values are invalid
    pub const RELATIVE_TIMESTAMP_INVALID: i32 = 2147483647;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CLIPPING_X: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CLIPPING_Y: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CLIPPING_Z: u8 = 4;

}


impl Default for SensorCombined {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorCombined::default())
  }
}

impl rosidl_runtime_rs::Message for SensorCombined {
  type RmwMsg = super::msg::rmw::SensorCombined;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        gyro_rad: msg.gyro_rad,
        gyro_integral_dt: msg.gyro_integral_dt,
        accelerometer_timestamp_relative: msg.accelerometer_timestamp_relative,
        accelerometer_m_s2: msg.accelerometer_m_s2,
        accelerometer_integral_dt: msg.accelerometer_integral_dt,
        accelerometer_clipping: msg.accelerometer_clipping,
        gyro_clipping: msg.gyro_clipping,
        accel_calibration_count: msg.accel_calibration_count,
        gyro_calibration_count: msg.gyro_calibration_count,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        gyro_rad: msg.gyro_rad,
      gyro_integral_dt: msg.gyro_integral_dt,
      accelerometer_timestamp_relative: msg.accelerometer_timestamp_relative,
        accelerometer_m_s2: msg.accelerometer_m_s2,
      accelerometer_integral_dt: msg.accelerometer_integral_dt,
      accelerometer_clipping: msg.accelerometer_clipping,
      gyro_clipping: msg.gyro_clipping,
      accel_calibration_count: msg.accel_calibration_count,
      gyro_calibration_count: msg.gyro_calibration_count,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      gyro_rad: msg.gyro_rad,
      gyro_integral_dt: msg.gyro_integral_dt,
      accelerometer_timestamp_relative: msg.accelerometer_timestamp_relative,
      accelerometer_m_s2: msg.accelerometer_m_s2,
      accelerometer_integral_dt: msg.accelerometer_integral_dt,
      accelerometer_clipping: msg.accelerometer_clipping,
      gyro_clipping: msg.gyro_clipping,
      accel_calibration_count: msg.accel_calibration_count,
      gyro_calibration_count: msg.gyro_calibration_count,
    }
  }
}


// Corresponds to px4_msgs__msg__SensorCorrection
/// Sensor corrections in SI-unit form for the voted sensor

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorCorrection {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Corrections for acceleromter acceleration outputs where corrected_accel = raw_accel * accel_scale + accel_offset
    /// Note the corrections are in the sensor frame and must be applied before the sensor data is rotated into body frame
    pub accel_device_ids: [u32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub accel_temperature: [f32; 4],

    /// accelerometer 0 offsets in the FRD board frame XYZ-axis in m/s^s
    pub accel_offset_0: [f32; 3],

    /// accelerometer 1 offsets in the FRD board frame XYZ-axis in m/s^s
    pub accel_offset_1: [f32; 3],

    /// accelerometer 2 offsets in the FRD board frame XYZ-axis in m/s^s
    pub accel_offset_2: [f32; 3],

    /// accelerometer 3 offsets in the FRD board frame XYZ-axis in m/s^s
    pub accel_offset_3: [f32; 3],

    /// Corrections for gyro angular rate outputs where corrected_rate = raw_rate * gyro_scale + gyro_offset
    /// Note the corrections are in the sensor frame and must be applied before the sensor data is rotated into body frame
    pub gyro_device_ids: [u32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_temperature: [f32; 4],

    /// gyro 0 XYZ offsets in the sensor frame in rad/s
    pub gyro_offset_0: [f32; 3],

    /// gyro 1 XYZ offsets in the sensor frame in rad/s
    pub gyro_offset_1: [f32; 3],

    /// gyro 2 XYZ offsets in the sensor frame in rad/s
    pub gyro_offset_2: [f32; 3],

    /// gyro 3 XYZ offsets in the sensor frame in rad/s
    pub gyro_offset_3: [f32; 3],

    /// Corrections for magnetometer measurement outputs where corrected_mag = raw_mag * mag_scale + mag_offset
    /// Note the corrections are in the sensor frame and must be applied before the sensor data is rotated into body frame
    pub mag_device_ids: [u32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub mag_temperature: [f32; 4],

    /// magnetometer 0 offsets in the FRD board frame XYZ-axis in m/s^s
    pub mag_offset_0: [f32; 3],

    /// magnetometer 1 offsets in the FRD board frame XYZ-axis in m/s^s
    pub mag_offset_1: [f32; 3],

    /// magnetometer 2 offsets in the FRD board frame XYZ-axis in m/s^s
    pub mag_offset_2: [f32; 3],

    /// magnetometer 3 offsets in the FRD board frame XYZ-axis in m/s^s
    pub mag_offset_3: [f32; 3],

    /// Corrections for barometric pressure outputs where corrected_pressure = raw_pressure * pressure_scale + pressure_offset
    /// Note the corrections are in the sensor frame and must be applied before the sensor data is rotated into body frame
    pub baro_device_ids: [u32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub baro_temperature: [f32; 4],

    /// barometric pressure 0 offsets in the sensor frame in Pascals
    pub baro_offset_0: f32,

    /// barometric pressure 1 offsets in the sensor frame in Pascals
    pub baro_offset_1: f32,

    /// barometric pressure 2 offsets in the sensor frame in Pascals
    pub baro_offset_2: f32,

    /// barometric pressure 3 offsets in the sensor frame in Pascals
    pub baro_offset_3: f32,

}



impl Default for SensorCorrection {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorCorrection::default())
  }
}

impl rosidl_runtime_rs::Message for SensorCorrection {
  type RmwMsg = super::msg::rmw::SensorCorrection;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        accel_device_ids: msg.accel_device_ids,
        accel_temperature: msg.accel_temperature,
        accel_offset_0: msg.accel_offset_0,
        accel_offset_1: msg.accel_offset_1,
        accel_offset_2: msg.accel_offset_2,
        accel_offset_3: msg.accel_offset_3,
        gyro_device_ids: msg.gyro_device_ids,
        gyro_temperature: msg.gyro_temperature,
        gyro_offset_0: msg.gyro_offset_0,
        gyro_offset_1: msg.gyro_offset_1,
        gyro_offset_2: msg.gyro_offset_2,
        gyro_offset_3: msg.gyro_offset_3,
        mag_device_ids: msg.mag_device_ids,
        mag_temperature: msg.mag_temperature,
        mag_offset_0: msg.mag_offset_0,
        mag_offset_1: msg.mag_offset_1,
        mag_offset_2: msg.mag_offset_2,
        mag_offset_3: msg.mag_offset_3,
        baro_device_ids: msg.baro_device_ids,
        baro_temperature: msg.baro_temperature,
        baro_offset_0: msg.baro_offset_0,
        baro_offset_1: msg.baro_offset_1,
        baro_offset_2: msg.baro_offset_2,
        baro_offset_3: msg.baro_offset_3,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        accel_device_ids: msg.accel_device_ids,
        accel_temperature: msg.accel_temperature,
        accel_offset_0: msg.accel_offset_0,
        accel_offset_1: msg.accel_offset_1,
        accel_offset_2: msg.accel_offset_2,
        accel_offset_3: msg.accel_offset_3,
        gyro_device_ids: msg.gyro_device_ids,
        gyro_temperature: msg.gyro_temperature,
        gyro_offset_0: msg.gyro_offset_0,
        gyro_offset_1: msg.gyro_offset_1,
        gyro_offset_2: msg.gyro_offset_2,
        gyro_offset_3: msg.gyro_offset_3,
        mag_device_ids: msg.mag_device_ids,
        mag_temperature: msg.mag_temperature,
        mag_offset_0: msg.mag_offset_0,
        mag_offset_1: msg.mag_offset_1,
        mag_offset_2: msg.mag_offset_2,
        mag_offset_3: msg.mag_offset_3,
        baro_device_ids: msg.baro_device_ids,
        baro_temperature: msg.baro_temperature,
      baro_offset_0: msg.baro_offset_0,
      baro_offset_1: msg.baro_offset_1,
      baro_offset_2: msg.baro_offset_2,
      baro_offset_3: msg.baro_offset_3,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      accel_device_ids: msg.accel_device_ids,
      accel_temperature: msg.accel_temperature,
      accel_offset_0: msg.accel_offset_0,
      accel_offset_1: msg.accel_offset_1,
      accel_offset_2: msg.accel_offset_2,
      accel_offset_3: msg.accel_offset_3,
      gyro_device_ids: msg.gyro_device_ids,
      gyro_temperature: msg.gyro_temperature,
      gyro_offset_0: msg.gyro_offset_0,
      gyro_offset_1: msg.gyro_offset_1,
      gyro_offset_2: msg.gyro_offset_2,
      gyro_offset_3: msg.gyro_offset_3,
      mag_device_ids: msg.mag_device_ids,
      mag_temperature: msg.mag_temperature,
      mag_offset_0: msg.mag_offset_0,
      mag_offset_1: msg.mag_offset_1,
      mag_offset_2: msg.mag_offset_2,
      mag_offset_3: msg.mag_offset_3,
      baro_device_ids: msg.baro_device_ids,
      baro_temperature: msg.baro_temperature,
      baro_offset_0: msg.baro_offset_0,
      baro_offset_1: msg.baro_offset_1,
      baro_offset_2: msg.baro_offset_2,
      baro_offset_3: msg.baro_offset_3,
    }
  }
}


// Corresponds to px4_msgs__msg__SensorGnssRelative
/// GNSS relative positioning information in NED frame. The NED frame is defined as the local topological system at the reference station.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorGnssRelative {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// time since system start (microseconds)
    pub timestamp_sample: u64,

    /// unique device ID for the sensor that does not change between power cycles
    pub device_id: u32,

    /// Timestamp (microseconds, UTC), this is the timestamp which comes from the gps module. It might be unavailable right after cold start, indicated by a value of 0
    pub time_utc_usec: u64,

    /// Reference Station ID
    pub reference_station_id: u16,

    /// GPS NED relative position vector (m)
    pub position: [f32; 3],

    /// Accuracy of relative position (m)
    pub position_accuracy: [f32; 3],

    /// Heading of the relative position vector (radians)
    pub heading: f32,

    /// Accuracy of heading of the relative position vector (radians)
    pub heading_accuracy: f32,

    /// Length of the position vector (m)
    pub position_length: f32,

    /// Accuracy of the position length (m)
    pub accuracy_length: f32,

    /// GNSS valid fix (i.e within DOP & accuracy masks)
    pub gnss_fix_ok: bool,

    /// differential corrections were applied
    pub differential_solution: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub relative_position_valid: bool,

    /// carrier phase range solution with floating ambiguities
    pub carrier_solution_floating: bool,

    /// carrier phase range solution with fixed ambiguities
    pub carrier_solution_fixed: bool,

    /// if the receiver is operating in moving base mode
    pub moving_base_mode: bool,

    /// extrapolated reference position was used to compute moving base solution this epoch
    pub reference_position_miss: bool,

    /// extrapolated reference observations were used to compute moving base solution this epoch
    pub reference_observations_miss: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub heading_valid: bool,

    /// the components of the relative position vector (including the high-precision parts) are normalized
    pub relative_position_normalized: bool,

}



impl Default for SensorGnssRelative {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorGnssRelative::default())
  }
}

impl rosidl_runtime_rs::Message for SensorGnssRelative {
  type RmwMsg = super::msg::rmw::SensorGnssRelative;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        device_id: msg.device_id,
        time_utc_usec: msg.time_utc_usec,
        reference_station_id: msg.reference_station_id,
        position: msg.position,
        position_accuracy: msg.position_accuracy,
        heading: msg.heading,
        heading_accuracy: msg.heading_accuracy,
        position_length: msg.position_length,
        accuracy_length: msg.accuracy_length,
        gnss_fix_ok: msg.gnss_fix_ok,
        differential_solution: msg.differential_solution,
        relative_position_valid: msg.relative_position_valid,
        carrier_solution_floating: msg.carrier_solution_floating,
        carrier_solution_fixed: msg.carrier_solution_fixed,
        moving_base_mode: msg.moving_base_mode,
        reference_position_miss: msg.reference_position_miss,
        reference_observations_miss: msg.reference_observations_miss,
        heading_valid: msg.heading_valid,
        relative_position_normalized: msg.relative_position_normalized,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      time_utc_usec: msg.time_utc_usec,
      reference_station_id: msg.reference_station_id,
        position: msg.position,
        position_accuracy: msg.position_accuracy,
      heading: msg.heading,
      heading_accuracy: msg.heading_accuracy,
      position_length: msg.position_length,
      accuracy_length: msg.accuracy_length,
      gnss_fix_ok: msg.gnss_fix_ok,
      differential_solution: msg.differential_solution,
      relative_position_valid: msg.relative_position_valid,
      carrier_solution_floating: msg.carrier_solution_floating,
      carrier_solution_fixed: msg.carrier_solution_fixed,
      moving_base_mode: msg.moving_base_mode,
      reference_position_miss: msg.reference_position_miss,
      reference_observations_miss: msg.reference_observations_miss,
      heading_valid: msg.heading_valid,
      relative_position_normalized: msg.relative_position_normalized,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      time_utc_usec: msg.time_utc_usec,
      reference_station_id: msg.reference_station_id,
      position: msg.position,
      position_accuracy: msg.position_accuracy,
      heading: msg.heading,
      heading_accuracy: msg.heading_accuracy,
      position_length: msg.position_length,
      accuracy_length: msg.accuracy_length,
      gnss_fix_ok: msg.gnss_fix_ok,
      differential_solution: msg.differential_solution,
      relative_position_valid: msg.relative_position_valid,
      carrier_solution_floating: msg.carrier_solution_floating,
      carrier_solution_fixed: msg.carrier_solution_fixed,
      moving_base_mode: msg.moving_base_mode,
      reference_position_miss: msg.reference_position_miss,
      reference_observations_miss: msg.reference_observations_miss,
      heading_valid: msg.heading_valid,
      relative_position_normalized: msg.relative_position_normalized,
    }
  }
}


// Corresponds to px4_msgs__msg__SensorGnssStatus
/// Gnss quality indicators

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorGnssStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// unique device ID for the sensor that does not change between power cycles
    pub device_id: u32,

    /// Set to true if quality indicators are available
    pub quality_available: bool,

    /// Corrections quality from 0 to 10, or 255 if not available
    pub quality_corrections: u8,

    /// Overall receiver operating status from 0 to 10, or 255 if not available
    pub quality_receiver: u8,

    /// Quality of GNSS signals from 0 to 10, or 255 if not available
    pub quality_gnss_signals: u8,

    /// Expected post processing quality from 0 to 10, or 255 if not available
    pub quality_post_processing: u8,

}



impl Default for SensorGnssStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorGnssStatus::default())
  }
}

impl rosidl_runtime_rs::Message for SensorGnssStatus {
  type RmwMsg = super::msg::rmw::SensorGnssStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        device_id: msg.device_id,
        quality_available: msg.quality_available,
        quality_corrections: msg.quality_corrections,
        quality_receiver: msg.quality_receiver,
        quality_gnss_signals: msg.quality_gnss_signals,
        quality_post_processing: msg.quality_post_processing,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
      quality_available: msg.quality_available,
      quality_corrections: msg.quality_corrections,
      quality_receiver: msg.quality_receiver,
      quality_gnss_signals: msg.quality_gnss_signals,
      quality_post_processing: msg.quality_post_processing,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
      quality_available: msg.quality_available,
      quality_corrections: msg.quality_corrections,
      quality_receiver: msg.quality_receiver,
      quality_gnss_signals: msg.quality_gnss_signals,
      quality_post_processing: msg.quality_post_processing,
    }
  }
}


// Corresponds to px4_msgs__msg__SensorGps
/// GPS position in WGS84 coordinates.
/// the field 'timestamp' is for the position & velocity (microseconds)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorGps {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp_sample: u64,

    /// unique device ID for the sensor that does not change between power cycles
    pub device_id: u32,

    /// Latitude in degrees, allows centimeter level RTK precision
    pub latitude_deg: f64,

    /// Longitude in degrees, allows centimeter level RTK precision
    pub longitude_deg: f64,

    /// Altitude above MSL, meters
    pub altitude_msl_m: f64,

    /// Altitude above Ellipsoid, meters
    pub altitude_ellipsoid_m: f64,

    /// GPS speed accuracy estimate, (metres/sec)
    pub s_variance_m_s: f32,

    /// GPS course accuracy estimate, (radians)
    pub c_variance_rad: f32,

    /// Some applications will not use the value of this field unless it is at least two, so always correctly fill in the fix.
    pub fix_type: u8,

    /// GPS horizontal position accuracy (metres)
    pub eph: f32,

    /// GPS vertical position accuracy (metres)
    pub epv: f32,

    /// Horizontal dilution of precision
    pub hdop: f32,

    /// Vertical dilution of precision
    pub vdop: f32,

    /// GPS noise per millisecond
    pub noise_per_ms: i32,

    /// Automatic gain control monitor
    pub automatic_gain_control: u16,

    /// indicates whether jamming has been detected or suspected by the receivers. O: Unknown, 1: OK, 2: Mitigated, 3: Detected
    pub jamming_state: u8,

    /// indicates jamming is occurring
    pub jamming_indicator: i32,

    /// indicates whether spoofing has been detected or suspected by the receivers. O: Unknown, 1: OK, 2: Mitigated, 3: Detected
    pub spoofing_state: u8,

    /// GPS signal authentication state
    pub authentication_state: u8,

    /// GPS ground speed, (metres/sec)
    pub vel_m_s: f32,

    /// GPS North velocity, (metres/sec)
    pub vel_n_m_s: f32,

    /// GPS East velocity, (metres/sec)
    pub vel_e_m_s: f32,

    /// GPS Down velocity, (metres/sec)
    pub vel_d_m_s: f32,

    /// Course over ground (NOT heading, but direction of movement), -PI..PI, (radians)
    pub cog_rad: f32,

    /// True if NED velocity is valid
    pub vel_ned_valid: bool,

    /// timestamp + timestamp_time_relative = Time of the UTC timestamp since system start, (microseconds)
    pub timestamp_time_relative: i32,

    /// Timestamp (microseconds, UTC), this is the timestamp which comes from the gps module. It might be unavailable right after cold start, indicated by a value of 0
    pub time_utc_usec: u64,

    /// Number of satellites used
    pub satellites_used: u8,

    /// General errors with the connected GPS receiver
    pub system_error: u32,

    /// heading angle of XYZ body frame rel to NED. Set to NaN if not available and updated (used for dual antenna GPS), (rad, [-PI, PI])
    pub heading: f32,

    /// heading offset of dual antenna array in body frame. Set to NaN if not applicable. (rad, [-PI, PI])
    pub heading_offset: f32,

    /// heading accuracy (rad, [0, 2PI])
    pub heading_accuracy: f32,

    /// RTCM message injection rate Hz
    pub rtcm_injection_rate: f32,

    /// uorb instance that is being used for RTCM corrections
    pub selected_rtcm_instance: u8,

    /// RTCM message CRC failure detected
    pub rtcm_crc_failed: bool,

    /// Indicates if the RTCM message was used successfully by the receiver
    pub rtcm_msg_used: u8,

    /// [m] [@frame body frame FRD] X Position of GNSS antenna
    pub antenna_offset_x: f32,

    /// [m] [@frame body frame FRD] Y Position of GNSS antenna
    pub antenna_offset_y: f32,

    /// [m] [@frame body frame FRD] Z Position of GNSS antenna
    pub antenna_offset_z: f32,

}

impl SensorGps {
    /// Value 0 is also valid to represent no fix.
    pub const FIX_TYPE_NONE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FIX_TYPE_2D: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FIX_TYPE_3D: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FIX_TYPE_RTCM_CODE_DIFFERENTIAL: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FIX_TYPE_RTK_FLOAT: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FIX_TYPE_RTK_FIXED: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FIX_TYPE_EXTRAPOLATED: u8 = 8;

    /// default
    pub const JAMMING_STATE_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const JAMMING_STATE_OK: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const JAMMING_STATE_MITIGATED: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const JAMMING_STATE_DETECTED: u8 = 3;

    /// default
    pub const SPOOFING_STATE_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SPOOFING_STATE_OK: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SPOOFING_STATE_MITIGATED: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SPOOFING_STATE_DETECTED: u8 = 3;

    ///  Combined authentication state (e.g. Galileo OSNMA)
    /// default
    pub const AUTHENTICATION_STATE_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const AUTHENTICATION_STATE_INITIALIZING: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const AUTHENTICATION_STATE_ERROR: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const AUTHENTICATION_STATE_OK: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const AUTHENTICATION_STATE_DISABLED: u8 = 4;

    /// default
    pub const SYSTEM_ERROR_OK: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SYSTEM_ERROR_INCOMING_CORRECTIONS: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SYSTEM_ERROR_CONFIGURATION: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SYSTEM_ERROR_SOFTWARE: u32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SYSTEM_ERROR_ANTENNA: u32 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SYSTEM_ERROR_EVENT_CONGESTION: u32 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SYSTEM_ERROR_CPU_OVERLOAD: u32 = 32;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SYSTEM_ERROR_OUTPUT_CONGESTION: u32 = 64;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RTCM_MSG_USED_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RTCM_MSG_USED_NOT_USED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RTCM_MSG_USED_USED: u8 = 2;

}


impl Default for SensorGps {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorGps::default())
  }
}

impl rosidl_runtime_rs::Message for SensorGps {
  type RmwMsg = super::msg::rmw::SensorGps;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        device_id: msg.device_id,
        latitude_deg: msg.latitude_deg,
        longitude_deg: msg.longitude_deg,
        altitude_msl_m: msg.altitude_msl_m,
        altitude_ellipsoid_m: msg.altitude_ellipsoid_m,
        s_variance_m_s: msg.s_variance_m_s,
        c_variance_rad: msg.c_variance_rad,
        fix_type: msg.fix_type,
        eph: msg.eph,
        epv: msg.epv,
        hdop: msg.hdop,
        vdop: msg.vdop,
        noise_per_ms: msg.noise_per_ms,
        automatic_gain_control: msg.automatic_gain_control,
        jamming_state: msg.jamming_state,
        jamming_indicator: msg.jamming_indicator,
        spoofing_state: msg.spoofing_state,
        authentication_state: msg.authentication_state,
        vel_m_s: msg.vel_m_s,
        vel_n_m_s: msg.vel_n_m_s,
        vel_e_m_s: msg.vel_e_m_s,
        vel_d_m_s: msg.vel_d_m_s,
        cog_rad: msg.cog_rad,
        vel_ned_valid: msg.vel_ned_valid,
        timestamp_time_relative: msg.timestamp_time_relative,
        time_utc_usec: msg.time_utc_usec,
        satellites_used: msg.satellites_used,
        system_error: msg.system_error,
        heading: msg.heading,
        heading_offset: msg.heading_offset,
        heading_accuracy: msg.heading_accuracy,
        rtcm_injection_rate: msg.rtcm_injection_rate,
        selected_rtcm_instance: msg.selected_rtcm_instance,
        rtcm_crc_failed: msg.rtcm_crc_failed,
        rtcm_msg_used: msg.rtcm_msg_used,
        antenna_offset_x: msg.antenna_offset_x,
        antenna_offset_y: msg.antenna_offset_y,
        antenna_offset_z: msg.antenna_offset_z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      latitude_deg: msg.latitude_deg,
      longitude_deg: msg.longitude_deg,
      altitude_msl_m: msg.altitude_msl_m,
      altitude_ellipsoid_m: msg.altitude_ellipsoid_m,
      s_variance_m_s: msg.s_variance_m_s,
      c_variance_rad: msg.c_variance_rad,
      fix_type: msg.fix_type,
      eph: msg.eph,
      epv: msg.epv,
      hdop: msg.hdop,
      vdop: msg.vdop,
      noise_per_ms: msg.noise_per_ms,
      automatic_gain_control: msg.automatic_gain_control,
      jamming_state: msg.jamming_state,
      jamming_indicator: msg.jamming_indicator,
      spoofing_state: msg.spoofing_state,
      authentication_state: msg.authentication_state,
      vel_m_s: msg.vel_m_s,
      vel_n_m_s: msg.vel_n_m_s,
      vel_e_m_s: msg.vel_e_m_s,
      vel_d_m_s: msg.vel_d_m_s,
      cog_rad: msg.cog_rad,
      vel_ned_valid: msg.vel_ned_valid,
      timestamp_time_relative: msg.timestamp_time_relative,
      time_utc_usec: msg.time_utc_usec,
      satellites_used: msg.satellites_used,
      system_error: msg.system_error,
      heading: msg.heading,
      heading_offset: msg.heading_offset,
      heading_accuracy: msg.heading_accuracy,
      rtcm_injection_rate: msg.rtcm_injection_rate,
      selected_rtcm_instance: msg.selected_rtcm_instance,
      rtcm_crc_failed: msg.rtcm_crc_failed,
      rtcm_msg_used: msg.rtcm_msg_used,
      antenna_offset_x: msg.antenna_offset_x,
      antenna_offset_y: msg.antenna_offset_y,
      antenna_offset_z: msg.antenna_offset_z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      latitude_deg: msg.latitude_deg,
      longitude_deg: msg.longitude_deg,
      altitude_msl_m: msg.altitude_msl_m,
      altitude_ellipsoid_m: msg.altitude_ellipsoid_m,
      s_variance_m_s: msg.s_variance_m_s,
      c_variance_rad: msg.c_variance_rad,
      fix_type: msg.fix_type,
      eph: msg.eph,
      epv: msg.epv,
      hdop: msg.hdop,
      vdop: msg.vdop,
      noise_per_ms: msg.noise_per_ms,
      automatic_gain_control: msg.automatic_gain_control,
      jamming_state: msg.jamming_state,
      jamming_indicator: msg.jamming_indicator,
      spoofing_state: msg.spoofing_state,
      authentication_state: msg.authentication_state,
      vel_m_s: msg.vel_m_s,
      vel_n_m_s: msg.vel_n_m_s,
      vel_e_m_s: msg.vel_e_m_s,
      vel_d_m_s: msg.vel_d_m_s,
      cog_rad: msg.cog_rad,
      vel_ned_valid: msg.vel_ned_valid,
      timestamp_time_relative: msg.timestamp_time_relative,
      time_utc_usec: msg.time_utc_usec,
      satellites_used: msg.satellites_used,
      system_error: msg.system_error,
      heading: msg.heading,
      heading_offset: msg.heading_offset,
      heading_accuracy: msg.heading_accuracy,
      rtcm_injection_rate: msg.rtcm_injection_rate,
      selected_rtcm_instance: msg.selected_rtcm_instance,
      rtcm_crc_failed: msg.rtcm_crc_failed,
      rtcm_msg_used: msg.rtcm_msg_used,
      antenna_offset_x: msg.antenna_offset_x,
      antenna_offset_y: msg.antenna_offset_y,
      antenna_offset_z: msg.antenna_offset_z,
    }
  }
}


// Corresponds to px4_msgs__msg__SensorGyro

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorGyro {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp_sample: u64,

    /// unique device ID for the sensor that does not change between power cycles
    pub device_id: u32,

    /// angular velocity in the FRD board frame X-axis in rad/s
    pub x: f32,

    /// angular velocity in the FRD board frame Y-axis in rad/s
    pub y: f32,

    /// angular velocity in the FRD board frame Z-axis in rad/s
    pub z: f32,

    /// temperature in degrees Celsius
    pub temperature: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_count: u32,

    /// clip count per axis in the sample period
    pub clip_counter: [u8; 3],

    /// number of raw samples that went into this message
    pub samples: u8,

}

impl SensorGyro {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 8;

}


impl Default for SensorGyro {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorGyro::default())
  }
}

impl rosidl_runtime_rs::Message for SensorGyro {
  type RmwMsg = super::msg::rmw::SensorGyro;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        device_id: msg.device_id,
        x: msg.x,
        y: msg.y,
        z: msg.z,
        temperature: msg.temperature,
        error_count: msg.error_count,
        clip_counter: msg.clip_counter,
        samples: msg.samples,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      temperature: msg.temperature,
      error_count: msg.error_count,
        clip_counter: msg.clip_counter,
      samples: msg.samples,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      temperature: msg.temperature,
      error_count: msg.error_count,
      clip_counter: msg.clip_counter,
      samples: msg.samples,
    }
  }
}


// Corresponds to px4_msgs__msg__SensorGyroFft

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorGyroFft {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp_sample: u64,

    /// unique device ID for the sensor that does not change between power cycles
    pub device_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_sample_rate_hz: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub resolution_hz: f32,

    /// x axis peak frequencies
    pub peak_frequencies_x: [f32; 3],

    /// y axis peak frequencies
    pub peak_frequencies_y: [f32; 3],

    /// z axis peak frequencies
    pub peak_frequencies_z: [f32; 3],

    /// x axis peak SNR
    pub peak_snr_x: [f32; 3],

    /// y axis peak SNR
    pub peak_snr_y: [f32; 3],

    /// z axis peak SNR
    pub peak_snr_z: [f32; 3],

}



impl Default for SensorGyroFft {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorGyroFft::default())
  }
}

impl rosidl_runtime_rs::Message for SensorGyroFft {
  type RmwMsg = super::msg::rmw::SensorGyroFft;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        device_id: msg.device_id,
        sensor_sample_rate_hz: msg.sensor_sample_rate_hz,
        resolution_hz: msg.resolution_hz,
        peak_frequencies_x: msg.peak_frequencies_x,
        peak_frequencies_y: msg.peak_frequencies_y,
        peak_frequencies_z: msg.peak_frequencies_z,
        peak_snr_x: msg.peak_snr_x,
        peak_snr_y: msg.peak_snr_y,
        peak_snr_z: msg.peak_snr_z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      sensor_sample_rate_hz: msg.sensor_sample_rate_hz,
      resolution_hz: msg.resolution_hz,
        peak_frequencies_x: msg.peak_frequencies_x,
        peak_frequencies_y: msg.peak_frequencies_y,
        peak_frequencies_z: msg.peak_frequencies_z,
        peak_snr_x: msg.peak_snr_x,
        peak_snr_y: msg.peak_snr_y,
        peak_snr_z: msg.peak_snr_z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      sensor_sample_rate_hz: msg.sensor_sample_rate_hz,
      resolution_hz: msg.resolution_hz,
      peak_frequencies_x: msg.peak_frequencies_x,
      peak_frequencies_y: msg.peak_frequencies_y,
      peak_frequencies_z: msg.peak_frequencies_z,
      peak_snr_x: msg.peak_snr_x,
      peak_snr_y: msg.peak_snr_y,
      peak_snr_z: msg.peak_snr_z,
    }
  }
}


// Corresponds to px4_msgs__msg__SensorGyroFifo

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorGyroFifo {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp_sample: u64,

    /// unique device ID for the sensor that does not change between power cycles
    pub device_id: u32,

    /// delta time between samples (microseconds)
    pub dt: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub scale: f32,

    /// number of valid samples
    pub samples: u8,

    /// angular velocity in the FRD board frame X-axis in rad/s
    pub x: [i16; 32],

    /// angular velocity in the FRD board frame Y-axis in rad/s
    pub y: [i16; 32],

    /// angular velocity in the FRD board frame Z-axis in rad/s
    pub z: [i16; 32],

}

impl SensorGyroFifo {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 4;

}


impl Default for SensorGyroFifo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorGyroFifo::default())
  }
}

impl rosidl_runtime_rs::Message for SensorGyroFifo {
  type RmwMsg = super::msg::rmw::SensorGyroFifo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        device_id: msg.device_id,
        dt: msg.dt,
        scale: msg.scale,
        samples: msg.samples,
        x: msg.x,
        y: msg.y,
        z: msg.z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      dt: msg.dt,
      scale: msg.scale,
      samples: msg.samples,
        x: msg.x,
        y: msg.y,
        z: msg.z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      dt: msg.dt,
      scale: msg.scale,
      samples: msg.samples,
      x: msg.x,
      y: msg.y,
      z: msg.z,
    }
  }
}


// Corresponds to px4_msgs__msg__SensorHygrometer

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorHygrometer {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp_sample: u64,

    /// unique device ID for the sensor that does not change between power cycles
    pub device_id: u32,

    /// Temperature provided by sensor (Celsius)
    pub temperature: f32,

    /// Humidity provided by sensor
    pub humidity: f32,

}



impl Default for SensorHygrometer {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorHygrometer::default())
  }
}

impl rosidl_runtime_rs::Message for SensorHygrometer {
  type RmwMsg = super::msg::rmw::SensorHygrometer;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        device_id: msg.device_id,
        temperature: msg.temperature,
        humidity: msg.humidity,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      temperature: msg.temperature,
      humidity: msg.humidity,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      temperature: msg.temperature,
      humidity: msg.humidity,
    }
  }
}


// Corresponds to px4_msgs__msg__SensorMag

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorMag {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp_sample: u64,

    /// unique device ID for the sensor that does not change between power cycles
    pub device_id: u32,

    /// magnetic field in the FRD board frame X-axis
    pub x: f32,

    /// magnetic field in the FRD board frame Y-axis
    pub y: f32,

    /// magnetic field in the FRD board frame Z-axis
    pub z: f32,

    /// Temperature.
    pub temperature: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_count: u32,

}

impl SensorMag {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 4;

}


impl Default for SensorMag {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorMag::default())
  }
}

impl rosidl_runtime_rs::Message for SensorMag {
  type RmwMsg = super::msg::rmw::SensorMag;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        device_id: msg.device_id,
        x: msg.x,
        y: msg.y,
        z: msg.z,
        temperature: msg.temperature,
        error_count: msg.error_count,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      temperature: msg.temperature,
      error_count: msg.error_count,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      temperature: msg.temperature,
      error_count: msg.error_count,
    }
  }
}


// Corresponds to px4_msgs__msg__SensorOpticalFlow

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorOpticalFlow {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp_sample: u64,

    /// unique device ID for the sensor that does not change between power cycles
    pub device_id: u32,

    /// (radians) optical flow in radians where a positive value is produced by a RH rotation of the sensor about the body axis
    pub pixel_flow: [f32; 2],

    /// (radians) accumulated gyro radians where a positive value is produced by a RH rotation about the body axis. Set to NaN if flow sensor does not have 3-axis gyro data.
    pub delta_angle: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub delta_angle_available: bool,

    /// (meters) Distance to the center of the flow field
    pub distance_m: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_available: bool,

    /// (microseconds) accumulation timespan in microseconds
    pub integration_timespan_us: u32,

    /// quality, 0: bad quality, 255: maximum quality
    pub quality: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_count: u32,

    /// (radians/s) Magnitude of maximum angular which the optical flow sensor can measure reliably
    pub max_flow_rate: f32,

    /// (meters) Minimum distance from ground at which the optical flow sensor operates reliably
    pub min_ground_distance: f32,

    /// (meters) Maximum distance from ground at which the optical flow sensor operates reliably
    pub max_ground_distance: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,

}

impl SensorOpticalFlow {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_BRIGHT: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_LOWLIGHT: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_SUPER_LOWLIGHT: u8 = 3;

}


impl Default for SensorOpticalFlow {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorOpticalFlow::default())
  }
}

impl rosidl_runtime_rs::Message for SensorOpticalFlow {
  type RmwMsg = super::msg::rmw::SensorOpticalFlow;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        device_id: msg.device_id,
        pixel_flow: msg.pixel_flow,
        delta_angle: msg.delta_angle,
        delta_angle_available: msg.delta_angle_available,
        distance_m: msg.distance_m,
        distance_available: msg.distance_available,
        integration_timespan_us: msg.integration_timespan_us,
        quality: msg.quality,
        error_count: msg.error_count,
        max_flow_rate: msg.max_flow_rate,
        min_ground_distance: msg.min_ground_distance,
        max_ground_distance: msg.max_ground_distance,
        mode: msg.mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
        pixel_flow: msg.pixel_flow,
        delta_angle: msg.delta_angle,
      delta_angle_available: msg.delta_angle_available,
      distance_m: msg.distance_m,
      distance_available: msg.distance_available,
      integration_timespan_us: msg.integration_timespan_us,
      quality: msg.quality,
      error_count: msg.error_count,
      max_flow_rate: msg.max_flow_rate,
      min_ground_distance: msg.min_ground_distance,
      max_ground_distance: msg.max_ground_distance,
      mode: msg.mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      pixel_flow: msg.pixel_flow,
      delta_angle: msg.delta_angle,
      delta_angle_available: msg.delta_angle_available,
      distance_m: msg.distance_m,
      distance_available: msg.distance_available,
      integration_timespan_us: msg.integration_timespan_us,
      quality: msg.quality,
      error_count: msg.error_count,
      max_flow_rate: msg.max_flow_rate,
      min_ground_distance: msg.min_ground_distance,
      max_ground_distance: msg.max_ground_distance,
      mode: msg.mode,
    }
  }
}


// Corresponds to px4_msgs__msg__SensorPreflightMag
/// Pre-flight sensor check metrics.
/// The topic will not be updated when the vehicle is armed

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorPreflightMag {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// maximum angle between magnetometer instance field vectors in radians.
    pub mag_inconsistency_angle: f32,

}



impl Default for SensorPreflightMag {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorPreflightMag::default())
  }
}

impl rosidl_runtime_rs::Message for SensorPreflightMag {
  type RmwMsg = super::msg::rmw::SensorPreflightMag;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        mag_inconsistency_angle: msg.mag_inconsistency_angle,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      mag_inconsistency_angle: msg.mag_inconsistency_angle,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      mag_inconsistency_angle: msg.mag_inconsistency_angle,
    }
  }
}


// Corresponds to px4_msgs__msg__SensorSelection
/// Sensor ID's for the voted sensors output on the sensor_combined topic.
/// Will be updated on startup of the sensor module and when sensor selection changes

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorSelection {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// unique device ID for the selected accelerometers
    pub accel_device_id: u32,

    /// unique device ID for the selected rate gyros
    pub gyro_device_id: u32,

}



impl Default for SensorSelection {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorSelection::default())
  }
}

impl rosidl_runtime_rs::Message for SensorSelection {
  type RmwMsg = super::msg::rmw::SensorSelection;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        accel_device_id: msg.accel_device_id,
        gyro_device_id: msg.gyro_device_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      accel_device_id: msg.accel_device_id,
      gyro_device_id: msg.gyro_device_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      accel_device_id: msg.accel_device_id,
      gyro_device_id: msg.gyro_device_id,
    }
  }
}


// Corresponds to px4_msgs__msg__SensorTemp

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorTemp {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// unique device ID for the sensor that does not change between power cycles
    pub device_id: u32,

    /// Temperature provided by sensor (Celsius)
    pub temperature: f32,

}



impl Default for SensorTemp {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorTemp::default())
  }
}

impl rosidl_runtime_rs::Message for SensorTemp {
  type RmwMsg = super::msg::rmw::SensorTemp;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        device_id: msg.device_id,
        temperature: msg.temperature,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
      temperature: msg.temperature,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      device_id: msg.device_id,
      temperature: msg.temperature,
    }
  }
}


// Corresponds to px4_msgs__msg__SensorUwb
/// UWB distance contains the distance information measured by an ultra-wideband positioning system,
/// such as Pozyx or NXP Rddrone.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorUwb {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// UWB SessionID
    pub sessionid: u32,

    /// Time between Ranging Rounds in ms
    pub time_offset: u32,

    /// Number of Ranges since last Start of Ranging
    pub counter: u32,

    /// MAC adress of Initiator (controller)
    pub mac: u16,

    /// MAC adress of Responder (Controlee)
    pub mac_dest: u16,

    /// status feedback #
    pub status: u16,

    /// None line of site condition y/n
    pub nlos: u8,

    /// distance in m to the UWB receiver
    pub distance: f32,

    /// Angle of arrival, Angle in Degree -60..+60; FOV in both axis is 120 degrees
    ///  Angle of arrival of first incomming RX msg
    pub aoa_azimuth_dev: f32,

    /// Angle of arrival of first incomming RX msg
    pub aoa_elevation_dev: f32,

    /// Angle of arrival of first incomming RX msg at the responder
    pub aoa_azimuth_resp: f32,

    /// Angle of arrival of first incomming RX msg at the responder
    pub aoa_elevation_resp: f32,

    /// Figure of merit for the angle measurements
    /// AOA Azimuth FOM
    pub aoa_azimuth_fom: u8,

    /// AOA Elevation FOM
    pub aoa_elevation_fom: u8,

    /// AOA Azimuth FOM
    pub aoa_dest_azimuth_fom: u8,

    /// AOA Elevation FOM
    pub aoa_dest_elevation_fom: u8,

    /// Initiator physical configuration
    /// Direction the sensor faces from MAV_SENSOR_ORIENTATION enum
    /// Standard configuration is Antennas facing down and azimuth aligened in forward direction
    pub orientation: u8,

    /// UWB initiator offset in X axis (NED drone frame)
    pub offset_x: f32,

    /// UWB initiator offset in Y axis (NED drone frame)
    pub offset_y: f32,

    /// UWB initiator offset in Z axis (NED drone frame)
    pub offset_z: f32,

}



impl Default for SensorUwb {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorUwb::default())
  }
}

impl rosidl_runtime_rs::Message for SensorUwb {
  type RmwMsg = super::msg::rmw::SensorUwb;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        sessionid: msg.sessionid,
        time_offset: msg.time_offset,
        counter: msg.counter,
        mac: msg.mac,
        mac_dest: msg.mac_dest,
        status: msg.status,
        nlos: msg.nlos,
        distance: msg.distance,
        aoa_azimuth_dev: msg.aoa_azimuth_dev,
        aoa_elevation_dev: msg.aoa_elevation_dev,
        aoa_azimuth_resp: msg.aoa_azimuth_resp,
        aoa_elevation_resp: msg.aoa_elevation_resp,
        aoa_azimuth_fom: msg.aoa_azimuth_fom,
        aoa_elevation_fom: msg.aoa_elevation_fom,
        aoa_dest_azimuth_fom: msg.aoa_dest_azimuth_fom,
        aoa_dest_elevation_fom: msg.aoa_dest_elevation_fom,
        orientation: msg.orientation,
        offset_x: msg.offset_x,
        offset_y: msg.offset_y,
        offset_z: msg.offset_z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      sessionid: msg.sessionid,
      time_offset: msg.time_offset,
      counter: msg.counter,
      mac: msg.mac,
      mac_dest: msg.mac_dest,
      status: msg.status,
      nlos: msg.nlos,
      distance: msg.distance,
      aoa_azimuth_dev: msg.aoa_azimuth_dev,
      aoa_elevation_dev: msg.aoa_elevation_dev,
      aoa_azimuth_resp: msg.aoa_azimuth_resp,
      aoa_elevation_resp: msg.aoa_elevation_resp,
      aoa_azimuth_fom: msg.aoa_azimuth_fom,
      aoa_elevation_fom: msg.aoa_elevation_fom,
      aoa_dest_azimuth_fom: msg.aoa_dest_azimuth_fom,
      aoa_dest_elevation_fom: msg.aoa_dest_elevation_fom,
      orientation: msg.orientation,
      offset_x: msg.offset_x,
      offset_y: msg.offset_y,
      offset_z: msg.offset_z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      sessionid: msg.sessionid,
      time_offset: msg.time_offset,
      counter: msg.counter,
      mac: msg.mac,
      mac_dest: msg.mac_dest,
      status: msg.status,
      nlos: msg.nlos,
      distance: msg.distance,
      aoa_azimuth_dev: msg.aoa_azimuth_dev,
      aoa_elevation_dev: msg.aoa_elevation_dev,
      aoa_azimuth_resp: msg.aoa_azimuth_resp,
      aoa_elevation_resp: msg.aoa_elevation_resp,
      aoa_azimuth_fom: msg.aoa_azimuth_fom,
      aoa_elevation_fom: msg.aoa_elevation_fom,
      aoa_dest_azimuth_fom: msg.aoa_dest_azimuth_fom,
      aoa_dest_elevation_fom: msg.aoa_dest_elevation_fom,
      orientation: msg.orientation,
      offset_x: msg.offset_x,
      offset_y: msg.offset_y,
      offset_z: msg.offset_z,
    }
  }
}


// Corresponds to px4_msgs__msg__SensorsStatus
/// Sensor check metrics. This will be zero for a sensor that's primary or unpopulated.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorsStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// current primary device id for reference
    pub device_id_primary: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_ids: [u32; 4],

    /// magnitude of difference between sensor instance and mean
    pub inconsistency: [f32; 4],

    /// sensor healthy
    pub healthy: [bool; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub priority: [u8; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub enabled: [bool; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub external: [bool; 4],

}



impl Default for SensorsStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorsStatus::default())
  }
}

impl rosidl_runtime_rs::Message for SensorsStatus {
  type RmwMsg = super::msg::rmw::SensorsStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        device_id_primary: msg.device_id_primary,
        device_ids: msg.device_ids,
        inconsistency: msg.inconsistency,
        healthy: msg.healthy,
        priority: msg.priority,
        enabled: msg.enabled,
        external: msg.external,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      device_id_primary: msg.device_id_primary,
        device_ids: msg.device_ids,
        inconsistency: msg.inconsistency,
        healthy: msg.healthy,
        priority: msg.priority,
        enabled: msg.enabled,
        external: msg.external,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      device_id_primary: msg.device_id_primary,
      device_ids: msg.device_ids,
      inconsistency: msg.inconsistency,
      healthy: msg.healthy,
      priority: msg.priority,
      enabled: msg.enabled,
      external: msg.external,
    }
  }
}


// Corresponds to px4_msgs__msg__SensorsStatusImu
/// Sensor check metrics. This will be zero for a sensor that's primary or unpopulated.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorsStatusImu {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// current primary accel device id for reference
    pub accel_device_id_primary: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub accel_device_ids: [u32; 4],

    /// magnitude of acceleration difference between IMU instance and mean in m/s^2.
    pub accel_inconsistency_m_s_s: [f32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub accel_healthy: [bool; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub accel_priority: [u8; 4],

    /// current primary gyro device id for reference
    pub gyro_device_id_primary: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_device_ids: [u32; 4],

    /// magnitude of angular rate difference between IMU instance and mean in (rad/s).
    pub gyro_inconsistency_rad_s: [f32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_healthy: [bool; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_priority: [u8; 4],

}



impl Default for SensorsStatusImu {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorsStatusImu::default())
  }
}

impl rosidl_runtime_rs::Message for SensorsStatusImu {
  type RmwMsg = super::msg::rmw::SensorsStatusImu;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        accel_device_id_primary: msg.accel_device_id_primary,
        accel_device_ids: msg.accel_device_ids,
        accel_inconsistency_m_s_s: msg.accel_inconsistency_m_s_s,
        accel_healthy: msg.accel_healthy,
        accel_priority: msg.accel_priority,
        gyro_device_id_primary: msg.gyro_device_id_primary,
        gyro_device_ids: msg.gyro_device_ids,
        gyro_inconsistency_rad_s: msg.gyro_inconsistency_rad_s,
        gyro_healthy: msg.gyro_healthy,
        gyro_priority: msg.gyro_priority,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      accel_device_id_primary: msg.accel_device_id_primary,
        accel_device_ids: msg.accel_device_ids,
        accel_inconsistency_m_s_s: msg.accel_inconsistency_m_s_s,
        accel_healthy: msg.accel_healthy,
        accel_priority: msg.accel_priority,
      gyro_device_id_primary: msg.gyro_device_id_primary,
        gyro_device_ids: msg.gyro_device_ids,
        gyro_inconsistency_rad_s: msg.gyro_inconsistency_rad_s,
        gyro_healthy: msg.gyro_healthy,
        gyro_priority: msg.gyro_priority,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      accel_device_id_primary: msg.accel_device_id_primary,
      accel_device_ids: msg.accel_device_ids,
      accel_inconsistency_m_s_s: msg.accel_inconsistency_m_s_s,
      accel_healthy: msg.accel_healthy,
      accel_priority: msg.accel_priority,
      gyro_device_id_primary: msg.gyro_device_id_primary,
      gyro_device_ids: msg.gyro_device_ids,
      gyro_inconsistency_rad_s: msg.gyro_inconsistency_rad_s,
      gyro_healthy: msg.gyro_healthy,
      gyro_priority: msg.gyro_priority,
    }
  }
}


// Corresponds to px4_msgs__msg__SystemPower

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemPower {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// peripheral 5V rail voltage
    pub voltage5v_v: f32,

    /// payload rail voltage
    pub voltage_payload_v: f32,

    /// Sensors 3V3 rail voltage
    pub sensors3v3: [f32; 4],

    /// Sensors 3V3 rail voltage was read (bitfield).
    pub sensors3v3_valid: u8,

    /// USB is connected when 1
    pub usb_connected: u8,

    /// brick bits power is good when bit 1
    pub brick_valid: u8,

    /// USB is valid when 1
    pub usb_valid: u8,

    /// servo power is good when 1
    pub servo_valid: u8,

    /// peripheral overcurrent when 1
    pub periph_5v_oc: u8,

    /// high power peripheral overcurrent when 1
    pub hipower_5v_oc: u8,

    /// 5V to companion valid
    pub comp_5v_valid: u8,

    /// 5V for CAN1/GPS1 valid
    pub can1_gps1_5v_valid: u8,

    /// payload rail voltage is valid
    pub payload_v_valid: u8,

}

impl SystemPower {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BRICK1_VALID_SHIFTS: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BRICK1_VALID_MASK: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BRICK2_VALID_SHIFTS: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BRICK2_VALID_MASK: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BRICK3_VALID_SHIFTS: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BRICK3_VALID_MASK: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BRICK4_VALID_SHIFTS: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BRICK4_VALID_MASK: u8 = 8;

}


impl Default for SystemPower {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SystemPower::default())
  }
}

impl rosidl_runtime_rs::Message for SystemPower {
  type RmwMsg = super::msg::rmw::SystemPower;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        voltage5v_v: msg.voltage5v_v,
        voltage_payload_v: msg.voltage_payload_v,
        sensors3v3: msg.sensors3v3,
        sensors3v3_valid: msg.sensors3v3_valid,
        usb_connected: msg.usb_connected,
        brick_valid: msg.brick_valid,
        usb_valid: msg.usb_valid,
        servo_valid: msg.servo_valid,
        periph_5v_oc: msg.periph_5v_oc,
        hipower_5v_oc: msg.hipower_5v_oc,
        comp_5v_valid: msg.comp_5v_valid,
        can1_gps1_5v_valid: msg.can1_gps1_5v_valid,
        payload_v_valid: msg.payload_v_valid,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      voltage5v_v: msg.voltage5v_v,
      voltage_payload_v: msg.voltage_payload_v,
        sensors3v3: msg.sensors3v3,
      sensors3v3_valid: msg.sensors3v3_valid,
      usb_connected: msg.usb_connected,
      brick_valid: msg.brick_valid,
      usb_valid: msg.usb_valid,
      servo_valid: msg.servo_valid,
      periph_5v_oc: msg.periph_5v_oc,
      hipower_5v_oc: msg.hipower_5v_oc,
      comp_5v_valid: msg.comp_5v_valid,
      can1_gps1_5v_valid: msg.can1_gps1_5v_valid,
      payload_v_valid: msg.payload_v_valid,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      voltage5v_v: msg.voltage5v_v,
      voltage_payload_v: msg.voltage_payload_v,
      sensors3v3: msg.sensors3v3,
      sensors3v3_valid: msg.sensors3v3_valid,
      usb_connected: msg.usb_connected,
      brick_valid: msg.brick_valid,
      usb_valid: msg.usb_valid,
      servo_valid: msg.servo_valid,
      periph_5v_oc: msg.periph_5v_oc,
      hipower_5v_oc: msg.hipower_5v_oc,
      comp_5v_valid: msg.comp_5v_valid,
      can1_gps1_5v_valid: msg.can1_gps1_5v_valid,
      payload_v_valid: msg.payload_v_valid,
    }
  }
}


// Corresponds to px4_msgs__msg__TakeoffStatus
/// Status of the takeoff state machine currently just available for multicopters

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TakeoffStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub takeoff_state: u8,

    /// limited tilt feasibility during takeoff, contains maximum tilt otherwise
    pub tilt_limit: f32,

}

impl TakeoffStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TAKEOFF_STATE_UNINITIALIZED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TAKEOFF_STATE_DISARMED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TAKEOFF_STATE_SPOOLUP: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TAKEOFF_STATE_READY_FOR_TAKEOFF: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TAKEOFF_STATE_RAMPUP: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TAKEOFF_STATE_FLIGHT: u8 = 5;

}


impl Default for TakeoffStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TakeoffStatus::default())
  }
}

impl rosidl_runtime_rs::Message for TakeoffStatus {
  type RmwMsg = super::msg::rmw::TakeoffStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        takeoff_state: msg.takeoff_state,
        tilt_limit: msg.tilt_limit,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      takeoff_state: msg.takeoff_state,
      tilt_limit: msg.tilt_limit,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      takeoff_state: msg.takeoff_state,
      tilt_limit: msg.tilt_limit,
    }
  }
}


// Corresponds to px4_msgs__msg__TargetGnss
/// Landing target GNSS position in WGS84 coordinates, and optional NED velocity, from a target-mounted receiver.
///
/// Published by: mavlink_receiver (when decoding TARGET_ABSOLUTE with position/velocity capability bits set).
/// Subscribed by: vision_target_estimator (VTEPosition).
///
/// abs_pos_updated / vel_ned_updated tell the estimator which fields in this sample are fresh.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TargetGnss {
    /// Time since system start
    pub timestamp: u64,

    /// Timestamp of the raw observation
    pub timestamp_sample: u64,

    /// Latitude, allows centimeter level RTK precision
    pub latitude_deg: f64,

    /// Longitude, allows centimeter level RTK precision
    pub longitude_deg: f64,

    /// Altitude above MSL
    pub altitude_msl_m: f32,

    /// GNSS horizontal position accuracy
    pub eph: f32,

    /// GNSS vertical position accuracy
    pub epv: f32,

    /// True if WGS84 position is updated
    pub abs_pos_updated: bool,

    /// GNSS North velocity
    pub vel_n_m_s: f32,

    /// GNSS East velocity
    pub vel_e_m_s: f32,

    /// GNSS Down velocity
    pub vel_d_m_s: f32,

    /// GNSS speed accuracy estimate
    pub s_acc_m_s: f32,

    /// True if NED velocity is updated
    pub vel_ned_updated: bool,

}



impl Default for TargetGnss {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TargetGnss::default())
  }
}

impl rosidl_runtime_rs::Message for TargetGnss {
  type RmwMsg = super::msg::rmw::TargetGnss;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        latitude_deg: msg.latitude_deg,
        longitude_deg: msg.longitude_deg,
        altitude_msl_m: msg.altitude_msl_m,
        eph: msg.eph,
        epv: msg.epv,
        abs_pos_updated: msg.abs_pos_updated,
        vel_n_m_s: msg.vel_n_m_s,
        vel_e_m_s: msg.vel_e_m_s,
        vel_d_m_s: msg.vel_d_m_s,
        s_acc_m_s: msg.s_acc_m_s,
        vel_ned_updated: msg.vel_ned_updated,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      latitude_deg: msg.latitude_deg,
      longitude_deg: msg.longitude_deg,
      altitude_msl_m: msg.altitude_msl_m,
      eph: msg.eph,
      epv: msg.epv,
      abs_pos_updated: msg.abs_pos_updated,
      vel_n_m_s: msg.vel_n_m_s,
      vel_e_m_s: msg.vel_e_m_s,
      vel_d_m_s: msg.vel_d_m_s,
      s_acc_m_s: msg.s_acc_m_s,
      vel_ned_updated: msg.vel_ned_updated,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      latitude_deg: msg.latitude_deg,
      longitude_deg: msg.longitude_deg,
      altitude_msl_m: msg.altitude_msl_m,
      eph: msg.eph,
      epv: msg.epv,
      abs_pos_updated: msg.abs_pos_updated,
      vel_n_m_s: msg.vel_n_m_s,
      vel_e_m_s: msg.vel_e_m_s,
      vel_d_m_s: msg.vel_d_m_s,
      s_acc_m_s: msg.s_acc_m_s,
      vel_ned_updated: msg.vel_ned_updated,
    }
  }
}


// Corresponds to px4_msgs__msg__TaskStackInfo
/// stack information for a single running process

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskStackInfo {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stack_free: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_name: [u8; 24],

}

impl TaskStackInfo {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 2;

}


impl Default for TaskStackInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TaskStackInfo::default())
  }
}

impl rosidl_runtime_rs::Message for TaskStackInfo {
  type RmwMsg = super::msg::rmw::TaskStackInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        stack_free: msg.stack_free,
        task_name: msg.task_name,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      stack_free: msg.stack_free,
        task_name: msg.task_name,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      stack_free: msg.stack_free,
      task_name: msg.task_name,
    }
  }
}


// Corresponds to px4_msgs__msg__TecsStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TecsStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Altitude setpoint AMSL
    pub altitude_sp: f32,

    /// Altitude setpoint reference AMSL
    pub altitude_reference: f32,

    /// Time constant of the altitude tracker
    pub altitude_time_constant: f32,

    /// Height rate setpoint reference
    pub height_rate_reference: f32,

    /// Direct height rate setpoint from velocity reference generator
    pub height_rate_direct: f32,

    /// Height rate setpoint
    pub height_rate_setpoint: f32,

    /// Height rate
    pub height_rate: f32,

    /// Equivalent airspeed setpoint
    pub equivalent_airspeed_sp: f32,

    /// True airspeed setpoint
    pub true_airspeed_sp: f32,

    /// True airspeed filtered
    pub true_airspeed_filtered: f32,

    /// True airspeed derivative setpoint
    pub true_airspeed_derivative_sp: f32,

    /// True airspeed derivative
    pub true_airspeed_derivative: f32,

    /// True airspeed derivative raw
    pub true_airspeed_derivative_raw: f32,

    /// Total energy rate setpoint
    pub total_energy_rate_sp: f32,

    /// Total energy rate estimate
    pub total_energy_rate: f32,

    /// Energy balance rate setpoint
    pub total_energy_balance_rate_sp: f32,

    /// Energy balance rate estimate
    pub total_energy_balance_rate: f32,

    /// Throttle integrator value
    pub throttle_integ: f32,

    /// Pitch integrator value
    pub pitch_integ: f32,

    /// Current throttle setpoint
    pub throttle_sp: f32,

    /// Current pitch setpoint
    pub pitch_sp_rad: f32,

    /// estimated throttle value [0,1] required to fly level at equivalent_airspeed_sp in the current atmospheric conditions
    pub throttle_trim: f32,

    /// 0: no underspeed, 1: maximal underspeed. Controller takes measures to avoid stall proportional to ratio if >0.
    pub underspeed_ratio: f32,

    /// value indicating if fast descend mode is enabled with ramp up and ramp down
    pub fast_descend_ratio: f32,

}



impl Default for TecsStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TecsStatus::default())
  }
}

impl rosidl_runtime_rs::Message for TecsStatus {
  type RmwMsg = super::msg::rmw::TecsStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        altitude_sp: msg.altitude_sp,
        altitude_reference: msg.altitude_reference,
        altitude_time_constant: msg.altitude_time_constant,
        height_rate_reference: msg.height_rate_reference,
        height_rate_direct: msg.height_rate_direct,
        height_rate_setpoint: msg.height_rate_setpoint,
        height_rate: msg.height_rate,
        equivalent_airspeed_sp: msg.equivalent_airspeed_sp,
        true_airspeed_sp: msg.true_airspeed_sp,
        true_airspeed_filtered: msg.true_airspeed_filtered,
        true_airspeed_derivative_sp: msg.true_airspeed_derivative_sp,
        true_airspeed_derivative: msg.true_airspeed_derivative,
        true_airspeed_derivative_raw: msg.true_airspeed_derivative_raw,
        total_energy_rate_sp: msg.total_energy_rate_sp,
        total_energy_rate: msg.total_energy_rate,
        total_energy_balance_rate_sp: msg.total_energy_balance_rate_sp,
        total_energy_balance_rate: msg.total_energy_balance_rate,
        throttle_integ: msg.throttle_integ,
        pitch_integ: msg.pitch_integ,
        throttle_sp: msg.throttle_sp,
        pitch_sp_rad: msg.pitch_sp_rad,
        throttle_trim: msg.throttle_trim,
        underspeed_ratio: msg.underspeed_ratio,
        fast_descend_ratio: msg.fast_descend_ratio,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      altitude_sp: msg.altitude_sp,
      altitude_reference: msg.altitude_reference,
      altitude_time_constant: msg.altitude_time_constant,
      height_rate_reference: msg.height_rate_reference,
      height_rate_direct: msg.height_rate_direct,
      height_rate_setpoint: msg.height_rate_setpoint,
      height_rate: msg.height_rate,
      equivalent_airspeed_sp: msg.equivalent_airspeed_sp,
      true_airspeed_sp: msg.true_airspeed_sp,
      true_airspeed_filtered: msg.true_airspeed_filtered,
      true_airspeed_derivative_sp: msg.true_airspeed_derivative_sp,
      true_airspeed_derivative: msg.true_airspeed_derivative,
      true_airspeed_derivative_raw: msg.true_airspeed_derivative_raw,
      total_energy_rate_sp: msg.total_energy_rate_sp,
      total_energy_rate: msg.total_energy_rate,
      total_energy_balance_rate_sp: msg.total_energy_balance_rate_sp,
      total_energy_balance_rate: msg.total_energy_balance_rate,
      throttle_integ: msg.throttle_integ,
      pitch_integ: msg.pitch_integ,
      throttle_sp: msg.throttle_sp,
      pitch_sp_rad: msg.pitch_sp_rad,
      throttle_trim: msg.throttle_trim,
      underspeed_ratio: msg.underspeed_ratio,
      fast_descend_ratio: msg.fast_descend_ratio,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      altitude_sp: msg.altitude_sp,
      altitude_reference: msg.altitude_reference,
      altitude_time_constant: msg.altitude_time_constant,
      height_rate_reference: msg.height_rate_reference,
      height_rate_direct: msg.height_rate_direct,
      height_rate_setpoint: msg.height_rate_setpoint,
      height_rate: msg.height_rate,
      equivalent_airspeed_sp: msg.equivalent_airspeed_sp,
      true_airspeed_sp: msg.true_airspeed_sp,
      true_airspeed_filtered: msg.true_airspeed_filtered,
      true_airspeed_derivative_sp: msg.true_airspeed_derivative_sp,
      true_airspeed_derivative: msg.true_airspeed_derivative,
      true_airspeed_derivative_raw: msg.true_airspeed_derivative_raw,
      total_energy_rate_sp: msg.total_energy_rate_sp,
      total_energy_rate: msg.total_energy_rate,
      total_energy_balance_rate_sp: msg.total_energy_balance_rate_sp,
      total_energy_balance_rate: msg.total_energy_balance_rate,
      throttle_integ: msg.throttle_integ,
      pitch_integ: msg.pitch_integ,
      throttle_sp: msg.throttle_sp,
      pitch_sp_rad: msg.pitch_sp_rad,
      throttle_trim: msg.throttle_trim,
      underspeed_ratio: msg.underspeed_ratio,
      fast_descend_ratio: msg.fast_descend_ratio,
    }
  }
}


// Corresponds to px4_msgs__msg__TelemetryStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TelemetryStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// type of the radio hardware (LINK_TYPE_*)
    pub type_: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flow_control: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub forwarding: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mavlink_v2: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ftp: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub streams: u8,

    /// configured maximum data rate (Bytes/s)
    pub data_rate: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rate_multiplier: f32,

    /// transmit rate average (Bytes/s)
    pub tx_rate_avg: f32,

    /// transmit error rate average (Bytes/s)
    pub tx_error_rate_avg: f32,

    /// total message sent count
    pub tx_message_count: u32,

    /// number of TX buffer overruns
    pub tx_buffer_overruns: u32,

    /// transmit rate average (Bytes/s)
    pub rx_rate_avg: f32,

    /// count of total messages received
    pub rx_message_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rx_message_lost_count: u32,

    /// number of RX buffer overruns
    pub rx_buffer_overruns: u32,

    /// number of parse errors
    pub rx_parse_errors: u32,

    /// number of packet drops
    pub rx_packet_drop_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rx_message_lost_rate: f32,

    /// Heartbeats per type
    /// MAV_TYPE_ANTENNA_TRACKER
    pub heartbeat_type_antenna_tracker: bool,

    /// MAV_TYPE_GCS
    pub heartbeat_type_gcs: bool,

    /// MAV_TYPE_ONBOARD_CONTROLLER
    pub heartbeat_type_onboard_controller: bool,

    /// MAV_TYPE_GIMBAL
    pub heartbeat_type_gimbal: bool,

    /// MAV_TYPE_ADSB
    pub heartbeat_type_adsb: bool,

    /// MAV_TYPE_FLARM
    pub heartbeat_type_flarm: bool,

    /// MAV_TYPE_CAMERA
    pub heartbeat_type_camera: bool,

    /// MAV_TYPE_PARACHUTE
    pub heartbeat_type_parachute: bool,

    /// MAV_TYPE_ODID
    pub heartbeat_type_open_drone_id: bool,

    /// Heartbeats per component
    /// MAV_COMP_ID_TELEMETRY_RADIO
    pub heartbeat_component_telemetry_radio: bool,

    /// MAV_COMP_ID_LOG
    pub heartbeat_component_log: bool,

    /// MAV_COMP_ID_OSD
    pub heartbeat_component_osd: bool,

    /// MAV_COMP_ID_VISUAL_INERTIAL_ODOMETRY
    pub heartbeat_component_vio: bool,

    /// MAV_COMP_ID_PAIRING_MANAGER
    pub heartbeat_component_pairing_manager: bool,

    /// MAV_COMP_ID_UDP_BRIDGE
    pub heartbeat_component_udp_bridge: bool,

    /// MAV_COMP_ID_UART_BRIDGE
    pub heartbeat_component_uart_bridge: bool,

    /// Misc component health
    pub open_drone_id_system_healthy: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parachute_system_healthy: bool,

}

impl TelemetryStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LINK_TYPE_GENERIC: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LINK_TYPE_UBIQUITY_BULLET: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LINK_TYPE_WIRE: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LINK_TYPE_USB: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LINK_TYPE_IRIDIUM: u8 = 4;

    /// Heartbeat timeout (tolerate missing 1 + jitter)
    pub const HEARTBEAT_TIMEOUT_US: u64 = 2500000;

}


impl Default for TelemetryStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TelemetryStatus::default())
  }
}

impl rosidl_runtime_rs::Message for TelemetryStatus {
  type RmwMsg = super::msg::rmw::TelemetryStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        type_: msg.type_,
        mode: msg.mode,
        flow_control: msg.flow_control,
        forwarding: msg.forwarding,
        mavlink_v2: msg.mavlink_v2,
        ftp: msg.ftp,
        streams: msg.streams,
        data_rate: msg.data_rate,
        rate_multiplier: msg.rate_multiplier,
        tx_rate_avg: msg.tx_rate_avg,
        tx_error_rate_avg: msg.tx_error_rate_avg,
        tx_message_count: msg.tx_message_count,
        tx_buffer_overruns: msg.tx_buffer_overruns,
        rx_rate_avg: msg.rx_rate_avg,
        rx_message_count: msg.rx_message_count,
        rx_message_lost_count: msg.rx_message_lost_count,
        rx_buffer_overruns: msg.rx_buffer_overruns,
        rx_parse_errors: msg.rx_parse_errors,
        rx_packet_drop_count: msg.rx_packet_drop_count,
        rx_message_lost_rate: msg.rx_message_lost_rate,
        heartbeat_type_antenna_tracker: msg.heartbeat_type_antenna_tracker,
        heartbeat_type_gcs: msg.heartbeat_type_gcs,
        heartbeat_type_onboard_controller: msg.heartbeat_type_onboard_controller,
        heartbeat_type_gimbal: msg.heartbeat_type_gimbal,
        heartbeat_type_adsb: msg.heartbeat_type_adsb,
        heartbeat_type_flarm: msg.heartbeat_type_flarm,
        heartbeat_type_camera: msg.heartbeat_type_camera,
        heartbeat_type_parachute: msg.heartbeat_type_parachute,
        heartbeat_type_open_drone_id: msg.heartbeat_type_open_drone_id,
        heartbeat_component_telemetry_radio: msg.heartbeat_component_telemetry_radio,
        heartbeat_component_log: msg.heartbeat_component_log,
        heartbeat_component_osd: msg.heartbeat_component_osd,
        heartbeat_component_vio: msg.heartbeat_component_vio,
        heartbeat_component_pairing_manager: msg.heartbeat_component_pairing_manager,
        heartbeat_component_udp_bridge: msg.heartbeat_component_udp_bridge,
        heartbeat_component_uart_bridge: msg.heartbeat_component_uart_bridge,
        open_drone_id_system_healthy: msg.open_drone_id_system_healthy,
        parachute_system_healthy: msg.parachute_system_healthy,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      type_: msg.type_,
      mode: msg.mode,
      flow_control: msg.flow_control,
      forwarding: msg.forwarding,
      mavlink_v2: msg.mavlink_v2,
      ftp: msg.ftp,
      streams: msg.streams,
      data_rate: msg.data_rate,
      rate_multiplier: msg.rate_multiplier,
      tx_rate_avg: msg.tx_rate_avg,
      tx_error_rate_avg: msg.tx_error_rate_avg,
      tx_message_count: msg.tx_message_count,
      tx_buffer_overruns: msg.tx_buffer_overruns,
      rx_rate_avg: msg.rx_rate_avg,
      rx_message_count: msg.rx_message_count,
      rx_message_lost_count: msg.rx_message_lost_count,
      rx_buffer_overruns: msg.rx_buffer_overruns,
      rx_parse_errors: msg.rx_parse_errors,
      rx_packet_drop_count: msg.rx_packet_drop_count,
      rx_message_lost_rate: msg.rx_message_lost_rate,
      heartbeat_type_antenna_tracker: msg.heartbeat_type_antenna_tracker,
      heartbeat_type_gcs: msg.heartbeat_type_gcs,
      heartbeat_type_onboard_controller: msg.heartbeat_type_onboard_controller,
      heartbeat_type_gimbal: msg.heartbeat_type_gimbal,
      heartbeat_type_adsb: msg.heartbeat_type_adsb,
      heartbeat_type_flarm: msg.heartbeat_type_flarm,
      heartbeat_type_camera: msg.heartbeat_type_camera,
      heartbeat_type_parachute: msg.heartbeat_type_parachute,
      heartbeat_type_open_drone_id: msg.heartbeat_type_open_drone_id,
      heartbeat_component_telemetry_radio: msg.heartbeat_component_telemetry_radio,
      heartbeat_component_log: msg.heartbeat_component_log,
      heartbeat_component_osd: msg.heartbeat_component_osd,
      heartbeat_component_vio: msg.heartbeat_component_vio,
      heartbeat_component_pairing_manager: msg.heartbeat_component_pairing_manager,
      heartbeat_component_udp_bridge: msg.heartbeat_component_udp_bridge,
      heartbeat_component_uart_bridge: msg.heartbeat_component_uart_bridge,
      open_drone_id_system_healthy: msg.open_drone_id_system_healthy,
      parachute_system_healthy: msg.parachute_system_healthy,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      type_: msg.type_,
      mode: msg.mode,
      flow_control: msg.flow_control,
      forwarding: msg.forwarding,
      mavlink_v2: msg.mavlink_v2,
      ftp: msg.ftp,
      streams: msg.streams,
      data_rate: msg.data_rate,
      rate_multiplier: msg.rate_multiplier,
      tx_rate_avg: msg.tx_rate_avg,
      tx_error_rate_avg: msg.tx_error_rate_avg,
      tx_message_count: msg.tx_message_count,
      tx_buffer_overruns: msg.tx_buffer_overruns,
      rx_rate_avg: msg.rx_rate_avg,
      rx_message_count: msg.rx_message_count,
      rx_message_lost_count: msg.rx_message_lost_count,
      rx_buffer_overruns: msg.rx_buffer_overruns,
      rx_parse_errors: msg.rx_parse_errors,
      rx_packet_drop_count: msg.rx_packet_drop_count,
      rx_message_lost_rate: msg.rx_message_lost_rate,
      heartbeat_type_antenna_tracker: msg.heartbeat_type_antenna_tracker,
      heartbeat_type_gcs: msg.heartbeat_type_gcs,
      heartbeat_type_onboard_controller: msg.heartbeat_type_onboard_controller,
      heartbeat_type_gimbal: msg.heartbeat_type_gimbal,
      heartbeat_type_adsb: msg.heartbeat_type_adsb,
      heartbeat_type_flarm: msg.heartbeat_type_flarm,
      heartbeat_type_camera: msg.heartbeat_type_camera,
      heartbeat_type_parachute: msg.heartbeat_type_parachute,
      heartbeat_type_open_drone_id: msg.heartbeat_type_open_drone_id,
      heartbeat_component_telemetry_radio: msg.heartbeat_component_telemetry_radio,
      heartbeat_component_log: msg.heartbeat_component_log,
      heartbeat_component_osd: msg.heartbeat_component_osd,
      heartbeat_component_vio: msg.heartbeat_component_vio,
      heartbeat_component_pairing_manager: msg.heartbeat_component_pairing_manager,
      heartbeat_component_udp_bridge: msg.heartbeat_component_udp_bridge,
      heartbeat_component_uart_bridge: msg.heartbeat_component_uart_bridge,
      open_drone_id_system_healthy: msg.open_drone_id_system_healthy,
      parachute_system_healthy: msg.parachute_system_healthy,
    }
  }
}


// Corresponds to px4_msgs__msg__TiltrotorExtraControls

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TiltrotorExtraControls {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Collective tilt angle of motors of tiltrotor, 0: vertical, 1: horizontal [0, 1]
    pub collective_tilt_normalized_setpoint: f32,

    /// Collective thrust setpoint [0, 1]
    pub collective_thrust_normalized_setpoint: f32,

}



impl Default for TiltrotorExtraControls {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TiltrotorExtraControls::default())
  }
}

impl rosidl_runtime_rs::Message for TiltrotorExtraControls {
  type RmwMsg = super::msg::rmw::TiltrotorExtraControls;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        collective_tilt_normalized_setpoint: msg.collective_tilt_normalized_setpoint,
        collective_thrust_normalized_setpoint: msg.collective_thrust_normalized_setpoint,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      collective_tilt_normalized_setpoint: msg.collective_tilt_normalized_setpoint,
      collective_thrust_normalized_setpoint: msg.collective_thrust_normalized_setpoint,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      collective_tilt_normalized_setpoint: msg.collective_tilt_normalized_setpoint,
      collective_thrust_normalized_setpoint: msg.collective_thrust_normalized_setpoint,
    }
  }
}


// Corresponds to px4_msgs__msg__TimesyncStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TimesyncStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// timesync source
    pub source_protocol: u8,

    /// remote system timestamp (microseconds)
    pub remote_timestamp: u64,

    /// raw time offset directly observed from this timesync packet (microseconds)
    pub observed_offset: i64,

    /// smoothed time offset between companion system and PX4 (microseconds)
    pub estimated_offset: i64,

    /// round trip time of this timesync packet (microseconds)
    pub round_trip_time: u32,

}

impl TimesyncStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SOURCE_PROTOCOL_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SOURCE_PROTOCOL_MAVLINK: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SOURCE_PROTOCOL_DDS: u8 = 2;

}


impl Default for TimesyncStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TimesyncStatus::default())
  }
}

impl rosidl_runtime_rs::Message for TimesyncStatus {
  type RmwMsg = super::msg::rmw::TimesyncStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        source_protocol: msg.source_protocol,
        remote_timestamp: msg.remote_timestamp,
        observed_offset: msg.observed_offset,
        estimated_offset: msg.estimated_offset,
        round_trip_time: msg.round_trip_time,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      source_protocol: msg.source_protocol,
      remote_timestamp: msg.remote_timestamp,
      observed_offset: msg.observed_offset,
      estimated_offset: msg.estimated_offset,
      round_trip_time: msg.round_trip_time,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      source_protocol: msg.source_protocol,
      remote_timestamp: msg.remote_timestamp,
      observed_offset: msg.observed_offset,
      estimated_offset: msg.estimated_offset,
      round_trip_time: msg.round_trip_time,
    }
  }
}


// Corresponds to px4_msgs__msg__TrajectorySetpoint
/// Trajectory setpoint in NED frame
/// Input to PID position controller.
/// Needs to be kinematically consistent and feasible for smooth flight.
/// setting a value to NaN means the state should not be controlled

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrajectorySetpoint {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// NED local world frame
    /// in meters
    pub position: [f32; 3],

    /// in meters/second
    pub velocity: [f32; 3],

    /// in meters/second^2
    pub acceleration: [f32; 3],

    /// in meters/second^3 (for logging only)
    pub jerk: [f32; 3],

    /// euler angle of desired attitude in radians -PI..+PI
    pub yaw: f32,

    /// angular velocity around NED frame z-axis in radians/second
    pub yawspeed: f32,

}

impl TrajectorySetpoint {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 0;

}


impl Default for TrajectorySetpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TrajectorySetpoint::default())
  }
}

impl rosidl_runtime_rs::Message for TrajectorySetpoint {
  type RmwMsg = super::msg::rmw::TrajectorySetpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        position: msg.position,
        velocity: msg.velocity,
        acceleration: msg.acceleration,
        jerk: msg.jerk,
        yaw: msg.yaw,
        yawspeed: msg.yawspeed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        position: msg.position,
        velocity: msg.velocity,
        acceleration: msg.acceleration,
        jerk: msg.jerk,
      yaw: msg.yaw,
      yawspeed: msg.yawspeed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      position: msg.position,
      velocity: msg.velocity,
      acceleration: msg.acceleration,
      jerk: msg.jerk,
      yaw: msg.yaw,
      yawspeed: msg.yawspeed,
    }
  }
}


// Corresponds to px4_msgs__msg__TrajectorySetpoint6dof
/// Trajectory setpoint in NED frame
/// Input to position controller.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrajectorySetpoint6dof {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// NED local world frame
    /// in meters
    pub position: [f32; 3],

    /// in meters/second
    pub velocity: [f32; 3],

    /// in meters/second^2
    pub acceleration: [f32; 3],

    /// in meters/second^3 (for logging only)
    pub jerk: [f32; 3],

    /// unit quaternion
    pub quaternion: [f32; 4],

    /// angular velocity in radians/second
    pub angular_velocity: [f32; 3],

}



impl Default for TrajectorySetpoint6dof {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TrajectorySetpoint6dof::default())
  }
}

impl rosidl_runtime_rs::Message for TrajectorySetpoint6dof {
  type RmwMsg = super::msg::rmw::TrajectorySetpoint6dof;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        position: msg.position,
        velocity: msg.velocity,
        acceleration: msg.acceleration,
        jerk: msg.jerk,
        quaternion: msg.quaternion,
        angular_velocity: msg.angular_velocity,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        position: msg.position,
        velocity: msg.velocity,
        acceleration: msg.acceleration,
        jerk: msg.jerk,
        quaternion: msg.quaternion,
        angular_velocity: msg.angular_velocity,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      position: msg.position,
      velocity: msg.velocity,
      acceleration: msg.acceleration,
      jerk: msg.jerk,
      quaternion: msg.quaternion,
      angular_velocity: msg.angular_velocity,
    }
  }
}


// Corresponds to px4_msgs__msg__TransponderReport

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TransponderReport {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// ICAO address
    pub icao_address: u32,

    /// Latitude, expressed as degrees
    pub lat: f64,

    /// Longitude, expressed as degrees
    pub lon: f64,

    /// Type from ADSB_ALTITUDE_TYPE enum
    pub altitude_type: u8,

    /// Altitude(ASL) in meters
    pub altitude: f32,

    /// Course over ground in radians, 0 to 2pi, 0 is north
    pub heading: f32,

    /// The horizontal velocity in m/s
    pub hor_velocity: f32,

    /// The vertical velocity in m/s, positive is up
    pub ver_velocity: f32,

    /// The callsign, 8+null
    pub callsign: [u8; 9],

    /// Type from ADSB_EMITTER_TYPE enum
    pub emitter_type: u8,

    /// Time since last communication in seconds
    pub tslc: u8,

    /// Flags to indicate various statuses including valid data fields
    pub flags: u16,

    /// Squawk code
    pub squawk: u16,

    /// Unique UAS ID
    pub uas_id: [u8; 18],

}

impl TransponderReport {
    /// ADSB flags
    pub const PX4_ADSB_FLAGS_VALID_COORDS: u16 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PX4_ADSB_FLAGS_VALID_ALTITUDE: u16 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PX4_ADSB_FLAGS_VALID_HEADING: u16 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PX4_ADSB_FLAGS_VALID_VELOCITY: u16 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PX4_ADSB_FLAGS_VALID_CALLSIGN: u16 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PX4_ADSB_FLAGS_VALID_SQUAWK: u16 = 32;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PX4_ADSB_FLAGS_RETRANSLATE: u16 = 256;

    /// ADSB Emitter Data:
    /// from mavlink/v2.0/common/common.h
    pub const ADSB_EMITTER_TYPE_NO_INFO: u16 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ADSB_EMITTER_TYPE_LIGHT: u16 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ADSB_EMITTER_TYPE_SMALL: u16 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ADSB_EMITTER_TYPE_LARGE: u16 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ADSB_EMITTER_TYPE_HIGH_VORTEX_LARGE: u16 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ADSB_EMITTER_TYPE_HEAVY: u16 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ADSB_EMITTER_TYPE_HIGHLY_MANUV: u16 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ADSB_EMITTER_TYPE_ROTOCRAFT: u16 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ADSB_EMITTER_TYPE_UNASSIGNED: u16 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ADSB_EMITTER_TYPE_GLIDER: u16 = 9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ADSB_EMITTER_TYPE_LIGHTER_AIR: u16 = 10;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ADSB_EMITTER_TYPE_PARACHUTE: u16 = 11;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ADSB_EMITTER_TYPE_ULTRA_LIGHT: u16 = 12;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ADSB_EMITTER_TYPE_UNASSIGNED2: u16 = 13;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ADSB_EMITTER_TYPE_UAV: u16 = 14;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ADSB_EMITTER_TYPE_SPACE: u16 = 15;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ADSB_EMITTER_TYPE_UNASSGINED3: u16 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ADSB_EMITTER_TYPE_EMERGENCY_SURFACE: u16 = 17;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ADSB_EMITTER_TYPE_SERVICE_SURFACE: u16 = 18;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ADSB_EMITTER_TYPE_POINT_OBSTACLE: u16 = 19;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ADSB_EMITTER_TYPE_ENUM_END: u16 = 20;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 16;

}


impl Default for TransponderReport {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TransponderReport::default())
  }
}

impl rosidl_runtime_rs::Message for TransponderReport {
  type RmwMsg = super::msg::rmw::TransponderReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        icao_address: msg.icao_address,
        lat: msg.lat,
        lon: msg.lon,
        altitude_type: msg.altitude_type,
        altitude: msg.altitude,
        heading: msg.heading,
        hor_velocity: msg.hor_velocity,
        ver_velocity: msg.ver_velocity,
        callsign: msg.callsign,
        emitter_type: msg.emitter_type,
        tslc: msg.tslc,
        flags: msg.flags,
        squawk: msg.squawk,
        uas_id: msg.uas_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      icao_address: msg.icao_address,
      lat: msg.lat,
      lon: msg.lon,
      altitude_type: msg.altitude_type,
      altitude: msg.altitude,
      heading: msg.heading,
      hor_velocity: msg.hor_velocity,
      ver_velocity: msg.ver_velocity,
        callsign: msg.callsign,
      emitter_type: msg.emitter_type,
      tslc: msg.tslc,
      flags: msg.flags,
      squawk: msg.squawk,
        uas_id: msg.uas_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      icao_address: msg.icao_address,
      lat: msg.lat,
      lon: msg.lon,
      altitude_type: msg.altitude_type,
      altitude: msg.altitude,
      heading: msg.heading,
      hor_velocity: msg.hor_velocity,
      ver_velocity: msg.ver_velocity,
      callsign: msg.callsign,
      emitter_type: msg.emitter_type,
      tslc: msg.tslc,
      flags: msg.flags,
      squawk: msg.squawk,
      uas_id: msg.uas_id,
    }
  }
}


// Corresponds to px4_msgs__msg__TuneControl
/// This message is used to control the tunes, when the tune_id is set to CUSTOM
/// then the frequency, duration are used otherwise those values are ignored.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TuneControl {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// tune_id corresponding to TuneID::* from the tune_defaults.h in the tunes library
    pub tune_id: u8,

    /// if true the tune which is playing will be stopped and the new started
    pub tune_override: bool,

    /// in Hz
    pub frequency: u16,

    /// in us
    pub duration: u32,

    /// in us
    pub silence: u32,

    /// value between 0-100 if supported by backend
    pub volume: u8,

}

impl TuneControl {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNE_ID_STOP: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNE_ID_STARTUP: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNE_ID_ERROR: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNE_ID_NOTIFY_POSITIVE: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNE_ID_NOTIFY_NEUTRAL: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNE_ID_NOTIFY_NEGATIVE: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNE_ID_ARMING_WARNING: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNE_ID_BATTERY_WARNING_SLOW: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNE_ID_BATTERY_WARNING_FAST: u8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNE_ID_GPS_WARNING: u8 = 9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNE_ID_ARMING_FAILURE: u8 = 10;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNE_ID_PARACHUTE_RELEASE: u8 = 11;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNE_ID_SINGLE_BEEP: u8 = 12;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNE_ID_HOME_SET: u8 = 13;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNE_ID_SD_INIT: u8 = 14;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNE_ID_SD_ERROR: u8 = 15;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNE_ID_PROG_PX4IO: u8 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNE_ID_PROG_PX4IO_OK: u8 = 17;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNE_ID_PROG_PX4IO_ERR: u8 = 18;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNE_ID_POWER_OFF: u8 = 19;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NUMBER_OF_TUNES: u8 = 20;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VOLUME_LEVEL_MIN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VOLUME_LEVEL_DEFAULT: u8 = 20;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VOLUME_LEVEL_MAX: u8 = 100;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 4;

}


impl Default for TuneControl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TuneControl::default())
  }
}

impl rosidl_runtime_rs::Message for TuneControl {
  type RmwMsg = super::msg::rmw::TuneControl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        tune_id: msg.tune_id,
        tune_override: msg.tune_override,
        frequency: msg.frequency,
        duration: msg.duration,
        silence: msg.silence,
        volume: msg.volume,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      tune_id: msg.tune_id,
      tune_override: msg.tune_override,
      frequency: msg.frequency,
      duration: msg.duration,
      silence: msg.silence,
      volume: msg.volume,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      tune_id: msg.tune_id,
      tune_override: msg.tune_override,
      frequency: msg.frequency,
      duration: msg.duration,
      silence: msg.silence,
      volume: msg.volume,
    }
  }
}


// Corresponds to px4_msgs__msg__UavcanParameterRequest
/// UAVCAN-MAVLink parameter bridge request type

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UavcanParameterRequest {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// MAVLink message type: PARAM_REQUEST_READ, PARAM_REQUEST_LIST, PARAM_SET
    pub message_type: u8,

    /// UAVCAN node ID mapped from MAVLink component ID
    pub node_id: u8,

    /// MAVLink/UAVCAN parameter name
    pub param_id: [u8; 17],

    /// -1 if the param_id field should be used as identifier
    pub param_index: i16,

    /// MAVLink parameter type
    pub param_type: u8,

    /// current value if param_type is int-like
    pub int_value: i64,

    /// current value if param_type is float-like
    pub real_value: f32,

}

impl UavcanParameterRequest {
    /// MAVLINK_MSG_ID_PARAM_REQUEST_READ
    pub const MESSAGE_TYPE_PARAM_REQUEST_READ: u8 = 20;

    /// MAVLINK_MSG_ID_PARAM_REQUEST_LIST
    pub const MESSAGE_TYPE_PARAM_REQUEST_LIST: u8 = 21;

    /// MAVLINK_MSG_ID_PARAM_SET
    pub const MESSAGE_TYPE_PARAM_SET: u8 = 23;

    /// MAV_COMP_ID_ALL
    pub const NODE_ID_ALL: u8 = 0;

    /// MAV_PARAM_TYPE_UINT8
    pub const PARAM_TYPE_UINT8: u8 = 1;

    /// MAV_PARAM_TYPE_INT64
    pub const PARAM_TYPE_INT64: u8 = 8;

    /// MAV_PARAM_TYPE_REAL32
    pub const PARAM_TYPE_REAL32: u8 = 9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 4;

}


impl Default for UavcanParameterRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UavcanParameterRequest::default())
  }
}

impl rosidl_runtime_rs::Message for UavcanParameterRequest {
  type RmwMsg = super::msg::rmw::UavcanParameterRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        message_type: msg.message_type,
        node_id: msg.node_id,
        param_id: msg.param_id,
        param_index: msg.param_index,
        param_type: msg.param_type,
        int_value: msg.int_value,
        real_value: msg.real_value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      message_type: msg.message_type,
      node_id: msg.node_id,
        param_id: msg.param_id,
      param_index: msg.param_index,
      param_type: msg.param_type,
      int_value: msg.int_value,
      real_value: msg.real_value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      message_type: msg.message_type,
      node_id: msg.node_id,
      param_id: msg.param_id,
      param_index: msg.param_index,
      param_type: msg.param_type,
      int_value: msg.int_value,
      real_value: msg.real_value,
    }
  }
}


// Corresponds to px4_msgs__msg__UavcanParameterValue
/// UAVCAN-MAVLink parameter bridge response type

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UavcanParameterValue {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// UAVCAN node ID mapped from MAVLink component ID
    pub node_id: u8,

    /// MAVLink/UAVCAN parameter name
    pub param_id: [u8; 17],

    /// parameter index, if known
    pub param_index: i16,

    /// number of parameters exposed by the node
    pub param_count: u16,

    /// MAVLink parameter type
    pub param_type: u8,

    /// current value if param_type is int-like
    pub int_value: i64,

    /// current value if param_type is float-like
    pub real_value: f32,

}



impl Default for UavcanParameterValue {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UavcanParameterValue::default())
  }
}

impl rosidl_runtime_rs::Message for UavcanParameterValue {
  type RmwMsg = super::msg::rmw::UavcanParameterValue;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        node_id: msg.node_id,
        param_id: msg.param_id,
        param_index: msg.param_index,
        param_count: msg.param_count,
        param_type: msg.param_type,
        int_value: msg.int_value,
        real_value: msg.real_value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      node_id: msg.node_id,
        param_id: msg.param_id,
      param_index: msg.param_index,
      param_count: msg.param_count,
      param_type: msg.param_type,
      int_value: msg.int_value,
      real_value: msg.real_value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      node_id: msg.node_id,
      param_id: msg.param_id,
      param_index: msg.param_index,
      param_count: msg.param_count,
      param_type: msg.param_type,
      int_value: msg.int_value,
      real_value: msg.real_value,
    }
  }
}


// Corresponds to px4_msgs__msg__UlogStream
/// Message to stream ULog data from the logger. Corresponds to the LOGGING_DATA
/// mavlink message

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UlogStream {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// length of data
    pub length: u8,

    /// offset into data where first message starts. This
    /// can be used for recovery, when a previous message got lost
    pub first_message_offset: u8,

    /// allows determine drops
    pub msg_sequence: u16,

    /// see FLAGS_*
    pub flags: u8,

    /// ulog data
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub data: [u8; 249],

}

impl UlogStream {
    /// flags bitmasks
    /// if set, this message requires to be acked.
    /// Acked messages are published synchronous: a
    /// publisher waits for an ack before sending the
    /// next message
    pub const FLAGS_NEED_ACK: u8 = 1;

    /// TODO: we might be able to reduce this if mavlink polled on the topic
    pub const ORB_QUEUE_LENGTH: u8 = 16;

}


impl Default for UlogStream {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UlogStream::default())
  }
}

impl rosidl_runtime_rs::Message for UlogStream {
  type RmwMsg = super::msg::rmw::UlogStream;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        length: msg.length,
        first_message_offset: msg.first_message_offset,
        msg_sequence: msg.msg_sequence,
        flags: msg.flags,
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      length: msg.length,
      first_message_offset: msg.first_message_offset,
      msg_sequence: msg.msg_sequence,
      flags: msg.flags,
        data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      length: msg.length,
      first_message_offset: msg.first_message_offset,
      msg_sequence: msg.msg_sequence,
      flags: msg.flags,
      data: msg.data,
    }
  }
}


// Corresponds to px4_msgs__msg__UlogStreamAck
/// Ack a previously sent ulog_stream message that had
/// the NEED_ACK flag set

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UlogStreamAck {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub msg_sequence: u16,

}

impl UlogStreamAck {
    /// timeout waiting for an ack until we retry to send the message
    pub const ACK_TIMEOUT: i32 = 50;

    /// maximum amount of tries to (re-)send a message, each time waiting ACK_TIMEOUT ms
    pub const ACK_MAX_TRIES: i32 = 50;

}


impl Default for UlogStreamAck {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UlogStreamAck::default())
  }
}

impl rosidl_runtime_rs::Message for UlogStreamAck {
  type RmwMsg = super::msg::rmw::UlogStreamAck;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        msg_sequence: msg.msg_sequence,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      msg_sequence: msg.msg_sequence,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      msg_sequence: msg.msg_sequence,
    }
  }
}


// Corresponds to px4_msgs__msg__UnregisterExtComponent

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UnregisterExtComponent {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// either the mode name, or component name
    pub name: [u8; 25],

    /// arming check registration ID (-1 if not registered)
    pub arming_check_id: i8,

    /// assigned mode ID (-1 if not registered)
    pub mode_id: i8,

    /// assigned mode executor ID (-1 if not registered)
    pub mode_executor_id: i8,

}

impl UnregisterExtComponent {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 0;

}


impl Default for UnregisterExtComponent {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UnregisterExtComponent::default())
  }
}

impl rosidl_runtime_rs::Message for UnregisterExtComponent {
  type RmwMsg = super::msg::rmw::UnregisterExtComponent;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        name: msg.name,
        arming_check_id: msg.arming_check_id,
        mode_id: msg.mode_id,
        mode_executor_id: msg.mode_executor_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        name: msg.name,
      arming_check_id: msg.arming_check_id,
      mode_id: msg.mode_id,
      mode_executor_id: msg.mode_executor_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      name: msg.name,
      arming_check_id: msg.arming_check_id,
      mode_id: msg.mode_id,
      mode_executor_id: msg.mode_executor_id,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleAcceleration

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleAcceleration {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp of the raw data (microseconds)
    pub timestamp_sample: u64,

    /// Bias corrected acceleration (including gravity) in the FRD body frame XYZ-axis in m/s^2
    pub xyz: [f32; 3],

}



impl Default for VehicleAcceleration {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleAcceleration::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleAcceleration {
  type RmwMsg = super::msg::rmw::VehicleAcceleration;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        xyz: msg.xyz,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
        xyz: msg.xyz,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      xyz: msg.xyz,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleAirData
/// Vehicle air data
///
/// Data from the currently selected barometer (plus ambient temperature from the source specified in temperature_source).
/// Includes calculated data such as barometric altitude and air density.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleAirData {
    /// Time since system start
    pub timestamp: u64,

    /// Timestamp of the raw data
    pub timestamp_sample: u64,

    /// Unique device ID for the selected barometer
    pub baro_device_id: u32,

    /// [m] [@frame MSL] Altitude above MSL calculated from temperature compensated baro sensor data using an ISA corrected for sea level pressure SENS_BARO_QNH
    pub baro_alt_meter: f32,

    /// Absolute pressure
    pub baro_pressure_pa: f32,

    /// Ambient temperature
    pub ambient_temperature: f32,

    /// Source of temperature data: 0: Default Temperature (15°C), 1: External Baro, 2: Airspeed
    pub temperature_source: u8,

    /// Air density
    pub rho: f32,

    /// Calibration changed counter. Monotonically increases whenever calibration changes.
    pub calibration_count: u8,

}



impl Default for VehicleAirData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleAirData::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleAirData {
  type RmwMsg = super::msg::rmw::VehicleAirData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        baro_device_id: msg.baro_device_id,
        baro_alt_meter: msg.baro_alt_meter,
        baro_pressure_pa: msg.baro_pressure_pa,
        ambient_temperature: msg.ambient_temperature,
        temperature_source: msg.temperature_source,
        rho: msg.rho,
        calibration_count: msg.calibration_count,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      baro_device_id: msg.baro_device_id,
      baro_alt_meter: msg.baro_alt_meter,
      baro_pressure_pa: msg.baro_pressure_pa,
      ambient_temperature: msg.ambient_temperature,
      temperature_source: msg.temperature_source,
      rho: msg.rho,
      calibration_count: msg.calibration_count,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      baro_device_id: msg.baro_device_id,
      baro_alt_meter: msg.baro_alt_meter,
      baro_pressure_pa: msg.baro_pressure_pa,
      ambient_temperature: msg.ambient_temperature,
      temperature_source: msg.temperature_source,
      rho: msg.rho,
      calibration_count: msg.calibration_count,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleAngularAccelerationSetpoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleAngularAccelerationSetpoint {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// timestamp of the data sample on which this message is based (microseconds)
    pub timestamp_sample: u64,

    /// angular acceleration about X, Y, Z body axis in rad/s^2
    pub xyz: [f32; 3],

}



impl Default for VehicleAngularAccelerationSetpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleAngularAccelerationSetpoint::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleAngularAccelerationSetpoint {
  type RmwMsg = super::msg::rmw::VehicleAngularAccelerationSetpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        xyz: msg.xyz,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
        xyz: msg.xyz,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      xyz: msg.xyz,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleAngularVelocity

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleAngularVelocity {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// timestamp of the data sample on which this message is based (microseconds)
    pub timestamp_sample: u64,

    /// Bias corrected angular velocity about the FRD body frame XYZ-axis in rad/s
    pub xyz: [f32; 3],

    /// angular acceleration about the FRD body frame XYZ-axis in rad/s^2
    pub xyz_derivative: [f32; 3],

}

impl VehicleAngularVelocity {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 0;

}


impl Default for VehicleAngularVelocity {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleAngularVelocity::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleAngularVelocity {
  type RmwMsg = super::msg::rmw::VehicleAngularVelocity;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        xyz: msg.xyz,
        xyz_derivative: msg.xyz_derivative,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
        xyz: msg.xyz,
        xyz_derivative: msg.xyz_derivative,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      xyz: msg.xyz,
      xyz_derivative: msg.xyz_derivative,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleAttitude
/// This is similar to the mavlink message ATTITUDE_QUATERNION, but for onboard use
/// The quaternion uses the Hamilton convention, and the order is q(w, x, y, z)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleAttitude {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp of the raw data (microseconds)
    pub timestamp_sample: u64,

    /// Quaternion rotation from the FRD body frame to the NED earth frame
    pub q: [f32; 4],

    /// Amount by which quaternion has changed during last reset
    pub delta_q_reset: [f32; 4],

    /// Quaternion reset counter
    pub quat_reset_counter: u8,

}

impl VehicleAttitude {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 0;

}


impl Default for VehicleAttitude {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleAttitude::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleAttitude {
  type RmwMsg = super::msg::rmw::VehicleAttitude;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        q: msg.q,
        delta_q_reset: msg.delta_q_reset,
        quat_reset_counter: msg.quat_reset_counter,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
        q: msg.q,
        delta_q_reset: msg.delta_q_reset,
      quat_reset_counter: msg.quat_reset_counter,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      q: msg.q,
      delta_q_reset: msg.delta_q_reset,
      quat_reset_counter: msg.quat_reset_counter,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleAttitudeSetpoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleAttitudeSetpoint {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// rad/s (commanded by user)
    pub yaw_sp_move_rate: f32,

    /// For quaternion-based attitude control
    /// Desired quaternion for quaternion control
    pub q_d: [f32; 4],

    /// For clarification: For multicopters thrust_body[0] and thrust[1] are usually 0 and thrust[2] is the negative throttle demand.
    /// For fixed wings thrust_x is the throttle demand and thrust_y, thrust_z will usually be zero.
    /// Normalized thrust command in body FRD frame [-1,1]
    pub thrust_body: [f32; 3],

}

impl VehicleAttitudeSetpoint {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 1;

}


impl Default for VehicleAttitudeSetpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleAttitudeSetpoint::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleAttitudeSetpoint {
  type RmwMsg = super::msg::rmw::VehicleAttitudeSetpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        yaw_sp_move_rate: msg.yaw_sp_move_rate,
        q_d: msg.q_d,
        thrust_body: msg.thrust_body,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      yaw_sp_move_rate: msg.yaw_sp_move_rate,
        q_d: msg.q_d,
        thrust_body: msg.thrust_body,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      yaw_sp_move_rate: msg.yaw_sp_move_rate,
      q_d: msg.q_d,
      thrust_body: msg.thrust_body,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleCommand
/// Vehicle Command uORB message. Used for commanding a mission / action / etc.
/// Follows the MAVLink COMMAND_INT / COMMAND_LONG definition

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleCommand {
    /// Time since system start.
    pub timestamp: u64,

    /// Parameter 1, as defined by MAVLink uint16 VEHICLE_CMD enum.
    pub param1: f32,

    /// Parameter 2, as defined by MAVLink uint16 VEHICLE_CMD enum.
    pub param2: f32,

    /// Parameter 3, as defined by MAVLink uint16 VEHICLE_CMD enum.
    pub param3: f32,

    /// Parameter 4, as defined by MAVLink uint16 VEHICLE_CMD enum.
    pub param4: f32,

    /// Parameter 5, as defined by MAVLink uint16 VEHICLE_CMD enum.
    pub param5: f64,

    /// Parameter 6, as defined by MAVLink uint16 VEHICLE_CMD enum.
    pub param6: f64,

    /// Parameter 7, as defined by MAVLink uint16 VEHICLE_CMD enum.
    pub param7: f32,

    /// Command ID.
    pub command: u32,

    /// System which should execute the command.
    pub target_system: u8,

    /// Component which should execute the command, 0 for all components.
    pub target_component: u8,

    /// System sending the command.
    pub source_system: u8,

    /// Component / mode executor sending the command.
    pub source_component: u16,

    /// 0: First transmission of this command. 1-255: Confirmation transmissions (e.g. for kill command).
    pub confirmation: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub from_external: bool,

}

impl VehicleCommand {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 0;

    /// Test command.
    pub const VEHICLE_CMD_CUSTOM_0: u16 = 0;

    /// Test command.
    pub const VEHICLE_CMD_CUSTOM_1: u16 = 1;

    /// Test command.
    pub const VEHICLE_CMD_CUSTOM_2: u16 = 2;

    /// Navigate to MISSION. |[s] (decimal) Hold time. (ignored by fixed wing, time to stay at MISSION for rotary wing)|[m] Acceptance radius (if the sphere with this radius is hit, the MISSION counts as reached)|0 to pass through the WP, if > 0 radius [m] to pass by WP. Positive value for clockwise orbit, negative value for counter-clockwise orbit. Allows trajectory control.|Desired yaw angle at MISSION (rotary wing)|Latitude|Longitude|Altitude|
    pub const VEHICLE_CMD_NAV_WAYPOINT: u16 = 16;

    /// Loiter around this MISSION an unlimited amount of time. |Unused|Unused| Radius around MISSION. If positive loiter clockwise, else counter-clockwise|Desired yaw angle.|Latitude|Longitude|Altitude|
    pub const VEHICLE_CMD_NAV_LOITER_UNLIM: u16 = 17;

    /// Loiter around this MISSION for X turns. |Turns|Unused|Radius around MISSION. If positive loiter clockwise, else counter-clockwise|Desired yaw angle.|Latitude|Longitude|Altitude|
    pub const VEHICLE_CMD_NAV_LOITER_TURNS: u16 = 18;

    /// Loiter around this MISSION for time. |[s] Seconds (decimal)|Unused|Radius around MISSION [m]. If positive loiter clockwise, else counter-clockwise|Desired yaw angle.|Latitude|Longitude|Altitude|
    pub const VEHICLE_CMD_NAV_LOITER_TIME: u16 = 19;

    /// Return to launch location. |Unused|Unused|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_NAV_RETURN_TO_LAUNCH: u16 = 20;

    /// Land at location. |Unused|Unused|Unused|Desired yaw angle.|Latitude|Longitude|Altitude|
    pub const VEHICLE_CMD_NAV_LAND: u16 = 21;

    /// Takeoff from ground / hand. |Unused (FW pitch from FW_TKO_PITCH_MIN)|Unused|Unused|[deg] [@range 0,360] Yaw angle in NED if yaw source available, ignored otherwise|Latitude (WGS-84)|Longitude (WGS-84)|[m] Altitude AMSL|
    pub const VEHICLE_CMD_NAV_TAKEOFF: u16 = 22;

    /// Attempt a precision landing.
    pub const VEHICLE_CMD_NAV_PRECLAND: u16 = 23;

    /// Start orbiting on the circumference of a circle defined by the parameters. |[m] Radius|[m/s] Velocity|[@enum ORBIT_YAW_BEHAVIOUR] Yaw behaviour|Unused|Latitude/X|Longitude/Y|Altitude/Z|
    pub const VEHICLE_CMD_DO_ORBIT: u16 = 34;

    /// Start flying on the outline of a figure eight defined by the parameters. |[m] Major radius|[m] Minor radius|[m/s] Velocity|Orientation|Latitude/X|Longitude/Y|Altitude/Z|
    pub const VEHICLE_CMD_DO_FIGUREEIGHT: u16 = 35;

    /// Sets the region of interest (ROI) for a sensor set or the vehicle itself. This can then be used by the vehicles control system to control the vehicle attitude and the attitude of various sensors such as cameras. | Region of interest mode.|MISSION index/ target ID.|ROI index (allows a vehicle to manage multiple ROI's)|Unused|x the location of the fixed ROI (see MAV_FRAME)|y|z|
    pub const VEHICLE_CMD_NAV_ROI: u16 = 80;

    /// Control autonomous path planning on the MAV. |0: Disable local obstacle avoidance / local path planning (without resetting map), 1: Enable local path planning, 2: Enable and reset local path planning|0: Disable full path planning (without resetting map), 1: Enable, 2: Enable and reset map/occupancy grid, 3: Enable and reset planned route, but not occupancy grid|Unused| [@range 0, 360] Yaw angle at goal, in compass degrees|Latitude/X of goal|Longitude/Y of goal|Altitude/Z of goal|
    pub const VEHICLE_CMD_NAV_PATHPLANNING: u16 = 81;

    /// Takeoff from ground / hand and transition to fixed wing. |Minimum pitch (if airspeed sensor present), desired pitch without sensor|Transition heading, 0: Default, 3: Use specified transition heading|Unused|Yaw angle (if magnetometer present), ignored without magnetometer|Latitude|Longitude|Altitude|
    pub const VEHICLE_CMD_NAV_VTOL_TAKEOFF: u16 = 84;

    /// Transition to MC and land at location. |Unused|Unused|Unused|Desired yaw angle.|Latitude|Longitude|Altitude|
    pub const VEHICLE_CMD_NAV_VTOL_LAND: u16 = 85;

    /// Set limits for external control. |[s] Timeout  - maximum time that external controller will be allowed to control vehicle. 0 means no timeout|[m] Absolute altitude min AMSL - if vehicle moves below this alt, the command will be aborted and the mission will continue. 0 means no lower altitude limit|[m] Absolute altitude max - if vehicle moves above this alt, the command will be aborted and the mission will continue. 0 means no upper altitude limit|[m] Horizontal move limit (AMSL) - if vehicle moves more than this distance from it's location at the moment the command was executed, the command will be aborted and the mission will continue. 0 means no horizontal altitude limit|Unused|Unused|Unused|
    pub const VEHICLE_CMD_NAV_GUIDED_LIMITS: u16 = 90;

    /// Set id of master controller. |System ID|Component ID|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_NAV_GUIDED_MASTER: u16 = 91;

    /// Delay the next navigation command a number of seconds or until a specified time. |[s] Delay (decimal, -1 to enable time-of-day fields)|[h] hour (24h format, UTC, -1 to ignore)|minute (24h format, UTC, -1 to ignore)|second (24h format, UTC)|Unused|Unused|Unused|
    pub const VEHICLE_CMD_NAV_DELAY: u16 = 93;

    /// NOP - This command is only used to mark the upper limit of the NAV/ACTION commands in the enumeration.|Unused|Unused|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_NAV_LAST: u16 = 95;

    /// Delay mission state machine. | Delay (decimal seconds)|Unused|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_CONDITION_DELAY: u16 = 112;

    /// Ascend/descend at rate. Delay mission state machine until desired altitude reached.|Descent / Ascend rate (m/s)|Unused|Unused|Unused|Unused|Unused|Finish Altitude|
    pub const VEHICLE_CMD_CONDITION_CHANGE_ALT: u16 = 113;

    /// Delay mission state machine until within desired distance of next NAV point. |Distance|Unused|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_CONDITION_DISTANCE: u16 = 114;

    /// Reach a certain target angle. |[deg] [@range 0,360] Target angle. 0 is north|[deg/s] Speed during yaw change|[@range -1,1] Direction: negative: counter clockwise, positive: clockwise |[ 1,0] Relative offset or absolute angle|Unused|Unused|Unused|
    pub const VEHICLE_CMD_CONDITION_YAW: u16 = 115;

    /// NOP - This command is only used to mark the upper limit of the CONDITION commands in the enumeration. |Unused|Unused|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_CONDITION_LAST: u16 = 159;

    /// Wait until passing a threshold. |2D coord mode: 0: Orthogonal to planned route|Altitude mode: 0: Ignore altitude|Unused|Unused|Lat|Lon|Alt|
    pub const VEHICLE_CMD_CONDITION_GATE: u16 = 4501;

    /// Set system mode. |Mode, as defined by ENUM MAV_MODE|Unused|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_SET_MODE: u16 = 176;

    /// Jump to the desired command in the mission list. Repeat this action only the specified number of times. |Sequence number|Repeat count|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_JUMP: u16 = 177;

    /// Change speed and/or throttle set points. |[@enum SPEED_TYPE] Speed type (0=Airspeed, 1=Ground Speed)|Speed (m/s, -1 indicates no change)|[%] Throttle ( Percent, -1 indicates no change)|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_CHANGE_SPEED: u16 = 178;

    /// Changes the home location either to the current location or a specified location. |Use current (1=use current location, 0=use specified location)|Unused|Unused|Unused|Latitude|Longitude|Altitude|
    pub const VEHICLE_CMD_DO_SET_HOME: u16 = 179;

    /// Set a system parameter. Caution! Use of this command requires knowledge of the numeric enumeration value of the parameter. |Parameter number|Parameter value|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_SET_PARAMETER: u16 = 180;

    /// Set a relay to a condition. |Relay number|Setting (1=on, 0=off, others possible depending on system hardware)|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_SET_RELAY: u16 = 181;

    /// Cycle a relay on and off for a desired number of cycles with a desired period. |Relay number|Cycle count| Cycle time (decimal seconds)|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_REPEAT_RELAY: u16 = 182;

    /// Cycle a between its nominal setting and a desired PWM for a desired number of cycles with a desired period. |Servo number|[us] PWM rate (1000 to 2000 typical)|Cycle count|[s] Cycle time|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_REPEAT_SERVO: u16 = 184;

    /// Terminate flight immediately. |Flight termination activated if > 0.5|Unused|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_FLIGHTTERMINATION: u16 = 185;

    /// Set the vehicle to Loiter mode and change the altitude to specified value. |Altitude|Frame of new altitude|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_CHANGE_ALTITUDE: u16 = 186;

    /// Sets actuators (e.g. servos) to a desired value. |Actuator 1|Actuator 2|Actuator 3|Actuator 4|Actuator 5|Actuator 6|Index|
    pub const VEHICLE_CMD_DO_SET_ACTUATOR: u16 = 187;

    /// Mission command to perform a landing. This is used as a marker in a mission to tell the autopilot where a sequence of mission items that represents a landing starts. It may also be sent via a COMMAND_LONG to trigger a landing, in which case the nearest (geographically) landing sequence in the mission will be used. The Latitude/Longitude is optional, and may be set to 0/0 if not needed. If specified then it will be used to help find the closest landing sequence. |Unused|Unused|Unused|Unused|Latitude|Longitude|Unused|
    pub const VEHICLE_CMD_DO_LAND_START: u16 = 189;

    /// Mission command to safely abort an autonomous landing. | Altitude|Unused|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_GO_AROUND: u16 = 191;

    /// Reposition to specific WGS84 GPS position. |[m/s] Ground speed|Bitmask|[m] Loiter radius for planes|[deg] Yaw|Latitude|Longitude|Altitude|
    pub const VEHICLE_CMD_DO_REPOSITION: u16 = 192;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VEHICLE_CMD_DO_PAUSE_CONTINUE: u16 = 193;

    /// Sets the region of interest (ROI) to a location. This can then be used by the vehicles control system to control the vehicle attitude and the attitude of various sensors such as cameras. |Unused|Unused|Unused|Unused|Latitude|Longitude|Altitude|
    pub const VEHICLE_CMD_DO_SET_ROI_LOCATION: u16 = 195;

    /// Sets the region of interest (ROI) to be toward next waypoint, with optional pitch/roll/yaw offset. This can then be used by the vehicles control system to control the vehicle attitude and the attitude of various sensors such as cameras. |Unused|Unused|Unused|Unused|Pitch offset from next waypoint|Roll offset from next waypoint|Yaw offset from next waypoint|
    pub const VEHICLE_CMD_DO_SET_ROI_WPNEXT_OFFSET: u16 = 196;

    /// Cancels any previous ROI command returning the vehicle/sensors to default flight characteristics. This can then be used by the vehicles control system to control the vehicle attitude and the attitude of various sensors such as cameras. |Unused|Unused|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_SET_ROI_NONE: u16 = 197;

    /// Control onboard camera system. |Camera ID (-1 for all)|Transmission: 0: disabled, 1: enabled compressed, 2: enabled raw|Transmission mode: 0: video stream, >0: single images every n seconds (decimal seconds)|Recording: 0: disabled, 1: enabled compressed, 2: enabled raw|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_CONTROL_VIDEO: u16 = 200;

    /// Sets the region of interest (ROI) for a sensor set or the vehicle itself. This can then be used by the vehicles control system to control the vehicle attitude and the attitude of various sensors such as cameras. | Region of interest mode.|MISSION index/ target ID.|ROI index (allows a vehicle to manage multiple ROI's)|Unused|x the location of the fixed ROI (see MAV_FRAME)|y|z|
    pub const VEHICLE_CMD_DO_SET_ROI: u16 = 201;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VEHICLE_CMD_DO_DIGICAM_CONTROL: u16 = 203;

    /// Mission command to configure a camera or antenna mount. | Mount operation mode|Stabilize roll? (1 = yes, 0 = no)|Stabilize pitch? (1 = yes, 0 = no)|stabilize yaw? (1 = yes, 0 = no)|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_MOUNT_CONFIGURE: u16 = 204;

    /// Mission command to control a camera or antenna mount. |[deg] Pitch or lat, depending on mount mode.|[deg] Roll or lon depending on mount mode|[deg]/[m] Yaw or alt depending on mount mode|Unused|Unused|Unused|[@enum MAV_MOUNT_MODE]|
    pub const VEHICLE_CMD_DO_MOUNT_CONTROL: u16 = 205;

    /// Mission command to set TRIG_DIST for this flight. |[m] Camera trigger distance|[ms] Shutter integration time|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST: u16 = 206;

    /// Mission command to enable the geofence. |enable? (0=disable, 1=enable)|Unused|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_FENCE_ENABLE: u16 = 207;

    /// Mission command to trigger a parachute. |action [@enum PARACHUTE_ACTION] (0=disable, 1=enable, 2=release, for some systems see [@enum PARACHUTE_ACTION], not in general message set.)|Unused|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_PARACHUTE: u16 = 208;

    /// Motor test command. |Instance (@range 1, )|throttle type|throttle|timeout|Motor count|Test order|Unused|
    pub const VEHICLE_CMD_DO_MOTOR_TEST: u16 = 209;

    /// Change to/from inverted flight. |inverted (0=normal, 1=inverted)|Unused|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_INVERTED_FLIGHT: u16 = 210;

    /// Command to operate a gripper.
    pub const VEHICLE_CMD_DO_GRIPPER: u16 = 211;

    /// Enable autotune module. |1 to enable|Unused|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_AUTOTUNE_ENABLE: u16 = 212;

    /// Mission command to set TRIG_INTERVAL for this flight. | Camera trigger distance|Shutter integration time (ms)|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_SET_CAM_TRIGG_INTERVAL: u16 = 214;

    /// Mission command to control a camera or antenna mount, using a quaternion as reference. |q1 - quaternion param #1, w (1 in null-rotation)|q2 - quaternion param #2, x (0 in null-rotation)|q3 - quaternion param #3, y (0 in null-rotation)|q4 - quaternion param #4, z (0 in null-rotation)|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT: u16 = 220;

    /// Set id of master controller. |System ID|Component ID|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_GUIDED_MASTER: u16 = 221;

    /// Set limits for external control. |[s] Timeout - maximum time that external controller will be allowed to control vehicle. 0 means no timeout|[m] Absolute altitude min(AMSL) - if vehicle moves below this alt, the command will be aborted and the mission will continue. 0 means no lower altitude limit|[m] Absolute altitude max - if vehicle moves above this alt, the command will be aborted and the mission will continue. 0 means no upper altitude limit|[m] Horizontal move limit (AMSL) - if vehicle moves more than this distance from it's location at the moment the command was executed, the command will be aborted and the mission will continue. 0 means no horizontal altitude limit|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_GUIDED_LIMITS: u16 = 222;

    /// NOP - This command is only used to mark the upper limit of the DO commands in the enumeration. |Unused|Unused|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_LAST: u16 = 240;

    /// Trigger calibration. This command will be only accepted if in pre-flight mode. See MAVLink spec MAV_CMD_PREFLIGHT_CALIBRATION.
    pub const VEHICLE_CMD_PREFLIGHT_CALIBRATION: u16 = 241;

    /// Param value for VEHICLE_CMD_PREFLIGHT_CALIBRATION to start temperature calibration.
    pub const PREFLIGHT_CALIBRATION_TEMPERATURE_CALIBRATION: u16 = 3;

    /// Set sensor offsets. This command will be only accepted if in pre-flight mode. |Sensor to adjust the offsets for: 0: gyros, 1: accelerometer, 2: magnetometer, 3: barometer, 4: optical flow|X axis offset (or generic dimension 1), in the sensor's raw units|Y axis offset (or generic dimension 2), in the sensor's raw units|Z axis offset (or generic dimension 3), in the sensor's raw units|Generic dimension 4, in the sensor's raw units|Generic dimension 5, in the sensor's raw units|Generic dimension 6, in the sensor's raw units|
    pub const VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS: u16 = 242;

    /// UAVCAN configuration. If param 1 == 1 actuator mapping and direction assignment should be started.
    pub const VEHICLE_CMD_PREFLIGHT_UAVCAN: u16 = 243;

    /// Request storage of different parameter values and logs. This command will be only accepted if in pre-flight mode. |Parameter storage: 0: READ FROM FLASH/EEPROM, 1: WRITE CURRENT TO FLASH/EEPROM|Mission storage: 0: READ FROM FLASH/EEPROM, 1: WRITE CURRENT TO FLASH/EEPROM|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_PREFLIGHT_STORAGE: u16 = 245;

    /// Request the reboot or shutdown of system components. |0: Do nothing for autopilot, 1: Reboot autopilot, 2: Shutdown autopilot.|0: Do nothing for onboard computer, 1: Reboot onboard computer, 2: Shutdown onboard computer.|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN: u16 = 246;

    /// Mission command to set a Camera Auto Mount Pivoting Oblique Survey for this flight. |[m] Camera trigger distance|[ms] Shutter integration time|Camera minimum trigger interval|Number of positions|Roll|Pitch|Unused|
    pub const VEHICLE_CMD_OBLIQUE_SURVEY: u16 = 260;

    /// Enable the specified standard MAVLink mode. |MAV_STANDARD_MODE|
    pub const VEHICLE_CMD_DO_SET_STANDARD_MODE: u16 = 262;

    /// Command to ask information about a low level gimbal.
    pub const VEHICLE_CMD_GIMBAL_DEVICE_INFORMATION: u16 = 283;

    /// Start running a mission. |first_item: the first mission item to run|last_item: the last mission item to run (after this item is run, the mission ends)|
    pub const VEHICLE_CMD_MISSION_START: u16 = 300;

    /// Test groups of related actuators (e.g. all actuators contributing to roll torque). | Group|[@range -1,1] Value|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_ACTUATOR_GROUP_TEST: u16 = 309;

    /// Actuator testing command. |[@range -1,1] value| timeout|Unused|Unused|output function|
    pub const VEHICLE_CMD_ACTUATOR_TEST: u16 = 310;

    /// Actuator configuration command. |configuration|Unused|Unused|Unused|output function|
    pub const VEHICLE_CMD_CONFIGURE_ACTUATOR: u16 = 311;

    /// Request EEPROM data from an ESC. |ESC Index|Firmware Type|Unused|Unused|Unused|
    pub const VEHICLE_CMD_ESC_REQUEST_EEPROM: u16 = 312;

    /// Arms / Disarms a component. |1 to arm, 0 to disarm.
    pub const VEHICLE_CMD_COMPONENT_ARM_DISARM: u16 = 400;

    /// Instructs a target system to run pre-arm checks.
    pub const VEHICLE_CMD_RUN_PREARM_CHECKS: u16 = 401;

    /// Inject artificial failure for testing purposes.
    pub const VEHICLE_CMD_INJECT_FAILURE: u16 = 420;

    /// Starts receiver pairing. |0:Spektrum|0:Spektrum DSM2, 1:Spektrum DSMX|
    pub const VEHICLE_CMD_START_RX_PAIR: u16 = 500;

    /// Request to send a single instance of the specified message.
    pub const VEHICLE_CMD_REQUEST_MESSAGE: u16 = 512;

    /// Request camera information (CAMERA_INFORMATION). |0: No action 1: Request camera capabilities|Reserved (all remaining params)|Reserved (default:0)|Reserved (default:0)|Reserved (default:0)|Reserved (default:0)|Reserved (default:0)|
    pub const VEHICLE_CMD_REQUEST_CAMERA_INFORMATION: u16 = 521;

    /// Set camera capture mode (photo, video, etc.).
    pub const VEHICLE_CMD_SET_CAMERA_MODE: u16 = 530;

    /// Set camera zoom.
    pub const VEHICLE_CMD_SET_CAMERA_ZOOM: u16 = 531;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VEHICLE_CMD_SET_CAMERA_FOCUS: u16 = 532;

    /// Set an external estimate of vehicle attitude in degrees.
    pub const VEHICLE_CMD_EXTERNAL_ATTITUDE_ESTIMATE: u16 = 620;

    /// Setpoint to be sent to a gimbal manager to set a gimbal pitch and yaw.
    pub const VEHICLE_CMD_DO_GIMBAL_MANAGER_PITCHYAW: u16 = 1000;

    /// Gimbal configuration to set which sysid/compid is in primary and secondary control.
    pub const VEHICLE_CMD_DO_GIMBAL_MANAGER_CONFIGURE: u16 = 1001;

    /// Start image capture sequence.
    pub const VEHICLE_CMD_IMAGE_START_CAPTURE: u16 = 2000;

    /// Enable or disable on-board camera triggering system.
    pub const VEHICLE_CMD_DO_TRIGGER_CONTROL: u16 = 2003;

    /// Start a video capture.
    pub const VEHICLE_CMD_VIDEO_START_CAPTURE: u16 = 2500;

    /// Stop the current video capture.
    pub const VEHICLE_CMD_VIDEO_STOP_CAPTURE: u16 = 2501;

    /// Start streaming ULog data.
    pub const VEHICLE_CMD_LOGGING_START: u16 = 2510;

    /// Stop streaming ULog data.
    pub const VEHICLE_CMD_LOGGING_STOP: u16 = 2511;

    /// Control starting/stopping transmitting data over the high latency link.
    pub const VEHICLE_CMD_CONTROL_HIGH_LATENCY: u16 = 2600;

    /// Command VTOL transition.
    pub const VEHICLE_CMD_DO_VTOL_TRANSITION: u16 = 3000;

    /// Command safety on/off. |1 to activate safety, 0 to deactivate safety and allow control surface movements|Unused|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_DO_SET_SAFETY_SWITCH_STATE: u16 = 5300;

    /// Request arm authorization.
    pub const VEHICLE_CMD_ARM_AUTHORIZATION_REQUEST: u16 = 3001;

    /// Prepare a payload deployment in the flight plan.
    pub const VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY: u16 = 30001;

    /// Control a pre-programmed payload deployment.
    pub const VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY: u16 = 30002;

    /// Magnetometer calibration based on provided known yaw. This allows for fast calibration using WMM field tables in the vehicle, given only the known yaw of the vehicle. If Latitude and longitude are both zero then use the current vehicle location.
    pub const VEHICLE_CMD_FIXED_MAG_CAL_YAW: u16 = 42006;

    /// Command to operate winch.
    pub const VEHICLE_CMD_DO_WINCH: u16 = 42600;

    /// External reset of estimator global position when dead reckoning.
    pub const VEHICLE_CMD_EXTERNAL_POSITION_ESTIMATE: u16 = 43003;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VEHICLE_CMD_EXTERNAL_WIND_ESTIMATE: u16 = 43004;

    /// Enable/disable estimator sensor fusion. |Source (FUSION_SOURCE_*)|Sensor instance (0-based)|Enable (1) or Disable (0)|Estimator Instance (NaN: not used)|Empty|Empty|Empty|
    pub const VEHICLE_CMD_ESTIMATOR_SENSOR_ENABLE: u16 = 43006;

    /// Sensor fusion source types for VEHICLE_CMD_ESTIMATOR_SENSOR_ENABLE
    /// GNSS (EKF2_GPS{i}_CTRL, use instance param)
    pub const FUSION_SOURCE_GPS: u8 = 0;

    /// Optical Flow (EKF2_OF_CTRL)
    pub const FUSION_SOURCE_OF: u8 = 1;

    /// External Vision (EKF2_EV_CTRL)
    pub const FUSION_SOURCE_EV: u8 = 2;

    /// Auxiliary Global Position (EKF2_AGP{i}_CTRL, use instance param)
    pub const FUSION_SOURCE_AGP: u8 = 3;

    /// Barometer (EKF2_BARO_CTRL)
    pub const FUSION_SOURCE_BARO: u8 = 4;

    /// Range Finder (EKF2_RNG_CTRL)
    pub const FUSION_SOURCE_RNG: u8 = 5;

    /// Magnetometer (EKF2_MAG_TYPE)
    pub const FUSION_SOURCE_MAG: u8 = 6;

    /// Airspeed (EKF2_ARSP_THR)
    pub const FUSION_SOURCE_ASPD: u8 = 7;

    /// Ranging Beacon
    pub const FUSION_SOURCE_RNGBCN: u8 = 8;

    /// PX4 vehicle commands (beyond 16 bit MAVLink commands).
    /// Start of PX4 internal only vehicle commands (> UINT16_MAX).
    pub const VEHICLE_CMD_PX4_INTERNAL_START: u32 = 65537;

    /// Sets the GPS coordinates of the vehicle local origin (0,0,0) position. |Unused|Unused|Unused|Unused|Latitude (WGS-84)|Longitude (WGS-84)| Altitude (AMSL from GNSS, positive above ground)|
    pub const VEHICLE_CMD_SET_GPS_GLOBAL_ORIGIN: u32 = 100000;

    /// Change mode by specifying nav_state directly. |nav_state|Unused|Unused|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_SET_NAV_STATE: u32 = 100001;

    /// Change heading/course. param1: heading type (0=course-over-ground, 1=heading). param2: target [deg]. param3: max rate [deg/s]. |Heading type (HEADING_TYPE enum)|[deg] Target bearing [0..360]|[deg/s] Max rate of change|Unused|Unused|Unused|Unused|
    pub const VEHICLE_CMD_GUIDED_CHANGE_HEADING: u16 = 43002;

    /// Load and keep safe position (Roll,Pitch,Yaw) from permanent memory and stop stabilization.
    pub const VEHICLE_MOUNT_MODE_RETRACT: u8 = 0;

    /// Load and keep neutral position (Roll,Pitch,Yaw) from permanent memory.
    pub const VEHICLE_MOUNT_MODE_NEUTRAL: u8 = 1;

    /// Load neutral position and start MAVLink Roll,Pitch,Yaw control with stabilization.
    pub const VEHICLE_MOUNT_MODE_MAVLINK_TARGETING: u8 = 2;

    /// Load neutral position and start RC Roll,Pitch,Yaw control with stabilization.
    pub const VEHICLE_MOUNT_MODE_RC_TARGETING: u8 = 3;

    /// Load neutral position and start to point to Lat,Lon,Alt.
    pub const VEHICLE_MOUNT_MODE_GPS_POINT: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VEHICLE_MOUNT_MODE_ENUM_END: u8 = 5;

    /// No region of interest.
    pub const VEHICLE_ROI_NONE: u8 = 0;

    /// Point toward next MISSION.
    pub const VEHICLE_ROI_WPNEXT: u8 = 1;

    /// Point toward given MISSION.
    pub const VEHICLE_ROI_WPINDEX: u8 = 2;

    /// Point toward fixed location.
    pub const VEHICLE_ROI_LOCATION: u8 = 3;

    /// Point toward target.
    pub const VEHICLE_ROI_TARGET: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VEHICLE_ROI_ENUM_END: u8 = 5;

    /// Do nothing.
    pub const ACTUATOR_CONFIGURATION_NONE: u8 = 0;

    /// Command the actuator to beep now.
    pub const ACTUATOR_CONFIGURATION_BEEP: u8 = 1;

    /// Permanently set the actuator (ESC) to 3D mode (reversible thrust).
    pub const ACTUATOR_CONFIGURATION_3D_MODE_ON: u8 = 2;

    /// Permanently set the actuator (ESC) to non 3D mode (non-reversible thrust).
    pub const ACTUATOR_CONFIGURATION_3D_MODE_OFF: u8 = 3;

    /// Permanently set the actuator (ESC) to spin direction 1 (which can be clockwise or counter-clockwise).
    pub const ACTUATOR_CONFIGURATION_SPIN_DIRECTION1: u8 = 4;

    /// Permanently set the actuator (ESC) to spin direction 2 (opposite of direction 1).
    pub const ACTUATOR_CONFIGURATION_SPIN_DIRECTION2: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PARACHUTE_ACTION_DISABLE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PARACHUTE_ACTION_ENABLE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PARACHUTE_ACTION_RELEASE: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_UNIT_SENSOR_GYRO: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_UNIT_SENSOR_ACCEL: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_UNIT_SENSOR_MAG: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_UNIT_SENSOR_BARO: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_UNIT_SENSOR_GPS: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_UNIT_SENSOR_OPTICAL_FLOW: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_UNIT_SENSOR_VIO: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_UNIT_SENSOR_DISTANCE_SENSOR: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_UNIT_SENSOR_AIRSPEED: u8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_UNIT_SYSTEM_BATTERY: u8 = 100;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_UNIT_SYSTEM_MOTOR: u8 = 101;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_UNIT_SYSTEM_SERVO: u8 = 102;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_UNIT_SYSTEM_AVOIDANCE: u8 = 103;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_UNIT_SYSTEM_RC_SIGNAL: u8 = 104;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL: u8 = 105;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_TYPE_OK: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_TYPE_OFF: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_TYPE_STUCK: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_TYPE_GARBAGE: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_TYPE_WRONG: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_TYPE_SLOW: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_TYPE_DELAYED: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILURE_TYPE_INTERMITTENT: u8 = 7;

    /// Used as param1 in DO_CHANGE_SPEED command.
    pub const SPEED_TYPE_AIRSPEED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SPEED_TYPE_GROUNDSPEED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SPEED_TYPE_CLIMB_SPEED: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SPEED_TYPE_DESCEND_SPEED: u8 = 3;

    /// Used as param3 in CMD_DO_ORBIT.
    pub const ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORBIT_YAW_BEHAVIOUR_UNCONTROLLED: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORBIT_YAW_BEHAVIOUR_UNCHANGED: u8 = 5;

    /// Used as param1&2 in CMD_START_RX_PAIR.
    pub const RC_TYPE_SPEKTRUM: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RC_TYPE_CRSF: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RC_SUB_TYPE_SPEKTRUM_DSM2: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RC_SUB_TYPE_SPEKTRUM_DSMX: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RC_SUB_TYPE_SPEKTRUM_DSMX8: u8 = 2;

    /// Used as param1 in ARM_DISARM command.
    pub const ARMING_ACTION_DISARM: i8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ARMING_ACTION_ARM: i8 = 1;

    /// param2 in VEHICLE_CMD_DO_GRIPPER.
    pub const GRIPPER_ACTION_RELEASE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GRIPPER_ACTION_GRAB: u8 = 1;

    /// Used as param1 in DO_SET_SAFETY_SWITCH_STATE command.
    pub const SAFETY_OFF: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SAFETY_ON: u8 = 1;

    /// param1 in VEHICLE_CMD_ACTUATOR_GROUP_TEST (matches MAVLink ACTUATOR_TEST_GROUP enum)
    pub const ACTUATOR_TEST_GROUP_ROLL_TORQUE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTUATOR_TEST_GROUP_PITCH_TORQUE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTUATOR_TEST_GROUP_YAW_TORQUE: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTUATOR_TEST_GROUP_COLLECTIVE_TILT: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTUATOR_TEST_GROUP_X_THRUST: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTUATOR_TEST_GROUP_Y_THRUST: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTUATOR_TEST_GROUP_Z_THRUST: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMPONENT_MODE_EXECUTOR_START: u16 = 1000;

}


impl Default for VehicleCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleCommand::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleCommand {
  type RmwMsg = super::msg::rmw::VehicleCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        param1: msg.param1,
        param2: msg.param2,
        param3: msg.param3,
        param4: msg.param4,
        param5: msg.param5,
        param6: msg.param6,
        param7: msg.param7,
        command: msg.command,
        target_system: msg.target_system,
        target_component: msg.target_component,
        source_system: msg.source_system,
        source_component: msg.source_component,
        confirmation: msg.confirmation,
        from_external: msg.from_external,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      param1: msg.param1,
      param2: msg.param2,
      param3: msg.param3,
      param4: msg.param4,
      param5: msg.param5,
      param6: msg.param6,
      param7: msg.param7,
      command: msg.command,
      target_system: msg.target_system,
      target_component: msg.target_component,
      source_system: msg.source_system,
      source_component: msg.source_component,
      confirmation: msg.confirmation,
      from_external: msg.from_external,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      param1: msg.param1,
      param2: msg.param2,
      param3: msg.param3,
      param4: msg.param4,
      param5: msg.param5,
      param6: msg.param6,
      param7: msg.param7,
      command: msg.command,
      target_system: msg.target_system,
      target_component: msg.target_component,
      source_system: msg.source_system,
      source_component: msg.source_component,
      confirmation: msg.confirmation,
      from_external: msg.from_external,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleCommandAck
/// Vehicle Command Acknowledgement uORB message.
///
/// Used for acknowledging the vehicle command being received.
/// Follows the MAVLink COMMAND_ACK message definition

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleCommandAck {
    /// time since system start
    pub timestamp: u64,

    /// Command that is being acknowledged
    pub command: u32,

    /// Command result
    pub result: u8,

    /// Can be set with the reason why the command was denied, or the progress percentage when result is MAV_RESULT_IN_PROGRESS (%)
    pub result_param1: u8,

    /// Additional parameter of the result, example: which parameter of MAV_CMD_NAV_WAYPOINT caused it to be denied, or what ARM_AUTH_DENIED_REASON
    pub result_param2: i32,

    /// Target system
    pub target_system: u8,

    /// Target component / mode executor
    pub target_component: u16,

    /// Indicates if the command came from an external source
    pub from_external: bool,

}

impl VehicleCommandAck {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ORB_QUEUE_LENGTH: u8 = 8;

    /// VEHICLE_CMD_RESULT Result cases. Follows the MAVLink MAV_RESULT enum definition
    /// Command ACCEPTED and EXECUTED
    pub const VEHICLE_CMD_RESULT_ACCEPTED: u8 = 0;

    /// Command TEMPORARY REJECTED/DENIED
    pub const VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED: u8 = 1;

    /// Command PERMANENTLY DENIED
    pub const VEHICLE_CMD_RESULT_DENIED: u8 = 2;

    /// Command UNKNOWN/UNSUPPORTED
    pub const VEHICLE_CMD_RESULT_UNSUPPORTED: u8 = 3;

    /// Command executed, but failed
    pub const VEHICLE_CMD_RESULT_FAILED: u8 = 4;

    /// Command being executed
    pub const VEHICLE_CMD_RESULT_IN_PROGRESS: u8 = 5;

    /// Command Canceled
    pub const VEHICLE_CMD_RESULT_CANCELLED: u8 = 6;

    /// Command is only accepted when sent as a COMMAND_LONG
    pub const VEHICLE_CMD_RESULT_COMMAND_LONG_ONLY: u8 = 7;

    /// Command is only accepted when sent as a COMMAND_INT
    pub const VEHICLE_CMD_RESULT_COMMAND_INT_ONLY: u8 = 8;

    /// Command does not support specified frame
    pub const VEHICLE_CMD_RESULT_UNSUPPORTED_MAV_FRAME: u8 = 9;

    /// Arming denied specific cases
    pub const ARM_AUTH_DENIED_REASON_GENERIC: u16 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ARM_AUTH_DENIED_REASON_NONE: u16 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ARM_AUTH_DENIED_REASON_INVALID_WAYPOINT: u16 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ARM_AUTH_DENIED_REASON_TIMEOUT: u16 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ARM_AUTH_DENIED_REASON_AIRSPACE_IN_USE: u16 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ARM_AUTH_DENIED_REASON_BAD_WEATHER: u16 = 5;

}


impl Default for VehicleCommandAck {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleCommandAck::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleCommandAck {
  type RmwMsg = super::msg::rmw::VehicleCommandAck;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        command: msg.command,
        result: msg.result,
        result_param1: msg.result_param1,
        result_param2: msg.result_param2,
        target_system: msg.target_system,
        target_component: msg.target_component,
        from_external: msg.from_external,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      command: msg.command,
      result: msg.result,
      result_param1: msg.result_param1,
      result_param2: msg.result_param2,
      target_system: msg.target_system,
      target_component: msg.target_component,
      from_external: msg.from_external,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      command: msg.command,
      result: msg.result,
      result_param1: msg.result_param1,
      result_param2: msg.result_param2,
      target_system: msg.target_system,
      target_component: msg.target_component,
      from_external: msg.from_external,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleConstraints
/// Local setpoint constraints in NED frame
/// setting something to NaN means that no limit is provided

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleConstraints {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// in meters/sec
    pub speed_up: f32,

    /// in meters/sec
    pub speed_down: f32,

    /// tell the controller to initiate takeoff when idling (ignored during flight)
    pub want_takeoff: bool,

}



impl Default for VehicleConstraints {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleConstraints::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleConstraints {
  type RmwMsg = super::msg::rmw::VehicleConstraints;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        speed_up: msg.speed_up,
        speed_down: msg.speed_down,
        want_takeoff: msg.want_takeoff,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      speed_up: msg.speed_up,
      speed_down: msg.speed_down,
      want_takeoff: msg.want_takeoff,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      speed_up: msg.speed_up,
      speed_down: msg.speed_down,
      want_takeoff: msg.want_takeoff,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleControlMode

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleControlMode {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// synonym for actuator_armed.armed
    pub flag_armed: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flag_multicopter_position_control_enabled: bool,

    /// true if manual input is mixed in
    pub flag_control_manual_enabled: bool,

    /// true if onboard autopilot should act
    pub flag_control_auto_enabled: bool,

    /// true if offboard control should be used
    pub flag_control_offboard_enabled: bool,

    /// true if position is controlled
    pub flag_control_position_enabled: bool,

    /// true if horizontal velocity (implies direction) is controlled
    pub flag_control_velocity_enabled: bool,

    /// true if altitude is controlled
    pub flag_control_altitude_enabled: bool,

    /// true if climb rate is controlled
    pub flag_control_climb_rate_enabled: bool,

    /// true if acceleration is controlled
    pub flag_control_acceleration_enabled: bool,

    /// true if attitude stabilization is mixed in
    pub flag_control_attitude_enabled: bool,

    /// true if rates are stabilized
    pub flag_control_rates_enabled: bool,

    /// true if control allocation is enabled
    pub flag_control_allocation_enabled: bool,

    /// true if flighttermination is enabled
    pub flag_control_termination_enabled: bool,

    /// TODO: use dedicated topic for external requests
    /// Mode ID (nav_state)
    pub source_id: u8,

}

impl VehicleControlMode {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 0;

}


impl Default for VehicleControlMode {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleControlMode::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleControlMode {
  type RmwMsg = super::msg::rmw::VehicleControlMode;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        flag_armed: msg.flag_armed,
        flag_multicopter_position_control_enabled: msg.flag_multicopter_position_control_enabled,
        flag_control_manual_enabled: msg.flag_control_manual_enabled,
        flag_control_auto_enabled: msg.flag_control_auto_enabled,
        flag_control_offboard_enabled: msg.flag_control_offboard_enabled,
        flag_control_position_enabled: msg.flag_control_position_enabled,
        flag_control_velocity_enabled: msg.flag_control_velocity_enabled,
        flag_control_altitude_enabled: msg.flag_control_altitude_enabled,
        flag_control_climb_rate_enabled: msg.flag_control_climb_rate_enabled,
        flag_control_acceleration_enabled: msg.flag_control_acceleration_enabled,
        flag_control_attitude_enabled: msg.flag_control_attitude_enabled,
        flag_control_rates_enabled: msg.flag_control_rates_enabled,
        flag_control_allocation_enabled: msg.flag_control_allocation_enabled,
        flag_control_termination_enabled: msg.flag_control_termination_enabled,
        source_id: msg.source_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      flag_armed: msg.flag_armed,
      flag_multicopter_position_control_enabled: msg.flag_multicopter_position_control_enabled,
      flag_control_manual_enabled: msg.flag_control_manual_enabled,
      flag_control_auto_enabled: msg.flag_control_auto_enabled,
      flag_control_offboard_enabled: msg.flag_control_offboard_enabled,
      flag_control_position_enabled: msg.flag_control_position_enabled,
      flag_control_velocity_enabled: msg.flag_control_velocity_enabled,
      flag_control_altitude_enabled: msg.flag_control_altitude_enabled,
      flag_control_climb_rate_enabled: msg.flag_control_climb_rate_enabled,
      flag_control_acceleration_enabled: msg.flag_control_acceleration_enabled,
      flag_control_attitude_enabled: msg.flag_control_attitude_enabled,
      flag_control_rates_enabled: msg.flag_control_rates_enabled,
      flag_control_allocation_enabled: msg.flag_control_allocation_enabled,
      flag_control_termination_enabled: msg.flag_control_termination_enabled,
      source_id: msg.source_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      flag_armed: msg.flag_armed,
      flag_multicopter_position_control_enabled: msg.flag_multicopter_position_control_enabled,
      flag_control_manual_enabled: msg.flag_control_manual_enabled,
      flag_control_auto_enabled: msg.flag_control_auto_enabled,
      flag_control_offboard_enabled: msg.flag_control_offboard_enabled,
      flag_control_position_enabled: msg.flag_control_position_enabled,
      flag_control_velocity_enabled: msg.flag_control_velocity_enabled,
      flag_control_altitude_enabled: msg.flag_control_altitude_enabled,
      flag_control_climb_rate_enabled: msg.flag_control_climb_rate_enabled,
      flag_control_acceleration_enabled: msg.flag_control_acceleration_enabled,
      flag_control_attitude_enabled: msg.flag_control_attitude_enabled,
      flag_control_rates_enabled: msg.flag_control_rates_enabled,
      flag_control_allocation_enabled: msg.flag_control_allocation_enabled,
      flag_control_termination_enabled: msg.flag_control_termination_enabled,
      source_id: msg.source_id,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleGlobalPosition
/// Fused global position in WGS84.
/// This struct contains global position estimation. It is not the raw GPS
/// measurement (@see vehicle_gps_position). This topic is usually published by the position
/// estimator, which will take more sources of information into account than just GPS,
/// e.g. control inputs of the vehicle in a Kalman-filter implementation.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleGlobalPosition {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp of the raw data (microseconds)
    pub timestamp_sample: u64,

    /// Latitude, (degrees)
    pub lat: f64,

    /// Longitude, (degrees)
    pub lon: f64,

    /// Altitude AMSL, (meters)
    pub alt: f32,

    /// Altitude above ellipsoid, (meters)
    pub alt_ellipsoid: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lat_lon_valid: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub alt_valid: bool,

    /// Reset delta for altitude
    pub delta_alt: f32,

    /// Reset delta for terrain
    pub delta_terrain: f32,

    /// Counter for reset events on horizontal position coordinates
    pub lat_lon_reset_counter: u8,

    /// Counter for reset events on altitude
    pub alt_reset_counter: u8,

    /// Counter for reset events on terrain
    pub terrain_reset_counter: u8,

    /// Standard deviation of horizontal position error, (metres)
    pub eph: f32,

    /// Standard deviation of vertical position error, (metres)
    pub epv: f32,

    /// Terrain altitude WGS84, (metres)
    pub terrain_alt: f32,

    /// Terrain altitude estimate is valid
    pub terrain_alt_valid: bool,

    /// True if this position is estimated through dead-reckoning
    pub dead_reckoning: bool,

}

impl VehicleGlobalPosition {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 0;

}


impl Default for VehicleGlobalPosition {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleGlobalPosition::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleGlobalPosition {
  type RmwMsg = super::msg::rmw::VehicleGlobalPosition;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        lat: msg.lat,
        lon: msg.lon,
        alt: msg.alt,
        alt_ellipsoid: msg.alt_ellipsoid,
        lat_lon_valid: msg.lat_lon_valid,
        alt_valid: msg.alt_valid,
        delta_alt: msg.delta_alt,
        delta_terrain: msg.delta_terrain,
        lat_lon_reset_counter: msg.lat_lon_reset_counter,
        alt_reset_counter: msg.alt_reset_counter,
        terrain_reset_counter: msg.terrain_reset_counter,
        eph: msg.eph,
        epv: msg.epv,
        terrain_alt: msg.terrain_alt,
        terrain_alt_valid: msg.terrain_alt_valid,
        dead_reckoning: msg.dead_reckoning,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      lat: msg.lat,
      lon: msg.lon,
      alt: msg.alt,
      alt_ellipsoid: msg.alt_ellipsoid,
      lat_lon_valid: msg.lat_lon_valid,
      alt_valid: msg.alt_valid,
      delta_alt: msg.delta_alt,
      delta_terrain: msg.delta_terrain,
      lat_lon_reset_counter: msg.lat_lon_reset_counter,
      alt_reset_counter: msg.alt_reset_counter,
      terrain_reset_counter: msg.terrain_reset_counter,
      eph: msg.eph,
      epv: msg.epv,
      terrain_alt: msg.terrain_alt,
      terrain_alt_valid: msg.terrain_alt_valid,
      dead_reckoning: msg.dead_reckoning,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      lat: msg.lat,
      lon: msg.lon,
      alt: msg.alt,
      alt_ellipsoid: msg.alt_ellipsoid,
      lat_lon_valid: msg.lat_lon_valid,
      alt_valid: msg.alt_valid,
      delta_alt: msg.delta_alt,
      delta_terrain: msg.delta_terrain,
      lat_lon_reset_counter: msg.lat_lon_reset_counter,
      alt_reset_counter: msg.alt_reset_counter,
      terrain_reset_counter: msg.terrain_reset_counter,
      eph: msg.eph,
      epv: msg.epv,
      terrain_alt: msg.terrain_alt,
      terrain_alt_valid: msg.terrain_alt_valid,
      dead_reckoning: msg.dead_reckoning,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleImu
/// IMU readings in SI-unit form.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleImu {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp_sample: u64,

    /// Accelerometer unique device ID for the sensor that does not change between power cycles
    pub accel_device_id: u32,

    /// Gyroscope unique device ID for the sensor that does not change between power cycles
    pub gyro_device_id: u32,

    /// delta angle about the FRD body frame XYZ-axis in rad over the integration time frame (delta_angle_dt)
    pub delta_angle: [f32; 3],

    /// delta velocity in the FRD body frame XYZ-axis in m/s over the integration time frame (delta_velocity_dt)
    pub delta_velocity: [f32; 3],

    /// integration period in microseconds
    pub delta_angle_dt: u32,

    /// integration period in microseconds
    pub delta_velocity_dt: u32,

    /// bitfield indicating if there was any gyro clipping (per axis) during the integration time frame
    pub delta_angle_clipping: u8,

    /// bitfield indicating if there was any accelerometer clipping (per axis) during the integration time frame
    pub delta_velocity_clipping: u8,

    /// Calibration changed counter. Monotonically increases whenever accelermeter calibration changes.
    pub accel_calibration_count: u8,

    /// Calibration changed counter. Monotonically increases whenever rate gyro calibration changes.
    pub gyro_calibration_count: u8,

}

impl VehicleImu {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CLIPPING_X: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CLIPPING_Y: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CLIPPING_Z: u8 = 4;

}


impl Default for VehicleImu {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleImu::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleImu {
  type RmwMsg = super::msg::rmw::VehicleImu;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        accel_device_id: msg.accel_device_id,
        gyro_device_id: msg.gyro_device_id,
        delta_angle: msg.delta_angle,
        delta_velocity: msg.delta_velocity,
        delta_angle_dt: msg.delta_angle_dt,
        delta_velocity_dt: msg.delta_velocity_dt,
        delta_angle_clipping: msg.delta_angle_clipping,
        delta_velocity_clipping: msg.delta_velocity_clipping,
        accel_calibration_count: msg.accel_calibration_count,
        gyro_calibration_count: msg.gyro_calibration_count,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      accel_device_id: msg.accel_device_id,
      gyro_device_id: msg.gyro_device_id,
        delta_angle: msg.delta_angle,
        delta_velocity: msg.delta_velocity,
      delta_angle_dt: msg.delta_angle_dt,
      delta_velocity_dt: msg.delta_velocity_dt,
      delta_angle_clipping: msg.delta_angle_clipping,
      delta_velocity_clipping: msg.delta_velocity_clipping,
      accel_calibration_count: msg.accel_calibration_count,
      gyro_calibration_count: msg.gyro_calibration_count,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      accel_device_id: msg.accel_device_id,
      gyro_device_id: msg.gyro_device_id,
      delta_angle: msg.delta_angle,
      delta_velocity: msg.delta_velocity,
      delta_angle_dt: msg.delta_angle_dt,
      delta_velocity_dt: msg.delta_velocity_dt,
      delta_angle_clipping: msg.delta_angle_clipping,
      delta_velocity_clipping: msg.delta_velocity_clipping,
      accel_calibration_count: msg.accel_calibration_count,
      gyro_calibration_count: msg.gyro_calibration_count,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleImuStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleImuStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// unique device ID for the sensor that does not change between power cycles
    pub accel_device_id: u32,

    /// unique device ID for the sensor that does not change between power cycles
    pub gyro_device_id: u32,

    /// total clipping per axis
    pub accel_clipping: [u32; 3],

    /// total clipping per axis
    pub gyro_clipping: [u32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub accel_error_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_error_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub accel_rate_hz: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_rate_hz: f32,

    /// full raw sensor sample rate (Hz)
    pub accel_raw_rate_hz: f32,

    /// full raw sensor sample rate (Hz)
    pub gyro_raw_rate_hz: f32,

    /// high frequency vibration level in the accelerometer data (m/s/s)
    pub accel_vibration_metric: f32,

    /// high frequency vibration level in the gyro data (rad/s)
    pub gyro_vibration_metric: f32,

    /// average IMU delta angle coning correction (rad^2)
    pub delta_angle_coning_metric: f32,

    /// average accelerometer readings since last publication
    pub mean_accel: [f32; 3],

    /// average gyroscope readings since last publication
    pub mean_gyro: [f32; 3],

    /// accelerometer variance since last publication
    pub var_accel: [f32; 3],

    /// gyroscope variance since last publication
    pub var_gyro: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature_accel: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature_gyro: f32,

}



impl Default for VehicleImuStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleImuStatus::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleImuStatus {
  type RmwMsg = super::msg::rmw::VehicleImuStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        accel_device_id: msg.accel_device_id,
        gyro_device_id: msg.gyro_device_id,
        accel_clipping: msg.accel_clipping,
        gyro_clipping: msg.gyro_clipping,
        accel_error_count: msg.accel_error_count,
        gyro_error_count: msg.gyro_error_count,
        accel_rate_hz: msg.accel_rate_hz,
        gyro_rate_hz: msg.gyro_rate_hz,
        accel_raw_rate_hz: msg.accel_raw_rate_hz,
        gyro_raw_rate_hz: msg.gyro_raw_rate_hz,
        accel_vibration_metric: msg.accel_vibration_metric,
        gyro_vibration_metric: msg.gyro_vibration_metric,
        delta_angle_coning_metric: msg.delta_angle_coning_metric,
        mean_accel: msg.mean_accel,
        mean_gyro: msg.mean_gyro,
        var_accel: msg.var_accel,
        var_gyro: msg.var_gyro,
        temperature_accel: msg.temperature_accel,
        temperature_gyro: msg.temperature_gyro,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      accel_device_id: msg.accel_device_id,
      gyro_device_id: msg.gyro_device_id,
        accel_clipping: msg.accel_clipping,
        gyro_clipping: msg.gyro_clipping,
      accel_error_count: msg.accel_error_count,
      gyro_error_count: msg.gyro_error_count,
      accel_rate_hz: msg.accel_rate_hz,
      gyro_rate_hz: msg.gyro_rate_hz,
      accel_raw_rate_hz: msg.accel_raw_rate_hz,
      gyro_raw_rate_hz: msg.gyro_raw_rate_hz,
      accel_vibration_metric: msg.accel_vibration_metric,
      gyro_vibration_metric: msg.gyro_vibration_metric,
      delta_angle_coning_metric: msg.delta_angle_coning_metric,
        mean_accel: msg.mean_accel,
        mean_gyro: msg.mean_gyro,
        var_accel: msg.var_accel,
        var_gyro: msg.var_gyro,
      temperature_accel: msg.temperature_accel,
      temperature_gyro: msg.temperature_gyro,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      accel_device_id: msg.accel_device_id,
      gyro_device_id: msg.gyro_device_id,
      accel_clipping: msg.accel_clipping,
      gyro_clipping: msg.gyro_clipping,
      accel_error_count: msg.accel_error_count,
      gyro_error_count: msg.gyro_error_count,
      accel_rate_hz: msg.accel_rate_hz,
      gyro_rate_hz: msg.gyro_rate_hz,
      accel_raw_rate_hz: msg.accel_raw_rate_hz,
      gyro_raw_rate_hz: msg.gyro_raw_rate_hz,
      accel_vibration_metric: msg.accel_vibration_metric,
      gyro_vibration_metric: msg.gyro_vibration_metric,
      delta_angle_coning_metric: msg.delta_angle_coning_metric,
      mean_accel: msg.mean_accel,
      mean_gyro: msg.mean_gyro,
      var_accel: msg.var_accel,
      var_gyro: msg.var_gyro,
      temperature_accel: msg.temperature_accel,
      temperature_gyro: msg.temperature_gyro,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleLandDetected

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleLandDetected {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// true if vehicle is currently in free-fall
    pub freefall: bool,

    /// true if vehicle has ground contact but is not landed (1. stage)
    pub ground_contact: bool,

    /// true if the vehicle might have landed (2. stage)
    pub maybe_landed: bool,

    /// true if vehicle is currently landed on the ground (3. stage)
    pub landed: bool,

    /// indicates if from the perspective of the landing detector the vehicle might be in ground effect (baro). This flag will become true if the vehicle is not moving horizontally and is descending (crude assumption that user is landing).
    pub in_ground_effect: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub in_descend: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub has_low_throttle: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vertical_movement: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub horizontal_movement: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rotational_movement: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub close_to_ground_or_skipped_check: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub at_rest: bool,

}

impl VehicleLandDetected {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 0;

}


impl Default for VehicleLandDetected {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleLandDetected::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleLandDetected {
  type RmwMsg = super::msg::rmw::VehicleLandDetected;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        freefall: msg.freefall,
        ground_contact: msg.ground_contact,
        maybe_landed: msg.maybe_landed,
        landed: msg.landed,
        in_ground_effect: msg.in_ground_effect,
        in_descend: msg.in_descend,
        has_low_throttle: msg.has_low_throttle,
        vertical_movement: msg.vertical_movement,
        horizontal_movement: msg.horizontal_movement,
        rotational_movement: msg.rotational_movement,
        close_to_ground_or_skipped_check: msg.close_to_ground_or_skipped_check,
        at_rest: msg.at_rest,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      freefall: msg.freefall,
      ground_contact: msg.ground_contact,
      maybe_landed: msg.maybe_landed,
      landed: msg.landed,
      in_ground_effect: msg.in_ground_effect,
      in_descend: msg.in_descend,
      has_low_throttle: msg.has_low_throttle,
      vertical_movement: msg.vertical_movement,
      horizontal_movement: msg.horizontal_movement,
      rotational_movement: msg.rotational_movement,
      close_to_ground_or_skipped_check: msg.close_to_ground_or_skipped_check,
      at_rest: msg.at_rest,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      freefall: msg.freefall,
      ground_contact: msg.ground_contact,
      maybe_landed: msg.maybe_landed,
      landed: msg.landed,
      in_ground_effect: msg.in_ground_effect,
      in_descend: msg.in_descend,
      has_low_throttle: msg.has_low_throttle,
      vertical_movement: msg.vertical_movement,
      horizontal_movement: msg.horizontal_movement,
      rotational_movement: msg.rotational_movement,
      close_to_ground_or_skipped_check: msg.close_to_ground_or_skipped_check,
      at_rest: msg.at_rest,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleLocalPosition
/// Fused local position in NED.
/// The coordinate system origin is the vehicle position at the time when the EKF2-module was started.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleLocalPosition {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp of the raw data (microseconds)
    pub timestamp_sample: u64,

    /// true if x and y are valid
    pub xy_valid: bool,

    /// true if z is valid
    pub z_valid: bool,

    /// true if vx and vy are valid
    pub v_xy_valid: bool,

    /// true if vz is valid
    pub v_z_valid: bool,

    /// Position in local NED frame
    /// North position in NED earth-fixed frame, (metres)
    pub x: f32,

    /// East position in NED earth-fixed frame, (metres)
    pub y: f32,

    /// Down position (negative altitude) in NED earth-fixed frame, (metres)
    pub z: f32,

    /// Position reset delta
    /// Amount of lateral shift of position estimate in latest reset (in x and y)
    pub delta_xy: [f32; 2],

    /// Index of latest lateral position estimate reset
    pub xy_reset_counter: u8,

    /// Amount of vertical shift of position estimate in latest reset
    pub delta_z: f32,

    /// Index of latest vertical position estimate reset
    pub z_reset_counter: u8,

    /// Velocity in NED frame
    /// North velocity in NED earth-fixed frame, (metres/sec)
    pub vx: f32,

    /// East velocity in NED earth-fixed frame, (metres/sec)
    pub vy: f32,

    /// Down velocity in NED earth-fixed frame, (metres/sec)
    pub vz: f32,

    /// Down position time derivative in NED earth-fixed frame, (metres/sec)
    pub z_deriv: f32,

    /// Velocity reset delta
    /// Amount of lateral shift of velocity estimate in latest reset (in x and y)
    pub delta_vxy: [f32; 2],

    /// Index of latest vertical velocity estimate reset
    pub vxy_reset_counter: u8,

    /// Amount of vertical shift of velocity estimate in latest reset
    pub delta_vz: f32,

    /// Index of latest vertical velocity estimate reset
    pub vz_reset_counter: u8,

    /// Acceleration in NED frame
    /// North velocity derivative in NED earth-fixed frame, (metres/sec^2)
    pub ax: f32,

    /// East velocity derivative in NED earth-fixed frame, (metres/sec^2)
    pub ay: f32,

    /// Down velocity derivative in NED earth-fixed frame, (metres/sec^2)
    pub az: f32,

    /// Euler yaw angle transforming the tangent plane relative to NED earth-fixed frame, -PI..+PI,  (radians)
    pub heading: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub heading_var: f32,

    /// Same as heading but generated by integrating corrected gyro data only
    pub unaided_heading: f32,

    /// Heading delta caused by latest heading reset
    pub delta_heading: f32,

    /// Index of latest heading reset
    pub heading_reset_counter: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub heading_good_for_control: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tilt_var: f32,

    /// Position of reference point (local NED frame origin) in global (GPS / WGS84) frame
    /// true if position (x, y) has a valid global reference (ref_lat, ref_lon)
    pub xy_global: bool,

    /// true if z has a valid global reference (ref_alt)
    pub z_global: bool,

    /// Time when reference position was set since system start, (microseconds)
    pub ref_timestamp: u64,

    /// Reference point latitude, (degrees)
    pub ref_lat: f64,

    /// Reference point longitude, (degrees)
    pub ref_lon: f64,

    /// Reference altitude AMSL, (metres)
    pub ref_alt: f32,

    /// Distance to surface
    /// true if distance to bottom surface is valid
    pub dist_bottom_valid: bool,

    /// Distance from from bottom surface to ground, (metres)
    pub dist_bottom: f32,

    /// height above ground estimate variance (m^2)
    pub dist_bottom_var: f32,

    /// Amount of vertical shift of dist bottom estimate in latest reset
    pub delta_dist_bottom: f32,

    /// Index of latest dist bottom estimate reset
    pub dist_bottom_reset_counter: u8,

    /// bitfield indicating what type of sensor is used to estimate dist_bottom
    pub dist_bottom_sensor_bitfield: u8,

    /// Standard deviation of horizontal position error, (metres)
    pub eph: f32,

    /// Standard deviation of vertical position error, (metres)
    pub epv: f32,

    /// Standard deviation of horizontal velocity error, (metres/sec)
    pub evh: f32,

    /// Standard deviation of vertical velocity error, (metres/sec)
    pub evv: f32,

    /// True if this position is estimated through dead-reckoning
    pub dead_reckoning: bool,

    /// estimator specified vehicle limits
    /// set to INFINITY when limiting not required
    /// maximum horizontal speed (meters/sec)
    pub vxy_max: f32,

    /// maximum vertical speed (meters/sec)
    pub vz_max: f32,

    /// minimum height above ground level (meters)
    pub hagl_min: f32,

    /// maximum height above ground level for z-control (meters)
    pub hagl_max_z: f32,

    /// maximum height above ground level for xy-control (meters)
    pub hagl_max_xy: f32,

}

impl VehicleLocalPosition {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DIST_BOTTOM_SENSOR_NONE: u8 = 0;

    /// (1 << 0) a range sensor is used to estimate dist_bottom field
    pub const DIST_BOTTOM_SENSOR_RANGE: u8 = 1;

    /// (1 << 1) a flow sensor is used to estimate dist_bottom field (mostly fixed-wing use case)
    pub const DIST_BOTTOM_SENSOR_FLOW: u8 = 2;

}


impl Default for VehicleLocalPosition {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleLocalPosition::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleLocalPosition {
  type RmwMsg = super::msg::rmw::VehicleLocalPosition;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        xy_valid: msg.xy_valid,
        z_valid: msg.z_valid,
        v_xy_valid: msg.v_xy_valid,
        v_z_valid: msg.v_z_valid,
        x: msg.x,
        y: msg.y,
        z: msg.z,
        delta_xy: msg.delta_xy,
        xy_reset_counter: msg.xy_reset_counter,
        delta_z: msg.delta_z,
        z_reset_counter: msg.z_reset_counter,
        vx: msg.vx,
        vy: msg.vy,
        vz: msg.vz,
        z_deriv: msg.z_deriv,
        delta_vxy: msg.delta_vxy,
        vxy_reset_counter: msg.vxy_reset_counter,
        delta_vz: msg.delta_vz,
        vz_reset_counter: msg.vz_reset_counter,
        ax: msg.ax,
        ay: msg.ay,
        az: msg.az,
        heading: msg.heading,
        heading_var: msg.heading_var,
        unaided_heading: msg.unaided_heading,
        delta_heading: msg.delta_heading,
        heading_reset_counter: msg.heading_reset_counter,
        heading_good_for_control: msg.heading_good_for_control,
        tilt_var: msg.tilt_var,
        xy_global: msg.xy_global,
        z_global: msg.z_global,
        ref_timestamp: msg.ref_timestamp,
        ref_lat: msg.ref_lat,
        ref_lon: msg.ref_lon,
        ref_alt: msg.ref_alt,
        dist_bottom_valid: msg.dist_bottom_valid,
        dist_bottom: msg.dist_bottom,
        dist_bottom_var: msg.dist_bottom_var,
        delta_dist_bottom: msg.delta_dist_bottom,
        dist_bottom_reset_counter: msg.dist_bottom_reset_counter,
        dist_bottom_sensor_bitfield: msg.dist_bottom_sensor_bitfield,
        eph: msg.eph,
        epv: msg.epv,
        evh: msg.evh,
        evv: msg.evv,
        dead_reckoning: msg.dead_reckoning,
        vxy_max: msg.vxy_max,
        vz_max: msg.vz_max,
        hagl_min: msg.hagl_min,
        hagl_max_z: msg.hagl_max_z,
        hagl_max_xy: msg.hagl_max_xy,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      xy_valid: msg.xy_valid,
      z_valid: msg.z_valid,
      v_xy_valid: msg.v_xy_valid,
      v_z_valid: msg.v_z_valid,
      x: msg.x,
      y: msg.y,
      z: msg.z,
        delta_xy: msg.delta_xy,
      xy_reset_counter: msg.xy_reset_counter,
      delta_z: msg.delta_z,
      z_reset_counter: msg.z_reset_counter,
      vx: msg.vx,
      vy: msg.vy,
      vz: msg.vz,
      z_deriv: msg.z_deriv,
        delta_vxy: msg.delta_vxy,
      vxy_reset_counter: msg.vxy_reset_counter,
      delta_vz: msg.delta_vz,
      vz_reset_counter: msg.vz_reset_counter,
      ax: msg.ax,
      ay: msg.ay,
      az: msg.az,
      heading: msg.heading,
      heading_var: msg.heading_var,
      unaided_heading: msg.unaided_heading,
      delta_heading: msg.delta_heading,
      heading_reset_counter: msg.heading_reset_counter,
      heading_good_for_control: msg.heading_good_for_control,
      tilt_var: msg.tilt_var,
      xy_global: msg.xy_global,
      z_global: msg.z_global,
      ref_timestamp: msg.ref_timestamp,
      ref_lat: msg.ref_lat,
      ref_lon: msg.ref_lon,
      ref_alt: msg.ref_alt,
      dist_bottom_valid: msg.dist_bottom_valid,
      dist_bottom: msg.dist_bottom,
      dist_bottom_var: msg.dist_bottom_var,
      delta_dist_bottom: msg.delta_dist_bottom,
      dist_bottom_reset_counter: msg.dist_bottom_reset_counter,
      dist_bottom_sensor_bitfield: msg.dist_bottom_sensor_bitfield,
      eph: msg.eph,
      epv: msg.epv,
      evh: msg.evh,
      evv: msg.evv,
      dead_reckoning: msg.dead_reckoning,
      vxy_max: msg.vxy_max,
      vz_max: msg.vz_max,
      hagl_min: msg.hagl_min,
      hagl_max_z: msg.hagl_max_z,
      hagl_max_xy: msg.hagl_max_xy,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      xy_valid: msg.xy_valid,
      z_valid: msg.z_valid,
      v_xy_valid: msg.v_xy_valid,
      v_z_valid: msg.v_z_valid,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      delta_xy: msg.delta_xy,
      xy_reset_counter: msg.xy_reset_counter,
      delta_z: msg.delta_z,
      z_reset_counter: msg.z_reset_counter,
      vx: msg.vx,
      vy: msg.vy,
      vz: msg.vz,
      z_deriv: msg.z_deriv,
      delta_vxy: msg.delta_vxy,
      vxy_reset_counter: msg.vxy_reset_counter,
      delta_vz: msg.delta_vz,
      vz_reset_counter: msg.vz_reset_counter,
      ax: msg.ax,
      ay: msg.ay,
      az: msg.az,
      heading: msg.heading,
      heading_var: msg.heading_var,
      unaided_heading: msg.unaided_heading,
      delta_heading: msg.delta_heading,
      heading_reset_counter: msg.heading_reset_counter,
      heading_good_for_control: msg.heading_good_for_control,
      tilt_var: msg.tilt_var,
      xy_global: msg.xy_global,
      z_global: msg.z_global,
      ref_timestamp: msg.ref_timestamp,
      ref_lat: msg.ref_lat,
      ref_lon: msg.ref_lon,
      ref_alt: msg.ref_alt,
      dist_bottom_valid: msg.dist_bottom_valid,
      dist_bottom: msg.dist_bottom,
      dist_bottom_var: msg.dist_bottom_var,
      delta_dist_bottom: msg.delta_dist_bottom,
      dist_bottom_reset_counter: msg.dist_bottom_reset_counter,
      dist_bottom_sensor_bitfield: msg.dist_bottom_sensor_bitfield,
      eph: msg.eph,
      epv: msg.epv,
      evh: msg.evh,
      evv: msg.evv,
      dead_reckoning: msg.dead_reckoning,
      vxy_max: msg.vxy_max,
      vz_max: msg.vz_max,
      hagl_min: msg.hagl_min,
      hagl_max_z: msg.hagl_max_z,
      hagl_max_xy: msg.hagl_max_xy,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleLocalPositionSetpoint
/// Local position setpoint in NED frame
/// Telemetry of PID position controller to monitor tracking.
/// NaN means the state was not controlled

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleLocalPositionSetpoint {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// in meters NED
    pub x: f32,

    /// in meters NED
    pub y: f32,

    /// in meters NED
    pub z: f32,

    /// in meters/sec
    pub vx: f32,

    /// in meters/sec
    pub vy: f32,

    /// in meters/sec
    pub vz: f32,

    /// in meters/sec^2
    pub acceleration: [f32; 3],

    /// normalized thrust vector in NED
    pub thrust: [f32; 3],

    /// in radians NED -PI..+PI
    pub yaw: f32,

    /// in radians/sec
    pub yawspeed: f32,

}



impl Default for VehicleLocalPositionSetpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleLocalPositionSetpoint::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleLocalPositionSetpoint {
  type RmwMsg = super::msg::rmw::VehicleLocalPositionSetpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        x: msg.x,
        y: msg.y,
        z: msg.z,
        vx: msg.vx,
        vy: msg.vy,
        vz: msg.vz,
        acceleration: msg.acceleration,
        thrust: msg.thrust,
        yaw: msg.yaw,
        yawspeed: msg.yawspeed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      vx: msg.vx,
      vy: msg.vy,
      vz: msg.vz,
        acceleration: msg.acceleration,
        thrust: msg.thrust,
      yaw: msg.yaw,
      yawspeed: msg.yawspeed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      vx: msg.vx,
      vy: msg.vy,
      vz: msg.vz,
      acceleration: msg.acceleration,
      thrust: msg.thrust,
      yaw: msg.yaw,
      yawspeed: msg.yawspeed,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleMagnetometer

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleMagnetometer {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp of the raw data (microseconds)
    pub timestamp_sample: u64,

    /// unique device ID for the selected magnetometer
    pub device_id: u32,

    /// Magnetic field in the FRD body frame XYZ-axis in Gauss
    pub magnetometer_ga: [f32; 3],

    /// Calibration changed counter. Monotonically increases whenever calibration changes.
    pub calibration_count: u8,

}



impl Default for VehicleMagnetometer {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleMagnetometer::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleMagnetometer {
  type RmwMsg = super::msg::rmw::VehicleMagnetometer;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        device_id: msg.device_id,
        magnetometer_ga: msg.magnetometer_ga,
        calibration_count: msg.calibration_count,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
        magnetometer_ga: msg.magnetometer_ga,
      calibration_count: msg.calibration_count,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      magnetometer_ga: msg.magnetometer_ga,
      calibration_count: msg.calibration_count,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleOdometry
/// Vehicle odometry data
///
/// Fits ROS REP 147 for aerial vehicles

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleOdometry {
    /// Time since system start
    pub timestamp: u64,

    /// Timestamp sample
    pub timestamp_sample: u64,

    /// Position and orientation frame of reference
    pub pose_frame: u8,

    /// [m] [@frame local frame] [@invalid NaN If invalid/unknown] Position. Origin is position of GC at startup.
    pub position: [f32; 3],

    /// [-] [@invalid NaN First value if invalid/unknown] Attitude (expressed as a quaternion) relative to pose reference frame at current location. Follows the Hamiltonian convention (w, x, y, z, right-handed, passive rotations from body to world)
    pub q: [f32; 4],

    /// Reference frame of the velocity data
    pub velocity_frame: u8,

    /// [m/s] [@frame @velocity_frame] [@invalid NaN If invalid/unknown] Velocity.
    pub velocity: [f32; 3],

    /// [rad/s] [@frame @VELOCITY_FRAME_BODY_FRD] [@invalid NaN If invalid/unknown] Angular velocity in body-fixed frame
    pub angular_velocity: [f32; 3],

    /// Variance of position error
    pub position_variance: [f32; 3],

    /// Variance of orientation/attitude error (expressed in body frame)
    pub orientation_variance: [f32; 3],

    /// Variance of velocity error
    pub velocity_variance: [f32; 3],

    /// Reset counter. Counts reset events on attitude, velocity and position.
    pub reset_counter: u8,

    /// [-] [@invalid 0] Quality. Unused.
    pub quality: i8,

}

impl VehicleOdometry {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 0;

    /// Unknown frame
    pub const POSE_FRAME_UNKNOWN: u8 = 0;

    /// North-East-Down (NED) navigation frame. Aligned with True North.
    pub const POSE_FRAME_NED: u8 = 1;

    /// Forward-Right-Down (FRD) frame. Constant arbitrary heading offset from True North. Z is down.
    pub const POSE_FRAME_FRD: u8 = 2;

    /// Unknown frame
    pub const VELOCITY_FRAME_UNKNOWN: u8 = 0;

    /// NED navigation frame at current position.
    pub const VELOCITY_FRAME_NED: u8 = 1;

    /// FRD navigation frame at current position. Constant arbitrary heading offset from True North. Z is down.
    pub const VELOCITY_FRAME_FRD: u8 = 2;

    /// FRD body-fixed frame
    pub const VELOCITY_FRAME_BODY_FRD: u8 = 3;

}


impl Default for VehicleOdometry {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleOdometry::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleOdometry {
  type RmwMsg = super::msg::rmw::VehicleOdometry;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        pose_frame: msg.pose_frame,
        position: msg.position,
        q: msg.q,
        velocity_frame: msg.velocity_frame,
        velocity: msg.velocity,
        angular_velocity: msg.angular_velocity,
        position_variance: msg.position_variance,
        orientation_variance: msg.orientation_variance,
        velocity_variance: msg.velocity_variance,
        reset_counter: msg.reset_counter,
        quality: msg.quality,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      pose_frame: msg.pose_frame,
        position: msg.position,
        q: msg.q,
      velocity_frame: msg.velocity_frame,
        velocity: msg.velocity,
        angular_velocity: msg.angular_velocity,
        position_variance: msg.position_variance,
        orientation_variance: msg.orientation_variance,
        velocity_variance: msg.velocity_variance,
      reset_counter: msg.reset_counter,
      quality: msg.quality,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      pose_frame: msg.pose_frame,
      position: msg.position,
      q: msg.q,
      velocity_frame: msg.velocity_frame,
      velocity: msg.velocity,
      angular_velocity: msg.angular_velocity,
      position_variance: msg.position_variance,
      orientation_variance: msg.orientation_variance,
      velocity_variance: msg.velocity_variance,
      reset_counter: msg.reset_counter,
      quality: msg.quality,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleOpticalFlow
/// Optical flow in XYZ body frame in SI units.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleOpticalFlow {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp_sample: u64,

    /// unique device ID for the sensor that does not change between power cycles
    pub device_id: u32,

    /// (radians) accumulated optical flow in radians where a positive value is produced by a RH rotation about the body axis
    pub pixel_flow: [f32; 2],

    /// (radians) accumulated gyro radians where a positive value is produced by a RH rotation of the sensor about the body axis. (NAN if unavailable)
    pub delta_angle: [f32; 3],

    /// (meters) Distance to the center of the flow field (NAN if unavailable)
    pub distance_m: f32,

    /// (microseconds) accumulation timespan in microseconds
    pub integration_timespan_us: u32,

    /// Average of quality of accumulated frames, 0: bad quality, 255: maximum quality
    pub quality: u8,

    /// (radians/s) Magnitude of maximum angular which the optical flow sensor can measure reliably
    pub max_flow_rate: f32,

    /// (meters) Minimum distance from ground at which the optical flow sensor operates reliably
    pub min_ground_distance: f32,

    /// (meters) Maximum distance from ground at which the optical flow sensor operates reliably
    pub max_ground_distance: f32,

}



impl Default for VehicleOpticalFlow {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleOpticalFlow::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleOpticalFlow {
  type RmwMsg = super::msg::rmw::VehicleOpticalFlow;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        device_id: msg.device_id,
        pixel_flow: msg.pixel_flow,
        delta_angle: msg.delta_angle,
        distance_m: msg.distance_m,
        integration_timespan_us: msg.integration_timespan_us,
        quality: msg.quality,
        max_flow_rate: msg.max_flow_rate,
        min_ground_distance: msg.min_ground_distance,
        max_ground_distance: msg.max_ground_distance,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
        pixel_flow: msg.pixel_flow,
        delta_angle: msg.delta_angle,
      distance_m: msg.distance_m,
      integration_timespan_us: msg.integration_timespan_us,
      quality: msg.quality,
      max_flow_rate: msg.max_flow_rate,
      min_ground_distance: msg.min_ground_distance,
      max_ground_distance: msg.max_ground_distance,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      device_id: msg.device_id,
      pixel_flow: msg.pixel_flow,
      delta_angle: msg.delta_angle,
      distance_m: msg.distance_m,
      integration_timespan_us: msg.integration_timespan_us,
      quality: msg.quality,
      max_flow_rate: msg.max_flow_rate,
      min_ground_distance: msg.min_ground_distance,
      max_ground_distance: msg.max_ground_distance,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleOpticalFlowVel

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleOpticalFlowVel {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp of the raw data (microseconds)
    pub timestamp_sample: u64,

    /// velocity obtained from gyro-compensated and distance-scaled optical flow raw measurements in body frame(m/s)
    pub vel_body: [f32; 2],

    /// same as vel_body but in local frame (m/s)
    pub vel_ne: [f32; 2],

    /// filtered velocity obtained from gyro-compensated and distance-scaled optical flow raw measurements in body frame(m/s)
    pub vel_body_filtered: [f32; 2],

    /// filtered same as vel_body_filtered but in local frame (m/s)
    pub vel_ne_filtered: [f32; 2],

    /// integrated optical flow measurement (rad/s)
    pub flow_rate_uncompensated: [f32; 2],

    /// integrated optical flow measurement compensated for angular motion (rad/s)
    pub flow_rate_compensated: [f32; 2],

    /// gyro measurement synchronized with flow measurements (rad/s)
    pub gyro_rate: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_bias: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub ref_gyro: [f32; 3],

}



impl Default for VehicleOpticalFlowVel {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleOpticalFlowVel::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleOpticalFlowVel {
  type RmwMsg = super::msg::rmw::VehicleOpticalFlowVel;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        vel_body: msg.vel_body,
        vel_ne: msg.vel_ne,
        vel_body_filtered: msg.vel_body_filtered,
        vel_ne_filtered: msg.vel_ne_filtered,
        flow_rate_uncompensated: msg.flow_rate_uncompensated,
        flow_rate_compensated: msg.flow_rate_compensated,
        gyro_rate: msg.gyro_rate,
        gyro_bias: msg.gyro_bias,
        ref_gyro: msg.ref_gyro,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
        vel_body: msg.vel_body,
        vel_ne: msg.vel_ne,
        vel_body_filtered: msg.vel_body_filtered,
        vel_ne_filtered: msg.vel_ne_filtered,
        flow_rate_uncompensated: msg.flow_rate_uncompensated,
        flow_rate_compensated: msg.flow_rate_compensated,
        gyro_rate: msg.gyro_rate,
        gyro_bias: msg.gyro_bias,
        ref_gyro: msg.ref_gyro,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      vel_body: msg.vel_body,
      vel_ne: msg.vel_ne,
      vel_body_filtered: msg.vel_body_filtered,
      vel_ne_filtered: msg.vel_ne_filtered,
      flow_rate_uncompensated: msg.flow_rate_uncompensated,
      flow_rate_compensated: msg.flow_rate_compensated,
      gyro_rate: msg.gyro_rate,
      gyro_bias: msg.gyro_bias,
      ref_gyro: msg.ref_gyro,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleRatesSetpoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleRatesSetpoint {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// body angular rates in FRD frame
    /// [rad/s] roll rate setpoint
    pub roll: f32,

    /// pitch rate setpoint
    pub pitch: f32,

    /// yaw rate setpoint
    pub yaw: f32,

    /// For clarification: For multicopters thrust_body[0] and thrust[1] are usually 0 and thrust[2] is the negative throttle demand.
    /// For fixed wings thrust_x is the throttle demand and thrust_y, thrust_z will usually be zero.
    /// Normalized thrust command in body NED frame [-1,1]
    pub thrust_body: [f32; 3],

    /// Reset roll/pitch/yaw integrals (navigation logic change)
    pub reset_integral: bool,

}

impl VehicleRatesSetpoint {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 0;

}


impl Default for VehicleRatesSetpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleRatesSetpoint::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleRatesSetpoint {
  type RmwMsg = super::msg::rmw::VehicleRatesSetpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        roll: msg.roll,
        pitch: msg.pitch,
        yaw: msg.yaw,
        thrust_body: msg.thrust_body,
        reset_integral: msg.reset_integral,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      roll: msg.roll,
      pitch: msg.pitch,
      yaw: msg.yaw,
        thrust_body: msg.thrust_body,
      reset_integral: msg.reset_integral,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      roll: msg.roll,
      pitch: msg.pitch,
      yaw: msg.yaw,
      thrust_body: msg.thrust_body,
      reset_integral: msg.reset_integral,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleRoi
/// Vehicle Region Of Interest (ROI)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleRoi {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// ROI mode (see above)
    pub mode: u8,

    /// Latitude to point to
    pub lat: f64,

    /// Longitude to point to
    pub lon: f64,

    /// Altitude to point to
    pub alt: f32,

    /// additional angle offsets to next waypoint (only used with ROI_WPNEXT)
    /// angle offset in rad
    pub roll_offset: f32,

    /// angle offset in rad
    pub pitch_offset: f32,

    /// angle offset in rad
    pub yaw_offset: f32,

}

impl VehicleRoi {
    /// No region of interest
    pub const ROI_NONE: u8 = 0;

    /// Point toward next MISSION with optional offset
    pub const ROI_WPNEXT: u8 = 1;

    /// Point toward given MISSION
    pub const ROI_WPINDEX: u8 = 2;

    /// Point toward fixed location
    pub const ROI_LOCATION: u8 = 3;

    /// Point toward target
    pub const ROI_TARGET: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ROI_ENUM_END: u8 = 5;

}


impl Default for VehicleRoi {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleRoi::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleRoi {
  type RmwMsg = super::msg::rmw::VehicleRoi;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        mode: msg.mode,
        lat: msg.lat,
        lon: msg.lon,
        alt: msg.alt,
        roll_offset: msg.roll_offset,
        pitch_offset: msg.pitch_offset,
        yaw_offset: msg.yaw_offset,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      mode: msg.mode,
      lat: msg.lat,
      lon: msg.lon,
      alt: msg.alt,
      roll_offset: msg.roll_offset,
      pitch_offset: msg.pitch_offset,
      yaw_offset: msg.yaw_offset,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      mode: msg.mode,
      lat: msg.lat,
      lon: msg.lon,
      alt: msg.alt,
      roll_offset: msg.roll_offset,
      pitch_offset: msg.pitch_offset,
      yaw_offset: msg.yaw_offset,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleStatus
/// Encodes the system state of the vehicle published by commander

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Arming timestamp (microseconds)
    pub armed_time: u64,

    /// Takeoff timestamp (microseconds)
    pub takeoff_time: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub arming_state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub latest_arming_reason: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub latest_disarming_reason: u8,

    /// time when current nav_state activated
    pub nav_state_timestamp: u64,

    /// Mode that the user selected (might be different from nav_state in a failsafe situation)
    pub nav_state_user_intention: u8,

    /// Currently active mode
    pub nav_state: u8,

    /// Current mode executor in charge (0=Autopilot)
    pub executor_in_charge: u8,

    /// User-visible nav state sent via MAVLink (executor state if active, otherwise nav_state)
    pub nav_state_display: u8,

    /// True if the current mode accepts offboard trajectory setpoints via MAVLink
    pub accepts_offboard_setpoints: bool,

    /// Bitmask for all valid nav_state values
    pub valid_nav_states_mask: u32,

    /// Bitmask for all modes that a user can select
    pub can_set_nav_states_mask: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hil_state: u8,

    /// Current vehicle locomotion method. A vehicle can have different methods (e.g. VTOL transitions from RW to FW method)
    pub vehicle_type: u8,

    /// true if system is in failsafe state (e.g.:RTL, Hover, Terminate, ...)
    pub failsafe: bool,

    /// true if system is in failsafe state but the user took over control
    pub failsafe_and_user_took_over: bool,

    /// one of FAILSAFE_DEFER_STATE_*
    pub failsafe_defer_state: u8,

    /// Link loss
    /// datalink to GCS lost
    pub gcs_connection_lost: bool,

    /// counts unique GCS connection lost events
    pub gcs_connection_lost_counter: u8,

    /// Set to true if the high latency data link (eg. RockBlock Iridium 9603 telemetry module) is lost
    pub high_latency_data_link_lost: bool,

    /// VTOL flags
    /// True if the system is VTOL capable
    pub is_vtol: bool,

    /// True if the system performs a 90° pitch down rotation during transition from MC to FW
    pub is_vtol_tailsitter: bool,

    /// True if VTOL is doing a transition
    pub in_transition_mode: bool,

    /// True if VTOL is doing a transition from MC to FW
    pub in_transition_to_fw: bool,

    /// MAVLink identification
    /// system type, contains mavlink MAV_TYPE
    pub system_type: u8,

    /// system id, contains MAVLink's system ID field
    pub system_id: u8,

    /// subsystem / component id, contains MAVLink's component ID field
    pub component_id: u8,

    /// Set to true if a safety button is connected
    pub safety_button_available: bool,

    /// Set to true if safety is off
    pub safety_off: bool,

    /// set if input power is valid
    pub power_input_valid: bool,

    /// set to true (never cleared) once telemetry received from usb link
    pub usb_connected: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub open_drone_id_system_present: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub open_drone_id_system_healthy: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parachute_system_present: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parachute_system_healthy: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub traffic_avoidance_system_present: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rc_calibration_in_progress: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub calibration_enabled: bool,

    /// true if all checks necessary to arm pass
    pub pre_flight_checks_pass: bool,

}

impl VehicleStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ARMING_STATE_DISARMED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ARMING_STATE_ARMED: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ARM_DISARM_REASON_STICK_GESTURE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ARM_DISARM_REASON_RC_SWITCH: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ARM_DISARM_REASON_COMMAND_INTERNAL: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ARM_DISARM_REASON_COMMAND_EXTERNAL: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ARM_DISARM_REASON_MISSION_START: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ARM_DISARM_REASON_LANDING: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ARM_DISARM_REASON_PREFLIGHT_INACTION: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ARM_DISARM_REASON_KILL_SWITCH: u8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ARM_DISARM_REASON_RC_BUTTON: u8 = 13;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ARM_DISARM_REASON_FAILSAFE: u8 = 14;

    /// Manual mode
    pub const NAVIGATION_STATE_MANUAL: u8 = 0;

    /// Altitude control mode
    pub const NAVIGATION_STATE_ALTCTL: u8 = 1;

    /// Position control mode
    pub const NAVIGATION_STATE_POSCTL: u8 = 2;

    /// Auto mission mode
    pub const NAVIGATION_STATE_AUTO_MISSION: u8 = 3;

    /// Auto loiter mode
    pub const NAVIGATION_STATE_AUTO_LOITER: u8 = 4;

    /// Auto return to launch mode
    pub const NAVIGATION_STATE_AUTO_RTL: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NAVIGATION_STATE_POSITION_SLOW: u8 = 6;

    /// Guided Course mode (FW: maintain course/alt/speed)
    pub const NAVIGATION_STATE_GUIDED_COURSE: u8 = 7;

    /// Altitude with Cruise mode
    pub const NAVIGATION_STATE_ALTITUDE_CRUISE: u8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NAVIGATION_STATE_FREE3: u8 = 9;

    /// Acro mode
    pub const NAVIGATION_STATE_ACRO: u8 = 10;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NAVIGATION_STATE_FREE2: u8 = 11;

    /// Descend mode (no position control)
    pub const NAVIGATION_STATE_DESCEND: u8 = 12;

    /// Termination mode
    pub const NAVIGATION_STATE_TERMINATION: u8 = 13;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NAVIGATION_STATE_OFFBOARD: u8 = 14;

    /// Stabilized mode
    pub const NAVIGATION_STATE_STAB: u8 = 15;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NAVIGATION_STATE_FREE1: u8 = 16;

    /// Takeoff
    pub const NAVIGATION_STATE_AUTO_TAKEOFF: u8 = 17;

    /// Land
    pub const NAVIGATION_STATE_AUTO_LAND: u8 = 18;

    /// Auto Follow
    pub const NAVIGATION_STATE_AUTO_FOLLOW_TARGET: u8 = 19;

    /// Precision land with landing target
    pub const NAVIGATION_STATE_AUTO_PRECLAND: u8 = 20;

    /// Orbit in a circle
    pub const NAVIGATION_STATE_ORBIT: u8 = 21;

    /// Takeoff, transition, establish loiter
    pub const NAVIGATION_STATE_AUTO_VTOL_TAKEOFF: u8 = 22;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NAVIGATION_STATE_EXTERNAL1: u8 = 23;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NAVIGATION_STATE_EXTERNAL2: u8 = 24;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NAVIGATION_STATE_EXTERNAL3: u8 = 25;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NAVIGATION_STATE_EXTERNAL4: u8 = 26;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NAVIGATION_STATE_EXTERNAL5: u8 = 27;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NAVIGATION_STATE_EXTERNAL6: u8 = 28;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NAVIGATION_STATE_EXTERNAL7: u8 = 29;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NAVIGATION_STATE_EXTERNAL8: u8 = 30;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NAVIGATION_STATE_MAX: u8 = 31;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HIL_STATE_OFF: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HIL_STATE_ON: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VEHICLE_TYPE_UNSPECIFIED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VEHICLE_TYPE_ROTARY_WING: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VEHICLE_TYPE_FIXED_WING: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VEHICLE_TYPE_ROVER: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILSAFE_DEFER_STATE_DISABLED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILSAFE_DEFER_STATE_ENABLED: u8 = 1;

    /// Failsafes deferred, but would trigger a failsafe
    pub const FAILSAFE_DEFER_STATE_WOULD_FAILSAFE: u8 = 2;

}


impl Default for VehicleStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleStatus::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleStatus {
  type RmwMsg = super::msg::rmw::VehicleStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        armed_time: msg.armed_time,
        takeoff_time: msg.takeoff_time,
        arming_state: msg.arming_state,
        latest_arming_reason: msg.latest_arming_reason,
        latest_disarming_reason: msg.latest_disarming_reason,
        nav_state_timestamp: msg.nav_state_timestamp,
        nav_state_user_intention: msg.nav_state_user_intention,
        nav_state: msg.nav_state,
        executor_in_charge: msg.executor_in_charge,
        nav_state_display: msg.nav_state_display,
        accepts_offboard_setpoints: msg.accepts_offboard_setpoints,
        valid_nav_states_mask: msg.valid_nav_states_mask,
        can_set_nav_states_mask: msg.can_set_nav_states_mask,
        hil_state: msg.hil_state,
        vehicle_type: msg.vehicle_type,
        failsafe: msg.failsafe,
        failsafe_and_user_took_over: msg.failsafe_and_user_took_over,
        failsafe_defer_state: msg.failsafe_defer_state,
        gcs_connection_lost: msg.gcs_connection_lost,
        gcs_connection_lost_counter: msg.gcs_connection_lost_counter,
        high_latency_data_link_lost: msg.high_latency_data_link_lost,
        is_vtol: msg.is_vtol,
        is_vtol_tailsitter: msg.is_vtol_tailsitter,
        in_transition_mode: msg.in_transition_mode,
        in_transition_to_fw: msg.in_transition_to_fw,
        system_type: msg.system_type,
        system_id: msg.system_id,
        component_id: msg.component_id,
        safety_button_available: msg.safety_button_available,
        safety_off: msg.safety_off,
        power_input_valid: msg.power_input_valid,
        usb_connected: msg.usb_connected,
        open_drone_id_system_present: msg.open_drone_id_system_present,
        open_drone_id_system_healthy: msg.open_drone_id_system_healthy,
        parachute_system_present: msg.parachute_system_present,
        parachute_system_healthy: msg.parachute_system_healthy,
        traffic_avoidance_system_present: msg.traffic_avoidance_system_present,
        rc_calibration_in_progress: msg.rc_calibration_in_progress,
        calibration_enabled: msg.calibration_enabled,
        pre_flight_checks_pass: msg.pre_flight_checks_pass,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      armed_time: msg.armed_time,
      takeoff_time: msg.takeoff_time,
      arming_state: msg.arming_state,
      latest_arming_reason: msg.latest_arming_reason,
      latest_disarming_reason: msg.latest_disarming_reason,
      nav_state_timestamp: msg.nav_state_timestamp,
      nav_state_user_intention: msg.nav_state_user_intention,
      nav_state: msg.nav_state,
      executor_in_charge: msg.executor_in_charge,
      nav_state_display: msg.nav_state_display,
      accepts_offboard_setpoints: msg.accepts_offboard_setpoints,
      valid_nav_states_mask: msg.valid_nav_states_mask,
      can_set_nav_states_mask: msg.can_set_nav_states_mask,
      hil_state: msg.hil_state,
      vehicle_type: msg.vehicle_type,
      failsafe: msg.failsafe,
      failsafe_and_user_took_over: msg.failsafe_and_user_took_over,
      failsafe_defer_state: msg.failsafe_defer_state,
      gcs_connection_lost: msg.gcs_connection_lost,
      gcs_connection_lost_counter: msg.gcs_connection_lost_counter,
      high_latency_data_link_lost: msg.high_latency_data_link_lost,
      is_vtol: msg.is_vtol,
      is_vtol_tailsitter: msg.is_vtol_tailsitter,
      in_transition_mode: msg.in_transition_mode,
      in_transition_to_fw: msg.in_transition_to_fw,
      system_type: msg.system_type,
      system_id: msg.system_id,
      component_id: msg.component_id,
      safety_button_available: msg.safety_button_available,
      safety_off: msg.safety_off,
      power_input_valid: msg.power_input_valid,
      usb_connected: msg.usb_connected,
      open_drone_id_system_present: msg.open_drone_id_system_present,
      open_drone_id_system_healthy: msg.open_drone_id_system_healthy,
      parachute_system_present: msg.parachute_system_present,
      parachute_system_healthy: msg.parachute_system_healthy,
      traffic_avoidance_system_present: msg.traffic_avoidance_system_present,
      rc_calibration_in_progress: msg.rc_calibration_in_progress,
      calibration_enabled: msg.calibration_enabled,
      pre_flight_checks_pass: msg.pre_flight_checks_pass,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      armed_time: msg.armed_time,
      takeoff_time: msg.takeoff_time,
      arming_state: msg.arming_state,
      latest_arming_reason: msg.latest_arming_reason,
      latest_disarming_reason: msg.latest_disarming_reason,
      nav_state_timestamp: msg.nav_state_timestamp,
      nav_state_user_intention: msg.nav_state_user_intention,
      nav_state: msg.nav_state,
      executor_in_charge: msg.executor_in_charge,
      nav_state_display: msg.nav_state_display,
      accepts_offboard_setpoints: msg.accepts_offboard_setpoints,
      valid_nav_states_mask: msg.valid_nav_states_mask,
      can_set_nav_states_mask: msg.can_set_nav_states_mask,
      hil_state: msg.hil_state,
      vehicle_type: msg.vehicle_type,
      failsafe: msg.failsafe,
      failsafe_and_user_took_over: msg.failsafe_and_user_took_over,
      failsafe_defer_state: msg.failsafe_defer_state,
      gcs_connection_lost: msg.gcs_connection_lost,
      gcs_connection_lost_counter: msg.gcs_connection_lost_counter,
      high_latency_data_link_lost: msg.high_latency_data_link_lost,
      is_vtol: msg.is_vtol,
      is_vtol_tailsitter: msg.is_vtol_tailsitter,
      in_transition_mode: msg.in_transition_mode,
      in_transition_to_fw: msg.in_transition_to_fw,
      system_type: msg.system_type,
      system_id: msg.system_id,
      component_id: msg.component_id,
      safety_button_available: msg.safety_button_available,
      safety_off: msg.safety_off,
      power_input_valid: msg.power_input_valid,
      usb_connected: msg.usb_connected,
      open_drone_id_system_present: msg.open_drone_id_system_present,
      open_drone_id_system_healthy: msg.open_drone_id_system_healthy,
      parachute_system_present: msg.parachute_system_present,
      parachute_system_healthy: msg.parachute_system_healthy,
      traffic_avoidance_system_present: msg.traffic_avoidance_system_present,
      rc_calibration_in_progress: msg.rc_calibration_in_progress,
      calibration_enabled: msg.calibration_enabled,
      pre_flight_checks_pass: msg.pre_flight_checks_pass,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleThrustSetpoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleThrustSetpoint {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// timestamp of the data sample on which this message is based (microseconds)
    pub timestamp_sample: u64,

    /// thrust setpoint along X, Y, Z body axis [-1, 1]
    pub xyz: [f32; 3],

}



impl Default for VehicleThrustSetpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleThrustSetpoint::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleThrustSetpoint {
  type RmwMsg = super::msg::rmw::VehicleThrustSetpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        xyz: msg.xyz,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
        xyz: msg.xyz,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      xyz: msg.xyz,
    }
  }
}


// Corresponds to px4_msgs__msg__VehicleTorqueSetpoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleTorqueSetpoint {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// timestamp of the data sample on which this message is based (microseconds)
    pub timestamp_sample: u64,

    /// torque setpoint about X, Y, Z body axis (normalized)
    pub xyz: [f32; 3],

}



impl Default for VehicleTorqueSetpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleTorqueSetpoint::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleTorqueSetpoint {
  type RmwMsg = super::msg::rmw::VehicleTorqueSetpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        xyz: msg.xyz,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
        xyz: msg.xyz,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      xyz: msg.xyz,
    }
  }
}


// Corresponds to px4_msgs__msg__VelocityLimits
/// Velocity and yaw rate limits for a multicopter position slow mode only

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VelocityLimits {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// absolute speeds, NAN means use default limit
    /// [m/s]
    pub horizontal_velocity: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vertical_velocity: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_rate: f32,

}



impl Default for VelocityLimits {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VelocityLimits::default())
  }
}

impl rosidl_runtime_rs::Message for VelocityLimits {
  type RmwMsg = super::msg::rmw::VelocityLimits;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        horizontal_velocity: msg.horizontal_velocity,
        vertical_velocity: msg.vertical_velocity,
        yaw_rate: msg.yaw_rate,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      horizontal_velocity: msg.horizontal_velocity,
      vertical_velocity: msg.vertical_velocity,
      yaw_rate: msg.yaw_rate,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      horizontal_velocity: msg.horizontal_velocity,
      vertical_velocity: msg.vertical_velocity,
      yaw_rate: msg.yaw_rate,
    }
  }
}


// Corresponds to px4_msgs__msg__VteAidSource1d
/// Vision Target Estimator 1D fusion aid-source diagnostics (e.g. yaw).
///
/// Published by: vision_target_estimator (VTEOrientation) on every fusion attempt, including rejected ones.
/// Subscribed by: logger only. Inspect observation, innovation, test_ratio, and fusion_status to debug why a measurement was or was not fused.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VteAidSource1d {
    /// Time since system start
    pub timestamp: u64,

    /// Timestamp of the raw observation
    pub timestamp_sample: u64,

    /// Timestamp of last filter prediction
    pub time_last_predict: u64,

    /// Observation & Innovation
    /// [-] Observation attempted to be fused
    pub observation: f32,

    /// Variance of observation attempted to be fused
    pub observation_variance: f32,

    /// Kalman Filter innovation (y = z - Hx)
    pub innovation: f32,

    /// Kalman Filter variance of the innovation
    pub innovation_variance: f32,

    /// Normalized innovation squared (NIS)
    pub test_ratio: f32,

    /// Fusion status code
    pub fusion_status: u8,

    /// OOSM Diagnostics
    /// [ms] (now - timestamp_sample)
    pub time_since_meas_ms: f32,

    /// Number of steps replayed in OOSM (0 if current or failed)
    pub history_steps: u8,

}

impl VteAidSource1d {
    /// No fusion attempted yet
    pub const STATUS_IDLE: u8 = 0;

    /// Fused immediately (low latency)
    pub const STATUS_FUSED_CURRENT: u8 = 1;

    /// Fused via history buffer
    pub const STATUS_FUSED_OOSM: u8 = 2;

    /// Rejected by Normalized Innovation Squared check
    pub const STATUS_REJECT_NIS: u8 = 3;

    /// Rejected due to invalid/infinite covariance or numerical error
    pub const STATUS_REJECT_COV: u8 = 4;

    /// Rejected: older than buffer limit (kOosmMaxTimeUs) or oldest sample
    pub const STATUS_REJECT_TOO_OLD: u8 = 5;

    /// Rejected: timestamp in the future (beyond tolerance)
    pub const STATUS_REJECT_TOO_NEW: u8 = 6;

    /// Rejected: history was reset due to staleness/discontinuity
    pub const STATUS_REJECT_STALE: u8 = 7;

    /// Rejected: history buffer not yet populated
    pub const STATUS_REJECT_EMPTY: u8 = 8;

}


impl Default for VteAidSource1d {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VteAidSource1d::default())
  }
}

impl rosidl_runtime_rs::Message for VteAidSource1d {
  type RmwMsg = super::msg::rmw::VteAidSource1d;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        time_last_predict: msg.time_last_predict,
        observation: msg.observation,
        observation_variance: msg.observation_variance,
        innovation: msg.innovation,
        innovation_variance: msg.innovation_variance,
        test_ratio: msg.test_ratio,
        fusion_status: msg.fusion_status,
        time_since_meas_ms: msg.time_since_meas_ms,
        history_steps: msg.history_steps,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      time_last_predict: msg.time_last_predict,
      observation: msg.observation,
      observation_variance: msg.observation_variance,
      innovation: msg.innovation,
      innovation_variance: msg.innovation_variance,
      test_ratio: msg.test_ratio,
      fusion_status: msg.fusion_status,
      time_since_meas_ms: msg.time_since_meas_ms,
      history_steps: msg.history_steps,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      time_last_predict: msg.time_last_predict,
      observation: msg.observation,
      observation_variance: msg.observation_variance,
      innovation: msg.innovation,
      innovation_variance: msg.innovation_variance,
      test_ratio: msg.test_ratio,
      fusion_status: msg.fusion_status,
      time_since_meas_ms: msg.time_since_meas_ms,
      history_steps: msg.history_steps,
    }
  }
}


// Corresponds to px4_msgs__msg__VteAidSource3d
/// Vision Target Estimator 3D fusion aid-source diagnostics, one fusion_status per NED axis.
///
/// Published by: vision_target_estimator (VTEPosition) on every fusion attempt, including rejected ones.
/// Subscribed by: logger only. Inspect observation, innovation, test_ratio, and per-axis fusion_status to debug why a measurement was or was not fused.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VteAidSource3d {
    /// Time since system start
    pub timestamp: u64,

    /// Timestamp of the raw observation
    pub timestamp_sample: u64,

    /// Timestamp of last filter prediction
    pub time_last_predict: u64,

    /// Observation & Innovation
    /// [-] [@frame NED] Sensor observation attempted to be fused
    pub observation: [f32; 3],

    /// [-] [@frame NED] Variance of the observation attempted to be fused
    pub observation_variance: [f32; 3],

    /// [-] [@frame NED] Kalman Filter innovation (y = z - Hx)
    pub innovation: [f32; 3],

    /// [-] [@frame NED] Kalman Filter variance of the innovation
    pub innovation_variance: [f32; 3],

    /// Normalized innovation squared (NIS)
    pub test_ratio: [f32; 3],

    /// Fusion status code per axis
    pub fusion_status: [u8; 3],

    /// OOSM Diagnostics (Shared across axes)
    /// [ms] (now - timestamp_sample)
    pub time_since_meas_ms: f32,

    /// Number of steps replayed in OOSM (0 if current or failed)
    pub history_steps: u8,

}

impl VteAidSource3d {
    /// No fusion attempted yet
    pub const STATUS_IDLE: u8 = 0;

    /// Fused immediately (low latency)
    pub const STATUS_FUSED_CURRENT: u8 = 1;

    /// Fused via history buffer
    pub const STATUS_FUSED_OOSM: u8 = 2;

    /// Rejected by Normalized Innovation Squared check
    pub const STATUS_REJECT_NIS: u8 = 3;

    /// Rejected due to invalid/infinite covariance or numerical error
    pub const STATUS_REJECT_COV: u8 = 4;

    /// Rejected: older than buffer limit (kOosmMaxTimeUs) or oldest sample
    pub const STATUS_REJECT_TOO_OLD: u8 = 5;

    /// Rejected: timestamp in the future (beyond tolerance)
    pub const STATUS_REJECT_TOO_NEW: u8 = 6;

    /// Rejected: history was reset due to staleness/discontinuity
    pub const STATUS_REJECT_STALE: u8 = 7;

    /// Rejected: history buffer not yet populated
    pub const STATUS_REJECT_EMPTY: u8 = 8;

}


impl Default for VteAidSource3d {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VteAidSource3d::default())
  }
}

impl rosidl_runtime_rs::Message for VteAidSource3d {
  type RmwMsg = super::msg::rmw::VteAidSource3d;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        time_last_predict: msg.time_last_predict,
        observation: msg.observation,
        observation_variance: msg.observation_variance,
        innovation: msg.innovation,
        innovation_variance: msg.innovation_variance,
        test_ratio: msg.test_ratio,
        fusion_status: msg.fusion_status,
        time_since_meas_ms: msg.time_since_meas_ms,
        history_steps: msg.history_steps,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      time_last_predict: msg.time_last_predict,
        observation: msg.observation,
        observation_variance: msg.observation_variance,
        innovation: msg.innovation,
        innovation_variance: msg.innovation_variance,
        test_ratio: msg.test_ratio,
        fusion_status: msg.fusion_status,
      time_since_meas_ms: msg.time_since_meas_ms,
      history_steps: msg.history_steps,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      time_last_predict: msg.time_last_predict,
      observation: msg.observation,
      observation_variance: msg.observation_variance,
      innovation: msg.innovation,
      innovation_variance: msg.innovation_variance,
      test_ratio: msg.test_ratio,
      fusion_status: msg.fusion_status,
      time_since_meas_ms: msg.time_since_meas_ms,
      history_steps: msg.history_steps,
    }
  }
}


// Corresponds to px4_msgs__msg__VteBiasInitStatus
/// Diagnostics for the initial GNSS/vision bias averaging phase in the Vision Target Estimator.
///
/// Published by: vision_target_estimator (VTEPosition) while the bias low-pass filter is running.
/// Subscribed by: logger only, to verify that the bias settles before the estimator starts fusing vision.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VteBiasInitStatus {
    /// Time since system start
    pub timestamp: u64,

    /// [m] [@frame NED] Current GNSS-vision bias sample
    pub raw_bias: [f32; 3],

    /// [m] [@frame NED] Low-pass filtered bias sample
    pub filtered_bias: [f32; 3],

    /// norm(raw_bias_k - raw_bias_k-1)
    pub delta_norm: f32,

}



impl Default for VteBiasInitStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VteBiasInitStatus::default())
  }
}

impl rosidl_runtime_rs::Message for VteBiasInitStatus {
  type RmwMsg = super::msg::rmw::VteBiasInitStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        raw_bias: msg.raw_bias,
        filtered_bias: msg.filtered_bias,
        delta_norm: msg.delta_norm,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        raw_bias: msg.raw_bias,
        filtered_bias: msg.filtered_bias,
      delta_norm: msg.delta_norm,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      raw_bias: msg.raw_bias,
      filtered_bias: msg.filtered_bias,
      delta_norm: msg.delta_norm,
    }
  }
}


// Corresponds to px4_msgs__msg__VteInput
/// Vehicle inputs fed into the Vision Target Estimator position prediction step, logged for tuning.
///
/// Published by: vision_target_estimator (VisionTargetEst work item).
/// Subscribed by: logger only.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VteInput {
    /// Time since system start
    pub timestamp: u64,

    /// Timestamp of the raw input data
    pub timestamp_sample: u64,

    /// [m/s^2] [@frame NED] Downsampled UAV bias-corrected acceleration (including gravity)
    pub acc_xyz: [f32; 3],

    /// Downsampled UAV attitude quaternion (FRD body -> NED earth)
    pub q_att: [f32; 4],

    /// Number of raw samples averaged into acc_xyz this cycle
    pub acc_sample_count: u32,

}



impl Default for VteInput {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VteInput::default())
  }
}

impl rosidl_runtime_rs::Message for VteInput {
  type RmwMsg = super::msg::rmw::VteInput;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        acc_xyz: msg.acc_xyz,
        q_att: msg.q_att,
        acc_sample_count: msg.acc_sample_count,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
        acc_xyz: msg.acc_xyz,
        q_att: msg.q_att,
      acc_sample_count: msg.acc_sample_count,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      acc_xyz: msg.acc_xyz,
      q_att: msg.q_att,
      acc_sample_count: msg.acc_sample_count,
    }
  }
}


// Corresponds to px4_msgs__msg__VteOrientation
/// Vision Target Estimator orientation state, exposing the full yaw filter output with covariances for logging and tuning.
///
/// Published by: vision_target_estimator (VTEOrientation).
/// Subscribed by: logger only. The orientation-related fields consumed elsewhere (precision landing) are exposed on landing_target_pose.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VteOrientation {
    /// Time since system start
    pub timestamp: u64,

    /// Relative orientation estimate valid
    pub orientation_valid: bool,

    /// [rad] [@frame NED] Target yaw angle
    pub yaw: f32,

    /// Variance of yaw
    pub cov_yaw: f32,

    /// [rad/s] [@frame NED] Target yaw rate
    pub yaw_rate: f32,

    /// Variance of yaw_rate
    pub cov_yaw_rate: f32,

}



impl Default for VteOrientation {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VteOrientation::default())
  }
}

impl rosidl_runtime_rs::Message for VteOrientation {
  type RmwMsg = super::msg::rmw::VteOrientation;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        orientation_valid: msg.orientation_valid,
        yaw: msg.yaw,
        cov_yaw: msg.cov_yaw,
        yaw_rate: msg.yaw_rate,
        cov_yaw_rate: msg.cov_yaw_rate,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      orientation_valid: msg.orientation_valid,
      yaw: msg.yaw,
      cov_yaw: msg.cov_yaw,
      yaw_rate: msg.yaw_rate,
      cov_yaw_rate: msg.cov_yaw_rate,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      orientation_valid: msg.orientation_valid,
      yaw: msg.yaw,
      cov_yaw: msg.cov_yaw,
      yaw_rate: msg.yaw_rate,
      cov_yaw_rate: msg.cov_yaw_rate,
    }
  }
}


// Corresponds to px4_msgs__msg__VtePosition
/// Vision Target Estimator position state, exposing the full per-axis Kalman filter state with covariances for logging and tuning.
///
/// Published by: vision_target_estimator (VTEPosition).
/// Subscribed by: logger only. The position-related fields consumed elsewhere (precision landing, EKF2 aiding) are exposed on landing_target_pose.
///
/// vel_target and acc_target are only populated when the firmware is built with CONFIG_VTEST_MOVING=y; otherwise they stay at zero.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VtePosition {
    /// Time since system start
    pub timestamp: u64,

    /// Relative position estimate valid
    pub rel_pos_valid: bool,

    /// Relative velocity estimate valid
    pub rel_vel_valid: bool,

    /// [m] [@frame NED] Target position relative to vehicle
    pub rel_pos: [f32; 3],

    /// [m/s] [@frame NED] Vehicle velocity
    pub vel_uav: [f32; 3],

    /// [m/s] [@frame NED] Target velocity
    pub vel_target: [f32; 3],

    /// [m] [@frame NED] GNSS bias between vehicle and target receivers
    pub bias: [f32; 3],

    /// [m/s^2] [@frame NED] Target acceleration
    pub acc_target: [f32; 3],

    /// [m^2] [@frame NED] Variance of rel_pos
    pub cov_rel_pos: [f32; 3],

    /// [(m/s)^2] [@frame NED] Variance of vel_uav
    pub cov_vel_uav: [f32; 3],

    /// [m^2] [@frame NED] Variance of bias
    pub cov_bias: [f32; 3],

    /// [(m/s)^2] [@frame NED] Variance of vel_target
    pub cov_vel_target: [f32; 3],

    /// [(m/s^2)^2] [@frame NED] Variance of acc_target
    pub cov_acc_target: [f32; 3],

}



impl Default for VtePosition {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VtePosition::default())
  }
}

impl rosidl_runtime_rs::Message for VtePosition {
  type RmwMsg = super::msg::rmw::VtePosition;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        rel_pos_valid: msg.rel_pos_valid,
        rel_vel_valid: msg.rel_vel_valid,
        rel_pos: msg.rel_pos,
        vel_uav: msg.vel_uav,
        vel_target: msg.vel_target,
        bias: msg.bias,
        acc_target: msg.acc_target,
        cov_rel_pos: msg.cov_rel_pos,
        cov_vel_uav: msg.cov_vel_uav,
        cov_bias: msg.cov_bias,
        cov_vel_target: msg.cov_vel_target,
        cov_acc_target: msg.cov_acc_target,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      rel_pos_valid: msg.rel_pos_valid,
      rel_vel_valid: msg.rel_vel_valid,
        rel_pos: msg.rel_pos,
        vel_uav: msg.vel_uav,
        vel_target: msg.vel_target,
        bias: msg.bias,
        acc_target: msg.acc_target,
        cov_rel_pos: msg.cov_rel_pos,
        cov_vel_uav: msg.cov_vel_uav,
        cov_bias: msg.cov_bias,
        cov_vel_target: msg.cov_vel_target,
        cov_acc_target: msg.cov_acc_target,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      rel_pos_valid: msg.rel_pos_valid,
      rel_vel_valid: msg.rel_vel_valid,
      rel_pos: msg.rel_pos,
      vel_uav: msg.vel_uav,
      vel_target: msg.vel_target,
      bias: msg.bias,
      acc_target: msg.acc_target,
      cov_rel_pos: msg.cov_rel_pos,
      cov_vel_uav: msg.cov_vel_uav,
      cov_bias: msg.cov_bias,
      cov_vel_target: msg.cov_vel_target,
      cov_acc_target: msg.cov_acc_target,
    }
  }
}


// Corresponds to px4_msgs__msg__VtolVehicleStatus
/// VEHICLE_VTOL_STATE, should match 1:1 MAVLinks's MAV_VTOL_STATE

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VtolVehicleStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// current state of the vtol, see VEHICLE_VTOL_STATE
    pub vehicle_vtol_state: u8,

    /// vehicle in fixed-wing system failure failsafe mode (after quad-chute)
    pub fixed_wing_system_failure: bool,

}

impl VtolVehicleStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VEHICLE_VTOL_STATE_UNDEFINED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VEHICLE_VTOL_STATE_TRANSITION_TO_FW: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VEHICLE_VTOL_STATE_TRANSITION_TO_MC: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VEHICLE_VTOL_STATE_MC: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VEHICLE_VTOL_STATE_FW: u8 = 4;

}


impl Default for VtolVehicleStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VtolVehicleStatus::default())
  }
}

impl rosidl_runtime_rs::Message for VtolVehicleStatus {
  type RmwMsg = super::msg::rmw::VtolVehicleStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        vehicle_vtol_state: msg.vehicle_vtol_state,
        fixed_wing_system_failure: msg.fixed_wing_system_failure,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      vehicle_vtol_state: msg.vehicle_vtol_state,
      fixed_wing_system_failure: msg.fixed_wing_system_failure,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      vehicle_vtol_state: msg.vehicle_vtol_state,
      fixed_wing_system_failure: msg.fixed_wing_system_failure,
    }
  }
}


// Corresponds to px4_msgs__msg__Vtx

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Vtx {
    /// time since system start (microseconds)
    pub timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub protocol: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,

    /// Band and Channel are 0-indexed! But the user expects a 1-indexed display!
    /// Band number (0-23), negative values indicate frequency mode
    pub band: i8,

    /// Channel number (0-15), negative values indicate frequency mode
    pub channel: i8,

    /// Frequency in MHz, zero indicates unknown
    pub frequency: u16,

    /// Band letter as ASCII
    pub band_letter: u8,

    /// Band name in ASCII without null termination
    pub band_name: [u8; 12],

    /// Also 0-indexed, but the user expects a 1-indexed display!
    /// Current power level (0-15), negative values indicate unknown
    pub power_level: i8,

    /// Current power label in ASCII without null termination
    pub power_label: [u8; 4],

}

impl Vtx {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BAND_NAME_LENGTH: u8 = 12;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const POWER_LABEL_LENGTH: u8 = 4;

    /// No protocol is detected, usually an error
    pub const PROTOCOL_NONE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PROTOCOL_SMART_AUDIO_V1: u8 = 10;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PROTOCOL_SMART_AUDIO_V2: u8 = 20;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PROTOCOL_SMART_AUDIO_V2_1: u8 = 21;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PROTOCOL_TRAMP: u8 = 100;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DEVICE_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DEVICE_PEAK_THOR_T67: u8 = 20;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DEVICE_RUSH_MAX_SOLO: u8 = 40;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_NORMAL: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_PIT: u8 = 1;

}


impl Default for Vtx {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Vtx::default())
  }
}

impl rosidl_runtime_rs::Message for Vtx {
  type RmwMsg = super::msg::rmw::Vtx;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        protocol: msg.protocol,
        device: msg.device,
        mode: msg.mode,
        band: msg.band,
        channel: msg.channel,
        frequency: msg.frequency,
        band_letter: msg.band_letter,
        band_name: msg.band_name,
        power_level: msg.power_level,
        power_label: msg.power_label,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      protocol: msg.protocol,
      device: msg.device,
      mode: msg.mode,
      band: msg.band,
      channel: msg.channel,
      frequency: msg.frequency,
      band_letter: msg.band_letter,
        band_name: msg.band_name,
      power_level: msg.power_level,
        power_label: msg.power_label,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      protocol: msg.protocol,
      device: msg.device,
      mode: msg.mode,
      band: msg.band,
      channel: msg.channel,
      frequency: msg.frequency,
      band_letter: msg.band_letter,
      band_name: msg.band_name,
      power_level: msg.power_level,
      power_label: msg.power_label,
    }
  }
}


// Corresponds to px4_msgs__msg__WheelEncoders

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WheelEncoders {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// Two wheels: 0 right, 1 left
    /// [rad/s]
    pub wheel_speed: [f32; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub wheel_angle: [f32; 2],

}



impl Default for WheelEncoders {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WheelEncoders::default())
  }
}

impl rosidl_runtime_rs::Message for WheelEncoders {
  type RmwMsg = super::msg::rmw::WheelEncoders;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        wheel_speed: msg.wheel_speed,
        wheel_angle: msg.wheel_angle,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        wheel_speed: msg.wheel_speed,
        wheel_angle: msg.wheel_angle,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      wheel_speed: msg.wheel_speed,
      wheel_angle: msg.wheel_angle,
    }
  }
}


// Corresponds to px4_msgs__msg__Wind
/// Wind estimate (from EKF2)
///
/// Contains the system-wide estimate of horizontal wind velocity and its variance.
/// Published by the navigation filter (EKF2) for use by other flight modules and libraries.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Wind {
    /// Time since system start
    pub timestamp: u64,

    /// Timestamp of the raw data
    pub timestamp_sample: u64,

    /// Wind component in north / X direction
    pub windspeed_north: f32,

    /// Wind component in east / Y direction
    pub windspeed_east: f32,

    /// [(m/s)^2] [@invalid 0 if not estimated] Wind estimate error variance in north / X direction
    pub variance_north: f32,

    /// [(m/s)^2] [@invalid 0 if not estimated] Wind estimate error variance in east / Y direction
    pub variance_east: f32,

    /// True airspeed innovation
    pub tas_innov: f32,

    /// True airspeed innovation variance
    pub tas_innov_var: f32,

    /// Sideslip measurement innovation
    pub beta_innov: f32,

    /// Sideslip measurement innovation variance
    pub beta_innov_var: f32,

}

impl Wind {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MESSAGE_VERSION: u32 = 0;

}


impl Default for Wind {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Wind::default())
  }
}

impl rosidl_runtime_rs::Message for Wind {
  type RmwMsg = super::msg::rmw::Wind;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        windspeed_north: msg.windspeed_north,
        windspeed_east: msg.windspeed_east,
        variance_north: msg.variance_north,
        variance_east: msg.variance_east,
        tas_innov: msg.tas_innov,
        tas_innov_var: msg.tas_innov_var,
        beta_innov: msg.beta_innov,
        beta_innov_var: msg.beta_innov_var,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      windspeed_north: msg.windspeed_north,
      windspeed_east: msg.windspeed_east,
      variance_north: msg.variance_north,
      variance_east: msg.variance_east,
      tas_innov: msg.tas_innov,
      tas_innov_var: msg.tas_innov_var,
      beta_innov: msg.beta_innov,
      beta_innov_var: msg.beta_innov_var,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      windspeed_north: msg.windspeed_north,
      windspeed_east: msg.windspeed_east,
      variance_north: msg.variance_north,
      variance_east: msg.variance_east,
      tas_innov: msg.tas_innov,
      tas_innov_var: msg.tas_innov_var,
      beta_innov: msg.beta_innov,
      beta_innov_var: msg.beta_innov_var,
    }
  }
}


// Corresponds to px4_msgs__msg__YawEstimatorStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct YawEstimatorStatus {
    /// time since system start (microseconds)
    pub timestamp: u64,

    /// the timestamp of the raw data (microseconds)
    pub timestamp_sample: u64,

    /// composite yaw from GSF (rad)
    pub yaw_composite: f32,

    /// composite yaw variance from GSF (rad^2)
    pub yaw_variance: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_composite_valid: bool,

    /// yaw estimate for each model in the filter bank (rad)
    pub yaw: [f32; 5],

    /// North velocity innovation for each model in the filter bank (m/s)
    pub innov_vn: [f32; 5],

    /// East velocity innovation for each model in the filter bank (m/s)
    pub innov_ve: [f32; 5],

    /// weighting for each model in the filter bank
    pub weight: [f32; 5],

}



impl Default for YawEstimatorStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::YawEstimatorStatus::default())
  }
}

impl rosidl_runtime_rs::Message for YawEstimatorStatus {
  type RmwMsg = super::msg::rmw::YawEstimatorStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        timestamp_sample: msg.timestamp_sample,
        yaw_composite: msg.yaw_composite,
        yaw_variance: msg.yaw_variance,
        yaw_composite_valid: msg.yaw_composite_valid,
        yaw: msg.yaw,
        innov_vn: msg.innov_vn,
        innov_ve: msg.innov_ve,
        weight: msg.weight,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      yaw_composite: msg.yaw_composite,
      yaw_variance: msg.yaw_variance,
      yaw_composite_valid: msg.yaw_composite_valid,
        yaw: msg.yaw,
        innov_vn: msg.innov_vn,
        innov_ve: msg.innov_ve,
        weight: msg.weight,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      timestamp_sample: msg.timestamp_sample,
      yaw_composite: msg.yaw_composite,
      yaw_variance: msg.yaw_variance,
      yaw_composite_valid: msg.yaw_composite_valid,
      yaw: msg.yaw,
      innov_vn: msg.innov_vn,
      innov_ve: msg.innov_ve,
      weight: msg.weight,
    }
  }
}


