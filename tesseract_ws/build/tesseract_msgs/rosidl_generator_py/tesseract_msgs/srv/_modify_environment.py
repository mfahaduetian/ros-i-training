# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tesseract_msgs:srv/ModifyEnvironment.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ModifyEnvironment_Request(type):
    """Metaclass of message 'ModifyEnvironment_Request'."""

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
                'tesseract_msgs.srv.ModifyEnvironment_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__modify_environment__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__modify_environment__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__modify_environment__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__modify_environment__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__modify_environment__request

            from tesseract_msgs.msg import EnvironmentCommand
            if EnvironmentCommand.__class__._TYPE_SUPPORT is None:
                EnvironmentCommand.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ModifyEnvironment_Request(metaclass=Metaclass_ModifyEnvironment_Request):
    """Message class 'ModifyEnvironment_Request'."""

    __slots__ = [
        '_id',
        '_revision',
        '_append',
        '_commands',
    ]

    _fields_and_field_types = {
        'id': 'string',
        'revision': 'uint64',
        'append': 'boolean',
        'commands': 'sequence<tesseract_msgs/EnvironmentCommand>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'EnvironmentCommand')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', str())
        self.revision = kwargs.get('revision', int())
        self.append = kwargs.get('append', bool())
        self.commands = kwargs.get('commands', [])

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
        if self.revision != other.revision:
            return False
        if self.append != other.append:
            return False
        if self.commands != other.commands:
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
    def revision(self):
        """Message field 'revision'."""
        return self._revision

    @revision.setter
    def revision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'revision' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'revision' field must be an unsigned integer in [0, 18446744073709551615]"
        self._revision = value

    @builtins.property
    def append(self):
        """Message field 'append'."""
        return self._append

    @append.setter
    def append(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'append' field must be of type 'bool'"
        self._append = value

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ModifyEnvironment_Response(type):
    """Metaclass of message 'ModifyEnvironment_Response'."""

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
                'tesseract_msgs.srv.ModifyEnvironment_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__modify_environment__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__modify_environment__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__modify_environment__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__modify_environment__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__modify_environment__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ModifyEnvironment_Response(metaclass=Metaclass_ModifyEnvironment_Response):
    """Message class 'ModifyEnvironment_Response'."""

    __slots__ = [
        '_success',
        '_revision',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'revision': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.revision = kwargs.get('revision', int())

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
        if self.success != other.success:
            return False
        if self.revision != other.revision:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def revision(self):
        """Message field 'revision'."""
        return self._revision

    @revision.setter
    def revision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'revision' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'revision' field must be an unsigned integer in [0, 18446744073709551615]"
        self._revision = value


class Metaclass_ModifyEnvironment(type):
    """Metaclass of service 'ModifyEnvironment'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tesseract_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tesseract_msgs.srv.ModifyEnvironment')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__modify_environment

            from tesseract_msgs.srv import _modify_environment
            if _modify_environment.Metaclass_ModifyEnvironment_Request._TYPE_SUPPORT is None:
                _modify_environment.Metaclass_ModifyEnvironment_Request.__import_type_support__()
            if _modify_environment.Metaclass_ModifyEnvironment_Response._TYPE_SUPPORT is None:
                _modify_environment.Metaclass_ModifyEnvironment_Response.__import_type_support__()


class ModifyEnvironment(metaclass=Metaclass_ModifyEnvironment):
    from tesseract_msgs.srv._modify_environment import ModifyEnvironment_Request as Request
    from tesseract_msgs.srv._modify_environment import ModifyEnvironment_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
