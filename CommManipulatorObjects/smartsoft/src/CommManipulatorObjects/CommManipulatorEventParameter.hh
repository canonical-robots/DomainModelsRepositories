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
#ifndef COMMMANIPULATOROBJECTS_COMMMANIPULATOREVENTPARAMETER_H_
#define COMMMANIPULATOROBJECTS_COMMMANIPULATOREVENTPARAMETER_H_

#include "CommManipulatorObjects/CommManipulatorEventParameterCore.hh"

namespace CommManipulatorObjects {
		
class CommManipulatorEventParameter : public CommManipulatorEventParameterCore {
	public:
		// default constructors
		CommManipulatorEventParameter();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommManipulatorEventParameter(const CommManipulatorObjects::ManipulatorEvent &event);
		
		CommManipulatorEventParameter(const CommManipulatorEventParameterCore &commManipulatorEventParameter);
		CommManipulatorEventParameter(const DATATYPE &commManipulatorEventParameter);
		virtual ~CommManipulatorEventParameter();
		
		// use framework specific getter and setter methods from core (base) class
		using CommManipulatorEventParameterCore::get;
		using CommManipulatorEventParameterCore::set;
		
		//
		// feel free to add customized methods here
		//

		inline ManipulatorEvent getEvent() const
		{
			return idl_CommManipulatorEventParameter.event;
		}
		inline void setEvent(const ManipulatorEvent &event)
		{
			idl_CommManipulatorEventParameter.event = event;
		}

		//
		// add your customized interface here
		//


		/**
		 * Set the event in which the user expects the component to be.
		 */
		inline void set_event(CommManipulatorObjects::ManipulatorEvent event) {
			idl_CommManipulatorEventParameter.event = event;
		}

		/**
		 * Get the event in which the user expects the component to be.
		 */
		inline CommManipulatorObjects::ManipulatorEvent get_event() const {
			return (CommManipulatorObjects::ManipulatorEvent) idl_CommManipulatorEventParameter.event;
		}
};

inline std::ostream &operator<<(std::ostream &os, const CommManipulatorEventParameter &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommManipulatorObjects */
#endif /* COMMMANIPULATOROBJECTS_COMMMANIPULATOREVENTPARAMETER_H_ */
