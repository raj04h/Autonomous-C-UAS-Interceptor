# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/PrecLandStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PrecLandStatus(type):
    """Metaclass of message 'PrecLandStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PREC_LAND_STATE_STOPPED': 0,
        'PREC_LAND_STATE_START': 1,
        'PREC_LAND_STATE_HORIZONTAL': 2,
        'PREC_LAND_STATE_DESCEND': 3,
        'PREC_LAND_STATE_FINAL': 4,
        'PREC_LAND_STATE_SEARCH': 5,
        'PREC_LAND_STATE_FALLBACK': 6,
        'PREC_LAND_STATE_DONE': 7,
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
                'px4_msgs.msg.PrecLandStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__prec_land_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__prec_land_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__prec_land_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__prec_land_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__prec_land_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PREC_LAND_STATE_STOPPED': cls.__constants['PREC_LAND_STATE_STOPPED'],
            'PREC_LAND_STATE_START': cls.__constants['PREC_LAND_STATE_START'],
            'PREC_LAND_STATE_HORIZONTAL': cls.__constants['PREC_LAND_STATE_HORIZONTAL'],
            'PREC_LAND_STATE_DESCEND': cls.__constants['PREC_LAND_STATE_DESCEND'],
            'PREC_LAND_STATE_FINAL': cls.__constants['PREC_LAND_STATE_FINAL'],
            'PREC_LAND_STATE_SEARCH': cls.__constants['PREC_LAND_STATE_SEARCH'],
            'PREC_LAND_STATE_FALLBACK': cls.__constants['PREC_LAND_STATE_FALLBACK'],
            'PREC_LAND_STATE_DONE': cls.__constants['PREC_LAND_STATE_DONE'],
        }

    @property
    def PREC_LAND_STATE_STOPPED(self):
        """Message constant 'PREC_LAND_STATE_STOPPED'."""
        return Metaclass_PrecLandStatus.__constants['PREC_LAND_STATE_STOPPED']

    @property
    def PREC_LAND_STATE_START(self):
        """Message constant 'PREC_LAND_STATE_START'."""
        return Metaclass_PrecLandStatus.__constants['PREC_LAND_STATE_START']

    @property
    def PREC_LAND_STATE_HORIZONTAL(self):
        """Message constant 'PREC_LAND_STATE_HORIZONTAL'."""
        return Metaclass_PrecLandStatus.__constants['PREC_LAND_STATE_HORIZONTAL']

    @property
    def PREC_LAND_STATE_DESCEND(self):
        """Message constant 'PREC_LAND_STATE_DESCEND'."""
        return Metaclass_PrecLandStatus.__constants['PREC_LAND_STATE_DESCEND']

    @property
    def PREC_LAND_STATE_FINAL(self):
        """Message constant 'PREC_LAND_STATE_FINAL'."""
        return Metaclass_PrecLandStatus.__constants['PREC_LAND_STATE_FINAL']

    @property
    def PREC_LAND_STATE_SEARCH(self):
        """Message constant 'PREC_LAND_STATE_SEARCH'."""
        return Metaclass_PrecLandStatus.__constants['PREC_LAND_STATE_SEARCH']

    @property
    def PREC_LAND_STATE_FALLBACK(self):
        """Message constant 'PREC_LAND_STATE_FALLBACK'."""
        return Metaclass_PrecLandStatus.__constants['PREC_LAND_STATE_FALLBACK']

    @property
    def PREC_LAND_STATE_DONE(self):
        """Message constant 'PREC_LAND_STATE_DONE'."""
        return Metaclass_PrecLandStatus.__constants['PREC_LAND_STATE_DONE']


class PrecLandStatus(metaclass=Metaclass_PrecLandStatus):
    """
    Message class 'PrecLandStatus'.

    Constants:
      PREC_LAND_STATE_STOPPED
      PREC_LAND_STATE_START
      PREC_LAND_STATE_HORIZONTAL
      PREC_LAND_STATE_DESCEND
      PREC_LAND_STATE_FINAL
      PREC_LAND_STATE_SEARCH
      PREC_LAND_STATE_FALLBACK
      PREC_LAND_STATE_DONE
    """

    __slots__ = [
        '_timestamp',
        '_state',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'state': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.state = kwargs.get('state', int())

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
        if self.state != other.state:
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
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value
