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
#include "CommObjectRecognitionObjects/CommImageObjectRecognitionResultsACE.hh"
#include <ace/SString.h>
#include "CommBasicObjects/CommTimeStampACE.hh"
#include "CommObjectRecognitionObjects/CommImageObjectRecognitionResultACE.hh"

// serialization operator for element CommImageObjectRecognitionResults
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommObjectRecognitionObjectsIDL::CommImageObjectRecognitionResults &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element objects
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.objects.size());
	std::vector<CommObjectRecognitionObjectsIDL::CommImageObjectRecognitionResult>::const_iterator data_objectsIt;
	for(data_objectsIt=data.objects.begin(); data_objectsIt!=data.objects.end(); data_objectsIt++) {
		good_bit = good_bit && cdr << *data_objectsIt;
	}
	// serialize list-element timestamp
	good_bit = good_bit && cdr << data.timestamp;
	// serialize list-element environmentId
	good_bit = good_bit && cdr.write_ulong(data.environmentId);
	// serialize list-element valid
	good_bit = good_bit && cdr.write_boolean(data.valid);
	
	return good_bit;
}

// de-serialization operator for element CommImageObjectRecognitionResults
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommObjectRecognitionObjectsIDL::CommImageObjectRecognitionResults &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize list-type element objects
	ACE_CDR::ULong data_objectsNbr;
	good_bit = good_bit && cdr >> data_objectsNbr;
	data.objects.clear();
	CommObjectRecognitionObjectsIDL::CommImageObjectRecognitionResult data_objectsItem;
	for(ACE_CDR::ULong i=0; i<data_objectsNbr; ++i) {
		good_bit = good_bit && cdr >> data_objectsItem;
		data.objects.push_back(data_objectsItem);
	}
	// deserialize type element timestamp
	good_bit = good_bit && cdr >> data.timestamp;
	// deserialize type element environmentId
	good_bit = good_bit && cdr.read_ulong(data.environmentId);
	// deserialize type element valid
	good_bit = good_bit && cdr.read_boolean(data.valid);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommImageObjectRecognitionResults
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommObjectRecognitionObjects::CommImageObjectRecognitionResults &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommImageObjectRecognitionResults
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommObjectRecognitionObjects::CommImageObjectRecognitionResults &obj)
{
	return cdr >> obj.set();
}