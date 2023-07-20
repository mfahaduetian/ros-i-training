# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tesseract_msgs:msg/Geometry.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'cylinder_dimensions'
# Member 'capsule_dimensions'
# Member 'cone_dimensions'
# Member 'box_dimensions'
# Member 'plane_coeff'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Geometry(type):
    """Metaclass of message 'Geometry'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SPHERE': 1,
        'CYLINDER': 2,
        'CAPSULE': 10,
        'CONE': 3,
        'BOX': 4,
        'PLANE': 5,
        'MESH': 6,
        'CONVEX_MESH': 7,
        'SDF_MESH': 8,
        'OCTREE': 9,
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
                'tesseract_msgs.msg.Geometry')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__geometry
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__geometry
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__geometry
            cls._TYPE_SUPPORT = module.type_support_msg__msg__geometry
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__geometry

            from octomap_msgs.msg import Octomap
            if Octomap.__class__._TYPE_SUPPORT is None:
                Octomap.__class__.__import_type_support__()

            from tesseract_msgs.msg import Mesh
            if Mesh.__class__._TYPE_SUPPORT is None:
                Mesh.__class__.__import_type_support__()

            from tesseract_msgs.msg import OctreeSubType
            if OctreeSubType.__class__._TYPE_SUPPORT is None:
                OctreeSubType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SPHERE': cls.__constants['SPHERE'],
            'CYLINDER': cls.__constants['CYLINDER'],
            'CAPSULE': cls.__constants['CAPSULE'],
            'CONE': cls.__constants['CONE'],
            'BOX': cls.__constants['BOX'],
            'PLANE': cls.__constants['PLANE'],
            'MESH': cls.__constants['MESH'],
            'CONVEX_MESH': cls.__constants['CONVEX_MESH'],
            'SDF_MESH': cls.__constants['SDF_MESH'],
            'OCTREE': cls.__constants['OCTREE'],
        }

    @property
    def SPHERE(self):
        """Message constant 'SPHERE'."""
        return Metaclass_Geometry.__constants['SPHERE']

    @property
    def CYLINDER(self):
        """Message constant 'CYLINDER'."""
        return Metaclass_Geometry.__constants['CYLINDER']

    @property
    def CAPSULE(self):
        """Message constant 'CAPSULE'."""
        return Metaclass_Geometry.__constants['CAPSULE']

    @property
    def CONE(self):
        """Message constant 'CONE'."""
        return Metaclass_Geometry.__constants['CONE']

    @property
    def BOX(self):
        """Message constant 'BOX'."""
        return Metaclass_Geometry.__constants['BOX']

    @property
    def PLANE(self):
        """Message constant 'PLANE'."""
        return Metaclass_Geometry.__constants['PLANE']

    @property
    def MESH(self):
        """Message constant 'MESH'."""
        return Metaclass_Geometry.__constants['MESH']

    @property
    def CONVEX_MESH(self):
        """Message constant 'CONVEX_MESH'."""
        return Metaclass_Geometry.__constants['CONVEX_MESH']

    @property
    def SDF_MESH(self):
        """Message constant 'SDF_MESH'."""
        return Metaclass_Geometry.__constants['SDF_MESH']

    @property
    def OCTREE(self):
        """Message constant 'OCTREE'."""
        return Metaclass_Geometry.__constants['OCTREE']


class Geometry(metaclass=Metaclass_Geometry):
    """
    Message class 'Geometry'.

    Constants:
      SPHERE
      CYLINDER
      CAPSULE
      CONE
      BOX
      PLANE
      MESH
      CONVEX_MESH
      SDF_MESH
      OCTREE
    """

    __slots__ = [
        '_type',
        '_sphere_radius',
        '_cylinder_dimensions',
        '_capsule_dimensions',
        '_cone_dimensions',
        '_box_dimensions',
        '_plane_coeff',
        '_mesh',
        '_octomap',
        '_octomap_sub_type',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
        'sphere_radius': 'double',
        'cylinder_dimensions': 'double[2]',
        'capsule_dimensions': 'double[2]',
        'cone_dimensions': 'double[2]',
        'box_dimensions': 'double[3]',
        'plane_coeff': 'double[4]',
        'mesh': 'tesseract_msgs/Mesh',
        'octomap': 'octomap_msgs/Octomap',
        'octomap_sub_type': 'tesseract_msgs/OctreeSubType',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 4),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'Mesh'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['octomap_msgs', 'msg'], 'Octomap'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'OctreeSubType'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.sphere_radius = kwargs.get('sphere_radius', float())
        if 'cylinder_dimensions' not in kwargs:
            self.cylinder_dimensions = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.cylinder_dimensions = numpy.array(kwargs.get('cylinder_dimensions'), dtype=numpy.float64)
            assert self.cylinder_dimensions.shape == (2, )
        if 'capsule_dimensions' not in kwargs:
            self.capsule_dimensions = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.capsule_dimensions = numpy.array(kwargs.get('capsule_dimensions'), dtype=numpy.float64)
            assert self.capsule_dimensions.shape == (2, )
        if 'cone_dimensions' not in kwargs:
            self.cone_dimensions = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.cone_dimensions = numpy.array(kwargs.get('cone_dimensions'), dtype=numpy.float64)
            assert self.cone_dimensions.shape == (2, )
        if 'box_dimensions' not in kwargs:
            self.box_dimensions = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.box_dimensions = numpy.array(kwargs.get('box_dimensions'), dtype=numpy.float64)
            assert self.box_dimensions.shape == (3, )
        if 'plane_coeff' not in kwargs:
            self.plane_coeff = numpy.zeros(4, dtype=numpy.float64)
        else:
            self.plane_coeff = numpy.array(kwargs.get('plane_coeff'), dtype=numpy.float64)
            assert self.plane_coeff.shape == (4, )
        from tesseract_msgs.msg import Mesh
        self.mesh = kwargs.get('mesh', Mesh())
        from octomap_msgs.msg import Octomap
        self.octomap = kwargs.get('octomap', Octomap())
        from tesseract_msgs.msg import OctreeSubType
        self.octomap_sub_type = kwargs.get('octomap_sub_type', OctreeSubType())

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
        if self.type != other.type:
            return False
        if self.sphere_radius != other.sphere_radius:
            return False
        if all(self.cylinder_dimensions != other.cylinder_dimensions):
            return False
        if all(self.capsule_dimensions != other.capsule_dimensions):
            return False
        if all(self.cone_dimensions != other.cone_dimensions):
            return False
        if all(self.box_dimensions != other.box_dimensions):
            return False
        if all(self.plane_coeff != other.plane_coeff):
            return False
        if self.mesh != other.mesh:
            return False
        if self.octomap != other.octomap:
            return False
        if self.octomap_sub_type != other.octomap_sub_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def sphere_radius(self):
        """Message field 'sphere_radius'."""
        return self._sphere_radius

    @sphere_radius.setter
    def sphere_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sphere_radius' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sphere_radius' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sphere_radius = value

    @builtins.property
    def cylinder_dimensions(self):
        """Message field 'cylinder_dimensions'."""
        return self._cylinder_dimensions

    @cylinder_dimensions.setter
    def cylinder_dimensions(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'cylinder_dimensions' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 2, \
                "The 'cylinder_dimensions' numpy.ndarray() must have a size of 2"
            self._cylinder_dimensions = value
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
                "The 'cylinder_dimensions' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._cylinder_dimensions = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def capsule_dimensions(self):
        """Message field 'capsule_dimensions'."""
        return self._capsule_dimensions

    @capsule_dimensions.setter
    def capsule_dimensions(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'capsule_dimensions' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 2, \
                "The 'capsule_dimensions' numpy.ndarray() must have a size of 2"
            self._capsule_dimensions = value
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
                "The 'capsule_dimensions' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._capsule_dimensions = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def cone_dimensions(self):
        """Message field 'cone_dimensions'."""
        return self._cone_dimensions

    @cone_dimensions.setter
    def cone_dimensions(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'cone_dimensions' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 2, \
                "The 'cone_dimensions' numpy.ndarray() must have a size of 2"
            self._cone_dimensions = value
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
                "The 'cone_dimensions' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._cone_dimensions = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def box_dimensions(self):
        """Message field 'box_dimensions'."""
        return self._box_dimensions

    @box_dimensions.setter
    def box_dimensions(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'box_dimensions' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'box_dimensions' numpy.ndarray() must have a size of 3"
            self._box_dimensions = value
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
                "The 'box_dimensions' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._box_dimensions = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def plane_coeff(self):
        """Message field 'plane_coeff'."""
        return self._plane_coeff

    @plane_coeff.setter
    def plane_coeff(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'plane_coeff' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 4, \
                "The 'plane_coeff' numpy.ndarray() must have a size of 4"
            self._plane_coeff = value
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
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'plane_coeff' field must be a set or sequence with length 4 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._plane_coeff = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def mesh(self):
        """Message field 'mesh'."""
        return self._mesh

    @mesh.setter
    def mesh(self, value):
        if __debug__:
            from tesseract_msgs.msg import Mesh
            assert \
                isinstance(value, Mesh), \
                "The 'mesh' field must be a sub message of type 'Mesh'"
        self._mesh = value

    @builtins.property
    def octomap(self):
        """Message field 'octomap'."""
        return self._octomap

    @octomap.setter
    def octomap(self, value):
        if __debug__:
            from octomap_msgs.msg import Octomap
            assert \
                isinstance(value, Octomap), \
                "The 'octomap' field must be a sub message of type 'Octomap'"
        self._octomap = value

    @builtins.property
    def octomap_sub_type(self):
        """Message field 'octomap_sub_type'."""
        return self._octomap_sub_type

    @octomap_sub_type.setter
    def octomap_sub_type(self, value):
        if __debug__:
            from tesseract_msgs.msg import OctreeSubType
            assert \
                isinstance(value, OctreeSubType), \
                "The 'octomap_sub_type' field must be a sub message of type 'OctreeSubType'"
        self._octomap_sub_type = value
