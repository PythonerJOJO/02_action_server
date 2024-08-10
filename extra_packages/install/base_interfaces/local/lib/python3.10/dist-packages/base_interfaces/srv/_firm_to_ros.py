# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfaces:srv/FirmToRos.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FirmToRos_Request(type):
    """Metaclass of message 'FirmToRos_Request'."""

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
            module = import_type_support('base_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'base_interfaces.srv.FirmToRos_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__firm_to_ros__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__firm_to_ros__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__firm_to_ros__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__firm_to_ros__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__firm_to_ros__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FirmToRos_Request(metaclass=Metaclass_FirmToRos_Request):
    """Message class 'FirmToRos_Request'."""

    __slots__ = [
        '_data2',
        '_data3',
        '_data4',
        '_data5',
    ]

    _fields_and_field_types = {
        'data2': 'string',
        'data3': 'string',
        'data4': 'string',
        'data5': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.data2 = kwargs.get('data2', str())
        self.data3 = kwargs.get('data3', str())
        self.data4 = kwargs.get('data4', str())
        self.data5 = kwargs.get('data5', str())

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
        if self.data2 != other.data2:
            return False
        if self.data3 != other.data3:
            return False
        if self.data4 != other.data4:
            return False
        if self.data5 != other.data5:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def data2(self):
        """Message field 'data2'."""
        return self._data2

    @data2.setter
    def data2(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'data2' field must be of type 'str'"
        self._data2 = value

    @builtins.property
    def data3(self):
        """Message field 'data3'."""
        return self._data3

    @data3.setter
    def data3(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'data3' field must be of type 'str'"
        self._data3 = value

    @builtins.property
    def data4(self):
        """Message field 'data4'."""
        return self._data4

    @data4.setter
    def data4(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'data4' field must be of type 'str'"
        self._data4 = value

    @builtins.property
    def data5(self):
        """Message field 'data5'."""
        return self._data5

    @data5.setter
    def data5(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'data5' field must be of type 'str'"
        self._data5 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FirmToRos_Response(type):
    """Metaclass of message 'FirmToRos_Response'."""

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
            module = import_type_support('base_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'base_interfaces.srv.FirmToRos_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__firm_to_ros__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__firm_to_ros__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__firm_to_ros__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__firm_to_ros__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__firm_to_ros__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FirmToRos_Response(metaclass=Metaclass_FirmToRos_Response):
    """Message class 'FirmToRos_Response'."""

    __slots__ = [
        '_node_id',
        '_result_msg',
    ]

    _fields_and_field_types = {
        'node_id': 'string',
        'result_msg': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.node_id = kwargs.get('node_id', str())
        self.result_msg = kwargs.get('result_msg', str())

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
        if self.node_id != other.node_id:
            return False
        if self.result_msg != other.result_msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def node_id(self):
        """Message field 'node_id'."""
        return self._node_id

    @node_id.setter
    def node_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'node_id' field must be of type 'str'"
        self._node_id = value

    @builtins.property
    def result_msg(self):
        """Message field 'result_msg'."""
        return self._result_msg

    @result_msg.setter
    def result_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'result_msg' field must be of type 'str'"
        self._result_msg = value


class Metaclass_FirmToRos(type):
    """Metaclass of service 'FirmToRos'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('base_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'base_interfaces.srv.FirmToRos')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__firm_to_ros

            from base_interfaces.srv import _firm_to_ros
            if _firm_to_ros.Metaclass_FirmToRos_Request._TYPE_SUPPORT is None:
                _firm_to_ros.Metaclass_FirmToRos_Request.__import_type_support__()
            if _firm_to_ros.Metaclass_FirmToRos_Response._TYPE_SUPPORT is None:
                _firm_to_ros.Metaclass_FirmToRos_Response.__import_type_support__()


class FirmToRos(metaclass=Metaclass_FirmToRos):
    from base_interfaces.srv._firm_to_ros import FirmToRos_Request as Request
    from base_interfaces.srv._firm_to_ros import FirmToRos_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
