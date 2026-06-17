# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/OpenDroneIdSelfId.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'id_or_mac'
# Member 'description'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OpenDroneIdSelfId(type):
    """Metaclass of message 'OpenDroneIdSelfId'."""

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
                'px4_msgs.msg.OpenDroneIdSelfId')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__open_drone_id_self_id
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__open_drone_id_self_id
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__open_drone_id_self_id
            cls._TYPE_SUPPORT = module.type_support_msg__msg__open_drone_id_self_id
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__open_drone_id_self_id

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OpenDroneIdSelfId(metaclass=Metaclass_OpenDroneIdSelfId):
    """Message class 'OpenDroneIdSelfId'."""

    __slots__ = [
        '_timestamp',
        '_id_or_mac',
        '_description_type',
        '_description',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'id_or_mac': 'uint8[20]',
        'description_type': 'uint8',
        'description': 'uint8[23]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 20),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 23),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        if 'id_or_mac' not in kwargs:
            self.id_or_mac = numpy.zeros(20, dtype=numpy.uint8)
        else:
            self.id_or_mac = kwargs.get('id_or_mac')
        self.description_type = kwargs.get('description_type', int())
        if 'description' not in kwargs:
            self.description = numpy.zeros(23, dtype=numpy.uint8)
        else:
            self.description = kwargs.get('description')

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
        if any(self.id_or_mac != other.id_or_mac):
            return False
        if self.description_type != other.description_type:
            return False
        if any(self.description != other.description):
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
    def id_or_mac(self):
        """Message field 'id_or_mac'."""
        return self._id_or_mac

    @id_or_mac.setter
    def id_or_mac(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'id_or_mac' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 20, \
                "The 'id_or_mac' numpy.ndarray() must have a size of 20"
            self._id_or_mac = value
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
                 len(value) == 20 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'id_or_mac' field must be a set or sequence with length 20 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._id_or_mac = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def description_type(self):
        """Message field 'description_type'."""
        return self._description_type

    @description_type.setter
    def description_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'description_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'description_type' field must be an unsigned integer in [0, 255]"
        self._description_type = value

    @builtins.property
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'description' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 23, \
                "The 'description' numpy.ndarray() must have a size of 23"
            self._description = value
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
                 len(value) == 23 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'description' field must be a set or sequence with length 23 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._description = numpy.array(value, dtype=numpy.uint8)
