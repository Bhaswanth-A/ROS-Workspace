// Generated by gencpp from file custom_service_assignment/custom_serverRequest.msg
// DO NOT EDIT!


#ifndef CUSTOM_SERVICE_ASSIGNMENT_MESSAGE_CUSTOM_SERVERREQUEST_H
#define CUSTOM_SERVICE_ASSIGNMENT_MESSAGE_CUSTOM_SERVERREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace custom_service_assignment
{
template <class ContainerAllocator>
struct custom_serverRequest_
{
  typedef custom_serverRequest_<ContainerAllocator> Type;

  custom_serverRequest_()
    : distance(0)  {
    }
  custom_serverRequest_(const ContainerAllocator& _alloc)
    : distance(0)  {
  (void)_alloc;
    }



   typedef int32_t _distance_type;
  _distance_type distance;





  typedef boost::shared_ptr< ::custom_service_assignment::custom_serverRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::custom_service_assignment::custom_serverRequest_<ContainerAllocator> const> ConstPtr;

}; // struct custom_serverRequest_

typedef ::custom_service_assignment::custom_serverRequest_<std::allocator<void> > custom_serverRequest;

typedef boost::shared_ptr< ::custom_service_assignment::custom_serverRequest > custom_serverRequestPtr;
typedef boost::shared_ptr< ::custom_service_assignment::custom_serverRequest const> custom_serverRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::custom_service_assignment::custom_serverRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::custom_service_assignment::custom_serverRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::custom_service_assignment::custom_serverRequest_<ContainerAllocator1> & lhs, const ::custom_service_assignment::custom_serverRequest_<ContainerAllocator2> & rhs)
{
  return lhs.distance == rhs.distance;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::custom_service_assignment::custom_serverRequest_<ContainerAllocator1> & lhs, const ::custom_service_assignment::custom_serverRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace custom_service_assignment

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::custom_service_assignment::custom_serverRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::custom_service_assignment::custom_serverRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_service_assignment::custom_serverRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_service_assignment::custom_serverRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_service_assignment::custom_serverRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_service_assignment::custom_serverRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::custom_service_assignment::custom_serverRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "680f8923bb6b23ec7057fffc11ea7b34";
  }

  static const char* value(const ::custom_service_assignment::custom_serverRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x680f8923bb6b23ecULL;
  static const uint64_t static_value2 = 0x7057fffc11ea7b34ULL;
};

template<class ContainerAllocator>
struct DataType< ::custom_service_assignment::custom_serverRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "custom_service_assignment/custom_serverRequest";
  }

  static const char* value(const ::custom_service_assignment::custom_serverRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::custom_service_assignment::custom_serverRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 distance\n"
;
  }

  static const char* value(const ::custom_service_assignment::custom_serverRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::custom_service_assignment::custom_serverRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.distance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct custom_serverRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::custom_service_assignment::custom_serverRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::custom_service_assignment::custom_serverRequest_<ContainerAllocator>& v)
  {
    s << indent << "distance: ";
    Printer<int32_t>::stream(s, indent + "  ", v.distance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CUSTOM_SERVICE_ASSIGNMENT_MESSAGE_CUSTOM_SERVERREQUEST_H