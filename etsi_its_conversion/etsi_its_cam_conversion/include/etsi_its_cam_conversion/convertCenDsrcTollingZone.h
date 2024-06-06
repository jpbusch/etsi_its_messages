/** ============================================================================
MIT License

Copyright (c) 2023 Institute for Automotive Engineering (ika), RWTH Aachen University
Copyright (c) 2024 Instituto de Telecomunicações, Universidade de Aveiro

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
============================================================================= */

// --- Auto-generated by asn1ToConversionHeader.py -----------------------------

//// SEQUENCE CenDsrcTollingZone


#pragma once

#include <etsi_its_cam_coding/CenDsrcTollingZone.h>
#include <etsi_its_cam_conversion/convertCenDsrcTollingZoneID.h>
#include <etsi_its_cam_conversion/convertLatitude.h>
#include <etsi_its_cam_conversion/convertLongitude.h>
#ifdef ROS1
#include <etsi_its_cam_msgs/CenDsrcTollingZone.h>
namespace cam_msgs = etsi_its_cam_msgs;
#else
#include <etsi_its_cam_msgs/msg/cen_dsrc_tolling_zone.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#endif


namespace etsi_its_cam_conversion {

void toRos_CenDsrcTollingZone(const CenDsrcTollingZone_t& in, cam_msgs::CenDsrcTollingZone& out) {
  toRos_Latitude(in.protectedZoneLatitude, out.protected_zone_latitude);
  toRos_Longitude(in.protectedZoneLongitude, out.protected_zone_longitude);
  if (in.cenDsrcTollingZoneID) {
    toRos_CenDsrcTollingZoneID(*in.cenDsrcTollingZoneID, out.cen_dsrc_tolling_zone_id);
    out.cen_dsrc_tolling_zone_id_is_present = true;
  }
}

void toStruct_CenDsrcTollingZone(const cam_msgs::CenDsrcTollingZone& in, CenDsrcTollingZone_t& out) {
  memset(&out, 0, sizeof(CenDsrcTollingZone_t));

  toStruct_Latitude(in.protected_zone_latitude, out.protectedZoneLatitude);
  toStruct_Longitude(in.protected_zone_longitude, out.protectedZoneLongitude);
  if (in.cen_dsrc_tolling_zone_id_is_present) {
    out.cenDsrcTollingZoneID = (CenDsrcTollingZoneID_t*) calloc(1, sizeof(CenDsrcTollingZoneID_t));
    toStruct_CenDsrcTollingZoneID(in.cen_dsrc_tolling_zone_id, *out.cenDsrcTollingZoneID);
  }
}

}
