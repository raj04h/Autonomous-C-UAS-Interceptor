# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/LongitudinalControlConfiguration.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LongitudinalControlConfiguration(type):
    """Metaclass of message 'LongitudinalControlConfiguration'."""

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
                'px4_msgs.msg.LongitudinalControlConfiguration')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__longitudinal_control_configuration
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__longitudinal_control_configuration
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__longitudinal_control_configuration
            cls._TYPE_SUPPORT = module.type_support_msg__msg__longitudinal_control_configuration
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__longitudinal_control_configuration

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
        return Metaclass_LongitudinalControlConfiguration.__constants['MESSAGE_VERSION']


class LongitudinalControlConfiguration(metaclass=Metaclass_LongitudinalControlConfiguration):
    """
    Message class 'LongitudinalControlConfiguration'.

    Constants:
      MESSAGE_VERSION
    """

    __slots__ = [
        '_timestamp',
        '_pitch_min',
        '_pitch_max',
        '_throttle_min',
        '_throttle_max',
        '_climb_rate_target',
        '_sink_rate_target',
        '_speed_weight',
        '_enforce_low_height_condition',
        '_disable_underspeed_protection',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'pitch_min': 'float',
        'pitch_max': 'float',
        'throttle_min': 'float',
        'throttle_max': 'float',
        'climb_rate_target': 'float',
        'sink_rate_target': 'float',
        'speed_weight': 'float',
        'enforce_low_height_condition': 'boolean',
        'disable_underspeed_protection': 'boolean',
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
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.pitch_min = kwargs.get('pitch_min', float())
        self.pitch_max = kwargs.get('pitch_max', float())
        self.throttle_min = kwargs.get('throttle_min', float())
        self.throttle_max = kwargs.get('throttle_max', float())
        self.climb_rate_target = kwargs.get('climb_rate_target', float())
        self.sink_rate_target = kwargs.get('sink_rate_target', float())
        self.speed_weight = kwargs.get('speed_weight', float())
        self.enforce_low_height_condition = kwargs.get('enforce_low_height_condition', bool())
        self.disable_underspeed_protection = kwargs.get('disable_underspeed_protection', bool())

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
        if self.pitch_min != other.pitch_min:
            return False
        if self.pitch_max != other.pitch_max:
            return False
        if self.throttle_min != other.throttle_min:
            return False
        if self.throttle_max != other.throttle_max:
            return False
        if self.climb_rate_target != other.climb_rate_target:
            return False
        if self.sink_rate_target != other.sink_rate_target:
            return False
        if self.speed_weight != other.speed_weight:
            return False
        if self.enforce_low_height_condition != other.enforce_low_height_condition:
            return False
        if self.disable_underspeed_protection != other.disable_underspeed_protection:
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
    def pitch_min(self):
        """Message field 'pitch_min'."""
        return self._pitch_min

    @pitch_min.setter
    def pitch_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_min = value

    @builtins.property
    def pitch_max(self):
        """Message field 'pitch_max'."""
        return self._pitch_max

    @pitch_max.setter
    def pitch_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_max = value

    @builtins.property
    def throttle_min(self):
        """Message field 'throttle_min'."""
        return self._throttle_min

    @throttle_min.setter
    def throttle_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'throttle_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._throttle_min = value

    @builtins.property
    def throttle_max(self):
        """Message field 'throttle_max'."""
        return self._throttle_max

    @throttle_max.setter
    def throttle_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'throttle_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._throttle_max = value

    @builtins.property
    def climb_rate_target(self):
        """Message field 'climb_rate_target'."""
        return self._climb_rate_target

    @climb_rate_target.setter
    def climb_rate_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'climb_rate_target' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'climb_rate_target' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._climb_rate_target = value

    @builtins.property
    def sink_rate_target(self):
        """Message field 'sink_rate_target'."""
        return self._sink_rate_target

    @sink_rate_target.setter
    def sink_rate_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sink_rate_target' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sink_rate_target' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sink_rate_target = value

    @builtins.property
    def speed_weight(self):
        """Message field 'speed_weight'."""
        return self._speed_weight

    @speed_weight.setter
    def speed_weight(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_weight' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_weight' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_weight = value

    @builtins.property
    def enforce_low_height_condition(self):
        """Message field 'enforce_low_height_condition'."""
        return self._enforce_low_height_condition

    @enforce_low_height_condition.setter
    def enforce_low_height_condition(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enforce_low_height_condition' field must be of type 'bool'"
        self._enforce_low_height_condition = value

    @builtins.property
    def disable_underspeed_protection(self):
        """Message field 'disable_underspeed_protection'."""
        return self._disable_underspeed_protection

    @disable_underspeed_protection.setter
    def disable_underspeed_protection(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'disable_underspeed_protection' field must be of type 'bool'"
        self._disable_underspeed_protection = value
