// Generated by gencpp from file jaco_msgs/SetFingersPositionFeedback.msg
// DO NOT EDIT!


#ifndef JACO_MSGS_MESSAGE_SETFINGERSPOSITIONFEEDBACK_H
#define JACO_MSGS_MESSAGE_SETFINGERSPOSITIONFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <jaco_msgs/FingerPosition.h>

namespace jaco_msgs
{
template <class ContainerAllocator>
struct SetFingersPositionFeedback_
{
  typedef SetFingersPositionFeedback_<ContainerAllocator> Type;

  SetFingersPositionFeedback_()
    : fingers()  {
    }
  SetFingersPositionFeedback_(const ContainerAllocator& _alloc)
    : fingers(_alloc)  {
    }



   typedef  ::jaco_msgs::FingerPosition_<ContainerAllocator>  _fingers_type;
  _fingers_type fingers;




  typedef boost::shared_ptr< ::jaco_msgs::SetFingersPositionFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jaco_msgs::SetFingersPositionFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct SetFingersPositionFeedback_

typedef ::jaco_msgs::SetFingersPositionFeedback_<std::allocator<void> > SetFingersPositionFeedback;

typedef boost::shared_ptr< ::jaco_msgs::SetFingersPositionFeedback > SetFingersPositionFeedbackPtr;
typedef boost::shared_ptr< ::jaco_msgs::SetFingersPositionFeedback const> SetFingersPositionFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jaco_msgs::SetFingersPositionFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jaco_msgs::SetFingersPositionFeedback_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::jaco_msgs::SetFingersPositionFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jaco_msgs::SetFingersPositionFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jaco_msgs::SetFingersPositionFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jaco_msgs::SetFingersPositionFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jaco_msgs::SetFingersPositionFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jaco_msgs::SetFingersPositionFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jaco_msgs::SetFingersPositionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bdbf88b45be6ef8cd65f0b4fc487d49d";
  }

  static const char* value(const ::jaco_msgs::SetFingersPositionFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbdbf88b45be6ef8cULL;
  static const uint64_t static_value2 = 0xd65f0b4fc487d49dULL;
};

template<class ContainerAllocator>
struct DataType< ::jaco_msgs::SetFingersPositionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jaco_msgs/SetFingersPositionFeedback";
  }

  static const char* value(const ::jaco_msgs::SetFingersPositionFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jaco_msgs::SetFingersPositionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Feedback message\n\
FingerPosition fingers\n\
\n\
\n\
================================================================================\n\
MSG: jaco_msgs/FingerPosition\n\
float32 finger1\n\
float32 finger2\n\
float32 finger3\n\
";
  }

  static const char* value(const ::jaco_msgs::SetFingersPositionFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jaco_msgs::SetFingersPositionFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.fingers);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SetFingersPositionFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jaco_msgs::SetFingersPositionFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jaco_msgs::SetFingersPositionFeedback_<ContainerAllocator>& v)
  {
    s << indent << "fingers: ";
    s << std::endl;
    Printer< ::jaco_msgs::FingerPosition_<ContainerAllocator> >::stream(s, indent + "  ", v.fingers);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JACO_MSGS_MESSAGE_SETFINGERSPOSITIONFEEDBACK_H
