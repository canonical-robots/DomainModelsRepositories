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
#ifndef COMMLOCALIZATIONOBJECTS_COMMLOCALIZATIONZONERESULT_ACE_H_
#define COMMLOCALIZATIONOBJECTS_COMMLOCALIZATIONZONERESULT_ACE_H_

#include "CommLocalizationObjects/CommLocalizationZoneResult.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommLocalizationZoneResult
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommLocalizationObjectsIDL::CommLocalizationZoneResult &data);

// de-serialization operator for DataStructure CommLocalizationZoneResult
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommLocalizationObjectsIDL::CommLocalizationZoneResult &data);

// serialization operator for CommunicationObject CommLocalizationZoneResult
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommLocalizationObjects::CommLocalizationZoneResult &obj);

// de-serialization operator for CommunicationObject CommLocalizationZoneResult
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommLocalizationObjects::CommLocalizationZoneResult &obj);

#endif /* COMMLOCALIZATIONOBJECTS_COMMLOCALIZATIONZONERESULT_ACE_H_ */