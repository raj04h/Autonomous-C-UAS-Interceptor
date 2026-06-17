# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/ActuatorArmed.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActuatorArmed(type):
    """Metaclass of message 'ActuatorArmed'."""

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
                'px4_msgs.msg.ActuatorArmed')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__actuator_armed
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__actuator_armed
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__actuator_armed
            cls._TYPE_SUPPORT = module.type_support_msg__msg__actuator_armed
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__actuator_armed

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ActuatorArmed(metaclass=Metaclass_ActuatorArmed):
    """Message class 'ActuatorArmed'."""

    __slots__ = [
        '_timestamp',
        '_armed',
        '_prearmed',
        '_ready_to_arm',
        '_lockdown',
        '_kill',
        '_termination',
        '_in_esc_calibration_mode',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'armed': 'boolean',
        'prearmed': 'boolean',
        'ready_to_arm': 'boolean',
        'lockdown': 'boolean',
        'kill': 'boolean',
        'termination': 'boolean',
        'in_esc_calibration_mode': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.armed = kwargs.get('armed', bool())
        self.prearmed = kwargs.get('prearmed', bool())
        self.ready_to_arm = kwargs.get('ready_to_arm', bool())
        self.lockdown = kwargs.get('lockdown', bool())
        self.kill = kwargs.get('kill', bool())
        self.termination = kwargs.get('termination', bool())
        self.in_esc_calibration_mode = kwargs.get('in_esc_calibration_mode', bool())

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
        if self.armed != other.armed:
            return False
        if self.prearmed != other.prearmed:
            return False
        if self.ready_to_arm != other.ready_to_arm:
            return False
        if self.lockdown != other.lockdown:
            return False
        if self.kill != other.kill:
            return False
        if self.termination != other.termination:
            return False
        if self.in_esc_calibration_mode != other.in_esc_calibration_mode:
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
    def armed(self):
        """Message field 'armed'."""
        return self._armed

    @armed.setter
    def armed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'armed' field must be of type 'bool'"
        self._armed = value

    @builtins.property
    def prearmed(self):
        """Message field 'prearmed'."""
        return self._prearmed

    @prearmed.setter
    def prearmed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'prearmed' field must be of type 'bool'"
        self._prearmed = value

    @builtins.property
    def ready_to_arm(self):
        """Message field 'ready_to_arm'."""
        return self._ready_to_arm

    @ready_to_arm.setter
    def ready_to_arm(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ready_to_arm' field must be of type 'bool'"
        self._ready_to_arm = value

    @builtins.property
    def lockdown(self):
        """Message field 'lockdown'."""
        return self._lockdown

    @lockdown.setter
    def lockdown(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lockdown' field must be of type 'bool'"
        self._lockdown = value

    @builtins.property
    def kill(self):
        """Message field 'kill'."""
        return self._kill

    @kill.setter
    def kill(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'kill' field must be of type 'bool'"
        self._kill = value

    @builtins.property
    def termination(self):
        """Message field 'termination'."""
        return self._termination

    @termination.setter
    def termination(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'termination' field must be of type 'bool'"
        self._termination = value

    @builtins.property
    def in_esc_calibration_mode(self):
        """Message field 'in_esc_calibration_mode'."""
        return self._in_esc_calibration_mode

    @in_esc_calibration_mode.setter
    def in_esc_calibration_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'in_esc_calibration_mode' field must be of type 'bool'"
        self._in_esc_calibration_mode = value
