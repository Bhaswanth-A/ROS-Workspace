// Generated by gencpp from file beginner_tutorials/counterResult.msg
// DO NOT EDIT!


#ifndef BEGINNER_TUTORIALS_MESSAGE_COUNTERRESULT_H
#define BEGINNER_TUTORIALS_MESSAGE_COUNTERRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace beginner_tutorials
{
template <class ContainerAllocator>
struct counterResult_
{
  typedef counterResult_<ContainerAllocator> Type;

  counterResult_()
    : result_message()  {
    }
  counterResult_(const ContainerAllocator& _alloc)
    : result_message(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _result_message_type;
  _result_message_type result_message;





  typedef boost::shared_ptr< ::beginner_tutorials::counterResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::beginner_tutorials::counterResult_<ContainerAllocator> const> ConstPtr;

}; // struct counterResult_

typedef ::beginner_tutorials::counterResult_<std::allocator<void> > counterResult;

typedef boost::shared_ptr< ::beginner_tutorials::counterResult > counterResultPtr;
typedef boost::shared_ptr< ::beginner_tutorials::counterResult const> counterResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::beginner_tutorials::counterResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::beginner_tutorials::counterResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::beginner_tutorials::counterResult_<ContainerAllocator1> & lhs, const ::beginner_tutorials::counterResult_<ContainerAllocator2> & rhs)
{
  return lhs.result_message == rhs.result_message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::beginner_tutorials::counterResult_<ContainerAllocator1> & lhs, const ::beginner_tutorials::counterResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace beginner_tutorials

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::counterResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::counterResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::counterResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::counterResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::counterResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::counterResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::beginner_tutorials::counterResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "be8a5eb8699d93f379b287dcfc6e376c";
  }

  static const char* value(const ::beginner_tutorials::counterResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbe8a5eb8699d93f3ULL;
  static const uint64_t static_value2 = 0x79b287dcfc6e376cULL;
};

template<class ContainerAllocator>
struct DataType< ::beginner_tutorials::counterResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "beginner_tutorials/counterResult";
  }

  static const char* value(const ::beginner_tutorials::counterResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::beginner_tutorials::counterResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Result\n"
"string result_message\n"
;
  }

  static const char* value(const ::beginner_tutorials::counterResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::beginner_tutorials::counterResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result_message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct counterResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::beginner_tutorials::counterResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::beginner_tutorials::counterResult_<ContainerAllocator>& v)
  {
    s << indent << "result_message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.result_message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEGINNER_TUTORIALS_MESSAGE_COUNTERRESULT_H
