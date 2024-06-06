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

//// SEQUENCE ActionID


#pragma once

#include <etsi_its_cam_coding/ActionID.h>
#include <etsi_its_cam_conversion/convertStationID.h>
#include <etsi_its_cam_conversion/convertSequenceNumber.h>
#ifdef ROS1
#include <etsi_its_cam_msgs/ActionID.h>
namespace cam_msgs = etsi_its_cam_msgs;
#else
#include <etsi_its_cam_msgs/msg/action_id.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#endif


namespace etsi_its_cam_conversion {

void toRos_ActionID(const ActionID_t& in, cam_msgs::ActionID& out) {
  toRos_StationID(in.originatingStationID, out.originating_station_id);
  toRos_SequenceNumber(in.sequenceNumber, out.sequence_number);
}

void toStruct_ActionID(const cam_msgs::ActionID& in, ActionID_t& out) {
  memset(&out, 0, sizeof(ActionID_t));

  toStruct_StationID(in.originating_station_id, out.originatingStationID);
  toStruct_SequenceNumber(in.sequence_number, out.sequenceNumber);
}

}
