// Generated by gencpp from file uuv_control_msgs/SetMBSMControllerParamsRequest.msg
// DO NOT EDIT!


#ifndef UUV_CONTROL_MSGS_MESSAGE_SETMBSMCONTROLLERPARAMSREQUEST_H
#define UUV_CONTROL_MSGS_MESSAGE_SETMBSMCONTROLLERPARAMSREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace uuv_control_msgs
{
template <class ContainerAllocator>
struct SetMBSMControllerParamsRequest_
{
  typedef SetMBSMControllerParamsRequest_<ContainerAllocator> Type;

  SetMBSMControllerParamsRequest_()
    : lambda()
    , rho_constant()
    , k()
    , c()
    , adapt_slope()
    , rho_0()
    , drift_prevent(0.0)  {
    }
  SetMBSMControllerParamsRequest_(const ContainerAllocator& _alloc)
    : lambda(_alloc)
    , rho_constant(_alloc)
    , k(_alloc)
    , c(_alloc)
    , adapt_slope(_alloc)
    , rho_0(_alloc)
    , drift_prevent(0.0)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _lambda_type;
  _lambda_type lambda;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _rho_constant_type;
  _rho_constant_type rho_constant;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _k_type;
  _k_type k;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _c_type;
  _c_type c;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _adapt_slope_type;
  _adapt_slope_type adapt_slope;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _rho_0_type;
  _rho_0_type rho_0;

   typedef double _drift_prevent_type;
  _drift_prevent_type drift_prevent;





  typedef boost::shared_ptr< ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetMBSMControllerParamsRequest_

typedef ::uuv_control_msgs::SetMBSMControllerParamsRequest_<std::allocator<void> > SetMBSMControllerParamsRequest;

typedef boost::shared_ptr< ::uuv_control_msgs::SetMBSMControllerParamsRequest > SetMBSMControllerParamsRequestPtr;
typedef boost::shared_ptr< ::uuv_control_msgs::SetMBSMControllerParamsRequest const> SetMBSMControllerParamsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator1> & lhs, const ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.lambda == rhs.lambda &&
    lhs.rho_constant == rhs.rho_constant &&
    lhs.k == rhs.k &&
    lhs.c == rhs.c &&
    lhs.adapt_slope == rhs.adapt_slope &&
    lhs.rho_0 == rhs.rho_0 &&
    lhs.drift_prevent == rhs.drift_prevent;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator1> & lhs, const ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace uuv_control_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7293aecc8487ffe3e998814d65aa6940";
  }

  static const char* value(const ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7293aecc8487ffe3ULL;
  static const uint64_t static_value2 = 0xe998814d65aa6940ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_control_msgs/SetMBSMControllerParamsRequest";
  }

  static const char* value(const ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Copyright (c) 2016 The UUV Simulator Authors.\n"
"# All rights reserved.\n"
"#\n"
"# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"# you may not use this file except in compliance with the License.\n"
"# You may obtain a copy of the License at\n"
"#\n"
"#     http://www.apache.org/licenses/LICENSE-2.0\n"
"#\n"
"# Unless required by applicable law or agreed to in writing, software\n"
"# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"# See the License for the specific language governing permissions and\n"
"# limitations under the License.\n"
"\n"
"float64[] lambda\n"
"float64[] rho_constant\n"
"float64[] k\n"
"float64[] c\n"
"float64[] adapt_slope\n"
"float64[] rho_0\n"
"float64 drift_prevent\n"
;
  }

  static const char* value(const ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.lambda);
      stream.next(m.rho_constant);
      stream.next(m.k);
      stream.next(m.c);
      stream.next(m.adapt_slope);
      stream.next(m.rho_0);
      stream.next(m.drift_prevent);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetMBSMControllerParamsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_control_msgs::SetMBSMControllerParamsRequest_<ContainerAllocator>& v)
  {
    s << indent << "lambda[]" << std::endl;
    for (size_t i = 0; i < v.lambda.size(); ++i)
    {
      s << indent << "  lambda[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.lambda[i]);
    }
    s << indent << "rho_constant[]" << std::endl;
    for (size_t i = 0; i < v.rho_constant.size(); ++i)
    {
      s << indent << "  rho_constant[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.rho_constant[i]);
    }
    s << indent << "k[]" << std::endl;
    for (size_t i = 0; i < v.k.size(); ++i)
    {
      s << indent << "  k[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.k[i]);
    }
    s << indent << "c[]" << std::endl;
    for (size_t i = 0; i < v.c.size(); ++i)
    {
      s << indent << "  c[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.c[i]);
    }
    s << indent << "adapt_slope[]" << std::endl;
    for (size_t i = 0; i < v.adapt_slope.size(); ++i)
    {
      s << indent << "  adapt_slope[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.adapt_slope[i]);
    }
    s << indent << "rho_0[]" << std::endl;
    for (size_t i = 0; i < v.rho_0.size(); ++i)
    {
      s << indent << "  rho_0[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.rho_0[i]);
    }
    s << indent << "drift_prevent: ";
    Printer<double>::stream(s, indent + "  ", v.drift_prevent);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_CONTROL_MSGS_MESSAGE_SETMBSMCONTROLLERPARAMSREQUEST_H
