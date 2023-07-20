# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tesseract_msgs:msg/Joint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'axis'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Joint(type):
    """Metaclass of message 'Joint'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'REVOLUTE': 1,
        'CONTINUOUS': 2,
        'PRISMATIC': 3,
        'FLOATING': 4,
        'PLANAR': 5,
        'FIXED': 6,
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
                'tesseract_msgs.msg.Joint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joint

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from tesseract_msgs.msg import JointCalibration
            if JointCalibration.__class__._TYPE_SUPPORT is None:
                JointCalibration.__class__.__import_type_support__()

            from tesseract_msgs.msg import JointDynamics
            if JointDynamics.__class__._TYPE_SUPPORT is None:
                JointDynamics.__class__.__import_type_support__()

            from tesseract_msgs.msg import JointLimits
            if JointLimits.__class__._TYPE_SUPPORT is None:
                JointLimits.__class__.__import_type_support__()

            from tesseract_msgs.msg import JointMimic
            if JointMimic.__class__._TYPE_SUPPORT is None:
                JointMimic.__class__.__import_type_support__()

            from tesseract_msgs.msg import JointSafety
            if JointSafety.__class__._TYPE_SUPPORT is None:
                JointSafety.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'REVOLUTE': cls.__constants['REVOLUTE'],
            'CONTINUOUS': cls.__constants['CONTINUOUS'],
            'PRISMATIC': cls.__constants['PRISMATIC'],
            'FLOATING': cls.__constants['FLOATING'],
            'PLANAR': cls.__constants['PLANAR'],
            'FIXED': cls.__constants['FIXED'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_Joint.__constants['UNKNOWN']

    @property
    def REVOLUTE(self):
        """Message constant 'REVOLUTE'."""
        return Metaclass_Joint.__constants['REVOLUTE']

    @property
    def CONTINUOUS(self):
        """Message constant 'CONTINUOUS'."""
        return Metaclass_Joint.__constants['CONTINUOUS']

    @property
    def PRISMATIC(self):
        """Message constant 'PRISMATIC'."""
        return Metaclass_Joint.__constants['PRISMATIC']

    @property
    def FLOATING(self):
        """Message constant 'FLOATING'."""
        return Metaclass_Joint.__constants['FLOATING']

    @property
    def PLANAR(self):
        """Message constant 'PLANAR'."""
        return Metaclass_Joint.__constants['PLANAR']

    @property
    def FIXED(self):
        """Message constant 'FIXED'."""
        return Metaclass_Joint.__constants['FIXED']


class Joint(metaclass=Metaclass_Joint):
    """
    Message class 'Joint'.

    Constants:
      UNKNOWN
      REVOLUTE
      CONTINUOUS
      PRISMATIC
      FLOATING
      PLANAR
      FIXED
    """

    __slots__ = [
        '_name',
        '_type',
        '_axis',
        '_child_link_name',
        '_parent_link_name',
        '_parent_to_joint_origin_transform',
        '_limits',
        '_dynamics',
        '_safety',
        '_calibration',
        '_mimic',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'type': 'uint8',
        'axis': 'double[3]',
        'child_link_name': 'string',
        'parent_link_name': 'string',
        'parent_to_joint_origin_transform': 'geometry_msgs/Pose',
        'limits': 'tesseract_msgs/JointLimits',
        'dynamics': 'tesseract_msgs/JointDynamics',
        'safety': 'tesseract_msgs/JointSafety',
        'calibration': 'tesseract_msgs/JointCalibration',
        'mimic': 'tesseract_msgs/JointMimic',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'JointLimits'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'JointDynamics'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'JointSafety'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'JointCalibration'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'JointMimic'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.type = kwargs.get('type', int())
        if 'axis' not in kwargs:
            self.axis = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.axis = numpy.array(kwargs.get('axis'), dtype=numpy.float64)
            assert self.axis.shape == (3, )
        self.child_link_name = kwargs.get('child_link_name', str())
        self.parent_link_name = kwargs.get('parent_link_name', str())
        from geometry_msgs.msg import Pose
        self.parent_to_joint_origin_transform = kwargs.get('parent_to_joint_origin_transform', Pose())
        from tesseract_msgs.msg import JointLimits
        self.limits = kwargs.get('limits', JointLimits())
        from tesseract_msgs.msg import JointDynamics
        self.dynamics = kwargs.get('dynamics', JointDynamics())
        from tesseract_msgs.msg import JointSafety
        self.safety = kwargs.get('safety', JointSafety())
        from tesseract_msgs.msg import JointCalibration
        self.calibration = kwargs.get('calibration', JointCalibration())
        from tesseract_msgs.msg import JointMimic
        self.mimic = kwargs.get('mimic', JointMimic())

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
        if self.type != other.type:
            return False
        if all(self.axis != other.axis):
            return False
        if self.child_link_name != other.child_link_name:
            return False
        if self.parent_link_name != other.parent_link_name:
            return False
        if self.parent_to_joint_origin_transform != other.parent_to_joint_origin_transform:
            return False
        if self.limits != other.limits:
            return False
        if self.dynamics != other.dynamics:
            return False
        if self.safety != other.safety:
            return False
        if self.calibration != other.calibration:
            return False
        if self.mimic != other.mimic:
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

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def axis(self):
        """Message field 'axis'."""
        return self._axis

    @axis.setter
    def axis(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'axis' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'axis' numpy.ndarray() must have a size of 3"
            self._axis = value
            return
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'axis' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._axis = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def child_link_name(self):
        """Message field 'child_link_name'."""
        return self._child_link_name

    @child_link_name.setter
    def child_link_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'child_link_name' field must be of type 'str'"
        self._child_link_name = value

    @builtins.property
    def parent_link_name(self):
        """Message field 'parent_link_name'."""
        return self._parent_link_name

    @parent_link_name.setter
    def parent_link_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'parent_link_name' field must be of type 'str'"
        self._parent_link_name = value

    @builtins.property
    def parent_to_joint_origin_transform(self):
        """Message field 'parent_to_joint_origin_transform'."""
        return self._parent_to_joint_origin_transform

    @parent_to_joint_origin_transform.setter
    def parent_to_joint_origin_transform(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'parent_to_joint_origin_transform' field must be a sub message of type 'Pose'"
        self._parent_to_joint_origin_transform = value

    @builtins.property
    def limits(self):
        """Message field 'limits'."""
        return self._limits

    @limits.setter
    def limits(self, value):
        if __debug__:
            from tesseract_msgs.msg import JointLimits
            assert \
                isinstance(value, JointLimits), \
                "The 'limits' field must be a sub message of type 'JointLimits'"
        self._limits = value

    @builtins.property
    def dynamics(self):
        """Message field 'dynamics'."""
        return self._dynamics

    @dynamics.setter
    def dynamics(self, value):
        if __debug__:
            from tesseract_msgs.msg import JointDynamics
            assert \
                isinstance(value, JointDynamics), \
                "The 'dynamics' field must be a sub message of type 'JointDynamics'"
        self._dynamics = value

    @builtins.property
    def safety(self):
        """Message field 'safety'."""
        return self._safety

    @safety.setter
    def safety(self, value):
        if __debug__:
            from tesseract_msgs.msg import JointSafety
            assert \
                isinstance(value, JointSafety), \
                "The 'safety' field must be a sub message of type 'JointSafety'"
        self._safety = value

    @builtins.property
    def calibration(self):
        """Message field 'calibration'."""
        return self._calibration

    @calibration.setter
    def calibration(self, value):
        if __debug__:
            from tesseract_msgs.msg import JointCalibration
            assert \
                isinstance(value, JointCalibration), \
                "The 'calibration' field must be a sub message of type 'JointCalibration'"
        self._calibration = value

    @builtins.property
    def mimic(self):
        """Message field 'mimic'."""
        return self._mimic

    @mimic.setter
    def mimic(self, value):
        if __debug__:
            from tesseract_msgs.msg import JointMimic
            assert \
                isinstance(value, JointMimic), \
                "The 'mimic' field must be a sub message of type 'JointMimic'"
        self._mimic = value
