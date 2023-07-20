# generated from rosidl_generator_py/resource/_idl.py.em
# with input from industrial_reconstruction_msgs:srv/StopReconstruction.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StopReconstruction_Request(type):
    """Metaclass of message 'StopReconstruction_Request'."""

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
            module = import_type_support('industrial_reconstruction_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'industrial_reconstruction_msgs.srv.StopReconstruction_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__stop_reconstruction__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__stop_reconstruction__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__stop_reconstruction__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__stop_reconstruction__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__stop_reconstruction__request

            from industrial_reconstruction_msgs.msg import NormalFilterParams
            if NormalFilterParams.__class__._TYPE_SUPPORT is None:
                NormalFilterParams.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StopReconstruction_Request(metaclass=Metaclass_StopReconstruction_Request):
    """Message class 'StopReconstruction_Request'."""

    __slots__ = [
        '_archive_directory',
        '_mesh_filepath',
        '_min_num_faces',
        '_normal_filters',
    ]

    _fields_and_field_types = {
        'archive_directory': 'string',
        'mesh_filepath': 'string',
        'min_num_faces': 'uint32',
        'normal_filters': 'sequence<industrial_reconstruction_msgs/NormalFilterParams>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['industrial_reconstruction_msgs', 'msg'], 'NormalFilterParams')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.archive_directory = kwargs.get('archive_directory', str())
        self.mesh_filepath = kwargs.get('mesh_filepath', str())
        self.min_num_faces = kwargs.get('min_num_faces', int())
        self.normal_filters = kwargs.get('normal_filters', [])

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
        if self.archive_directory != other.archive_directory:
            return False
        if self.mesh_filepath != other.mesh_filepath:
            return False
        if self.min_num_faces != other.min_num_faces:
            return False
        if self.normal_filters != other.normal_filters:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def archive_directory(self):
        """Message field 'archive_directory'."""
        return self._archive_directory

    @archive_directory.setter
    def archive_directory(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'archive_directory' field must be of type 'str'"
        self._archive_directory = value

    @builtins.property
    def mesh_filepath(self):
        """Message field 'mesh_filepath'."""
        return self._mesh_filepath

    @mesh_filepath.setter
    def mesh_filepath(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mesh_filepath' field must be of type 'str'"
        self._mesh_filepath = value

    @builtins.property
    def min_num_faces(self):
        """Message field 'min_num_faces'."""
        return self._min_num_faces

    @min_num_faces.setter
    def min_num_faces(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'min_num_faces' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'min_num_faces' field must be an unsigned integer in [0, 4294967295]"
        self._min_num_faces = value

    @builtins.property
    def normal_filters(self):
        """Message field 'normal_filters'."""
        return self._normal_filters

    @normal_filters.setter
    def normal_filters(self, value):
        if __debug__:
            from industrial_reconstruction_msgs.msg import NormalFilterParams
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
                 all(isinstance(v, NormalFilterParams) for v in value) and
                 True), \
                "The 'normal_filters' field must be a set or sequence and each value of type 'NormalFilterParams'"
        self._normal_filters = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_StopReconstruction_Response(type):
    """Metaclass of message 'StopReconstruction_Response'."""

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
            module = import_type_support('industrial_reconstruction_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'industrial_reconstruction_msgs.srv.StopReconstruction_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__stop_reconstruction__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__stop_reconstruction__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__stop_reconstruction__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__stop_reconstruction__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__stop_reconstruction__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StopReconstruction_Response(metaclass=Metaclass_StopReconstruction_Response):
    """Message class 'StopReconstruction_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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


class Metaclass_StopReconstruction(type):
    """Metaclass of service 'StopReconstruction'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('industrial_reconstruction_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'industrial_reconstruction_msgs.srv.StopReconstruction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__stop_reconstruction

            from industrial_reconstruction_msgs.srv import _stop_reconstruction
            if _stop_reconstruction.Metaclass_StopReconstruction_Request._TYPE_SUPPORT is None:
                _stop_reconstruction.Metaclass_StopReconstruction_Request.__import_type_support__()
            if _stop_reconstruction.Metaclass_StopReconstruction_Response._TYPE_SUPPORT is None:
                _stop_reconstruction.Metaclass_StopReconstruction_Response.__import_type_support__()


class StopReconstruction(metaclass=Metaclass_StopReconstruction):
    from industrial_reconstruction_msgs.srv._stop_reconstruction import StopReconstruction_Request as Request
    from industrial_reconstruction_msgs.srv._stop_reconstruction import StopReconstruction_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
