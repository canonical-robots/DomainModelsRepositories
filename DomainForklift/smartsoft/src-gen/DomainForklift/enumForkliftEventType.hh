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
#ifndef DOMAINFORKLIFT_FORKLIFTEVENTTYPE_ENUM_H_
#define DOMAINFORKLIFT_FORKLIFTEVENTTYPE_ENUM_H_

#include <DomainForklift/enumForkliftEventTypeData.hh>

#include <string>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

namespace DomainForklift {
	
	class ForkliftEventType {
	private:
		DomainForkliftIDL::ForkliftEventType value;
		
	public:
		enum ENUM_ForkliftEventType {
			ENUM_VALUE_UNDEFINED = 0,
			FORKLIFT_GOAL_UNKNOWN = 1,
			FORKLIFT_GOAL_REACHED = 2,
			FORKLIFT_GOAL_NOT_REACHED = 3
		};
		
		// default constructor
		ForkliftEventType() { 
			value = ENUM_VALUE_UNDEFINED;
		}
		
		// copy constructor for enum type
		ForkliftEventType(ENUM_ForkliftEventType e) {
			value = static_cast<int>(e);
		}
		
		// copy constructor for IDL type
		ForkliftEventType(DomainForkliftIDL::ForkliftEventType e) {
			value = e;
		}
		
		//const DomainForkliftIDL::ForkliftEventType& get() const { return value; }
		
		// ENUM operator
		operator ENUM_ForkliftEventType() const {
			return static_cast<ENUM_ForkliftEventType>(value);
		}
		
		// compare operator
		bool operator == (const ENUM_ForkliftEventType t) const {
			return this->value == t;
		}
		
		std::string to_string() const {
			std::string result = "";
			switch (value) {
				case FORKLIFT_GOAL_UNKNOWN:
					result = "ForkliftEventType::FORKLIFT_GOAL_UNKNOWN";
					break;
				case FORKLIFT_GOAL_REACHED:
					result = "ForkliftEventType::FORKLIFT_GOAL_REACHED";
					break;
				case FORKLIFT_GOAL_NOT_REACHED:
					result = "ForkliftEventType::FORKLIFT_GOAL_NOT_REACHED";
					break;
				default:
					result = "ENUM_VALUE_UNDEFINED";
					break;
			};
			return result;
		}
		
		// helper method to easily implement output stream
		void to_ostream(std::ostream &os = std::cout) const {
			os << to_string();
		}
		
		// convert to xml stream
		void to_xml(std::ostream &os, const std::string &indent = "") const {
			os << indent << "<value>" << value << "</value>";
		}
		
		// restore from xml stream
		void from_xml(std::istream &is) {
			static const Smart::KnuthMorrisPratt kmp_value("<value>");
			if(kmp_value.search(is)) {
				is >> value;
			}
		}
	
	};
	
	inline std::ostream &operator<<(std::ostream &os, const ForkliftEventType &e)
	{
		e.to_ostream(os);
		return os;
	}
};

#endif
