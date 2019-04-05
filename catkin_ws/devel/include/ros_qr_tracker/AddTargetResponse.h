// Generated by gencpp from file ros_qr_tracker/AddTargetResponse.msg
// DO NOT EDIT!


#ifndef ROS_QR_TRACKER_MESSAGE_ADDTARGETRESPONSE_H
#define ROS_QR_TRACKER_MESSAGE_ADDTARGETRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_qr_tracker
{
template <class ContainerAllocator>
struct AddTargetResponse_
{
  typedef AddTargetResponse_<ContainerAllocator> Type;

  AddTargetResponse_()
    {
    }
  AddTargetResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::ros_qr_tracker::AddTargetResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_qr_tracker::AddTargetResponse_<ContainerAllocator> const> ConstPtr;

}; // struct AddTargetResponse_

typedef ::ros_qr_tracker::AddTargetResponse_<std::allocator<void> > AddTargetResponse;

typedef boost::shared_ptr< ::ros_qr_tracker::AddTargetResponse > AddTargetResponsePtr;
typedef boost::shared_ptr< ::ros_qr_tracker::AddTargetResponse const> AddTargetResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_qr_tracker::AddTargetResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_qr_tracker::AddTargetResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_qr_tracker

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'ros_qr_tracker': ['/ros/catkin_ws/src/ros_qr_tracker/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_qr_tracker::AddTargetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_qr_tracker::AddTargetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_qr_tracker::AddTargetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_qr_tracker::AddTargetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_qr_tracker::AddTargetResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_qr_tracker::AddTargetResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_qr_tracker::AddTargetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::ros_qr_tracker::AddTargetResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_qr_tracker::AddTargetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_qr_tracker/AddTargetResponse";
  }

  static const char* value(const ::ros_qr_tracker::AddTargetResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_qr_tracker::AddTargetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::ros_qr_tracker::AddTargetResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_qr_tracker::AddTargetResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddTargetResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_qr_tracker::AddTargetResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::ros_qr_tracker::AddTargetResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // ROS_QR_TRACKER_MESSAGE_ADDTARGETRESPONSE_H
