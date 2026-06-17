# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/EstimatorFusionControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EstimatorFusionControl(type):
    """Metaclass of message 'EstimatorFusionControl'."""

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
                'px4_msgs.msg.EstimatorFusionControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__estimator_fusion_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__estimator_fusion_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__estimator_fusion_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__estimator_fusion_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__estimator_fusion_control

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EstimatorFusionControl(metaclass=Metaclass_EstimatorFusionControl):
    """Message class 'EstimatorFusionControl'."""

    __slots__ = [
        '_timestamp',
        '_gps_intended',
        '_of_intended',
        '_ev_intended',
        '_agp_intended',
        '_baro_intended',
        '_rng_intended',
        '_mag_intended',
        '_aspd_intended',
        '_rngbcn_intended',
        '_gps_active',
        '_of_active',
        '_ev_active',
        '_agp_active',
        '_baro_active',
        '_rng_active',
        '_mag_active',
        '_aspd_active',
        '_rngbcn_active',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'gps_intended': 'boolean[2]',
        'of_intended': 'boolean',
        'ev_intended': 'boolean',
        'agp_intended': 'boolean[4]',
        'baro_intended': 'boolean',
        'rng_intended': 'boolean',
        'mag_intended': 'boolean',
        'aspd_intended': 'boolean',
        'rngbcn_intended': 'boolean',
        'gps_active': 'boolean[2]',
        'of_active': 'boolean',
        'ev_active': 'boolean',
        'agp_active': 'boolean[4]',
        'baro_active': 'boolean',
        'rng_active': 'boolean',
        'mag_active': 'boolean',
        'aspd_active': 'boolean',
        'rngbcn_active': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 4),  # noqa: E501
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
        self.gps_intended = kwargs.get(
            'gps_intended',
            [bool() for x in range(2)]
        )
        self.of_intended = kwargs.get('of_intended', bool())
        self.ev_intended = kwargs.get('ev_intended', bool())
        self.agp_intended = kwargs.get(
            'agp_intended',
            [bool() for x in range(4)]
        )
        self.baro_intended = kwargs.get('baro_intended', bool())
        self.rng_intended = kwargs.get('rng_intended', bool())
        self.mag_intended = kwargs.get('mag_intended', bool())
        self.aspd_intended = kwargs.get('aspd_intended', bool())
        self.rngbcn_intended = kwargs.get('rngbcn_intended', bool())
        self.gps_active = kwargs.get(
            'gps_active',
            [bool() for x in range(2)]
        )
        self.of_active = kwargs.get('of_active', bool())
        self.ev_active = kwargs.get('ev_active', bool())
        self.agp_active = kwargs.get(
            'agp_active',
            [bool() for x in range(4)]
        )
        self.baro_active = kwargs.get('baro_active', bool())
        self.rng_active = kwargs.get('rng_active', bool())
        self.mag_active = kwargs.get('mag_active', bool())
        self.aspd_active = kwargs.get('aspd_active', bool())
        self.rngbcn_active = kwargs.get('rngbcn_active', bool())

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
        if self.gps_intended != other.gps_intended:
            return False
        if self.of_intended != other.of_intended:
            return False
        if self.ev_intended != other.ev_intended:
            return False
        if self.agp_intended != other.agp_intended:
            return False
        if self.baro_intended != other.baro_intended:
            return False
        if self.rng_intended != other.rng_intended:
            return False
        if self.mag_intended != other.mag_intended:
            return False
        if self.aspd_intended != other.aspd_intended:
            return False
        if self.rngbcn_intended != other.rngbcn_intended:
            return False
        if self.gps_active != other.gps_active:
            return False
        if self.of_active != other.of_active:
            return False
        if self.ev_active != other.ev_active:
            return False
        if self.agp_active != other.agp_active:
            return False
        if self.baro_active != other.baro_active:
            return False
        if self.rng_active != other.rng_active:
            return False
        if self.mag_active != other.mag_active:
            return False
        if self.aspd_active != other.aspd_active:
            return False
        if self.rngbcn_active != other.rngbcn_active:
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
    def gps_intended(self):
        """Message field 'gps_intended'."""
        return self._gps_intended

    @gps_intended.setter
    def gps_intended(self, value):
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
                 len(value) == 2 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'gps_intended' field must be a set or sequence with length 2 and each value of type 'bool'"
        self._gps_intended = value

    @builtins.property
    def of_intended(self):
        """Message field 'of_intended'."""
        return self._of_intended

    @of_intended.setter
    def of_intended(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'of_intended' field must be of type 'bool'"
        self._of_intended = value

    @builtins.property
    def ev_intended(self):
        """Message field 'ev_intended'."""
        return self._ev_intended

    @ev_intended.setter
    def ev_intended(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ev_intended' field must be of type 'bool'"
        self._ev_intended = value

    @builtins.property
    def agp_intended(self):
        """Message field 'agp_intended'."""
        return self._agp_intended

    @agp_intended.setter
    def agp_intended(self, value):
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'agp_intended' field must be a set or sequence with length 4 and each value of type 'bool'"
        self._agp_intended = value

    @builtins.property
    def baro_intended(self):
        """Message field 'baro_intended'."""
        return self._baro_intended

    @baro_intended.setter
    def baro_intended(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'baro_intended' field must be of type 'bool'"
        self._baro_intended = value

    @builtins.property
    def rng_intended(self):
        """Message field 'rng_intended'."""
        return self._rng_intended

    @rng_intended.setter
    def rng_intended(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rng_intended' field must be of type 'bool'"
        self._rng_intended = value

    @builtins.property
    def mag_intended(self):
        """Message field 'mag_intended'."""
        return self._mag_intended

    @mag_intended.setter
    def mag_intended(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mag_intended' field must be of type 'bool'"
        self._mag_intended = value

    @builtins.property
    def aspd_intended(self):
        """Message field 'aspd_intended'."""
        return self._aspd_intended

    @aspd_intended.setter
    def aspd_intended(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'aspd_intended' field must be of type 'bool'"
        self._aspd_intended = value

    @builtins.property
    def rngbcn_intended(self):
        """Message field 'rngbcn_intended'."""
        return self._rngbcn_intended

    @rngbcn_intended.setter
    def rngbcn_intended(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rngbcn_intended' field must be of type 'bool'"
        self._rngbcn_intended = value

    @builtins.property
    def gps_active(self):
        """Message field 'gps_active'."""
        return self._gps_active

    @gps_active.setter
    def gps_active(self, value):
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
                 len(value) == 2 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'gps_active' field must be a set or sequence with length 2 and each value of type 'bool'"
        self._gps_active = value

    @builtins.property
    def of_active(self):
        """Message field 'of_active'."""
        return self._of_active

    @of_active.setter
    def of_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'of_active' field must be of type 'bool'"
        self._of_active = value

    @builtins.property
    def ev_active(self):
        """Message field 'ev_active'."""
        return self._ev_active

    @ev_active.setter
    def ev_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ev_active' field must be of type 'bool'"
        self._ev_active = value

    @builtins.property
    def agp_active(self):
        """Message field 'agp_active'."""
        return self._agp_active

    @agp_active.setter
    def agp_active(self, value):
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'agp_active' field must be a set or sequence with length 4 and each value of type 'bool'"
        self._agp_active = value

    @builtins.property
    def baro_active(self):
        """Message field 'baro_active'."""
        return self._baro_active

    @baro_active.setter
    def baro_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'baro_active' field must be of type 'bool'"
        self._baro_active = value

    @builtins.property
    def rng_active(self):
        """Message field 'rng_active'."""
        return self._rng_active

    @rng_active.setter
    def rng_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rng_active' field must be of type 'bool'"
        self._rng_active = value

    @builtins.property
    def mag_active(self):
        """Message field 'mag_active'."""
        return self._mag_active

    @mag_active.setter
    def mag_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mag_active' field must be of type 'bool'"
        self._mag_active = value

    @builtins.property
    def aspd_active(self):
        """Message field 'aspd_active'."""
        return self._aspd_active

    @aspd_active.setter
    def aspd_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'aspd_active' field must be of type 'bool'"
        self._aspd_active = value

    @builtins.property
    def rngbcn_active(self):
        """Message field 'rngbcn_active'."""
        return self._rngbcn_active

    @rngbcn_active.setter
    def rngbcn_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rngbcn_active' field must be of type 'bool'"
        self._rngbcn_active = value
