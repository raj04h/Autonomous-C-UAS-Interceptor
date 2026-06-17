# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/GainCompression.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'compression_gains'
# Member 'spectral_damper_hpf'
# Member 'spectral_damper_out'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GainCompression(type):
    """Metaclass of message 'GainCompression'."""

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
                'px4_msgs.msg.GainCompression')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gain_compression
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gain_compression
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gain_compression
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gain_compression
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gain_compression

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GainCompression(metaclass=Metaclass_GainCompression):
    """Message class 'GainCompression'."""

    __slots__ = [
        '_timestamp',
        '_compression_gains',
        '_spectral_damper_hpf',
        '_spectral_damper_out',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'compression_gains': 'float[3]',
        'spectral_damper_hpf': 'float[3]',
        'spectral_damper_out': 'float[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        if 'compression_gains' not in kwargs:
            self.compression_gains = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.compression_gains = kwargs.get('compression_gains')
        if 'spectral_damper_hpf' not in kwargs:
            self.spectral_damper_hpf = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.spectral_damper_hpf = kwargs.get('spectral_damper_hpf')
        if 'spectral_damper_out' not in kwargs:
            self.spectral_damper_out = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.spectral_damper_out = kwargs.get('spectral_damper_out')

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
        if any(self.compression_gains != other.compression_gains):
            return False
        if any(self.spectral_damper_hpf != other.spectral_damper_hpf):
            return False
        if any(self.spectral_damper_out != other.spectral_damper_out):
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
    def compression_gains(self):
        """Message field 'compression_gains'."""
        return self._compression_gains

    @compression_gains.setter
    def compression_gains(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'compression_gains' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'compression_gains' numpy.ndarray() must have a size of 3"
            self._compression_gains = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'compression_gains' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._compression_gains = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def spectral_damper_hpf(self):
        """Message field 'spectral_damper_hpf'."""
        return self._spectral_damper_hpf

    @spectral_damper_hpf.setter
    def spectral_damper_hpf(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'spectral_damper_hpf' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'spectral_damper_hpf' numpy.ndarray() must have a size of 3"
            self._spectral_damper_hpf = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'spectral_damper_hpf' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._spectral_damper_hpf = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def spectral_damper_out(self):
        """Message field 'spectral_damper_out'."""
        return self._spectral_damper_out

    @spectral_damper_out.setter
    def spectral_damper_out(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'spectral_damper_out' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'spectral_damper_out' numpy.ndarray() must have a size of 3"
            self._spectral_damper_out = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'spectral_damper_out' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._spectral_damper_out = numpy.array(value, dtype=numpy.float32)
