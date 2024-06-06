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

//// SEQUENCE PosConfidenceEllipse


#pragma once

#include <etsi_its_cam_coding/PosConfidenceEllipse.h>
#include <etsi_its_cam_conversion/convertSemiAxisLength.h>
#include <etsi_its_cam_conversion/convertHeadingValue.h>
#ifdef ROS1
#include <etsi_its_cam_msgs/PosConfidenceEllipse.h>
namespace cam_msgs = etsi_its_cam_msgs;
#else
#include <etsi_its_cam_msgs/msg/pos_confidence_ellipse.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#endif


namespace etsi_its_cam_conversion {

void toRos_PosConfidenceEllipse(const PosConfidenceEllipse_t& in, cam_msgs::PosConfidenceEllipse& out) {
  toRos_SemiAxisLength(in.semiMajorConfidence, out.semi_major_confidence);
  toRos_SemiAxisLength(in.semiMinorConfidence, out.semi_minor_confidence);
  toRos_HeadingValue(in.semiMajorOrientation, out.semi_major_orientation);
}

void toStruct_PosConfidenceEllipse(const cam_msgs::PosConfidenceEllipse& in, PosConfidenceEllipse_t& out) {
  memset(&out, 0, sizeof(PosConfidenceEllipse_t));

  toStruct_SemiAxisLength(in.semi_major_confidence, out.semiMajorConfidence);
  toStruct_SemiAxisLength(in.semi_minor_confidence, out.semiMinorConfidence);
  toStruct_HeadingValue(in.semi_major_orientation, out.semiMajorOrientation);
}

}
