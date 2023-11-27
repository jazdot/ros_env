// Generated by gencpp from file distance_converter/DistanceConversionResponse.msg
// DO NOT EDIT!


#ifndef DISTANCE_CONVERTER_MESSAGE_DISTANCECONVERSIONRESPONSE_H
#define DISTANCE_CONVERTER_MESSAGE_DISTANCECONVERSIONRESPONSE_H


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
struct DistanceConversionResponse_
{
  typedef DistanceConversionResponse_<ContainerAllocator> Type;

  DistanceConversionResponse_()
    : converted_distance_in_mm(0.0)  {
    }
  DistanceConversionResponse_(const ContainerAllocator& _alloc)
    : converted_distance_in_mm(0.0)  {
  (void)_alloc;
    }



   typedef double _converted_distance_in_mm_type;
  _converted_distance_in_mm_type converted_distance_in_mm;





  typedef boost::shared_ptr< ::distance_converter::DistanceConversionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::distance_converter::DistanceConversionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct DistanceConversionResponse_

typedef ::distance_converter::DistanceConversionResponse_<std::allocator<void> > DistanceConversionResponse;

typedef boost::shared_ptr< ::distance_converter::DistanceConversionResponse > DistanceConversionResponsePtr;
typedef boost::shared_ptr< ::distance_converter::DistanceConversionResponse const> DistanceConversionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::distance_converter::DistanceConversionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::distance_converter::DistanceConversionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::distance_converter::DistanceConversionResponse_<ContainerAllocator1> & lhs, const ::distance_converter::DistanceConversionResponse_<ContainerAllocator2> & rhs)
{
  return lhs.converted_distance_in_mm == rhs.converted_distance_in_mm;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::distance_converter::DistanceConversionResponse_<ContainerAllocator1> & lhs, const ::distance_converter::DistanceConversionResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace distance_converter

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::distance_converter::DistanceConversionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::distance_converter::DistanceConversionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::distance_converter::DistanceConversionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::distance_converter::DistanceConversionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::distance_converter::DistanceConversionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::distance_converter::DistanceConversionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::distance_converter::DistanceConversionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "016b15d6273beaa8c3d77b9cfa64f8a5";
  }

  static const char* value(const ::distance_converter::DistanceConversionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x016b15d6273beaa8ULL;
  static const uint64_t static_value2 = 0xc3d77b9cfa64f8a5ULL;
};

template<class ContainerAllocator>
struct DataType< ::distance_converter::DistanceConversionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "distance_converter/DistanceConversionResponse";
  }

  static const char* value(const ::distance_converter::DistanceConversionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::distance_converter::DistanceConversionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 converted_distance_in_mm\n"
"\n"
;
  }

  static const char* value(const ::distance_converter::DistanceConversionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::distance_converter::DistanceConversionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.converted_distance_in_mm);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DistanceConversionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::distance_converter::DistanceConversionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::distance_converter::DistanceConversionResponse_<ContainerAllocator>& v)
  {
    s << indent << "converted_distance_in_mm: ";
    Printer<double>::stream(s, indent + "  ", v.converted_distance_in_mm);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DISTANCE_CONVERTER_MESSAGE_DISTANCECONVERSIONRESPONSE_H