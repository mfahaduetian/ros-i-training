# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tesseract_msgs:srv/ComputeContactResultVector.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ComputeContactResultVector_Request(type):
    """Metaclass of message 'ComputeContactResultVector_Request'."""

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
                'tesseract_msgs.srv.ComputeContactResultVector_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__compute_contact_result_vector__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__compute_contact_result_vector__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__compute_contact_result_vector__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__compute_contact_result_vector__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__compute_contact_result_vector__request

            from sensor_msgs.msg import JointState
            if JointState.__class__._TYPE_SUPPORT is None:
                JointState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputeContactResultVector_Request(metaclass=Metaclass_ComputeContactResultVector_Request):
    """Message class 'ComputeContactResultVector_Request'."""

    __slots__ = [
        '_joint_states',
    ]

    _fields_and_field_types = {
        'joint_states': 'sensor_msgs/JointState',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'JointState'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
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
        if self.joint_states != other.joint_states:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputeContactResultVector_Response(type):
    """Metaclass of message 'ComputeContactResultVector_Response'."""

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
                'tesseract_msgs.srv.ComputeContactResultVector_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__compute_contact_result_vector__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__compute_contact_result_vector__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__compute_contact_result_vector__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__compute_contact_result_vector__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__compute_contact_result_vector__response

            from tesseract_msgs.msg import ContactResultVector
            if ContactResultVector.__class__._TYPE_SUPPORT is None:
                ContactResultVector.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputeContactResultVector_Response(metaclass=Metaclass_ComputeContactResultVector_Response):
    """Message class 'ComputeContactResultVector_Response'."""

    __slots__ = [
        '_collision_result',
        '_success',
    ]

    _fields_and_field_types = {
        'collision_result': 'tesseract_msgs/ContactResultVector',
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'ContactResultVector'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from tesseract_msgs.msg import ContactResultVector
        self.collision_result = kwargs.get('collision_result', ContactResultVector())
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
        if self.collision_result != other.collision_result:
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def collision_result(self):
        """Message field 'collision_result'."""
        return self._collision_result

    @collision_result.setter
    def collision_result(self, value):
        if __debug__:
            from tesseract_msgs.msg import ContactResultVector
            assert \
                isinstance(value, ContactResultVector), \
                "The 'collision_result' field must be a sub message of type 'ContactResultVector'"
        self._collision_result = value

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


class Metaclass_ComputeContactResultVector(type):
    """Metaclass of service 'ComputeContactResultVector'."""

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
                'tesseract_msgs.srv.ComputeContactResultVector')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__compute_contact_result_vector

            from tesseract_msgs.srv import _compute_contact_result_vector
            if _compute_contact_result_vector.Metaclass_ComputeContactResultVector_Request._TYPE_SUPPORT is None:
                _compute_contact_result_vector.Metaclass_ComputeContactResultVector_Request.__import_type_support__()
            if _compute_contact_result_vector.Metaclass_ComputeContactResultVector_Response._TYPE_SUPPORT is None:
                _compute_contact_result_vector.Metaclass_ComputeContactResultVector_Response.__import_type_support__()


class ComputeContactResultVector(metaclass=Metaclass_ComputeContactResultVector):
    from tesseract_msgs.srv._compute_contact_result_vector import ComputeContactResultVector_Request as Request
    from tesseract_msgs.srv._compute_contact_result_vector import ComputeContactResultVector_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
