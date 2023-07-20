# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tesseract_msgs:msg/Trajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Trajectory(type):
    """Metaclass of message 'Trajectory'."""

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
                'tesseract_msgs.msg.Trajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trajectory
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trajectory
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trajectory
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trajectory
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trajectory

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from tesseract_msgs.msg import Environment
            if Environment.__class__._TYPE_SUPPORT is None:
                Environment.__class__.__import_type_support__()

            from tesseract_msgs.msg import EnvironmentCommand
            if EnvironmentCommand.__class__._TYPE_SUPPORT is None:
                EnvironmentCommand.__class__.__import_type_support__()

            from tesseract_msgs.msg import JointTrajectory
            if JointTrajectory.__class__._TYPE_SUPPORT is None:
                JointTrajectory.__class__.__import_type_support__()

            from tesseract_msgs.msg import StringDoublePair
            if StringDoublePair.__class__._TYPE_SUPPORT is None:
                StringDoublePair.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Trajectory(metaclass=Metaclass_Trajectory):
    """Message class 'Trajectory'."""

    __slots__ = [
        '_header',
        '_ns',
        '_description',
        '_environment',
        '_commands',
        '_initial_state',
        '_instructions',
        '_joint_trajectories',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ns': 'string',
        'description': 'string',
        'environment': 'tesseract_msgs/Environment',
        'commands': 'sequence<tesseract_msgs/EnvironmentCommand>',
        'initial_state': 'sequence<tesseract_msgs/StringDoublePair>',
        'instructions': 'string',
        'joint_trajectories': 'sequence<tesseract_msgs/JointTrajectory>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'Environment'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'EnvironmentCommand')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'StringDoublePair')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'JointTrajectory')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.ns = kwargs.get('ns', str())
        self.description = kwargs.get('description', str())
        from tesseract_msgs.msg import Environment
        self.environment = kwargs.get('environment', Environment())
        self.commands = kwargs.get('commands', [])
        self.initial_state = kwargs.get('initial_state', [])
        self.instructions = kwargs.get('instructions', str())
        self.joint_trajectories = kwargs.get('joint_trajectories', [])

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
        if self.header != other.header:
            return False
        if self.ns != other.ns:
            return False
        if self.description != other.description:
            return False
        if self.environment != other.environment:
            return False
        if self.commands != other.commands:
            return False
        if self.initial_state != other.initial_state:
            return False
        if self.instructions != other.instructions:
            return False
        if self.joint_trajectories != other.joint_trajectories:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def ns(self):
        """Message field 'ns'."""
        return self._ns

    @ns.setter
    def ns(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ns' field must be of type 'str'"
        self._ns = value

    @builtins.property
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'description' field must be of type 'str'"
        self._description = value

    @builtins.property
    def environment(self):
        """Message field 'environment'."""
        return self._environment

    @environment.setter
    def environment(self, value):
        if __debug__:
            from tesseract_msgs.msg import Environment
            assert \
                isinstance(value, Environment), \
                "The 'environment' field must be a sub message of type 'Environment'"
        self._environment = value

    @builtins.property
    def commands(self):
        """Message field 'commands'."""
        return self._commands

    @commands.setter
    def commands(self, value):
        if __debug__:
            from tesseract_msgs.msg import EnvironmentCommand
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
                 all(isinstance(v, EnvironmentCommand) for v in value) and
                 True), \
                "The 'commands' field must be a set or sequence and each value of type 'EnvironmentCommand'"
        self._commands = value

    @builtins.property
    def initial_state(self):
        """Message field 'initial_state'."""
        return self._initial_state

    @initial_state.setter
    def initial_state(self, value):
        if __debug__:
            from tesseract_msgs.msg import StringDoublePair
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
                 all(isinstance(v, StringDoublePair) for v in value) and
                 True), \
                "The 'initial_state' field must be a set or sequence and each value of type 'StringDoublePair'"
        self._initial_state = value

    @builtins.property
    def instructions(self):
        """Message field 'instructions'."""
        return self._instructions

    @instructions.setter
    def instructions(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'instructions' field must be of type 'str'"
        self._instructions = value

    @builtins.property
    def joint_trajectories(self):
        """Message field 'joint_trajectories'."""
        return self._joint_trajectories

    @joint_trajectories.setter
    def joint_trajectories(self, value):
        if __debug__:
            from tesseract_msgs.msg import JointTrajectory
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
                 all(isinstance(v, JointTrajectory) for v in value) and
                 True), \
                "The 'joint_trajectories' field must be a set or sequence and each value of type 'JointTrajectory'"
        self._joint_trajectories = value
