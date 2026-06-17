# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/PurePursuitStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PurePursuitStatus(type):
    """Metaclass of message 'PurePursuitStatus'."""

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
                'px4_msgs.msg.PurePursuitStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pure_pursuit_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pure_pursuit_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pure_pursuit_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pure_pursuit_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pure_pursuit_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PurePursuitStatus(metaclass=Metaclass_PurePursuitStatus):
    """Message class 'PurePursuitStatus'."""

    __slots__ = [
        '_timestamp',
        '_lookahead_distance',
        '_target_bearing',
        '_crosstrack_error',
        '_distance_to_waypoint',
        '_bearing_to_waypoint',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'lookahead_distance': 'float',
        'target_bearing': 'float',
        'crosstrack_error': 'float',
        'distance_to_waypoint': 'float',
        'bearing_to_waypoint': 'float',
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
        self.lookahead_distance = kwargs.get('lookahead_distance', float())
        self.target_bearing = kwargs.get('target_bearing', float())
        self.crosstrack_error = kwargs.get('crosstrack_error', float())
        self.distance_to_waypoint = kwargs.get('distance_to_waypoint', float())
        self.bearing_to_waypoint = kwargs.get('bearing_to_waypoint', float())

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
        if self.lookahead_distance != other.lookahead_distance:
            return False
        if self.target_bearing != other.target_bearing:
            return False
        if self.crosstrack_error != other.crosstrack_error:
            return False
        if self.distance_to_waypoint != other.distance_to_waypoint:
            return False
        if self.bearing_to_waypoint != other.bearing_to_waypoint:
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
    def lookahead_distance(self):
        """Message field 'lookahead_distance'."""
        return self._lookahead_distance

    @lookahead_distance.setter
    def lookahead_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lookahead_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lookahead_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lookahead_distance = value

    @builtins.property
    def target_bearing(self):
        """Message field 'target_bearing'."""
        return self._target_bearing

    @target_bearing.setter
    def target_bearing(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_bearing' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_bearing' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_bearing = value

    @builtins.property
    def crosstrack_error(self):
        """Message field 'crosstrack_error'."""
        return self._crosstrack_error

    @crosstrack_error.setter
    def crosstrack_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'crosstrack_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'crosstrack_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._crosstrack_error = value

    @builtins.property
    def distance_to_waypoint(self):
        """Message field 'distance_to_waypoint'."""
        return self._distance_to_waypoint

    @distance_to_waypoint.setter
    def distance_to_waypoint(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_to_waypoint' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_to_waypoint' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_to_waypoint = value

    @builtins.property
    def bearing_to_waypoint(self):
        """Message field 'bearing_to_waypoint'."""
        return self._bearing_to_waypoint

    @bearing_to_waypoint.setter
    def bearing_to_waypoint(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bearing_to_waypoint' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'bearing_to_waypoint' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._bearing_to_waypoint = value
