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
#include "CommManipulatorObjects/CommVacuumGripperEventResultACE.hh"
#include <ace/SString.h>
#include "CommManipulatorObjects/enumVacuumGraspStateData.hh"

// serialization operator for element CommVacuumGripperEventResult
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommManipulatorObjectsIDL::CommVacuumGripperEventResult &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element state
	good_bit = good_bit && cdr.write_long(data.state);
	
	return good_bit;
}

// de-serialization operator for element CommVacuumGripperEventResult
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommManipulatorObjectsIDL::CommVacuumGripperEventResult &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element state
	good_bit = good_bit && cdr.read_long(data.state);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommVacuumGripperEventResult
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommManipulatorObjects::CommVacuumGripperEventResult &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommVacuumGripperEventResult
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommManipulatorObjects::CommVacuumGripperEventResult &obj)
{
	return cdr >> obj.set();
}
