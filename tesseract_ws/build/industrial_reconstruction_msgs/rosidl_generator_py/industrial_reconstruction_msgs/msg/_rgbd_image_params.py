# generated from rosidl_generator_py/resource/_idl.py.em
# with input from industrial_reconstruction_msgs:msg/RGBDImageParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RGBDImageParams(type):
    """Metaclass of message 'RGBDImageParams'."""

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
            module = import_type_support('industrial_reconstruction_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'industrial_reconstruction_msgs.msg.RGBDImageParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rgbd_image_params
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rgbd_image_params
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rgbd_image_params
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rgbd_image_params
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rgbd_image_params

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RGBDImageParams(metaclass=Metaclass_RGBDImageParams):
    """Message class 'RGBDImageParams'."""

    __slots__ = [
        '_depth_scale',
        '_depth_trunc',
        '_convert_rgb_to_intensity',
    ]

    _fields_and_field_types = {
        'depth_scale': 'float',
        'depth_trunc': 'float',
        'convert_rgb_to_intensity': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.depth_scale = kwargs.get('depth_scale', float())
        self.depth_trunc = kwargs.get('depth_trunc', float())
        self.convert_rgb_to_intensity = kwargs.get('convert_rgb_to_intensity', bool())

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
        if self.depth_scale != other.depth_scale:
            return False
        if self.depth_trunc != other.depth_trunc:
            return False
        if self.convert_rgb_to_intensity != other.convert_rgb_to_intensity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def depth_scale(self):
        """Message field 'depth_scale'."""
        return self._depth_scale

    @depth_scale.setter
    def depth_scale(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'depth_scale' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'depth_scale' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._depth_scale = value

    @builtins.property
    def depth_trunc(self):
        """Message field 'depth_trunc'."""
        return self._depth_trunc

    @depth_trunc.setter
    def depth_trunc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'depth_trunc' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'depth_trunc' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._depth_trunc = value

    @builtins.property
    def convert_rgb_to_intensity(self):
        """Message field 'convert_rgb_to_intensity'."""
        return self._convert_rgb_to_intensity

    @convert_rgb_to_intensity.setter
    def convert_rgb_to_intensity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'convert_rgb_to_intensity' field must be of type 'bool'"
        self._convert_rgb_to_intensity = value
