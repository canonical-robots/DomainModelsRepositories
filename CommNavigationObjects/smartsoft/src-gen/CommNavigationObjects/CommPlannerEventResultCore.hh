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
#ifndef COMMNAVIGATIONOBJECTS_COMMPLANNEREVENTRESULT_CORE_H_
#define COMMNAVIGATIONOBJECTS_COMMPLANNEREVENTRESULT_CORE_H_

#include "CommNavigationObjects/CommPlannerEventResultData.hh"
#include "CommNavigationObjects/enumPlannerEventType.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommNavigationObjects {
	
class CommPlannerEventResultCore {
protected:
	// data structure
	CommNavigationObjectsIDL::CommPlannerEventResult idl_CommPlannerEventResult;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommNavigationObjectsIDL::CommPlannerEventResult DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommPlannerEventResultCore();
	CommPlannerEventResultCore(const DATATYPE &data);
	// default destructor
	virtual ~CommPlannerEventResultCore();
	
	const DATATYPE& get() const { return idl_CommPlannerEventResult; }
	operator const DATATYPE&() const { return idl_CommPlannerEventResult; }
	DATATYPE& set() { return idl_CommPlannerEventResult; }

	static inline std::string identifier(void) { return "CommNavigationObjects::CommPlannerEventResult"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element State
	inline CommNavigationObjects::PlannerEventType getState() const { return CommNavigationObjects::PlannerEventType(idl_CommPlannerEventResult.state); }
	inline CommPlannerEventResultCore& setState(const CommNavigationObjects::PlannerEventType &state) { idl_CommPlannerEventResult.state = state; return *this; }
};

} /* namespace CommNavigationObjects */
#endif /* COMMNAVIGATIONOBJECTS_COMMPLANNEREVENTRESULT_CORE_H_ */