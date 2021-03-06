// Generated by gencpp from file map_msgs/SaveMap.msg
// DO NOT EDIT!


#ifndef MAP_MSGS_MESSAGE_SAVEMAP_H
#define MAP_MSGS_MESSAGE_SAVEMAP_H

#include <ros/service_traits.h>


#include <map_msgs/SaveMapRequest.h>
#include <map_msgs/SaveMapResponse.h>


namespace map_msgs
{

struct SaveMap
{

typedef SaveMapRequest Request;
typedef SaveMapResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SaveMap
} // namespace map_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::map_msgs::SaveMap > {
  static const char* value()
  {
    return "716e25f9d9dc76ceba197f93cbf05dc7";
  }

  static const char* value(const ::map_msgs::SaveMap&) { return value(); }
};

template<>
struct DataType< ::map_msgs::SaveMap > {
  static const char* value()
  {
    return "map_msgs/SaveMap";
  }

  static const char* value(const ::map_msgs::SaveMap&) { return value(); }
};


// service_traits::MD5Sum< ::map_msgs::SaveMapRequest> should match
// service_traits::MD5Sum< ::map_msgs::SaveMap >
template<>
struct MD5Sum< ::map_msgs::SaveMapRequest>
{
  static const char* value()
  {
    return MD5Sum< ::map_msgs::SaveMap >::value();
  }
  static const char* value(const ::map_msgs::SaveMapRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::map_msgs::SaveMapRequest> should match
// service_traits::DataType< ::map_msgs::SaveMap >
template<>
struct DataType< ::map_msgs::SaveMapRequest>
{
  static const char* value()
  {
    return DataType< ::map_msgs::SaveMap >::value();
  }
  static const char* value(const ::map_msgs::SaveMapRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::map_msgs::SaveMapResponse> should match
// service_traits::MD5Sum< ::map_msgs::SaveMap >
template<>
struct MD5Sum< ::map_msgs::SaveMapResponse>
{
  static const char* value()
  {
    return MD5Sum< ::map_msgs::SaveMap >::value();
  }
  static const char* value(const ::map_msgs::SaveMapResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::map_msgs::SaveMapResponse> should match
// service_traits::DataType< ::map_msgs::SaveMap >
template<>
struct DataType< ::map_msgs::SaveMapResponse>
{
  static const char* value()
  {
    return DataType< ::map_msgs::SaveMap >::value();
  }
  static const char* value(const ::map_msgs::SaveMapResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MAP_MSGS_MESSAGE_SAVEMAP_H
