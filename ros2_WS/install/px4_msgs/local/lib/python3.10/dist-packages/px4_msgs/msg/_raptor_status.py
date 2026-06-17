# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/RaptorStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'internal_reference_position'
# Member 'internal_reference_linear_velocity'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RaptorStatus(type):
    """Metaclass of message 'RaptorStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MESSAGE_VERSION': 0,
        'EXIT_REASON_NONE': 0,
        'EXIT_REASON_NO_ANGULAR_VELOCITY_UPDATE': 1,
        'EXIT_REASON_NOT_ALL_OBSERVATIONS_SET': 2,
        'EXIT_REASON_ANGULAR_VELOCITY_STALE': 3,
        'EXIT_REASON_LOCAL_POSITION_STALE': 4,
        'EXIT_REASON_ATTITUDE_STALE': 5,
        'EXIT_REASON_EXECUTOR_STATUS_SOURCE_NOT_CONTROL': 6,
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
                'px4_msgs.msg.RaptorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__raptor_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__raptor_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__raptor_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__raptor_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__raptor_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MESSAGE_VERSION': cls.__constants['MESSAGE_VERSION'],
            'EXIT_REASON_NONE': cls.__constants['EXIT_REASON_NONE'],
            'EXIT_REASON_NO_ANGULAR_VELOCITY_UPDATE': cls.__constants['EXIT_REASON_NO_ANGULAR_VELOCITY_UPDATE'],
            'EXIT_REASON_NOT_ALL_OBSERVATIONS_SET': cls.__constants['EXIT_REASON_NOT_ALL_OBSERVATIONS_SET'],
            'EXIT_REASON_ANGULAR_VELOCITY_STALE': cls.__constants['EXIT_REASON_ANGULAR_VELOCITY_STALE'],
            'EXIT_REASON_LOCAL_POSITION_STALE': cls.__constants['EXIT_REASON_LOCAL_POSITION_STALE'],
            'EXIT_REASON_ATTITUDE_STALE': cls.__constants['EXIT_REASON_ATTITUDE_STALE'],
            'EXIT_REASON_EXECUTOR_STATUS_SOURCE_NOT_CONTROL': cls.__constants['EXIT_REASON_EXECUTOR_STATUS_SOURCE_NOT_CONTROL'],
        }

    @property
    def MESSAGE_VERSION(self):
        """Message constant 'MESSAGE_VERSION'."""
        return Metaclass_RaptorStatus.__constants['MESSAGE_VERSION']

    @property
    def EXIT_REASON_NONE(self):
        """Message constant 'EXIT_REASON_NONE'."""
        return Metaclass_RaptorStatus.__constants['EXIT_REASON_NONE']

    @property
    def EXIT_REASON_NO_ANGULAR_VELOCITY_UPDATE(self):
        """Message constant 'EXIT_REASON_NO_ANGULAR_VELOCITY_UPDATE'."""
        return Metaclass_RaptorStatus.__constants['EXIT_REASON_NO_ANGULAR_VELOCITY_UPDATE']

    @property
    def EXIT_REASON_NOT_ALL_OBSERVATIONS_SET(self):
        """Message constant 'EXIT_REASON_NOT_ALL_OBSERVATIONS_SET'."""
        return Metaclass_RaptorStatus.__constants['EXIT_REASON_NOT_ALL_OBSERVATIONS_SET']

    @property
    def EXIT_REASON_ANGULAR_VELOCITY_STALE(self):
        """Message constant 'EXIT_REASON_ANGULAR_VELOCITY_STALE'."""
        return Metaclass_RaptorStatus.__constants['EXIT_REASON_ANGULAR_VELOCITY_STALE']

    @property
    def EXIT_REASON_LOCAL_POSITION_STALE(self):
        """Message constant 'EXIT_REASON_LOCAL_POSITION_STALE'."""
        return Metaclass_RaptorStatus.__constants['EXIT_REASON_LOCAL_POSITION_STALE']

    @property
    def EXIT_REASON_ATTITUDE_STALE(self):
        """Message constant 'EXIT_REASON_ATTITUDE_STALE'."""
        return Metaclass_RaptorStatus.__constants['EXIT_REASON_ATTITUDE_STALE']

    @property
    def EXIT_REASON_EXECUTOR_STATUS_SOURCE_NOT_CONTROL(self):
        """Message constant 'EXIT_REASON_EXECUTOR_STATUS_SOURCE_NOT_CONTROL'."""
        return Metaclass_RaptorStatus.__constants['EXIT_REASON_EXECUTOR_STATUS_SOURCE_NOT_CONTROL']


class RaptorStatus(metaclass=Metaclass_RaptorStatus):
    """
    Message class 'RaptorStatus'.

    Constants:
      MESSAGE_VERSION
      EXIT_REASON_NONE
      EXIT_REASON_NO_ANGULAR_VELOCITY_UPDATE
      EXIT_REASON_NOT_ALL_OBSERVATIONS_SET
      EXIT_REASON_ANGULAR_VELOCITY_STALE
      EXIT_REASON_LOCAL_POSITION_STALE
      EXIT_REASON_ATTITUDE_STALE
      EXIT_REASON_EXECUTOR_STATUS_SOURCE_NOT_CONTROL
    """

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_subscription_update_angular_velocity',
        '_subscription_update_local_position',
        '_subscription_update_attitude',
        '_subscription_update_trajectory_setpoint',
        '_subscription_update_vehicle_status',
        '_exit_reason',
        '_timestamp_last_vehicle_angular_velocity',
        '_timestamp_last_vehicle_local_position',
        '_timestamp_last_vehicle_attitude',
        '_timestamp_last_trajectory_setpoint',
        '_vehicle_angular_velocity_stale',
        '_vehicle_local_position_stale',
        '_vehicle_attitude_stale',
        '_trajectory_setpoint_stale',
        '_active',
        '_substep',
        '_control_interval',
        '_trajectory_setpoint_dt_mean',
        '_trajectory_setpoint_dt_max',
        '_trajectory_setpoint_dt_max_since_activation',
        '_internal_reference_position',
        '_internal_reference_linear_velocity',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'subscription_update_angular_velocity': 'boolean',
        'subscription_update_local_position': 'boolean',
        'subscription_update_attitude': 'boolean',
        'subscription_update_trajectory_setpoint': 'boolean',
        'subscription_update_vehicle_status': 'boolean',
        'exit_reason': 'uint8',
        'timestamp_last_vehicle_angular_velocity': 'uint32',
        'timestamp_last_vehicle_local_position': 'uint32',
        'timestamp_last_vehicle_attitude': 'uint32',
        'timestamp_last_trajectory_setpoint': 'uint32',
        'vehicle_angular_velocity_stale': 'boolean',
        'vehicle_local_position_stale': 'boolean',
        'vehicle_attitude_stale': 'boolean',
        'trajectory_setpoint_stale': 'boolean',
        'active': 'boolean',
        'substep': 'uint8',
        'control_interval': 'float',
        'trajectory_setpoint_dt_mean': 'float',
        'trajectory_setpoint_dt_max': 'float',
        'trajectory_setpoint_dt_max_since_activation': 'float',
        'internal_reference_position': 'float[3]',
        'internal_reference_linear_velocity': 'float[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.subscription_update_angular_velocity = kwargs.get('subscription_update_angular_velocity', bool())
        self.subscription_update_local_position = kwargs.get('subscription_update_local_position', bool())
        self.subscription_update_attitude = kwargs.get('subscription_update_attitude', bool())
        self.subscription_update_trajectory_setpoint = kwargs.get('subscription_update_trajectory_setpoint', bool())
        self.subscription_update_vehicle_status = kwargs.get('subscription_update_vehicle_status', bool())
        self.exit_reason = kwargs.get('exit_reason', int())
        self.timestamp_last_vehicle_angular_velocity = kwargs.get('timestamp_last_vehicle_angular_velocity', int())
        self.timestamp_last_vehicle_local_position = kwargs.get('timestamp_last_vehicle_local_position', int())
        self.timestamp_last_vehicle_attitude = kwargs.get('timestamp_last_vehicle_attitude', int())
        self.timestamp_last_trajectory_setpoint = kwargs.get('timestamp_last_trajectory_setpoint', int())
        self.vehicle_angular_velocity_stale = kwargs.get('vehicle_angular_velocity_stale', bool())
        self.vehicle_local_position_stale = kwargs.get('vehicle_local_position_stale', bool())
        self.vehicle_attitude_stale = kwargs.get('vehicle_attitude_stale', bool())
        self.trajectory_setpoint_stale = kwargs.get('trajectory_setpoint_stale', bool())
        self.active = kwargs.get('active', bool())
        self.substep = kwargs.get('substep', int())
        self.control_interval = kwargs.get('control_interval', float())
        self.trajectory_setpoint_dt_mean = kwargs.get('trajectory_setpoint_dt_mean', float())
        self.trajectory_setpoint_dt_max = kwargs.get('trajectory_setpoint_dt_max', float())
        self.trajectory_setpoint_dt_max_since_activation = kwargs.get('trajectory_setpoint_dt_max_since_activation', float())
        if 'internal_reference_position' not in kwargs:
            self.internal_reference_position = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.internal_reference_position = kwargs.get('internal_reference_position')
        if 'internal_reference_linear_velocity' not in kwargs:
            self.internal_reference_linear_velocity = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.internal_reference_linear_velocity = kwargs.get('internal_reference_linear_velocity')

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
        if self.subscription_update_angular_velocity != other.subscription_update_angular_velocity:
            return False
        if self.subscription_update_local_position != other.subscription_update_local_position:
            return False
        if self.subscription_update_attitude != other.subscription_update_attitude:
            return False
        if self.subscription_update_trajectory_setpoint != other.subscription_update_trajectory_setpoint:
            return False
        if self.subscription_update_vehicle_status != other.subscription_update_vehicle_status:
            return False
        if self.exit_reason != other.exit_reason:
            return False
        if self.timestamp_last_vehicle_angular_velocity != other.timestamp_last_vehicle_angular_velocity:
            return False
        if self.timestamp_last_vehicle_local_position != other.timestamp_last_vehicle_local_position:
            return False
        if self.timestamp_last_vehicle_attitude != other.timestamp_last_vehicle_attitude:
            return False
        if self.timestamp_last_trajectory_setpoint != other.timestamp_last_trajectory_setpoint:
            return False
        if self.vehicle_angular_velocity_stale != other.vehicle_angular_velocity_stale:
            return False
        if self.vehicle_local_position_stale != other.vehicle_local_position_stale:
            return False
        if self.vehicle_attitude_stale != other.vehicle_attitude_stale:
            return False
        if self.trajectory_setpoint_stale != other.trajectory_setpoint_stale:
            return False
        if self.active != other.active:
            return False
        if self.substep != other.substep:
            return False
        if self.control_interval != other.control_interval:
            return False
        if self.trajectory_setpoint_dt_mean != other.trajectory_setpoint_dt_mean:
            return False
        if self.trajectory_setpoint_dt_max != other.trajectory_setpoint_dt_max:
            return False
        if self.trajectory_setpoint_dt_max_since_activation != other.trajectory_setpoint_dt_max_since_activation:
            return False
        if any(self.internal_reference_position != other.internal_reference_position):
            return False
        if any(self.internal_reference_linear_velocity != other.internal_reference_linear_velocity):
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
    def subscription_update_angular_velocity(self):
        """Message field 'subscription_update_angular_velocity'."""
        return self._subscription_update_angular_velocity

    @subscription_update_angular_velocity.setter
    def subscription_update_angular_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'subscription_update_angular_velocity' field must be of type 'bool'"
        self._subscription_update_angular_velocity = value

    @builtins.property
    def subscription_update_local_position(self):
        """Message field 'subscription_update_local_position'."""
        return self._subscription_update_local_position

    @subscription_update_local_position.setter
    def subscription_update_local_position(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'subscription_update_local_position' field must be of type 'bool'"
        self._subscription_update_local_position = value

    @builtins.property
    def subscription_update_attitude(self):
        """Message field 'subscription_update_attitude'."""
        return self._subscription_update_attitude

    @subscription_update_attitude.setter
    def subscription_update_attitude(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'subscription_update_attitude' field must be of type 'bool'"
        self._subscription_update_attitude = value

    @builtins.property
    def subscription_update_trajectory_setpoint(self):
        """Message field 'subscription_update_trajectory_setpoint'."""
        return self._subscription_update_trajectory_setpoint

    @subscription_update_trajectory_setpoint.setter
    def subscription_update_trajectory_setpoint(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'subscription_update_trajectory_setpoint' field must be of type 'bool'"
        self._subscription_update_trajectory_setpoint = value

    @builtins.property
    def subscription_update_vehicle_status(self):
        """Message field 'subscription_update_vehicle_status'."""
        return self._subscription_update_vehicle_status

    @subscription_update_vehicle_status.setter
    def subscription_update_vehicle_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'subscription_update_vehicle_status' field must be of type 'bool'"
        self._subscription_update_vehicle_status = value

    @builtins.property
    def exit_reason(self):
        """Message field 'exit_reason'."""
        return self._exit_reason

    @exit_reason.setter
    def exit_reason(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'exit_reason' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'exit_reason' field must be an unsigned integer in [0, 255]"
        self._exit_reason = value

    @builtins.property
    def timestamp_last_vehicle_angular_velocity(self):
        """Message field 'timestamp_last_vehicle_angular_velocity'."""
        return self._timestamp_last_vehicle_angular_velocity

    @timestamp_last_vehicle_angular_velocity.setter
    def timestamp_last_vehicle_angular_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_last_vehicle_angular_velocity' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'timestamp_last_vehicle_angular_velocity' field must be an unsigned integer in [0, 4294967295]"
        self._timestamp_last_vehicle_angular_velocity = value

    @builtins.property
    def timestamp_last_vehicle_local_position(self):
        """Message field 'timestamp_last_vehicle_local_position'."""
        return self._timestamp_last_vehicle_local_position

    @timestamp_last_vehicle_local_position.setter
    def timestamp_last_vehicle_local_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_last_vehicle_local_position' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'timestamp_last_vehicle_local_position' field must be an unsigned integer in [0, 4294967295]"
        self._timestamp_last_vehicle_local_position = value

    @builtins.property
    def timestamp_last_vehicle_attitude(self):
        """Message field 'timestamp_last_vehicle_attitude'."""
        return self._timestamp_last_vehicle_attitude

    @timestamp_last_vehicle_attitude.setter
    def timestamp_last_vehicle_attitude(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_last_vehicle_attitude' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'timestamp_last_vehicle_attitude' field must be an unsigned integer in [0, 4294967295]"
        self._timestamp_last_vehicle_attitude = value

    @builtins.property
    def timestamp_last_trajectory_setpoint(self):
        """Message field 'timestamp_last_trajectory_setpoint'."""
        return self._timestamp_last_trajectory_setpoint

    @timestamp_last_trajectory_setpoint.setter
    def timestamp_last_trajectory_setpoint(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_last_trajectory_setpoint' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'timestamp_last_trajectory_setpoint' field must be an unsigned integer in [0, 4294967295]"
        self._timestamp_last_trajectory_setpoint = value

    @builtins.property
    def vehicle_angular_velocity_stale(self):
        """Message field 'vehicle_angular_velocity_stale'."""
        return self._vehicle_angular_velocity_stale

    @vehicle_angular_velocity_stale.setter
    def vehicle_angular_velocity_stale(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vehicle_angular_velocity_stale' field must be of type 'bool'"
        self._vehicle_angular_velocity_stale = value

    @builtins.property
    def vehicle_local_position_stale(self):
        """Message field 'vehicle_local_position_stale'."""
        return self._vehicle_local_position_stale

    @vehicle_local_position_stale.setter
    def vehicle_local_position_stale(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vehicle_local_position_stale' field must be of type 'bool'"
        self._vehicle_local_position_stale = value

    @builtins.property
    def vehicle_attitude_stale(self):
        """Message field 'vehicle_attitude_stale'."""
        return self._vehicle_attitude_stale

    @vehicle_attitude_stale.setter
    def vehicle_attitude_stale(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vehicle_attitude_stale' field must be of type 'bool'"
        self._vehicle_attitude_stale = value

    @builtins.property
    def trajectory_setpoint_stale(self):
        """Message field 'trajectory_setpoint_stale'."""
        return self._trajectory_setpoint_stale

    @trajectory_setpoint_stale.setter
    def trajectory_setpoint_stale(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'trajectory_setpoint_stale' field must be of type 'bool'"
        self._trajectory_setpoint_stale = value

    @builtins.property
    def active(self):
        """Message field 'active'."""
        return self._active

    @active.setter
    def active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active' field must be of type 'bool'"
        self._active = value

    @builtins.property
    def substep(self):
        """Message field 'substep'."""
        return self._substep

    @substep.setter
    def substep(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'substep' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'substep' field must be an unsigned integer in [0, 255]"
        self._substep = value

    @builtins.property
    def control_interval(self):
        """Message field 'control_interval'."""
        return self._control_interval

    @control_interval.setter
    def control_interval(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'control_interval' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'control_interval' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._control_interval = value

    @builtins.property
    def trajectory_setpoint_dt_mean(self):
        """Message field 'trajectory_setpoint_dt_mean'."""
        return self._trajectory_setpoint_dt_mean

    @trajectory_setpoint_dt_mean.setter
    def trajectory_setpoint_dt_mean(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'trajectory_setpoint_dt_mean' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'trajectory_setpoint_dt_mean' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._trajectory_setpoint_dt_mean = value

    @builtins.property
    def trajectory_setpoint_dt_max(self):
        """Message field 'trajectory_setpoint_dt_max'."""
        return self._trajectory_setpoint_dt_max

    @trajectory_setpoint_dt_max.setter
    def trajectory_setpoint_dt_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'trajectory_setpoint_dt_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'trajectory_setpoint_dt_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._trajectory_setpoint_dt_max = value

    @builtins.property
    def trajectory_setpoint_dt_max_since_activation(self):
        """Message field 'trajectory_setpoint_dt_max_since_activation'."""
        return self._trajectory_setpoint_dt_max_since_activation

    @trajectory_setpoint_dt_max_since_activation.setter
    def trajectory_setpoint_dt_max_since_activation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'trajectory_setpoint_dt_max_since_activation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'trajectory_setpoint_dt_max_since_activation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._trajectory_setpoint_dt_max_since_activation = value

    @builtins.property
    def internal_reference_position(self):
        """Message field 'internal_reference_position'."""
        return self._internal_reference_position

    @internal_reference_position.setter
    def internal_reference_position(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'internal_reference_position' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'internal_reference_position' numpy.ndarray() must have a size of 3"
            self._internal_reference_position = value
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
                "The 'internal_reference_position' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._internal_reference_position = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def internal_reference_linear_velocity(self):
        """Message field 'internal_reference_linear_velocity'."""
        return self._internal_reference_linear_velocity

    @internal_reference_linear_velocity.setter
    def internal_reference_linear_velocity(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'internal_reference_linear_velocity' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'internal_reference_linear_velocity' numpy.ndarray() must have a size of 3"
            self._internal_reference_linear_velocity = value
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
                "The 'internal_reference_linear_velocity' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._internal_reference_linear_velocity = numpy.array(value, dtype=numpy.float32)
