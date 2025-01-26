// Generated by gencpp from file fiducial_msgs/FiducialTransform.msg
// DO NOT EDIT!


#ifndef FIDUCIAL_MSGS_MESSAGE_FIDUCIALTRANSFORM_H
#define FIDUCIAL_MSGS_MESSAGE_FIDUCIALTRANSFORM_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Transform.h>

namespace fiducial_msgs
{
template <class ContainerAllocator>
struct FiducialTransform_
{
  typedef FiducialTransform_<ContainerAllocator> Type;

  FiducialTransform_()
    : fiducial_id(0)
    , transform()
    , image_error(0.0)
    , object_error(0.0)
    , fiducial_area(0.0)  {
    }
  FiducialTransform_(const ContainerAllocator& _alloc)
    : fiducial_id(0)
    , transform(_alloc)
    , image_error(0.0)
    , object_error(0.0)
    , fiducial_area(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _fiducial_id_type;
  _fiducial_id_type fiducial_id;

   typedef  ::geometry_msgs::Transform_<ContainerAllocator>  _transform_type;
  _transform_type transform;

   typedef double _image_error_type;
  _image_error_type image_error;

   typedef double _object_error_type;
  _object_error_type object_error;

   typedef double _fiducial_area_type;
  _fiducial_area_type fiducial_area;





  typedef boost::shared_ptr< ::fiducial_msgs::FiducialTransform_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fiducial_msgs::FiducialTransform_<ContainerAllocator> const> ConstPtr;

}; // struct FiducialTransform_

typedef ::fiducial_msgs::FiducialTransform_<std::allocator<void> > FiducialTransform;

typedef boost::shared_ptr< ::fiducial_msgs::FiducialTransform > FiducialTransformPtr;
typedef boost::shared_ptr< ::fiducial_msgs::FiducialTransform const> FiducialTransformConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::fiducial_msgs::FiducialTransform_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::fiducial_msgs::FiducialTransform_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::fiducial_msgs::FiducialTransform_<ContainerAllocator1> & lhs, const ::fiducial_msgs::FiducialTransform_<ContainerAllocator2> & rhs)
{
  return lhs.fiducial_id == rhs.fiducial_id &&
    lhs.transform == rhs.transform &&
    lhs.image_error == rhs.image_error &&
    lhs.object_error == rhs.object_error &&
    lhs.fiducial_area == rhs.fiducial_area;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::fiducial_msgs::FiducialTransform_<ContainerAllocator1> & lhs, const ::fiducial_msgs::FiducialTransform_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace fiducial_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::fiducial_msgs::FiducialTransform_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fiducial_msgs::FiducialTransform_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fiducial_msgs::FiducialTransform_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fiducial_msgs::FiducialTransform_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fiducial_msgs::FiducialTransform_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fiducial_msgs::FiducialTransform_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::fiducial_msgs::FiducialTransform_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9f77f4c92fda876d2249ffbc19859044";
  }

  static const char* value(const ::fiducial_msgs::FiducialTransform_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9f77f4c92fda876dULL;
  static const uint64_t static_value2 = 0x2249ffbc19859044ULL;
};

template<class ContainerAllocator>
struct DataType< ::fiducial_msgs::FiducialTransform_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fiducial_msgs/FiducialTransform";
  }

  static const char* value(const ::fiducial_msgs::FiducialTransform_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::fiducial_msgs::FiducialTransform_<ContainerAllocator> >
{
  static const char* value()
  {
    return " # A camera to fiducial transform with supporting data\n"
" int32 fiducial_id\n"
" geometry_msgs/Transform transform\n"
" float64 image_error\n"
" float64 object_error\n"
" float64 fiducial_area\n"
"================================================================================\n"
"MSG: geometry_msgs/Transform\n"
"# This represents the transform between two coordinate frames in free space.\n"
"\n"
"Vector3 translation\n"
"Quaternion rotation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::fiducial_msgs::FiducialTransform_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::fiducial_msgs::FiducialTransform_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.fiducial_id);
      stream.next(m.transform);
      stream.next(m.image_error);
      stream.next(m.object_error);
      stream.next(m.fiducial_area);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FiducialTransform_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fiducial_msgs::FiducialTransform_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::fiducial_msgs::FiducialTransform_<ContainerAllocator>& v)
  {
    s << indent << "fiducial_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.fiducial_id);
    s << indent << "transform: ";
    s << std::endl;
    Printer< ::geometry_msgs::Transform_<ContainerAllocator> >::stream(s, indent + "  ", v.transform);
    s << indent << "image_error: ";
    Printer<double>::stream(s, indent + "  ", v.image_error);
    s << indent << "object_error: ";
    Printer<double>::stream(s, indent + "  ", v.object_error);
    s << indent << "fiducial_area: ";
    Printer<double>::stream(s, indent + "  ", v.fiducial_area);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FIDUCIAL_MSGS_MESSAGE_FIDUCIALTRANSFORM_H
