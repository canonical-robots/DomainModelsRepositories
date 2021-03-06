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
#ifndef COMMNAVIGATIONOBJECTS_PLANNEREVENTSTATE_ACE_H_
#define COMMNAVIGATIONOBJECTS_PLANNEREVENTSTATE_ACE_H_

#include "CommNavigationObjects/PlannerEventState.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure PlannerEventState
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommNavigationObjectsIDL::PlannerEventState &data);

// de-serialization operator for DataStructure PlannerEventState
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommNavigationObjectsIDL::PlannerEventState &data);

// serialization operator for CommunicationObject PlannerEventState
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommNavigationObjects::PlannerEventState &obj);

// de-serialization operator for CommunicationObject PlannerEventState
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommNavigationObjects::PlannerEventState &obj);

#endif /* COMMNAVIGATIONOBJECTS_PLANNEREVENTSTATE_ACE_H_ */
