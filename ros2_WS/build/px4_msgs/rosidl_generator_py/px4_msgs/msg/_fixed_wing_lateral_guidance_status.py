# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/FixedWingLateralGuidanceStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FixedWingLateralGuidanceStatus(type):
    """Metaclass of message 'FixedWingLateralGuidanceStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'px4_msgs.msg.FixedWingLateralGuidanceStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fixed_wing_lateral_guidance_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fixed_wing_lateral_guidance_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fixed_wing_lateral_guidance_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fixed_wing_lateral_guidance_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fixed_wing_lateral_guidance_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FixedWingLateralGuidanceStatus(metaclass=Metaclass_FixedWingLateralGuidanceStatus):
    """Message class 'FixedWingLateralGuidanceStatus'."""

    __slots__ = [
        '_timestamp',
        '_course_setpoint',
        '_lateral_acceleration_ff',
        '_bearing_feas',
        '_bearing_feas_on_track',
        '_signed_track_error',
        '_track_error_bound',
        '_switch_distance',
        '_adapted_period',
        '_wind_est_valid',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'course_setpoint': 'float',
        'lateral_acceleration_ff': 'float',
        'bearing_feas': 'float',
        'bearing_feas_on_track': 'float',
        'signed_track_error': 'float',
        'track_error_bound': 'float',
        'switch_distance': 'float',
        'adapted_period': 'float',
        'wind_est_valid': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.course_setpoint = kwargs.get('course_setpoint', float())
        self.lateral_acceleration_ff = kwargs.get('lateral_acceleration_ff', float())
        self.bearing_feas = kwargs.get('bearing_feas', float())
        self.bearing_feas_on_track = kwargs.get('bearing_feas_on_track', float())
        self.signed_track_error = kwargs.get('signed_track_error', float())
        self.track_error_bound = kwargs.get('track_error_bound', float())
        self.switch_distance = kwargs.get('switch_distance', float())
        self.adapted_period = kwargs.get('adapted_period', float())
        self.wind_est_valid = kwargs.get('wind_est_valid', int())

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
        if self.course_setpoint != other.course_setpoint:
            return False
        if self.lateral_acceleration_ff != other.lateral_acceleration_ff:
            return False
        if self.bearing_feas != other.bearing_feas:
            return False
        if self.bearing_feas_on_track != other.bearing_feas_on_track:
            return False
        if self.signed_track_error != other.signed_track_error:
            return False
        if self.track_error_bound != other.track_error_bound:
            return False
        if self.switch_distance != other.switch_distance:
            return False
        if self.adapted_period != other.adapted_period:
            return False
        if self.wind_est_valid != other.wind_est_valid:
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
    def course_setpoint(self):
        """Message field 'course_setpoint'."""
        return self._course_setpoint

    @course_setpoint.setter
    def course_setpoint(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'course_setpoint' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'course_setpoint' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._course_setpoint = value

    @builtins.property
    def lateral_acceleration_ff(self):
        """Message field 'lateral_acceleration_ff'."""
        return self._lateral_acceleration_ff

    @lateral_acceleration_ff.setter
    def lateral_acceleration_ff(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lateral_acceleration_ff' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lateral_acceleration_ff' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lateral_acceleration_ff = value

    @builtins.property
    def bearing_feas(self):
        """Message field 'bearing_feas'."""
        return self._bearing_feas

    @bearing_feas.setter
    def bearing_feas(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bearing_feas' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'bearing_feas' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._bearing_feas = value

    @builtins.property
    def bearing_feas_on_track(self):
        """Message field 'bearing_feas_on_track'."""
        return self._bearing_feas_on_track

    @bearing_feas_on_track.setter
    def bearing_feas_on_track(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bearing_feas_on_track' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'bearing_feas_on_track' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._bearing_feas_on_track = value

    @builtins.property
    def signed_track_error(self):
        """Message field 'signed_track_error'."""
        return self._signed_track_error

    @signed_track_error.setter
    def signed_track_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'signed_track_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'signed_track_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._signed_track_error = value

    @builtins.property
    def track_error_bound(self):
        """Message field 'track_error_bound'."""
        return self._track_error_bound

    @track_error_bound.setter
    def track_error_bound(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'track_error_bound' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'track_error_bound' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._track_error_bound = value

    @builtins.property
    def switch_distance(self):
        """Message field 'switch_distance'."""
        return self._switch_distance

    @switch_distance.setter
    def switch_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'switch_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'switch_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._switch_distance = value

    @builtins.property
    def adapted_period(self):
        """Message field 'adapted_period'."""
        return self._adapted_period

    @adapted_period.setter
    def adapted_period(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'adapted_period' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'adapted_period' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._adapted_period = value

    @builtins.property
    def wind_est_valid(self):
        """Message field 'wind_est_valid'."""
        return self._wind_est_valid

    @wind_est_valid.setter
    def wind_est_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wind_est_valid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'wind_est_valid' field must be an unsigned integer in [0, 255]"
        self._wind_est_valid = value
