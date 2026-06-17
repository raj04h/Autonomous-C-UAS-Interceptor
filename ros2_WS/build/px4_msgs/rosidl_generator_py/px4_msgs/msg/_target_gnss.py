# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/TargetGnss.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TargetGnss(type):
    """Metaclass of message 'TargetGnss'."""

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
                'px4_msgs.msg.TargetGnss')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__target_gnss
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__target_gnss
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__target_gnss
            cls._TYPE_SUPPORT = module.type_support_msg__msg__target_gnss
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__target_gnss

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TargetGnss(metaclass=Metaclass_TargetGnss):
    """Message class 'TargetGnss'."""

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_latitude_deg',
        '_longitude_deg',
        '_altitude_msl_m',
        '_eph',
        '_epv',
        '_abs_pos_updated',
        '_vel_n_m_s',
        '_vel_e_m_s',
        '_vel_d_m_s',
        '_s_acc_m_s',
        '_vel_ned_updated',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'latitude_deg': 'double',
        'longitude_deg': 'double',
        'altitude_msl_m': 'float',
        'eph': 'float',
        'epv': 'float',
        'abs_pos_updated': 'boolean',
        'vel_n_m_s': 'float',
        'vel_e_m_s': 'float',
        'vel_d_m_s': 'float',
        's_acc_m_s': 'float',
        'vel_ned_updated': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.latitude_deg = kwargs.get('latitude_deg', float())
        self.longitude_deg = kwargs.get('longitude_deg', float())
        self.altitude_msl_m = kwargs.get('altitude_msl_m', float())
        self.eph = kwargs.get('eph', float())
        self.epv = kwargs.get('epv', float())
        self.abs_pos_updated = kwargs.get('abs_pos_updated', bool())
        self.vel_n_m_s = kwargs.get('vel_n_m_s', float())
        self.vel_e_m_s = kwargs.get('vel_e_m_s', float())
        self.vel_d_m_s = kwargs.get('vel_d_m_s', float())
        self.s_acc_m_s = kwargs.get('s_acc_m_s', float())
        self.vel_ned_updated = kwargs.get('vel_ned_updated', bool())

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
        if self.latitude_deg != other.latitude_deg:
            return False
        if self.longitude_deg != other.longitude_deg:
            return False
        if self.altitude_msl_m != other.altitude_msl_m:
            return False
        if self.eph != other.eph:
            return False
        if self.epv != other.epv:
            return False
        if self.abs_pos_updated != other.abs_pos_updated:
            return False
        if self.vel_n_m_s != other.vel_n_m_s:
            return False
        if self.vel_e_m_s != other.vel_e_m_s:
            return False
        if self.vel_d_m_s != other.vel_d_m_s:
            return False
        if self.s_acc_m_s != other.s_acc_m_s:
            return False
        if self.vel_ned_updated != other.vel_ned_updated:
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
    def latitude_deg(self):
        """Message field 'latitude_deg'."""
        return self._latitude_deg

    @latitude_deg.setter
    def latitude_deg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude_deg' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude_deg' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude_deg = value

    @builtins.property
    def longitude_deg(self):
        """Message field 'longitude_deg'."""
        return self._longitude_deg

    @longitude_deg.setter
    def longitude_deg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude_deg' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitude_deg' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitude_deg = value

    @builtins.property
    def altitude_msl_m(self):
        """Message field 'altitude_msl_m'."""
        return self._altitude_msl_m

    @altitude_msl_m.setter
    def altitude_msl_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altitude_msl_m' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'altitude_msl_m' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._altitude_msl_m = value

    @builtins.property
    def eph(self):
        """Message field 'eph'."""
        return self._eph

    @eph.setter
    def eph(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'eph' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'eph' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._eph = value

    @builtins.property
    def epv(self):
        """Message field 'epv'."""
        return self._epv

    @epv.setter
    def epv(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'epv' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'epv' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._epv = value

    @builtins.property
    def abs_pos_updated(self):
        """Message field 'abs_pos_updated'."""
        return self._abs_pos_updated

    @abs_pos_updated.setter
    def abs_pos_updated(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'abs_pos_updated' field must be of type 'bool'"
        self._abs_pos_updated = value

    @builtins.property
    def vel_n_m_s(self):
        """Message field 'vel_n_m_s'."""
        return self._vel_n_m_s

    @vel_n_m_s.setter
    def vel_n_m_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_n_m_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vel_n_m_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vel_n_m_s = value

    @builtins.property
    def vel_e_m_s(self):
        """Message field 'vel_e_m_s'."""
        return self._vel_e_m_s

    @vel_e_m_s.setter
    def vel_e_m_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_e_m_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vel_e_m_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vel_e_m_s = value

    @builtins.property
    def vel_d_m_s(self):
        """Message field 'vel_d_m_s'."""
        return self._vel_d_m_s

    @vel_d_m_s.setter
    def vel_d_m_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_d_m_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vel_d_m_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vel_d_m_s = value

    @builtins.property
    def s_acc_m_s(self):
        """Message field 's_acc_m_s'."""
        return self._s_acc_m_s

    @s_acc_m_s.setter
    def s_acc_m_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 's_acc_m_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 's_acc_m_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._s_acc_m_s = value

    @builtins.property
    def vel_ned_updated(self):
        """Message field 'vel_ned_updated'."""
        return self._vel_ned_updated

    @vel_ned_updated.setter
    def vel_ned_updated(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vel_ned_updated' field must be of type 'bool'"
        self._vel_ned_updated = value
