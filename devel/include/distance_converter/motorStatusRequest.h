// Generated by gencpp from file distance_converter/motorStatusRequest.msg
// DO NOT EDIT!


#ifndef DISTANCE_CONVERTER_MESSAGE_MOTORSTATUSREQUEST_H
#define DISTANCE_CONVERTER_MESSAGE_MOTORSTATUSREQUEST_H


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
struct motorStatusRequest_
{
  typedef motorStatusRequest_<ContainerAllocator> Type;

  motorStatusRequest_()
    {
    }
  motorStatusRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::distance_converter::motorStatusRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::distance_converter::motorStatusRequest_<ContainerAllocator> const> ConstPtr;

}; // struct motorStatusRequest_

typedef ::distance_converter::motorStatusRequest_<std::allocator<void> > motorStatusRequest;

typedef boost::shared_ptr< ::distance_converter::motorStatusRequest > motorStatusRequestPtr;
typedef boost::shared_ptr< ::distance_converter::motorStatusRequest const> motorStatusRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::distance_converter::motorStatusRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::distance_converter::motorStatusRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace distance_converter

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::distance_converter::motorStatusRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::distance_converter::motorStatusRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::distance_converter::motorStatusRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::distance_converter::motorStatusRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::distance_converter::motorStatusRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::distance_converter::motorStatusRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::distance_converter::motorStatusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::distance_converter::motorStatusRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::distance_converter::motorStatusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "distance_converter/motorStatusRequest";
  }

  static const char* value(const ::distance_converter::motorStatusRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::distance_converter::motorStatusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::distance_converter::motorStatusRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::distance_converter::motorStatusRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct motorStatusRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::distance_converter::motorStatusRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::distance_converter::motorStatusRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DISTANCE_CONVERTER_MESSAGE_MOTORSTATUSREQUEST_H
