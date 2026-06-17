# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/FixedWingRunwayControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FixedWingRunwayControl(type):
    """Metaclass of message 'FixedWingRunwayControl'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATE_THROTTLE_RAMP': 0,
        'STATE_CLAMPED_TO_RUNWAY': 1,
        'STATE_CLIMBOUT': 2,
        'STATE_FLYING': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('px4_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'px4_msgs.msg.FixedWingRunwayControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fixed_wing_runway_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fixed_wing_runway_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fixed_wing_runway_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fixed_wing_runway_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fixed_wing_runway_control

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATE_THROTTLE_RAMP': cls.__constants['STATE_THROTTLE_RAMP'],
            'STATE_CLAMPED_TO_RUNWAY': cls.__constants['STATE_CLAMPED_TO_RUNWAY'],
            'STATE_CLIMBOUT': cls.__constants['STATE_CLIMBOUT'],
            'STATE_FLYING': cls.__constants['STATE_FLYING'],
        }

    @property
    def STATE_THROTTLE_RAMP(self):
        """Message constant 'STATE_THROTTLE_RAMP'."""
        return Metaclass_FixedWingRunwayControl.__constants['STATE_THROTTLE_RAMP']

    @property
    def STATE_CLAMPED_TO_RUNWAY(self):
        """Message constant 'STATE_CLAMPED_TO_RUNWAY'."""
        return Metaclass_FixedWingRunwayControl.__constants['STATE_CLAMPED_TO_RUNWAY']

    @property
    def STATE_CLIMBOUT(self):
        """Message constant 'STATE_CLIMBOUT'."""
        return Metaclass_FixedWingRunwayControl.__constants['STATE_CLIMBOUT']

    @property
    def STATE_FLYING(self):
        """Message constant 'STATE_FLYING'."""
        return Metaclass_FixedWingRunwayControl.__constants['STATE_FLYING']


class FixedWingRunwayControl(metaclass=Metaclass_FixedWingRunwayControl):
    """
    Message class 'FixedWingRunwayControl'.

    Constants:
      STATE_THROTTLE_RAMP
      STATE_CLAMPED_TO_RUNWAY
      STATE_CLIMBOUT
      STATE_FLYING
    """

    __slots__ = [
        '_timestamp',
        '_runway_takeoff_state',
        '_wheel_steering_enabled',
        '_wheel_steering_nudging_rate',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'runway_takeoff_state': 'uint8',
        'wheel_steering_enabled': 'boolean',
        'wheel_steering_nudging_rate': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.runway_takeoff_state = kwargs.get('runway_takeoff_state', int())
        self.wheel_steering_enabled = kwargs.get('wheel_steering_enabled', bool())
        self.wheel_steering_nudging_rate = kwargs.get('wheel_steering_nudging_rate', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.runway_takeoff_state != other.runway_takeoff_state:
            return False
        if self.wheel_steering_enabled != other.wheel_steering_enabled:
            return False
        if self.wheel_steering_nudging_rate != other.wheel_steering_nudging_rate:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @builtins.property
    def runway_takeoff_state(self):
        """Message field 'runway_takeoff_state'."""
        return self._runway_takeoff_state

    @runway_takeoff_state.setter
    def runway_takeoff_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'runway_takeoff_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'runway_takeoff_state' field must be an unsigned integer in [0, 255]"
        self._runway_takeoff_state = value

    @builtins.property
    def wheel_steering_enabled(self):
        """Message field 'wheel_steering_enabled'."""
        return self._wheel_steering_enabled

    @wheel_steering_enabled.setter
    def wheel_steering_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wheel_steering_enabled' field must be of type 'bool'"
        self._wheel_steering_enabled = value

    @builtins.property
    def wheel_steering_nudging_rate(self):
        """Message field 'wheel_steering_nudging_rate'."""
        return self._wheel_steering_nudging_rate

    @wheel_steering_nudging_rate.setter
    def wheel_steering_nudging_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_steering_nudging_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheel_steering_nudging_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheel_steering_nudging_rate = value
