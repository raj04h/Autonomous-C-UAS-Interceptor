# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/RangingBeacon.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RangingBeacon(type):
    """Metaclass of message 'RangingBeacon'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ALT_TYPE_WGS84': 0,
        'ALT_TYPE_MSL': 1,
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
                'px4_msgs.msg.RangingBeacon')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ranging_beacon
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ranging_beacon
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ranging_beacon
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ranging_beacon
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ranging_beacon

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ALT_TYPE_WGS84': cls.__constants['ALT_TYPE_WGS84'],
            'ALT_TYPE_MSL': cls.__constants['ALT_TYPE_MSL'],
        }

    @property
    def ALT_TYPE_WGS84(self):
        """Message constant 'ALT_TYPE_WGS84'."""
        return Metaclass_RangingBeacon.__constants['ALT_TYPE_WGS84']

    @property
    def ALT_TYPE_MSL(self):
        """Message constant 'ALT_TYPE_MSL'."""
        return Metaclass_RangingBeacon.__constants['ALT_TYPE_MSL']


class RangingBeacon(metaclass=Metaclass_RangingBeacon):
    """
    Message class 'RangingBeacon'.

    Constants:
      ALT_TYPE_WGS84
      ALT_TYPE_MSL
    """

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_beacon_id',
        '_range',
        '_lat',
        '_lon',
        '_alt',
        '_alt_type',
        '_hacc',
        '_vacc',
        '_sequence_nr',
        '_status',
        '_carrier_freq',
        '_range_accuracy',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'beacon_id': 'uint8',
        'range': 'float',
        'lat': 'double',
        'lon': 'double',
        'alt': 'float',
        'alt_type': 'uint8',
        'hacc': 'float',
        'vacc': 'float',
        'sequence_nr': 'uint8',
        'status': 'uint8',
        'carrier_freq': 'uint16',
        'range_accuracy': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.beacon_id = kwargs.get('beacon_id', int())
        self.range = kwargs.get('range', float())
        self.lat = kwargs.get('lat', float())
        self.lon = kwargs.get('lon', float())
        self.alt = kwargs.get('alt', float())
        self.alt_type = kwargs.get('alt_type', int())
        self.hacc = kwargs.get('hacc', float())
        self.vacc = kwargs.get('vacc', float())
        self.sequence_nr = kwargs.get('sequence_nr', int())
        self.status = kwargs.get('status', int())
        self.carrier_freq = kwargs.get('carrier_freq', int())
        self.range_accuracy = kwargs.get('range_accuracy', float())

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
        if self.timestamp_sample != other.timestamp_sample:
            return False
        if self.beacon_id != other.beacon_id:
            return False
        if self.range != other.range:
            return False
        if self.lat != other.lat:
            return False
        if self.lon != other.lon:
            return False
        if self.alt != other.alt:
            return False
        if self.alt_type != other.alt_type:
            return False
        if self.hacc != other.hacc:
            return False
        if self.vacc != other.vacc:
            return False
        if self.sequence_nr != other.sequence_nr:
            return False
        if self.status != other.status:
            return False
        if self.carrier_freq != other.carrier_freq:
            return False
        if self.range_accuracy != other.range_accuracy:
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
    def timestamp_sample(self):
        """Message field 'timestamp_sample'."""
        return self._timestamp_sample

    @timestamp_sample.setter
    def timestamp_sample(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_sample' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp_sample' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp_sample = value

    @builtins.property
    def beacon_id(self):
        """Message field 'beacon_id'."""
        return self._beacon_id

    @beacon_id.setter
    def beacon_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'beacon_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'beacon_id' field must be an unsigned integer in [0, 255]"
        self._beacon_id = value

    @builtins.property  # noqa: A003
    def range(self):  # noqa: A003
        """Message field 'range'."""
        return self._range

    @range.setter  # noqa: A003
    def range(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._range = value

    @builtins.property
    def lat(self):
        """Message field 'lat'."""
        return self._lat

    @lat.setter
    def lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lat' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lat = value

    @builtins.property
    def lon(self):
        """Message field 'lon'."""
        return self._lon

    @lon.setter
    def lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lon' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lon' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lon = value

    @builtins.property
    def alt(self):
        """Message field 'alt'."""
        return self._alt

    @alt.setter
    def alt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alt = value

    @builtins.property
    def alt_type(self):
        """Message field 'alt_type'."""
        return self._alt_type

    @alt_type.setter
    def alt_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alt_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'alt_type' field must be an unsigned integer in [0, 255]"
        self._alt_type = value

    @builtins.property
    def hacc(self):
        """Message field 'hacc'."""
        return self._hacc

    @hacc.setter
    def hacc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hacc' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hacc' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hacc = value

    @builtins.property
    def vacc(self):
        """Message field 'vacc'."""
        return self._vacc

    @vacc.setter
    def vacc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vacc' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vacc' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vacc = value

    @builtins.property
    def sequence_nr(self):
        """Message field 'sequence_nr'."""
        return self._sequence_nr

    @sequence_nr.setter
    def sequence_nr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sequence_nr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sequence_nr' field must be an unsigned integer in [0, 255]"
        self._sequence_nr = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @builtins.property
    def carrier_freq(self):
        """Message field 'carrier_freq'."""
        return self._carrier_freq

    @carrier_freq.setter
    def carrier_freq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'carrier_freq' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'carrier_freq' field must be an unsigned integer in [0, 65535]"
        self._carrier_freq = value

    @builtins.property
    def range_accuracy(self):
        """Message field 'range_accuracy'."""
        return self._range_accuracy

    @range_accuracy.setter
    def range_accuracy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range_accuracy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'range_accuracy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._range_accuracy = value
