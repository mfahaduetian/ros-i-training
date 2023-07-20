# generated from rosidl_generator_py/resource/_idl.py.em
# with input from industrial_reconstruction_msgs:msg/TSDFVolumeParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TSDFVolumeParams(type):
    """Metaclass of message 'TSDFVolumeParams'."""

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
                'industrial_reconstruction_msgs.msg.TSDFVolumeParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tsdf_volume_params
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tsdf_volume_params
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tsdf_volume_params
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tsdf_volume_params
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tsdf_volume_params

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TSDFVolumeParams(metaclass=Metaclass_TSDFVolumeParams):
    """Message class 'TSDFVolumeParams'."""

    __slots__ = [
        '_voxel_length',
        '_sdf_trunc',
        '_min_box_values',
        '_max_box_values',
    ]

    _fields_and_field_types = {
        'voxel_length': 'float',
        'sdf_trunc': 'float',
        'min_box_values': 'geometry_msgs/Vector3',
        'max_box_values': 'geometry_msgs/Vector3',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.voxel_length = kwargs.get('voxel_length', float())
        self.sdf_trunc = kwargs.get('sdf_trunc', float())
        from geometry_msgs.msg import Vector3
        self.min_box_values = kwargs.get('min_box_values', Vector3())
        from geometry_msgs.msg import Vector3
        self.max_box_values = kwargs.get('max_box_values', Vector3())

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
        if self.voxel_length != other.voxel_length:
            return False
        if self.sdf_trunc != other.sdf_trunc:
            return False
        if self.min_box_values != other.min_box_values:
            return False
        if self.max_box_values != other.max_box_values:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def voxel_length(self):
        """Message field 'voxel_length'."""
        return self._voxel_length

    @voxel_length.setter
    def voxel_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voxel_length' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'voxel_length' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._voxel_length = value

    @builtins.property
    def sdf_trunc(self):
        """Message field 'sdf_trunc'."""
        return self._sdf_trunc

    @sdf_trunc.setter
    def sdf_trunc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sdf_trunc' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sdf_trunc' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sdf_trunc = value

    @builtins.property
    def min_box_values(self):
        """Message field 'min_box_values'."""
        return self._min_box_values

    @min_box_values.setter
    def min_box_values(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'min_box_values' field must be a sub message of type 'Vector3'"
        self._min_box_values = value

    @builtins.property
    def max_box_values(self):
        """Message field 'max_box_values'."""
        return self._max_box_values

    @max_box_values.setter
    def max_box_values(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'max_box_values' field must be a sub message of type 'Vector3'"
        self._max_box_values = value
