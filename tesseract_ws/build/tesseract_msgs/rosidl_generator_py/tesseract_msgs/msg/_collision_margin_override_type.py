# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tesseract_msgs:msg/CollisionMarginOverrideType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CollisionMarginOverrideType(type):
    """Metaclass of message 'CollisionMarginOverrideType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'REPLACE': 1,
        'MODIFY': 2,
        'OVERRIDE_DEFAULT_MARGIN': 3,
        'OVERRIDE_PAIR_MARGIN': 4,
        'MODIFY_PAIR_MARGIN': 5,
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
                'tesseract_msgs.msg.CollisionMarginOverrideType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__collision_margin_override_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__collision_margin_override_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__collision_margin_override_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__collision_margin_override_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__collision_margin_override_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'REPLACE': cls.__constants['REPLACE'],
            'MODIFY': cls.__constants['MODIFY'],
            'OVERRIDE_DEFAULT_MARGIN': cls.__constants['OVERRIDE_DEFAULT_MARGIN'],
            'OVERRIDE_PAIR_MARGIN': cls.__constants['OVERRIDE_PAIR_MARGIN'],
            'MODIFY_PAIR_MARGIN': cls.__constants['MODIFY_PAIR_MARGIN'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_CollisionMarginOverrideType.__constants['NONE']

    @property
    def REPLACE(self):
        """Message constant 'REPLACE'."""
        return Metaclass_CollisionMarginOverrideType.__constants['REPLACE']

    @property
    def MODIFY(self):
        """Message constant 'MODIFY'."""
        return Metaclass_CollisionMarginOverrideType.__constants['MODIFY']

    @property
    def OVERRIDE_DEFAULT_MARGIN(self):
        """Message constant 'OVERRIDE_DEFAULT_MARGIN'."""
        return Metaclass_CollisionMarginOverrideType.__constants['OVERRIDE_DEFAULT_MARGIN']

    @property
    def OVERRIDE_PAIR_MARGIN(self):
        """Message constant 'OVERRIDE_PAIR_MARGIN'."""
        return Metaclass_CollisionMarginOverrideType.__constants['OVERRIDE_PAIR_MARGIN']

    @property
    def MODIFY_PAIR_MARGIN(self):
        """Message constant 'MODIFY_PAIR_MARGIN'."""
        return Metaclass_CollisionMarginOverrideType.__constants['MODIFY_PAIR_MARGIN']


class CollisionMarginOverrideType(metaclass=Metaclass_CollisionMarginOverrideType):
    """
    Message class 'CollisionMarginOverrideType'.

    Constants:
      NONE
      REPLACE
      MODIFY
      OVERRIDE_DEFAULT_MARGIN
      OVERRIDE_PAIR_MARGIN
      MODIFY_PAIR_MARGIN
    """

    __slots__ = [
        '_type',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())

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
        if self.type != other.type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value
