# generated from rosidl_generator_py/resource/_idl.py.em
# with input from state_estimator_msgs:msg/ContactDetection.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ContactDetection(type):
    """Metaclass of message 'ContactDetection'."""

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
                'state_estimator_msgs.msg.ContactDetection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__contact_detection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__contact_detection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__contact_detection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__contact_detection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__contact_detection

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


class ContactDetection(metaclass=Metaclass_ContactDetection):
    """Message class 'ContactDetection'."""

    __slots__ = [
        '_header',
        '_stance_lf',
        '_stance_rf',
        '_stance_lh',
        '_stance_rh',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'stance_lf': 'boolean',
        'stance_rf': 'boolean',
        'stance_lh': 'boolean',
        'stance_rh': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.stance_lf = kwargs.get('stance_lf', bool())
        self.stance_rf = kwargs.get('stance_rf', bool())
        self.stance_lh = kwargs.get('stance_lh', bool())
        self.stance_rh = kwargs.get('stance_rh', bool())

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
        if self.stance_lf != other.stance_lf:
            return False
        if self.stance_rf != other.stance_rf:
            return False
        if self.stance_lh != other.stance_lh:
            return False
        if self.stance_rh != other.stance_rh:
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
    def stance_lf(self):
        """Message field 'stance_lf'."""
        return self._stance_lf

    @stance_lf.setter
    def stance_lf(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'stance_lf' field must be of type 'bool'"
        self._stance_lf = value

    @builtins.property
    def stance_rf(self):
        """Message field 'stance_rf'."""
        return self._stance_rf

    @stance_rf.setter
    def stance_rf(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'stance_rf' field must be of type 'bool'"
        self._stance_rf = value

    @builtins.property
    def stance_lh(self):
        """Message field 'stance_lh'."""
        return self._stance_lh

    @stance_lh.setter
    def stance_lh(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'stance_lh' field must be of type 'bool'"
        self._stance_lh = value

    @builtins.property
    def stance_rh(self):
        """Message field 'stance_rh'."""
        return self._stance_rh

    @stance_rh.setter
    def stance_rh(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'stance_rh' field must be of type 'bool'"
        self._stance_rh = value
