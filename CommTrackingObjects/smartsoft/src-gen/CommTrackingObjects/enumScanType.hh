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
#ifndef COMMTRACKINGOBJECTS_SCANTYPE_ENUM_H_
#define COMMTRACKINGOBJECTS_SCANTYPE_ENUM_H_

#include <CommTrackingObjects/enumScanTypeData.hh>

#include <string>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

namespace CommTrackingObjects {
	
	class ScanType {
	private:
		CommTrackingObjectsIDL::ScanType value;
		
	public:
		enum ENUM_ScanType {
			ENUM_VALUE_UNDEFINED = 0,
			NONE_SCAN_TYPE = 1,
			FULL_SCAN = 2,
			SINGLE_SCAN = 3
		};
		
		// default constructor
		ScanType() { 
			value = ENUM_VALUE_UNDEFINED;
		}
		
		// copy constructor for enum type
		ScanType(ENUM_ScanType e) {
			value = static_cast<int>(e);
		}
		
		// copy constructor for IDL type
		ScanType(CommTrackingObjectsIDL::ScanType e) {
			value = e;
		}
		
		//const CommTrackingObjectsIDL::ScanType& get() const { return value; }
		
		// ENUM operator
		operator ENUM_ScanType() const {
			return static_cast<ENUM_ScanType>(value);
		}
		
		// compare operator
		bool operator == (const ENUM_ScanType t) const {
			return this->value == t;
		}
		
		std::string to_string() const {
			std::string result = "";
			switch (value) {
				case NONE_SCAN_TYPE:
					result = "ScanType::NONE_SCAN_TYPE";
					break;
				case FULL_SCAN:
					result = "ScanType::FULL_SCAN";
					break;
				case SINGLE_SCAN:
					result = "ScanType::SINGLE_SCAN";
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
	
	inline std::ostream &operator<<(std::ostream &os, const ScanType &e)
	{
		e.to_ostream(os);
		return os;
	}
};

#endif
