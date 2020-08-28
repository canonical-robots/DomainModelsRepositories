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
#ifndef COMMOBJECTRECOGNITIONOBJECTS_COMMIMAGEOBJECTRECOGNITIONRESULT_ACE_H_
#define COMMOBJECTRECOGNITIONOBJECTS_COMMIMAGEOBJECTRECOGNITIONRESULT_ACE_H_

#include "CommObjectRecognitionObjects/CommImageObjectRecognitionResult.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommImageObjectRecognitionResult
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommObjectRecognitionObjectsIDL::CommImageObjectRecognitionResult &data);

// de-serialization operator for DataStructure CommImageObjectRecognitionResult
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommObjectRecognitionObjectsIDL::CommImageObjectRecognitionResult &data);

// serialization operator for CommunicationObject CommImageObjectRecognitionResult
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommObjectRecognitionObjects::CommImageObjectRecognitionResult &obj);

// de-serialization operator for CommunicationObject CommImageObjectRecognitionResult
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommObjectRecognitionObjects::CommImageObjectRecognitionResult &obj);

#endif /* COMMOBJECTRECOGNITIONOBJECTS_COMMIMAGEOBJECTRECOGNITIONRESULT_ACE_H_ */