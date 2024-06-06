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

//// TYPEALIAS CenDsrcTollingZoneID


#pragma once

#include <etsi_its_denm_coding/CenDsrcTollingZoneID.h>
#include <etsi_its_denm_conversion/convertProtectedZoneID.h>
#ifdef ROS1
#include <etsi_its_denm_msgs/CenDsrcTollingZoneID.h>
namespace denm_msgs = etsi_its_denm_msgs;
#else
#include <etsi_its_denm_msgs/msg/cen_dsrc_tolling_zone_id.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#endif


namespace etsi_its_denm_conversion {

void toRos_CenDsrcTollingZoneID(const CenDsrcTollingZoneID_t& in, denm_msgs::CenDsrcTollingZoneID& out) {
  toRos_ProtectedZoneID(in, out.value);
}

void toStruct_CenDsrcTollingZoneID(const denm_msgs::CenDsrcTollingZoneID& in, CenDsrcTollingZoneID_t& out) {
  memset(&out, 0, sizeof(CenDsrcTollingZoneID_t));

  toStruct_ProtectedZoneID(in.value, out);
}

}
