# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/RoverPositionSetpoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'position_ned'
# Member 'start_ned'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RoverPositionSetpoint(type):
    """Metaclass of message 'RoverPositionSetpoint'."""

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
                'px4_msgs.msg.RoverPositionSetpoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rover_position_setpoint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rover_position_setpoint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rover_position_setpoint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rover_position_setpoint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rover_position_setpoint

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RoverPositionSetpoint(metaclass=Metaclass_RoverPositionSetpoint):
    """Message class 'RoverPositionSetpoint'."""

    __slots__ = [
        '_timestamp',
        '_position_ned',
        '_start_ned',
        '_cruising_speed',
        '_arrival_speed',
        '_yaw',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'position_ned': 'float[2]',
        'start_ned': 'float[2]',
        'cruising_speed': 'float',
        'arrival_speed': 'float',
        'yaw': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        if 'position_ned' not in kwargs:
            self.position_ned = numpy.zeros(2, dtype=numpy.float32)
        else:
            self.position_ned = kwargs.get('position_ned')
        if 'start_ned' not in kwargs:
            self.start_ned = numpy.zeros(2, dtype=numpy.float32)
        else:
            self.start_ned = kwargs.get('start_ned')
        self.cruising_speed = kwargs.get('cruising_speed', float())
        self.arrival_speed = kwargs.get('arrival_speed', float())
        self.yaw = kwargs.get('yaw', float())

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
        if any(self.position_ned != other.position_ned):
            return False
        if any(self.start_ned != other.start_ned):
            return False
        if self.cruising_speed != other.cruising_speed:
            return False
        if self.arrival_speed != other.arrival_speed:
            return False
        if self.yaw != other.yaw:
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
    def position_ned(self):
        """Message field 'position_ned'."""
        return self._position_ned

    @position_ned.setter
    def position_ned(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'position_ned' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'position_ned' numpy.ndarray() must have a size of 2"
            self._position_ned = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'position_ned' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._position_ned = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def start_ned(self):
        """Message field 'start_ned'."""
        return self._start_ned

    @start_ned.setter
    def start_ned(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'start_ned' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'start_ned' numpy.ndarray() must have a size of 2"
            self._start_ned = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'start_ned' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._start_ned = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def cruising_speed(self):
        """Message field 'cruising_speed'."""
        return self._cruising_speed

    @cruising_speed.setter
    def cruising_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cruising_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cruising_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cruising_speed = value

    @builtins.property
    def arrival_speed(self):
        """Message field 'arrival_speed'."""
        return self._arrival_speed

    @arrival_speed.setter
    def arrival_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arrival_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arrival_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arrival_speed = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw = value
