// Generated by gencpp from file jaco_msgs/Start.msg
// DO NOT EDIT!


#ifndef JACO_MSGS_MESSAGE_START_H
#define JACO_MSGS_MESSAGE_START_H

#include <ros/service_traits.h>


#include <jaco_msgs/StartRequest.h>
#include <jaco_msgs/StartResponse.h>


namespace jaco_msgs
{

struct Start
{

typedef StartRequest Request;
typedef StartResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Start
} // namespace jaco_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::jaco_msgs::Start > {
  static const char* value()
  {
    return "e762e31d813526eaaa6a12e8354174fc";
  }

  static const char* value(const ::jaco_msgs::Start&) { return value(); }
};

template<>
struct DataType< ::jaco_msgs::Start > {
  static const char* value()
  {
    return "jaco_msgs/Start";
  }

  static const char* value(const ::jaco_msgs::Start&) { return value(); }
};


// service_traits::MD5Sum< ::jaco_msgs::StartRequest> should match 
// service_traits::MD5Sum< ::jaco_msgs::Start > 
template<>
struct MD5Sum< ::jaco_msgs::StartRequest>
{
  static const char* value()
  {
    return MD5Sum< ::jaco_msgs::Start >::value();
  }
  static const char* value(const ::jaco_msgs::StartRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::jaco_msgs::StartRequest> should match 
// service_traits::DataType< ::jaco_msgs::Start > 
template<>
struct DataType< ::jaco_msgs::StartRequest>
{
  static const char* value()
  {
    return DataType< ::jaco_msgs::Start >::value();
  }
  static const char* value(const ::jaco_msgs::StartRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::jaco_msgs::StartResponse> should match 
// service_traits::MD5Sum< ::jaco_msgs::Start > 
template<>
struct MD5Sum< ::jaco_msgs::StartResponse>
{
  static const char* value()
  {
    return MD5Sum< ::jaco_msgs::Start >::value();
  }
  static const char* value(const ::jaco_msgs::StartResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::jaco_msgs::StartResponse> should match 
// service_traits::DataType< ::jaco_msgs::Start > 
template<>
struct DataType< ::jaco_msgs::StartResponse>
{
  static const char* value()
  {
    return DataType< ::jaco_msgs::Start >::value();
  }
  static const char* value(const ::jaco_msgs::StartResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // JACO_MSGS_MESSAGE_START_H
