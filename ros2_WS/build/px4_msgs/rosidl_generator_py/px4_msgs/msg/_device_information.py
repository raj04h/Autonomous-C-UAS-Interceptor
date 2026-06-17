# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/DeviceInformation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'name'
# Member 'firmware_version'
# Member 'hardware_version'
# Member 'serial_number'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DeviceInformation(type):
    """Metaclass of message 'DeviceInformation'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DEVICE_TYPE_GENERIC': 0,
        'DEVICE_TYPE_AIRSPEED': 1,
        'DEVICE_TYPE_ESC': 2,
        'DEVICE_TYPE_SERVO': 3,
        'DEVICE_TYPE_GPS': 4,
        'DEVICE_TYPE_MAGNETOMETER': 5,
        'DEVICE_TYPE_PARACHUTE': 6,
        'DEVICE_TYPE_RANGEFINDER': 7,
        'DEVICE_TYPE_WINCH': 8,
        'DEVICE_TYPE_BAROMETER': 9,
        'DEVICE_TYPE_OPTICAL_FLOW': 10,
        'DEVICE_TYPE_ACCELEROMETER': 11,
        'DEVICE_TYPE_GYROSCOPE': 12,
        'DEVICE_TYPE_DIFFERENTIAL_PRESSURE': 13,
        'DEVICE_TYPE_BATTERY': 14,
        'DEVICE_TYPE_HYGROMETER': 15,
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
                'px4_msgs.msg.DeviceInformation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__device_information
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__device_information
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__device_information
            cls._TYPE_SUPPORT = module.type_support_msg__msg__device_information
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__device_information

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DEVICE_TYPE_GENERIC': cls.__constants['DEVICE_TYPE_GENERIC'],
            'DEVICE_TYPE_AIRSPEED': cls.__constants['DEVICE_TYPE_AIRSPEED'],
            'DEVICE_TYPE_ESC': cls.__constants['DEVICE_TYPE_ESC'],
            'DEVICE_TYPE_SERVO': cls.__constants['DEVICE_TYPE_SERVO'],
            'DEVICE_TYPE_GPS': cls.__constants['DEVICE_TYPE_GPS'],
            'DEVICE_TYPE_MAGNETOMETER': cls.__constants['DEVICE_TYPE_MAGNETOMETER'],
            'DEVICE_TYPE_PARACHUTE': cls.__constants['DEVICE_TYPE_PARACHUTE'],
            'DEVICE_TYPE_RANGEFINDER': cls.__constants['DEVICE_TYPE_RANGEFINDER'],
            'DEVICE_TYPE_WINCH': cls.__constants['DEVICE_TYPE_WINCH'],
            'DEVICE_TYPE_BAROMETER': cls.__constants['DEVICE_TYPE_BAROMETER'],
            'DEVICE_TYPE_OPTICAL_FLOW': cls.__constants['DEVICE_TYPE_OPTICAL_FLOW'],
            'DEVICE_TYPE_ACCELEROMETER': cls.__constants['DEVICE_TYPE_ACCELEROMETER'],
            'DEVICE_TYPE_GYROSCOPE': cls.__constants['DEVICE_TYPE_GYROSCOPE'],
            'DEVICE_TYPE_DIFFERENTIAL_PRESSURE': cls.__constants['DEVICE_TYPE_DIFFERENTIAL_PRESSURE'],
            'DEVICE_TYPE_BATTERY': cls.__constants['DEVICE_TYPE_BATTERY'],
            'DEVICE_TYPE_HYGROMETER': cls.__constants['DEVICE_TYPE_HYGROMETER'],
        }

    @property
    def DEVICE_TYPE_GENERIC(self):
        """Message constant 'DEVICE_TYPE_GENERIC'."""
        return Metaclass_DeviceInformation.__constants['DEVICE_TYPE_GENERIC']

    @property
    def DEVICE_TYPE_AIRSPEED(self):
        """Message constant 'DEVICE_TYPE_AIRSPEED'."""
        return Metaclass_DeviceInformation.__constants['DEVICE_TYPE_AIRSPEED']

    @property
    def DEVICE_TYPE_ESC(self):
        """Message constant 'DEVICE_TYPE_ESC'."""
        return Metaclass_DeviceInformation.__constants['DEVICE_TYPE_ESC']

    @property
    def DEVICE_TYPE_SERVO(self):
        """Message constant 'DEVICE_TYPE_SERVO'."""
        return Metaclass_DeviceInformation.__constants['DEVICE_TYPE_SERVO']

    @property
    def DEVICE_TYPE_GPS(self):
        """Message constant 'DEVICE_TYPE_GPS'."""
        return Metaclass_DeviceInformation.__constants['DEVICE_TYPE_GPS']

    @property
    def DEVICE_TYPE_MAGNETOMETER(self):
        """Message constant 'DEVICE_TYPE_MAGNETOMETER'."""
        return Metaclass_DeviceInformation.__constants['DEVICE_TYPE_MAGNETOMETER']

    @property
    def DEVICE_TYPE_PARACHUTE(self):
        """Message constant 'DEVICE_TYPE_PARACHUTE'."""
        return Metaclass_DeviceInformation.__constants['DEVICE_TYPE_PARACHUTE']

    @property
    def DEVICE_TYPE_RANGEFINDER(self):
        """Message constant 'DEVICE_TYPE_RANGEFINDER'."""
        return Metaclass_DeviceInformation.__constants['DEVICE_TYPE_RANGEFINDER']

    @property
    def DEVICE_TYPE_WINCH(self):
        """Message constant 'DEVICE_TYPE_WINCH'."""
        return Metaclass_DeviceInformation.__constants['DEVICE_TYPE_WINCH']

    @property
    def DEVICE_TYPE_BAROMETER(self):
        """Message constant 'DEVICE_TYPE_BAROMETER'."""
        return Metaclass_DeviceInformation.__constants['DEVICE_TYPE_BAROMETER']

    @property
    def DEVICE_TYPE_OPTICAL_FLOW(self):
        """Message constant 'DEVICE_TYPE_OPTICAL_FLOW'."""
        return Metaclass_DeviceInformation.__constants['DEVICE_TYPE_OPTICAL_FLOW']

    @property
    def DEVICE_TYPE_ACCELEROMETER(self):
        """Message constant 'DEVICE_TYPE_ACCELEROMETER'."""
        return Metaclass_DeviceInformation.__constants['DEVICE_TYPE_ACCELEROMETER']

    @property
    def DEVICE_TYPE_GYROSCOPE(self):
        """Message constant 'DEVICE_TYPE_GYROSCOPE'."""
        return Metaclass_DeviceInformation.__constants['DEVICE_TYPE_GYROSCOPE']

    @property
    def DEVICE_TYPE_DIFFERENTIAL_PRESSURE(self):
        """Message constant 'DEVICE_TYPE_DIFFERENTIAL_PRESSURE'."""
        return Metaclass_DeviceInformation.__constants['DEVICE_TYPE_DIFFERENTIAL_PRESSURE']

    @property
    def DEVICE_TYPE_BATTERY(self):
        """Message constant 'DEVICE_TYPE_BATTERY'."""
        return Metaclass_DeviceInformation.__constants['DEVICE_TYPE_BATTERY']

    @property
    def DEVICE_TYPE_HYGROMETER(self):
        """Message constant 'DEVICE_TYPE_HYGROMETER'."""
        return Metaclass_DeviceInformation.__constants['DEVICE_TYPE_HYGROMETER']


class DeviceInformation(metaclass=Metaclass_DeviceInformation):
    """
    Message class 'DeviceInformation'.

    Constants:
      DEVICE_TYPE_GENERIC
      DEVICE_TYPE_AIRSPEED
      DEVICE_TYPE_ESC
      DEVICE_TYPE_SERVO
      DEVICE_TYPE_GPS
      DEVICE_TYPE_MAGNETOMETER
      DEVICE_TYPE_PARACHUTE
      DEVICE_TYPE_RANGEFINDER
      DEVICE_TYPE_WINCH
      DEVICE_TYPE_BAROMETER
      DEVICE_TYPE_OPTICAL_FLOW
      DEVICE_TYPE_ACCELEROMETER
      DEVICE_TYPE_GYROSCOPE
      DEVICE_TYPE_DIFFERENTIAL_PRESSURE
      DEVICE_TYPE_BATTERY
      DEVICE_TYPE_HYGROMETER
    """

    __slots__ = [
        '_timestamp',
        '_device_type',
        '_name',
        '_device_id',
        '_firmware_version',
        '_hardware_version',
        '_serial_number',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'device_type': 'uint8',
        'name': 'uint8[80]',
        'device_id': 'uint32',
        'firmware_version': 'uint8[24]',
        'hardware_version': 'uint8[24]',
        'serial_number': 'uint8[33]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 80),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 24),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 24),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 33),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.device_type = kwargs.get('device_type', int())
        if 'name' not in kwargs:
            self.name = numpy.zeros(80, dtype=numpy.uint8)
        else:
            self.name = kwargs.get('name')
        self.device_id = kwargs.get('device_id', int())
        if 'firmware_version' not in kwargs:
            self.firmware_version = numpy.zeros(24, dtype=numpy.uint8)
        else:
            self.firmware_version = kwargs.get('firmware_version')
        if 'hardware_version' not in kwargs:
            self.hardware_version = numpy.zeros(24, dtype=numpy.uint8)
        else:
            self.hardware_version = kwargs.get('hardware_version')
        if 'serial_number' not in kwargs:
            self.serial_number = numpy.zeros(33, dtype=numpy.uint8)
        else:
            self.serial_number = kwargs.get('serial_number')

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
        if self.device_type != other.device_type:
            return False
        if any(self.name != other.name):
            return False
        if self.device_id != other.device_id:
            return False
        if any(self.firmware_version != other.firmware_version):
            return False
        if any(self.hardware_version != other.hardware_version):
            return False
        if any(self.serial_number != other.serial_number):
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
    def device_type(self):
        """Message field 'device_type'."""
        return self._device_type

    @device_type.setter
    def device_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'device_type' field must be an unsigned integer in [0, 255]"
        self._device_type = value

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'name' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 80, \
                "The 'name' numpy.ndarray() must have a size of 80"
            self._name = value
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
                 len(value) == 80 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'name' field must be a set or sequence with length 80 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._name = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def device_id(self):
        """Message field 'device_id'."""
        return self._device_id

    @device_id.setter
    def device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'device_id' field must be an unsigned integer in [0, 4294967295]"
        self._device_id = value

    @builtins.property
    def firmware_version(self):
        """Message field 'firmware_version'."""
        return self._firmware_version

    @firmware_version.setter
    def firmware_version(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'firmware_version' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 24, \
                "The 'firmware_version' numpy.ndarray() must have a size of 24"
            self._firmware_version = value
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
                 len(value) == 24 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'firmware_version' field must be a set or sequence with length 24 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._firmware_version = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def hardware_version(self):
        """Message field 'hardware_version'."""
        return self._hardware_version

    @hardware_version.setter
    def hardware_version(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'hardware_version' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 24, \
                "The 'hardware_version' numpy.ndarray() must have a size of 24"
            self._hardware_version = value
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
                 len(value) == 24 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'hardware_version' field must be a set or sequence with length 24 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._hardware_version = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def serial_number(self):
        """Message field 'serial_number'."""
        return self._serial_number

    @serial_number.setter
    def serial_number(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'serial_number' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 33, \
                "The 'serial_number' numpy.ndarray() must have a size of 33"
            self._serial_number = value
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
                 len(value) == 33 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'serial_number' field must be a set or sequence with length 33 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._serial_number = numpy.array(value, dtype=numpy.uint8)
