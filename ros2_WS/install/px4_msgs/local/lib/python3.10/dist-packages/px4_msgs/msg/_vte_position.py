# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VtePosition.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'rel_pos'
# Member 'vel_uav'
# Member 'vel_target'
# Member 'bias'
# Member 'acc_target'
# Member 'cov_rel_pos'
# Member 'cov_vel_uav'
# Member 'cov_bias'
# Member 'cov_vel_target'
# Member 'cov_acc_target'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VtePosition(type):
    """Metaclass of message 'VtePosition'."""

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
                'px4_msgs.msg.VtePosition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vte_position
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vte_position
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vte_position
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vte_position
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vte_position

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VtePosition(metaclass=Metaclass_VtePosition):
    """Message class 'VtePosition'."""

    __slots__ = [
        '_timestamp',
        '_rel_pos_valid',
        '_rel_vel_valid',
        '_rel_pos',
        '_vel_uav',
        '_vel_target',
        '_bias',
        '_acc_target',
        '_cov_rel_pos',
        '_cov_vel_uav',
        '_cov_bias',
        '_cov_vel_target',
        '_cov_acc_target',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'rel_pos_valid': 'boolean',
        'rel_vel_valid': 'boolean',
        'rel_pos': 'float[3]',
        'vel_uav': 'float[3]',
        'vel_target': 'float[3]',
        'bias': 'float[3]',
        'acc_target': 'float[3]',
        'cov_rel_pos': 'float[3]',
        'cov_vel_uav': 'float[3]',
        'cov_bias': 'float[3]',
        'cov_vel_target': 'float[3]',
        'cov_acc_target': 'float[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.rel_pos_valid = kwargs.get('rel_pos_valid', bool())
        self.rel_vel_valid = kwargs.get('rel_vel_valid', bool())
        if 'rel_pos' not in kwargs:
            self.rel_pos = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.rel_pos = kwargs.get('rel_pos')
        if 'vel_uav' not in kwargs:
            self.vel_uav = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.vel_uav = kwargs.get('vel_uav')
        if 'vel_target' not in kwargs:
            self.vel_target = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.vel_target = kwargs.get('vel_target')
        if 'bias' not in kwargs:
            self.bias = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.bias = kwargs.get('bias')
        if 'acc_target' not in kwargs:
            self.acc_target = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.acc_target = kwargs.get('acc_target')
        if 'cov_rel_pos' not in kwargs:
            self.cov_rel_pos = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.cov_rel_pos = kwargs.get('cov_rel_pos')
        if 'cov_vel_uav' not in kwargs:
            self.cov_vel_uav = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.cov_vel_uav = kwargs.get('cov_vel_uav')
        if 'cov_bias' not in kwargs:
            self.cov_bias = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.cov_bias = kwargs.get('cov_bias')
        if 'cov_vel_target' not in kwargs:
            self.cov_vel_target = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.cov_vel_target = kwargs.get('cov_vel_target')
        if 'cov_acc_target' not in kwargs:
            self.cov_acc_target = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.cov_acc_target = kwargs.get('cov_acc_target')

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
        if self.rel_pos_valid != other.rel_pos_valid:
            return False
        if self.rel_vel_valid != other.rel_vel_valid:
            return False
        if any(self.rel_pos != other.rel_pos):
            return False
        if any(self.vel_uav != other.vel_uav):
            return False
        if any(self.vel_target != other.vel_target):
            return False
        if any(self.bias != other.bias):
            return False
        if any(self.acc_target != other.acc_target):
            return False
        if any(self.cov_rel_pos != other.cov_rel_pos):
            return False
        if any(self.cov_vel_uav != other.cov_vel_uav):
            return False
        if any(self.cov_bias != other.cov_bias):
            return False
        if any(self.cov_vel_target != other.cov_vel_target):
            return False
        if any(self.cov_acc_target != other.cov_acc_target):
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
    def rel_pos_valid(self):
        """Message field 'rel_pos_valid'."""
        return self._rel_pos_valid

    @rel_pos_valid.setter
    def rel_pos_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rel_pos_valid' field must be of type 'bool'"
        self._rel_pos_valid = value

    @builtins.property
    def rel_vel_valid(self):
        """Message field 'rel_vel_valid'."""
        return self._rel_vel_valid

    @rel_vel_valid.setter
    def rel_vel_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rel_vel_valid' field must be of type 'bool'"
        self._rel_vel_valid = value

    @builtins.property
    def rel_pos(self):
        """Message field 'rel_pos'."""
        return self._rel_pos

    @rel_pos.setter
    def rel_pos(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'rel_pos' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'rel_pos' numpy.ndarray() must have a size of 3"
            self._rel_pos = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'rel_pos' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._rel_pos = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def vel_uav(self):
        """Message field 'vel_uav'."""
        return self._vel_uav

    @vel_uav.setter
    def vel_uav(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'vel_uav' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'vel_uav' numpy.ndarray() must have a size of 3"
            self._vel_uav = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'vel_uav' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._vel_uav = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def vel_target(self):
        """Message field 'vel_target'."""
        return self._vel_target

    @vel_target.setter
    def vel_target(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'vel_target' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'vel_target' numpy.ndarray() must have a size of 3"
            self._vel_target = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'vel_target' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._vel_target = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def bias(self):
        """Message field 'bias'."""
        return self._bias

    @bias.setter
    def bias(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'bias' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'bias' numpy.ndarray() must have a size of 3"
            self._bias = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'bias' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._bias = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def acc_target(self):
        """Message field 'acc_target'."""
        return self._acc_target

    @acc_target.setter
    def acc_target(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'acc_target' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'acc_target' numpy.ndarray() must have a size of 3"
            self._acc_target = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'acc_target' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._acc_target = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def cov_rel_pos(self):
        """Message field 'cov_rel_pos'."""
        return self._cov_rel_pos

    @cov_rel_pos.setter
    def cov_rel_pos(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'cov_rel_pos' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'cov_rel_pos' numpy.ndarray() must have a size of 3"
            self._cov_rel_pos = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'cov_rel_pos' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._cov_rel_pos = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def cov_vel_uav(self):
        """Message field 'cov_vel_uav'."""
        return self._cov_vel_uav

    @cov_vel_uav.setter
    def cov_vel_uav(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'cov_vel_uav' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'cov_vel_uav' numpy.ndarray() must have a size of 3"
            self._cov_vel_uav = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'cov_vel_uav' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._cov_vel_uav = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def cov_bias(self):
        """Message field 'cov_bias'."""
        return self._cov_bias

    @cov_bias.setter
    def cov_bias(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'cov_bias' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'cov_bias' numpy.ndarray() must have a size of 3"
            self._cov_bias = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'cov_bias' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._cov_bias = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def cov_vel_target(self):
        """Message field 'cov_vel_target'."""
        return self._cov_vel_target

    @cov_vel_target.setter
    def cov_vel_target(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'cov_vel_target' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'cov_vel_target' numpy.ndarray() must have a size of 3"
            self._cov_vel_target = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'cov_vel_target' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._cov_vel_target = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def cov_acc_target(self):
        """Message field 'cov_acc_target'."""
        return self._cov_acc_target

    @cov_acc_target.setter
    def cov_acc_target(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'cov_acc_target' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'cov_acc_target' numpy.ndarray() must have a size of 3"
            self._cov_acc_target = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'cov_acc_target' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._cov_acc_target = numpy.array(value, dtype=numpy.float32)
