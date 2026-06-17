# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/FuelTankStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FuelTankStatus(type):
    """Metaclass of message 'FuelTankStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MAV_FUEL_TYPE_UNKNOWN': 0,
        'MAV_FUEL_TYPE_LIQUID': 1,
        'MAV_FUEL_TYPE_GAS': 2,
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
                'px4_msgs.msg.FuelTankStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fuel_tank_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fuel_tank_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fuel_tank_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fuel_tank_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fuel_tank_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MAV_FUEL_TYPE_UNKNOWN': cls.__constants['MAV_FUEL_TYPE_UNKNOWN'],
            'MAV_FUEL_TYPE_LIQUID': cls.__constants['MAV_FUEL_TYPE_LIQUID'],
            'MAV_FUEL_TYPE_GAS': cls.__constants['MAV_FUEL_TYPE_GAS'],
        }

    @property
    def MAV_FUEL_TYPE_UNKNOWN(self):
        """Message constant 'MAV_FUEL_TYPE_UNKNOWN'."""
        return Metaclass_FuelTankStatus.__constants['MAV_FUEL_TYPE_UNKNOWN']

    @property
    def MAV_FUEL_TYPE_LIQUID(self):
        """Message constant 'MAV_FUEL_TYPE_LIQUID'."""
        return Metaclass_FuelTankStatus.__constants['MAV_FUEL_TYPE_LIQUID']

    @property
    def MAV_FUEL_TYPE_GAS(self):
        """Message constant 'MAV_FUEL_TYPE_GAS'."""
        return Metaclass_FuelTankStatus.__constants['MAV_FUEL_TYPE_GAS']


class FuelTankStatus(metaclass=Metaclass_FuelTankStatus):
    """
    Message class 'FuelTankStatus'.

    Constants:
      MAV_FUEL_TYPE_UNKNOWN
      MAV_FUEL_TYPE_LIQUID
      MAV_FUEL_TYPE_GAS
    """

    __slots__ = [
        '_timestamp',
        '_maximum_fuel_capacity',
        '_consumed_fuel',
        '_fuel_consumption_rate',
        '_percent_remaining',
        '_remaining_fuel',
        '_fuel_tank_id',
        '_fuel_type',
        '_temperature',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'maximum_fuel_capacity': 'float',
        'consumed_fuel': 'float',
        'fuel_consumption_rate': 'float',
        'percent_remaining': 'uint8',
        'remaining_fuel': 'float',
        'fuel_tank_id': 'uint8',
        'fuel_type': 'uint32',
        'temperature': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.maximum_fuel_capacity = kwargs.get('maximum_fuel_capacity', float())
        self.consumed_fuel = kwargs.get('consumed_fuel', float())
        self.fuel_consumption_rate = kwargs.get('fuel_consumption_rate', float())
        self.percent_remaining = kwargs.get('percent_remaining', int())
        self.remaining_fuel = kwargs.get('remaining_fuel', float())
        self.fuel_tank_id = kwargs.get('fuel_tank_id', int())
        self.fuel_type = kwargs.get('fuel_type', int())
        self.temperature = kwargs.get('temperature', float())

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
        if self.maximum_fuel_capacity != other.maximum_fuel_capacity:
            return False
        if self.consumed_fuel != other.consumed_fuel:
            return False
        if self.fuel_consumption_rate != other.fuel_consumption_rate:
            return False
        if self.percent_remaining != other.percent_remaining:
            return False
        if self.remaining_fuel != other.remaining_fuel:
            return False
        if self.fuel_tank_id != other.fuel_tank_id:
            return False
        if self.fuel_type != other.fuel_type:
            return False
        if self.temperature != other.temperature:
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
    def maximum_fuel_capacity(self):
        """Message field 'maximum_fuel_capacity'."""
        return self._maximum_fuel_capacity

    @maximum_fuel_capacity.setter
    def maximum_fuel_capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'maximum_fuel_capacity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'maximum_fuel_capacity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._maximum_fuel_capacity = value

    @builtins.property
    def consumed_fuel(self):
        """Message field 'consumed_fuel'."""
        return self._consumed_fuel

    @consumed_fuel.setter
    def consumed_fuel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'consumed_fuel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'consumed_fuel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._consumed_fuel = value

    @builtins.property
    def fuel_consumption_rate(self):
        """Message field 'fuel_consumption_rate'."""
        return self._fuel_consumption_rate

    @fuel_consumption_rate.setter
    def fuel_consumption_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fuel_consumption_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fuel_consumption_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fuel_consumption_rate = value

    @builtins.property
    def percent_remaining(self):
        """Message field 'percent_remaining'."""
        return self._percent_remaining

    @percent_remaining.setter
    def percent_remaining(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'percent_remaining' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'percent_remaining' field must be an unsigned integer in [0, 255]"
        self._percent_remaining = value

    @builtins.property
    def remaining_fuel(self):
        """Message field 'remaining_fuel'."""
        return self._remaining_fuel

    @remaining_fuel.setter
    def remaining_fuel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remaining_fuel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'remaining_fuel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._remaining_fuel = value

    @builtins.property
    def fuel_tank_id(self):
        """Message field 'fuel_tank_id'."""
        return self._fuel_tank_id

    @fuel_tank_id.setter
    def fuel_tank_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fuel_tank_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fuel_tank_id' field must be an unsigned integer in [0, 255]"
        self._fuel_tank_id = value

    @builtins.property
    def fuel_type(self):
        """Message field 'fuel_type'."""
        return self._fuel_type

    @fuel_type.setter
    def fuel_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fuel_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'fuel_type' field must be an unsigned integer in [0, 4294967295]"
        self._fuel_type = value

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temperature = value
