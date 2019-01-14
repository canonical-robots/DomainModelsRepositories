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
#include "CommObjectRecognitionObjects/CommOcrIdACE.hh"
#include <ace/SString.h>

// serialization operator for element CommOcrId
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommObjectRecognitionObjectsIDL::CommOcrId &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element environment_id
	good_bit = good_bit && cdr.write_long(data.environment_id);
	
	return good_bit;
}

// de-serialization operator for element CommOcrId
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommObjectRecognitionObjectsIDL::CommOcrId &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element environment_id
	good_bit = good_bit && cdr.read_long(data.environment_id);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommOcrId
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommObjectRecognitionObjects::CommOcrId &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommOcrId
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommObjectRecognitionObjects::CommOcrId &obj)
{
	return cdr >> obj.set();
}