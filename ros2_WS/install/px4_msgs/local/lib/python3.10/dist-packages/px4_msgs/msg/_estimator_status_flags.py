# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/EstimatorStatusFlags.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EstimatorStatusFlags(type):
    """Metaclass of message 'EstimatorStatusFlags'."""

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
                'px4_msgs.msg.EstimatorStatusFlags')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__estimator_status_flags
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__estimator_status_flags
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__estimator_status_flags
            cls._TYPE_SUPPORT = module.type_support_msg__msg__estimator_status_flags
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__estimator_status_flags

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EstimatorStatusFlags(metaclass=Metaclass_EstimatorStatusFlags):
    """Message class 'EstimatorStatusFlags'."""

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_control_status_changes',
        '_cs_tilt_align',
        '_cs_yaw_align',
        '_cs_gnss_pos',
        '_cs_opt_flow',
        '_cs_mag_hdg',
        '_cs_mag_3d',
        '_cs_mag_dec',
        '_cs_in_air',
        '_cs_wind',
        '_cs_baro_hgt',
        '_cs_rng_hgt',
        '_cs_gps_hgt',
        '_cs_ev_pos',
        '_cs_ev_yaw',
        '_cs_ev_hgt',
        '_cs_fuse_beta',
        '_cs_mag_field_disturbed',
        '_cs_fixed_wing',
        '_cs_mag_fault',
        '_cs_fuse_aspd',
        '_cs_gnd_effect',
        '_cs_rng_stuck',
        '_cs_gnss_yaw',
        '_cs_mag_aligned_in_flight',
        '_cs_ev_vel',
        '_cs_synthetic_mag_z',
        '_cs_vehicle_at_rest',
        '_cs_gnss_yaw_fault',
        '_cs_rng_fault',
        '_cs_inertial_dead_reckoning',
        '_cs_wind_dead_reckoning',
        '_cs_rng_kin_consistent',
        '_cs_fake_pos',
        '_cs_fake_hgt',
        '_cs_gravity_vector',
        '_cs_mag',
        '_cs_ev_yaw_fault',
        '_cs_mag_heading_consistent',
        '_cs_aux_gpos',
        '_cs_rng_terrain',
        '_cs_opt_flow_terrain',
        '_cs_valid_fake_pos',
        '_cs_constant_pos',
        '_cs_baro_fault',
        '_cs_gnss_vel',
        '_cs_gnss_fault',
        '_cs_yaw_manual',
        '_cs_gnss_hgt_fault',
        '_cs_in_transition',
        '_cs_heading_observable',
        '_fault_status_changes',
        '_fs_bad_mag_x',
        '_fs_bad_mag_y',
        '_fs_bad_mag_z',
        '_fs_bad_hdg',
        '_fs_bad_mag_decl',
        '_fs_bad_airspeed',
        '_fs_bad_sideslip',
        '_fs_bad_optflow_x',
        '_fs_bad_optflow_y',
        '_fs_bad_acc_vertical',
        '_fs_bad_acc_clipping',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'control_status_changes': 'uint32',
        'cs_tilt_align': 'boolean',
        'cs_yaw_align': 'boolean',
        'cs_gnss_pos': 'boolean',
        'cs_opt_flow': 'boolean',
        'cs_mag_hdg': 'boolean',
        'cs_mag_3d': 'boolean',
        'cs_mag_dec': 'boolean',
        'cs_in_air': 'boolean',
        'cs_wind': 'boolean',
        'cs_baro_hgt': 'boolean',
        'cs_rng_hgt': 'boolean',
        'cs_gps_hgt': 'boolean',
        'cs_ev_pos': 'boolean',
        'cs_ev_yaw': 'boolean',
        'cs_ev_hgt': 'boolean',
        'cs_fuse_beta': 'boolean',
        'cs_mag_field_disturbed': 'boolean',
        'cs_fixed_wing': 'boolean',
        'cs_mag_fault': 'boolean',
        'cs_fuse_aspd': 'boolean',
        'cs_gnd_effect': 'boolean',
        'cs_rng_stuck': 'boolean',
        'cs_gnss_yaw': 'boolean',
        'cs_mag_aligned_in_flight': 'boolean',
        'cs_ev_vel': 'boolean',
        'cs_synthetic_mag_z': 'boolean',
        'cs_vehicle_at_rest': 'boolean',
        'cs_gnss_yaw_fault': 'boolean',
        'cs_rng_fault': 'boolean',
        'cs_inertial_dead_reckoning': 'boolean',
        'cs_wind_dead_reckoning': 'boolean',
        'cs_rng_kin_consistent': 'boolean',
        'cs_fake_pos': 'boolean',
        'cs_fake_hgt': 'boolean',
        'cs_gravity_vector': 'boolean',
        'cs_mag': 'boolean',
        'cs_ev_yaw_fault': 'boolean',
        'cs_mag_heading_consistent': 'boolean',
        'cs_aux_gpos': 'boolean',
        'cs_rng_terrain': 'boolean',
        'cs_opt_flow_terrain': 'boolean',
        'cs_valid_fake_pos': 'boolean',
        'cs_constant_pos': 'boolean',
        'cs_baro_fault': 'boolean',
        'cs_gnss_vel': 'boolean',
        'cs_gnss_fault': 'boolean',
        'cs_yaw_manual': 'boolean',
        'cs_gnss_hgt_fault': 'boolean',
        'cs_in_transition': 'boolean',
        'cs_heading_observable': 'boolean',
        'fault_status_changes': 'uint32',
        'fs_bad_mag_x': 'boolean',
        'fs_bad_mag_y': 'boolean',
        'fs_bad_mag_z': 'boolean',
        'fs_bad_hdg': 'boolean',
        'fs_bad_mag_decl': 'boolean',
        'fs_bad_airspeed': 'boolean',
        'fs_bad_sideslip': 'boolean',
        'fs_bad_optflow_x': 'boolean',
        'fs_bad_optflow_y': 'boolean',
        'fs_bad_acc_vertical': 'boolean',
        'fs_bad_acc_clipping': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.control_status_changes = kwargs.get('control_status_changes', int())
        self.cs_tilt_align = kwargs.get('cs_tilt_align', bool())
        self.cs_yaw_align = kwargs.get('cs_yaw_align', bool())
        self.cs_gnss_pos = kwargs.get('cs_gnss_pos', bool())
        self.cs_opt_flow = kwargs.get('cs_opt_flow', bool())
        self.cs_mag_hdg = kwargs.get('cs_mag_hdg', bool())
        self.cs_mag_3d = kwargs.get('cs_mag_3d', bool())
        self.cs_mag_dec = kwargs.get('cs_mag_dec', bool())
        self.cs_in_air = kwargs.get('cs_in_air', bool())
        self.cs_wind = kwargs.get('cs_wind', bool())
        self.cs_baro_hgt = kwargs.get('cs_baro_hgt', bool())
        self.cs_rng_hgt = kwargs.get('cs_rng_hgt', bool())
        self.cs_gps_hgt = kwargs.get('cs_gps_hgt', bool())
        self.cs_ev_pos = kwargs.get('cs_ev_pos', bool())
        self.cs_ev_yaw = kwargs.get('cs_ev_yaw', bool())
        self.cs_ev_hgt = kwargs.get('cs_ev_hgt', bool())
        self.cs_fuse_beta = kwargs.get('cs_fuse_beta', bool())
        self.cs_mag_field_disturbed = kwargs.get('cs_mag_field_disturbed', bool())
        self.cs_fixed_wing = kwargs.get('cs_fixed_wing', bool())
        self.cs_mag_fault = kwargs.get('cs_mag_fault', bool())
        self.cs_fuse_aspd = kwargs.get('cs_fuse_aspd', bool())
        self.cs_gnd_effect = kwargs.get('cs_gnd_effect', bool())
        self.cs_rng_stuck = kwargs.get('cs_rng_stuck', bool())
        self.cs_gnss_yaw = kwargs.get('cs_gnss_yaw', bool())
        self.cs_mag_aligned_in_flight = kwargs.get('cs_mag_aligned_in_flight', bool())
        self.cs_ev_vel = kwargs.get('cs_ev_vel', bool())
        self.cs_synthetic_mag_z = kwargs.get('cs_synthetic_mag_z', bool())
        self.cs_vehicle_at_rest = kwargs.get('cs_vehicle_at_rest', bool())
        self.cs_gnss_yaw_fault = kwargs.get('cs_gnss_yaw_fault', bool())
        self.cs_rng_fault = kwargs.get('cs_rng_fault', bool())
        self.cs_inertial_dead_reckoning = kwargs.get('cs_inertial_dead_reckoning', bool())
        self.cs_wind_dead_reckoning = kwargs.get('cs_wind_dead_reckoning', bool())
        self.cs_rng_kin_consistent = kwargs.get('cs_rng_kin_consistent', bool())
        self.cs_fake_pos = kwargs.get('cs_fake_pos', bool())
        self.cs_fake_hgt = kwargs.get('cs_fake_hgt', bool())
        self.cs_gravity_vector = kwargs.get('cs_gravity_vector', bool())
        self.cs_mag = kwargs.get('cs_mag', bool())
        self.cs_ev_yaw_fault = kwargs.get('cs_ev_yaw_fault', bool())
        self.cs_mag_heading_consistent = kwargs.get('cs_mag_heading_consistent', bool())
        self.cs_aux_gpos = kwargs.get('cs_aux_gpos', bool())
        self.cs_rng_terrain = kwargs.get('cs_rng_terrain', bool())
        self.cs_opt_flow_terrain = kwargs.get('cs_opt_flow_terrain', bool())
        self.cs_valid_fake_pos = kwargs.get('cs_valid_fake_pos', bool())
        self.cs_constant_pos = kwargs.get('cs_constant_pos', bool())
        self.cs_baro_fault = kwargs.get('cs_baro_fault', bool())
        self.cs_gnss_vel = kwargs.get('cs_gnss_vel', bool())
        self.cs_gnss_fault = kwargs.get('cs_gnss_fault', bool())
        self.cs_yaw_manual = kwargs.get('cs_yaw_manual', bool())
        self.cs_gnss_hgt_fault = kwargs.get('cs_gnss_hgt_fault', bool())
        self.cs_in_transition = kwargs.get('cs_in_transition', bool())
        self.cs_heading_observable = kwargs.get('cs_heading_observable', bool())
        self.fault_status_changes = kwargs.get('fault_status_changes', int())
        self.fs_bad_mag_x = kwargs.get('fs_bad_mag_x', bool())
        self.fs_bad_mag_y = kwargs.get('fs_bad_mag_y', bool())
        self.fs_bad_mag_z = kwargs.get('fs_bad_mag_z', bool())
        self.fs_bad_hdg = kwargs.get('fs_bad_hdg', bool())
        self.fs_bad_mag_decl = kwargs.get('fs_bad_mag_decl', bool())
        self.fs_bad_airspeed = kwargs.get('fs_bad_airspeed', bool())
        self.fs_bad_sideslip = kwargs.get('fs_bad_sideslip', bool())
        self.fs_bad_optflow_x = kwargs.get('fs_bad_optflow_x', bool())
        self.fs_bad_optflow_y = kwargs.get('fs_bad_optflow_y', bool())
        self.fs_bad_acc_vertical = kwargs.get('fs_bad_acc_vertical', bool())
        self.fs_bad_acc_clipping = kwargs.get('fs_bad_acc_clipping', bool())

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
        if self.control_status_changes != other.control_status_changes:
            return False
        if self.cs_tilt_align != other.cs_tilt_align:
            return False
        if self.cs_yaw_align != other.cs_yaw_align:
            return False
        if self.cs_gnss_pos != other.cs_gnss_pos:
            return False
        if self.cs_opt_flow != other.cs_opt_flow:
            return False
        if self.cs_mag_hdg != other.cs_mag_hdg:
            return False
        if self.cs_mag_3d != other.cs_mag_3d:
            return False
        if self.cs_mag_dec != other.cs_mag_dec:
            return False
        if self.cs_in_air != other.cs_in_air:
            return False
        if self.cs_wind != other.cs_wind:
            return False
        if self.cs_baro_hgt != other.cs_baro_hgt:
            return False
        if self.cs_rng_hgt != other.cs_rng_hgt:
            return False
        if self.cs_gps_hgt != other.cs_gps_hgt:
            return False
        if self.cs_ev_pos != other.cs_ev_pos:
            return False
        if self.cs_ev_yaw != other.cs_ev_yaw:
            return False
        if self.cs_ev_hgt != other.cs_ev_hgt:
            return False
        if self.cs_fuse_beta != other.cs_fuse_beta:
            return False
        if self.cs_mag_field_disturbed != other.cs_mag_field_disturbed:
            return False
        if self.cs_fixed_wing != other.cs_fixed_wing:
            return False
        if self.cs_mag_fault != other.cs_mag_fault:
            return False
        if self.cs_fuse_aspd != other.cs_fuse_aspd:
            return False
        if self.cs_gnd_effect != other.cs_gnd_effect:
            return False
        if self.cs_rng_stuck != other.cs_rng_stuck:
            return False
        if self.cs_gnss_yaw != other.cs_gnss_yaw:
            return False
        if self.cs_mag_aligned_in_flight != other.cs_mag_aligned_in_flight:
            return False
        if self.cs_ev_vel != other.cs_ev_vel:
            return False
        if self.cs_synthetic_mag_z != other.cs_synthetic_mag_z:
            return False
        if self.cs_vehicle_at_rest != other.cs_vehicle_at_rest:
            return False
        if self.cs_gnss_yaw_fault != other.cs_gnss_yaw_fault:
            return False
        if self.cs_rng_fault != other.cs_rng_fault:
            return False
        if self.cs_inertial_dead_reckoning != other.cs_inertial_dead_reckoning:
            return False
        if self.cs_wind_dead_reckoning != other.cs_wind_dead_reckoning:
            return False
        if self.cs_rng_kin_consistent != other.cs_rng_kin_consistent:
            return False
        if self.cs_fake_pos != other.cs_fake_pos:
            return False
        if self.cs_fake_hgt != other.cs_fake_hgt:
            return False
        if self.cs_gravity_vector != other.cs_gravity_vector:
            return False
        if self.cs_mag != other.cs_mag:
            return False
        if self.cs_ev_yaw_fault != other.cs_ev_yaw_fault:
            return False
        if self.cs_mag_heading_consistent != other.cs_mag_heading_consistent:
            return False
        if self.cs_aux_gpos != other.cs_aux_gpos:
            return False
        if self.cs_rng_terrain != other.cs_rng_terrain:
            return False
        if self.cs_opt_flow_terrain != other.cs_opt_flow_terrain:
            return False
        if self.cs_valid_fake_pos != other.cs_valid_fake_pos:
            return False
        if self.cs_constant_pos != other.cs_constant_pos:
            return False
        if self.cs_baro_fault != other.cs_baro_fault:
            return False
        if self.cs_gnss_vel != other.cs_gnss_vel:
            return False
        if self.cs_gnss_fault != other.cs_gnss_fault:
            return False
        if self.cs_yaw_manual != other.cs_yaw_manual:
            return False
        if self.cs_gnss_hgt_fault != other.cs_gnss_hgt_fault:
            return False
        if self.cs_in_transition != other.cs_in_transition:
            return False
        if self.cs_heading_observable != other.cs_heading_observable:
            return False
        if self.fault_status_changes != other.fault_status_changes:
            return False
        if self.fs_bad_mag_x != other.fs_bad_mag_x:
            return False
        if self.fs_bad_mag_y != other.fs_bad_mag_y:
            return False
        if self.fs_bad_mag_z != other.fs_bad_mag_z:
            return False
        if self.fs_bad_hdg != other.fs_bad_hdg:
            return False
        if self.fs_bad_mag_decl != other.fs_bad_mag_decl:
            return False
        if self.fs_bad_airspeed != other.fs_bad_airspeed:
            return False
        if self.fs_bad_sideslip != other.fs_bad_sideslip:
            return False
        if self.fs_bad_optflow_x != other.fs_bad_optflow_x:
            return False
        if self.fs_bad_optflow_y != other.fs_bad_optflow_y:
            return False
        if self.fs_bad_acc_vertical != other.fs_bad_acc_vertical:
            return False
        if self.fs_bad_acc_clipping != other.fs_bad_acc_clipping:
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
    def control_status_changes(self):
        """Message field 'control_status_changes'."""
        return self._control_status_changes

    @control_status_changes.setter
    def control_status_changes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'control_status_changes' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'control_status_changes' field must be an unsigned integer in [0, 4294967295]"
        self._control_status_changes = value

    @builtins.property
    def cs_tilt_align(self):
        """Message field 'cs_tilt_align'."""
        return self._cs_tilt_align

    @cs_tilt_align.setter
    def cs_tilt_align(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_tilt_align' field must be of type 'bool'"
        self._cs_tilt_align = value

    @builtins.property
    def cs_yaw_align(self):
        """Message field 'cs_yaw_align'."""
        return self._cs_yaw_align

    @cs_yaw_align.setter
    def cs_yaw_align(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_yaw_align' field must be of type 'bool'"
        self._cs_yaw_align = value

    @builtins.property
    def cs_gnss_pos(self):
        """Message field 'cs_gnss_pos'."""
        return self._cs_gnss_pos

    @cs_gnss_pos.setter
    def cs_gnss_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_gnss_pos' field must be of type 'bool'"
        self._cs_gnss_pos = value

    @builtins.property
    def cs_opt_flow(self):
        """Message field 'cs_opt_flow'."""
        return self._cs_opt_flow

    @cs_opt_flow.setter
    def cs_opt_flow(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_opt_flow' field must be of type 'bool'"
        self._cs_opt_flow = value

    @builtins.property
    def cs_mag_hdg(self):
        """Message field 'cs_mag_hdg'."""
        return self._cs_mag_hdg

    @cs_mag_hdg.setter
    def cs_mag_hdg(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_mag_hdg' field must be of type 'bool'"
        self._cs_mag_hdg = value

    @builtins.property
    def cs_mag_3d(self):
        """Message field 'cs_mag_3d'."""
        return self._cs_mag_3d

    @cs_mag_3d.setter
    def cs_mag_3d(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_mag_3d' field must be of type 'bool'"
        self._cs_mag_3d = value

    @builtins.property
    def cs_mag_dec(self):
        """Message field 'cs_mag_dec'."""
        return self._cs_mag_dec

    @cs_mag_dec.setter
    def cs_mag_dec(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_mag_dec' field must be of type 'bool'"
        self._cs_mag_dec = value

    @builtins.property
    def cs_in_air(self):
        """Message field 'cs_in_air'."""
        return self._cs_in_air

    @cs_in_air.setter
    def cs_in_air(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_in_air' field must be of type 'bool'"
        self._cs_in_air = value

    @builtins.property
    def cs_wind(self):
        """Message field 'cs_wind'."""
        return self._cs_wind

    @cs_wind.setter
    def cs_wind(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_wind' field must be of type 'bool'"
        self._cs_wind = value

    @builtins.property
    def cs_baro_hgt(self):
        """Message field 'cs_baro_hgt'."""
        return self._cs_baro_hgt

    @cs_baro_hgt.setter
    def cs_baro_hgt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_baro_hgt' field must be of type 'bool'"
        self._cs_baro_hgt = value

    @builtins.property
    def cs_rng_hgt(self):
        """Message field 'cs_rng_hgt'."""
        return self._cs_rng_hgt

    @cs_rng_hgt.setter
    def cs_rng_hgt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_rng_hgt' field must be of type 'bool'"
        self._cs_rng_hgt = value

    @builtins.property
    def cs_gps_hgt(self):
        """Message field 'cs_gps_hgt'."""
        return self._cs_gps_hgt

    @cs_gps_hgt.setter
    def cs_gps_hgt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_gps_hgt' field must be of type 'bool'"
        self._cs_gps_hgt = value

    @builtins.property
    def cs_ev_pos(self):
        """Message field 'cs_ev_pos'."""
        return self._cs_ev_pos

    @cs_ev_pos.setter
    def cs_ev_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_ev_pos' field must be of type 'bool'"
        self._cs_ev_pos = value

    @builtins.property
    def cs_ev_yaw(self):
        """Message field 'cs_ev_yaw'."""
        return self._cs_ev_yaw

    @cs_ev_yaw.setter
    def cs_ev_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_ev_yaw' field must be of type 'bool'"
        self._cs_ev_yaw = value

    @builtins.property
    def cs_ev_hgt(self):
        """Message field 'cs_ev_hgt'."""
        return self._cs_ev_hgt

    @cs_ev_hgt.setter
    def cs_ev_hgt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_ev_hgt' field must be of type 'bool'"
        self._cs_ev_hgt = value

    @builtins.property
    def cs_fuse_beta(self):
        """Message field 'cs_fuse_beta'."""
        return self._cs_fuse_beta

    @cs_fuse_beta.setter
    def cs_fuse_beta(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_fuse_beta' field must be of type 'bool'"
        self._cs_fuse_beta = value

    @builtins.property
    def cs_mag_field_disturbed(self):
        """Message field 'cs_mag_field_disturbed'."""
        return self._cs_mag_field_disturbed

    @cs_mag_field_disturbed.setter
    def cs_mag_field_disturbed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_mag_field_disturbed' field must be of type 'bool'"
        self._cs_mag_field_disturbed = value

    @builtins.property
    def cs_fixed_wing(self):
        """Message field 'cs_fixed_wing'."""
        return self._cs_fixed_wing

    @cs_fixed_wing.setter
    def cs_fixed_wing(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_fixed_wing' field must be of type 'bool'"
        self._cs_fixed_wing = value

    @builtins.property
    def cs_mag_fault(self):
        """Message field 'cs_mag_fault'."""
        return self._cs_mag_fault

    @cs_mag_fault.setter
    def cs_mag_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_mag_fault' field must be of type 'bool'"
        self._cs_mag_fault = value

    @builtins.property
    def cs_fuse_aspd(self):
        """Message field 'cs_fuse_aspd'."""
        return self._cs_fuse_aspd

    @cs_fuse_aspd.setter
    def cs_fuse_aspd(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_fuse_aspd' field must be of type 'bool'"
        self._cs_fuse_aspd = value

    @builtins.property
    def cs_gnd_effect(self):
        """Message field 'cs_gnd_effect'."""
        return self._cs_gnd_effect

    @cs_gnd_effect.setter
    def cs_gnd_effect(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_gnd_effect' field must be of type 'bool'"
        self._cs_gnd_effect = value

    @builtins.property
    def cs_rng_stuck(self):
        """Message field 'cs_rng_stuck'."""
        return self._cs_rng_stuck

    @cs_rng_stuck.setter
    def cs_rng_stuck(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_rng_stuck' field must be of type 'bool'"
        self._cs_rng_stuck = value

    @builtins.property
    def cs_gnss_yaw(self):
        """Message field 'cs_gnss_yaw'."""
        return self._cs_gnss_yaw

    @cs_gnss_yaw.setter
    def cs_gnss_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_gnss_yaw' field must be of type 'bool'"
        self._cs_gnss_yaw = value

    @builtins.property
    def cs_mag_aligned_in_flight(self):
        """Message field 'cs_mag_aligned_in_flight'."""
        return self._cs_mag_aligned_in_flight

    @cs_mag_aligned_in_flight.setter
    def cs_mag_aligned_in_flight(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_mag_aligned_in_flight' field must be of type 'bool'"
        self._cs_mag_aligned_in_flight = value

    @builtins.property
    def cs_ev_vel(self):
        """Message field 'cs_ev_vel'."""
        return self._cs_ev_vel

    @cs_ev_vel.setter
    def cs_ev_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_ev_vel' field must be of type 'bool'"
        self._cs_ev_vel = value

    @builtins.property
    def cs_synthetic_mag_z(self):
        """Message field 'cs_synthetic_mag_z'."""
        return self._cs_synthetic_mag_z

    @cs_synthetic_mag_z.setter
    def cs_synthetic_mag_z(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_synthetic_mag_z' field must be of type 'bool'"
        self._cs_synthetic_mag_z = value

    @builtins.property
    def cs_vehicle_at_rest(self):
        """Message field 'cs_vehicle_at_rest'."""
        return self._cs_vehicle_at_rest

    @cs_vehicle_at_rest.setter
    def cs_vehicle_at_rest(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_vehicle_at_rest' field must be of type 'bool'"
        self._cs_vehicle_at_rest = value

    @builtins.property
    def cs_gnss_yaw_fault(self):
        """Message field 'cs_gnss_yaw_fault'."""
        return self._cs_gnss_yaw_fault

    @cs_gnss_yaw_fault.setter
    def cs_gnss_yaw_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_gnss_yaw_fault' field must be of type 'bool'"
        self._cs_gnss_yaw_fault = value

    @builtins.property
    def cs_rng_fault(self):
        """Message field 'cs_rng_fault'."""
        return self._cs_rng_fault

    @cs_rng_fault.setter
    def cs_rng_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_rng_fault' field must be of type 'bool'"
        self._cs_rng_fault = value

    @builtins.property
    def cs_inertial_dead_reckoning(self):
        """Message field 'cs_inertial_dead_reckoning'."""
        return self._cs_inertial_dead_reckoning

    @cs_inertial_dead_reckoning.setter
    def cs_inertial_dead_reckoning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_inertial_dead_reckoning' field must be of type 'bool'"
        self._cs_inertial_dead_reckoning = value

    @builtins.property
    def cs_wind_dead_reckoning(self):
        """Message field 'cs_wind_dead_reckoning'."""
        return self._cs_wind_dead_reckoning

    @cs_wind_dead_reckoning.setter
    def cs_wind_dead_reckoning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_wind_dead_reckoning' field must be of type 'bool'"
        self._cs_wind_dead_reckoning = value

    @builtins.property
    def cs_rng_kin_consistent(self):
        """Message field 'cs_rng_kin_consistent'."""
        return self._cs_rng_kin_consistent

    @cs_rng_kin_consistent.setter
    def cs_rng_kin_consistent(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_rng_kin_consistent' field must be of type 'bool'"
        self._cs_rng_kin_consistent = value

    @builtins.property
    def cs_fake_pos(self):
        """Message field 'cs_fake_pos'."""
        return self._cs_fake_pos

    @cs_fake_pos.setter
    def cs_fake_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_fake_pos' field must be of type 'bool'"
        self._cs_fake_pos = value

    @builtins.property
    def cs_fake_hgt(self):
        """Message field 'cs_fake_hgt'."""
        return self._cs_fake_hgt

    @cs_fake_hgt.setter
    def cs_fake_hgt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_fake_hgt' field must be of type 'bool'"
        self._cs_fake_hgt = value

    @builtins.property
    def cs_gravity_vector(self):
        """Message field 'cs_gravity_vector'."""
        return self._cs_gravity_vector

    @cs_gravity_vector.setter
    def cs_gravity_vector(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_gravity_vector' field must be of type 'bool'"
        self._cs_gravity_vector = value

    @builtins.property
    def cs_mag(self):
        """Message field 'cs_mag'."""
        return self._cs_mag

    @cs_mag.setter
    def cs_mag(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_mag' field must be of type 'bool'"
        self._cs_mag = value

    @builtins.property
    def cs_ev_yaw_fault(self):
        """Message field 'cs_ev_yaw_fault'."""
        return self._cs_ev_yaw_fault

    @cs_ev_yaw_fault.setter
    def cs_ev_yaw_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_ev_yaw_fault' field must be of type 'bool'"
        self._cs_ev_yaw_fault = value

    @builtins.property
    def cs_mag_heading_consistent(self):
        """Message field 'cs_mag_heading_consistent'."""
        return self._cs_mag_heading_consistent

    @cs_mag_heading_consistent.setter
    def cs_mag_heading_consistent(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_mag_heading_consistent' field must be of type 'bool'"
        self._cs_mag_heading_consistent = value

    @builtins.property
    def cs_aux_gpos(self):
        """Message field 'cs_aux_gpos'."""
        return self._cs_aux_gpos

    @cs_aux_gpos.setter
    def cs_aux_gpos(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_aux_gpos' field must be of type 'bool'"
        self._cs_aux_gpos = value

    @builtins.property
    def cs_rng_terrain(self):
        """Message field 'cs_rng_terrain'."""
        return self._cs_rng_terrain

    @cs_rng_terrain.setter
    def cs_rng_terrain(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_rng_terrain' field must be of type 'bool'"
        self._cs_rng_terrain = value

    @builtins.property
    def cs_opt_flow_terrain(self):
        """Message field 'cs_opt_flow_terrain'."""
        return self._cs_opt_flow_terrain

    @cs_opt_flow_terrain.setter
    def cs_opt_flow_terrain(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_opt_flow_terrain' field must be of type 'bool'"
        self._cs_opt_flow_terrain = value

    @builtins.property
    def cs_valid_fake_pos(self):
        """Message field 'cs_valid_fake_pos'."""
        return self._cs_valid_fake_pos

    @cs_valid_fake_pos.setter
    def cs_valid_fake_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_valid_fake_pos' field must be of type 'bool'"
        self._cs_valid_fake_pos = value

    @builtins.property
    def cs_constant_pos(self):
        """Message field 'cs_constant_pos'."""
        return self._cs_constant_pos

    @cs_constant_pos.setter
    def cs_constant_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_constant_pos' field must be of type 'bool'"
        self._cs_constant_pos = value

    @builtins.property
    def cs_baro_fault(self):
        """Message field 'cs_baro_fault'."""
        return self._cs_baro_fault

    @cs_baro_fault.setter
    def cs_baro_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_baro_fault' field must be of type 'bool'"
        self._cs_baro_fault = value

    @builtins.property
    def cs_gnss_vel(self):
        """Message field 'cs_gnss_vel'."""
        return self._cs_gnss_vel

    @cs_gnss_vel.setter
    def cs_gnss_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_gnss_vel' field must be of type 'bool'"
        self._cs_gnss_vel = value

    @builtins.property
    def cs_gnss_fault(self):
        """Message field 'cs_gnss_fault'."""
        return self._cs_gnss_fault

    @cs_gnss_fault.setter
    def cs_gnss_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_gnss_fault' field must be of type 'bool'"
        self._cs_gnss_fault = value

    @builtins.property
    def cs_yaw_manual(self):
        """Message field 'cs_yaw_manual'."""
        return self._cs_yaw_manual

    @cs_yaw_manual.setter
    def cs_yaw_manual(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_yaw_manual' field must be of type 'bool'"
        self._cs_yaw_manual = value

    @builtins.property
    def cs_gnss_hgt_fault(self):
        """Message field 'cs_gnss_hgt_fault'."""
        return self._cs_gnss_hgt_fault

    @cs_gnss_hgt_fault.setter
    def cs_gnss_hgt_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_gnss_hgt_fault' field must be of type 'bool'"
        self._cs_gnss_hgt_fault = value

    @builtins.property
    def cs_in_transition(self):
        """Message field 'cs_in_transition'."""
        return self._cs_in_transition

    @cs_in_transition.setter
    def cs_in_transition(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_in_transition' field must be of type 'bool'"
        self._cs_in_transition = value

    @builtins.property
    def cs_heading_observable(self):
        """Message field 'cs_heading_observable'."""
        return self._cs_heading_observable

    @cs_heading_observable.setter
    def cs_heading_observable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cs_heading_observable' field must be of type 'bool'"
        self._cs_heading_observable = value

    @builtins.property
    def fault_status_changes(self):
        """Message field 'fault_status_changes'."""
        return self._fault_status_changes

    @fault_status_changes.setter
    def fault_status_changes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fault_status_changes' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'fault_status_changes' field must be an unsigned integer in [0, 4294967295]"
        self._fault_status_changes = value

    @builtins.property
    def fs_bad_mag_x(self):
        """Message field 'fs_bad_mag_x'."""
        return self._fs_bad_mag_x

    @fs_bad_mag_x.setter
    def fs_bad_mag_x(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fs_bad_mag_x' field must be of type 'bool'"
        self._fs_bad_mag_x = value

    @builtins.property
    def fs_bad_mag_y(self):
        """Message field 'fs_bad_mag_y'."""
        return self._fs_bad_mag_y

    @fs_bad_mag_y.setter
    def fs_bad_mag_y(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fs_bad_mag_y' field must be of type 'bool'"
        self._fs_bad_mag_y = value

    @builtins.property
    def fs_bad_mag_z(self):
        """Message field 'fs_bad_mag_z'."""
        return self._fs_bad_mag_z

    @fs_bad_mag_z.setter
    def fs_bad_mag_z(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fs_bad_mag_z' field must be of type 'bool'"
        self._fs_bad_mag_z = value

    @builtins.property
    def fs_bad_hdg(self):
        """Message field 'fs_bad_hdg'."""
        return self._fs_bad_hdg

    @fs_bad_hdg.setter
    def fs_bad_hdg(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fs_bad_hdg' field must be of type 'bool'"
        self._fs_bad_hdg = value

    @builtins.property
    def fs_bad_mag_decl(self):
        """Message field 'fs_bad_mag_decl'."""
        return self._fs_bad_mag_decl

    @fs_bad_mag_decl.setter
    def fs_bad_mag_decl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fs_bad_mag_decl' field must be of type 'bool'"
        self._fs_bad_mag_decl = value

    @builtins.property
    def fs_bad_airspeed(self):
        """Message field 'fs_bad_airspeed'."""
        return self._fs_bad_airspeed

    @fs_bad_airspeed.setter
    def fs_bad_airspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fs_bad_airspeed' field must be of type 'bool'"
        self._fs_bad_airspeed = value

    @builtins.property
    def fs_bad_sideslip(self):
        """Message field 'fs_bad_sideslip'."""
        return self._fs_bad_sideslip

    @fs_bad_sideslip.setter
    def fs_bad_sideslip(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fs_bad_sideslip' field must be of type 'bool'"
        self._fs_bad_sideslip = value

    @builtins.property
    def fs_bad_optflow_x(self):
        """Message field 'fs_bad_optflow_x'."""
        return self._fs_bad_optflow_x

    @fs_bad_optflow_x.setter
    def fs_bad_optflow_x(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fs_bad_optflow_x' field must be of type 'bool'"
        self._fs_bad_optflow_x = value

    @builtins.property
    def fs_bad_optflow_y(self):
        """Message field 'fs_bad_optflow_y'."""
        return self._fs_bad_optflow_y

    @fs_bad_optflow_y.setter
    def fs_bad_optflow_y(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fs_bad_optflow_y' field must be of type 'bool'"
        self._fs_bad_optflow_y = value

    @builtins.property
    def fs_bad_acc_vertical(self):
        """Message field 'fs_bad_acc_vertical'."""
        return self._fs_bad_acc_vertical

    @fs_bad_acc_vertical.setter
    def fs_bad_acc_vertical(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fs_bad_acc_vertical' field must be of type 'bool'"
        self._fs_bad_acc_vertical = value

    @builtins.property
    def fs_bad_acc_clipping(self):
        """Message field 'fs_bad_acc_clipping'."""
        return self._fs_bad_acc_clipping

    @fs_bad_acc_clipping.setter
    def fs_bad_acc_clipping(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fs_bad_acc_clipping' field must be of type 'bool'"
        self._fs_bad_acc_clipping = value
