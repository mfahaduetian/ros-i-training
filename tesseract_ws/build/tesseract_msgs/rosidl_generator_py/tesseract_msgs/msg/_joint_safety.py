# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tesseract_msgs:msg/JointSafety.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JointSafety(type):
    """Metaclass of message 'JointSafety'."""

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
            module = import_type_support('tesseract_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tesseract_msgs.msg.JointSafety')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joint_safety
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joint_safety
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joint_safety
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joint_safety
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joint_safety

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointSafety(metaclass=Metaclass_JointSafety):
    """Message class 'JointSafety'."""

    __slots__ = [
        '_soft_upper_limit',
        '_soft_lower_limit',
        '_k_position',
        '_k_velocity',
        '_empty',
    ]

    _fields_and_field_types = {
        'soft_upper_limit': 'double',
        'soft_lower_limit': 'double',
        'k_position': 'double',
        'k_velocity': 'double',
        'empty': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.soft_upper_limit = kwargs.get('soft_upper_limit', float())
        self.soft_lower_limit = kwargs.get('soft_lower_limit', float())
        self.k_position = kwargs.get('k_position', float())
        self.k_velocity = kwargs.get('k_velocity', float())
        self.empty = kwargs.get('empty', bool())

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
        if self.soft_upper_limit != other.soft_upper_limit:
            return False
        if self.soft_lower_limit != other.soft_lower_limit:
            return False
        if self.k_position != other.k_position:
            return False
        if self.k_velocity != other.k_velocity:
            return False
        if self.empty != other.empty:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def soft_upper_limit(self):
        """Message field 'soft_upper_limit'."""
        return self._soft_upper_limit

    @soft_upper_limit.setter
    def soft_upper_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'soft_upper_limit' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'soft_upper_limit' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._soft_upper_limit = value

    @builtins.property
    def soft_lower_limit(self):
        """Message field 'soft_lower_limit'."""
        return self._soft_lower_limit

    @soft_lower_limit.setter
    def soft_lower_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'soft_lower_limit' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'soft_lower_limit' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._soft_lower_limit = value

    @builtins.property
    def k_position(self):
        """Message field 'k_position'."""
        return self._k_position

    @k_position.setter
    def k_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_position' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'k_position' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._k_position = value

    @builtins.property
    def k_velocity(self):
        """Message field 'k_velocity'."""
        return self._k_velocity

    @k_velocity.setter
    def k_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'k_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._k_velocity = value

    @builtins.property
    def empty(self):
        """Message field 'empty'."""
        return self._empty

    @empty.setter
    def empty(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'empty' field must be of type 'bool'"
        self._empty = value
