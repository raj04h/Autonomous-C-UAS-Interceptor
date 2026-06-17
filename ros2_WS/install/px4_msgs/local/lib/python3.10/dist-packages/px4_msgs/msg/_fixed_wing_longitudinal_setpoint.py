# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/FixedWingLongitudinalSetpoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FixedWingLongitudinalSetpoint(type):
    """Metaclass of message 'FixedWingLongitudinalSetpoint'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MESSAGE_VERSION': 0,
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
                'px4_msgs.msg.FixedWingLongitudinalSetpoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fixed_wing_longitudinal_setpoint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fixed_wing_longitudinal_setpoint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fixed_wing_longitudinal_setpoint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fixed_wing_longitudinal_setpoint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fixed_wing_longitudinal_setpoint

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MESSAGE_VERSION': cls.__constants['MESSAGE_VERSION'],
        }

    @property
    def MESSAGE_VERSION(self):
        """Message constant 'MESSAGE_VERSION'."""
        return Metaclass_FixedWingLongitudinalSetpoint.__constants['MESSAGE_VERSION']


class FixedWingLongitudinalSetpoint(metaclass=Metaclass_FixedWingLongitudinalSetpoint):
    """
    Message class 'FixedWingLongitudinalSetpoint'.

    Constants:
      MESSAGE_VERSION
    """

    __slots__ = [
        '_timestamp',
        '_altitude',
        '_height_rate',
        '_equivalent_airspeed',
        '_pitch_direct',
        '_throttle_direct',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'altitude': 'float',
        'height_rate': 'float',
        'equivalent_airspeed': 'float',
        'pitch_direct': 'float',
        'throttle_direct': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.altitude = kwargs.get('altitude', float())
        self.height_rate = kwargs.get('height_rate', float())
        self.equivalent_airspeed = kwargs.get('equivalent_airspeed', float())
        self.pitch_direct = kwargs.get('pitch_direct', float())
        self.throttle_direct = kwargs.get('throttle_direct', float())

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
        if self.altitude != other.altitude:
            return False
        if self.height_rate != other.height_rate:
            return False
        if self.equivalent_airspeed != other.equivalent_airspeed:
            return False
        if self.pitch_direct != other.pitch_direct:
            return False
        if self.throttle_direct != other.throttle_direct:
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
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'altitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._altitude = value

    @builtins.property
    def height_rate(self):
        """Message field 'height_rate'."""
        return self._height_rate

    @height_rate.setter
    def height_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'height_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._height_rate = value

    @builtins.property
    def equivalent_airspeed(self):
        """Message field 'equivalent_airspeed'."""
        return self._equivalent_airspeed

    @equivalent_airspeed.setter
    def equivalent_airspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'equivalent_airspeed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'equivalent_airspeed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._equivalent_airspeed = value

    @builtins.property
    def pitch_direct(self):
        """Message field 'pitch_direct'."""
        return self._pitch_direct

    @pitch_direct.setter
    def pitch_direct(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_direct' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_direct' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_direct = value

    @builtins.property
    def throttle_direct(self):
        """Message field 'throttle_direct'."""
        return self._throttle_direct

    @throttle_direct.setter
    def throttle_direct(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle_direct' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'throttle_direct' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._throttle_direct = value
