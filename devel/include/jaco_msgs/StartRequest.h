// Generated by gencpp from file jaco_msgs/StartRequest.msg
// DO NOT EDIT!


#ifndef JACO_MSGS_MESSAGE_STARTREQUEST_H
#define JACO_MSGS_MESSAGE_STARTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace jaco_msgs
{
template <class ContainerAllocator>
struct StartRequest_
{
  typedef StartRequest_<ContainerAllocator> Type;

  StartRequest_()
    {
    }
  StartRequest_(const ContainerAllocator& _alloc)
    {
    }






  typedef boost::shared_ptr< ::jaco_msgs::StartRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jaco_msgs::StartRequest_<ContainerAllocator> const> ConstPtr;

}; // struct StartRequest_

typedef ::jaco_msgs::StartRequest_<std::allocator<void> > StartRequest;

typedef boost::shared_ptr< ::jaco_msgs::StartRequest > StartRequestPtr;
typedef boost::shared_ptr< ::jaco_msgs::StartRequest const> StartRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jaco_msgs::StartRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jaco_msgs::StartRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace jaco_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'jaco_msgs': ['/home/rae/catkin_ws/src/jaco-ros/jaco_msgs/msg', '/home/rae/catkin_ws/devel/share/jaco_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::jaco_msgs::StartRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jaco_msgs::StartRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jaco_msgs::StartRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jaco_msgs::StartRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jaco_msgs::StartRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jaco_msgs::StartRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jaco_msgs::StartRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::jaco_msgs::StartRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::jaco_msgs::StartRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jaco_msgs/StartRequest";
  }

  static const char* value(const ::jaco_msgs::StartRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jaco_msgs::StartRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::jaco_msgs::StartRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jaco_msgs::StartRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct StartRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jaco_msgs::StartRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::jaco_msgs::StartRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // JACO_MSGS_MESSAGE_STARTREQUEST_H