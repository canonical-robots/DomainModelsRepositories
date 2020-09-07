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
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------
#ifndef COMMMANIPULATOROBJECTS_COMMMOBILEMANIPULATORPROGRAMS_H_
#define COMMMANIPULATOROBJECTS_COMMMOBILEMANIPULATORPROGRAMS_H_

#include "CommManipulatorObjects/CommMobileManipulatorProgramsCore.hh"

namespace CommManipulatorObjects {
		
class CommMobileManipulatorPrograms : public CommMobileManipulatorProgramsCore {
	public:
		// default constructors
		CommMobileManipulatorPrograms();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommMobileManipulatorPrograms(const std::vector<std::string> &names);
		
		CommMobileManipulatorPrograms(const CommMobileManipulatorProgramsCore &commMobileManipulatorPrograms);
		CommMobileManipulatorPrograms(const DATATYPE &commMobileManipulatorPrograms);
		virtual ~CommMobileManipulatorPrograms();
		
		// use framework specific getter and setter methods from core (base) class
		using CommMobileManipulatorProgramsCore::get;
		using CommMobileManipulatorProgramsCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const CommMobileManipulatorPrograms &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommManipulatorObjects */
#endif /* COMMMANIPULATOROBJECTS_COMMMOBILEMANIPULATORPROGRAMS_H_ */
