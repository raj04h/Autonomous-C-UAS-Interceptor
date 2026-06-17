# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/CellularStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CellularStatus(type):
    """Metaclass of message 'CellularStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATUS_FLAG_UNKNOWN': 1,
        'STATUS_FLAG_FAILED': 2,
        'STATUS_FLAG_INITIALIZING': 4,
        'STATUS_FLAG_LOCKED': 8,
        'STATUS_FLAG_DISABLED': 16,
        'STATUS_FLAG_DISABLING': 32,
        'STATUS_FLAG_ENABLING': 64,
        'STATUS_FLAG_ENABLED': 128,
        'STATUS_FLAG_SEARCHING': 256,
        'STATUS_FLAG_REGISTERED': 512,
        'STATUS_FLAG_DISCONNECTING': 1024,
        'STATUS_FLAG_CONNECTING': 2048,
        'STATUS_FLAG_CONNECTED': 4096,
        'FAILURE_REASON_NONE': 0,
        'FAILURE_REASON_UNKNOWN': 1,
        'FAILURE_REASON_SIM_MISSING': 2,
        'FAILURE_REASON_SIM_ERROR': 3,
        'CELLULAR_NETWORK_RADIO_TYPE_NONE': 0,
        'CELLULAR_NETWORK_RADIO_TYPE_GSM': 1,
        'CELLULAR_NETWORK_RADIO_TYPE_CDMA': 2,
        'CELLULAR_NETWORK_RADIO_TYPE_WCDMA': 3,
        'CELLULAR_NETWORK_RADIO_TYPE_LTE': 4,
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
                'px4_msgs.msg.CellularStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cellular_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cellular_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cellular_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cellular_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cellular_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATUS_FLAG_UNKNOWN': cls.__constants['STATUS_FLAG_UNKNOWN'],
            'STATUS_FLAG_FAILED': cls.__constants['STATUS_FLAG_FAILED'],
            'STATUS_FLAG_INITIALIZING': cls.__constants['STATUS_FLAG_INITIALIZING'],
            'STATUS_FLAG_LOCKED': cls.__constants['STATUS_FLAG_LOCKED'],
            'STATUS_FLAG_DISABLED': cls.__constants['STATUS_FLAG_DISABLED'],
            'STATUS_FLAG_DISABLING': cls.__constants['STATUS_FLAG_DISABLING'],
            'STATUS_FLAG_ENABLING': cls.__constants['STATUS_FLAG_ENABLING'],
            'STATUS_FLAG_ENABLED': cls.__constants['STATUS_FLAG_ENABLED'],
            'STATUS_FLAG_SEARCHING': cls.__constants['STATUS_FLAG_SEARCHING'],
            'STATUS_FLAG_REGISTERED': cls.__constants['STATUS_FLAG_REGISTERED'],
            'STATUS_FLAG_DISCONNECTING': cls.__constants['STATUS_FLAG_DISCONNECTING'],
            'STATUS_FLAG_CONNECTING': cls.__constants['STATUS_FLAG_CONNECTING'],
            'STATUS_FLAG_CONNECTED': cls.__constants['STATUS_FLAG_CONNECTED'],
            'FAILURE_REASON_NONE': cls.__constants['FAILURE_REASON_NONE'],
            'FAILURE_REASON_UNKNOWN': cls.__constants['FAILURE_REASON_UNKNOWN'],
            'FAILURE_REASON_SIM_MISSING': cls.__constants['FAILURE_REASON_SIM_MISSING'],
            'FAILURE_REASON_SIM_ERROR': cls.__constants['FAILURE_REASON_SIM_ERROR'],
            'CELLULAR_NETWORK_RADIO_TYPE_NONE': cls.__constants['CELLULAR_NETWORK_RADIO_TYPE_NONE'],
            'CELLULAR_NETWORK_RADIO_TYPE_GSM': cls.__constants['CELLULAR_NETWORK_RADIO_TYPE_GSM'],
            'CELLULAR_NETWORK_RADIO_TYPE_CDMA': cls.__constants['CELLULAR_NETWORK_RADIO_TYPE_CDMA'],
            'CELLULAR_NETWORK_RADIO_TYPE_WCDMA': cls.__constants['CELLULAR_NETWORK_RADIO_TYPE_WCDMA'],
            'CELLULAR_NETWORK_RADIO_TYPE_LTE': cls.__constants['CELLULAR_NETWORK_RADIO_TYPE_LTE'],
        }

    @property
    def STATUS_FLAG_UNKNOWN(self):
        """Message constant 'STATUS_FLAG_UNKNOWN'."""
        return Metaclass_CellularStatus.__constants['STATUS_FLAG_UNKNOWN']

    @property
    def STATUS_FLAG_FAILED(self):
        """Message constant 'STATUS_FLAG_FAILED'."""
        return Metaclass_CellularStatus.__constants['STATUS_FLAG_FAILED']

    @property
    def STATUS_FLAG_INITIALIZING(self):
        """Message constant 'STATUS_FLAG_INITIALIZING'."""
        return Metaclass_CellularStatus.__constants['STATUS_FLAG_INITIALIZING']

    @property
    def STATUS_FLAG_LOCKED(self):
        """Message constant 'STATUS_FLAG_LOCKED'."""
        return Metaclass_CellularStatus.__constants['STATUS_FLAG_LOCKED']

    @property
    def STATUS_FLAG_DISABLED(self):
        """Message constant 'STATUS_FLAG_DISABLED'."""
        return Metaclass_CellularStatus.__constants['STATUS_FLAG_DISABLED']

    @property
    def STATUS_FLAG_DISABLING(self):
        """Message constant 'STATUS_FLAG_DISABLING'."""
        return Metaclass_CellularStatus.__constants['STATUS_FLAG_DISABLING']

    @property
    def STATUS_FLAG_ENABLING(self):
        """Message constant 'STATUS_FLAG_ENABLING'."""
        return Metaclass_CellularStatus.__constants['STATUS_FLAG_ENABLING']

    @property
    def STATUS_FLAG_ENABLED(self):
        """Message constant 'STATUS_FLAG_ENABLED'."""
        return Metaclass_CellularStatus.__constants['STATUS_FLAG_ENABLED']

    @property
    def STATUS_FLAG_SEARCHING(self):
        """Message constant 'STATUS_FLAG_SEARCHING'."""
        return Metaclass_CellularStatus.__constants['STATUS_FLAG_SEARCHING']

    @property
    def STATUS_FLAG_REGISTERED(self):
        """Message constant 'STATUS_FLAG_REGISTERED'."""
        return Metaclass_CellularStatus.__constants['STATUS_FLAG_REGISTERED']

    @property
    def STATUS_FLAG_DISCONNECTING(self):
        """Message constant 'STATUS_FLAG_DISCONNECTING'."""
        return Metaclass_CellularStatus.__constants['STATUS_FLAG_DISCONNECTING']

    @property
    def STATUS_FLAG_CONNECTING(self):
        """Message constant 'STATUS_FLAG_CONNECTING'."""
        return Metaclass_CellularStatus.__constants['STATUS_FLAG_CONNECTING']

    @property
    def STATUS_FLAG_CONNECTED(self):
        """Message constant 'STATUS_FLAG_CONNECTED'."""
        return Metaclass_CellularStatus.__constants['STATUS_FLAG_CONNECTED']

    @property
    def FAILURE_REASON_NONE(self):
        """Message constant 'FAILURE_REASON_NONE'."""
        return Metaclass_CellularStatus.__constants['FAILURE_REASON_NONE']

    @property
    def FAILURE_REASON_UNKNOWN(self):
        """Message constant 'FAILURE_REASON_UNKNOWN'."""
        return Metaclass_CellularStatus.__constants['FAILURE_REASON_UNKNOWN']

    @property
    def FAILURE_REASON_SIM_MISSING(self):
        """Message constant 'FAILURE_REASON_SIM_MISSING'."""
        return Metaclass_CellularStatus.__constants['FAILURE_REASON_SIM_MISSING']

    @property
    def FAILURE_REASON_SIM_ERROR(self):
        """Message constant 'FAILURE_REASON_SIM_ERROR'."""
        return Metaclass_CellularStatus.__constants['FAILURE_REASON_SIM_ERROR']

    @property
    def CELLULAR_NETWORK_RADIO_TYPE_NONE(self):
        """Message constant 'CELLULAR_NETWORK_RADIO_TYPE_NONE'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_NETWORK_RADIO_TYPE_NONE']

    @property
    def CELLULAR_NETWORK_RADIO_TYPE_GSM(self):
        """Message constant 'CELLULAR_NETWORK_RADIO_TYPE_GSM'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_NETWORK_RADIO_TYPE_GSM']

    @property
    def CELLULAR_NETWORK_RADIO_TYPE_CDMA(self):
        """Message constant 'CELLULAR_NETWORK_RADIO_TYPE_CDMA'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_NETWORK_RADIO_TYPE_CDMA']

    @property
    def CELLULAR_NETWORK_RADIO_TYPE_WCDMA(self):
        """Message constant 'CELLULAR_NETWORK_RADIO_TYPE_WCDMA'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_NETWORK_RADIO_TYPE_WCDMA']

    @property
    def CELLULAR_NETWORK_RADIO_TYPE_LTE(self):
        """Message constant 'CELLULAR_NETWORK_RADIO_TYPE_LTE'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_NETWORK_RADIO_TYPE_LTE']


