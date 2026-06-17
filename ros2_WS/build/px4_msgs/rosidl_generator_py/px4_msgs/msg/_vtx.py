# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/Vtx.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'band_name'
# Member 'power_label'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Vtx(type):
    """Metaclass of message 'Vtx'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BAND_NAME_LENGTH': 12,
        'POWER_LABEL_LENGTH': 4,
        'PROTOCOL_NONE': 0,
        'PROTOCOL_SMART_AUDIO_V1': 10,
        'PROTOCOL_SMART_AUDIO_V2': 20,
        'PROTOCOL_SMART_AUDIO_V2_1': 21,
        'PROTOCOL_TRAMP': 100,
        'DEVICE_UNKNOWN': 0,
        'DEVICE_PEAK_THOR_T67': 20,
        'DEVICE_RUSH_MAX_SOLO': 40,
        'MODE_NORMAL': 0,
        'MODE_PIT': 1,
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
                'px4_msgs.msg.Vtx')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vtx
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vtx
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vtx
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vtx
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vtx

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BAND_NAME_LENGTH': cls.__constants['BAND_NAME_LENGTH'],
            'POWER_LABEL_LENGTH': cls.__constants['POWER_LABEL_LENGTH'],
            'PROTOCOL_NONE': cls.__constants['PROTOCOL_NONE'],
            'PROTOCOL_SMART_AUDIO_V1': cls.__constants['PROTOCOL_SMART_AUDIO_V1'],
            'PROTOCOL_SMART_AUDIO_V2': cls.__constants['PROTOCOL_SMART_AUDIO_V2'],
            'PROTOCOL_SMART_AUDIO_V2_1': cls.__constants['PROTOCOL_SMART_AUDIO_V2_1'],
            'PROTOCOL_TRAMP': cls.__constants['PROTOCOL_TRAMP'],
            'DEVICE_UNKNOWN': cls.__constants['DEVICE_UNKNOWN'],
            'DEVICE_PEAK_THOR_T67': cls.__constants['DEVICE_PEAK_THOR_T67'],
            'DEVICE_RUSH_MAX_SOLO': cls.__constants['DEVICE_RUSH_MAX_SOLO'],
            'MODE_NORMAL': cls.__constants['MODE_NORMAL'],
            'MODE_PIT': cls.__constants['MODE_PIT'],
        }

    @property
    def BAND_NAME_LENGTH(self):
        """Message constant 'BAND_NAME_LENGTH'."""
        return Metaclass_Vtx.__constants['BAND_NAME_LENGTH']

    @property
    def POWER_LABEL_LENGTH(self):
        """Message constant 'POWER_LABEL_LENGTH'."""
        return Metaclass_Vtx.__constants['POWER_LABEL_LENGTH']

    @property
    def PROTOCOL_NONE(self):
        """Message constant 'PROTOCOL_NONE'."""
        return Metaclass_Vtx.__constants['PROTOCOL_NONE']

    @property
    def PROTOCOL_SMART_AUDIO_V1(self):
        """Message constant 'PROTOCOL_SMART_AUDIO_V1'."""
        return Metaclass_Vtx.__constants['PROTOCOL_SMART_AUDIO_V1']

    @property
    def PROTOCOL_SMART_AUDIO_V2(self):
        """Message constant 'PROTOCOL_SMART_AUDIO_V2'."""
        return Metaclass_Vtx.__constants['PROTOCOL_SMART_AUDIO_V2']

    @property
    def PROTOCOL_SMART_AUDIO_V2_1(self):
        """Message constant 'PROTOCOL_SMART_AUDIO_V2_1'."""
        return Metaclass_Vtx.__constants['PROTOCOL_SMART_AUDIO_V2_1']

    @property
    def PROTOCOL_TRAMP(self):
        """Message constant 'PROTOCOL_TRAMP'."""
        return Metaclass_Vtx.__constants['PROTOCOL_TRAMP']

    @property
    def DEVICE_UNKNOWN(self):
        """Message constant 'DEVICE_UNKNOWN'."""
        return Metaclass_Vtx.__constants['DEVICE_UNKNOWN']

    @property
    def DEVICE_PEAK_THOR_T67(self):
        """Message constant 'DEVICE_PEAK_THOR_T67'."""
        return Metaclass_Vtx.__constants['DEVICE_PEAK_THOR_T67']

    @property
    def DEVICE_RUSH_MAX_SOLO(self):
        """Message constant 'DEVICE_RUSH_MAX_SOLO'."""
        return Metaclass_Vtx.__constants['DEVICE_RUSH_MAX_SOLO']

    @property
    def MODE_NORMAL(self):
        """Message constant 'MODE_NORMAL'."""
        return Metaclass_Vtx.__constants['MODE_NORMAL']

    @property
    def MODE_PIT(self):
        """Message constant 'MODE_PIT'."""
        return Metaclass_Vtx.__constants['MODE_PIT']


class Vtx(metaclass=Metaclass_Vtx):
    """
    Message class 'Vtx'.

    Constants:
      BAND_NAME_LENGTH
      POWER_LABEL_LENGTH
      PROTOCOL_NONE
      PROTOCOL_SMART_AUDIO_V1
      PROTOCOL_SMART_AUDIO_V2
      PROTOCOL_SMART_AUDIO_V2_1
      PROTOCOL_TRAMP
      DEVICE_UNKNOWN
      DEVICE_PEAK_THOR_T67
      DEVICE_RUSH_MAX_SOLO
      MODE_NORMAL
      MODE_PIT
    """

    __slots__ = [
        '_timestamp',
        '_protocol',
        '_device',
        '_mode',
        '_band',
        '_channel',
        '_frequency',
        '_band_letter',
        '_band_name',
        '_power_level',
        '_power_label',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'protocol': 'uint8',
        'device': 'uint8',
        'mode': 'uint8',
        'band': 'int8',
        'channel': 'int8',
        'frequency': 'uint16',
        'band_letter': 'uint8',
        'band_name': 'uint8[12]',
        'power_level': 'int8',
        'power_label': 'uint8[4]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 12),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 4),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.protocol = kwargs.get('protocol', int())
        self.device = kwargs.get('device', int())
        self.mode = kwargs.get('mode', int())
        self.band = kwargs.get('band', int())
        self.channel = kwargs.get('channel', int())
        self.frequency = kwargs.get('frequency', int())
        self.band_letter = kwargs.get('band_letter', int())
        if 'band_name' not in kwargs:
            self.band_name = numpy.zeros(12, dtype=numpy.uint8)
        else:
            self.band_name = kwargs.get('band_name')
        self.power_level = kwargs.get('power_level', int())
        if 'power_label' not in kwargs:
            self.power_label = numpy.zeros(4, dtype=numpy.uint8)
        else:
            self.power_label = kwargs.get('power_label')

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
        if self.protocol != other.protocol:
            return False
        if self.device != other.device:
            return False
        if self.mode != other.mode:
            return False
        if self.band != other.band:
            return False
        if self.channel != other.channel:
            return False
        if self.frequency != other.frequency:
            return False
        if self.band_letter != other.band_letter:
            return False
        if any(self.band_name != other.band_name):
            return False
        if self.power_level != other.power_level:
            return False
        if any(self.power_label != other.power_label):
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
    def protocol(self):
        """Message field 'protocol'."""
        return self._protocol

    @protocol.setter
    def protocol(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'protocol' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'protocol' field must be an unsigned integer in [0, 255]"
        self._protocol = value

    @builtins.property
    def device(self):
        """Message field 'device'."""
        return self._device

    @device.setter
    def device(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'device' field must be an unsigned integer in [0, 255]"
        self._device = value

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
    def band(self):
        """Message field 'band'."""
        return self._band

    @band.setter
    def band(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'band' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'band' field must be an integer in [-128, 127]"
        self._band = value

    @builtins.property
    def channel(self):
        """Message field 'channel'."""
        return self._channel

    @channel.setter
    def channel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'channel' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'channel' field must be an integer in [-128, 127]"
        self._channel = value

    @builtins.property
    def frequency(self):
        """Message field 'frequency'."""
        return self._frequency

    @frequency.setter
    def frequency(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frequency' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'frequency' field must be an unsigned integer in [0, 65535]"
        self._frequency = value

    @builtins.property
    def band_letter(self):
        """Message field 'band_letter'."""
        return self._band_letter

    @band_letter.setter
    def band_letter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'band_letter' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'band_letter' field must be an unsigned integer in [0, 255]"
        self._band_letter = value

    @builtins.property
    def band_name(self):
        """Message field 'band_name'."""
        return self._band_name

    @band_name.setter
    def band_name(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'band_name' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 12, \
                "The 'band_name' numpy.ndarray() must have a size of 12"
            self._band_name = value
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
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'band_name' field must be a set or sequence with length 12 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._band_name = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def power_level(self):
        """Message field 'power_level'."""
        return self._power_level

    @power_level.setter
    def power_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power_level' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'power_level' field must be an integer in [-128, 127]"
        self._power_level = value

    @builtins.property
    def power_label(self):
        """Message field 'power_label'."""
        return self._power_label

    @power_label.setter
    def power_label(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'power_label' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 4, \
                "The 'power_label' numpy.ndarray() must have a size of 4"
            self._power_label = value
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
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'power_label' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._power_label = numpy.array(value, dtype=numpy.uint8)
