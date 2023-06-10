# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dynamixel_sdk_inf:srv/SetMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'motor_ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetMode_Request(type):
    """Metaclass of message 'SetMode_Request'."""

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
            module = import_type_support('dynamixel_sdk_inf')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dynamixel_sdk_inf.srv.SetMode_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_mode__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_mode__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_mode__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_mode__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_mode__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetMode_Request(metaclass=Metaclass_SetMode_Request):
    """Message class 'SetMode_Request'."""

    __slots__ = [
        '_motor_ids',
    ]

    _fields_and_field_types = {
        'motor_ids': 'sequence<uint8, 5>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('uint8'), 5),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motor_ids = array.array('B', kwargs.get('motor_ids', []))

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
        if self.motor_ids != other.motor_ids:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def motor_ids(self):
        """Message field 'motor_ids'."""
        return self._motor_ids

    @motor_ids.setter
    def motor_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'motor_ids' array.array() must have the type code of 'B'"
            assert len(value) <= 5, \
                "The 'motor_ids' array.array() must have a size <= 5"
            self._motor_ids = value
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
                 len(value) <= 5 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'motor_ids' field must be a set or sequence with length <= 5 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._motor_ids = array.array('B', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetMode_Response(type):
    """Metaclass of message 'SetMode_Response'."""

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
            module = import_type_support('dynamixel_sdk_inf')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dynamixel_sdk_inf.srv.SetMode_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_mode__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_mode__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_mode__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_mode__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_mode__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetMode_Response(metaclass=Metaclass_SetMode_Response):
    """Message class 'SetMode_Response'."""

    __slots__ = [
        '_torque_mode',
    ]

    _fields_and_field_types = {
        'torque_mode': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.torque_mode = kwargs.get('torque_mode', int())

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
        if self.torque_mode != other.torque_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def torque_mode(self):
        """Message field 'torque_mode'."""
        return self._torque_mode

    @torque_mode.setter
    def torque_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'torque_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'torque_mode' field must be an integer in [-2147483648, 2147483647]"
        self._torque_mode = value


class Metaclass_SetMode(type):
    """Metaclass of service 'SetMode'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dynamixel_sdk_inf')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dynamixel_sdk_inf.srv.SetMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_mode

            from dynamixel_sdk_inf.srv import _set_mode
            if _set_mode.Metaclass_SetMode_Request._TYPE_SUPPORT is None:
                _set_mode.Metaclass_SetMode_Request.__import_type_support__()
            if _set_mode.Metaclass_SetMode_Response._TYPE_SUPPORT is None:
                _set_mode.Metaclass_SetMode_Response.__import_type_support__()


class SetMode(metaclass=Metaclass_SetMode):
    from dynamixel_sdk_inf.srv._set_mode import SetMode_Request as Request
    from dynamixel_sdk_inf.srv._set_mode import SetMode_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
