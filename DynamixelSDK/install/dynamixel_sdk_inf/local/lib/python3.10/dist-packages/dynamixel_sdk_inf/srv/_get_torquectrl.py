# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dynamixel_sdk_inf:srv/GetTorquectrl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetTorquectrl_Request(type):
    """Metaclass of message 'GetTorquectrl_Request'."""

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
                'dynamixel_sdk_inf.srv.GetTorquectrl_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_torquectrl__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_torquectrl__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_torquectrl__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_torquectrl__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_torquectrl__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetTorquectrl_Request(metaclass=Metaclass_GetTorquectrl_Request):
    """Message class 'GetTorquectrl_Request'."""

    __slots__ = [
        '_id',
    ]

    _fields_and_field_types = {
        'id': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())

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
        if self.id != other.id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id' field must be an unsigned integer in [0, 255]"
        self._id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetTorquectrl_Response(type):
    """Metaclass of message 'GetTorquectrl_Response'."""

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
                'dynamixel_sdk_inf.srv.GetTorquectrl_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_torquectrl__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_torquectrl__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_torquectrl__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_torquectrl__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_torquectrl__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetTorquectrl_Response(metaclass=Metaclass_GetTorquectrl_Response):
    """Message class 'GetTorquectrl_Response'."""

    __slots__ = [
        '_torque',
    ]

    _fields_and_field_types = {
        'torque': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.torque = kwargs.get('torque', int())

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
        if self.torque != other.torque:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def torque(self):
        """Message field 'torque'."""
        return self._torque

    @torque.setter
    def torque(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'torque' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'torque' field must be an integer in [-2147483648, 2147483647]"
        self._torque = value


class Metaclass_GetTorquectrl(type):
    """Metaclass of service 'GetTorquectrl'."""

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
                'dynamixel_sdk_inf.srv.GetTorquectrl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_torquectrl

            from dynamixel_sdk_inf.srv import _get_torquectrl
            if _get_torquectrl.Metaclass_GetTorquectrl_Request._TYPE_SUPPORT is None:
                _get_torquectrl.Metaclass_GetTorquectrl_Request.__import_type_support__()
            if _get_torquectrl.Metaclass_GetTorquectrl_Response._TYPE_SUPPORT is None:
                _get_torquectrl.Metaclass_GetTorquectrl_Response.__import_type_support__()


class GetTorquectrl(metaclass=Metaclass_GetTorquectrl):
    from dynamixel_sdk_inf.srv._get_torquectrl import GetTorquectrl_Request as Request
    from dynamixel_sdk_inf.srv._get_torquectrl import GetTorquectrl_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
