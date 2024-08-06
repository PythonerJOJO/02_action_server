# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfaces:action/Angle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Angle_Goal(type):
    """Metaclass of message 'Angle_Goal'."""

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
                'base_interfaces.action.Angle_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__angle__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__angle__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__angle__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__angle__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__angle__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Angle_Goal(metaclass=Metaclass_Angle_Goal):
    """Message class 'Angle_Goal'."""

    __slots__ = [
        '_req_angle1',
        '_req_angle2',
        '_req_angle3',
        '_req_angle4',
        '_req_angle5',
        '_req_angle6',
    ]

    _fields_and_field_types = {
        'req_angle1': 'float',
        'req_angle2': 'float',
        'req_angle3': 'float',
        'req_angle4': 'float',
        'req_angle5': 'float',
        'req_angle6': 'float',
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
        self.req_angle1 = kwargs.get('req_angle1', float())
        self.req_angle2 = kwargs.get('req_angle2', float())
        self.req_angle3 = kwargs.get('req_angle3', float())
        self.req_angle4 = kwargs.get('req_angle4', float())
        self.req_angle5 = kwargs.get('req_angle5', float())
        self.req_angle6 = kwargs.get('req_angle6', float())

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
        if self.req_angle1 != other.req_angle1:
            return False
        if self.req_angle2 != other.req_angle2:
            return False
        if self.req_angle3 != other.req_angle3:
            return False
        if self.req_angle4 != other.req_angle4:
            return False
        if self.req_angle5 != other.req_angle5:
            return False
        if self.req_angle6 != other.req_angle6:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def req_angle1(self):
        """Message field 'req_angle1'."""
        return self._req_angle1

    @req_angle1.setter
    def req_angle1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'req_angle1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'req_angle1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._req_angle1 = value

    @builtins.property
    def req_angle2(self):
        """Message field 'req_angle2'."""
        return self._req_angle2

    @req_angle2.setter
    def req_angle2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'req_angle2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'req_angle2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._req_angle2 = value

    @builtins.property
    def req_angle3(self):
        """Message field 'req_angle3'."""
        return self._req_angle3

    @req_angle3.setter
    def req_angle3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'req_angle3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'req_angle3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._req_angle3 = value

    @builtins.property
    def req_angle4(self):
        """Message field 'req_angle4'."""
        return self._req_angle4

    @req_angle4.setter
    def req_angle4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'req_angle4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'req_angle4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._req_angle4 = value

    @builtins.property
    def req_angle5(self):
        """Message field 'req_angle5'."""
        return self._req_angle5

    @req_angle5.setter
    def req_angle5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'req_angle5' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'req_angle5' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._req_angle5 = value

    @builtins.property
    def req_angle6(self):
        """Message field 'req_angle6'."""
        return self._req_angle6

    @req_angle6.setter
    def req_angle6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'req_angle6' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'req_angle6' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._req_angle6 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_Angle_Result(type):
    """Metaclass of message 'Angle_Result'."""

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
                'base_interfaces.action.Angle_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__angle__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__angle__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__angle__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__angle__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__angle__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Angle_Result(metaclass=Metaclass_Angle_Result):
    """Message class 'Angle_Result'."""

    __slots__ = [
        '_current_angle1',
        '_current_angle2',
        '_current_angle3',
        '_current_angle4',
        '_current_angle5',
        '_current_angle6',
    ]

    _fields_and_field_types = {
        'current_angle1': 'float',
        'current_angle2': 'float',
        'current_angle3': 'float',
        'current_angle4': 'float',
        'current_angle5': 'float',
        'current_angle6': 'float',
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
        self.current_angle1 = kwargs.get('current_angle1', float())
        self.current_angle2 = kwargs.get('current_angle2', float())
        self.current_angle3 = kwargs.get('current_angle3', float())
        self.current_angle4 = kwargs.get('current_angle4', float())
        self.current_angle5 = kwargs.get('current_angle5', float())
        self.current_angle6 = kwargs.get('current_angle6', float())

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
        if self.current_angle1 != other.current_angle1:
            return False
        if self.current_angle2 != other.current_angle2:
            return False
        if self.current_angle3 != other.current_angle3:
            return False
        if self.current_angle4 != other.current_angle4:
            return False
        if self.current_angle5 != other.current_angle5:
            return False
        if self.current_angle6 != other.current_angle6:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_angle1(self):
        """Message field 'current_angle1'."""
        return self._current_angle1

    @current_angle1.setter
    def current_angle1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_angle1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_angle1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_angle1 = value

    @builtins.property
    def current_angle2(self):
        """Message field 'current_angle2'."""
        return self._current_angle2

    @current_angle2.setter
    def current_angle2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_angle2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_angle2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_angle2 = value

    @builtins.property
    def current_angle3(self):
        """Message field 'current_angle3'."""
        return self._current_angle3

    @current_angle3.setter
    def current_angle3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_angle3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_angle3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_angle3 = value

    @builtins.property
    def current_angle4(self):
        """Message field 'current_angle4'."""
        return self._current_angle4

    @current_angle4.setter
    def current_angle4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_angle4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_angle4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_angle4 = value

    @builtins.property
    def current_angle5(self):
        """Message field 'current_angle5'."""
        return self._current_angle5

    @current_angle5.setter
    def current_angle5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_angle5' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_angle5' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_angle5 = value

    @builtins.property
    def current_angle6(self):
        """Message field 'current_angle6'."""
        return self._current_angle6

    @current_angle6.setter
    def current_angle6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_angle6' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_angle6' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_angle6 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_Angle_Feedback(type):
    """Metaclass of message 'Angle_Feedback'."""

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
                'base_interfaces.action.Angle_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__angle__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__angle__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__angle__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__angle__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__angle__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Angle_Feedback(metaclass=Metaclass_Angle_Feedback):
    """Message class 'Angle_Feedback'."""

    __slots__ = [
        '_feedback_angle1',
        '_feedback_angle2',
        '_feedback_angle3',
        '_feedback_angle4',
        '_feedback_angle5',
        '_feedback_angle6',
    ]

    _fields_and_field_types = {
        'feedback_angle1': 'float',
        'feedback_angle2': 'float',
        'feedback_angle3': 'float',
        'feedback_angle4': 'float',
        'feedback_angle5': 'float',
        'feedback_angle6': 'float',
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
        self.feedback_angle1 = kwargs.get('feedback_angle1', float())
        self.feedback_angle2 = kwargs.get('feedback_angle2', float())
        self.feedback_angle3 = kwargs.get('feedback_angle3', float())
        self.feedback_angle4 = kwargs.get('feedback_angle4', float())
        self.feedback_angle5 = kwargs.get('feedback_angle5', float())
        self.feedback_angle6 = kwargs.get('feedback_angle6', float())

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
        if self.feedback_angle1 != other.feedback_angle1:
            return False
        if self.feedback_angle2 != other.feedback_angle2:
            return False
        if self.feedback_angle3 != other.feedback_angle3:
            return False
        if self.feedback_angle4 != other.feedback_angle4:
            return False
        if self.feedback_angle5 != other.feedback_angle5:
            return False
        if self.feedback_angle6 != other.feedback_angle6:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def feedback_angle1(self):
        """Message field 'feedback_angle1'."""
        return self._feedback_angle1

    @feedback_angle1.setter
    def feedback_angle1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'feedback_angle1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'feedback_angle1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._feedback_angle1 = value

    @builtins.property
    def feedback_angle2(self):
        """Message field 'feedback_angle2'."""
        return self._feedback_angle2

    @feedback_angle2.setter
    def feedback_angle2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'feedback_angle2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'feedback_angle2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._feedback_angle2 = value

    @builtins.property
    def feedback_angle3(self):
        """Message field 'feedback_angle3'."""
        return self._feedback_angle3

    @feedback_angle3.setter
    def feedback_angle3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'feedback_angle3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'feedback_angle3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._feedback_angle3 = value

    @builtins.property
    def feedback_angle4(self):
        """Message field 'feedback_angle4'."""
        return self._feedback_angle4

    @feedback_angle4.setter
    def feedback_angle4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'feedback_angle4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'feedback_angle4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._feedback_angle4 = value

    @builtins.property
    def feedback_angle5(self):
        """Message field 'feedback_angle5'."""
        return self._feedback_angle5

    @feedback_angle5.setter
    def feedback_angle5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'feedback_angle5' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'feedback_angle5' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._feedback_angle5 = value

    @builtins.property
    def feedback_angle6(self):
        """Message field 'feedback_angle6'."""
        return self._feedback_angle6

    @feedback_angle6.setter
    def feedback_angle6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'feedback_angle6' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'feedback_angle6' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._feedback_angle6 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Angle_SendGoal_Request(type):
    """Metaclass of message 'Angle_SendGoal_Request'."""

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
                'base_interfaces.action.Angle_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__angle__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__angle__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__angle__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__angle__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__angle__send_goal__request

            from base_interfaces.action import Angle
            if Angle.Goal.__class__._TYPE_SUPPORT is None:
                Angle.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Angle_SendGoal_Request(metaclass=Metaclass_Angle_SendGoal_Request):
    """Message class 'Angle_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'base_interfaces/Angle_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['base_interfaces', 'action'], 'Angle_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from base_interfaces.action._angle import Angle_Goal
        self.goal = kwargs.get('goal', Angle_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from base_interfaces.action._angle import Angle_Goal
            assert \
                isinstance(value, Angle_Goal), \
                "The 'goal' field must be a sub message of type 'Angle_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Angle_SendGoal_Response(type):
    """Metaclass of message 'Angle_SendGoal_Response'."""

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
                'base_interfaces.action.Angle_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__angle__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__angle__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__angle__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__angle__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__angle__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Angle_SendGoal_Response(metaclass=Metaclass_Angle_SendGoal_Response):
    """Message class 'Angle_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

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


class Metaclass_Angle_SendGoal(type):
    """Metaclass of service 'Angle_SendGoal'."""

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
                'base_interfaces.action.Angle_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__angle__send_goal

            from base_interfaces.action import _angle
            if _angle.Metaclass_Angle_SendGoal_Request._TYPE_SUPPORT is None:
                _angle.Metaclass_Angle_SendGoal_Request.__import_type_support__()
            if _angle.Metaclass_Angle_SendGoal_Response._TYPE_SUPPORT is None:
                _angle.Metaclass_Angle_SendGoal_Response.__import_type_support__()


class Angle_SendGoal(metaclass=Metaclass_Angle_SendGoal):
    from base_interfaces.action._angle import Angle_SendGoal_Request as Request
    from base_interfaces.action._angle import Angle_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Angle_GetResult_Request(type):
    """Metaclass of message 'Angle_GetResult_Request'."""

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
                'base_interfaces.action.Angle_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__angle__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__angle__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__angle__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__angle__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__angle__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Angle_GetResult_Request(metaclass=Metaclass_Angle_GetResult_Request):
    """Message class 'Angle_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Angle_GetResult_Response(type):
    """Metaclass of message 'Angle_GetResult_Response'."""

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
                'base_interfaces.action.Angle_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__angle__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__angle__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__angle__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__angle__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__angle__get_result__response

            from base_interfaces.action import Angle
            if Angle.Result.__class__._TYPE_SUPPORT is None:
                Angle.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Angle_GetResult_Response(metaclass=Metaclass_Angle_GetResult_Response):
    """Message class 'Angle_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'base_interfaces/Angle_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['base_interfaces', 'action'], 'Angle_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from base_interfaces.action._angle import Angle_Result
        self.result = kwargs.get('result', Angle_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from base_interfaces.action._angle import Angle_Result
            assert \
                isinstance(value, Angle_Result), \
                "The 'result' field must be a sub message of type 'Angle_Result'"
        self._result = value


class Metaclass_Angle_GetResult(type):
    """Metaclass of service 'Angle_GetResult'."""

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
                'base_interfaces.action.Angle_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__angle__get_result

            from base_interfaces.action import _angle
            if _angle.Metaclass_Angle_GetResult_Request._TYPE_SUPPORT is None:
                _angle.Metaclass_Angle_GetResult_Request.__import_type_support__()
            if _angle.Metaclass_Angle_GetResult_Response._TYPE_SUPPORT is None:
                _angle.Metaclass_Angle_GetResult_Response.__import_type_support__()


class Angle_GetResult(metaclass=Metaclass_Angle_GetResult):
    from base_interfaces.action._angle import Angle_GetResult_Request as Request
    from base_interfaces.action._angle import Angle_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Angle_FeedbackMessage(type):
    """Metaclass of message 'Angle_FeedbackMessage'."""

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
                'base_interfaces.action.Angle_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__angle__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__angle__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__angle__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__angle__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__angle__feedback_message

            from base_interfaces.action import Angle
            if Angle.Feedback.__class__._TYPE_SUPPORT is None:
                Angle.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Angle_FeedbackMessage(metaclass=Metaclass_Angle_FeedbackMessage):
    """Message class 'Angle_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'base_interfaces/Angle_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['base_interfaces', 'action'], 'Angle_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from base_interfaces.action._angle import Angle_Feedback
        self.feedback = kwargs.get('feedback', Angle_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from base_interfaces.action._angle import Angle_Feedback
            assert \
                isinstance(value, Angle_Feedback), \
                "The 'feedback' field must be a sub message of type 'Angle_Feedback'"
        self._feedback = value


class Metaclass_Angle(type):
    """Metaclass of action 'Angle'."""

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
                'base_interfaces.action.Angle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__angle

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from base_interfaces.action import _angle
            if _angle.Metaclass_Angle_SendGoal._TYPE_SUPPORT is None:
                _angle.Metaclass_Angle_SendGoal.__import_type_support__()
            if _angle.Metaclass_Angle_GetResult._TYPE_SUPPORT is None:
                _angle.Metaclass_Angle_GetResult.__import_type_support__()
            if _angle.Metaclass_Angle_FeedbackMessage._TYPE_SUPPORT is None:
                _angle.Metaclass_Angle_FeedbackMessage.__import_type_support__()


class Angle(metaclass=Metaclass_Angle):

    # The goal message defined in the action definition.
    from base_interfaces.action._angle import Angle_Goal as Goal
    # The result message defined in the action definition.
    from base_interfaces.action._angle import Angle_Result as Result
    # The feedback message defined in the action definition.
    from base_interfaces.action._angle import Angle_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from base_interfaces.action._angle import Angle_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from base_interfaces.action._angle import Angle_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from base_interfaces.action._angle import Angle_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
