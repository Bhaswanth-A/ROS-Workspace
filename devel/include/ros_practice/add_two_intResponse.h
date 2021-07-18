// Generated by gencpp from file ros_practice/add_two_intResponse.msg
// DO NOT EDIT!


#ifndef ROS_PRACTICE_MESSAGE_ADD_TWO_INTRESPONSE_H
#define ROS_PRACTICE_MESSAGE_ADD_TWO_INTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_practice
{
template <class ContainerAllocator>
struct add_two_intResponse_
{
  typedef add_two_intResponse_<ContainerAllocator> Type;

  add_two_intResponse_()
    : sum(0)  {
    }
  add_two_intResponse_(const ContainerAllocator& _alloc)
    : sum(0)  {
  (void)_alloc;
    }



   typedef int64_t _sum_type;
  _sum_type sum;





  typedef boost::shared_ptr< ::ros_practice::add_two_intResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_practice::add_two_intResponse_<ContainerAllocator> const> ConstPtr;

}; // struct add_two_intResponse_

typedef ::ros_practice::add_two_intResponse_<std::allocator<void> > add_two_intResponse;

typedef boost::shared_ptr< ::ros_practice::add_two_intResponse > add_two_intResponsePtr;
typedef boost::shared_ptr< ::ros_practice::add_two_intResponse const> add_two_intResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_practice::add_two_intResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_practice::add_two_intResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_practice::add_two_intResponse_<ContainerAllocator1> & lhs, const ::ros_practice::add_two_intResponse_<ContainerAllocator2> & rhs)
{
  return lhs.sum == rhs.sum;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_practice::add_two_intResponse_<ContainerAllocator1> & lhs, const ::ros_practice::add_two_intResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_practice

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ros_practice::add_two_intResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_practice::add_two_intResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_practice::add_two_intResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_practice::add_two_intResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_practice::add_two_intResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_practice::add_two_intResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_practice::add_two_intResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b88405221c77b1878a3cbbfff53428d7";
  }

  static const char* value(const ::ros_practice::add_two_intResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb88405221c77b187ULL;
  static const uint64_t static_value2 = 0x8a3cbbfff53428d7ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_practice::add_two_intResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_practice/add_two_intResponse";
  }

  static const char* value(const ::ros_practice::add_two_intResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_practice::add_two_intResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 sum\n"
;
  }

  static const char* value(const ::ros_practice::add_two_intResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_practice::add_two_intResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sum);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct add_two_intResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_practice::add_two_intResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_practice::add_two_intResponse_<ContainerAllocator>& v)
  {
    s << indent << "sum: ";
    Printer<int64_t>::stream(s, indent + "  ", v.sum);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_PRACTICE_MESSAGE_ADD_TWO_INTRESPONSE_H
