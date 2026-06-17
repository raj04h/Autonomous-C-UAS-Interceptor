# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/BatteryStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'voltage_cell_v'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BatteryStatus(type):
    """Metaclass of message 'BatteryStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MESSAGE_VERSION': 1,
        'MAX_INSTANCES': 3,
        'SOURCE_POWER_MODULE': 0,
        'SOURCE_EXTERNAL': 1,
        'SOURCE_ESCS': 2,
        'WARNING_NONE': 0,
        'WARNING_LOW': 1,
        'WARNING_CRITICAL': 2,
        'WARNING_EMERGENCY': 3,
        'WARNING_FAILED': 4,
        'STATE_UNHEALTHY': 6,
        'STATE_CHARGING': 7,
        'FAULT_DEEP_DISCHARGE': 0,
        'FAULT_SPIKES': 1,
        'FAULT_CELL_FAIL': 2,
        'FAULT_OVER_CURRENT': 3,
        'FAULT_OVER_TEMPERATURE': 4,
        'FAULT_UNDER_TEMPERATURE': 5,
        'FAULT_INCOMPATIBLE_VOLTAGE': 6,
        'FAULT_INCOMPATIBLE_FIRMWARE': 7,
        'FAULT_INCOMPATIBLE_MODEL': 8,
        'FAULT_HARDWARE_FAILURE': 9,
        'FAULT_FAILED_TO_ARM': 10,
        'FAULT_COUNT': 11,
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
                'px4_msgs.msg.BatteryStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__battery_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__battery_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__battery_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__battery_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__battery_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MESSAGE_VERSION': cls.__constants['MESSAGE_VERSION'],
            'MAX_INSTANCES': cls.__constants['MAX_INSTANCES'],
            'SOURCE_POWER_MODULE': cls.__constants['SOURCE_POWER_MODULE'],
            'SOURCE_EXTERNAL': cls.__constants['SOURCE_EXTERNAL'],
            'SOURCE_ESCS': cls.__constants['SOURCE_ESCS'],
            'WARNING_NONE': cls.__constants['WARNING_NONE'],
            'WARNING_LOW': cls.__constants['WARNING_LOW'],
            'WARNING_CRITICAL': cls.__constants['WARNING_CRITICAL'],
            'WARNING_EMERGENCY': cls.__constants['WARNING_EMERGENCY'],
            'WARNING_FAILED': cls.__constants['WARNING_FAILED'],
            'STATE_UNHEALTHY': cls.__constants['STATE_UNHEALTHY'],
            'STATE_CHARGING': cls.__constants['STATE_CHARGING'],
            'FAULT_DEEP_DISCHARGE': cls.__constants['FAULT_DEEP_DISCHARGE'],
            'FAULT_SPIKES': cls.__constants['FAULT_SPIKES'],
            'FAULT_CELL_FAIL': cls.__constants['FAULT_CELL_FAIL'],
            'FAULT_OVER_CURRENT': cls.__constants['FAULT_OVER_CURRENT'],
            'FAULT_OVER_TEMPERATURE': cls.__constants['FAULT_OVER_TEMPERATURE'],
            'FAULT_UNDER_TEMPERATURE': cls.__constants['FAULT_UNDER_TEMPERATURE'],
            'FAULT_INCOMPATIBLE_VOLTAGE': cls.__constants['FAULT_INCOMPATIBLE_VOLTAGE'],
            'FAULT_INCOMPATIBLE_FIRMWARE': cls.__constants['FAULT_INCOMPATIBLE_FIRMWARE'],
            'FAULT_INCOMPATIBLE_MODEL': cls.__constants['FAULT_INCOMPATIBLE_MODEL'],
            'FAULT_HARDWARE_FAILURE': cls.__constants['FAULT_HARDWARE_FAILURE'],
            'FAULT_FAILED_TO_ARM': cls.__constants['FAULT_FAILED_TO_ARM'],
            'FAULT_COUNT': cls.__constants['FAULT_COUNT'],
        }

    @property
    def MESSAGE_VERSION(self):
        """Message constant 'MESSAGE_VERSION'."""
        return Metaclass_BatteryStatus.__constants['MESSAGE_VERSION']

    @property
    def MAX_INSTANCES(self):
        """Message constant 'MAX_INSTANCES'."""
        return Metaclass_BatteryStatus.__constants['MAX_INSTANCES']

    @property
    def SOURCE_POWER_MODULE(self):
        """Message constant 'SOURCE_POWER_MODULE'."""
        return Metaclass_BatteryStatus.__constants['SOURCE_POWER_MODULE']

    @property
    def SOURCE_EXTERNAL(self):
        """Message constant 'SOURCE_EXTERNAL'."""
        return Metaclass_BatteryStatus.__constants['SOURCE_EXTERNAL']

    @property
    def SOURCE_ESCS(self):
        """Message constant 'SOURCE_ESCS'."""
        return Metaclass_BatteryStatus.__constants['SOURCE_ESCS']

    @property
    def WARNING_NONE(self):
        """Message constant 'WARNING_NONE'."""
        return Metaclass_BatteryStatus.__constants['WARNING_NONE']

    @property
    def WARNING_LOW(self):
        """Message constant 'WARNING_LOW'."""
        return Metaclass_BatteryStatus.__constants['WARNING_LOW']

    @property
    def WARNING_CRITICAL(self):
        """Message constant 'WARNING_CRITICAL'."""
        return Metaclass_BatteryStatus.__constants['WARNING_CRITICAL']

    @property
    def WARNING_EMERGENCY(self):
        """Message constant 'WARNING_EMERGENCY'."""
        return Metaclass_BatteryStatus.__constants['WARNING_EMERGENCY']

    @property
    def WARNING_FAILED(self):
        """Message constant 'WARNING_FAILED'."""
        return Metaclass_BatteryStatus.__constants['WARNING_FAILED']

    @property
    def STATE_UNHEALTHY(self):
        """Message constant 'STATE_UNHEALTHY'."""
        return Metaclass_BatteryStatus.__constants['STATE_UNHEALTHY']

    @property
    def STATE_CHARGING(self):
        """Message constant 'STATE_CHARGING'."""
        return Metaclass_BatteryStatus.__constants['STATE_CHARGING']

    @property
    def FAULT_DEEP_DISCHARGE(self):
        """Message constant 'FAULT_DEEP_DISCHARGE'."""
        return Metaclass_BatteryStatus.__constants['FAULT_DEEP_DISCHARGE']

    @property
    def FAULT_SPIKES(self):
        """Message constant 'FAULT_SPIKES'."""
        return Metaclass_BatteryStatus.__constants['FAULT_SPIKES']

    @property
    def FAULT_CELL_FAIL(self):
        """Message constant 'FAULT_CELL_FAIL'."""
        return Metaclass_BatteryStatus.__constants['FAULT_CELL_FAIL']

    @property
    def FAULT_OVER_CURRENT(self):
        """Message constant 'FAULT_OVER_CURRENT'."""
        return Metaclass_BatteryStatus.__constants['FAULT_OVER_CURRENT']

    @property
    def FAULT_OVER_TEMPERATURE(self):
        """Message constant 'FAULT_OVER_TEMPERATURE'."""
        return Metaclass_BatteryStatus.__constants['FAULT_OVER_TEMPERATURE']

    @property
    def FAULT_UNDER_TEMPERATURE(self):
        """Message constant 'FAULT_UNDER_TEMPERATURE'."""
        return Metaclass_BatteryStatus.__constants['FAULT_UNDER_TEMPERATURE']

    @property
    def FAULT_INCOMPATIBLE_VOLTAGE(self):
        """Message constant 'FAULT_INCOMPATIBLE_VOLTAGE'."""
        return Metaclass_BatteryStatus.__constants['FAULT_INCOMPATIBLE_VOLTAGE']

    @property
    def FAULT_INCOMPATIBLE_FIRMWARE(self):
        """Message constant 'FAULT_INCOMPATIBLE_FIRMWARE'."""
        return Metaclass_BatteryStatus.__constants['FAULT_INCOMPATIBLE_FIRMWARE']

    @property
    def FAULT_INCOMPATIBLE_MODEL(self):
        """Message constant 'FAULT_INCOMPATIBLE_MODEL'."""
        return Metaclass_BatteryStatus.__constants['FAULT_INCOMPATIBLE_MODEL']

    @property
    def FAULT_HARDWARE_FAILURE(self):
        """Message constant 'FAULT_HARDWARE_FAILURE'."""
        return Metaclass_BatteryStatus.__constants['FAULT_HARDWARE_FAILURE']

    @property
    def FAULT_FAILED_TO_ARM(self):
        """Message constant 'FAULT_FAILED_TO_ARM'."""
        return Metaclass_BatteryStatus.__constants['FAULT_FAILED_TO_ARM']

    @property
    def FAULT_COUNT(self):
        """Message constant 'FAULT_COUNT'."""
        return Metaclass_BatteryStatus.__constants['FAULT_COUNT']


class BatteryStatus(metaclass=Metaclass_BatteryStatus):
    """
    Message class 'BatteryStatus'.

    Constants:
      MESSAGE_VERSION
      MAX_INSTANCES
      SOURCE_POWER_MODULE
      SOURCE_EXTERNAL
      SOURCE_ESCS
      WARNING_NONE
      WARNING_LOW
      WARNING_CRITICAL
      WARNING_EMERGENCY
      WARNING_FAILED
      STATE_UNHEALTHY
      STATE_CHARGING
      FAULT_DEEP_DISCHARGE
      FAULT_SPIKES
      FAULT_CELL_FAIL
      FAULT_OVER_CURRENT
      FAULT_OVER_TEMPERATURE
      FAULT_UNDER_TEMPERATURE
      FAULT_INCOMPATIBLE_VOLTAGE
      FAULT_INCOMPATIBLE_FIRMWARE
      FAULT_INCOMPATIBLE_MODEL
      FAULT_HARDWARE_FAILURE
      FAULT_FAILED_TO_ARM
      FAULT_COUNT
    """

    __slots__ = [
        '_timestamp',
        '_connected',
        '_voltage_v',
        '_current_a',
        '_current_average_a',
        '_discharged_mah',
        '_remaining',
        '_scale',
        '_time_remaining_s',
        '_temperature',
        '_cell_count',
        '_source',
        '_priority',
        '_capacity',
        '_cycle_count',
        '_average_time_to_empty',
        '_manufacture_date',
        '_state_of_health',
        '_max_error',
        '_id',
        '_interface_error',
        '_voltage_cell_v',
        '_max_cell_voltage_delta',
        '_is_powering_off',
        '_is_required',
        '_warning',
        '_faults',
        '_full_charge_capacity_wh',
        '_remaining_capacity_wh',
        '_over_discharge_count',
        '_nominal_voltage',
        '_internal_resistance_estimate',
        '_ocv_estimate',
        '_ocv_estimate_filtered',
        '_volt_based_soc_estimate',
        '_voltage_prediction',
        '_prediction_error',
        '_estimation_covariance_norm',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'connected': 'boolean',
        'voltage_v': 'float',
        'current_a': 'float',
        'current_average_a': 'float',
        'discharged_mah': 'float',
        'remaining': 'float',
        'scale': 'float',
        'time_remaining_s': 'float',
        'temperature': 'float',
        'cell_count': 'uint8',
        'source': 'uint8',
        'priority': 'uint8',
        'capacity': 'uint16',
        'cycle_count': 'uint16',
        'average_time_to_empty': 'uint16',
        'manufacture_date': 'uint16',
        'state_of_health': 'uint16',
        'max_error': 'uint16',
        'id': 'uint8',
        'interface_error': 'uint16',
        'voltage_cell_v': 'float[14]',
        'max_cell_voltage_delta': 'float',
        'is_powering_off': 'boolean',
        'is_required': 'boolean',
        'warning': 'uint8',
        'faults': 'uint16',
        'full_charge_capacity_wh': 'float',
        'remaining_capacity_wh': 'float',
        'over_discharge_count': 'uint16',
        'nominal_voltage': 'float',
        'internal_resistance_estimate': 'float',
        'ocv_estimate': 'float',
        'ocv_estimate_filtered': 'float',
        'volt_based_soc_estimate': 'float',
        'voltage_prediction': 'float',
        'prediction_error': 'float',
        'estimation_covariance_norm': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 14),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.connected = kwargs.get('connected', bool())
        self.voltage_v = kwargs.get('voltage_v', float())
        self.current_a = kwargs.get('current_a', float())
        self.current_average_a = kwargs.get('current_average_a', float())
        self.discharged_mah = kwargs.get('discharged_mah', float())
        self.remaining = kwargs.get('remaining', float())
        self.scale = kwargs.get('scale', float())
        self.time_remaining_s = kwargs.get('time_remaining_s', float())
        self.temperature = kwargs.get('temperature', float())
        self.cell_count = kwargs.get('cell_count', int())
        self.source = kwargs.get('source', int())
        self.priority = kwargs.get('priority', int())
        self.capacity = kwargs.get('capacity', int())
        self.cycle_count = kwargs.get('cycle_count', int())
        self.average_time_to_empty = kwargs.get('average_time_to_empty', int())
        self.manufacture_date = kwargs.get('manufacture_date', int())
        self.state_of_health = kwargs.get('state_of_health', int())
        self.max_error = kwargs.get('max_error', int())
        self.id = kwargs.get('id', int())
        self.interface_error = kwargs.get('interface_error', int())
        if 'voltage_cell_v' not in kwargs:
            self.voltage_cell_v = numpy.zeros(14, dtype=numpy.float32)
        else:
            self.voltage_cell_v = kwargs.get('voltage_cell_v')
        self.max_cell_voltage_delta = kwargs.get('max_cell_voltage_delta', float())
        self.is_powering_off = kwargs.get('is_powering_off', bool())
        self.is_required = kwargs.get('is_required', bool())
        self.warning = kwargs.get('warning', int())
        self.faults = kwargs.get('faults', int())
        self.full_charge_capacity_wh = kwargs.get('full_charge_capacity_wh', float())
        self.remaining_capacity_wh = kwargs.get('remaining_capacity_wh', float())
        self.over_discharge_count = kwargs.get('over_discharge_count', int())
        self.nominal_voltage = kwargs.get('nominal_voltage', float())
        self.internal_resistance_estimate = kwargs.get('internal_resistance_estimate', float())
        self.ocv_estimate = kwargs.get('ocv_estimate', float())
        self.ocv_estimate_filtered = kwargs.get('ocv_estimate_filtered', float())
        self.volt_based_soc_estimate = kwargs.get('volt_based_soc_estimate', float())
        self.voltage_prediction = kwargs.get('voltage_prediction', float())
        self.prediction_error = kwargs.get('prediction_error', float())
        self.estimation_covariance_norm = kwargs.get('estimation_covariance_norm', float())

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
        if self.connected != other.connected:
            return False
        if self.voltage_v != other.voltage_v:
            return False
        if self.current_a != other.current_a:
            return False
        if self.current_average_a != other.current_average_a:
            return False
        if self.discharged_mah != other.discharged_mah:
            return False
        if self.remaining != other.remaining:
            return False
        if self.scale != other.scale:
            return False
        if self.time_remaining_s != other.time_remaining_s:
            return False
        if self.temperature != other.temperature:
            return False
        if self.cell_count != other.cell_count:
            return False
        if self.source != other.source:
            return False
        if self.priority != other.priority:
            return False
        if self.capacity != other.capacity:
            return False
        if self.cycle_count != other.cycle_count:
            return False
        if self.average_time_to_empty != other.average_time_to_empty:
            return False
        if self.manufacture_date != other.manufacture_date:
            return False
        if self.state_of_health != other.state_of_health:
            return False
        if self.max_error != other.max_error:
            return False
        if self.id != other.id:
            return False
        if self.interface_error != other.interface_error:
            return False
        if any(self.voltage_cell_v != other.voltage_cell_v):
            return False
        if self.max_cell_voltage_delta != other.max_cell_voltage_delta:
            return False
        if self.is_powering_off != other.is_powering_off:
            return False
        if self.is_required != other.is_required:
            return False
        if self.warning != other.warning:
            return False
        if self.faults != other.faults:
            return False
        if self.full_charge_capacity_wh != other.full_charge_capacity_wh:
            return False
        if self.remaining_capacity_wh != other.remaining_capacity_wh:
            return False
        if self.over_discharge_count != other.over_discharge_count:
            return False
        if self.nominal_voltage != other.nominal_voltage:
            return False
        if self.internal_resistance_estimate != other.internal_resistance_estimate:
            return False
        if self.ocv_estimate != other.ocv_estimate:
            return False
        if self.ocv_estimate_filtered != other.ocv_estimate_filtered:
            return False
        if self.volt_based_soc_estimate != other.volt_based_soc_estimate:
            return False
        if self.voltage_prediction != other.voltage_prediction:
            return False
        if self.prediction_error != other.prediction_error:
            return False
        if self.estimation_covariance_norm != other.estimation_covariance_norm:
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
    def connected(self):
        """Message field 'connected'."""
        return self._connected

    @connected.setter
    def connected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'connected' field must be of type 'bool'"
        self._connected = value

    @builtins.property
    def voltage_v(self):
        """Message field 'voltage_v'."""
        return self._voltage_v

    @voltage_v.setter
    def voltage_v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voltage_v' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'voltage_v' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._voltage_v = value

    @builtins.property
    def current_a(self):
        """Message field 'current_a'."""
        return self._current_a

    @current_a.setter
    def current_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_a' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_a' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_a = value

    @builtins.property
    def current_average_a(self):
        """Message field 'current_average_a'."""
        return self._current_average_a

    @current_average_a.setter
    def current_average_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_average_a' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_average_a' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_average_a = value

    @builtins.property
    def discharged_mah(self):
        """Message field 'discharged_mah'."""
        return self._discharged_mah

    @discharged_mah.setter
    def discharged_mah(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'discharged_mah' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'discharged_mah' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._discharged_mah = value

    @builtins.property
    def remaining(self):
        """Message field 'remaining'."""
        return self._remaining

    @remaining.setter
    def remaining(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remaining' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'remaining' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._remaining = value

    @builtins.property
    def scale(self):
        """Message field 'scale'."""
        return self._scale

    @scale.setter
    def scale(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scale' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'scale' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._scale = value

    @builtins.property
    def time_remaining_s(self):
        """Message field 'time_remaining_s'."""
        return self._time_remaining_s

    @time_remaining_s.setter
    def time_remaining_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_remaining_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_remaining_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_remaining_s = value

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

    @builtins.property
    def cell_count(self):
        """Message field 'cell_count'."""
        return self._cell_count

    @cell_count.setter
    def cell_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cell_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cell_count' field must be an unsigned integer in [0, 255]"
        self._cell_count = value

    @builtins.property
    def source(self):
        """Message field 'source'."""
        return self._source

    @source.setter
    def source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'source' field must be an unsigned integer in [0, 255]"
        self._source = value

    @builtins.property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'priority' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'priority' field must be an unsigned integer in [0, 255]"
        self._priority = value

    @builtins.property
    def capacity(self):
        """Message field 'capacity'."""
        return self._capacity

    @capacity.setter
    def capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'capacity' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'capacity' field must be an unsigned integer in [0, 65535]"
        self._capacity = value

    @builtins.property
    def cycle_count(self):
        """Message field 'cycle_count'."""
        return self._cycle_count

    @cycle_count.setter
    def cycle_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cycle_count' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'cycle_count' field must be an unsigned integer in [0, 65535]"
        self._cycle_count = value

    @builtins.property
    def average_time_to_empty(self):
        """Message field 'average_time_to_empty'."""
        return self._average_time_to_empty

    @average_time_to_empty.setter
    def average_time_to_empty(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'average_time_to_empty' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'average_time_to_empty' field must be an unsigned integer in [0, 65535]"
        self._average_time_to_empty = value

    @builtins.property
    def manufacture_date(self):
        """Message field 'manufacture_date'."""
        return self._manufacture_date

    @manufacture_date.setter
    def manufacture_date(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'manufacture_date' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'manufacture_date' field must be an unsigned integer in [0, 65535]"
        self._manufacture_date = value

    @builtins.property
    def state_of_health(self):
        """Message field 'state_of_health'."""
        return self._state_of_health

    @state_of_health.setter
    def state_of_health(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state_of_health' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'state_of_health' field must be an unsigned integer in [0, 65535]"
        self._state_of_health = value

    @builtins.property
    def max_error(self):
        """Message field 'max_error'."""
        return self._max_error

    @max_error.setter
    def max_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_error' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'max_error' field must be an unsigned integer in [0, 65535]"
        self._max_error = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id' field must be an unsigned integer in [0, 255]"
        self._id = value

    @builtins.property
    def interface_error(self):
        """Message field 'interface_error'."""
        return self._interface_error

    @interface_error.setter
    def interface_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'interface_error' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'interface_error' field must be an unsigned integer in [0, 65535]"
        self._interface_error = value

    @builtins.property
    def voltage_cell_v(self):
        """Message field 'voltage_cell_v'."""
        return self._voltage_cell_v

    @voltage_cell_v.setter
    def voltage_cell_v(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'voltage_cell_v' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 14, \
                "The 'voltage_cell_v' numpy.ndarray() must have a size of 14"
            self._voltage_cell_v = value
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
                 len(value) == 14 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'voltage_cell_v' field must be a set or sequence with length 14 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._voltage_cell_v = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def max_cell_voltage_delta(self):
        """Message field 'max_cell_voltage_delta'."""
        return self._max_cell_voltage_delta

    @max_cell_voltage_delta.setter
    def max_cell_voltage_delta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_cell_voltage_delta' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_cell_voltage_delta' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_cell_voltage_delta = value

    @builtins.property
    def is_powering_off(self):
        """Message field 'is_powering_off'."""
        return self._is_powering_off

    @is_powering_off.setter
    def is_powering_off(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_powering_off' field must be of type 'bool'"
        self._is_powering_off = value

    @builtins.property
    def is_required(self):
        """Message field 'is_required'."""
        return self._is_required

    @is_required.setter
    def is_required(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_required' field must be of type 'bool'"
        self._is_required = value

    @builtins.property
    def warning(self):
        """Message field 'warning'."""
        return self._warning

    @warning.setter
    def warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'warning' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'warning' field must be an unsigned integer in [0, 255]"
        self._warning = value

    @builtins.property
    def faults(self):
        """Message field 'faults'."""
        return self._faults

    @faults.setter
    def faults(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'faults' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'faults' field must be an unsigned integer in [0, 65535]"
        self._faults = value

    @builtins.property
    def full_charge_capacity_wh(self):
        """Message field 'full_charge_capacity_wh'."""
        return self._full_charge_capacity_wh

    @full_charge_capacity_wh.setter
    def full_charge_capacity_wh(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'full_charge_capacity_wh' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'full_charge_capacity_wh' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._full_charge_capacity_wh = value

    @builtins.property
    def remaining_capacity_wh(self):
        """Message field 'remaining_capacity_wh'."""
        return self._remaining_capacity_wh

    @remaining_capacity_wh.setter
    def remaining_capacity_wh(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remaining_capacity_wh' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'remaining_capacity_wh' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._remaining_capacity_wh = value

    @builtins.property
    def over_discharge_count(self):
        """Message field 'over_discharge_count'."""
        return self._over_discharge_count

    @over_discharge_count.setter
    def over_discharge_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'over_discharge_count' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'over_discharge_count' field must be an unsigned integer in [0, 65535]"
        self._over_discharge_count = value

    @builtins.property
    def nominal_voltage(self):
        """Message field 'nominal_voltage'."""
        return self._nominal_voltage

    @nominal_voltage.setter
    def nominal_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'nominal_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'nominal_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._nominal_voltage = value

    @builtins.property
    def internal_resistance_estimate(self):
        """Message field 'internal_resistance_estimate'."""
        return self._internal_resistance_estimate

    @internal_resistance_estimate.setter
    def internal_resistance_estimate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'internal_resistance_estimate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'internal_resistance_estimate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._internal_resistance_estimate = value

    @builtins.property
    def ocv_estimate(self):
        """Message field 'ocv_estimate'."""
        return self._ocv_estimate

    @ocv_estimate.setter
    def ocv_estimate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ocv_estimate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ocv_estimate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ocv_estimate = value

    @builtins.property
    def ocv_estimate_filtered(self):
        """Message field 'ocv_estimate_filtered'."""
        return self._ocv_estimate_filtered

    @ocv_estimate_filtered.setter
    def ocv_estimate_filtered(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ocv_estimate_filtered' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ocv_estimate_filtered' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ocv_estimate_filtered = value

    @builtins.property
    def volt_based_soc_estimate(self):
        """Message field 'volt_based_soc_estimate'."""
        return self._volt_based_soc_estimate

    @volt_based_soc_estimate.setter
    def volt_based_soc_estimate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'volt_based_soc_estimate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'volt_based_soc_estimate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._volt_based_soc_estimate = value

    @builtins.property
    def voltage_prediction(self):
        """Message field 'voltage_prediction'."""
        return self._voltage_prediction

    @voltage_prediction.setter
    def voltage_prediction(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voltage_prediction' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'voltage_prediction' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._voltage_prediction = value

    @builtins.property
    def prediction_error(self):
        """Message field 'prediction_error'."""
        return self._prediction_error

    @prediction_error.setter
    def prediction_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'prediction_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'prediction_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._prediction_error = value

    @builtins.property
    def estimation_covariance_norm(self):
        """Message field 'estimation_covariance_norm'."""
        return self._estimation_covariance_norm

    @estimation_covariance_norm.setter
    def estimation_covariance_norm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'estimation_covariance_norm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'estimation_covariance_norm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._estimation_covariance_norm = value
