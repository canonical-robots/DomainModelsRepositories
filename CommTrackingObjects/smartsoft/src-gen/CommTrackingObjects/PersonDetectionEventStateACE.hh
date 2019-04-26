//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Service Robotics Research Center
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// Please do not modify this file. It will be re-generated
// running the code generator.
//--------------------------------------------------------------------------
#ifndef COMMTRACKINGOBJECTS_PERSONDETECTIONEVENTSTATE_ACE_H_
#define COMMTRACKINGOBJECTS_PERSONDETECTIONEVENTSTATE_ACE_H_

#include "CommTrackingObjects/PersonDetectionEventState.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure PersonDetectionEventState
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommTrackingObjectsIDL::PersonDetectionEventState &data);

// de-serialization operator for DataStructure PersonDetectionEventState
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommTrackingObjectsIDL::PersonDetectionEventState &data);

// serialization operator for CommunicationObject PersonDetectionEventState
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommTrackingObjects::PersonDetectionEventState &obj);

// de-serialization operator for CommunicationObject PersonDetectionEventState
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommTrackingObjects::PersonDetectionEventState &obj);

#endif /* COMMTRACKINGOBJECTS_PERSONDETECTIONEVENTSTATE_ACE_H_ */