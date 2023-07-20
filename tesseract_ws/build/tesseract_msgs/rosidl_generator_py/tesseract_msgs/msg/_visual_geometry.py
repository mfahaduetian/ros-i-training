# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tesseract_msgs:msg/VisualGeometry.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VisualGeometry(type):
    """Metaclass of message 'VisualGeometry'."""

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
                'tesseract_msgs.msg.VisualGeometry')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__visual_geometry
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__visual_geometry
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__visual_geometry
            cls._TYPE_SUPPORT = module.type_support_msg__msg__visual_geometry
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__visual_geometry

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from tesseract_msgs.msg import Geometry
            if Geometry.__class__._TYPE_SUPPORT is None:
                Geometry.__class__.__import_type_support__()

            from tesseract_msgs.msg import Material
            if Material.__class__._TYPE_SUPPORT is None:
                Material.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VisualGeometry(metaclass=Metaclass_VisualGeometry):
    """Message class 'VisualGeometry'."""

    __slots__ = [
        '_name',
        '_origin',
        '_geometry',
        '_material',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'origin': 'geometry_msgs/Pose',
        'geometry': 'tesseract_msgs/Geometry',
        'material': 'tesseract_msgs/Material',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'Geometry'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'Material'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        from geometry_msgs.msg import Pose
        self.origin = kwargs.get('origin', Pose())
        from tesseract_msgs.msg import Geometry
        self.geometry = kwargs.get('geometry', Geometry())
        from tesseract_msgs.msg import Material
        self.material = kwargs.get('material', Material())

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
        if self.name != other.name:
            return False
        if self.origin != other.origin:
            return False
        if self.geometry != other.geometry:
            return False
        if self.material != other.material:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def origin(self):
        """Message field 'origin'."""
        return self._origin

    @origin.setter
    def origin(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'origin' field must be a sub message of type 'Pose'"
        self._origin = value

    @builtins.property
    def geometry(self):
        """Message field 'geometry'."""
        return self._geometry

    @geometry.setter
    def geometry(self, value):
        if __debug__:
            from tesseract_msgs.msg import Geometry
            assert \
                isinstance(value, Geometry), \
                "The 'geometry' field must be a sub message of type 'Geometry'"
        self._geometry = value

    @builtins.property
    def material(self):
        """Message field 'material'."""
        return self._material

    @material.setter
    def material(self, value):
        if __debug__:
            from tesseract_msgs.msg import Material
            assert \
                isinstance(value, Material), \
                "The 'material' field must be a sub message of type 'Material'"
        self._material = value
