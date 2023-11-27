// Generated by gencpp from file swarm_robot_srv/two_wheel_robot_updateRequest.msg
// DO NOT EDIT!


#ifndef SWARM_ROBOT_SRV_MESSAGE_TWO_WHEEL_ROBOT_UPDATEREQUEST_H
#define SWARM_ROBOT_SRV_MESSAGE_TWO_WHEEL_ROBOT_UPDATEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace swarm_robot_srv
{
template <class ContainerAllocator>
struct two_wheel_robot_updateRequest_
{
  typedef two_wheel_robot_updateRequest_<ContainerAllocator> Type;

  two_wheel_robot_updateRequest_()
    : update_code(0)
    , add_mode(false)
    , half_range(0.0)
    , position_2d()  {
    }
  two_wheel_robot_updateRequest_(const ContainerAllocator& _alloc)
    : update_code(0)
    , add_mode(false)
    , half_range(0.0)
    , position_2d(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _update_code_type;
  _update_code_type update_code;

   typedef uint8_t _add_mode_type;
  _add_mode_type add_mode;

   typedef double _half_range_type;
  _half_range_type half_range;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _position_2d_type;
  _position_2d_type position_2d;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(CODE_DELETE)
  #undef CODE_DELETE
#endif
#if defined(_WIN32) && defined(CODE_DELETE_ALL)
  #undef CODE_DELETE_ALL
#endif
#if defined(_WIN32) && defined(CODE_ADD)
  #undef CODE_ADD
#endif
#if defined(_WIN32) && defined(ADD_MODE_RANDOM)
  #undef ADD_MODE_RANDOM
#endif
#if defined(_WIN32) && defined(ADD_MODE_SPECIFIED)
  #undef ADD_MODE_SPECIFIED
#endif

  enum {
    CODE_DELETE = -1,
    CODE_DELETE_ALL = 0,
    CODE_ADD = 1,
  };

  static const uint8_t ADD_MODE_RANDOM;
  static const uint8_t ADD_MODE_SPECIFIED;

  typedef boost::shared_ptr< ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct two_wheel_robot_updateRequest_

typedef ::swarm_robot_srv::two_wheel_robot_updateRequest_<std::allocator<void> > two_wheel_robot_updateRequest;

typedef boost::shared_ptr< ::swarm_robot_srv::two_wheel_robot_updateRequest > two_wheel_robot_updateRequestPtr;
typedef boost::shared_ptr< ::swarm_robot_srv::two_wheel_robot_updateRequest const> two_wheel_robot_updateRequestConstPtr;

// constants requiring out of line definition

   

   

   

   
   template<typename ContainerAllocator> const uint8_t
      two_wheel_robot_updateRequest_<ContainerAllocator>::ADD_MODE_RANDOM =
        
           0
        
        ;
   

   
   template<typename ContainerAllocator> const uint8_t
      two_wheel_robot_updateRequest_<ContainerAllocator>::ADD_MODE_SPECIFIED =
        
           1
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator1> & lhs, const ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator2> & rhs)
{
  return lhs.update_code == rhs.update_code &&
    lhs.add_mode == rhs.add_mode &&
    lhs.half_range == rhs.half_range &&
    lhs.position_2d == rhs.position_2d;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator1> & lhs, const ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace swarm_robot_srv

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b978865709518e2d2dfdb9ff9f97d3ea";
  }

  static const char* value(const ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb978865709518e2dULL;
  static const uint64_t static_value2 = 0x2dfdb9ff9f97d3eaULL;
};

template<class ContainerAllocator>
struct DataType< ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "swarm_robot_srv/two_wheel_robot_updateRequest";
  }

  static const char* value(const ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# service message to add or delete two wheel robot model in gazebo\n"
"\n"
"# service request how-to:\n"
"# update_code >= CODE_ADD, add one robot\n"
"    # add_mode == ADD_MODE_RANDOM, add this robot at random position\n"
"        # specify the value of half_range\n"
"    # add_mode == ADD_MODE_SPECIFIED, add this robot at specified position\n"
"        # specify the value of position_2d\n"
"# update_code == CODE_DELETE_ALL, delete all robots\n"
"# update_code <= CODE_DELETE, delete robots a totoal number of abs(update_code)\n"
"\n"
"\n"
"# request constants\n"
"int32 CODE_DELETE = -1\n"
"int32 CODE_DELETE_ALL = 0\n"
"int32 CODE_ADD = 1\n"
"# first letter of True and False should be capitalized\n"
"bool ADD_MODE_RANDOM = False\n"
"bool ADD_MODE_SPECIFIED = True\n"
"# request fields\n"
"# sign indicates add or delete, absolute value means quantity\n"
"# 0 represents delete all\n"
"int32 update_code\n"
"bool add_mode\n"
"# the distribution when randomly adding a robot\n"
"float64 half_range\n"
"# the position when specifically adding a robot\n"
"float64[] position_2d\n"
;
  }

  static const char* value(const ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.update_code);
      stream.next(m.add_mode);
      stream.next(m.half_range);
      stream.next(m.position_2d);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct two_wheel_robot_updateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::swarm_robot_srv::two_wheel_robot_updateRequest_<ContainerAllocator>& v)
  {
    s << indent << "update_code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.update_code);
    s << indent << "add_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.add_mode);
    s << indent << "half_range: ";
    Printer<double>::stream(s, indent + "  ", v.half_range);
    s << indent << "position_2d[]" << std::endl;
    for (size_t i = 0; i < v.position_2d.size(); ++i)
    {
      s << indent << "  position_2d[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.position_2d[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SWARM_ROBOT_SRV_MESSAGE_TWO_WHEEL_ROBOT_UPDATEREQUEST_H
