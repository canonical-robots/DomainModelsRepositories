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
#ifndef COMMROBOTINOOBJECTS_COMMPATHNETWORKSTATUS_ACE_H_
#define COMMROBOTINOOBJECTS_COMMPATHNETWORKSTATUS_ACE_H_

#include "CommRobotinoObjects/CommPathNetworkStatus.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommPathNetworkStatus
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjectsIDL::CommPathNetworkStatus &data);

// de-serialization operator for DataStructure CommPathNetworkStatus
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjectsIDL::CommPathNetworkStatus &data);

// serialization operator for CommunicationObject CommPathNetworkStatus
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjects::CommPathNetworkStatus &obj);

// de-serialization operator for CommunicationObject CommPathNetworkStatus
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjects::CommPathNetworkStatus &obj);

#endif /* COMMROBOTINOOBJECTS_COMMPATHNETWORKSTATUS_ACE_H_ */
