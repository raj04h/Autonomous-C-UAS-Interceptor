# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/DronecanNodeStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DronecanNodeStatus(type):
    """Metaclass of message 'DronecanNodeStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HEALTH_OK': 0,
        'HEALTH_WARNING': 1,
        'HEALTH_ERROR': 2,
        'HEALTH_CRITICAL': 3,
        'MODE_OPERATIONAL': 0,
        'MODE_INITIALIZATION': 1,
        'MODE_MAINTENANCE': 2,
        'MODE_SOFTWARE_UPDATE': 3,
        'MODE_OFFLINE': 7,
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
                'px4_msgs.msg.DronecanNodeStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dronecan_node_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dronecan_node_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dronecan_node_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dronecan_node_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dronecan_node_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HEALTH_OK': cls.__constants['HEALTH_OK'],
            'HEALTH_WARNING': cls.__constants['HEALTH_WARNING'],
            'HEALTH_ERROR': cls.__constants['HEALTH_ERROR'],
            'HEALTH_CRITICAL': cls.__constants['HEALTH_CRITICAL'],
            'MODE_OPERATIONAL': cls.__constants['MODE_OPERATIONAL'],
            'MODE_INITIALIZATION': cls.__constants['MODE_INITIALIZATION'],
            'MODE_MAINTENANCE': cls.__constants['MODE_MAINTENANCE'],
            'MODE_SOFTWARE_UPDATE': cls.__constants['MODE_SOFTWARE_UPDATE'],
            'MODE_OFFLINE': cls.__constants['MODE_OFFLINE'],
        }

    @property
    def HEALTH_OK(self):
        """Message constant 'HEALTH_OK'."""
        return Metaclass_DronecanNodeStatus.__constants['HEALTH_OK']

    @property
    def HEALTH_WARNING(self):
        """Message constant 'HEALTH_WARNING'."""
        return Metaclass_DronecanNodeStatus.__constants['HEALTH_WARNING']

    @property
    def HEALTH_ERROR(self):
        """Message constant 'HEALTH_ERROR'."""
        return Metaclass_DronecanNodeStatus.__constants['HEALTH_ERROR']

    @property
    def HEALTH_CRITICAL(self):
        """Message constant 'HEALTH_CRITICAL'."""
        return Metaclass_DronecanNodeStatus.__constants['HEALTH_CRITICAL']

    @property
    def MODE_OPERATIONAL(self):
        """Message constant 'MODE_OPERATIONAL'."""
        return Metaclass_DronecanNodeStatus.__constants['MODE_OPERATIONAL']

    @property
    def MODE_INITIALIZATION(self):
        """Message constant 'MODE_INITIALIZATION'."""
        return Metaclass_DronecanNodeStatus.__constants['MODE_INITIALIZATION']

    @property
    def MODE_MAINTENANCE(self):
        """Message constant 'MODE_MAINTENANCE'."""
        return Metaclass_DronecanNodeStatus.__constants['MODE_MAINTENANCE']

    @property
    def MODE_SOFTWARE_UPDATE(self):
        """Message constant 'MODE_SOFTWARE_UPDATE'."""
        return Metaclass_DronecanNodeStatus.__constants['MODE_SOFTWARE_UPDATE']

    @property
    def MODE_OFFLINE(self):
        """Message constant 'MODE_OFFLINE'."""
        return Metaclass_DronecanNodeStatus.__constants['MODE_OFFLINE']


class DronecanNodeStatus(metaclass=Metaclass_DronecanNodeStatus):
    """
    Message class 'DronecanNodeStatus'.

    Constants:
      HEALTH_OK
      HEALTH_WARNING
      HEALTH_ERROR
      HEALTH_CRITICAL
      MODE_OPERATIONAL
      MODE_INITIALIZATION
      MODE_MAINTENANCE
      MODE_SOFTWARE_UPDATE
      MODE_OFFLINE
    """

    __slots__ = [
        '_timestamp',
        '_node_id',
        '_uptime_sec',
        '_health',
        '_mode',
        '_sub_mode',
        '_vendor_specific_status_code',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'node_id': 'uint16',
        'uptime_sec': 'uint32',
        'health': 'uint8',
        'mode': 'uint8',
        'sub_mode': 'uint8',
        'vendor_specific_status_code': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.node_id = kwargs.get('node_id', int())
        self.uptime_sec = kwargs.get('uptime_sec', int())
        self.health = kwargs.get('health', int())
        self.mode = kwargs.get('mode', int())
        self.sub_mode = kwargs.get('sub_mode', int())
        self.vendor_specific_status_code = kwargs.get('vendor_specific_status_code', int())

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
        if self.node_id != other.node_id:
            return False
        if self.uptime_sec != other.uptime_sec:
            return False
        if self.health != other.health:
            return False
        if self.mode != other.mode:
            return False
        if self.sub_mode != other.sub_mode:
            return False
        if self.vendor_specific_status_code != other.vendor_specific_status_code:
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
    def node_id(self):
        """Message field 'node_id'."""
        return self._node_id

    @node_id.setter
    def node_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'node_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'node_id' field must be an unsigned integer in [0, 65535]"
        self._node_id = value

    @builtins.property
    def uptime_sec(self):
        """Message field 'uptime_sec'."""
        return self._uptime_sec

    @uptime_sec.setter
    def uptime_sec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uptime_sec' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'uptime_sec' field must be an unsigned integer in [0, 4294967295]"
        self._uptime_sec = value

    @builtins.property
    def health(self):
        """Message field 'health'."""
        return self._health

    @health.setter
    def health(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'health' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'health' field must be an unsigned integer in [0, 255]"
        self._health = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @builtins.property
    def sub_mode(self):
        """Message field 'sub_mode'."""
        return self._sub_mode

    @sub_mode.setter
    def sub_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sub_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sub_mode' field must be an unsigned integer in [0, 255]"
        self._sub_mode = value

    @builtins.property
    def vendor_specific_status_code(self):
        """Message field 'vendor_specific_status_code'."""
        return self._vendor_specific_status_code

    @vendor_specific_status_code.setter
    def vendor_specific_status_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vendor_specific_status_code' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'vendor_specific_status_code' field must be an unsigned integer in [0, 65535]"
        self._vendor_specific_status_code = value
