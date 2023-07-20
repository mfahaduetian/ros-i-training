# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tesseract_msgs:msg/PlanningRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanningRequest(type):
    """Metaclass of message 'PlanningRequest'."""

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
                'tesseract_msgs.msg.PlanningRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__planning_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__planning_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__planning_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__planning_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__planning_request

            from tesseract_msgs.msg import EnvironmentCommand
            if EnvironmentCommand.__class__._TYPE_SUPPORT is None:
                EnvironmentCommand.__class__.__import_type_support__()

            from tesseract_msgs.msg import EnvironmentState
            if EnvironmentState.__class__._TYPE_SUPPORT is None:
                EnvironmentState.__class__.__import_type_support__()

            from tesseract_msgs.msg import PlannerProfileRemapping
            if PlannerProfileRemapping.__class__._TYPE_SUPPORT is None:
                PlannerProfileRemapping.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlanningRequest(metaclass=Metaclass_PlanningRequest):
    """Message class 'PlanningRequest'."""

    __slots__ = [
        '_environment_state',
        '_commands',
        '_name',
        '_executor',
        '_instructions',
        '_dotgraph',
        '_debug',
        '_save_io',
        '_move_profile_remapping',
        '_composite_profile_remapping',
    ]

    _fields_and_field_types = {
        'environment_state': 'tesseract_msgs/EnvironmentState',
        'commands': 'sequence<tesseract_msgs/EnvironmentCommand>',
        'name': 'string',
        'executor': 'string',
        'instructions': 'string',
        'dotgraph': 'boolean',
        'debug': 'boolean',
        'save_io': 'boolean',
        'move_profile_remapping': 'tesseract_msgs/PlannerProfileRemapping',
        'composite_profile_remapping': 'tesseract_msgs/PlannerProfileRemapping',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'EnvironmentState'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'EnvironmentCommand')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'PlannerProfileRemapping'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'PlannerProfileRemapping'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from tesseract_msgs.msg import EnvironmentState
        self.environment_state = kwargs.get('environment_state', EnvironmentState())
        self.commands = kwargs.get('commands', [])
        self.name = kwargs.get('name', str())
        self.executor = kwargs.get('executor', str())
        self.instructions = kwargs.get('instructions', str())
        self.dotgraph = kwargs.get('dotgraph', bool())
        self.debug = kwargs.get('debug', bool())
        self.save_io = kwargs.get('save_io', bool())
        from tesseract_msgs.msg import PlannerProfileRemapping
        self.move_profile_remapping = kwargs.get('move_profile_remapping', PlannerProfileRemapping())
        from tesseract_msgs.msg import PlannerProfileRemapping
        self.composite_profile_remapping = kwargs.get('composite_profile_remapping', PlannerProfileRemapping())

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
        if self.environment_state != other.environment_state:
            return False
        if self.commands != other.commands:
            return False
        if self.name != other.name:
            return False
        if self.executor != other.executor:
            return False
        if self.instructions != other.instructions:
            return False
        if self.dotgraph != other.dotgraph:
            return False
        if self.debug != other.debug:
            return False
        if self.save_io != other.save_io:
            return False
        if self.move_profile_remapping != other.move_profile_remapping:
            return False
        if self.composite_profile_remapping != other.composite_profile_remapping:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def environment_state(self):
        """Message field 'environment_state'."""
        return self._environment_state

    @environment_state.setter
    def environment_state(self, value):
        if __debug__:
            from tesseract_msgs.msg import EnvironmentState
            assert \
                isinstance(value, EnvironmentState), \
                "The 'environment_state' field must be a sub message of type 'EnvironmentState'"
        self._environment_state = value

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
    def executor(self):
        """Message field 'executor'."""
        return self._executor

    @executor.setter
    def executor(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'executor' field must be of type 'str'"
        self._executor = value

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
    def dotgraph(self):
        """Message field 'dotgraph'."""
        return self._dotgraph

    @dotgraph.setter
    def dotgraph(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dotgraph' field must be of type 'bool'"
        self._dotgraph = value

    @builtins.property
    def debug(self):
        """Message field 'debug'."""
        return self._debug

    @debug.setter
    def debug(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'debug' field must be of type 'bool'"
        self._debug = value

    @builtins.property
    def save_io(self):
        """Message field 'save_io'."""
        return self._save_io

    @save_io.setter
    def save_io(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'save_io' field must be of type 'bool'"
        self._save_io = value

    @builtins.property
    def move_profile_remapping(self):
        """Message field 'move_profile_remapping'."""
        return self._move_profile_remapping

    @move_profile_remapping.setter
    def move_profile_remapping(self, value):
        if __debug__:
            from tesseract_msgs.msg import PlannerProfileRemapping
            assert \
                isinstance(value, PlannerProfileRemapping), \
                "The 'move_profile_remapping' field must be a sub message of type 'PlannerProfileRemapping'"
        self._move_profile_remapping = value

    @builtins.property
    def composite_profile_remapping(self):
        """Message field 'composite_profile_remapping'."""
        return self._composite_profile_remapping

    @composite_profile_remapping.setter
    def composite_profile_remapping(self, value):
        if __debug__:
            from tesseract_msgs.msg import PlannerProfileRemapping
            assert \
                isinstance(value, PlannerProfileRemapping), \
                "The 'composite_profile_remapping' field must be a sub message of type 'PlannerProfileRemapping'"
        self._composite_profile_remapping = value
