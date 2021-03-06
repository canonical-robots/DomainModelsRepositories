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
#ifndef COMMBASICOBJECTS_COMMDIGITALINPUTEVENTPARAMETER_CORE_H_
#define COMMBASICOBJECTS_COMMDIGITALINPUTEVENTPARAMETER_CORE_H_

#include "CommBasicObjects/CommDigitalInputEventParameterData.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommBasicObjects {
	
class CommDigitalInputEventParameterCore {
protected:
	// data structure
	CommBasicObjectsIDL::CommDigitalInputEventParameter idl_CommDigitalInputEventParameter;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommBasicObjectsIDL::CommDigitalInputEventParameter DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommDigitalInputEventParameterCore();
	CommDigitalInputEventParameterCore(const DATATYPE &data);
	// default destructor
	virtual ~CommDigitalInputEventParameterCore();
	
	const DATATYPE& get() const { return idl_CommDigitalInputEventParameter; }
	operator const DATATYPE&() const { return idl_CommDigitalInputEventParameter; }
	DATATYPE& set() { return idl_CommDigitalInputEventParameter; }

	static inline std::string identifier(void) { return "CommBasicObjects::CommDigitalInputEventParameter"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element DigitalInputValuesNumber
	inline unsigned int getDigitalInputValuesNumber() const { return idl_CommDigitalInputEventParameter.digitalInputValuesNumber; }
	inline CommDigitalInputEventParameterCore& setDigitalInputValuesNumber(const unsigned int &digitalInputValuesNumber) { idl_CommDigitalInputEventParameter.digitalInputValuesNumber = digitalInputValuesNumber; return *this; }
	
	// getter and setter for element DigitalInputValue
	inline bool getDigitalInputValue() const { return idl_CommDigitalInputEventParameter.digitalInputValue; }
	inline CommDigitalInputEventParameterCore& setDigitalInputValue(const bool &digitalInputValue) { idl_CommDigitalInputEventParameter.digitalInputValue = digitalInputValue; return *this; }
};

} /* namespace CommBasicObjects */
#endif /* COMMBASICOBJECTS_COMMDIGITALINPUTEVENTPARAMETER_CORE_H_ */
