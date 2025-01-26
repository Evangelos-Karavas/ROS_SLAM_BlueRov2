# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from fiducial_msgs/FiducialMapEntryArray.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import fiducial_msgs.msg

class FiducialMapEntryArray(genpy.Message):
  _md5sum = "f3d7e1cb2717bda61be54acdb77f4f79"
  _type = "fiducial_msgs/FiducialMapEntryArray"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """FiducialMapEntry[] fiducials

================================================================================
MSG: fiducial_msgs/FiducialMapEntry
# pose of a fiducial
int32 fiducial_id
# translation
float64 x
float64 y
float64 z
# rotation
float64 rx
float64 ry
float64 rz

"""
  __slots__ = ['fiducials']
  _slot_types = ['fiducial_msgs/FiducialMapEntry[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       fiducials

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(FiducialMapEntryArray, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.fiducials is None:
        self.fiducials = []
    else:
      self.fiducials = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.fiducials)
      buff.write(_struct_I.pack(length))
      for val1 in self.fiducials:
        _x = val1
        buff.write(_get_struct_i6d().pack(_x.fiducial_id, _x.x, _x.y, _x.z, _x.rx, _x.ry, _x.rz))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.fiducials is None:
        self.fiducials = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.fiducials = []
      for i in range(0, length):
        val1 = fiducial_msgs.msg.FiducialMapEntry()
        _x = val1
        start = end
        end += 52
        (_x.fiducial_id, _x.x, _x.y, _x.z, _x.rx, _x.ry, _x.rz,) = _get_struct_i6d().unpack(str[start:end])
        self.fiducials.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.fiducials)
      buff.write(_struct_I.pack(length))
      for val1 in self.fiducials:
        _x = val1
        buff.write(_get_struct_i6d().pack(_x.fiducial_id, _x.x, _x.y, _x.z, _x.rx, _x.ry, _x.rz))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.fiducials is None:
        self.fiducials = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.fiducials = []
      for i in range(0, length):
        val1 = fiducial_msgs.msg.FiducialMapEntry()
        _x = val1
        start = end
        end += 52
        (_x.fiducial_id, _x.x, _x.y, _x.z, _x.rx, _x.ry, _x.rz,) = _get_struct_i6d().unpack(str[start:end])
        self.fiducials.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_i6d = None
def _get_struct_i6d():
    global _struct_i6d
    if _struct_i6d is None:
        _struct_i6d = struct.Struct("<i6d")
    return _struct_i6d
