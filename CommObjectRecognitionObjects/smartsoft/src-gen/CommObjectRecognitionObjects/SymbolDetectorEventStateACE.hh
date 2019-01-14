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
#ifndef COMMOBJECTRECOGNITIONOBJECTS_SYMBOLDETECTOREVENTSTATE_ACE_H_
#define COMMOBJECTRECOGNITIONOBJECTS_SYMBOLDETECTOREVENTSTATE_ACE_H_

#include "CommObjectRecognitionObjects/SymbolDetectorEventState.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure SymbolDetectorEventState
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommObjectRecognitionObjectsIDL::SymbolDetectorEventState &data);

// de-serialization operator for DataStructure SymbolDetectorEventState
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommObjectRecognitionObjectsIDL::SymbolDetectorEventState &data);

// serialization operator for CommunicationObject SymbolDetectorEventState
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommObjectRecognitionObjects::SymbolDetectorEventState &obj);

// de-serialization operator for CommunicationObject SymbolDetectorEventState
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommObjectRecognitionObjects::SymbolDetectorEventState &obj);

#endif /* COMMOBJECTRECOGNITIONOBJECTS_SYMBOLDETECTOREVENTSTATE_ACE_H_ */