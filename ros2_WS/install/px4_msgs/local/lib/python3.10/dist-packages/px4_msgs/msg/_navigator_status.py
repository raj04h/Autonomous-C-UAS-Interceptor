# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/NavigatorStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NavigatorStatus(type):
    """Metaclass of message 'NavigatorStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FAILURE_NONE': 0,
        'FAILURE_HAGL': 1,
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
                'px4_msgs.msg.NavigatorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__navigator_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__navigator_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__navigator_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__navigator_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__navigator_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FAILURE_NONE': cls.__constants['FAILURE_NONE'],
            'FAILURE_HAGL': cls.__constants['FAILURE_HAGL'],
        }

    @property
    def FAILURE_NONE(self):
        """Message constant 'FAILURE_NONE'."""
        return Metaclass_NavigatorStatus.__constants['FAILURE_NONE']

    @property
    def FAILURE_HAGL(self):
        """Message constant 'FAILURE_HAGL'."""
        return Metaclass_NavigatorStatus.__constants['FAILURE_HAGL']


class NavigatorStatus(metaclass=Metaclass_NavigatorStatus):
    """
    Message class 'NavigatorStatus'.

    Constants:
      FAILURE_NONE
      FAILURE_HAGL
    """

    __slots__ = [
        '_timestamp',
        '_nav_state',
        '_failure',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'nav_state': 'uint8',
        'failure': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.nav_state = kwargs.get('nav_state', int())
        self.failure = kwargs.get('failure', int())

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
        if self.nav_state != other.nav_state:
            return False
        if self.failure != other.failure:
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
    def nav_state(self):
        """Message field 'nav_state'."""
        return self._nav_state

    @nav_state.setter
    def nav_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nav_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nav_state' field must be an unsigned integer in [0, 255]"
        self._nav_state = value

    @builtins.property
    def failure(self):
        """Message field 'failure'."""
        return self._failure

    @failure.setter
    def failure(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'failure' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'failure' field must be an unsigned integer in [0, 255]"
        self._failure = value
