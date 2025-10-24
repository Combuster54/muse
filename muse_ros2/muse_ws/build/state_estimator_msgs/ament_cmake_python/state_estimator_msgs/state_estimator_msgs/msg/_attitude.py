# generated from rosidl_generator_py/resource/_idl.py.em
# with input from state_estimator_msgs:msg/Attitude.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'quaternion'
# Member 'angular_velocity'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Attitude(type):
    """Metaclass of message 'Attitude'."""

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
            module = import_type_support('state_estimator_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'state_estimator_msgs.msg.Attitude')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__attitude
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__attitude
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__attitude
            cls._TYPE_SUPPORT = module.type_support_msg__msg__attitude
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__attitude

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Attitude(metaclass=Metaclass_Attitude):
    """Message class 'Attitude'."""

    __slots__ = [
        '_header',
        '_quaternion',
        '_roll_deg',
        '_pitch_deg',
        '_yaw_deg',
        '_angular_velocity',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'quaternion': 'double[4]',
        'roll_deg': 'double',
        'pitch_deg': 'double',
        'yaw_deg': 'double',
        'angular_velocity': 'double[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        if 'quaternion' not in kwargs:
            self.quaternion = numpy.zeros(4, dtype=numpy.float64)
        else:
            self.quaternion = numpy.array(kwargs.get('quaternion'), dtype=numpy.float64)
            assert self.quaternion.shape == (4, )
        self.roll_deg = kwargs.get('roll_deg', float())
        self.pitch_deg = kwargs.get('pitch_deg', float())
        self.yaw_deg = kwargs.get('yaw_deg', float())
        if 'angular_velocity' not in kwargs:
            self.angular_velocity = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.angular_velocity = numpy.array(kwargs.get('angular_velocity'), dtype=numpy.float64)
            assert self.angular_velocity.shape == (3, )

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
        if self.header != other.header:
            return False
        if any(self.quaternion != other.quaternion):
            return False
        if self.roll_deg != other.roll_deg:
            return False
        if self.pitch_deg != other.pitch_deg:
            return False
        if self.yaw_deg != other.yaw_deg:
            return False
        if any(self.angular_velocity != other.angular_velocity):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def quaternion(self):
        """Message field 'quaternion'."""
        return self._quaternion

    @quaternion.setter
    def quaternion(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'quaternion' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 4, \
                "The 'quaternion' numpy.ndarray() must have a size of 4"
            self._quaternion = value
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
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'quaternion' field must be a set or sequence with length 4 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._quaternion = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def roll_deg(self):
        """Message field 'roll_deg'."""
        return self._roll_deg

    @roll_deg.setter
    def roll_deg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_deg' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'roll_deg' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._roll_deg = value

    @builtins.property
    def pitch_deg(self):
        """Message field 'pitch_deg'."""
        return self._pitch_deg

    @pitch_deg.setter
    def pitch_deg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_deg' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pitch_deg' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pitch_deg = value

    @builtins.property
    def yaw_deg(self):
        """Message field 'yaw_deg'."""
        return self._yaw_deg

    @yaw_deg.setter
    def yaw_deg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_deg' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_deg' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_deg = value

    @builtins.property
    def angular_velocity(self):
        """Message field 'angular_velocity'."""
        return self._angular_velocity

    @angular_velocity.setter
    def angular_velocity(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'angular_velocity' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'angular_velocity' numpy.ndarray() must have a size of 3"
            self._angular_velocity = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'angular_velocity' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._angular_velocity = numpy.array(value, dtype=numpy.float64)
