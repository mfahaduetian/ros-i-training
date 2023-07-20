# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tesseract_msgs:msg/KinematicsInformation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_KinematicsInformation(type):
    """Metaclass of message 'KinematicsInformation'."""

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
                'tesseract_msgs.msg.KinematicsInformation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__kinematics_information
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__kinematics_information
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__kinematics_information
            cls._TYPE_SUPPORT = module.type_support_msg__msg__kinematics_information
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__kinematics_information

            from tesseract_msgs.msg import ChainGroup
            if ChainGroup.__class__._TYPE_SUPPORT is None:
                ChainGroup.__class__.__import_type_support__()

            from tesseract_msgs.msg import GroupsJointStates
            if GroupsJointStates.__class__._TYPE_SUPPORT is None:
                GroupsJointStates.__class__.__import_type_support__()

            from tesseract_msgs.msg import GroupsTCPs
            if GroupsTCPs.__class__._TYPE_SUPPORT is None:
                GroupsTCPs.__class__.__import_type_support__()

            from tesseract_msgs.msg import JointGroup
            if JointGroup.__class__._TYPE_SUPPORT is None:
                JointGroup.__class__.__import_type_support__()

            from tesseract_msgs.msg import KinematicsPluginInfo
            if KinematicsPluginInfo.__class__._TYPE_SUPPORT is None:
                KinematicsPluginInfo.__class__.__import_type_support__()

            from tesseract_msgs.msg import LinkGroup
            if LinkGroup.__class__._TYPE_SUPPORT is None:
                LinkGroup.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class KinematicsInformation(metaclass=Metaclass_KinematicsInformation):
    """Message class 'KinematicsInformation'."""

    __slots__ = [
        '_group_names',
        '_group_joint_states',
        '_group_tcps',
        '_chain_groups',
        '_joint_groups',
        '_link_groups',
        '_kinematics_plugin_info',
    ]

    _fields_and_field_types = {
        'group_names': 'sequence<string>',
        'group_joint_states': 'sequence<tesseract_msgs/GroupsJointStates>',
        'group_tcps': 'sequence<tesseract_msgs/GroupsTCPs>',
        'chain_groups': 'sequence<tesseract_msgs/ChainGroup>',
        'joint_groups': 'sequence<tesseract_msgs/JointGroup>',
        'link_groups': 'sequence<tesseract_msgs/LinkGroup>',
        'kinematics_plugin_info': 'tesseract_msgs/KinematicsPluginInfo',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'GroupsJointStates')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'GroupsTCPs')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'ChainGroup')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'JointGroup')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'LinkGroup')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'KinematicsPluginInfo'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.group_names = kwargs.get('group_names', [])
        self.group_joint_states = kwargs.get('group_joint_states', [])
        self.group_tcps = kwargs.get('group_tcps', [])
        self.chain_groups = kwargs.get('chain_groups', [])
        self.joint_groups = kwargs.get('joint_groups', [])
        self.link_groups = kwargs.get('link_groups', [])
        from tesseract_msgs.msg import KinematicsPluginInfo
        self.kinematics_plugin_info = kwargs.get('kinematics_plugin_info', KinematicsPluginInfo())

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
        if self.group_names != other.group_names:
            return False
        if self.group_joint_states != other.group_joint_states:
            return False
        if self.group_tcps != other.group_tcps:
            return False
        if self.chain_groups != other.chain_groups:
            return False
        if self.joint_groups != other.joint_groups:
            return False
        if self.link_groups != other.link_groups:
            return False
        if self.kinematics_plugin_info != other.kinematics_plugin_info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def group_names(self):
        """Message field 'group_names'."""
        return self._group_names

    @group_names.setter
    def group_names(self, value):
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
                "The 'group_names' field must be a set or sequence and each value of type 'str'"
        self._group_names = value

    @builtins.property
    def group_joint_states(self):
        """Message field 'group_joint_states'."""
        return self._group_joint_states

    @group_joint_states.setter
    def group_joint_states(self, value):
        if __debug__:
            from tesseract_msgs.msg import GroupsJointStates
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
                 all(isinstance(v, GroupsJointStates) for v in value) and
                 True), \
                "The 'group_joint_states' field must be a set or sequence and each value of type 'GroupsJointStates'"
        self._group_joint_states = value

    @builtins.property
    def group_tcps(self):
        """Message field 'group_tcps'."""
        return self._group_tcps

    @group_tcps.setter
    def group_tcps(self, value):
        if __debug__:
            from tesseract_msgs.msg import GroupsTCPs
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
                 all(isinstance(v, GroupsTCPs) for v in value) and
                 True), \
                "The 'group_tcps' field must be a set or sequence and each value of type 'GroupsTCPs'"
        self._group_tcps = value

    @builtins.property
    def chain_groups(self):
        """Message field 'chain_groups'."""
        return self._chain_groups

    @chain_groups.setter
    def chain_groups(self, value):
        if __debug__:
            from tesseract_msgs.msg import ChainGroup
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
                 all(isinstance(v, ChainGroup) for v in value) and
                 True), \
                "The 'chain_groups' field must be a set or sequence and each value of type 'ChainGroup'"
        self._chain_groups = value

    @builtins.property
    def joint_groups(self):
        """Message field 'joint_groups'."""
        return self._joint_groups

    @joint_groups.setter
    def joint_groups(self, value):
        if __debug__:
            from tesseract_msgs.msg import JointGroup
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
                 all(isinstance(v, JointGroup) for v in value) and
                 True), \
                "The 'joint_groups' field must be a set or sequence and each value of type 'JointGroup'"
        self._joint_groups = value

    @builtins.property
    def link_groups(self):
        """Message field 'link_groups'."""
        return self._link_groups

    @link_groups.setter
    def link_groups(self, value):
        if __debug__:
            from tesseract_msgs.msg import LinkGroup
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
                 all(isinstance(v, LinkGroup) for v in value) and
                 True), \
                "The 'link_groups' field must be a set or sequence and each value of type 'LinkGroup'"
        self._link_groups = value

    @builtins.property
    def kinematics_plugin_info(self):
        """Message field 'kinematics_plugin_info'."""
        return self._kinematics_plugin_info

    @kinematics_plugin_info.setter
    def kinematics_plugin_info(self, value):
        if __debug__:
            from tesseract_msgs.msg import KinematicsPluginInfo
            assert \
                isinstance(value, KinematicsPluginInfo), \
                "The 'kinematics_plugin_info' field must be a sub message of type 'KinematicsPluginInfo'"
        self._kinematics_plugin_info = value
