# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tesseract_msgs:srv/GetEnvironmentInformation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetEnvironmentInformation_Request(type):
    """Metaclass of message 'GetEnvironmentInformation_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'COMMAND_HISTORY': 1,
        'LINK_LIST': 2,
        'JOINT_LIST': 4,
        'LINK_NAMES': 8,
        'JOINT_NAMES': 16,
        'ACTIVE_LINK_NAMES': 32,
        'ACTIVE_JOINT_NAMES': 64,
        'LINK_TRANSFORMS': 128,
        'JOINT_TRANSFORMS': 256,
        'ALLOWED_COLLISION_MATRIX': 512,
        'KINEMATICS_INFORMATION': 1024,
        'JOINT_STATES': 2048,
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
                'tesseract_msgs.srv.GetEnvironmentInformation_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_environment_information__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_environment_information__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_environment_information__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_environment_information__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_environment_information__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'COMMAND_HISTORY': cls.__constants['COMMAND_HISTORY'],
            'LINK_LIST': cls.__constants['LINK_LIST'],
            'JOINT_LIST': cls.__constants['JOINT_LIST'],
            'LINK_NAMES': cls.__constants['LINK_NAMES'],
            'JOINT_NAMES': cls.__constants['JOINT_NAMES'],
            'ACTIVE_LINK_NAMES': cls.__constants['ACTIVE_LINK_NAMES'],
            'ACTIVE_JOINT_NAMES': cls.__constants['ACTIVE_JOINT_NAMES'],
            'LINK_TRANSFORMS': cls.__constants['LINK_TRANSFORMS'],
            'JOINT_TRANSFORMS': cls.__constants['JOINT_TRANSFORMS'],
            'ALLOWED_COLLISION_MATRIX': cls.__constants['ALLOWED_COLLISION_MATRIX'],
            'KINEMATICS_INFORMATION': cls.__constants['KINEMATICS_INFORMATION'],
            'JOINT_STATES': cls.__constants['JOINT_STATES'],
        }

    @property
    def COMMAND_HISTORY(self):
        """Message constant 'COMMAND_HISTORY'."""
        return Metaclass_GetEnvironmentInformation_Request.__constants['COMMAND_HISTORY']

    @property
    def LINK_LIST(self):
        """Message constant 'LINK_LIST'."""
        return Metaclass_GetEnvironmentInformation_Request.__constants['LINK_LIST']

    @property
    def JOINT_LIST(self):
        """Message constant 'JOINT_LIST'."""
        return Metaclass_GetEnvironmentInformation_Request.__constants['JOINT_LIST']

    @property
    def LINK_NAMES(self):
        """Message constant 'LINK_NAMES'."""
        return Metaclass_GetEnvironmentInformation_Request.__constants['LINK_NAMES']

    @property
    def JOINT_NAMES(self):
        """Message constant 'JOINT_NAMES'."""
        return Metaclass_GetEnvironmentInformation_Request.__constants['JOINT_NAMES']

    @property
    def ACTIVE_LINK_NAMES(self):
        """Message constant 'ACTIVE_LINK_NAMES'."""
        return Metaclass_GetEnvironmentInformation_Request.__constants['ACTIVE_LINK_NAMES']

    @property
    def ACTIVE_JOINT_NAMES(self):
        """Message constant 'ACTIVE_JOINT_NAMES'."""
        return Metaclass_GetEnvironmentInformation_Request.__constants['ACTIVE_JOINT_NAMES']

    @property
    def LINK_TRANSFORMS(self):
        """Message constant 'LINK_TRANSFORMS'."""
        return Metaclass_GetEnvironmentInformation_Request.__constants['LINK_TRANSFORMS']

    @property
    def JOINT_TRANSFORMS(self):
        """Message constant 'JOINT_TRANSFORMS'."""
        return Metaclass_GetEnvironmentInformation_Request.__constants['JOINT_TRANSFORMS']

    @property
    def ALLOWED_COLLISION_MATRIX(self):
        """Message constant 'ALLOWED_COLLISION_MATRIX'."""
        return Metaclass_GetEnvironmentInformation_Request.__constants['ALLOWED_COLLISION_MATRIX']

    @property
    def KINEMATICS_INFORMATION(self):
        """Message constant 'KINEMATICS_INFORMATION'."""
        return Metaclass_GetEnvironmentInformation_Request.__constants['KINEMATICS_INFORMATION']

    @property
    def JOINT_STATES(self):
        """Message constant 'JOINT_STATES'."""
        return Metaclass_GetEnvironmentInformation_Request.__constants['JOINT_STATES']


class GetEnvironmentInformation_Request(metaclass=Metaclass_GetEnvironmentInformation_Request):
    """
    Message class 'GetEnvironmentInformation_Request'.

    Constants:
      COMMAND_HISTORY
      LINK_LIST
      JOINT_LIST
      LINK_NAMES
      JOINT_NAMES
      ACTIVE_LINK_NAMES
      ACTIVE_JOINT_NAMES
      LINK_TRANSFORMS
      JOINT_TRANSFORMS
      ALLOWED_COLLISION_MATRIX
      KINEMATICS_INFORMATION
      JOINT_STATES
    """

    __slots__ = [
        '_flags',
    ]

    _fields_and_field_types = {
        'flags': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.flags = kwargs.get('flags', int())

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
        if self.flags != other.flags:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def flags(self):
        """Message field 'flags'."""
        return self._flags

    @flags.setter
    def flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flags' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'flags' field must be an unsigned integer in [0, 65535]"
        self._flags = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetEnvironmentInformation_Response(type):
    """Metaclass of message 'GetEnvironmentInformation_Response'."""

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
                'tesseract_msgs.srv.GetEnvironmentInformation_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_environment_information__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_environment_information__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_environment_information__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_environment_information__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_environment_information__response

            from sensor_msgs.msg import JointState
            if JointState.__class__._TYPE_SUPPORT is None:
                JointState.__class__.__import_type_support__()

            from tesseract_msgs.msg import AllowedCollisionEntry
            if AllowedCollisionEntry.__class__._TYPE_SUPPORT is None:
                AllowedCollisionEntry.__class__.__import_type_support__()

            from tesseract_msgs.msg import EnvironmentCommand
            if EnvironmentCommand.__class__._TYPE_SUPPORT is None:
                EnvironmentCommand.__class__.__import_type_support__()

            from tesseract_msgs.msg import Joint
            if Joint.__class__._TYPE_SUPPORT is None:
                Joint.__class__.__import_type_support__()

            from tesseract_msgs.msg import KinematicsInformation
            if KinematicsInformation.__class__._TYPE_SUPPORT is None:
                KinematicsInformation.__class__.__import_type_support__()

            from tesseract_msgs.msg import Link
            if Link.__class__._TYPE_SUPPORT is None:
                Link.__class__.__import_type_support__()

            from tesseract_msgs.msg import TransformMap
            if TransformMap.__class__._TYPE_SUPPORT is None:
                TransformMap.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetEnvironmentInformation_Response(metaclass=Metaclass_GetEnvironmentInformation_Response):
    """Message class 'GetEnvironmentInformation_Response'."""

    __slots__ = [
        '_success',
        '_id',
        '_revision',
        '_command_history',
        '_links',
        '_joints',
        '_link_names',
        '_joint_names',
        '_active_link_names',
        '_active_joint_names',
        '_link_transforms',
        '_joint_transforms',
        '_allowed_collision_matrix',
        '_kinematics_information',
        '_joint_states',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'id': 'string',
        'revision': 'uint64',
        'command_history': 'sequence<tesseract_msgs/EnvironmentCommand>',
        'links': 'sequence<tesseract_msgs/Link>',
        'joints': 'sequence<tesseract_msgs/Joint>',
        'link_names': 'sequence<string>',
        'joint_names': 'sequence<string>',
        'active_link_names': 'sequence<string>',
        'active_joint_names': 'sequence<string>',
        'link_transforms': 'tesseract_msgs/TransformMap',
        'joint_transforms': 'tesseract_msgs/TransformMap',
        'allowed_collision_matrix': 'sequence<tesseract_msgs/AllowedCollisionEntry>',
        'kinematics_information': 'tesseract_msgs/KinematicsInformation',
        'joint_states': 'sensor_msgs/JointState',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'EnvironmentCommand')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'Link')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'Joint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'TransformMap'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'TransformMap'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'AllowedCollisionEntry')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'KinematicsInformation'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'JointState'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.id = kwargs.get('id', str())
        self.revision = kwargs.get('revision', int())
        self.command_history = kwargs.get('command_history', [])
        self.links = kwargs.get('links', [])
        self.joints = kwargs.get('joints', [])
        self.link_names = kwargs.get('link_names', [])
        self.joint_names = kwargs.get('joint_names', [])
        self.active_link_names = kwargs.get('active_link_names', [])
        self.active_joint_names = kwargs.get('active_joint_names', [])
        from tesseract_msgs.msg import TransformMap
        self.link_transforms = kwargs.get('link_transforms', TransformMap())
        from tesseract_msgs.msg import TransformMap
        self.joint_transforms = kwargs.get('joint_transforms', TransformMap())
        self.allowed_collision_matrix = kwargs.get('allowed_collision_matrix', [])
        from tesseract_msgs.msg import KinematicsInformation
        self.kinematics_information = kwargs.get('kinematics_information', KinematicsInformation())
        from sensor_msgs.msg import JointState
        self.joint_states = kwargs.get('joint_states', JointState())

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
        if self.id != other.id:
            return False
        if self.revision != other.revision:
            return False
        if self.command_history != other.command_history:
            return False
        if self.links != other.links:
            return False
        if self.joints != other.joints:
            return False
        if self.link_names != other.link_names:
            return False
        if self.joint_names != other.joint_names:
            return False
        if self.active_link_names != other.active_link_names:
            return False
        if self.active_joint_names != other.active_joint_names:
            return False
        if self.link_transforms != other.link_transforms:
            return False
        if self.joint_transforms != other.joint_transforms:
            return False
        if self.allowed_collision_matrix != other.allowed_collision_matrix:
            return False
        if self.kinematics_information != other.kinematics_information:
            return False
        if self.joint_states != other.joint_states:
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
    def command_history(self):
        """Message field 'command_history'."""
        return self._command_history

    @command_history.setter
    def command_history(self, value):
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
                "The 'command_history' field must be a set or sequence and each value of type 'EnvironmentCommand'"
        self._command_history = value

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
    def link_names(self):
        """Message field 'link_names'."""
        return self._link_names

    @link_names.setter
    def link_names(self, value):
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
                "The 'link_names' field must be a set or sequence and each value of type 'str'"
        self._link_names = value

    @builtins.property
    def joint_names(self):
        """Message field 'joint_names'."""
        return self._joint_names

    @joint_names.setter
    def joint_names(self, value):
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
                "The 'joint_names' field must be a set or sequence and each value of type 'str'"
        self._joint_names = value

    @builtins.property
    def active_link_names(self):
        """Message field 'active_link_names'."""
        return self._active_link_names

    @active_link_names.setter
    def active_link_names(self, value):
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
                "The 'active_link_names' field must be a set or sequence and each value of type 'str'"
        self._active_link_names = value

    @builtins.property
    def active_joint_names(self):
        """Message field 'active_joint_names'."""
        return self._active_joint_names

    @active_joint_names.setter
    def active_joint_names(self, value):
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
                "The 'active_joint_names' field must be a set or sequence and each value of type 'str'"
        self._active_joint_names = value

    @builtins.property
    def link_transforms(self):
        """Message field 'link_transforms'."""
        return self._link_transforms

    @link_transforms.setter
    def link_transforms(self, value):
        if __debug__:
            from tesseract_msgs.msg import TransformMap
            assert \
                isinstance(value, TransformMap), \
                "The 'link_transforms' field must be a sub message of type 'TransformMap'"
        self._link_transforms = value

    @builtins.property
    def joint_transforms(self):
        """Message field 'joint_transforms'."""
        return self._joint_transforms

    @joint_transforms.setter
    def joint_transforms(self, value):
        if __debug__:
            from tesseract_msgs.msg import TransformMap
            assert \
                isinstance(value, TransformMap), \
                "The 'joint_transforms' field must be a sub message of type 'TransformMap'"
        self._joint_transforms = value

    @builtins.property
    def allowed_collision_matrix(self):
        """Message field 'allowed_collision_matrix'."""
        return self._allowed_collision_matrix

    @allowed_collision_matrix.setter
    def allowed_collision_matrix(self, value):
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
                "The 'allowed_collision_matrix' field must be a set or sequence and each value of type 'AllowedCollisionEntry'"
        self._allowed_collision_matrix = value

    @builtins.property
    def kinematics_information(self):
        """Message field 'kinematics_information'."""
        return self._kinematics_information

    @kinematics_information.setter
    def kinematics_information(self, value):
        if __debug__:
            from tesseract_msgs.msg import KinematicsInformation
            assert \
                isinstance(value, KinematicsInformation), \
                "The 'kinematics_information' field must be a sub message of type 'KinematicsInformation'"
        self._kinematics_information = value

    @builtins.property
    def joint_states(self):
        """Message field 'joint_states'."""
        return self._joint_states

    @joint_states.setter
    def joint_states(self, value):
        if __debug__:
            from sensor_msgs.msg import JointState
            assert \
                isinstance(value, JointState), \
                "The 'joint_states' field must be a sub message of type 'JointState'"
        self._joint_states = value


class Metaclass_GetEnvironmentInformation(type):
    """Metaclass of service 'GetEnvironmentInformation'."""

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
                'tesseract_msgs.srv.GetEnvironmentInformation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_environment_information

            from tesseract_msgs.srv import _get_environment_information
            if _get_environment_information.Metaclass_GetEnvironmentInformation_Request._TYPE_SUPPORT is None:
                _get_environment_information.Metaclass_GetEnvironmentInformation_Request.__import_type_support__()
            if _get_environment_information.Metaclass_GetEnvironmentInformation_Response._TYPE_SUPPORT is None:
                _get_environment_information.Metaclass_GetEnvironmentInformation_Response.__import_type_support__()


class GetEnvironmentInformation(metaclass=Metaclass_GetEnvironmentInformation):
    from tesseract_msgs.srv._get_environment_information import GetEnvironmentInformation_Request as Request
    from tesseract_msgs.srv._get_environment_information import GetEnvironmentInformation_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
