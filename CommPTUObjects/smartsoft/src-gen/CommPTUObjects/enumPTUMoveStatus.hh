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
#ifndef COMMPTUOBJECTS_PTUMOVESTATUS_ENUM_H_
#define COMMPTUOBJECTS_PTUMOVESTATUS_ENUM_H_

#include <CommPTUObjects/enumPTUMoveStatusData.hh>

#include <string>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

namespace CommPTUObjects {
	
	class PTUMoveStatus {
	private:
		CommPTUObjectsIDL::PTUMoveStatus value;
		
	public:
		enum ENUM_PTUMoveStatus {
			ENUM_VALUE_UNDEFINED = 0,
			GOAL_REACHED = 1,
			GOAL_NOT_REACHED = 2,
			TILT_OUT_OF_RANGE = 3,
			PAN_OUT_OF_RANGE = 4,
			PAN_TILT_OUT_OF_RANGE = 5,
			HALTED = 6,
			FAILURE = 7,
			UNKNOWN = 8
		};
		
		// default constructor
		PTUMoveStatus() { 
			value = ENUM_VALUE_UNDEFINED;
		}
		
		// copy constructor for enum type
		PTUMoveStatus(ENUM_PTUMoveStatus e) {
			value = static_cast<int>(e);
		}
		
		// copy constructor for IDL type
		PTUMoveStatus(CommPTUObjectsIDL::PTUMoveStatus e) {
			value = e;
		}
		
		//const CommPTUObjectsIDL::PTUMoveStatus& get() const { return value; }
		
		// ENUM operator
		operator ENUM_PTUMoveStatus() const {
			return static_cast<ENUM_PTUMoveStatus>(value);
		}
		
		// compare operator
		bool operator == (const ENUM_PTUMoveStatus t) const {
			return this->value == t;
		}
		
		std::string to_string() const {
			std::string result = "";
			switch (value) {
				case GOAL_REACHED:
					result = "PTUMoveStatus::GOAL_REACHED";
					break;
				case GOAL_NOT_REACHED:
					result = "PTUMoveStatus::GOAL_NOT_REACHED";
					break;
				case TILT_OUT_OF_RANGE:
					result = "PTUMoveStatus::TILT_OUT_OF_RANGE";
					break;
				case PAN_OUT_OF_RANGE:
					result = "PTUMoveStatus::PAN_OUT_OF_RANGE";
					break;
				case PAN_TILT_OUT_OF_RANGE:
					result = "PTUMoveStatus::PAN_TILT_OUT_OF_RANGE";
					break;
				case HALTED:
					result = "PTUMoveStatus::HALTED";
					break;
				case FAILURE:
					result = "PTUMoveStatus::FAILURE";
					break;
				case UNKNOWN:
					result = "PTUMoveStatus::UNKNOWN";
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
	
	inline std::ostream &operator<<(std::ostream &os, const PTUMoveStatus &e)
	{
		e.to_ostream(os);
		return os;
	}
};

#endif