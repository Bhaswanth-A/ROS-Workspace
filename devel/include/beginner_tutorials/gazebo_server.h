// Generated by gencpp from file beginner_tutorials/gazebo_server.msg
// DO NOT EDIT!


#ifndef BEGINNER_TUTORIALS_MESSAGE_GAZEBO_SERVER_H
#define BEGINNER_TUTORIALS_MESSAGE_GAZEBO_SERVER_H

#include <ros/service_traits.h>


#include <beginner_tutorials/gazebo_serverRequest.h>
#include <beginner_tutorials/gazebo_serverResponse.h>


namespace beginner_tutorials
{

struct gazebo_server
{

typedef gazebo_serverRequest Request;
typedef gazebo_serverResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct gazebo_server
} // namespace beginner_tutorials


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::beginner_tutorials::gazebo_server > {
  static const char* value()
  {
    return "f585dfe9780f5944bfdaecf9c4a1e42c";
  }

  static const char* value(const ::beginner_tutorials::gazebo_server&) { return value(); }
};

template<>
struct DataType< ::beginner_tutorials::gazebo_server > {
  static const char* value()
  {
    return "beginner_tutorials/gazebo_server";
  }

  static const char* value(const ::beginner_tutorials::gazebo_server&) { return value(); }
};


// service_traits::MD5Sum< ::beginner_tutorials::gazebo_serverRequest> should match
// service_traits::MD5Sum< ::beginner_tutorials::gazebo_server >
template<>
struct MD5Sum< ::beginner_tutorials::gazebo_serverRequest>
{
  static const char* value()
  {
    return MD5Sum< ::beginner_tutorials::gazebo_server >::value();
  }
  static const char* value(const ::beginner_tutorials::gazebo_serverRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::beginner_tutorials::gazebo_serverRequest> should match
// service_traits::DataType< ::beginner_tutorials::gazebo_server >
template<>
struct DataType< ::beginner_tutorials::gazebo_serverRequest>
{
  static const char* value()
  {
    return DataType< ::beginner_tutorials::gazebo_server >::value();
  }
  static const char* value(const ::beginner_tutorials::gazebo_serverRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::beginner_tutorials::gazebo_serverResponse> should match
// service_traits::MD5Sum< ::beginner_tutorials::gazebo_server >
template<>
struct MD5Sum< ::beginner_tutorials::gazebo_serverResponse>
{
  static const char* value()
  {
    return MD5Sum< ::beginner_tutorials::gazebo_server >::value();
  }
  static const char* value(const ::beginner_tutorials::gazebo_serverResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::beginner_tutorials::gazebo_serverResponse> should match
// service_traits::DataType< ::beginner_tutorials::gazebo_server >
template<>
struct DataType< ::beginner_tutorials::gazebo_serverResponse>
{
  static const char* value()
  {
    return DataType< ::beginner_tutorials::gazebo_server >::value();
  }
  static const char* value(const ::beginner_tutorials::gazebo_serverResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BEGINNER_TUTORIALS_MESSAGE_GAZEBO_SERVER_H
