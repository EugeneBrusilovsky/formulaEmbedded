// Generated by gencpp from file fsae_electric_vehicle/gps.msg
// DO NOT EDIT!


#ifndef FSAE_ELECTRIC_VEHICLE_MESSAGE_GPS_H
#define FSAE_ELECTRIC_VEHICLE_MESSAGE_GPS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace fsae_electric_vehicle
{
template <class ContainerAllocator>
struct gps_
{
  typedef gps_<ContainerAllocator> Type;

  gps_()
    : latitude(0.0)
    , longitude(0.0)
    , sats(0.0)
    , alt(0.0)
    , time(0.0)  {
    }
  gps_(const ContainerAllocator& _alloc)
    : latitude(0.0)
    , longitude(0.0)
    , sats(0.0)
    , alt(0.0)
    , time(0.0)  {
  (void)_alloc;
    }



   typedef float _latitude_type;
  _latitude_type latitude;

   typedef float _longitude_type;
  _longitude_type longitude;

   typedef float _sats_type;
  _sats_type sats;

   typedef float _alt_type;
  _alt_type alt;

   typedef float _time_type;
  _time_type time;





  typedef boost::shared_ptr< ::fsae_electric_vehicle::gps_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fsae_electric_vehicle::gps_<ContainerAllocator> const> ConstPtr;

}; // struct gps_

typedef ::fsae_electric_vehicle::gps_<std::allocator<void> > gps;

typedef boost::shared_ptr< ::fsae_electric_vehicle::gps > gpsPtr;
typedef boost::shared_ptr< ::fsae_electric_vehicle::gps const> gpsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::fsae_electric_vehicle::gps_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::fsae_electric_vehicle::gps_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace fsae_electric_vehicle

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'fsae_electric_vehicle': ['/home/nvidia/Github/formulaEmbedded/catkin_ws/src/fsae_electric_vehicle/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::fsae_electric_vehicle::gps_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fsae_electric_vehicle::gps_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fsae_electric_vehicle::gps_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fsae_electric_vehicle::gps_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fsae_electric_vehicle::gps_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fsae_electric_vehicle::gps_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::fsae_electric_vehicle::gps_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1b894526e44406bfa9b2c59093e9562c";
  }

  static const char* value(const ::fsae_electric_vehicle::gps_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1b894526e44406bfULL;
  static const uint64_t static_value2 = 0xa9b2c59093e9562cULL;
};

template<class ContainerAllocator>
struct DataType< ::fsae_electric_vehicle::gps_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fsae_electric_vehicle/gps";
  }

  static const char* value(const ::fsae_electric_vehicle::gps_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::fsae_electric_vehicle::gps_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 latitude\n\
float32 longitude\n\
float32 sats\n\
float32 alt\n\
float32 time\n\
";
  }

  static const char* value(const ::fsae_electric_vehicle::gps_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::fsae_electric_vehicle::gps_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.latitude);
      stream.next(m.longitude);
      stream.next(m.sats);
      stream.next(m.alt);
      stream.next(m.time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct gps_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fsae_electric_vehicle::gps_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::fsae_electric_vehicle::gps_<ContainerAllocator>& v)
  {
    s << indent << "latitude: ";
    Printer<float>::stream(s, indent + "  ", v.latitude);
    s << indent << "longitude: ";
    Printer<float>::stream(s, indent + "  ", v.longitude);
    s << indent << "sats: ";
    Printer<float>::stream(s, indent + "  ", v.sats);
    s << indent << "alt: ";
    Printer<float>::stream(s, indent + "  ", v.alt);
    s << indent << "time: ";
    Printer<float>::stream(s, indent + "  ", v.time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FSAE_ELECTRIC_VEHICLE_MESSAGE_GPS_H
