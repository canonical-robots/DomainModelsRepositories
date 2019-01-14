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
#include "CommObjectRecognitionObjects/CommObjectRecognitionEnvironmentACE.hh"
#include <ace/SString.h>
#include "CommObjectRecognitionObjects/CommObjectRecognitionObjectPropertiesACE.hh"

// serialization operator for element CommObjectRecognitionEnvironment
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommObjectRecognitionObjectsIDL::CommObjectRecognitionEnvironment &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element is_valid
	good_bit = good_bit && cdr.write_boolean(data.is_valid);
	// serialize list-element objects
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.objects.size());
	std::vector<CommObjectRecognitionObjectsIDL::CommObjectRecognitionObjectProperties>::const_iterator data_objectsIt;
	for(data_objectsIt=data.objects.begin(); data_objectsIt!=data.objects.end(); data_objectsIt++) {
		good_bit = good_bit && cdr << *data_objectsIt;
	}
	
	return good_bit;
}

// de-serialization operator for element CommObjectRecognitionEnvironment
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommObjectRecognitionObjectsIDL::CommObjectRecognitionEnvironment &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element is_valid
	good_bit = good_bit && cdr.read_boolean(data.is_valid);
	// deserialize list-type element objects
	ACE_CDR::ULong data_objectsNbr;
	good_bit = good_bit && cdr >> data_objectsNbr;
	data.objects.clear();
	CommObjectRecognitionObjectsIDL::CommObjectRecognitionObjectProperties data_objectsItem;
	for(ACE_CDR::ULong i=0; i<data_objectsNbr; ++i) {
		good_bit = good_bit && cdr >> data_objectsItem;
		data.objects.push_back(data_objectsItem);
	}
	
	return good_bit;
}

// serialization operator for CommunicationObject CommObjectRecognitionEnvironment
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommObjectRecognitionObjects::CommObjectRecognitionEnvironment &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommObjectRecognitionEnvironment
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommObjectRecognitionObjects::CommObjectRecognitionEnvironment &obj)
{
	return cdr >> obj.set();
}