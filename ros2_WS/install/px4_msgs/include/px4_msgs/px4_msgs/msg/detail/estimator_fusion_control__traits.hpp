// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/EstimatorFusionControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_FUSION_CONTROL__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_FUSION_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/estimator_fusion_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EstimatorFusionControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: gps_intended
  {
    if (msg.gps_intended.size() == 0) {
      out << "gps_intended: []";
    } else {
      out << "gps_intended: [";
      size_t pending_items = msg.gps_intended.size();
      for (auto item : msg.gps_intended) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: of_intended
  {
    out << "of_intended: ";
    rosidl_generator_traits::value_to_yaml(msg.of_intended, out);
    out << ", ";
  }

  // member: ev_intended
  {
    out << "ev_intended: ";
    rosidl_generator_traits::value_to_yaml(msg.ev_intended, out);
    out << ", ";
  }

  // member: agp_intended
  {
    if (msg.agp_intended.size() == 0) {
      out << "agp_intended: []";
    } else {
      out << "agp_intended: [";
      size_t pending_items = msg.agp_intended.size();
      for (auto item : msg.agp_intended) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: baro_intended
  {
    out << "baro_intended: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_intended, out);
    out << ", ";
  }

  // member: rng_intended
  {
    out << "rng_intended: ";
    rosidl_generator_traits::value_to_yaml(msg.rng_intended, out);
    out << ", ";
  }

  // member: mag_intended
  {
    out << "mag_intended: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_intended, out);
    out << ", ";
  }

  // member: aspd_intended
  {
    out << "aspd_intended: ";
    rosidl_generator_traits::value_to_yaml(msg.aspd_intended, out);
    out << ", ";
  }

  // member: rngbcn_intended
  {
    out << "rngbcn_intended: ";
    rosidl_generator_traits::value_to_yaml(msg.rngbcn_intended, out);
    out << ", ";
  }

  // member: gps_active
  {
    if (msg.gps_active.size() == 0) {
      out << "gps_active: []";
    } else {
      out << "gps_active: [";
      size_t pending_items = msg.gps_active.size();
      for (auto item : msg.gps_active) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: of_active
  {
    out << "of_active: ";
    rosidl_generator_traits::value_to_yaml(msg.of_active, out);
    out << ", ";
  }

  // member: ev_active
  {
    out << "ev_active: ";
    rosidl_generator_traits::value_to_yaml(msg.ev_active, out);
    out << ", ";
  }

  // member: agp_active
  {
    if (msg.agp_active.size() == 0) {
      out << "agp_active: []";
    } else {
      out << "agp_active: [";
      size_t pending_items = msg.agp_active.size();
      for (auto item : msg.agp_active) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: baro_active
  {
    out << "baro_active: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_active, out);
    out << ", ";
  }

  // member: rng_active
  {
    out << "rng_active: ";
    rosidl_generator_traits::value_to_yaml(msg.rng_active, out);
    out << ", ";
  }

  // member: mag_active
  {
    out << "mag_active: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_active, out);
    out << ", ";
  }

  // member: aspd_active
  {
    out << "aspd_active: ";
    rosidl_generator_traits::value_to_yaml(msg.aspd_active, out);
    out << ", ";
  }

  // member: rngbcn_active
  {
    out << "rngbcn_active: ";
    rosidl_generator_traits::value_to_yaml(msg.rngbcn_active, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EstimatorFusionControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: gps_intended
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gps_intended.size() == 0) {
      out << "gps_intended: []\n";
    } else {
      out << "gps_intended:\n";
      for (auto item : msg.gps_intended) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: of_intended
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "of_intended: ";
    rosidl_generator_traits::value_to_yaml(msg.of_intended, out);
    out << "\n";
  }

  // member: ev_intended
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ev_intended: ";
    rosidl_generator_traits::value_to_yaml(msg.ev_intended, out);
    out << "\n";
  }

  // member: agp_intended
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.agp_intended.size() == 0) {
      out << "agp_intended: []\n";
    } else {
      out << "agp_intended:\n";
      for (auto item : msg.agp_intended) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: baro_intended
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_intended: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_intended, out);
    out << "\n";
  }

  // member: rng_intended
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rng_intended: ";
    rosidl_generator_traits::value_to_yaml(msg.rng_intended, out);
    out << "\n";
  }

  // member: mag_intended
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_intended: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_intended, out);
    out << "\n";
  }

  // member: aspd_intended
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aspd_intended: ";
    rosidl_generator_traits::value_to_yaml(msg.aspd_intended, out);
    out << "\n";
  }

  // member: rngbcn_intended
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rngbcn_intended: ";
    rosidl_generator_traits::value_to_yaml(msg.rngbcn_intended, out);
    out << "\n";
  }

  // member: gps_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gps_active.size() == 0) {
      out << "gps_active: []\n";
    } else {
      out << "gps_active:\n";
      for (auto item : msg.gps_active) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: of_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "of_active: ";
    rosidl_generator_traits::value_to_yaml(msg.of_active, out);
    out << "\n";
  }

  // member: ev_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ev_active: ";
    rosidl_generator_traits::value_to_yaml(msg.ev_active, out);
    out << "\n";
  }

  // member: agp_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.agp_active.size() == 0) {
      out << "agp_active: []\n";
    } else {
      out << "agp_active:\n";
      for (auto item : msg.agp_active) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: baro_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_active: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_active, out);
    out << "\n";
  }

  // member: rng_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rng_active: ";
    rosidl_generator_traits::value_to_yaml(msg.rng_active, out);
    out << "\n";
  }

  // member: mag_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_active: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_active, out);
    out << "\n";
  }

  // member: aspd_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aspd_active: ";
    rosidl_generator_traits::value_to_yaml(msg.aspd_active, out);
    out << "\n";
  }

  // member: rngbcn_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rngbcn_active: ";
    rosidl_generator_traits::value_to_yaml(msg.rngbcn_active, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EstimatorFusionControl & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_generator_traits
{

[[deprecated("use px4_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const px4_msgs::msg::EstimatorFusionControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::EstimatorFusionControl & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::EstimatorFusionControl>()
{
  return "px4_msgs::msg::EstimatorFusionControl";
}

template<>
inline const char * name<px4_msgs::msg::EstimatorFusionControl>()
{
  return "px4_msgs/msg/EstimatorFusionControl";
}

template<>
struct has_fixed_size<px4_msgs::msg::EstimatorFusionControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::EstimatorFusionControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::EstimatorFusionControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_FUSION_CONTROL__TRAITS_HPP_
