# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tesseract_msgs:msg/ContactManagersPluginInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ContactManagersPluginInfo(type):
    """Metaclass of message 'ContactManagersPluginInfo'."""

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
                'tesseract_msgs.msg.ContactManagersPluginInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__contact_managers_plugin_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__contact_managers_plugin_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__contact_managers_plugin_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__contact_managers_plugin_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__contact_managers_plugin_info

            from tesseract_msgs.msg import PluginInfoContainer
            if PluginInfoContainer.__class__._TYPE_SUPPORT is None:
                PluginInfoContainer.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ContactManagersPluginInfo(metaclass=Metaclass_ContactManagersPluginInfo):
    """Message class 'ContactManagersPluginInfo'."""

    __slots__ = [
        '_search_paths',
        '_search_libraries',
        '_discrete_plugin_container',
        '_continuous_plugin_container',
    ]

    _fields_and_field_types = {
        'search_paths': 'sequence<string>',
        'search_libraries': 'sequence<string>',
        'discrete_plugin_container': 'tesseract_msgs/PluginInfoContainer',
        'continuous_plugin_container': 'tesseract_msgs/PluginInfoContainer',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'PluginInfoContainer'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'PluginInfoContainer'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.search_paths = kwargs.get('search_paths', [])
        self.search_libraries = kwargs.get('search_libraries', [])
        from tesseract_msgs.msg import PluginInfoContainer
        self.discrete_plugin_container = kwargs.get('discrete_plugin_container', PluginInfoContainer())
        from tesseract_msgs.msg import PluginInfoContainer
        self.continuous_plugin_container = kwargs.get('continuous_plugin_container', PluginInfoContainer())

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
        if self.discrete_plugin_container != other.discrete_plugin_container:
            return False
        if self.continuous_plugin_container != other.continuous_plugin_container:
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
    def discrete_plugin_container(self):
        """Message field 'discrete_plugin_container'."""
        return self._discrete_plugin_container

    @discrete_plugin_container.setter
    def discrete_plugin_container(self, value):
        if __debug__:
            from tesseract_msgs.msg import PluginInfoContainer
            assert \
                isinstance(value, PluginInfoContainer), \
                "The 'discrete_plugin_container' field must be a sub message of type 'PluginInfoContainer'"
        self._discrete_plugin_container = value

    @builtins.property
    def continuous_plugin_container(self):
        """Message field 'continuous_plugin_container'."""
        return self._continuous_plugin_container

    @continuous_plugin_container.setter
    def continuous_plugin_container(self, value):
        if __debug__:
            from tesseract_msgs.msg import PluginInfoContainer
            assert \
                isinstance(value, PluginInfoContainer), \
                "The 'continuous_plugin_container' field must be a sub message of type 'PluginInfoContainer'"
        self._continuous_plugin_container = value
