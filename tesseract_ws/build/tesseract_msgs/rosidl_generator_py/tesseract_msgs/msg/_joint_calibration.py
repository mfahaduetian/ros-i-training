# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tesseract_msgs:msg/JointCalibration.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JointCalibration(type):
    """Metaclass of message 'JointCalibration'."""

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
                'tesseract_msgs.msg.JointCalibration')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joint_calibration
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joint_calibration
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joint_calibration
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joint_calibration
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joint_calibration

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointCalibration(metaclass=Metaclass_JointCalibration):
    """Message class 'JointCalibration'."""

    __slots__ = [
        '_reference_position',
        '_rising',
        '_falling',
        '_empty',
    ]

    _fields_and_field_types = {
        'reference_position': 'double',
        'rising': 'double',
        'falling': 'double',
        'empty': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.reference_position = kwargs.get('reference_position', float())
        self.rising = kwargs.get('rising', float())
        self.falling = kwargs.get('falling', float())
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
        if self.reference_position != other.reference_position:
            return False
        if self.rising != other.rising:
            return False
        if self.falling != other.falling:
            return False
        if self.empty != other.empty:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def reference_position(self):
        """Message field 'reference_position'."""
        return self._reference_position

    @reference_position.setter
    def reference_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'reference_position' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'reference_position' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._reference_position = value

    @builtins.property
    def rising(self):
        """Message field 'rising'."""
        return self._rising

    @rising.setter
    def rising(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rising' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rising' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rising = value

    @builtins.property
    def falling(self):
        """Message field 'falling'."""
        return self._falling

    @falling.setter
    def falling(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'falling' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'falling' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._falling = value

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
