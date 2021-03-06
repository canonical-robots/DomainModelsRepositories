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
#ifndef COMMMANIPULATOROBJECTS_COMMMOBILEMANIPULATORPROGRAMS_ACE_H_
#define COMMMANIPULATOROBJECTS_COMMMOBILEMANIPULATORPROGRAMS_ACE_H_

#include "CommManipulatorObjects/CommMobileManipulatorPrograms.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommMobileManipulatorPrograms
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommManipulatorObjectsIDL::CommMobileManipulatorPrograms &data);

// de-serialization operator for DataStructure CommMobileManipulatorPrograms
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommManipulatorObjectsIDL::CommMobileManipulatorPrograms &data);

// serialization operator for CommunicationObject CommMobileManipulatorPrograms
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommManipulatorObjects::CommMobileManipulatorPrograms &obj);

// de-serialization operator for CommunicationObject CommMobileManipulatorPrograms
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommManipulatorObjects::CommMobileManipulatorPrograms &obj);

#endif /* COMMMANIPULATOROBJECTS_COMMMOBILEMANIPULATORPROGRAMS_ACE_H_ */
