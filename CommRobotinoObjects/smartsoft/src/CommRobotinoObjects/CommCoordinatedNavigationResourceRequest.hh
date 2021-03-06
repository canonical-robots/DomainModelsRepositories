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
#ifndef COMMROBOTINOOBJECTS_COMMCOORDINATEDNAVIGATIONRESOURCEREQUEST_H_
#define COMMROBOTINOOBJECTS_COMMCOORDINATEDNAVIGATIONRESOURCEREQUEST_H_

#include "CommRobotinoObjects/CommCoordinatedNavigationResourceRequestCore.hh"

namespace CommRobotinoObjects {
		
class CommCoordinatedNavigationResourceRequest : public CommCoordinatedNavigationResourceRequestCore {
	public:
		// default constructors
		CommCoordinatedNavigationResourceRequest();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommCoordinatedNavigationResourceRequest(const int &resourceID, const int &robotID, const CommRobotinoObjects::CoordinatedNavigationResourceRequestActionType &actionType = CommRobotinoObjects::CoordinatedNavigationResourceRequestActionType());
		
		CommCoordinatedNavigationResourceRequest(const CommCoordinatedNavigationResourceRequestCore &commCoordinatedNavigationResourceRequest);
		CommCoordinatedNavigationResourceRequest(const DATATYPE &commCoordinatedNavigationResourceRequest);
		virtual ~CommCoordinatedNavigationResourceRequest();
		
		// use framework specific getter and setter methods from core (base) class
		using CommCoordinatedNavigationResourceRequestCore::get;
		using CommCoordinatedNavigationResourceRequestCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const CommCoordinatedNavigationResourceRequest &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommRobotinoObjects */
#endif /* COMMROBOTINOOBJECTS_COMMCOORDINATEDNAVIGATIONRESOURCEREQUEST_H_ */
