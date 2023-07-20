# generated from rosidl_generator_py/resource/_idl.py.em
# with input from industrial_reconstruction_msgs:srv/StartReconstruction.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StartReconstruction_Request(type):
    """Metaclass of message 'StartReconstruction_Request'."""

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
                'industrial_reconstruction_msgs.srv.StartReconstruction_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__start_reconstruction__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__start_reconstruction__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__start_reconstruction__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__start_reconstruction__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__start_reconstruction__request

            from industrial_reconstruction_msgs.msg import RGBDImageParams
            if RGBDImageParams.__class__._TYPE_SUPPORT is None:
                RGBDImageParams.__class__.__import_type_support__()

            from industrial_reconstruction_msgs.msg import TSDFVolumeParams
            if TSDFVolumeParams.__class__._TYPE_SUPPORT is None:
                TSDFVolumeParams.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StartReconstruction_Request(metaclass=Metaclass_StartReconstruction_Request):
    """Message class 'StartReconstruction_Request'."""

    __slots__ = [
        '_tracking_frame',
        '_relative_frame',
        '_translation_distance',
        '_rotational_distance',
        '_live',
        '_tsdf_params',
        '_rgbd_params',
    ]

    _fields_and_field_types = {
        'tracking_frame': 'string',
        'relative_frame': 'string',
        'translation_distance': 'float',
        'rotational_distance': 'float',
        'live': 'boolean',
        'tsdf_params': 'industrial_reconstruction_msgs/TSDFVolumeParams',
        'rgbd_params': 'industrial_reconstruction_msgs/RGBDImageParams',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['industrial_reconstruction_msgs', 'msg'], 'TSDFVolumeParams'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['industrial_reconstruction_msgs', 'msg'], 'RGBDImageParams'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.tracking_frame = kwargs.get('tracking_frame', str())
        self.relative_frame = kwargs.get('relative_frame', str())
        self.translation_distance = kwargs.get('translation_distance', float())
        self.rotational_distance = kwargs.get('rotational_distance', float())
        self.live = kwargs.get('live', bool())
        from industrial_reconstruction_msgs.msg import TSDFVolumeParams
        self.tsdf_params = kwargs.get('tsdf_params', TSDFVolumeParams())
        from industrial_reconstruction_msgs.msg import RGBDImageParams
        self.rgbd_params = kwargs.get('rgbd_params', RGBDImageParams())

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
        if self.tracking_frame != other.tracking_frame:
            return False
        if self.relative_frame != other.relative_frame:
            return False
        if self.translation_distance != other.translation_distance:
            return False
        if self.rotational_distance != other.rotational_distance:
            return False
        if self.live != other.live:
            return False
        if self.tsdf_params != other.tsdf_params:
            return False
        if self.rgbd_params != other.rgbd_params:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def tracking_frame(self):
        """Message field 'tracking_frame'."""
        return self._tracking_frame

    @tracking_frame.setter
    def tracking_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'tracking_frame' field must be of type 'str'"
        self._tracking_frame = value

    @builtins.property
    def relative_frame(self):
        """Message field 'relative_frame'."""
        return self._relative_frame

    @relative_frame.setter
    def relative_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'relative_frame' field must be of type 'str'"
        self._relative_frame = value

    @builtins.property
    def translation_distance(self):
        """Message field 'translation_distance'."""
        return self._translation_distance

    @translation_distance.setter
    def translation_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'translation_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'translation_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._translation_distance = value

    @builtins.property
    def rotational_distance(self):
        """Message field 'rotational_distance'."""
        return self._rotational_distance

    @rotational_distance.setter
    def rotational_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rotational_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rotational_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rotational_distance = value

    @builtins.property
    def live(self):
        """Message field 'live'."""
        return self._live

    @live.setter
    def live(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'live' field must be of type 'bool'"
        self._live = value

    @builtins.property
    def tsdf_params(self):
        """Message field 'tsdf_params'."""
        return self._tsdf_params

    @tsdf_params.setter
    def tsdf_params(self, value):
        if __debug__:
            from industrial_reconstruction_msgs.msg import TSDFVolumeParams
            assert \
                isinstance(value, TSDFVolumeParams), \
                "The 'tsdf_params' field must be a sub message of type 'TSDFVolumeParams'"
        self._tsdf_params = value

    @builtins.property
    def rgbd_params(self):
        """Message field 'rgbd_params'."""
        return self._rgbd_params

    @rgbd_params.setter
    def rgbd_params(self, value):
        if __debug__:
            from industrial_reconstruction_msgs.msg import RGBDImageParams
            assert \
                isinstance(value, RGBDImageParams), \
                "The 'rgbd_params' field must be a sub message of type 'RGBDImageParams'"
        self._rgbd_params = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_StartReconstruction_Response(type):
    """Metaclass of message 'StartReconstruction_Response'."""

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
                'industrial_reconstruction_msgs.srv.StartReconstruction_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__start_reconstruction__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__start_reconstruction__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__start_reconstruction__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__start_reconstruction__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__start_reconstruction__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StartReconstruction_Response(metaclass=Metaclass_StartReconstruction_Response):
    """Message class 'StartReconstruction_Response'."""

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


class Metaclass_StartReconstruction(type):
    """Metaclass of service 'StartReconstruction'."""

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
                'industrial_reconstruction_msgs.srv.StartReconstruction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__start_reconstruction

            from industrial_reconstruction_msgs.srv import _start_reconstruction
            if _start_reconstruction.Metaclass_StartReconstruction_Request._TYPE_SUPPORT is None:
                _start_reconstruction.Metaclass_StartReconstruction_Request.__import_type_support__()
            if _start_reconstruction.Metaclass_StartReconstruction_Response._TYPE_SUPPORT is None:
                _start_reconstruction.Metaclass_StartReconstruction_Response.__import_type_support__()


class StartReconstruction(metaclass=Metaclass_StartReconstruction):
    from industrial_reconstruction_msgs.srv._start_reconstruction import StartReconstruction_Request as Request
    from industrial_reconstruction_msgs.srv._start_reconstruction import StartReconstruction_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
