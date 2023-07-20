# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tesseract_msgs:msg/EnvironmentCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EnvironmentCommand(type):
    """Metaclass of message 'EnvironmentCommand'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ADD_LINK': 0,
        'MOVE_LINK': 1,
        'MOVE_JOINT': 2,
        'REMOVE_LINK': 3,
        'REMOVE_JOINT': 4,
        'CHANGE_LINK_ORIGIN': 5,
        'CHANGE_JOINT_ORIGIN': 6,
        'CHANGE_LINK_COLLISION_ENABLED': 7,
        'CHANGE_LINK_VISIBILITY': 8,
        'MODIFY_ALLOWED_COLLISIONS': 9,
        'REMOVE_ALLOWED_COLLISION_LINK': 10,
        'UPDATE_JOINT_STATE': 11,
        'ADD_SCENE_GRAPH': 12,
        'CHANGE_JOINT_POSITION_LIMITS': 13,
        'CHANGE_JOINT_VELOCITY_LIMITS': 14,
        'CHANGE_JOINT_ACCELERATION_LIMITS': 15,
        'ADD_KINEMATICS_INFORMATION': 16,
        'REPLACE_JOINT': 17,
        'CHANGE_COLLISION_MARGINS': 18,
        'ADD_CONTACT_MANAGERS_PLUGIN_INFO': 19,
        'SET_ACTIVE_DISCRETE_CONTACT_MANAGER': 20,
        'SET_ACTIVE_CONTINUOUS_CONTACT_MANAGER': 21,
        'ADD_TRAJECTORY_LINK': 22,
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
                'tesseract_msgs.msg.EnvironmentCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__environment_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__environment_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__environment_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__environment_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__environment_command

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from sensor_msgs.msg import JointState
            if JointState.__class__._TYPE_SUPPORT is None:
                JointState.__class__.__import_type_support__()

            from tesseract_msgs.msg import AllowedCollisionEntry
            if AllowedCollisionEntry.__class__._TYPE_SUPPORT is None:
                AllowedCollisionEntry.__class__.__import_type_support__()

            from tesseract_msgs.msg import CollisionMarginData
            if CollisionMarginData.__class__._TYPE_SUPPORT is None:
                CollisionMarginData.__class__.__import_type_support__()

            from tesseract_msgs.msg import CollisionMarginOverrideType
            if CollisionMarginOverrideType.__class__._TYPE_SUPPORT is None:
                CollisionMarginOverrideType.__class__.__import_type_support__()

            from tesseract_msgs.msg import ContactManagersPluginInfo
            if ContactManagersPluginInfo.__class__._TYPE_SUPPORT is None:
                ContactManagersPluginInfo.__class__.__import_type_support__()

            from tesseract_msgs.msg import Joint
            if Joint.__class__._TYPE_SUPPORT is None:
                Joint.__class__.__import_type_support__()

            from tesseract_msgs.msg import JointTrajectory
            if JointTrajectory.__class__._TYPE_SUPPORT is None:
                JointTrajectory.__class__.__import_type_support__()

            from tesseract_msgs.msg import KinematicsInformation
            if KinematicsInformation.__class__._TYPE_SUPPORT is None:
                KinematicsInformation.__class__.__import_type_support__()

            from tesseract_msgs.msg import Link
            if Link.__class__._TYPE_SUPPORT is None:
                Link.__class__.__import_type_support__()

            from tesseract_msgs.msg import SceneGraph
            if SceneGraph.__class__._TYPE_SUPPORT is None:
                SceneGraph.__class__.__import_type_support__()

            from tesseract_msgs.msg import StringDoublePair
            if StringDoublePair.__class__._TYPE_SUPPORT is None:
                StringDoublePair.__class__.__import_type_support__()

            from tesseract_msgs.msg import StringLimitsPair
            if StringLimitsPair.__class__._TYPE_SUPPORT is None:
                StringLimitsPair.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ADD_LINK': cls.__constants['ADD_LINK'],
            'MOVE_LINK': cls.__constants['MOVE_LINK'],
            'MOVE_JOINT': cls.__constants['MOVE_JOINT'],
            'REMOVE_LINK': cls.__constants['REMOVE_LINK'],
            'REMOVE_JOINT': cls.__constants['REMOVE_JOINT'],
            'CHANGE_LINK_ORIGIN': cls.__constants['CHANGE_LINK_ORIGIN'],
            'CHANGE_JOINT_ORIGIN': cls.__constants['CHANGE_JOINT_ORIGIN'],
            'CHANGE_LINK_COLLISION_ENABLED': cls.__constants['CHANGE_LINK_COLLISION_ENABLED'],
            'CHANGE_LINK_VISIBILITY': cls.__constants['CHANGE_LINK_VISIBILITY'],
            'MODIFY_ALLOWED_COLLISIONS': cls.__constants['MODIFY_ALLOWED_COLLISIONS'],
            'REMOVE_ALLOWED_COLLISION_LINK': cls.__constants['REMOVE_ALLOWED_COLLISION_LINK'],
            'UPDATE_JOINT_STATE': cls.__constants['UPDATE_JOINT_STATE'],
            'ADD_SCENE_GRAPH': cls.__constants['ADD_SCENE_GRAPH'],
            'CHANGE_JOINT_POSITION_LIMITS': cls.__constants['CHANGE_JOINT_POSITION_LIMITS'],
            'CHANGE_JOINT_VELOCITY_LIMITS': cls.__constants['CHANGE_JOINT_VELOCITY_LIMITS'],
            'CHANGE_JOINT_ACCELERATION_LIMITS': cls.__constants['CHANGE_JOINT_ACCELERATION_LIMITS'],
            'ADD_KINEMATICS_INFORMATION': cls.__constants['ADD_KINEMATICS_INFORMATION'],
            'REPLACE_JOINT': cls.__constants['REPLACE_JOINT'],
            'CHANGE_COLLISION_MARGINS': cls.__constants['CHANGE_COLLISION_MARGINS'],
            'ADD_CONTACT_MANAGERS_PLUGIN_INFO': cls.__constants['ADD_CONTACT_MANAGERS_PLUGIN_INFO'],
            'SET_ACTIVE_DISCRETE_CONTACT_MANAGER': cls.__constants['SET_ACTIVE_DISCRETE_CONTACT_MANAGER'],
            'SET_ACTIVE_CONTINUOUS_CONTACT_MANAGER': cls.__constants['SET_ACTIVE_CONTINUOUS_CONTACT_MANAGER'],
            'ADD_TRAJECTORY_LINK': cls.__constants['ADD_TRAJECTORY_LINK'],
        }

    @property
    def ADD_LINK(self):
        """Message constant 'ADD_LINK'."""
        return Metaclass_EnvironmentCommand.__constants['ADD_LINK']

    @property
    def MOVE_LINK(self):
        """Message constant 'MOVE_LINK'."""
        return Metaclass_EnvironmentCommand.__constants['MOVE_LINK']

    @property
    def MOVE_JOINT(self):
        """Message constant 'MOVE_JOINT'."""
        return Metaclass_EnvironmentCommand.__constants['MOVE_JOINT']

    @property
    def REMOVE_LINK(self):
        """Message constant 'REMOVE_LINK'."""
        return Metaclass_EnvironmentCommand.__constants['REMOVE_LINK']

    @property
    def REMOVE_JOINT(self):
        """Message constant 'REMOVE_JOINT'."""
        return Metaclass_EnvironmentCommand.__constants['REMOVE_JOINT']

    @property
    def CHANGE_LINK_ORIGIN(self):
        """Message constant 'CHANGE_LINK_ORIGIN'."""
        return Metaclass_EnvironmentCommand.__constants['CHANGE_LINK_ORIGIN']

    @property
    def CHANGE_JOINT_ORIGIN(self):
        """Message constant 'CHANGE_JOINT_ORIGIN'."""
        return Metaclass_EnvironmentCommand.__constants['CHANGE_JOINT_ORIGIN']

    @property
    def CHANGE_LINK_COLLISION_ENABLED(self):
        """Message constant 'CHANGE_LINK_COLLISION_ENABLED'."""
        return Metaclass_EnvironmentCommand.__constants['CHANGE_LINK_COLLISION_ENABLED']

    @property
    def CHANGE_LINK_VISIBILITY(self):
        """Message constant 'CHANGE_LINK_VISIBILITY'."""
        return Metaclass_EnvironmentCommand.__constants['CHANGE_LINK_VISIBILITY']

    @property
    def MODIFY_ALLOWED_COLLISIONS(self):
        """Message constant 'MODIFY_ALLOWED_COLLISIONS'."""
        return Metaclass_EnvironmentCommand.__constants['MODIFY_ALLOWED_COLLISIONS']

    @property
    def REMOVE_ALLOWED_COLLISION_LINK(self):
        """Message constant 'REMOVE_ALLOWED_COLLISION_LINK'."""
        return Metaclass_EnvironmentCommand.__constants['REMOVE_ALLOWED_COLLISION_LINK']

    @property
    def UPDATE_JOINT_STATE(self):
        """Message constant 'UPDATE_JOINT_STATE'."""
        return Metaclass_EnvironmentCommand.__constants['UPDATE_JOINT_STATE']

    @property
    def ADD_SCENE_GRAPH(self):
        """Message constant 'ADD_SCENE_GRAPH'."""
        return Metaclass_EnvironmentCommand.__constants['ADD_SCENE_GRAPH']

    @property
    def CHANGE_JOINT_POSITION_LIMITS(self):
        """Message constant 'CHANGE_JOINT_POSITION_LIMITS'."""
        return Metaclass_EnvironmentCommand.__constants['CHANGE_JOINT_POSITION_LIMITS']

    @property
    def CHANGE_JOINT_VELOCITY_LIMITS(self):
        """Message constant 'CHANGE_JOINT_VELOCITY_LIMITS'."""
        return Metaclass_EnvironmentCommand.__constants['CHANGE_JOINT_VELOCITY_LIMITS']

    @property
    def CHANGE_JOINT_ACCELERATION_LIMITS(self):
        """Message constant 'CHANGE_JOINT_ACCELERATION_LIMITS'."""
        return Metaclass_EnvironmentCommand.__constants['CHANGE_JOINT_ACCELERATION_LIMITS']

    @property
    def ADD_KINEMATICS_INFORMATION(self):
        """Message constant 'ADD_KINEMATICS_INFORMATION'."""
        return Metaclass_EnvironmentCommand.__constants['ADD_KINEMATICS_INFORMATION']

    @property
    def REPLACE_JOINT(self):
        """Message constant 'REPLACE_JOINT'."""
        return Metaclass_EnvironmentCommand.__constants['REPLACE_JOINT']

    @property
    def CHANGE_COLLISION_MARGINS(self):
        """Message constant 'CHANGE_COLLISION_MARGINS'."""
        return Metaclass_EnvironmentCommand.__constants['CHANGE_COLLISION_MARGINS']

    @property
    def ADD_CONTACT_MANAGERS_PLUGIN_INFO(self):
        """Message constant 'ADD_CONTACT_MANAGERS_PLUGIN_INFO'."""
        return Metaclass_EnvironmentCommand.__constants['ADD_CONTACT_MANAGERS_PLUGIN_INFO']

    @property
    def SET_ACTIVE_DISCRETE_CONTACT_MANAGER(self):
        """Message constant 'SET_ACTIVE_DISCRETE_CONTACT_MANAGER'."""
        return Metaclass_EnvironmentCommand.__constants['SET_ACTIVE_DISCRETE_CONTACT_MANAGER']

    @property
    def SET_ACTIVE_CONTINUOUS_CONTACT_MANAGER(self):
        """Message constant 'SET_ACTIVE_CONTINUOUS_CONTACT_MANAGER'."""
        return Metaclass_EnvironmentCommand.__constants['SET_ACTIVE_CONTINUOUS_CONTACT_MANAGER']

    @property
    def ADD_TRAJECTORY_LINK(self):
        """Message constant 'ADD_TRAJECTORY_LINK'."""
        return Metaclass_EnvironmentCommand.__constants['ADD_TRAJECTORY_LINK']


class EnvironmentCommand(metaclass=Metaclass_EnvironmentCommand):
    """
    Message class 'EnvironmentCommand'.

    Constants:
      ADD_LINK
      MOVE_LINK
      MOVE_JOINT
      REMOVE_LINK
      REMOVE_JOINT
      CHANGE_LINK_ORIGIN
      CHANGE_JOINT_ORIGIN
      CHANGE_LINK_COLLISION_ENABLED
      CHANGE_LINK_VISIBILITY
      MODIFY_ALLOWED_COLLISIONS
      REMOVE_ALLOWED_COLLISION_LINK
      UPDATE_JOINT_STATE
      ADD_SCENE_GRAPH
      CHANGE_JOINT_POSITION_LIMITS
      CHANGE_JOINT_VELOCITY_LIMITS
      CHANGE_JOINT_ACCELERATION_LIMITS
      ADD_KINEMATICS_INFORMATION
      REPLACE_JOINT
      CHANGE_COLLISION_MARGINS
      ADD_CONTACT_MANAGERS_PLUGIN_INFO
      SET_ACTIVE_DISCRETE_CONTACT_MANAGER
      SET_ACTIVE_CONTINUOUS_CONTACT_MANAGER
      ADD_TRAJECTORY_LINK
    """

    __slots__ = [
        '_command',
        '_add_link',
        '_add_joint',
        '_add_replace_allowed',
        '_move_link_joint',
        '_move_joint_name',
        '_move_joint_parent_link',
        '_remove_link',
        '_remove_joint',
        '_replace_joint',
        '_change_link_origin_name',
        '_change_link_origin_pose',
        '_change_joint_origin_name',
        '_change_joint_origin_pose',
        '_change_link_collision_enabled_name',
        '_change_link_collision_enabled_value',
        '_change_link_visibility_name',
        '_change_link_visibility_value',
        '_modify_allowed_collisions_type',
        '_modify_allowed_collisions',
        '_remove_allowed_collision_link',
        '_joint_state',
        '_scene_graph',
        '_scene_graph_joint',
        '_scene_graph_prefix',
        '_change_joint_position_limits',
        '_change_joint_velocity_limits',
        '_change_joint_acceleration_limits',
        '_add_kinematics_information',
        '_collision_margin_data',
        '_collision_margin_override_type',
        '_add_contact_managers_plugin_info',
        '_set_active_discrete_contact_manager',
        '_set_active_continuous_contact_manager',
        '_add_trajectory_link_name',
        '_add_trajectory_link_parent_name',
        '_add_trajectory_link_traj',
        '_add_trajectory_link_replace_allowed',
    ]

    _fields_and_field_types = {
        'command': 'uint8',
        'add_link': 'tesseract_msgs/Link',
        'add_joint': 'tesseract_msgs/Joint',
        'add_replace_allowed': 'boolean',
        'move_link_joint': 'tesseract_msgs/Joint',
        'move_joint_name': 'string',
        'move_joint_parent_link': 'string',
        'remove_link': 'string',
        'remove_joint': 'string',
        'replace_joint': 'tesseract_msgs/Joint',
        'change_link_origin_name': 'string',
        'change_link_origin_pose': 'geometry_msgs/Pose',
        'change_joint_origin_name': 'string',
        'change_joint_origin_pose': 'geometry_msgs/Pose',
        'change_link_collision_enabled_name': 'string',
        'change_link_collision_enabled_value': 'boolean',
        'change_link_visibility_name': 'string',
        'change_link_visibility_value': 'boolean',
        'modify_allowed_collisions_type': 'uint8',
        'modify_allowed_collisions': 'sequence<tesseract_msgs/AllowedCollisionEntry>',
        'remove_allowed_collision_link': 'string',
        'joint_state': 'sensor_msgs/JointState',
        'scene_graph': 'tesseract_msgs/SceneGraph',
        'scene_graph_joint': 'tesseract_msgs/Joint',
        'scene_graph_prefix': 'string',
        'change_joint_position_limits': 'sequence<tesseract_msgs/StringLimitsPair>',
        'change_joint_velocity_limits': 'sequence<tesseract_msgs/StringDoublePair>',
        'change_joint_acceleration_limits': 'sequence<tesseract_msgs/StringDoublePair>',
        'add_kinematics_information': 'tesseract_msgs/KinematicsInformation',
        'collision_margin_data': 'tesseract_msgs/CollisionMarginData',
        'collision_margin_override_type': 'tesseract_msgs/CollisionMarginOverrideType',
        'add_contact_managers_plugin_info': 'tesseract_msgs/ContactManagersPluginInfo',
        'set_active_discrete_contact_manager': 'string',
        'set_active_continuous_contact_manager': 'string',
        'add_trajectory_link_name': 'string',
        'add_trajectory_link_parent_name': 'string',
        'add_trajectory_link_traj': 'tesseract_msgs/JointTrajectory',
        'add_trajectory_link_replace_allowed': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'Link'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'Joint'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'Joint'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'Joint'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'AllowedCollisionEntry')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'JointState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'SceneGraph'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'Joint'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'StringLimitsPair')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'StringDoublePair')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'StringDoublePair')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'KinematicsInformation'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'CollisionMarginData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'CollisionMarginOverrideType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'ContactManagersPluginInfo'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tesseract_msgs', 'msg'], 'JointTrajectory'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', int())
        from tesseract_msgs.msg import Link
        self.add_link = kwargs.get('add_link', Link())
        from tesseract_msgs.msg import Joint
        self.add_joint = kwargs.get('add_joint', Joint())
        self.add_replace_allowed = kwargs.get('add_replace_allowed', bool())
        from tesseract_msgs.msg import Joint
        self.move_link_joint = kwargs.get('move_link_joint', Joint())
        self.move_joint_name = kwargs.get('move_joint_name', str())
        self.move_joint_parent_link = kwargs.get('move_joint_parent_link', str())
        self.remove_link = kwargs.get('remove_link', str())
        self.remove_joint = kwargs.get('remove_joint', str())
        from tesseract_msgs.msg import Joint
        self.replace_joint = kwargs.get('replace_joint', Joint())
        self.change_link_origin_name = kwargs.get('change_link_origin_name', str())
        from geometry_msgs.msg import Pose
        self.change_link_origin_pose = kwargs.get('change_link_origin_pose', Pose())
        self.change_joint_origin_name = kwargs.get('change_joint_origin_name', str())
        from geometry_msgs.msg import Pose
        self.change_joint_origin_pose = kwargs.get('change_joint_origin_pose', Pose())
        self.change_link_collision_enabled_name = kwargs.get('change_link_collision_enabled_name', str())
        self.change_link_collision_enabled_value = kwargs.get('change_link_collision_enabled_value', bool())
        self.change_link_visibility_name = kwargs.get('change_link_visibility_name', str())
        self.change_link_visibility_value = kwargs.get('change_link_visibility_value', bool())
        self.modify_allowed_collisions_type = kwargs.get('modify_allowed_collisions_type', int())
        self.modify_allowed_collisions = kwargs.get('modify_allowed_collisions', [])
        self.remove_allowed_collision_link = kwargs.get('remove_allowed_collision_link', str())
        from sensor_msgs.msg import JointState
        self.joint_state = kwargs.get('joint_state', JointState())
        from tesseract_msgs.msg import SceneGraph
        self.scene_graph = kwargs.get('scene_graph', SceneGraph())
        from tesseract_msgs.msg import Joint
        self.scene_graph_joint = kwargs.get('scene_graph_joint', Joint())
        self.scene_graph_prefix = kwargs.get('scene_graph_prefix', str())
        self.change_joint_position_limits = kwargs.get('change_joint_position_limits', [])
        self.change_joint_velocity_limits = kwargs.get('change_joint_velocity_limits', [])
        self.change_joint_acceleration_limits = kwargs.get('change_joint_acceleration_limits', [])
        from tesseract_msgs.msg import KinematicsInformation
        self.add_kinematics_information = kwargs.get('add_kinematics_information', KinematicsInformation())
        from tesseract_msgs.msg import CollisionMarginData
        self.collision_margin_data = kwargs.get('collision_margin_data', CollisionMarginData())
        from tesseract_msgs.msg import CollisionMarginOverrideType
        self.collision_margin_override_type = kwargs.get('collision_margin_override_type', CollisionMarginOverrideType())
        from tesseract_msgs.msg import ContactManagersPluginInfo
        self.add_contact_managers_plugin_info = kwargs.get('add_contact_managers_plugin_info', ContactManagersPluginInfo())
        self.set_active_discrete_contact_manager = kwargs.get('set_active_discrete_contact_manager', str())
        self.set_active_continuous_contact_manager = kwargs.get('set_active_continuous_contact_manager', str())
        self.add_trajectory_link_name = kwargs.get('add_trajectory_link_name', str())
        self.add_trajectory_link_parent_name = kwargs.get('add_trajectory_link_parent_name', str())
        from tesseract_msgs.msg import JointTrajectory
        self.add_trajectory_link_traj = kwargs.get('add_trajectory_link_traj', JointTrajectory())
        self.add_trajectory_link_replace_allowed = kwargs.get('add_trajectory_link_replace_allowed', bool())

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
        if self.command != other.command:
            return False
        if self.add_link != other.add_link:
            return False
        if self.add_joint != other.add_joint:
            return False
        if self.add_replace_allowed != other.add_replace_allowed:
            return False
        if self.move_link_joint != other.move_link_joint:
            return False
        if self.move_joint_name != other.move_joint_name:
            return False
        if self.move_joint_parent_link != other.move_joint_parent_link:
            return False
        if self.remove_link != other.remove_link:
            return False
        if self.remove_joint != other.remove_joint:
            return False
        if self.replace_joint != other.replace_joint:
            return False
        if self.change_link_origin_name != other.change_link_origin_name:
            return False
        if self.change_link_origin_pose != other.change_link_origin_pose:
            return False
        if self.change_joint_origin_name != other.change_joint_origin_name:
            return False
        if self.change_joint_origin_pose != other.change_joint_origin_pose:
            return False
        if self.change_link_collision_enabled_name != other.change_link_collision_enabled_name:
            return False
        if self.change_link_collision_enabled_value != other.change_link_collision_enabled_value:
            return False
        if self.change_link_visibility_name != other.change_link_visibility_name:
            return False
        if self.change_link_visibility_value != other.change_link_visibility_value:
            return False
        if self.modify_allowed_collisions_type != other.modify_allowed_collisions_type:
            return False
        if self.modify_allowed_collisions != other.modify_allowed_collisions:
            return False
        if self.remove_allowed_collision_link != other.remove_allowed_collision_link:
            return False
        if self.joint_state != other.joint_state:
            return False
        if self.scene_graph != other.scene_graph:
            return False
        if self.scene_graph_joint != other.scene_graph_joint:
            return False
        if self.scene_graph_prefix != other.scene_graph_prefix:
            return False
        if self.change_joint_position_limits != other.change_joint_position_limits:
            return False
        if self.change_joint_velocity_limits != other.change_joint_velocity_limits:
            return False
        if self.change_joint_acceleration_limits != other.change_joint_acceleration_limits:
            return False
        if self.add_kinematics_information != other.add_kinematics_information:
            return False
        if self.collision_margin_data != other.collision_margin_data:
            return False
        if self.collision_margin_override_type != other.collision_margin_override_type:
            return False
        if self.add_contact_managers_plugin_info != other.add_contact_managers_plugin_info:
            return False
        if self.set_active_discrete_contact_manager != other.set_active_discrete_contact_manager:
            return False
        if self.set_active_continuous_contact_manager != other.set_active_continuous_contact_manager:
            return False
        if self.add_trajectory_link_name != other.add_trajectory_link_name:
            return False
        if self.add_trajectory_link_parent_name != other.add_trajectory_link_parent_name:
            return False
        if self.add_trajectory_link_traj != other.add_trajectory_link_traj:
            return False
        if self.add_trajectory_link_replace_allowed != other.add_trajectory_link_replace_allowed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command' field must be an unsigned integer in [0, 255]"
        self._command = value

    @builtins.property
    def add_link(self):
        """Message field 'add_link'."""
        return self._add_link

    @add_link.setter
    def add_link(self, value):
        if __debug__:
            from tesseract_msgs.msg import Link
            assert \
                isinstance(value, Link), \
                "The 'add_link' field must be a sub message of type 'Link'"
        self._add_link = value

    @builtins.property
    def add_joint(self):
        """Message field 'add_joint'."""
        return self._add_joint

    @add_joint.setter
    def add_joint(self, value):
        if __debug__:
            from tesseract_msgs.msg import Joint
            assert \
                isinstance(value, Joint), \
                "The 'add_joint' field must be a sub message of type 'Joint'"
        self._add_joint = value

    @builtins.property
    def add_replace_allowed(self):
        """Message field 'add_replace_allowed'."""
        return self._add_replace_allowed

    @add_replace_allowed.setter
    def add_replace_allowed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'add_replace_allowed' field must be of type 'bool'"
        self._add_replace_allowed = value

    @builtins.property
    def move_link_joint(self):
        """Message field 'move_link_joint'."""
        return self._move_link_joint

    @move_link_joint.setter
    def move_link_joint(self, value):
        if __debug__:
            from tesseract_msgs.msg import Joint
            assert \
                isinstance(value, Joint), \
                "The 'move_link_joint' field must be a sub message of type 'Joint'"
        self._move_link_joint = value

    @builtins.property
    def move_joint_name(self):
        """Message field 'move_joint_name'."""
        return self._move_joint_name

    @move_joint_name.setter
    def move_joint_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'move_joint_name' field must be of type 'str'"
        self._move_joint_name = value

    @builtins.property
    def move_joint_parent_link(self):
        """Message field 'move_joint_parent_link'."""
        return self._move_joint_parent_link

    @move_joint_parent_link.setter
    def move_joint_parent_link(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'move_joint_parent_link' field must be of type 'str'"
        self._move_joint_parent_link = value

    @builtins.property
    def remove_link(self):
        """Message field 'remove_link'."""
        return self._remove_link

    @remove_link.setter
    def remove_link(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'remove_link' field must be of type 'str'"
        self._remove_link = value

    @builtins.property
    def remove_joint(self):
        """Message field 'remove_joint'."""
        return self._remove_joint

    @remove_joint.setter
    def remove_joint(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'remove_joint' field must be of type 'str'"
        self._remove_joint = value

    @builtins.property
    def replace_joint(self):
        """Message field 'replace_joint'."""
        return self._replace_joint

    @replace_joint.setter
    def replace_joint(self, value):
        if __debug__:
            from tesseract_msgs.msg import Joint
            assert \
                isinstance(value, Joint), \
                "The 'replace_joint' field must be a sub message of type 'Joint'"
        self._replace_joint = value

    @builtins.property
    def change_link_origin_name(self):
        """Message field 'change_link_origin_name'."""
        return self._change_link_origin_name

    @change_link_origin_name.setter
    def change_link_origin_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'change_link_origin_name' field must be of type 'str'"
        self._change_link_origin_name = value

    @builtins.property
    def change_link_origin_pose(self):
        """Message field 'change_link_origin_pose'."""
        return self._change_link_origin_pose

    @change_link_origin_pose.setter
    def change_link_origin_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'change_link_origin_pose' field must be a sub message of type 'Pose'"
        self._change_link_origin_pose = value

    @builtins.property
    def change_joint_origin_name(self):
        """Message field 'change_joint_origin_name'."""
        return self._change_joint_origin_name

    @change_joint_origin_name.setter
    def change_joint_origin_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'change_joint_origin_name' field must be of type 'str'"
        self._change_joint_origin_name = value

    @builtins.property
    def change_joint_origin_pose(self):
        """Message field 'change_joint_origin_pose'."""
        return self._change_joint_origin_pose

    @change_joint_origin_pose.setter
    def change_joint_origin_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'change_joint_origin_pose' field must be a sub message of type 'Pose'"
        self._change_joint_origin_pose = value

    @builtins.property
    def change_link_collision_enabled_name(self):
        """Message field 'change_link_collision_enabled_name'."""
        return self._change_link_collision_enabled_name

    @change_link_collision_enabled_name.setter
    def change_link_collision_enabled_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'change_link_collision_enabled_name' field must be of type 'str'"
        self._change_link_collision_enabled_name = value

    @builtins.property
    def change_link_collision_enabled_value(self):
        """Message field 'change_link_collision_enabled_value'."""
        return self._change_link_collision_enabled_value

    @change_link_collision_enabled_value.setter
    def change_link_collision_enabled_value(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'change_link_collision_enabled_value' field must be of type 'bool'"
        self._change_link_collision_enabled_value = value

    @builtins.property
    def change_link_visibility_name(self):
        """Message field 'change_link_visibility_name'."""
        return self._change_link_visibility_name

    @change_link_visibility_name.setter
    def change_link_visibility_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'change_link_visibility_name' field must be of type 'str'"
        self._change_link_visibility_name = value

    @builtins.property
    def change_link_visibility_value(self):
        """Message field 'change_link_visibility_value'."""
        return self._change_link_visibility_value

    @change_link_visibility_value.setter
    def change_link_visibility_value(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'change_link_visibility_value' field must be of type 'bool'"
        self._change_link_visibility_value = value

    @builtins.property
    def modify_allowed_collisions_type(self):
        """Message field 'modify_allowed_collisions_type'."""
        return self._modify_allowed_collisions_type

    @modify_allowed_collisions_type.setter
    def modify_allowed_collisions_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'modify_allowed_collisions_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'modify_allowed_collisions_type' field must be an unsigned integer in [0, 255]"
        self._modify_allowed_collisions_type = value

    @builtins.property
    def modify_allowed_collisions(self):
        """Message field 'modify_allowed_collisions'."""
        return self._modify_allowed_collisions

    @modify_allowed_collisions.setter
    def modify_allowed_collisions(self, value):
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
                "The 'modify_allowed_collisions' field must be a set or sequence and each value of type 'AllowedCollisionEntry'"
        self._modify_allowed_collisions = value

    @builtins.property
    def remove_allowed_collision_link(self):
        """Message field 'remove_allowed_collision_link'."""
        return self._remove_allowed_collision_link

    @remove_allowed_collision_link.setter
    def remove_allowed_collision_link(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'remove_allowed_collision_link' field must be of type 'str'"
        self._remove_allowed_collision_link = value

    @builtins.property
    def joint_state(self):
        """Message field 'joint_state'."""
        return self._joint_state

    @joint_state.setter
    def joint_state(self, value):
        if __debug__:
            from sensor_msgs.msg import JointState
            assert \
                isinstance(value, JointState), \
                "The 'joint_state' field must be a sub message of type 'JointState'"
        self._joint_state = value

    @builtins.property
    def scene_graph(self):
        """Message field 'scene_graph'."""
        return self._scene_graph

    @scene_graph.setter
    def scene_graph(self, value):
        if __debug__:
            from tesseract_msgs.msg import SceneGraph
            assert \
                isinstance(value, SceneGraph), \
                "The 'scene_graph' field must be a sub message of type 'SceneGraph'"
        self._scene_graph = value

    @builtins.property
    def scene_graph_joint(self):
        """Message field 'scene_graph_joint'."""
        return self._scene_graph_joint

    @scene_graph_joint.setter
    def scene_graph_joint(self, value):
        if __debug__:
            from tesseract_msgs.msg import Joint
            assert \
                isinstance(value, Joint), \
                "The 'scene_graph_joint' field must be a sub message of type 'Joint'"
        self._scene_graph_joint = value

    @builtins.property
    def scene_graph_prefix(self):
        """Message field 'scene_graph_prefix'."""
        return self._scene_graph_prefix

    @scene_graph_prefix.setter
    def scene_graph_prefix(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'scene_graph_prefix' field must be of type 'str'"
        self._scene_graph_prefix = value

    @builtins.property
    def change_joint_position_limits(self):
        """Message field 'change_joint_position_limits'."""
        return self._change_joint_position_limits

    @change_joint_position_limits.setter
    def change_joint_position_limits(self, value):
        if __debug__:
            from tesseract_msgs.msg import StringLimitsPair
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
                 all(isinstance(v, StringLimitsPair) for v in value) and
                 True), \
                "The 'change_joint_position_limits' field must be a set or sequence and each value of type 'StringLimitsPair'"
        self._change_joint_position_limits = value

    @builtins.property
    def change_joint_velocity_limits(self):
        """Message field 'change_joint_velocity_limits'."""
        return self._change_joint_velocity_limits

    @change_joint_velocity_limits.setter
    def change_joint_velocity_limits(self, value):
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
                "The 'change_joint_velocity_limits' field must be a set or sequence and each value of type 'StringDoublePair'"
        self._change_joint_velocity_limits = value

    @builtins.property
    def change_joint_acceleration_limits(self):
        """Message field 'change_joint_acceleration_limits'."""
        return self._change_joint_acceleration_limits

    @change_joint_acceleration_limits.setter
    def change_joint_acceleration_limits(self, value):
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
                "The 'change_joint_acceleration_limits' field must be a set or sequence and each value of type 'StringDoublePair'"
        self._change_joint_acceleration_limits = value

    @builtins.property
    def add_kinematics_information(self):
        """Message field 'add_kinematics_information'."""
        return self._add_kinematics_information

    @add_kinematics_information.setter
    def add_kinematics_information(self, value):
        if __debug__:
            from tesseract_msgs.msg import KinematicsInformation
            assert \
                isinstance(value, KinematicsInformation), \
                "The 'add_kinematics_information' field must be a sub message of type 'KinematicsInformation'"
        self._add_kinematics_information = value

    @builtins.property
    def collision_margin_data(self):
        """Message field 'collision_margin_data'."""
        return self._collision_margin_data

    @collision_margin_data.setter
    def collision_margin_data(self, value):
        if __debug__:
            from tesseract_msgs.msg import CollisionMarginData
            assert \
                isinstance(value, CollisionMarginData), \
                "The 'collision_margin_data' field must be a sub message of type 'CollisionMarginData'"
        self._collision_margin_data = value

    @builtins.property
    def collision_margin_override_type(self):
        """Message field 'collision_margin_override_type'."""
        return self._collision_margin_override_type

    @collision_margin_override_type.setter
    def collision_margin_override_type(self, value):
        if __debug__:
            from tesseract_msgs.msg import CollisionMarginOverrideType
            assert \
                isinstance(value, CollisionMarginOverrideType), \
                "The 'collision_margin_override_type' field must be a sub message of type 'CollisionMarginOverrideType'"
        self._collision_margin_override_type = value

    @builtins.property
    def add_contact_managers_plugin_info(self):
        """Message field 'add_contact_managers_plugin_info'."""
        return self._add_contact_managers_plugin_info

    @add_contact_managers_plugin_info.setter
    def add_contact_managers_plugin_info(self, value):
        if __debug__:
            from tesseract_msgs.msg import ContactManagersPluginInfo
            assert \
                isinstance(value, ContactManagersPluginInfo), \
                "The 'add_contact_managers_plugin_info' field must be a sub message of type 'ContactManagersPluginInfo'"
        self._add_contact_managers_plugin_info = value

    @builtins.property
    def set_active_discrete_contact_manager(self):
        """Message field 'set_active_discrete_contact_manager'."""
        return self._set_active_discrete_contact_manager

    @set_active_discrete_contact_manager.setter
    def set_active_discrete_contact_manager(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'set_active_discrete_contact_manager' field must be of type 'str'"
        self._set_active_discrete_contact_manager = value

    @builtins.property
    def set_active_continuous_contact_manager(self):
        """Message field 'set_active_continuous_contact_manager'."""
        return self._set_active_continuous_contact_manager

    @set_active_continuous_contact_manager.setter
    def set_active_continuous_contact_manager(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'set_active_continuous_contact_manager' field must be of type 'str'"
        self._set_active_continuous_contact_manager = value

    @builtins.property
    def add_trajectory_link_name(self):
        """Message field 'add_trajectory_link_name'."""
        return self._add_trajectory_link_name

    @add_trajectory_link_name.setter
    def add_trajectory_link_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'add_trajectory_link_name' field must be of type 'str'"
        self._add_trajectory_link_name = value

    @builtins.property
    def add_trajectory_link_parent_name(self):
        """Message field 'add_trajectory_link_parent_name'."""
        return self._add_trajectory_link_parent_name

    @add_trajectory_link_parent_name.setter
    def add_trajectory_link_parent_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'add_trajectory_link_parent_name' field must be of type 'str'"
        self._add_trajectory_link_parent_name = value

    @builtins.property
    def add_trajectory_link_traj(self):
        """Message field 'add_trajectory_link_traj'."""
        return self._add_trajectory_link_traj

    @add_trajectory_link_traj.setter
    def add_trajectory_link_traj(self, value):
        if __debug__:
            from tesseract_msgs.msg import JointTrajectory
            assert \
                isinstance(value, JointTrajectory), \
                "The 'add_trajectory_link_traj' field must be a sub message of type 'JointTrajectory'"
        self._add_trajectory_link_traj = value

    @builtins.property
    def add_trajectory_link_replace_allowed(self):
        """Message field 'add_trajectory_link_replace_allowed'."""
        return self._add_trajectory_link_replace_allowed

    @add_trajectory_link_replace_allowed.setter
    def add_trajectory_link_replace_allowed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'add_trajectory_link_replace_allowed' field must be of type 'bool'"
        self._add_trajectory_link_replace_allowed = value
