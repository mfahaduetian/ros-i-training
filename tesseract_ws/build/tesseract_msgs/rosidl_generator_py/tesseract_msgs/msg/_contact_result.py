# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tesseract_msgs:msg/ContactResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'type_id'
# Member 'shape_id'
# Member 'subshape_id'
# Member 'cc_time'
# Member 'cc_type'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ContactResult(type):
    """Metaclass of message 'ContactResult'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CCTYPE_NONE': 0,
        'CCTYPE_TIME0': 1,
        'CCTYPE_TIME1': 2,
        'CCTYPE_BETWEEN': 3,
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
                'tesseract_msgs.msg.ContactResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__contact_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__contact_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__contact_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__contact_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__contact_result

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CCTYPE_NONE': cls.__constants['CCTYPE_NONE'],
            'CCTYPE_TIME0': cls.__constants['CCTYPE_TIME0'],
            'CCTYPE_TIME1': cls.__constants['CCTYPE_TIME1'],
            'CCTYPE_BETWEEN': cls.__constants['CCTYPE_BETWEEN'],
        }

    @property
    def CCTYPE_NONE(self):
        """Message constant 'CCTYPE_NONE'."""
        return Metaclass_ContactResult.__constants['CCTYPE_NONE']

    @property
    def CCTYPE_TIME0(self):
        """Message constant 'CCTYPE_TIME0'."""
        return Metaclass_ContactResult.__constants['CCTYPE_TIME0']

    @property
    def CCTYPE_TIME1(self):
        """Message constant 'CCTYPE_TIME1'."""
        return Metaclass_ContactResult.__constants['CCTYPE_TIME1']

    @property
    def CCTYPE_BETWEEN(self):
        """Message constant 'CCTYPE_BETWEEN'."""
        return Metaclass_ContactResult.__constants['CCTYPE_BETWEEN']


class ContactResult(metaclass=Metaclass_ContactResult):
    """
    Message class 'ContactResult'.

    Constants:
      CCTYPE_NONE
      CCTYPE_TIME0
      CCTYPE_TIME1
      CCTYPE_BETWEEN
    """

    __slots__ = [
        '_stamp',
        '_distance',
        '_type_id',
        '_link_names',
        '_shape_id',
        '_subshape_id',
        '_nearest_points',
        '_nearest_points_local',
        '_transform',
        '_normal',
        '_cc_time',
        '_cc_type',
        '_cc_transform',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'distance': 'double',
        'type_id': 'uint8[2]',
        'link_names': 'string[2]',
        'shape_id': 'uint64[2]',
        'subshape_id': 'uint64[2]',
        'nearest_points': 'geometry_msgs/Vector3[2]',
        'nearest_points_local': 'geometry_msgs/Vector3[2]',
        'transform': 'geometry_msgs/Pose[2]',
        'normal': 'geometry_msgs/Vector3',
        'cc_time': 'double[2]',
        'cc_type': 'uint8[2]',
        'cc_transform': 'geometry_msgs/Pose[2]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.UnboundedString(), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint64'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint64'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'), 2),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'), 2),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.distance = kwargs.get('distance', float())
        if 'type_id' not in kwargs:
            self.type_id = numpy.zeros(2, dtype=numpy.uint8)
        else:
            self.type_id = numpy.array(kwargs.get('type_id'), dtype=numpy.uint8)
            assert self.type_id.shape == (2, )
        self.link_names = kwargs.get(
            'link_names',
            [str() for x in range(2)]
        )
        if 'shape_id' not in kwargs:
            self.shape_id = numpy.zeros(2, dtype=numpy.uint64)
        else:
            self.shape_id = numpy.array(kwargs.get('shape_id'), dtype=numpy.uint64)
            assert self.shape_id.shape == (2, )
        if 'subshape_id' not in kwargs:
            self.subshape_id = numpy.zeros(2, dtype=numpy.uint64)
        else:
            self.subshape_id = numpy.array(kwargs.get('subshape_id'), dtype=numpy.uint64)
            assert self.subshape_id.shape == (2, )
        from geometry_msgs.msg import Vector3
        self.nearest_points = kwargs.get(
            'nearest_points',
            [Vector3() for x in range(2)]
        )
        from geometry_msgs.msg import Vector3
        self.nearest_points_local = kwargs.get(
            'nearest_points_local',
            [Vector3() for x in range(2)]
        )
        from geometry_msgs.msg import Pose
        self.transform = kwargs.get(
            'transform',
            [Pose() for x in range(2)]
        )
        from geometry_msgs.msg import Vector3
        self.normal = kwargs.get('normal', Vector3())
        if 'cc_time' not in kwargs:
            self.cc_time = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.cc_time = numpy.array(kwargs.get('cc_time'), dtype=numpy.float64)
            assert self.cc_time.shape == (2, )
        if 'cc_type' not in kwargs:
            self.cc_type = numpy.zeros(2, dtype=numpy.uint8)
        else:
            self.cc_type = numpy.array(kwargs.get('cc_type'), dtype=numpy.uint8)
            assert self.cc_type.shape == (2, )
        from geometry_msgs.msg import Pose
        self.cc_transform = kwargs.get(
            'cc_transform',
            [Pose() for x in range(2)]
        )

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
        if self.stamp != other.stamp:
            return False
        if self.distance != other.distance:
            return False
        if all(self.type_id != other.type_id):
            return False
        if self.link_names != other.link_names:
            return False
        if all(self.shape_id != other.shape_id):
            return False
        if all(self.subshape_id != other.subshape_id):
            return False
        if self.nearest_points != other.nearest_points:
            return False
        if self.nearest_points_local != other.nearest_points_local:
            return False
        if self.transform != other.transform:
            return False
        if self.normal != other.normal:
            return False
        if all(self.cc_time != other.cc_time):
            return False
        if all(self.cc_type != other.cc_type):
            return False
        if self.cc_transform != other.cc_transform:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._distance = value

    @builtins.property
    def type_id(self):
        """Message field 'type_id'."""
        return self._type_id

    @type_id.setter
    def type_id(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'type_id' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 2, \
                "The 'type_id' numpy.ndarray() must have a size of 2"
            self._type_id = value
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
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'type_id' field must be a set or sequence with length 2 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._type_id = numpy.array(value, dtype=numpy.uint8)

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
                 len(value) == 2 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'link_names' field must be a set or sequence with length 2 and each value of type 'str'"
        self._link_names = value

    @builtins.property
    def shape_id(self):
        """Message field 'shape_id'."""
        return self._shape_id

    @shape_id.setter
    def shape_id(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint64, \
                "The 'shape_id' numpy.ndarray() must have the dtype of 'numpy.uint64'"
            assert value.size == 2, \
                "The 'shape_id' numpy.ndarray() must have a size of 2"
            self._shape_id = value
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
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'shape_id' field must be a set or sequence with length 2 and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._shape_id = numpy.array(value, dtype=numpy.uint64)

    @builtins.property
    def subshape_id(self):
        """Message field 'subshape_id'."""
        return self._subshape_id

    @subshape_id.setter
    def subshape_id(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint64, \
                "The 'subshape_id' numpy.ndarray() must have the dtype of 'numpy.uint64'"
            assert value.size == 2, \
                "The 'subshape_id' numpy.ndarray() must have a size of 2"
            self._subshape_id = value
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
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'subshape_id' field must be a set or sequence with length 2 and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._subshape_id = numpy.array(value, dtype=numpy.uint64)

    @builtins.property
    def nearest_points(self):
        """Message field 'nearest_points'."""
        return self._nearest_points

    @nearest_points.setter
    def nearest_points(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
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
                 len(value) == 2 and
                 all(isinstance(v, Vector3) for v in value) and
                 True), \
                "The 'nearest_points' field must be a set or sequence with length 2 and each value of type 'Vector3'"
        self._nearest_points = value

    @builtins.property
    def nearest_points_local(self):
        """Message field 'nearest_points_local'."""
        return self._nearest_points_local

    @nearest_points_local.setter
    def nearest_points_local(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
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
                 len(value) == 2 and
                 all(isinstance(v, Vector3) for v in value) and
                 True), \
                "The 'nearest_points_local' field must be a set or sequence with length 2 and each value of type 'Vector3'"
        self._nearest_points_local = value

    @builtins.property
    def transform(self):
        """Message field 'transform'."""
        return self._transform

    @transform.setter
    def transform(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
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
                 len(value) == 2 and
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'transform' field must be a set or sequence with length 2 and each value of type 'Pose'"
        self._transform = value

    @builtins.property
    def normal(self):
        """Message field 'normal'."""
        return self._normal

    @normal.setter
    def normal(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'normal' field must be a sub message of type 'Vector3'"
        self._normal = value

    @builtins.property
    def cc_time(self):
        """Message field 'cc_time'."""
        return self._cc_time

    @cc_time.setter
    def cc_time(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'cc_time' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 2, \
                "The 'cc_time' numpy.ndarray() must have a size of 2"
            self._cc_time = value
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'cc_time' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._cc_time = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def cc_type(self):
        """Message field 'cc_type'."""
        return self._cc_type

    @cc_type.setter
    def cc_type(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'cc_type' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 2, \
                "The 'cc_type' numpy.ndarray() must have a size of 2"
            self._cc_type = value
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
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'cc_type' field must be a set or sequence with length 2 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._cc_type = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def cc_transform(self):
        """Message field 'cc_transform'."""
        return self._cc_transform

    @cc_transform.setter
    def cc_transform(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
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
                 len(value) == 2 and
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'cc_transform' field must be a set or sequence with length 2 and each value of type 'Pose'"
        self._cc_transform = value
