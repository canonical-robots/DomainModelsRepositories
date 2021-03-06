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
#ifndef COMMBASICOBJECTS_COMMBASEPOSITIONUPDATE_ACE_H_
#define COMMBASICOBJECTS_COMMBASEPOSITIONUPDATE_ACE_H_

#include "CommBasicObjects/CommBasePositionUpdate.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommBasePositionUpdate
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommBasicObjectsIDL::CommBasePositionUpdate &data);

// de-serialization operator for DataStructure CommBasePositionUpdate
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommBasicObjectsIDL::CommBasePositionUpdate &data);

// serialization operator for CommunicationObject CommBasePositionUpdate
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommBasicObjects::CommBasePositionUpdate &obj);

// de-serialization operator for CommunicationObject CommBasePositionUpdate
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommBasicObjects::CommBasePositionUpdate &obj);

#endif /* COMMBASICOBJECTS_COMMBASEPOSITIONUPDATE_ACE_H_ */
