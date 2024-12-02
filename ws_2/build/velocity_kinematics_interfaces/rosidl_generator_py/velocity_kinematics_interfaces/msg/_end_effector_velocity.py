# generated from rosidl_generator_py/resource/_idl.py.em
# with input from velocity_kinematics_interfaces:msg/EndEffectorVelocity.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EndEffectorVelocity(type):
    """Metaclass of message 'EndEffectorVelocity'."""

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
            module = import_type_support('velocity_kinematics_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'velocity_kinematics_interfaces.msg.EndEffectorVelocity')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__end_effector_velocity
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__end_effector_velocity
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__end_effector_velocity
            cls._TYPE_SUPPORT = module.type_support_msg__msg__end_effector_velocity
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__end_effector_velocity

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EndEffectorVelocity(metaclass=Metaclass_EndEffectorVelocity):
    """Message class 'EndEffectorVelocity'."""

    __slots__ = [
        '_vx',
        '_vy',
        '_vz',
        '_wx',
        '_wy',
        '_wz',
    ]

    _fields_and_field_types = {
        'vx': 'float',
        'vy': 'float',
        'vz': 'float',
        'wx': 'float',
        'wy': 'float',
        'wz': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.vx = kwargs.get('vx', float())
        self.vy = kwargs.get('vy', float())
        self.vz = kwargs.get('vz', float())
        self.wx = kwargs.get('wx', float())
        self.wy = kwargs.get('wy', float())
        self.wz = kwargs.get('wz', float())

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
        if self.vx != other.vx:
            return False
        if self.vy != other.vy:
            return False
        if self.vz != other.vz:
            return False
        if self.wx != other.wx:
            return False
        if self.wy != other.wy:
            return False
        if self.wz != other.wz:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def vx(self):
        """Message field 'vx'."""
        return self._vx

    @vx.setter
    def vx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vx = value

    @builtins.property
    def vy(self):
        """Message field 'vy'."""
        return self._vy

    @vy.setter
    def vy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vy = value

    @builtins.property
    def vz(self):
        """Message field 'vz'."""
        return self._vz

    @vz.setter
    def vz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vz = value

    @builtins.property
    def wx(self):
        """Message field 'wx'."""
        return self._wx

    @wx.setter
    def wx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wx = value

    @builtins.property
    def wy(self):
        """Message field 'wy'."""
        return self._wy

    @wy.setter
    def wy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wy = value

    @builtins.property
    def wz(self):
        """Message field 'wz'."""
        return self._wz

    @wz.setter
    def wz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wz = value
