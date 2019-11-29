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

#include "DomainSymbolicPlanner/CommSymbolicPlannerRequest.hh"

#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescription.hpp>
#pragma once

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for DomainSymbolicPlannerIDL::CommSymbolicPlannerRequest
template <>
IDescription::shp_t SelfDescription(DomainSymbolicPlannerIDL::CommSymbolicPlannerRequest *obj, std::string name);

// serialization for CommSymbolicPlannerRequest
template <>
inline IDescription::shp_t SelfDescription(DomainSymbolicPlanner::CommSymbolicPlannerRequest *obj, std::string name)
{
	return SelfDescription(&(obj->set()),name); 
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
