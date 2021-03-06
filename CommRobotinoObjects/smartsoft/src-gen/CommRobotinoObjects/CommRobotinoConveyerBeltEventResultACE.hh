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
#ifndef COMMROBOTINOOBJECTS_COMMROBOTINOCONVEYERBELTEVENTRESULT_ACE_H_
#define COMMROBOTINOOBJECTS_COMMROBOTINOCONVEYERBELTEVENTRESULT_ACE_H_

#include "CommRobotinoObjects/CommRobotinoConveyerBeltEventResult.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommRobotinoConveyerBeltEventResult
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjectsIDL::CommRobotinoConveyerBeltEventResult &data);

// de-serialization operator for DataStructure CommRobotinoConveyerBeltEventResult
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjectsIDL::CommRobotinoConveyerBeltEventResult &data);

// serialization operator for CommunicationObject CommRobotinoConveyerBeltEventResult
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjects::CommRobotinoConveyerBeltEventResult &obj);

// de-serialization operator for CommunicationObject CommRobotinoConveyerBeltEventResult
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjects::CommRobotinoConveyerBeltEventResult &obj);

#endif /* COMMROBOTINOOBJECTS_COMMROBOTINOCONVEYERBELTEVENTRESULT_ACE_H_ */
