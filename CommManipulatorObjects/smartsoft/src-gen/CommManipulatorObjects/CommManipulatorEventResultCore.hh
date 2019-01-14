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
#ifndef COMMMANIPULATOROBJECTS_COMMMANIPULATOREVENTRESULT_CORE_H_
#define COMMMANIPULATOROBJECTS_COMMMANIPULATOREVENTRESULT_CORE_H_

#include "CommManipulatorObjects/CommManipulatorEventResultData.hh"
#include "CommManipulatorObjects/enumManipulatorEvent.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommManipulatorObjects {
	
class CommManipulatorEventResultCore {
protected:
	// data structure
	CommManipulatorObjectsIDL::CommManipulatorEventResult idl_CommManipulatorEventResult;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommManipulatorObjectsIDL::CommManipulatorEventResult DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommManipulatorEventResultCore();
	CommManipulatorEventResultCore(const DATATYPE &data);
	// default destructor
	virtual ~CommManipulatorEventResultCore();
	
	const DATATYPE& get() const { return idl_CommManipulatorEventResult; }
	operator const DATATYPE&() const { return idl_CommManipulatorEventResult; }
	DATATYPE& set() { return idl_CommManipulatorEventResult; }

	static inline std::string identifier(void) { return "CommManipulatorObjects::CommManipulatorEventResult"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Event
	inline CommManipulatorObjects::ManipulatorEvent getEvent() const { return CommManipulatorObjects::ManipulatorEvent(idl_CommManipulatorEventResult.event); }
	inline CommManipulatorEventResultCore& setEvent(const CommManipulatorObjects::ManipulatorEvent &event) { idl_CommManipulatorEventResult.event = event; return *this; }
};

} /* namespace CommManipulatorObjects */
#endif /* COMMMANIPULATOROBJECTS_COMMMANIPULATOREVENTRESULT_CORE_H_ */