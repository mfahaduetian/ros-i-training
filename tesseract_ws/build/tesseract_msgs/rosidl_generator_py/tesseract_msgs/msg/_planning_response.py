# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tesseract_msgs:msg/PlanningResponse.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanningResponse(type):
    """Metaclass of message 'PlanningResponse'."""

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
                'tesseract_msgs.msg.PlanningResponse')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__planning_response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__planning_response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__planning_response
            cls._TYPE_SUPPORT = module.type_support_msg__msg__planning_response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__planning_response

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


class PlanningResponse(metaclass=Metaclass_PlanningResponse):
    """Message class 'PlanningResponse'."""

    __slots__ = [
        '_results',
        '_initial_state',
        '_dotgraph',
        '_successful',
        '_status_string',
    ]

    _fields_and_field_types = {
        'results': 'string',
        'initial_state': 'sequence<tesseract_msgs/StringDoublePair>',
        'dotgraph': 'string',
        'successful': 'boolean',
        'status_string': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'StringDoublePair')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.results = kwargs.get('results', str())
        self.initial_state = kwargs.get('initial_state', [])
        self.dotgraph = kwargs.get('dotgraph', str())
        self.successful = kwargs.get('successful', bool())
        self.status_string = kwargs.get('status_string', str())

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
        if self.results != other.results:
            return False
        if self.initial_state != other.initial_state:
            return False
        if self.dotgraph != other.dotgraph:
            return False
        if self.successful != other.successful:
            return False
        if self.status_string != other.status_string:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def results(self):
        """Message field 'results'."""
        return self._results

    @results.setter
    def results(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'results' field must be of type 'str'"
        self._results = value

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
    def dotgraph(self):
        """Message field 'dotgraph'."""
        return self._dotgraph

    @dotgraph.setter
    def dotgraph(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'dotgraph' field must be of type 'str'"
        self._dotgraph = value

    @builtins.property
    def successful(self):
        """Message field 'successful'."""
        return self._successful

    @successful.setter
    def successful(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'successful' field must be of type 'bool'"
        self._successful = value

    @builtins.property
    def status_string(self):
        """Message field 'status_string'."""
        return self._status_string

    @status_string.setter
    def status_string(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status_string' field must be of type 'str'"
        self._status_string = value
