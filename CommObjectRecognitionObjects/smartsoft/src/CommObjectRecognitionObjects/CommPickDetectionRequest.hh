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
#ifndef COMMOBJECTRECOGNITIONOBJECTS_COMMPICKDETECTIONREQUEST_H_
#define COMMOBJECTRECOGNITIONOBJECTS_COMMPICKDETECTIONREQUEST_H_

#include "CommObjectRecognitionObjects/CommPickDetectionRequestCore.hh"

namespace CommObjectRecognitionObjects {
		
class CommPickDetectionRequest : public CommPickDetectionRequestCore {
	public:
		// default constructors
		CommPickDetectionRequest();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommPickDetectionRequest(const std::string &workspaceID, const std::string &pickmodelID);
		
		CommPickDetectionRequest(const CommPickDetectionRequestCore &commPickDetectionRequest);
		CommPickDetectionRequest(const DATATYPE &commPickDetectionRequest);
		virtual ~CommPickDetectionRequest();
		
		// use framework specific getter and setter methods from core (base) class
		using CommPickDetectionRequestCore::get;
		using CommPickDetectionRequestCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const CommPickDetectionRequest &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommObjectRecognitionObjects */
#endif /* COMMOBJECTRECOGNITIONOBJECTS_COMMPICKDETECTIONREQUEST_H_ */
