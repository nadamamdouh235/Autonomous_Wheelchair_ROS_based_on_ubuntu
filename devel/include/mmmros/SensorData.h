// Generated by gencpp from file mmmros/SensorData.msg
// DO NOT EDIT!


#ifndef MMMROS_MESSAGE_SENSORDATA_H
#define MMMROS_MESSAGE_SENSORDATA_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mmmros
{
template <class ContainerAllocator>
struct SensorData_
{
  typedef SensorData_<ContainerAllocator> Type;

  SensorData_()
    : leftRange(0)
    , rightRange(0)  {
    }
  SensorData_(const ContainerAllocator& _alloc)
    : leftRange(0)
    , rightRange(0)  {
  (void)_alloc;
    }



   typedef int64_t _leftRange_type;
  _leftRange_type leftRange;

   typedef int64_t _rightRange_type;
  _rightRange_type rightRange;





  typedef boost::shared_ptr< ::mmmros::SensorData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mmmros::SensorData_<ContainerAllocator> const> ConstPtr;

}; // struct SensorData_

typedef ::mmmros::SensorData_<std::allocator<void> > SensorData;

typedef boost::shared_ptr< ::mmmros::SensorData > SensorDataPtr;
typedef boost::shared_ptr< ::mmmros::SensorData const> SensorDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mmmros::SensorData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mmmros::SensorData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mmmros::SensorData_<ContainerAllocator1> & lhs, const ::mmmros::SensorData_<ContainerAllocator2> & rhs)
{
  return lhs.leftRange == rhs.leftRange &&
    lhs.rightRange == rhs.rightRange;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mmmros::SensorData_<ContainerAllocator1> & lhs, const ::mmmros::SensorData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mmmros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mmmros::SensorData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mmmros::SensorData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mmmros::SensorData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mmmros::SensorData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mmmros::SensorData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mmmros::SensorData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mmmros::SensorData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b1c36752ab3b6f5eff0925b1e6157daa";
  }

  static const char* value(const ::mmmros::SensorData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb1c36752ab3b6f5eULL;
  static const uint64_t static_value2 = 0xff0925b1e6157daaULL;
};

template<class ContainerAllocator>
struct DataType< ::mmmros::SensorData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mmmros/SensorData";
  }

  static const char* value(const ::mmmros::SensorData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mmmros::SensorData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 leftRange\n"
"int64 rightRange\n"
;
  }

  static const char* value(const ::mmmros::SensorData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mmmros::SensorData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.leftRange);
      stream.next(m.rightRange);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SensorData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mmmros::SensorData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mmmros::SensorData_<ContainerAllocator>& v)
  {
    s << indent << "leftRange: ";
    Printer<int64_t>::stream(s, indent + "  ", v.leftRange);
    s << indent << "rightRange: ";
    Printer<int64_t>::stream(s, indent + "  ", v.rightRange);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MMMROS_MESSAGE_SENSORDATA_H
