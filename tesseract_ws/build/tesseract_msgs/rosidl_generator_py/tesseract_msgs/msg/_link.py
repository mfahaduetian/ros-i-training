# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tesseract_msgs:msg/Link.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Link(type):
    """Metaclass of message 'Link'."""

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
                'tesseract_msgs.msg.Link')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__link
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__link
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__link
            cls._TYPE_SUPPORT = module.type_support_msg__msg__link
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__link

            from tesseract_msgs.msg import CollisionGeometry
            if CollisionGeometry.__class__._TYPE_SUPPORT is None:
                CollisionGeometry.__class__.__import_type_support__()

            from tesseract_msgs.msg import Inertial
            if Inertial.__class__._TYPE_SUPPORT is None:
                Inertial.__class__.__import_type_support__()

            from tesseract_msgs.msg import VisualGeometry
            if VisualGeometry.__class__._TYPE_SUPPORT is None:
                VisualGeometry.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Link(metaclass=Metaclass_Link):
    """Message class 'Link'."""

    __slots__ = [
        '_name',
        '_inertial',
        '_visual',
        '_collision',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'inertial': 'tesseract_msgs/Inertial',
        'visual': 'sequence<tesseract_msgs/VisualGeometry>',
        'collision': 'sequence<tesseract_msgs/CollisionGeometry>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'Inertial'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'VisualGeometry')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'CollisionGeometry')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        from tesseract_msgs.msg import Inertial
        self.inertial = kwargs.get('inertial', Inertial())
        self.visual = kwargs.get('visual', [])
        self.collision = kwargs.get('collision', [])

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
        if self.inertial != other.inertial:
            return False
        if self.visual != other.visual:
            return False
        if self.collision != other.collision:
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
    def inertial(self):
        """Message field 'inertial'."""
        return self._inertial

    @inertial.setter
    def inertial(self, value):
        if __debug__:
            from tesseract_msgs.msg import Inertial
            assert \
                isinstance(value, Inertial), \
                "The 'inertial' field must be a sub message of type 'Inertial'"
        self._inertial = value

    @builtins.property
    def visual(self):
        """Message field 'visual'."""
        return self._visual

    @visual.setter
    def visual(self, value):
        if __debug__:
            from tesseract_msgs.msg import VisualGeometry
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
                 all(isinstance(v, VisualGeometry) for v in value) and
                 True), \
                "The 'visual' field must be a set or sequence and each value of type 'VisualGeometry'"
        self._visual = value

    @builtins.property
    def collision(self):
        """Message field 'collision'."""
        return self._collision

    @collision.setter
    def collision(self, value):
        if __debug__:
            from tesseract_msgs.msg import CollisionGeometry
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
                 all(isinstance(v, CollisionGeometry) for v in value) and
                 True), \
                "The 'collision' field must be a set or sequence and each value of type 'CollisionGeometry'"
        self._collision = value
