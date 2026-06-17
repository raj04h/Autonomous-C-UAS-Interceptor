# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/SensorGnssStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorGnssStatus(type):
    """Metaclass of message 'SensorGnssStatus'."""

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
                'px4_msgs.msg.SensorGnssStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_gnss_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_gnss_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_gnss_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_gnss_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_gnss_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorGnssStatus(metaclass=Metaclass_SensorGnssStatus):
    """Message class 'SensorGnssStatus'."""

    __slots__ = [
        '_timestamp',
        '_device_id',
        '_quality_available',
        '_quality_corrections',
        '_quality_receiver',
        '_quality_gnss_signals',
        '_quality_post_processing',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'device_id': 'uint32',
        'quality_available': 'boolean',
        'quality_corrections': 'uint8',
        'quality_receiver': 'uint8',
        'quality_gnss_signals': 'uint8',
        'quality_post_processing': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.device_id = kwargs.get('device_id', int())
        self.quality_available = kwargs.get('quality_available', bool())
        self.quality_corrections = kwargs.get('quality_corrections', int())
        self.quality_receiver = kwargs.get('quality_receiver', int())
        self.quality_gnss_signals = kwargs.get('quality_gnss_signals', int())
        self.quality_post_processing = kwargs.get('quality_post_processing', int())

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
        if self.device_id != other.device_id:
            return False
        if self.quality_available != other.quality_available:
            return False
        if self.quality_corrections != other.quality_corrections:
            return False
        if self.quality_receiver != other.quality_receiver:
            return False
        if self.quality_gnss_signals != other.quality_gnss_signals:
            return False
        if self.quality_post_processing != other.quality_post_processing:
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
    def quality_available(self):
        """Message field 'quality_available'."""
        return self._quality_available

    @quality_available.setter
    def quality_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'quality_available' field must be of type 'bool'"
        self._quality_available = value

    @builtins.property
    def quality_corrections(self):
        """Message field 'quality_corrections'."""
        return self._quality_corrections

    @quality_corrections.setter
    def quality_corrections(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'quality_corrections' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'quality_corrections' field must be an unsigned integer in [0, 255]"
        self._quality_corrections = value

    @builtins.property
    def quality_receiver(self):
        """Message field 'quality_receiver'."""
        return self._quality_receiver

    @quality_receiver.setter
    def quality_receiver(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'quality_receiver' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'quality_receiver' field must be an unsigned integer in [0, 255]"
        self._quality_receiver = value

    @builtins.property
    def quality_gnss_signals(self):
        """Message field 'quality_gnss_signals'."""
        return self._quality_gnss_signals

    @quality_gnss_signals.setter
    def quality_gnss_signals(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'quality_gnss_signals' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'quality_gnss_signals' field must be an unsigned integer in [0, 255]"
        self._quality_gnss_signals = value

    @builtins.property
    def quality_post_processing(self):
        """Message field 'quality_post_processing'."""
        return self._quality_post_processing

    @quality_post_processing.setter
    def quality_post_processing(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'quality_post_processing' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'quality_post_processing' field must be an unsigned integer in [0, 255]"
        self._quality_post_processing = value
