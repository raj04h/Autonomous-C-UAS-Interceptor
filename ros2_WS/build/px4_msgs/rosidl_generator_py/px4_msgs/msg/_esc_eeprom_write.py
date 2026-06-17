# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/EscEepromWrite.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'data'
# Member 'write_mask'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EscEepromWrite(type):
    """Metaclass of message 'EscEepromWrite'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ORB_QUEUE_LENGTH': 8,
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
                'px4_msgs.msg.EscEepromWrite')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esc_eeprom_write
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esc_eeprom_write
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esc_eeprom_write
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esc_eeprom_write
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esc_eeprom_write

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ORB_QUEUE_LENGTH': cls.__constants['ORB_QUEUE_LENGTH'],
        }

    @property
    def ORB_QUEUE_LENGTH(self):
        """Message constant 'ORB_QUEUE_LENGTH'."""
        return Metaclass_EscEepromWrite.__constants['ORB_QUEUE_LENGTH']


class EscEepromWrite(metaclass=Metaclass_EscEepromWrite):
    """
    Message class 'EscEepromWrite'.

    Constants:
      ORB_QUEUE_LENGTH
    """

    __slots__ = [
        '_timestamp',
        '_firmware',
        '_index',
        '_length',
        '_data',
        '_write_mask',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'firmware': 'uint8',
        'index': 'uint8',
        'length': 'uint16',
        'data': 'uint8[48]',
        'write_mask': 'uint32[2]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 48),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 2),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.firmware = kwargs.get('firmware', int())
        self.index = kwargs.get('index', int())
        self.length = kwargs.get('length', int())
        if 'data' not in kwargs:
            self.data = numpy.zeros(48, dtype=numpy.uint8)
        else:
            self.data = kwargs.get('data')
        if 'write_mask' not in kwargs:
            self.write_mask = numpy.zeros(2, dtype=numpy.uint32)
        else:
            self.write_mask = kwargs.get('write_mask')

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
        if self.firmware != other.firmware:
            return False
        if self.index != other.index:
            return False
        if self.length != other.length:
            return False
        if any(self.data != other.data):
            return False
        if any(self.write_mask != other.write_mask):
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
    def firmware(self):
        """Message field 'firmware'."""
        return self._firmware

    @firmware.setter
    def firmware(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'firmware' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'firmware' field must be an unsigned integer in [0, 255]"
        self._firmware = value

    @builtins.property
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'index' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'index' field must be an unsigned integer in [0, 255]"
        self._index = value

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'length' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'length' field must be an unsigned integer in [0, 65535]"
        self._length = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'data' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 48, \
                "The 'data' numpy.ndarray() must have a size of 48"
            self._data = value
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
                 len(value) == 48 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence with length 48 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def write_mask(self):
        """Message field 'write_mask'."""
        return self._write_mask

    @write_mask.setter
    def write_mask(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'write_mask' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 2, \
                "The 'write_mask' numpy.ndarray() must have a size of 2"
            self._write_mask = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'write_mask' field must be a set or sequence with length 2 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._write_mask = numpy.array(value, dtype=numpy.uint32)
