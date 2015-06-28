// Generated by gencpp from file ur_msgs/SetIO.msg
// DO NOT EDIT!


#ifndef UR_MSGS_MESSAGE_SETIO_H
#define UR_MSGS_MESSAGE_SETIO_H

#include <ros/service_traits.h>


#include <ur_msgs/SetIORequest.h>
#include <ur_msgs/SetIOResponse.h>


namespace ur_msgs
{

struct SetIO
{

typedef SetIORequest Request;
typedef SetIOResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetIO
} // namespace ur_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ur_msgs::SetIO > {
  static const char* value()
  {
    return "9891d388d5518ebedde6430899d4897a";
  }

  static const char* value(const ::ur_msgs::SetIO&) { return value(); }
};

template<>
struct DataType< ::ur_msgs::SetIO > {
  static const char* value()
  {
    return "ur_msgs/SetIO";
  }

  static const char* value(const ::ur_msgs::SetIO&) { return value(); }
};


// service_traits::MD5Sum< ::ur_msgs::SetIORequest> should match 
// service_traits::MD5Sum< ::ur_msgs::SetIO > 
template<>
struct MD5Sum< ::ur_msgs::SetIORequest>
{
  static const char* value()
  {
    return MD5Sum< ::ur_msgs::SetIO >::value();
  }
  static const char* value(const ::ur_msgs::SetIORequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ur_msgs::SetIORequest> should match 
// service_traits::DataType< ::ur_msgs::SetIO > 
template<>
struct DataType< ::ur_msgs::SetIORequest>
{
  static const char* value()
  {
    return DataType< ::ur_msgs::SetIO >::value();
  }
  static const char* value(const ::ur_msgs::SetIORequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ur_msgs::SetIOResponse> should match 
// service_traits::MD5Sum< ::ur_msgs::SetIO > 
template<>
struct MD5Sum< ::ur_msgs::SetIOResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ur_msgs::SetIO >::value();
  }
  static const char* value(const ::ur_msgs::SetIOResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ur_msgs::SetIOResponse> should match 
// service_traits::DataType< ::ur_msgs::SetIO > 
template<>
struct DataType< ::ur_msgs::SetIOResponse>
{
  static const char* value()
  {
    return DataType< ::ur_msgs::SetIO >::value();
  }
  static const char* value(const ::ur_msgs::SetIOResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // UR_MSGS_MESSAGE_SETIO_H
