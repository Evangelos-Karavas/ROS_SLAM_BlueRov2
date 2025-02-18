// Generated by gencpp from file fiducial_msgs/InitializeMapRequest.msg
// DO NOT EDIT!


#ifndef FIDUCIAL_MSGS_MESSAGE_INITIALIZEMAPREQUEST_H
#define FIDUCIAL_MSGS_MESSAGE_INITIALIZEMAPREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <fiducial_msgs/FiducialMapEntryArray.h>

namespace fiducial_msgs
{
template <class ContainerAllocator>
struct InitializeMapRequest_
{
  typedef InitializeMapRequest_<ContainerAllocator> Type;

  InitializeMapRequest_()
    : fiducials()  {
    }
  InitializeMapRequest_(const ContainerAllocator& _alloc)
    : fiducials(_alloc)  {
  (void)_alloc;
    }



   typedef  ::fiducial_msgs::FiducialMapEntryArray_<ContainerAllocator>  _fiducials_type;
  _fiducials_type fiducials;





  typedef boost::shared_ptr< ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator> const> ConstPtr;

}; // struct InitializeMapRequest_

typedef ::fiducial_msgs::InitializeMapRequest_<std::allocator<void> > InitializeMapRequest;

typedef boost::shared_ptr< ::fiducial_msgs::InitializeMapRequest > InitializeMapRequestPtr;
typedef boost::shared_ptr< ::fiducial_msgs::InitializeMapRequest const> InitializeMapRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator1> & lhs, const ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator2> & rhs)
{
  return lhs.fiducials == rhs.fiducials;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator1> & lhs, const ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace fiducial_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "af3be60cc8712d87e234a795a01490e4";
  }

  static const char* value(const ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaf3be60cc8712d87ULL;
  static const uint64_t static_value2 = 0xe234a795a01490e4ULL;
};

template<class ContainerAllocator>
struct DataType< ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fiducial_msgs/InitializeMapRequest";
  }

  static const char* value(const ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "FiducialMapEntryArray fiducials\n"
"\n"
"================================================================================\n"
"MSG: fiducial_msgs/FiducialMapEntryArray\n"
"FiducialMapEntry[] fiducials\n"
"\n"
"================================================================================\n"
"MSG: fiducial_msgs/FiducialMapEntry\n"
"# pose of a fiducial\n"
"int32 fiducial_id\n"
"# translation\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"# rotation\n"
"float64 rx\n"
"float64 ry\n"
"float64 rz\n"
"\n"
;
  }

  static const char* value(const ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.fiducials);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InitializeMapRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::fiducial_msgs::InitializeMapRequest_<ContainerAllocator>& v)
  {
    s << indent << "fiducials: ";
    s << std::endl;
    Printer< ::fiducial_msgs::FiducialMapEntryArray_<ContainerAllocator> >::stream(s, indent + "  ", v.fiducials);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FIDUCIAL_MSGS_MESSAGE_INITIALIZEMAPREQUEST_H