class CellularStatus(metaclass=Metaclass_CellularStatus):
    """
    Message class 'CellularStatus'.

    Constants:
      STATUS_FLAG_UNKNOWN
      STATUS_FLAG_FAILED
      STATUS_FLAG_INITIALIZING
      STATUS_FLAG_LOCKED
      STATUS_FLAG_DISABLED
      STATUS_FLAG_DISABLING
      STATUS_FLAG_ENABLING
      STATUS_FLAG_ENABLED
      STATUS_FLAG_SEARCHING
      STATUS_FLAG_REGISTERED
      STATUS_FLAG_DISCONNECTING
      STATUS_FLAG_CONNECTING
      STATUS_FLAG_CONNECTED
      FAILURE_REASON_NONE
      FAILURE_REASON_UNKNOWN
      FAILURE_REASON_SIM_MISSING
      FAILURE_REASON_SIM_ERROR
      CELLULAR_NETWORK_RADIO_TYPE_NONE
      CELLULAR_NETWORK_RADIO_TYPE_GSM
      CELLULAR_NETWORK_RADIO_TYPE_CDMA
      CELLULAR_NETWORK_RADIO_TYPE_WCDMA
      CELLULAR_NETWORK_RADIO_TYPE_LTE
    """

    __slots__ = [
        '_timestamp',
        '_status',
        '_failure_reason',
        '_type',
        '_quality',
        '_mcc',
        '_mnc',
        '_lac',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'status': 'uint16',
        'failure_reason': 'uint8',
        'type': 'uint8',
        'quality': 'uint8',
        'mcc': 'uint16',
        'mnc': 'uint16',
        'lac': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.status = kwargs.get('status', int())
        self.failure_reason = kwargs.get('failure_reason', int())
        self.type = kwargs.get('type', int())
        self.quality = kwargs.get('quality', int())
        self.mcc = kwargs.get('mcc', int())
        self.mnc = kwargs.get('mnc', int())
        self.lac = kwargs.get('lac', int())

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
        if self.status != other.status:
            return False
        if self.failure_reason != other.failure_reason:
            return False
        if self.type != other.type:
            return False
        if self.quality != other.quality:
            return False
        if self.mcc != other.mcc:
            return False
        if self.mnc != other.mnc:
            return False
        if self.lac != other.lac:
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
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'status' field must be an unsigned integer in [0, 65535]"
        self._status = value

    @builtins.property
    def failure_reason(self):
        """Message field 'failure_reason'."""
        return self._failure_reason

    @failure_reason.setter
    def failure_reason(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'failure_reason' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'failure_reason' field must be an unsigned integer in [0, 255]"
        self._failure_reason = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def quality(self):
        """Message field 'quality'."""
        return self._quality

    @quality.setter
    def quality(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'quality' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'quality' field must be an unsigned integer in [0, 255]"
        self._quality = value

    @builtins.property
    def mcc(self):
        """Message field 'mcc'."""
        return self._mcc

    @mcc.setter
    def mcc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mcc' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'mcc' field must be an unsigned integer in [0, 65535]"
        self._mcc = value

    @builtins.property
    def mnc(self):
        """Message field 'mnc'."""
        return self._mnc

    @mnc.setter
    def mnc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mnc' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'mnc' field must be an unsigned integer in [0, 65535]"
        self._mnc = value

    @builtins.property
    def lac(self):
        """Message field 'lac'."""
        return self._lac

    @lac.setter
    def lac(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lac' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'lac' field must be an unsigned integer in [0, 65535]"
        self._lac = value
