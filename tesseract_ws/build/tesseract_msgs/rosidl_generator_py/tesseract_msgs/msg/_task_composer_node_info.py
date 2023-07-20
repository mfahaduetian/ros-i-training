# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tesseract_msgs:msg/TaskComposerNodeInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TaskComposerNodeInfo(type):
    """Metaclass of message 'TaskComposerNodeInfo'."""

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
                'tesseract_msgs.msg.TaskComposerNodeInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__task_composer_node_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__task_composer_node_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__task_composer_node_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__task_composer_node_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__task_composer_node_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TaskComposerNodeInfo(metaclass=Metaclass_TaskComposerNodeInfo):
    """Message class 'TaskComposerNodeInfo'."""

    __slots__ = [
        '_name',
        '_uuid',
        '_inbound_edges',
        '_outbound_edges',
        '_input_keys',
        '_output_keys',
        '_return_value',
        '_message',
        '_elapsed_time',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'uuid': 'string',
        'inbound_edges': 'sequence<string>',
        'outbound_edges': 'sequence<string>',
        'input_keys': 'sequence<string>',
        'output_keys': 'sequence<string>',
        'return_value': 'int32',
        'message': 'string',
        'elapsed_time': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.uuid = kwargs.get('uuid', str())
        self.inbound_edges = kwargs.get('inbound_edges', [])
        self.outbound_edges = kwargs.get('outbound_edges', [])
        self.input_keys = kwargs.get('input_keys', [])
        self.output_keys = kwargs.get('output_keys', [])
        self.return_value = kwargs.get('return_value', int())
        self.message = kwargs.get('message', str())
        self.elapsed_time = kwargs.get('elapsed_time', float())

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
        if self.uuid != other.uuid:
            return False
        if self.inbound_edges != other.inbound_edges:
            return False
        if self.outbound_edges != other.outbound_edges:
            return False
        if self.input_keys != other.input_keys:
            return False
        if self.output_keys != other.output_keys:
            return False
        if self.return_value != other.return_value:
            return False
        if self.message != other.message:
            return False
        if self.elapsed_time != other.elapsed_time:
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
    def uuid(self):
        """Message field 'uuid'."""
        return self._uuid

    @uuid.setter
    def uuid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'uuid' field must be of type 'str'"
        self._uuid = value

    @builtins.property
    def inbound_edges(self):
        """Message field 'inbound_edges'."""
        return self._inbound_edges

    @inbound_edges.setter
    def inbound_edges(self, value):
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
                "The 'inbound_edges' field must be a set or sequence and each value of type 'str'"
        self._inbound_edges = value

    @builtins.property
    def outbound_edges(self):
        """Message field 'outbound_edges'."""
        return self._outbound_edges

    @outbound_edges.setter
    def outbound_edges(self, value):
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
                "The 'outbound_edges' field must be a set or sequence and each value of type 'str'"
        self._outbound_edges = value

    @builtins.property
    def input_keys(self):
        """Message field 'input_keys'."""
        return self._input_keys

    @input_keys.setter
    def input_keys(self, value):
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
                "The 'input_keys' field must be a set or sequence and each value of type 'str'"
        self._input_keys = value

    @builtins.property
    def output_keys(self):
        """Message field 'output_keys'."""
        return self._output_keys

    @output_keys.setter
    def output_keys(self, value):
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
                "The 'output_keys' field must be a set or sequence and each value of type 'str'"
        self._output_keys = value

    @builtins.property
    def return_value(self):
        """Message field 'return_value'."""
        return self._return_value

    @return_value.setter
    def return_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'return_value' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'return_value' field must be an integer in [-2147483648, 2147483647]"
        self._return_value = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def elapsed_time(self):
        """Message field 'elapsed_time'."""
        return self._elapsed_time

    @elapsed_time.setter
    def elapsed_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'elapsed_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'elapsed_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._elapsed_time = value
