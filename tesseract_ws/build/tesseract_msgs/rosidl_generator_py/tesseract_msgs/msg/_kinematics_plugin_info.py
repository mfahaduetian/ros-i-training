# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tesseract_msgs:msg/KinematicsPluginInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_KinematicsPluginInfo(type):
    """Metaclass of message 'KinematicsPluginInfo'."""

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
                'tesseract_msgs.msg.KinematicsPluginInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__kinematics_plugin_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__kinematics_plugin_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__kinematics_plugin_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__kinematics_plugin_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__kinematics_plugin_info

            from tesseract_msgs.msg import GroupsKinematicPlugins
            if GroupsKinematicPlugins.__class__._TYPE_SUPPORT is None:
                GroupsKinematicPlugins.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class KinematicsPluginInfo(metaclass=Metaclass_KinematicsPluginInfo):
    """Message class 'KinematicsPluginInfo'."""

    __slots__ = [
        '_search_paths',
        '_search_libraries',
        '_group_fwd_plugins',
        '_group_inv_plugins',
    ]

    _fields_and_field_types = {
        'search_paths': 'sequence<string>',
        'search_libraries': 'sequence<string>',
        'group_fwd_plugins': 'sequence<tesseract_msgs/GroupsKinematicPlugins>',
        'group_inv_plugins': 'sequence<tesseract_msgs/GroupsKinematicPlugins>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'GroupsKinematicPlugins')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'GroupsKinematicPlugins')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.search_paths = kwargs.get('search_paths', [])
        self.search_libraries = kwargs.get('search_libraries', [])
        self.group_fwd_plugins = kwargs.get('group_fwd_plugins', [])
        self.group_inv_plugins = kwargs.get('group_inv_plugins', [])

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
        if self.search_paths != other.search_paths:
            return False
        if self.search_libraries != other.search_libraries:
            return False
        if self.group_fwd_plugins != other.group_fwd_plugins:
            return False
        if self.group_inv_plugins != other.group_inv_plugins:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def search_paths(self):
        """Message field 'search_paths'."""
        return self._search_paths

    @search_paths.setter
    def search_paths(self, value):
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
                "The 'search_paths' field must be a set or sequence and each value of type 'str'"
        self._search_paths = value

    @builtins.property
    def search_libraries(self):
        """Message field 'search_libraries'."""
        return self._search_libraries

    @search_libraries.setter
    def search_libraries(self, value):
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
                "The 'search_libraries' field must be a set or sequence and each value of type 'str'"
        self._search_libraries = value

    @builtins.property
    def group_fwd_plugins(self):
        """Message field 'group_fwd_plugins'."""
        return self._group_fwd_plugins

    @group_fwd_plugins.setter
    def group_fwd_plugins(self, value):
        if __debug__:
            from tesseract_msgs.msg import GroupsKinematicPlugins
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
                 all(isinstance(v, GroupsKinematicPlugins) for v in value) and
                 True), \
                "The 'group_fwd_plugins' field must be a set or sequence and each value of type 'GroupsKinematicPlugins'"
        self._group_fwd_plugins = value

    @builtins.property
    def group_inv_plugins(self):
        """Message field 'group_inv_plugins'."""
        return self._group_inv_plugins

    @group_inv_plugins.setter
    def group_inv_plugins(self, value):
        if __debug__:
            from tesseract_msgs.msg import GroupsKinematicPlugins
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
                 all(isinstance(v, GroupsKinematicPlugins) for v in value) and
                 True), \
                "The 'group_inv_plugins' field must be a set or sequence and each value of type 'GroupsKinematicPlugins'"
        self._group_inv_plugins = value
