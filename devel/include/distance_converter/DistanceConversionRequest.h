// Generated by gencpp from file distance_converter/DistanceConversionRequest.msg
// DO NOT EDIT!


#ifndef DISTANCE_CONVERTER_MESSAGE_DISTANCECONVERSIONREQUEST_H
#define DISTANCE_CONVERTER_MESSAGE_DISTANCECONVERSIONREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace distance_converter
{
template <class ContainerAllocator>
struct DistanceConversionRequest_
{
  typedef DistanceConversionRequest_<ContainerAllocator> Type;

  DistanceConversionRequest_()
    : distance_in_cm(0.0)  {
    }
  DistanceConversionRequest_(const ContainerAllocator& _alloc)
    : distance_in_cm(0.0)  {
  (void)_alloc;
    }



   typedef double _distance_in_cm_type;
  _distance_in_cm_type distance_in_cm;





  typedef boost::shared_ptr< ::distance_converter::DistanceConversionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::distance_converter::DistanceConversionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DistanceConversionRequest_

typedef ::distance_converter::DistanceConversionRequest_<std::allocator<void> > DistanceConversionRequest;

typedef boost::shared_ptr< ::distance_converter::DistanceConversionRequest > DistanceConversionRequestPtr;
typedef boost::shared_ptr< ::distance_converter::DistanceConversionRequest const> DistanceConversionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::distance_converter::DistanceConversionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::distance_converter::DistanceConversionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::distance_converter::DistanceConversionRequest_<ContainerAllocator1> & lhs, const ::distance_converter::DistanceConversionRequest_<ContainerAllocator2> & rhs)
{
  return lhs.distance_in_cm == rhs.distance_in_cm;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::distance_converter::DistanceConversionRequest_<ContainerAllocator1> & lhs, const ::distance_converter::DistanceConversionRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace distance_converter

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::distance_converter::DistanceConversionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::distance_converter::DistanceConversionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::distance_converter::DistanceConversionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::distance_converter::DistanceConversionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::distance_converter::DistanceConversionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::distance_converter::DistanceConversionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::distance_converter::DistanceConversionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f9c491f2fd3247fdfdb3898394da618e";
  }

  static const char* value(const ::distance_converter::DistanceConversionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf9c491f2fd3247fdULL;
  static const uint64_t static_value2 = 0xfdb3898394da618eULL;
};

template<class ContainerAllocator>
struct DataType< ::distance_converter::DistanceConversionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "distance_converter/DistanceConversionRequest";
  }

  static const char* value(const ::distance_converter::DistanceConversionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::distance_converter::DistanceConversionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 distance_in_cm\n"
;
  }

  static const char* value(const ::distance_converter::DistanceConversionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::distance_converter::DistanceConversionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.distance_in_cm);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DistanceConversionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::distance_converter::DistanceConversionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::distance_converter::DistanceConversionRequest_<ContainerAllocator>& v)
  {
    s << indent << "distance_in_cm: ";
    Printer<double>::stream(s, indent + "  ", v.distance_in_cm);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DISTANCE_CONVERTER_MESSAGE_DISTANCECONVERSIONREQUEST_H
