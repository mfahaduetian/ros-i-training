# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tesseract_msgs:msg/SceneGraph.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SceneGraph(type):
    """Metaclass of message 'SceneGraph'."""

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
                'tesseract_msgs.msg.SceneGraph')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__scene_graph
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__scene_graph
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__scene_graph
            cls._TYPE_SUPPORT = module.type_support_msg__msg__scene_graph
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__scene_graph

            from tesseract_msgs.msg import AllowedCollisionEntry
            if AllowedCollisionEntry.__class__._TYPE_SUPPORT is None:
                AllowedCollisionEntry.__class__.__import_type_support__()

            from tesseract_msgs.msg import Joint
            if Joint.__class__._TYPE_SUPPORT is None:
                Joint.__class__.__import_type_support__()

            from tesseract_msgs.msg import Link
            if Link.__class__._TYPE_SUPPORT is None:
                Link.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SceneGraph(metaclass=Metaclass_SceneGraph):
    """Message class 'SceneGraph'."""

    __slots__ = [
        '_id',
        '_root',
        '_links',
        '_joints',
        '_invisible_links',
        '_disabled_collision_links',
        '_acm',
    ]

    _fields_and_field_types = {
        'id': 'string',
        'root': 'string',
        'links': 'sequence<tesseract_msgs/Link>',
        'joints': 'sequence<tesseract_msgs/Joint>',
        'invisible_links': 'sequence<string>',
        'disabled_collision_links': 'sequence<string>',
        'acm': 'sequence<tesseract_msgs/AllowedCollisionEntry>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'Link')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'Joint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'AllowedCollisionEntry')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', str())
        self.root = kwargs.get('root', str())
        self.links = kwargs.get('links', [])
        self.joints = kwargs.get('joints', [])
        self.invisible_links = kwargs.get('invisible_links', [])
        self.disabled_collision_links = kwargs.get('disabled_collision_links', [])
        self.acm = kwargs.get('acm', [])

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
        if self.id != other.id:
            return False
        if self.root != other.root:
            return False
        if self.links != other.links:
            return False
        if self.joints != other.joints:
            return False
        if self.invisible_links != other.invisible_links:
            return False
        if self.disabled_collision_links != other.disabled_collision_links:
            return False
        if self.acm != other.acm:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @builtins.property
    def root(self):
        """Message field 'root'."""
        return self._root

    @root.setter
    def root(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'root' field must be of type 'str'"
        self._root = value

    @builtins.property
    def links(self):
        """Message field 'links'."""
        return self._links

    @links.setter
    def links(self, value):
        if __debug__:
            from tesseract_msgs.msg import Link
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
                 all(isinstance(v, Link) for v in value) and
                 True), \
                "The 'links' field must be a set or sequence and each value of type 'Link'"
        self._links = value

    @builtins.property
    def joints(self):
        """Message field 'joints'."""
        return self._joints

    @joints.setter
    def joints(self, value):
        if __debug__:
            from tesseract_msgs.msg import Joint
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
                 all(isinstance(v, Joint) for v in value) and
                 True), \
                "The 'joints' field must be a set or sequence and each value of type 'Joint'"
        self._joints = value

    @builtins.property
    def invisible_links(self):
        """Message field 'invisible_links'."""
        return self._invisible_links

    @invisible_links.setter
    def invisible_links(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'invisible_links' field must be a set or sequence and each value of type 'str'"
        self._invisible_links = value

    @builtins.property
    def disabled_collision_links(self):
        """Message field 'disabled_collision_links'."""
        return self._disabled_collision_links

    @disabled_collision_links.setter
    def disabled_collision_links(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'disabled_collision_links' field must be a set or sequence and each value of type 'str'"
        self._disabled_collision_links = value

    @builtins.property
    def acm(self):
        """Message field 'acm'."""
        return self._acm

    @acm.setter
    def acm(self, value):
        if __debug__:
            from tesseract_msgs.msg import AllowedCollisionEntry
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
                 all(isinstance(v, AllowedCollisionEntry) for v in value) and
                 True), \
                "The 'acm' field must be a set or sequence and each value of type 'AllowedCollisionEntry'"
        self._acm = value
